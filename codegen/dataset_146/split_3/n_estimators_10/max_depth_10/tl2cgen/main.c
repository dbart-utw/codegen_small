
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
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)65) ) ) {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)64) ) ) {
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
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)74) ) ) {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)52) ) ) {
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
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)56.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)78.5) ) ) {
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
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)64.5) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)71) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)53.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61) ) ) {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)79.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)65) ) ) {
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
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)70.5) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)60.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)67.5) ) ) {
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
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)89.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                } else {
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)72.5) ) ) {
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
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)69) ) ) {
                if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)76) ) ) {
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
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)51) ) ) {
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
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)55) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)69.5) ) ) {
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)78) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                } else {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
                    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)66) ) ) {
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
                }
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)82.5) ) ) {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)85.5) ) ) {
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
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)72.5) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)71.5) ) ) {
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
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73.5) ) ) {
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
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)91) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)57) ) ) {
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)58.5) ) ) {
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
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)69) ) ) {
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
                      result[3] += 0.05389221556886228;
                      result[4] += 0.011976047904191617;
                      result[5] += 0.9341317365269461;
                    }
                  } else {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
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
                      result[4] += 0;
                      result[5] += 0.8888888888888888;
                    }
                  }
                }
              } else {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)70.5) ) ) {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)69) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.8333333333333334;
                      result[4] += 0;
                      result[5] += 0.16666666666666666;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.16666666666666666;
                      result[4] += 0;
                      result[5] += 0.8333333333333334;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)67.5) ) ) {
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
                      result[3] += 0.4482758620689655;
                      result[4] += 0;
                      result[5] += 0.5517241379310345;
                    }
                  }
                } else {
                  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)89) ) ) {
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
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)102) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)93.5) ) ) {
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
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)81) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)65) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)67) ) ) {
                if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)76) ) ) {
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
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78) ) ) {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)77) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)69) ) ) {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)69.5) ) ) {
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
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)69) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.125;
                      result[4] += 0;
                      result[5] += 0.875;
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
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)102) ) ) {
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
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)68.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)81.5) ) ) {
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
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)82) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)61) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)94) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)88) ) ) {
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
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)65.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)68.5) ) ) {
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69) ) ) {
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
            }
          } else {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)74.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                } else {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)77.5) ) ) {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.9716981132075472;
                      result[4] += 0;
                      result[5] += 0.02830188679245283;
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
                if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)90) ) ) {
                  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)90.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73) ) ) {
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
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)70.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)90) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                } else {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)70.5) ) ) {
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
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)53.5) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)88) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)49) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80) ) ) {
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
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)107) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)58) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)97.5) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)60.5) ) ) {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)66) ) ) {
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
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
                if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)98) ) ) {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)46.5) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)51) ) ) {
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
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)54.5) ) ) {
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
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)44) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)76) ) ) {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)61.5) ) ) {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)55) ) ) {
                  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)50.5) ) ) {
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
                  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)82.5) ) ) {
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
                if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)50.5) ) ) {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)55.5) ) ) {
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
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)116) ) ) {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)76) ) ) {
                      result[0] += 0.02654867256637168;
                      result[1] += 0.008849557522123894;
                      result[2] += 0;
                      result[3] += 0.02654867256637168;
                      result[4] += 0.9380530973451328;
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
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)60.5) ) ) {
                if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77.5) ) ) {
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
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)59.5) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)76.5) ) ) {
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
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)101) ) ) {
                    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)80.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.2;
                      result[5] += 0.8;
                    } else {
                      result[0] += 0.14285714285714288;
                      result[1] += 0;
                      result[2] += 0.5714285714285715;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0.28571428571428575;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91) ) ) {
                      result[0] += 0;
                      result[1] += 0.2;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.8;
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
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)62) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)77) ) ) {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)77) ) ) {
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
                      result[3] += 0;
                      result[4] += 1;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)69.5) ) ) {
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
                      result[4] += 0.6;
                      result[5] += 0.4;
                    }
                  }
                } else {
                  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)77.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)99) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.8333333333333334;
                      result[4] += 0;
                      result[5] += 0.16666666666666666;
                    } else {
                      result[0] += 0.75;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.25;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)70.5) ) ) {
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)54) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)52) ) ) {
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
                    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)88.5) ) ) {
                      result[0] += 0.5;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
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
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)86.5) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)77) ) ) {
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
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)57) ) ) {
                      result[0] += 0;
                      result[1] += 0.5714285714285714;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.42857142857142855;
                      result[5] += 0;
                    } else {
                      result[0] += 0.969017094017094;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.005341880341880342;
                      result[4] += 0.024572649572649572;
                      result[5] += 0.0010683760683760685;
                    }
                  }
                }
              } else {
                if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)107.5) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)77) ) ) {
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
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)99.5) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)89) ) ) {
                if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)72.5) ) ) {
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)46.5) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.9090909090909091;
                      result[5] += 0.09090909090909091;
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
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)67) ) ) {
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)107.5) ) ) {
                      result[0] += 0.6;
                      result[1] += 0.2;
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
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.09090909090909091;
                      result[4] += 0;
                      result[5] += 0.9090909090909091;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.07352941176470588;
                      result[3] += 0.6470588235294118;
                      result[4] += 0;
                      result[5] += 0.27941176470588236;
                    }
                  }
                }
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)100.5) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)89.5) ) ) {
                    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)105) ) ) {
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
                    result[3] += 0;
                    result[4] += 1;
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
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)112.5) ) ) {
                if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)94.5) ) ) {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)92) ) ) {
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
                  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)102.5) ) ) {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)94.5) ) ) {
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
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.125;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0.875;
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
              } else {
                if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)89.5) ) ) {
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)89) ) ) {
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
            }
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)90.5) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)72) ) ) {
                if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)54.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)69) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)80) ) ) {
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
                if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)69.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)74.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
                      result[0] += 0.3333333333333333;
                      result[1] += 0;
                      result[2] += 0;
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
                  }
                }
              }
            } else {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)114.5) ) ) {
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)87) ) ) {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)87.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.02564102564102564;
                      result[3] += 0.5128205128205128;
                      result[4] += 0.02564102564102564;
                      result[5] += 0.4358974358974359;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.1506849315068493;
                      result[3] += 0.7397260273972602;
                      result[4] += 0;
                      result[5] += 0.1095890410958904;
                    }
                  } else {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75) ) ) {
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
                  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
                    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)107) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0.8333333333333334;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.16666666666666666;
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
                if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)110) ) ) {
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
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)94.5) ) ) {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)79.5) ) ) {
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
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.4;
                      result[3] += 0.6;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.7428571428571429;
                      result[3] += 0.17142857142857143;
                      result[4] += 0;
                      result[5] += 0.08571428571428572;
                    }
                  }
                } else {
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)94) ) ) {
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
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)67.5) ) ) {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)70.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)87.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)92) ) ) {
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
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)72.5) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)102) ) ) {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)87) ) ) {
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
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)77) ) ) {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)105) ) ) {
                    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)102.5) ) ) {
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
                } else {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)103.5) ) ) {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.5625;
                      result[3] += 0.4375;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0.009389671361502348;
                      result[2] += 0.863849765258216;
                      result[3] += 0.107981220657277;
                      result[4] += 0;
                      result[5] += 0.018779342723004695;
                    }
                  } else {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
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
              } else {
                if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)120.5) ) ) {
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
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)87.5) ) ) {
                    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.36363636363636365;
                      result[3] += 0.6363636363636364;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.9097744360902256;
                      result[3] += 0.08646616541353383;
                      result[4] += 0;
                      result[5] += 0.0037593984962406013;
                    }
                  } else {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)97.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.9970588235294118;
                      result[3] += 0.0029411764705882353;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0.08108108108108109;
                      result[1] += 0;
                      result[2] += 0.8648648648648649;
                      result[3] += 0.05405405405405406;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)56.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)51) ) ) {
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
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)95.5) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)62.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)60) ) ) {
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
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)53.5) ) ) {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)67) ) ) {
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
              } else {
                if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)76.5) ) ) {
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
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)58.5) ) ) {
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
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)66.5) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)90) ) ) {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)75.5) ) ) {
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
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)67) ) ) {
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
                if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)95) ) ) {
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
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)59.5) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)64) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
                  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)48.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73) ) ) {
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
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)84.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101) ) ) {
                      result[0] += 0.2;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.2;
                      result[4] += 0.4;
                      result[5] += 0.2;
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
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
                if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)88.5) ) ) {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)49) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)86.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.0074850299401197605;
                      result[4] += 0.0074850299401197605;
                      result[5] += 0.9850299401197605;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.2;
                      result[4] += 0.4;
                      result[5] += 0.4;
                    }
                  }
                } else {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
                    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)63.5) ) ) {
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
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.0847457627118644;
                      result[4] += 0;
                      result[5] += 0.9152542372881356;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.15625;
                      result[4] += 0.25;
                      result[5] += 0.59375;
                    }
                  }
                }
              } else {
                if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)83.5) ) ) {
                  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)64) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)72) ) ) {
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
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)69) ) ) {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)66.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 1;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0.06666666666666667;
                      result[2] += 0;
                      result[3] += 0.7333333333333333;
                      result[4] += 0;
                      result[5] += 0.2;
                    }
                  } else {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)70.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.5294117647058824;
                      result[4] += 0.058823529411764705;
                      result[5] += 0.4117647058823529;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.18421052631578946;
                      result[4] += 0;
                      result[5] += 0.8157894736842105;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)91.5) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)82) ) ) {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)75) ) ) {
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
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)76) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
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
                      result[3] += 0.6;
                      result[4] += 0;
                      result[5] += 0.4;
                    }
                  }
                }
              } else {
                if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)70.5) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)86) ) ) {
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
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  }
                } else {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)89.5) ) ) {
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
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)67.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)75) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)65) ) ) {
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
              }
            }
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)74.5) ) ) {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)74.5) ) ) {
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
                  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)81.5) ) ) {
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
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)65.5) ) ) {
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
                if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)80) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)70.5) ) ) {
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)82.5) ) ) {
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
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)75.5) ) ) {
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
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)99) ) ) {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)91.5) ) ) {
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)95) ) ) {
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
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)63) ) ) {
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
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)102.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)104.5) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)80) ) ) {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)61.5) ) ) {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 1;
                      result[5] += 0;
                    } else {
                      result[0] += 0.9354838709677419;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.06451612903225806;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)76) ) ) {
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)72.5) ) ) {
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
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
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
                }
              } else {
                if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)72.5) ) ) {
                  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)107) ) ) {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)81.5) ) ) {
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
                    result[4] += 1;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)83.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)98.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.1724137931034483;
                      result[4] += 0;
                      result[5] += 0.8275862068965517;
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
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)68.5) ) ) {
                if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)97) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69) ) ) {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)102.5) ) ) {
                      result[0] += 0.03125;
                      result[1] += 0.015625;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.953125;
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
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)58) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0.09090909090909091;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.09090909090909091;
                      result[4] += 0.8181818181818182;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)53.5) ) ) {
                    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)119) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
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
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)59.5) ) ) {
                    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)64.5) ) ) {
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
                    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)67.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.6666666666666666;
                      result[4] += 0.3333333333333333;
                      result[5] += 0;
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
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)81.5) ) ) {
                      result[0] += 0.25;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.5;
                      result[5] += 0.25;
                    } else {
                      result[0] += 0.9596273291925466;
                      result[1] += 0.002070393374741201;
                      result[2] += 0;
                      result[3] += 0.005175983436853002;
                      result[4] += 0.032091097308488616;
                      result[5] += 0.0010351966873706005;
                    }
                  } else {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
                      result[0] += 0;
                      result[1] += 0.04347826086956522;
                      result[2] += 0.13043478260869568;
                      result[3] += 0.5217391304347827;
                      result[4] += 0.08695652173913045;
                      result[5] += 0.2173913043478261;
                    } else {
                      result[0] += 0.7976190476190477;
                      result[1] += 0;
                      result[2] += 0.011904761904761904;
                      result[3] += 0;
                      result[4] += 0.19047619047619047;
                      result[5] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)81) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)105.5) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)79) ) ) {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)60) ) ) {
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
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)100.5) ) ) {
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
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)88.5) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)97.5) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)88.5) ) ) {
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)82) ) ) {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)76) ) ) {
                    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
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
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)104.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.7;
                      result[4] += 0.15;
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
                } else {
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)74.5) ) ) {
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
                  } else {
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)80.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.1951219512195122;
                      result[4] += 0;
                      result[5] += 0.8048780487804879;
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
                if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)103) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)106.5) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)88) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 1;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.027777777777777776;
                      result[3] += 0.8611111111111112;
                      result[4] += 0;
                      result[5] += 0.1111111111111111;
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
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)113) ) ) {
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
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)81) ) ) {
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
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
                if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
                  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)91) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)95.5) ) ) {
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
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)95.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.038461538461538464;
                      result[3] += 0.75;
                      result[4] += 0.019230769230769232;
                      result[5] += 0.19230769230769232;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.45454545454545453;
                      result[3] += 0.5454545454545454;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)94.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
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
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)88.5) ) ) {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)80) ) ) {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65) ) ) {
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
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93.5) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)102) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
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
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.92;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0.08;
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
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)98.5) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)109) ) ) {
                if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
                      result[0] += 0.4;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.4;
                      result[4] += 0.2;
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
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)112) ) ) {
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)110.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)65) ) ) {
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
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)116.5) ) ) {
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
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)106.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)76.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)100.5) ) ) {
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
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)102) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)87.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)89.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)94.5) ) ) {
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)95) ) ) {
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
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)95.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)102.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97) ) ) {
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
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)74) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)112.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)69.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)116) ) ) {
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
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)76.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87) ) ) {
                if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)87) ) ) {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80) ) ) {
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)98.5) ) ) {
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
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)86.5) ) ) {
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
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)85.5) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)108.5) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)82.5) ) ) {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)83) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)119.5) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)81) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 1;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.8793103448275862;
                      result[3] += 0.1206896551724138;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)118) ) ) {
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
                if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)98) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)111) ) ) {
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
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)105) ) ) {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.375;
                      result[3] += 0.625;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.8;
                      result[3] += 0.08;
                      result[4] += 0;
                      result[5] += 0.12;
                    }
                  } else {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)103) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.7777777777777778;
                      result[3] += 0.2222222222222222;
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
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)111.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)89.5) ) ) {
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
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)106.5) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)114.5) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
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
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)80.5) ) ) {
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
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)87.5) ) ) {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)84) ) ) {
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
                if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)87.5) ) ) {
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
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)100.5) ) ) {
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
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)131) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)83.5) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)86) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)88) ) ) {
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
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)99.5) ) ) {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)103) ) ) {
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
                }
              }
            }
          } else {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)112.5) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)85.5) ) ) {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)102.5) ) ) {
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)84) ) ) {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)102.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
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
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)81) ) ) {
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
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)103.5) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)101) ) ) {
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
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)89.5) ) ) {
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
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
                    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)106) ) ) {
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
                      result[2] += 0.9607843137254902;
                      result[3] += 0.0392156862745098;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
                if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)117) ) ) {
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
                if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)90.5) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)88.5) ) ) {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)89) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.7142857142857143;
                      result[3] += 0.2857142857142857;
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
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)95) ) ) {
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
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)104.5) ) ) {
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
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)74) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)88.5) ) ) {
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
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
                if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)104.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)108.5) ) ) {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)85.5) ) ) {
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
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85) ) ) {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)90) ) ) {
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
                if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)119) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)83.5) ) ) {
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
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)42.5) ) ) {
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
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)79.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)78.5) ) ) {
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
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)76) ) ) {
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)69.5) ) ) {
                if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)50.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)66.5) ) ) {
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)90.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.0035335689045936395;
                      result[4] += 0;
                      result[5] += 0.9964664310954063;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
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
                      result[3] += 0.05333333333333334;
                      result[4] += 0.02666666666666667;
                      result[5] += 0.92;
                    }
                  }
                }
              } else {
                if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77.5) ) ) {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)66) ) ) {
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
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)82) ) ) {
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
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)68) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)76) ) ) {
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
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)57) ) ) {
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
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)68.5) ) ) {
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
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)86) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)46.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)69.5) ) ) {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91) ) ) {
                      result[0] += 0;
                      result[1] += 0.010362694300518135;
                      result[2] += 0;
                      result[3] += 0.05699481865284974;
                      result[4] += 0.06217616580310881;
                      result[5] += 0.8704663212435233;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 1;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)70.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.4444444444444444;
                      result[5] += 0.5555555555555556;
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
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)69.5) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)67.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
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
                      result[3] += 0;
                      result[4] += 1;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)80) ) ) {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)53) ) ) {
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
                      result[3] += 0.2191780821917808;
                      result[4] += 0;
                      result[5] += 0.7808219178082192;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)86) ) ) {
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
                      result[3] += 0.7857142857142857;
                      result[4] += 0.14285714285714285;
                      result[5] += 0.07142857142857142;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
                if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)86) ) ) {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)75.5) ) ) {
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
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)69) ) ) {
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
                      result[3] += 0.2857142857142857;
                      result[4] += 0;
                      result[5] += 0.7142857142857143;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)78) ) ) {
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)71.5) ) ) {
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
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)95.5) ) ) {
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
                      result[4] += 0.5;
                      result[5] += 0.5;
                    }
                  }
                }
              } else {
                if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)97) ) ) {
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
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)42.5) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)78) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)70) ) ) {
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
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)76.5) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)39.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)48) ) ) {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)65) ) ) {
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
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
                      result[0] += 0.75;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.25;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0.1;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.9;
                      result[5] += 0;
                    }
                  }
                }
              }
            } else {
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
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)56.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
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
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)106) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)75.5) ) ) {
                if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)56) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)82) ) ) {
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
              } else {
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)45) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)52.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75) ) ) {
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
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)54.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
                      result[0] += 0;
                      result[1] += 0.125;
                      result[2] += 0;
                      result[3] += 0.25;
                      result[4] += 0;
                      result[5] += 0.625;
                    } else {
                      result[0] += 0.1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.9;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)113) ) ) {
                      result[0] += 0.9690721649484536;
                      result[1] += 0.0010309278350515464;
                      result[2] += 0;
                      result[3] += 0.006185567010309278;
                      result[4] += 0.018556701030927835;
                      result[5] += 0.005154639175257732;
                    } else {
                      result[0] += 0.5;
                      result[1] += 0.08333333333333333;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.4166666666666667;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
                      result[0] += 0.10714285714285714;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.21428571428571427;
                      result[4] += 0.42857142857142855;
                      result[5] += 0.25;
                    } else {
                      result[0] += 0.9523809523809523;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.047619047619047616;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)95.5) ) ) {
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)81) ) ) {
                      result[0] += 0;
                      result[1] += 0.8;
                      result[2] += 0;
                      result[3] += 0.2;
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
                    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)91) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 1;
                      result[5] += 0;
                    } else {
                      result[0] += 0.17647058823529413;
                      result[1] += 0.11764705882352941;
                      result[2] += 0;
                      result[3] += 0.4117647058823529;
                      result[4] += 0.29411764705882354;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)89) ) ) {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)94.5) ) ) {
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
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
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
            }
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)102.5) ) ) {
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
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
                if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)69) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
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
                      result[1] += 0.01282051282051282;
                      result[2] += 0.038461538461538464;
                      result[3] += 0.46153846153846156;
                      result[4] += 0;
                      result[5] += 0.48717948717948717;
                    }
                  }
                }
              } else {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)85) ) ) {
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78) ) ) {
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
                  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)92.5) ) ) {
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)90.5) ) ) {
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
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79) ) ) {
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
                  }
                }
              }
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)77) ) ) {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
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
                      result[3] += 0.6;
                      result[4] += 0;
                      result[5] += 0.4;
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
                if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
                  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)73) ) ) {
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
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89.5) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)95.5) ) ) {
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)71.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)108) ) ) {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)92.5) ) ) {
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
                      result[3] += 0.7777777777777778;
                      result[4] += 0;
                      result[5] += 0.2222222222222222;
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
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)99) ) ) {
                    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 1;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.8333333333333334;
                      result[3] += 0.08333333333333333;
                      result[4] += 0;
                      result[5] += 0.08333333333333333;
                    }
                  } else {
                    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)96.5) ) ) {
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
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)74) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)92) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.3333333333333333;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0.6666666666666666;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.9534883720930233;
                      result[3] += 0.046511627906976744;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)99.5) ) ) {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)116) ) ) {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)89) ) ) {
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)93) ) ) {
                      result[0] += 0.125;
                      result[1] += 0;
                      result[2] += 0.875;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0.5714285714285714;
                      result[1] += 0;
                      result[2] += 0.2857142857142857;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0.14285714285714285;
                    }
                  } else {
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)93.5) ) ) {
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
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)75) ) ) {
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
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)105.5) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85) ) ) {
                  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)81.5) ) ) {
                    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)98.5) ) ) {
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
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)83) ) ) {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)79) ) ) {
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
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)79.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.9615384615384616;
                      result[4] += 0;
                      result[5] += 0.038461538461538464;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.6470588235294118;
                      result[4] += 0;
                      result[5] += 0.35294117647058826;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 1;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.1;
                      result[3] += 0.9;
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
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)89.5) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)67.5) ) ) {
                if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)72) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87) ) ) {
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
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)88.5) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)76.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
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
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)105.5) ) ) {
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
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)59.5) ) ) {
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
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)93) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)101) ) ) {
                if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)75.5) ) ) {
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
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)86) ) ) {
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
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)113) ) ) {
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
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)105.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)99) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)81.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)75) ) ) {
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
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)101) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101) ) ) {
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
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)83) ) ) {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)76.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)91) ) ) {
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
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)107.5) ) ) {
                if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)86) ) ) {
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
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)90.5) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)96.5) ) ) {
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)103) ) ) {
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
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)103) ) ) {
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)87.5) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)103.5) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)97) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)87.5) ) ) {
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.8947368421052632;
                      result[3] += 0.10526315789473684;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)94.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.8;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0.2;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.9647058823529412;
                      result[3] += 0.023529411764705882;
                      result[4] += 0;
                      result[5] += 0.011764705882352941;
                    }
                  }
                } else {
                  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)102.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.7391304347826086;
                      result[3] += 0.2608695652173913;
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
            } else {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)108.5) ) ) {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)90.5) ) ) {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)89) ) ) {
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
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)86.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.4;
                      result[3] += 0.6;
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
              } else {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)88.5) ) ) {
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)91.5) ) ) {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)101) ) ) {
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
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)110.5) ) ) {
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
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)93) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)77.5) ) ) {
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
                if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)95) ) ) {
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
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)106.5) ) ) {
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
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)120.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)115.5) ) ) {
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
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)98.5) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)88) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
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
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)99.5) ) ) {
                if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)101) ) ) {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)104.5) ) ) {
                    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)106) ) ) {
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
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)86.5) ) ) {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)81) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.5;
                      result[3] += 0.5;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.9473684210526315;
                      result[3] += 0.05263157894736842;
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
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)114) ) ) {
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)96.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)112) ) ) {
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
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)88.5) ) ) {
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
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)69) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)68.5) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)72.5) ) ) {
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
                if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)70.5) ) ) {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)70.5) ) ) {
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
            } else {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)76.5) ) ) {
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
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)76.5) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
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
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
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
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)90.5) ) ) {
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)71) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)66) ) ) {
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
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)64.5) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)84) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)62.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)76) ) ) {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65.5) ) ) {
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)69) ) ) {
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
                    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
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
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)95.5) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)95.5) ) ) {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)64) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)71.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.010309278350515464;
                      result[4] += 0.010309278350515464;
                      result[5] += 0.979381443298969;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.14814814814814814;
                      result[4] += 0;
                      result[5] += 0.8518518518518519;
                    }
                  } else {
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)89.5) ) ) {
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
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
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
            } else {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
                if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)93) ) ) {
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
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            }
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)56.5) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)59) ) ) {
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
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)89.5) ) ) {
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)67) ) ) {
                  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)83.5) ) ) {
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
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)65.5) ) ) {
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)70.5) ) ) {
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
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                }
              }
            } else {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
                if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)69) ) ) {
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)66.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)65.5) ) ) {
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
                } else {
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)55.5) ) ) {
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
                if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)67.5) ) ) {
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)65.5) ) ) {
                      result[0] += 0;
                      result[1] += 0.020202020202020204;
                      result[2] += 0;
                      result[3] += 0.08080808080808081;
                      result[4] += 0.08080808080808081;
                      result[5] += 0.8181818181818182;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.04;
                      result[4] += 0.6;
                      result[5] += 0.36;
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
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)70.5) ) ) {
                      result[0] += 0;
                      result[1] += 0.08333333333333333;
                      result[2] += 0;
                      result[3] += 0.8333333333333334;
                      result[4] += 0;
                      result[5] += 0.08333333333333333;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.007751937984496124;
                      result[3] += 0.27906976744186046;
                      result[4] += 0.007751937984496124;
                      result[5] += 0.7054263565891473;
                    }
                  } else {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)67.5) ) ) {
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
            }
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)69) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)61.5) ) ) {
                if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)87.5) ) ) {
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
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
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
                  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)75.5) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)74) ) ) {
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
                      result[3] += 0.875;
                      result[4] += 0;
                      result[5] += 0.125;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
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
              }
            }
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
                if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)69.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)68.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
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
                if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)98.5) ) ) {
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)60.5) ) ) {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)90) ) ) {
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
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)84.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.42857142857142855;
                      result[4] += 0;
                      result[5] += 0.5714285714285714;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.952054794520548;
                      result[4] += 0;
                      result[5] += 0.04794520547945205;
                    }
                  }
                } else {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)88) ) ) {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)61) ) ) {
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
                    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)72.5) ) ) {
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
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)75) ) ) {
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
                if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100) ) ) {
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
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)95) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)91.5) ) ) {
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
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)74.5) ) ) {
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
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)36.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)55) ) ) {
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
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)99.5) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)63.5) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)41.5) ) ) {
                if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)102.5) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)111.5) ) ) {
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
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)58.5) ) ) {
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
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
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
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
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)69.5) ) ) {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)91) ) ) {
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)57) ) ) {
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
                if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)105.5) ) ) {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)109) ) ) {
                    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
                      result[0] += 0;
                      result[1] += 0.375;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.625;
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
                  result[0] += 0;
                  result[1] += 1;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)46.5) ) ) {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)62) ) ) {
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
                if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)86.5) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)66) ) ) {
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
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)78) ) ) {
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
                  }
                } else {
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)71) ) ) {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)91) ) ) {
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
                }
              }
            }
          } else {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)70.5) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)63.5) ) ) {
                if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)66.5) ) ) {
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
                if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78) ) ) {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)86.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 1;
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
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)69.5) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)72) ) ) {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)90) ) ) {
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
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)74) ) ) {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0.2777777777777778;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.7222222222222222;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
                      result[0] += 0.9827784156142365;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.016073478760045924;
                      result[5] += 0.001148105625717566;
                    } else {
                      result[0] += 0.7291666666666667;
                      result[1] += 0;
                      result[2] += 0.04166666666666667;
                      result[3] += 0.04166666666666667;
                      result[4] += 0.10416666666666669;
                      result[5] += 0.08333333333333334;
                    }
                  }
                } else {
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)92) ) ) {
                      result[0] += 0.2;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.8;
                      result[5] += 0;
                    } else {
                      result[0] += 0.8;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.2;
                      result[5] += 0;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)86.5) ) ) {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)70.5) ) ) {
                if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)78) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72) ) ) {
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
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)88.5) ) ) {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.9285714285714286;
                      result[4] += 0;
                      result[5] += 0.07142857142857142;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.25;
                      result[4] += 0;
                      result[5] += 0.75;
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
              }
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
                if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)70.5) ) ) {
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
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
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
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
                if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)78) ) ) {
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
                }
              }
            }
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)63.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)91) ) ) {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)89) ) ) {
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
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)65) ) ) {
                if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)86.5) ) ) {
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
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)99.5) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)90) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)82) ) ) {
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
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
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
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)101) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)103) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)88.5) ) ) {
                  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)96.5) ) ) {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.2;
                      result[4] += 0.2;
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
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)82) ) ) {
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
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)92) ) ) {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)94.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.07142857142857142;
                      result[3] += 0.8928571428571429;
                      result[4] += 0;
                      result[5] += 0.03571428571428571;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.375;
                      result[3] += 0.59375;
                      result[4] += 0;
                      result[5] += 0.03125;
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
                if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)83) ) ) {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)110) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.3684210526315789;
                      result[3] += 0.05263157894736842;
                      result[4] += 0;
                      result[5] += 0.5789473684210527;
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
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)76) ) ) {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85) ) ) {
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
            }
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)97.5) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)99) ) ) {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)97.5) ) ) {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)69) ) ) {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)91.5) ) ) {
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
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)76) ) ) {
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
                      result[3] += 0.08333333333333333;
                      result[4] += 0;
                      result[5] += 0.9166666666666666;
                    }
                  }
                } else {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79) ) ) {
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
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)102.5) ) ) {
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
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)121) ) ) {
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)71) ) ) {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)109) ) ) {
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
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)102.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.9333333333333333;
                      result[3] += 0.06666666666666667;
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
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)69.5) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)68) ) ) {
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
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
                if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)87) ) ) {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
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
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)99) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)98.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.08333333333333333;
                      result[3] += 0.9166666666666666;
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
              } else {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                } else {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)113) ) ) {
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
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)95) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)121) ) ) {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)107) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.926829268292683;
                      result[3] += 0.036585365853658534;
                      result[4] += 0;
                      result[5] += 0.036585365853658534;
                    } else {
                      result[0] += 0.009803921568627453;
                      result[1] += 0;
                      result[2] += 0.7941176470588236;
                      result[3] += 0.19607843137254904;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)90) ) ) {
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
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)89) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81.5) ) ) {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)118.5) ) ) {
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
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)87.5) ) ) {
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
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93.5) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)72.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)80) ) ) {
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
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)86.5) ) ) {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)109.5) ) ) {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)77) ) ) {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
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
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)112) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.9607843137254902;
                      result[3] += 0.0392156862745098;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0.3333333333333333;
                      result[1] += 0;
                      result[2] += 0.16666666666666666;
                      result[3] += 0.5;
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
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)105) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)109.5) ) ) {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)111.5) ) ) {
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
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)74.5) ) ) {
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
                if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)110.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)111.5) ) ) {
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
                  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
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
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.9375;
                      result[3] += 0.0625;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.9896049896049897;
                      result[3] += 0.010395010395010396;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)81.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)49.5) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)50) ) ) {
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
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)70.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
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
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)40) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)57.5) ) ) {
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
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)75.5) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)93.5) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61) ) ) {
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
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)61) ) ) {
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
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)82.5) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)51) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)74) ) ) {
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
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)47) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)81) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                } else {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)72.5) ) ) {
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
            }
          } else {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77.5) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101) ) ) {
                if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)78.5) ) ) {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)71.5) ) ) {
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
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74) ) ) {
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
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)64.5) ) ) {
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
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)97) ) ) {
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
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)66.5) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)82) ) ) {
                if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)64.5) ) ) {
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
                if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)63) ) ) {
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
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)66.5) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
                if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)74) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                } else {
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)60) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)70.5) ) ) {
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
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)54) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)54) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)101) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.0034782608695652175;
                      result[4] += 0;
                      result[5] += 0.9965217391304347;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.5;
                      result[5] += 0.5;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)69) ) ) {
                if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)84) ) ) {
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)83) ) ) {
                    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)69.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.07142857142857142;
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
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)77) ) ) {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)69) ) ) {
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
                      result[3] += 0.6;
                      result[4] += 0;
                      result[5] += 0.4;
                    }
                  } else {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)85.5) ) ) {
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
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)76) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)64.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)85) ) ) {
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
                      result[4] += 0;
                      result[5] += 1;
                    }
                  }
                } else {
                  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
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
                      result[3] += 0.18181818181818182;
                      result[4] += 0;
                      result[5] += 0.8181818181818182;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)72.5) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
                if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)65) ) ) {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)68.5) ) ) {
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
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)67.5) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
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
              } else {
                if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)89) ) ) {
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
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78) ) ) {
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
                      result[4] += 0.75;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)86) ) ) {
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
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)97.5) ) ) {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)71.5) ) ) {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)57.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)92) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.06896551724137931;
                      result[4] += 0;
                      result[5] += 0.9310344827586207;
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
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)93.5) ) ) {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)73.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.5714285714285714;
                      result[5] += 0.42857142857142855;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.08333333333333333;
                      result[4] += 0;
                      result[5] += 0.9166666666666666;
                    }
                  } else {
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)82) ) ) {
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
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)63.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)85) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
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
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)71.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)88.5) ) ) {
                if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)86) ) ) {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)75) ) ) {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)67) ) ) {
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
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  }
                } else {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)71) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 1;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.125;
                      result[3] += 0.375;
                      result[4] += 0.125;
                      result[5] += 0.375;
                    }
                  } else {
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)92.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.25;
                      result[3] += 0.25;
                      result[4] += 0;
                      result[5] += 0.5;
                    }
                  }
                }
              } else {
                if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)70.5) ) ) {
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)66.5) ) ) {
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
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)69) ) ) {
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
                }
              }
            } else {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)107) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)76) ) ) {
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
            }
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)85.5) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)86.5) ) ) {
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)89.5) ) ) {
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
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)88) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)85) ) ) {
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
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)74.5) ) ) {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)83.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.45454545454545453;
                      result[4] += 0;
                      result[5] += 0.5454545454545454;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.9719626168224299;
                      result[4] += 0;
                      result[5] += 0.028037383177570093;
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
                if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)74) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)66.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.14285714285714285;
                      result[4] += 0;
                      result[5] += 0.8571428571428571;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.7857142857142857;
                      result[4] += 0;
                      result[5] += 0.21428571428571427;
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
          } else {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)91.5) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
                if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)93.5) ) ) {
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)78) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)86) ) ) {
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
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)68.5) ) ) {
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
                if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)57.5) ) ) {
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)60.5) ) ) {
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
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                }
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)76) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)97) ) ) {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)103) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)74) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.75;
                      result[5] += 0.25;
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
                  result[1] += 1;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)86) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.058823529411764705;
                      result[3] += 0.5882352941176471;
                      result[4] += 0;
                      result[5] += 0.35294117647058826;
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
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)86.5) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)100.5) ) ) {
                      result[0] += 0.04081632653061224;
                      result[1] += 0;
                      result[2] += 0.10204081632653061;
                      result[3] += 0.3469387755102041;
                      result[4] += 0;
                      result[5] += 0.5102040816326531;
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
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)50) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)88) ) ) {
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
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)98.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)100.5) ) ) {
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
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)106) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69) ) ) {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)111) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)102) ) ) {
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
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)57.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)77) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
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
                  } else {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)76) ) ) {
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
            }
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)111.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)115.5) ) ) {
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
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)97) ) ) {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)98.5) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)80) ) ) {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)58) ) ) {
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
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)66.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
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
                if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)80) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80) ) ) {
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
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)87.5) ) ) {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)81.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)101) ) ) {
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
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)77) ) ) {
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
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)74) ) ) {
                  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)69) ) ) {
                    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 1;
                      result[5] += 0;
                    } else {
                      result[0] += 0.9545454545454546;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.045454545454545456;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)85.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.2;
                      result[4] += 0;
                      result[5] += 0.8;
                    } else {
                      result[0] += 0.25;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.75;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65.5) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)109.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 1;
                      result[5] += 0;
                    } else {
                      result[0] += 0.9285714285714286;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.07142857142857142;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
                      result[0] += 0.9944690265486725;
                      result[1] += 0;
                      result[2] += 0.0011061946902654867;
                      result[3] += 0;
                      result[4] += 0.004424778761061947;
                      result[5] += 0;
                    } else {
                      result[0] += 0.7857142857142857;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.03571428571428571;
                      result[4] += 0.17857142857142858;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)107.5) ) ) {
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)83) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
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
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)110.5) ) ) {
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
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)94.5) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)89.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)99.5) ) ) {
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
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                } else {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)63.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)102.5) ) ) {
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
                      result[3] += 0.3333333333333333;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)99.5) ) ) {
                if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73.5) ) ) {
                  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)103) ) ) {
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)105) ) ) {
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
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)90.5) ) ) {
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
                if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)112) ) ) {
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)93) ) ) {
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
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)96.5) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)67) ) ) {
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
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84) ) ) {
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
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)96.5) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)102.5) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)105.5) ) ) {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)89) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)108.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.038461538461538464;
                      result[3] += 0.8653846153846154;
                      result[4] += 0;
                      result[5] += 0.09615384615384616;
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
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)83.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)98) ) ) {
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
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
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
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)111) ) ) {
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
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)87.5) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)80) ) ) {
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
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)93) ) ) {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
                    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.2857142857142857;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0.7142857142857143;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.14285714285714285;
                      result[3] += 0.7142857142857143;
                      result[4] += 0;
                      result[5] += 0.14285714285714285;
                    }
                  } else {
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
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
                      result[3] += 0.18181818181818182;
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
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
                  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)111.5) ) ) {
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)95) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)106.5) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)98) ) ) {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101) ) ) {
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
              } else {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)112.5) ) ) {
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
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)85.5) ) ) {
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
                if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)99) ) ) {
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)111.5) ) ) {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.7411764705882353;
                      result[3] += 0.24705882352941178;
                      result[4] += 0;
                      result[5] += 0.011764705882352941;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.9102564102564102;
                      result[3] += 0.08974358974358974;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)99.5) ) ) {
                      result[0] += 0.5;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0.5;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.9666666666666667;
                      result[3] += 0.03333333333333333;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)113.5) ) ) {
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
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)104) ) ) {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)76) ) ) {
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
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)101.5) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)86.5) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)80) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)101) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.88;
                      result[3] += 0.12;
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
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)105.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
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
                if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)98.5) ) ) {
                  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)80.5) ) ) {
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
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)74) ) ) {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)86) ) ) {
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
                if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)86.5) ) ) {
                  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)108.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)105) ) ) {
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
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)102) ) ) {
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
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)76) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)58) ) ) {
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
                if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)64.5) ) ) {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)67.5) ) ) {
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)70.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
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
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)63) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)67.5) ) ) {
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
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)59.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                } else {
                  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)53) ) ) {
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
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)71) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)79) ) ) {
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)63.5) ) ) {
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
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)96.5) ) ) {
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)70.5) ) ) {
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)88.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.010380622837370242;
                      result[4] += 0;
                      result[5] += 0.9896193771626297;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.17647058823529413;
                      result[4] += 0;
                      result[5] += 0.8235294117647058;
                    }
                  } else {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)69.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.05;
                      result[4] += 0.05;
                      result[5] += 0.9;
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
                  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)86) ) ) {
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
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)72.5) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)57.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)87.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.029411764705882353;
                      result[4] += 0;
                      result[5] += 0.9705882352941176;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.5;
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
                }
              } else {
                if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
                  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)68.5) ) ) {
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)80) ) ) {
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
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)67) ) ) {
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
                      result[4] += 1;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)59.5) ) ) {
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
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
                if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
                    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.5;
                      result[4] += 0.5;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0.021739130434782608;
                      result[2] += 0;
                      result[3] += 0.06521739130434782;
                      result[4] += 0;
                      result[5] += 0.9130434782608695;
                    }
                  } else {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)85.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.8571428571428571;
                      result[4] += 0;
                      result[5] += 0.14285714285714285;
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
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)78) ) ) {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)88.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 1;
                    } else {
                      result[0] += 0;
                      result[1] += 0.8;
                      result[2] += 0;
                      result[3] += 0.2;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)72.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.7941176470588235;
                      result[4] += 0;
                      result[5] += 0.20588235294117646;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.34375;
                      result[4] += 0;
                      result[5] += 0.65625;
                    }
                  }
                }
              } else {
                if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)65) ) ) {
                  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)77) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)87.5) ) ) {
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
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)99) ) ) {
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
            }
          } else {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)77) ) ) {
                if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)79) ) ) {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)89.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87) ) ) {
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
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)103.5) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)86.5) ) ) {
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
                if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)75) ) ) {
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
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)84) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)102.5) ) ) {
                  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)94.5) ) ) {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)93) ) ) {
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
                      result[3] += 0.03333333333333333;
                      result[4] += 0;
                      result[5] += 0.9666666666666667;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)76.5) ) ) {
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
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90) ) ) {
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
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)70.5) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)44.5) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)43.5) ) ) {
                if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)119) ) ) {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)42) ) ) {
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
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)54) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)108.5) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
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
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)69) ) ) {
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)115.5) ) ) {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)74) ) ) {
                      result[0] += 0;
                      result[1] += 0.01818181818181818;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.9636363636363636;
                      result[5] += 0.01818181818181818;
                    } else {
                      result[0] += 0.3125;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.4375;
                      result[5] += 0.25;
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
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)53.5) ) ) {
                      result[0] += 0;
                      result[1] += 0.75;
                      result[2] += 0;
                      result[3] += 0.25;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.8636363636363636;
                      result[4] += 0.13636363636363635;
                      result[5] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)69.5) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)50.5) ) ) {
                if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)95.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60) ) ) {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)86) ) ) {
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
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)63.5) ) ) {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
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
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81.5) ) ) {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)55) ) ) {
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
                    result[1] += 1;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)78) ) ) {
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
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
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)90.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.8333333333333334;
                      result[4] += 0;
                      result[5] += 0.16666666666666666;
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
                if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86) ) ) {
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
                      result[0] += 0.2727272727272727;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.6363636363636364;
                      result[5] += 0.09090909090909091;
                    } else {
                      result[0] += 0.9636184857423796;
                      result[1] += 0;
                      result[2] += 0.0009832841691248774;
                      result[3] += 0.006882989183874141;
                      result[4] += 0.025565388397246806;
                      result[5] += 0.0029498525073746317;
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
                  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)100.5) ) ) {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)91.5) ) ) {
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
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97) ) ) {
                      result[0] += 0.2;
                      result[1] += 0;
                      result[2] += 0.1;
                      result[3] += 0.1;
                      result[4] += 0.6;
                      result[5] += 0;
                    } else {
                      result[0] += 0.7916666666666666;
                      result[1] += 0;
                      result[2] += 0.20833333333333334;
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
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)86.5) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)71.5) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)58) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.09433962264150944;
                      result[4] += 0;
                      result[5] += 0.9056603773584906;
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
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)83.5) ) ) {
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)89) ) ) {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)69) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.21428571428571427;
                      result[4] += 0.35714285714285715;
                      result[5] += 0.42857142857142855;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.058823529411764705;
                      result[4] += 0;
                      result[5] += 0.9411764705882353;
                    }
                  } else {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)40.5) ) ) {
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
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)94.5) ) ) {
                    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.6451612903225806;
                      result[4] += 0;
                      result[5] += 0.3548387096774194;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 1;
                    }
                  } else {
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)69.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.7142857142857143;
                      result[3] += 0.2857142857142857;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.9166666666666666;
                      result[4] += 0;
                      result[5] += 0.08333333333333333;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)90.5) ) ) {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)83) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0.06896551724137931;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.034482758620689655;
                      result[4] += 0;
                      result[5] += 0.896551724137931;
                    }
                  }
                } else {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)70.5) ) ) {
                    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)107.5) ) ) {
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
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)79.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.5;
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
                if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)77) ) ) {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)76) ) ) {
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
                      result[3] += 0.9411764705882353;
                      result[4] += 0;
                      result[5] += 0.058823529411764705;
                    }
                  } else {
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)90) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.125;
                      result[5] += 0.875;
                    } else {
                      result[0] += 0;
                      result[1] += 0.2;
                      result[2] += 0.4;
                      result[3] += 0.4;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)72.5) ) ) {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)93) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.25;
                      result[3] += 0.25;
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
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)95.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.3333333333333333;
                      result[3] += 0.5238095238095238;
                      result[4] += 0;
                      result[5] += 0.14285714285714285;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.813953488372093;
                      result[3] += 0.13953488372093023;
                      result[4] += 0;
                      result[5] += 0.046511627906976744;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)57) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
                    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)91) ) ) {
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
                }
              } else {
                if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)113) ) ) {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)118.5) ) ) {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)72) ) ) {
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
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)116) ) ) {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)76) ) ) {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)107.5) ) ) {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)67) ) ) {
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
                if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)115) ) ) {
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
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)101) ) ) {
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
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)92.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)100.5) ) ) {
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
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)57) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
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
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)102) ) ) {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)99) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)80.5) ) ) {
                if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
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
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)82) ) ) {
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
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)98.5) ) ) {
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
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)92.5) ) ) {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)74) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)90) ) ) {
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
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)110) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)86.5) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
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
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)76.5) ) ) {
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
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)80.5) ) ) {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
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
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)99.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.6666666666666666;
                      result[3] += 0.2857142857142857;
                      result[4] += 0;
                      result[5] += 0.047619047619047616;
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
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)89.5) ) ) {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)86) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.6031746031746031;
                      result[3] += 0.3968253968253968;
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
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)114.5) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)97) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)80.5) ) ) {
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105) ) ) {
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
                  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)113.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
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
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)111.5) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)115.5) ) ) {
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
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)94.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)101.5) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)93) ) ) {
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
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)109.5) ) ) {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)107.5) ) ) {
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
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)89.5) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91) ) ) {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.8;
                      result[3] += 0.2;
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
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.8235294117647058;
                      result[3] += 0.11764705882352941;
                      result[4] += 0;
                      result[5] += 0.058823529411764705;
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
                  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)110) ) ) {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
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
                  } else {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.625;
                      result[3] += 0.375;
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
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)84) ) ) {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)83.5) ) ) {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)88) ) ) {
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
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75) ) ) {
                  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)109.5) ) ) {
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
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)50.5) ) ) {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)52.5) ) ) {
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
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)56.5) ) ) {
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
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)46.5) ) ) {
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
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
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)64.5) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)77) ) ) {
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
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)81) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73.5) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86) ) ) {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)63.5) ) ) {
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
              }
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)67.5) ) ) {
                if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)90) ) ) {
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
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)63.5) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)53) ) ) {
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
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)94.5) ) ) {
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
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)67.5) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)68.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)75) ) ) {
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
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)74.5) ) ) {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)71.5) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)62.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)67.5) ) ) {
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
                      result[3] += 0;
                      result[4] += 0.012578616352201259;
                      result[5] += 0.9874213836477987;
                    }
                  }
                } else {
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)67.5) ) ) {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)61) ) ) {
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
                      result[3] += 0.46153846153846156;
                      result[4] += 0.07692307692307693;
                      result[5] += 0.46153846153846156;
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
                if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)80) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)67.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)80) ) ) {
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
                      result[3] += 0.25;
                      result[4] += 0;
                      result[5] += 0.75;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)72) ) ) {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)66.5) ) ) {
                  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)67.5) ) ) {
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
                  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)88) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)70.5) ) ) {
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
                if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)84.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                } else {
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86) ) ) {
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
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)66) ) ) {
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)88.5) ) ) {
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
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60.5) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)94.5) ) ) {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)74) ) ) {
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
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)67.5) ) ) {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)89.5) ) ) {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61) ) ) {
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
                      result[3] += 0.06289308176100629;
                      result[4] += 0.006289308176100629;
                      result[5] += 0.9308176100628931;
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
                  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)81) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)64.5) ) ) {
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
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)91.5) ) ) {
                  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)108.5) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.058823529411764705;
                      result[5] += 0.9411764705882353;
                    } else {
                      result[0] += 0;
                      result[1] += 0.05405405405405406;
                      result[2] += 0;
                      result[3] += 0.4189189189189189;
                      result[4] += 0.10810810810810811;
                      result[5] += 0.4189189189189189;
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
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                }
              }
            }
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)80) ) ) {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)92.5) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
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
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)77) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)77) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)69) ) ) {
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
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77.5) ) ) {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)74.5) ) ) {
                  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)72.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)65.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.9090909090909091;
                      result[4] += 0;
                      result[5] += 0.09090909090909091;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.3333333333333333;
                      result[4] += 0;
                      result[5] += 0.6666666666666666;
                    }
                  }
                } else {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)70.5) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)85.5) ) ) {
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
                      result[3] += 0.5555555555555556;
                      result[4] += 0;
                      result[5] += 0.4444444444444444;
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
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)123.5) ) ) {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)95) ) ) {
                    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)80.5) ) ) {
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
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
                if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)98.5) ) ) {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)93) ) ) {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)64.5) ) ) {
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
                      result[3] += 0.979381443298969;
                      result[4] += 0;
                      result[5] += 0.020618556701030927;
                    }
                  } else {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79) ) ) {
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
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                }
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)99.5) ) ) {
                  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 1;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.1111111111111111;
                      result[3] += 0.6111111111111112;
                      result[4] += 0;
                      result[5] += 0.2777777777777778;
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
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)89.5) ) ) {
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
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)101.5) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)97) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)78) ) ) {
                if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)40) ) ) {
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)44.5) ) ) {
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
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)106) ) ) {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 1;
                      result[5] += 0;
                    } else {
                      result[0] += 0.14285714285714285;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.8571428571428571;
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
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)64.5) ) ) {
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
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)69) ) ) {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)48.5) ) ) {
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
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)94.5) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)51) ) ) {
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
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)113) ) ) {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)74) ) ) {
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
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)62) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)32.5) ) ) {
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
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)81) ) ) {
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
          } else {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)82) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)76) ) ) {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)98) ) ) {
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
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)77) ) ) {
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
                if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)69) ) ) {
                  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)93) ) ) {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)80) ) ) {
                      result[0] += 0;
                      result[1] += 0.14285714285714285;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.8571428571428571;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.3333333333333333;
                      result[4] += 0.16666666666666666;
                      result[5] += 0.5;
                    }
                  } else {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)67.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0.6666666666666666;
                      result[2] += 0.3333333333333333;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)97) ) ) {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
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
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)74) ) ) {
                if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)80) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.9090909090909091;
                      result[5] += 0.09090909090909091;
                    } else {
                      result[0] += 0;
                      result[1] += 0.5;
                      result[2] += 0;
                      result[3] += 0.5;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)77.5) ) ) {
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
                      result[3] += 0.5;
                      result[4] += 0;
                      result[5] += 0.5;
                    }
                  }
                }
              } else {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)99) ) ) {
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)101.5) ) ) {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)77.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.9333333333333333;
                      result[4] += 0;
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
                    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0.2222222222222222;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.1111111111111111;
                      result[4] += 0;
                      result[5] += 0.6666666666666666;
                    }
                  }
                } else {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)76.5) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)65.5) ) ) {
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
                      result[3] += 0.1111111111111111;
                      result[4] += 0;
                      result[5] += 0.8888888888888888;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)71.5) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)53) ) ) {
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
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
                if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)113.5) ) ) {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)112) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
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
                      result[1] += 1;
                      result[2] += 0;
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
                  result[4] += 1;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)106) ) ) {
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
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)75.5) ) ) {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)71) ) ) {
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)68.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)55.5) ) ) {
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
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)108.5) ) ) {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)97) ) ) {
                      result[0] += 0.9589442815249267;
                      result[1] += 0.005865102639296188;
                      result[2] += 0;
                      result[3] += 0.008797653958944282;
                      result[4] += 0.026392961876832845;
                      result[5] += 0;
                    } else {
                      result[0] += 0.25;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.75;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)71.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0.9285714285714286;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.07142857142857142;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)101) ) ) {
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)87.5) ) ) {
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
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)56.5) ) ) {
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
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)88) ) ) {
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)92.5) ) ) {
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)84) ) ) {
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
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)66) ) ) {
                      result[0] += 0;
                      result[1] += 0.09090909090909091;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.9090909090909091;
                      result[5] += 0;
                    } else {
                      result[0] += 0.1111111111111111;
                      result[1] += 0.2222222222222222;
                      result[2] += 0;
                      result[3] += 0.1111111111111111;
                      result[4] += 0;
                      result[5] += 0.5555555555555556;
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
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
                  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)78) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)115.5) ) ) {
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
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)89.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)77) ) ) {
                      result[0] += 0.6666666666666666;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.3333333333333333;
                      result[5] += 0;
                    } else {
                      result[0] += 0.9672131147540983;
                      result[1] += 0;
                      result[2] += 0.01639344262295082;
                      result[3] += 0;
                      result[4] += 0.01639344262295082;
                      result[5] += 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)72.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)88.5) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)62.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)83.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                } else {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)95) ) ) {
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
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)101.5) ) ) {
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)91.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)101) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.08695652173913043;
                      result[3] += 0.9130434782608695;
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
                  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)111.5) ) ) {
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
                if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)91.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                } else {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81.5) ) ) {
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
            }
          } else {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)71.5) ) ) {
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
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)95.5) ) ) {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)97.5) ) ) {
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
                    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
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
                  } else {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)94.5) ) ) {
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
                      result[4] += 0;
                      result[5] += 1;
                    }
                  }
                } else {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
                    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100) ) ) {
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
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)124.5) ) ) {
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
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)114.5) ) ) {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)75.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0.037037037037037035;
                      result[2] += 0.6666666666666666;
                      result[3] += 0.2222222222222222;
                      result[4] += 0.07407407407407407;
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
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87) ) ) {
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
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
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
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)121) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)87.5) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)106.5) ) ) {
                if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)98.5) ) ) {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)70) ) ) {
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
                } else {
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)73.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.75625;
                      result[3] += 0.19375;
                      result[4] += 0;
                      result[5] += 0.05;
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
              } else {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)101) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)105) ) ) {
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
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)94.5) ) ) {
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)97) ) ) {
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
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)87.5) ) ) {
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
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)104.5) ) ) {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85) ) ) {
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
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)112.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)113) ) ) {
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
              }
            }
          } else {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)87) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)102.5) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)114.5) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)93) ) ) {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)116.5) ) ) {
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
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)93.5) ) ) {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)68.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)91) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)112) ) ) {
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
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)94) ) ) {
                if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)117.5) ) ) {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)97) ) ) {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)101) ) ) {
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
                    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.8125;
                      result[3] += 0.1875;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.968503937007874;
                      result[3] += 0.031496062992125984;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)94.5) ) ) {
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
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)79.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)100) ) ) {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.7142857142857143;
                      result[3] += 0.2857142857142857;
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
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)89.5) ) ) {
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
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)119) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.9629629629629629;
                      result[3] += 0.037037037037037035;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)90.5) ) ) {
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
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)81) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)69) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)76.5) ) ) {
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
                if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)53) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
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
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)62.5) ) ) {
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
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)51.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)59.5) ) ) {
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
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
                if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)88.5) ) ) {
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
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)78) ) ) {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)66.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)54.5) ) ) {
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
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)54) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)81.5) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)86) ) ) {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)60.5) ) ) {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)58.5) ) ) {
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
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)61.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)82) ) ) {
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
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)85.5) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)58.5) ) ) {
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)77) ) ) {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)92.5) ) ) {
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
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)84.5) ) ) {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.10526315789473684;
                      result[4] += 0;
                      result[5] += 0.8947368421052632;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 1;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)63.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.005813953488372093;
                      result[4] += 0.001937984496124031;
                      result[5] += 0.9922480620155039;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.029585798816568046;
                      result[4] += 0.011834319526627219;
                      result[5] += 0.9585798816568047;
                    }
                  }
                } else {
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)84.5) ) ) {
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.06179775280898876;
                      result[4] += 0.028089887640449437;
                      result[5] += 0.9101123595505618;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.36363636363636365;
                      result[5] += 0.6363636363636364;
                    }
                  } else {
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)86) ) ) {
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
                      result[3] += 0.625;
                      result[4] += 0;
                      result[5] += 0.375;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)117.5) ) ) {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)69.5) ) ) {
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
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)82) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)80.5) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)69) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)80) ) ) {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)65.5) ) ) {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72) ) ) {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)77) ) ) {
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
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                }
              } else {
                if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)78) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                } else {
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)90.5) ) ) {
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
              }
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
                if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)66) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                } else {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)80) ) ) {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)70.5) ) ) {
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
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
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
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            }
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)79) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)102) ) ) {
                if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)63) ) ) {
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
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)102.5) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)69) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83) ) ) {
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
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)78.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)81) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.25;
                      result[4] += 0;
                      result[5] += 0.75;
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
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)83.5) ) ) {
                  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)90) ) ) {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)77) ) ) {
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
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)93) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)73) ) ) {
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
                      result[3] += 0.9369369369369369;
                      result[4] += 0;
                      result[5] += 0.06306306306306306;
                    }
                  } else {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)93) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.16666666666666666;
                      result[4] += 0;
                      result[5] += 0.8333333333333334;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.8125;
                      result[4] += 0.0625;
                      result[5] += 0.125;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)77) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)87.5) ) ) {
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
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)54) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)84.5) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)88.5) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)60.5) ) ) {
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
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)97) ) ) {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)67) ) ) {
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
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
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
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)99.5) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)100.5) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77.5) ) ) {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)100) ) ) {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)81) ) ) {
                    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)67.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.25;
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
                  } else {
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73) ) ) {
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
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)65) ) ) {
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
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)84) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)99.5) ) ) {
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
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)57.5) ) ) {
                if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)55.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85) ) ) {
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
                if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)99) ) ) {
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
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)45.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)72.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)56.5) ) ) {
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)43) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)82) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)91) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.3333333333333333;
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
                  }
                }
              } else {
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
                  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)94.5) ) ) {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
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
                    result[1] += 1;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)79) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)94.5) ) ) {
                      result[0] += 0.020833333333333332;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.020833333333333332;
                      result[4] += 0.9583333333333334;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.6666666666666666;
                      result[4] += 0.3333333333333333;
                      result[5] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)77) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)75.5) ) ) {
                    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)84.5) ) ) {
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
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)85.5) ) ) {
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
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)68.5) ) ) {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)78) ) ) {
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
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
                      result[0] += 0.9769539078156313;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.002004008016032064;
                      result[4] += 0.018036072144288578;
                      result[5] += 0.003006012024048096;
                    } else {
                      result[0] += 0.6888888888888889;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.13333333333333333;
                      result[4] += 0.06666666666666667;
                      result[5] += 0.1111111111111111;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)105.5) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)89.5) ) ) {
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)86) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)86.5) ) ) {
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)60.5) ) ) {
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
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                }
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)86) ) ) {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)91) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
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
                      result[3] += 0.8333333333333334;
                      result[4] += 0;
                      result[5] += 0.16666666666666666;
                    }
                  }
                } else {
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)109) ) ) {
                    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)107) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.9038461538461539;
                      result[4] += 0;
                      result[5] += 0.09615384615384616;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)65.5) ) ) {
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
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)58.5) ) ) {
                if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)81) ) ) {
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
                if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)105.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)77.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
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
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)100.5) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)80.5) ) ) {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)106) ) ) {
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
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90) ) ) {
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
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)91.5) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)111.5) ) ) {
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
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)115.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)101) ) ) {
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
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)64.5) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)80) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)87) ) ) {
                if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)83) ) ) {
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
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65.5) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)63.5) ) ) {
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
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)92.5) ) ) {
                if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)91) ) ) {
                  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)92.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)97) ) ) {
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
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)95) ) ) {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84) ) ) {
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
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)94.5) ) ) {
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
            }
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)88) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)83.5) ) ) {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60.5) ) ) {
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
                      result[4] += 0.3333333333333333;
                      result[5] += 0.6666666666666666;
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
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)97.5) ) ) {
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)92.5) ) ) {
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
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)87) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.24561403508771928;
                      result[3] += 0.5263157894736842;
                      result[4] += 0;
                      result[5] += 0.22807017543859648;
                    } else {
                      result[0] += 0.6;
                      result[1] += 0;
                      result[2] += 0.2;
                      result[3] += 0;
                      result[4] += 0.2;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)105) ) ) {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)76.5) ) ) {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80) ) ) {
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
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.42857142857142855;
                      result[3] += 0.42857142857142855;
                      result[4] += 0;
                      result[5] += 0.14285714285714285;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.8620689655172413;
                      result[3] += 0.13793103448275862;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)80) ) ) {
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
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)96.5) ) ) {
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
                if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
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
            }
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)102.5) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)96.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)98.5) ) ) {
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
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)81) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)69.5) ) ) {
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
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)110.5) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
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
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)70) ) ) {
                if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)98.5) ) ) {
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
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
                if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)102.5) ) ) {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)102.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.3333333333333333;
                      result[3] += 0.5833333333333334;
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
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)90.5) ) ) {
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
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)97) ) ) {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
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
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)119.5) ) ) {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)77) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 1;
                    } else {
                      result[0] += 0.01;
                      result[1] += 0;
                      result[2] += 0.95;
                      result[3] += 0.03;
                      result[4] += 0;
                      result[5] += 0.01;
                    }
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)90.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.8061224489795918;
                      result[3] += 0.19387755102040816;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.45454545454545453;
                      result[3] += 0.5454545454545454;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)111) ) ) {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)93) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.16666666666666669;
                      result[3] += 0.6666666666666667;
                      result[4] += 0;
                      result[5] += 0.16666666666666669;
                    } else {
                      result[0] += 0.42857142857142855;
                      result[1] += 0;
                      result[2] += 0.5714285714285714;
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
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)86.5) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
                if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)80) ) ) {
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
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)80) ) ) {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)84) ) ) {
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
                if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)110.5) ) ) {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86.5) ) ) {
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
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)109.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)113.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.8235294117647058;
                      result[3] += 0.17647058823529413;
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
                  }
                }
              }
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)72.5) ) ) {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)80) ) ) {
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
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
                if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
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
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)97.5) ) ) {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)87.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.96;
                      result[3] += 0.04;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.9971098265895953;
                      result[3] += 0.002890173410404624;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)87.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.625;
                      result[3] += 0.375;
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
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)60.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)47.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)49.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
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
              }
            }
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)78.5) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
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
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)63.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)51) ) ) {
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
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)93.5) ) ) {
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)68.5) ) ) {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)77) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
                if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)66.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                } else {
                  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)56.5) ) ) {
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
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)84.5) ) ) {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
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
                      result[3] += 0.0054249547920434;
                      result[4] += 0.0018083182640144665;
                      result[5] += 0.9927667269439421;
                    }
                  } else {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)69.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.0392156862745098;
                      result[4] += 0.013071895424836602;
                      result[5] += 0.9477124183006536;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.5714285714285714;
                      result[4] += 0;
                      result[5] += 0.42857142857142855;
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
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)64.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)81.5) ) ) {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)65) ) ) {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)84.5) ) ) {
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
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)73.5) ) ) {
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
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)82) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)80) ) ) {
                if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)56.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)75.5) ) ) {
                    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)91) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.08163265306122448;
                      result[4] += 0.07142857142857142;
                      result[5] += 0.8469387755102041;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)69) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0.16666666666666666;
                      result[2] += 0;
                      result[3] += 0.16666666666666666;
                      result[4] += 0;
                      result[5] += 0.6666666666666666;
                    }
                  }
                }
              } else {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)71) ) ) {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)66.5) ) ) {
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
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
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
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)55.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)89.5) ) ) {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)67.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
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
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)82.5) ) ) {
                    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)66.5) ) ) {
                      result[0] += 0;
                      result[1] += 0.3333333333333333;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0.6666666666666666;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 1;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)89.5) ) ) {
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
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)86) ) ) {
                if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)77.5) ) ) {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)85.5) ) ) {
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
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)76.5) ) ) {
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
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)91.5) ) ) {
                if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)57.5) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)69.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)79) ) ) {
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
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)99) ) ) {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)82.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.625;
                      result[4] += 0;
                      result[5] += 0.375;
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
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            }
          } else {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)72.5) ) ) {
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)91.5) ) ) {
                    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)87.5) ) ) {
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
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                }
              } else {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                } else {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)81) ) ) {
                    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85) ) ) {
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
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)80) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)85) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)111) ) ) {
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
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)91) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)44) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
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
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)100.5) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)89) ) ) {
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
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)69.5) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)92.5) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
                    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)90) ) ) {
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
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)60.5) ) ) {
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
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)52.5) ) ) {
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)71) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
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
                if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)112.5) ) ) {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)115.5) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)81) ) ) {
                      result[0] += 0.3333333333333333;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.6666666666666666;
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
                  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)99) ) ) {
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
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
                if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)91.5) ) ) {
                  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)106) ) ) {
                    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)102.5) ) ) {
                      result[0] += 0;
                      result[1] += 0.14285714285714285;
                      result[2] += 0;
                      result[3] += 0;
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
                    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)41) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0.4;
                      result[2] += 0;
                      result[3] += 0.5;
                      result[4] += 0.1;
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
                if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)71.5) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)78) ) ) {
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
                      result[4] += 0.5;
                      result[5] += 0.5;
                    }
                  } else {
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
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
                  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)74.5) ) ) {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
                      result[0] += 0.7;
                      result[1] += 0.15;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.15;
                      result[5] += 0;
                    } else {
                      result[0] += 0.9803343166175025;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.004916420845624385;
                      result[4] += 0.012782694198623401;
                      result[5] += 0.0019665683382497543;
                    }
                  } else {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)108.5) ) ) {
                      result[0] += 0.14285714285714288;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.5714285714285715;
                      result[4] += 0;
                      result[5] += 0.28571428571428575;
                    } else {
                      result[0] += 0.75;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.25;
                      result[5] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)86) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)67.5) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)54.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)57.5) ) ) {
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
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)74) ) ) {
                  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)69.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
                      result[0] += 0;
                      result[1] += 0.11538461538461539;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.8076923076923077;
                      result[5] += 0.07692307692307693;
                    } else {
                      result[0] += 0;
                      result[1] += 0.14285714285714285;
                      result[2] += 0.19047619047619047;
                      result[3] += 0.2857142857142857;
                      result[4] += 0.2857142857142857;
                      result[5] += 0.09523809523809523;
                    }
                  }
                } else {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)80) ) ) {
                    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)80) ) ) {
                      result[0] += 0;
                      result[1] += 0.16666666666666669;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.6666666666666667;
                      result[5] += 0.16666666666666669;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.07692307692307693;
                      result[4] += 0;
                      result[5] += 0.9230769230769231;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)85.5) ) ) {
                      result[0] += 0.0625;
                      result[1] += 0.0625;
                      result[2] += 0;
                      result[3] += 0.3125;
                      result[4] += 0;
                      result[5] += 0.5625;
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
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)80.5) ) ) {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)99) ) ) {
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
                if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)102.5) ) ) {
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
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)90.5) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)67.5) ) ) {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)83) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)81) ) ) {
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
                      result[4] += 0.4;
                      result[5] += 0.6;
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
                if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)64) ) ) {
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
                      result[3] += 0.8636363636363636;
                      result[4] += 0;
                      result[5] += 0.13636363636363635;
                    }
                  } else {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)90) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0.05;
                      result[1] += 0;
                      result[2] += 0.25;
                      result[3] += 0.2;
                      result[4] += 0;
                      result[5] += 0.5;
                    }
                  }
                } else {
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.09090909090909091;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0.9090909090909091;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.2;
                      result[3] += 0.6;
                      result[4] += 0;
                      result[5] += 0.2;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.75;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0.25;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
                if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
                    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.03333333333333333;
                      result[3] += 0.5333333333333333;
                      result[4] += 0;
                      result[5] += 0.43333333333333335;
                    } else {
                      result[0] += 0.038461538461538464;
                      result[1] += 0;
                      result[2] += 0.23076923076923078;
                      result[3] += 0.34615384615384615;
                      result[4] += 0.23076923076923078;
                      result[5] += 0.15384615384615385;
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
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)95.5) ) ) {
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)100.5) ) ) {
                      result[0] += 0.1111111111111111;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.8888888888888888;
                      result[5] += 0;
                    } else {
                      result[0] += 0.5;
                      result[1] += 0;
                      result[2] += 0.5;
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
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)69) ) ) {
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
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)69.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 1;
                    } else {
                      result[0] += 0.05555555555555556;
                      result[1] += 0;
                      result[2] += 0.888888888888889;
                      result[3] += 0.03703703703703704;
                      result[4] += 0;
                      result[5] += 0.01851851851851852;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)99.5) ) ) {
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
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)98.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)83) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)107.5) ) ) {
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
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)81.5) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)93) ) ) {
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
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
                if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)99) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)76.5) ) ) {
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
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
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
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)98) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
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
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)80) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
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
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)86) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)85.5) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)99) ) ) {
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
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)96.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)102.5) ) ) {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)71) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)89.5) ) ) {
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
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84.5) ) ) {
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
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)80.5) ) ) {
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
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)86) ) ) {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
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
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)89.5) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)90.5) ) ) {
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
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)97.5) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)102.5) ) ) {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)82.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.7352941176470589;
                      result[3] += 0.20588235294117646;
                      result[4] += 0;
                      result[5] += 0.058823529411764705;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.9459459459459459;
                      result[3] += 0.03783783783783784;
                      result[4] += 0;
                      result[5] += 0.016216216216216217;
                    }
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.25;
                      result[3] += 0.5;
                      result[4] += 0;
                      result[5] += 0.25;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.8426966292134831;
                      result[3] += 0.15730337078651685;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)95.5) ) ) {
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
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
                if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)105) ) ) {
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
            }
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)100) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
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
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)104) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)80) ) ) {
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
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)119) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)98.5) ) ) {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)94) ) ) {
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
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)113.5) ) ) {
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
                      result[3] += 0.16666666666666666;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)109.5) ) ) {
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
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)86.5) ) ) {
                if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)120) ) ) {
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)84) ) ) {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.5714285714285714;
                      result[3] += 0.42857142857142855;
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
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)113.5) ) ) {
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
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)44) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)45) ) ) {
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
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)64.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)75) ) ) {
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
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)79) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)74) ) ) {
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
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)64) ) ) {
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)56.5) ) ) {
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
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
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
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)57) ) ) {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)76) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
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
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)63.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)70) ) ) {
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)67) ) ) {
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
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77.5) ) ) {
                if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)63) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)56) ) ) {
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
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)73) ) ) {
                  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)68.5) ) ) {
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)95) ) ) {
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
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)50.5) ) ) {
                if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)65.5) ) ) {
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
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)67.5) ) ) {
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)87.5) ) ) {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.013888888888888888;
                      result[4] += 0.0015432098765432098;
                      result[5] += 0.9845679012345679;
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
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)64.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.36363636363636365;
                      result[4] += 0;
                      result[5] += 0.6363636363636364;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.0196078431372549;
                      result[4] += 0.0196078431372549;
                      result[5] += 0.9607843137254902;
                    }
                  } else {
                    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)69) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.07142857142857142;
                      result[4] += 0.5;
                      result[5] += 0.42857142857142855;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.21052631578947367;
                      result[4] += 0;
                      result[5] += 0.7894736842105263;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)83.5) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)69) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)76) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)67.5) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84) ) ) {
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
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)96.5) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)68.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)64.5) ) ) {
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
                      result[3] += 0.06060606060606061;
                      result[4] += 0.015151515151515152;
                      result[5] += 0.9242424242424242;
                    }
                  }
                } else {
                  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)88) ) ) {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)71.5) ) ) {
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)67.5) ) ) {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)69.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)96) ) ) {
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
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)94.5) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
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
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)56) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)69) ) ) {
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
            }
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)85.5) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)63.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)64.5) ) ) {
                if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75) ) ) {
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
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            }
          } else {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)82) ) ) {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75) ) ) {
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
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)66.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)94.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.9646017699115044;
                      result[4] += 0;
                      result[5] += 0.035398230088495575;
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
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)77) ) ) {
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)89.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.21052631578947367;
                      result[4] += 0;
                      result[5] += 0.7894736842105263;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.7;
                      result[4] += 0;
                      result[5] += 0.3;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)77) ) ) {
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
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)88.5) ) ) {
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
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)67) ) ) {
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
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)53.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)84) ) ) {
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
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)115.5) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)69.5) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)122) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)93) ) ) {
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
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
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)87) ) ) {
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
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)81) ) ) {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)81) ) ) {
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
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)106.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)52) ) ) {
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
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)51.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)54) ) ) {
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)54.5) ) ) {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)56.5) ) ) {
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
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)77) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)60) ) ) {
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
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)33.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)102.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 1;
                      result[5] += 0;
                    } else {
                      result[0] += 0.25;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.75;
                      result[5] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)65) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)95) ) ) {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)77) ) ) {
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
                      result[3] += 0.7142857142857143;
                      result[4] += 0;
                      result[5] += 0.2857142857142857;
                    }
                  } else {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)76.5) ) ) {
                      result[0] += 0;
                      result[1] += 0.05555555555555555;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0.9444444444444444;
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
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)64.5) ) ) {
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)101.5) ) ) {
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)77.5) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)76.5) ) ) {
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
                } else {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)51.5) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)83) ) ) {
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
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)68.5) ) ) {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)116.5) ) ) {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)72) ) ) {
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
                } else {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)69.5) ) ) {
                    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)79) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0.6923076923076923;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.038461538461538464;
                      result[4] += 0.2692307692307692;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
                      result[0] += 0.9794871794871794;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.0041025641025641026;
                      result[4] += 0.01641025641025641;
                      result[5] += 0;
                    } else {
                      result[0] += 0.7105263157894737;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.10526315789473684;
                      result[4] += 0.10526315789473684;
                      result[5] += 0.07894736842105263;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)102.5) ) ) {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
                if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)67.5) ) ) {
                  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)102.5) ) ) {
                    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)69) ) ) {
                      result[0] += 0.18181818181818182;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.18181818181818182;
                      result[4] += 0.5454545454545454;
                      result[5] += 0.09090909090909091;
                    } else {
                      result[0] += 0;
                      result[1] += 0.1111111111111111;
                      result[2] += 0.037037037037037035;
                      result[3] += 0.2222222222222222;
                      result[4] += 0.07407407407407407;
                      result[5] += 0.5555555555555556;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)70.5) ) ) {
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
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)96.5) ) ) {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)85.5) ) ) {
                      result[0] += 0;
                      result[1] += 0.09523809523809523;
                      result[2] += 0;
                      result[3] += 0.3333333333333333;
                      result[4] += 0.047619047619047616;
                      result[5] += 0.5238095238095238;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.975609756097561;
                      result[4] += 0;
                      result[5] += 0.024390243902439025;
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
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)79.5) ) ) {
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
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)67) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)98.5) ) ) {
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
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)102.5) ) ) {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)102.5) ) ) {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79) ) ) {
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
                      result[3] += 0;
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
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)123) ) ) {
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
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)82) ) ) {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)74.5) ) ) {
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)71) ) ) {
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
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)117.5) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)105.5) ) ) {
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
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)112.5) ) ) {
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)95) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)83.5) ) ) {
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
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)113.5) ) ) {
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
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)76.5) ) ) {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77.5) ) ) {
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
                  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)111.5) ) ) {
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
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)65) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)89.5) ) ) {
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
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)95.5) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)93.5) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)86) ) ) {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
                    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)88.5) ) ) {
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
                } else {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)102.5) ) ) {
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
                if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
                  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)86) ) ) {
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
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
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
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
                    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)106.5) ) ) {
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
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)114.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.8461538461538461;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0.15384615384615385;
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
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)81) ) ) {
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
                if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)107) ) ) {
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)79) ) ) {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100) ) ) {
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
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                }
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)98) ) ) {
                if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)110.5) ) ) {
                  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)96.5) ) ) {
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.8;
                      result[4] += 0;
                      result[5] += 0.2;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.9230769230769231;
                      result[3] += 0.07692307692307693;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)104.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.07142857142857142;
                      result[3] += 0.9285714285714286;
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
              } else {
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)102.5) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)103) ) ) {
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
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85) ) ) {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)83) ) ) {
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
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)49.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)86.5) ) ) {
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
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79) ) ) {
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
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84) ) ) {
                if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)84.5) ) ) {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)89.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)94.5) ) ) {
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
                      result[3] += 0.8333333333333334;
                      result[4] += 0.16666666666666666;
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
                if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)54.5) ) ) {
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
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)95) ) ) {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)107) ) ) {
                if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)102) ) ) {
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
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
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
                    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)90.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.75;
                      result[4] += 0;
                      result[5] += 0.25;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.8191489361702128;
                      result[3] += 0.1276595744680851;
                      result[4] += 0;
                      result[5] += 0.05319148936170213;
                    }
                  }
                }
              } else {
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
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
                } else {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)121) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)111.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.9107142857142857;
                      result[3] += 0.08928571428571429;
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
                    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104) ) ) {
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
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)119) ) ) {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)129) ) ) {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
                      result[0] += 0.0049504950495049506;
                      result[1] += 0;
                      result[2] += 0.8811881188118812;
                      result[3] += 0.10396039603960396;
                      result[4] += 0;
                      result[5] += 0.009900990099009901;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.989100817438692;
                      result[3] += 0.010899182561307902;
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
                if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)92) ) ) {
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)97.5) ) ) {
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
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)80.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)105) ) ) {
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
  
  // Average tree outputs
  result[0] /= 10;
  result[1] /= 10;
  result[2] /= 10;
  result[3] /= 10;
  result[4] /= 10;
  result[5] /= 10;
  
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
