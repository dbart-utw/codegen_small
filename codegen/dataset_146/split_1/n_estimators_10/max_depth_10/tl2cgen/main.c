
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
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)99) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)39.5) ) ) {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)56.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)106.5) ) ) {
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
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)100.5) ) ) {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)63.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
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
                if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)84.5) ) ) {
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
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)55.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)67) ) ) {
                      result[0] += 0.09523809523809523;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.8095238095238095;
                      result[5] += 0.09523809523809523;
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
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)77.5) ) ) {
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
                if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)72.5) ) ) {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)77) ) ) {
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
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)95) ) ) {
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)65.5) ) ) {
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
              }
            }
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)49.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)66) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)123) ) ) {
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)69) ) ) {
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
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)56.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)72.5) ) ) {
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
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)84.5) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)64.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)55.5) ) ) {
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)81) ) ) {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)65.5) ) ) {
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
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)76) ) ) {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)49.5) ) ) {
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
                      result[3] += 0.018361581920903956;
                      result[4] += 0.014124293785310734;
                      result[5] += 0.9675141242937854;
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
                      result[0] += 0;
                      result[1] += 0.75;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0.25;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)84) ) ) {
                if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)68.5) ) ) {
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)69.5) ) ) {
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
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)71.5) ) ) {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
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
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)69) ) ) {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)66.5) ) ) {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)78) ) ) {
                      result[0] += 0;
                      result[1] += 0.3333333333333333;
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
                  } else {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)80) ) ) {
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
                      result[3] += 0.5454545454545454;
                      result[4] += 0;
                      result[5] += 0.45454545454545453;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)66.5) ) ) {
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
                      result[3] += 0.11764705882352941;
                      result[4] += 0.029411764705882353;
                      result[5] += 0.8529411764705882;
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
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)72.5) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)84) ) ) {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)91.5) ) ) {
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
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)86) ) ) {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)64.5) ) ) {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)94) ) ) {
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
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
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
                      result[3] += 0.05263157894736842;
                      result[4] += 0;
                      result[5] += 0.9473684210526315;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)83.5) ) ) {
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
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)85.5) ) ) {
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)53.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75) ) ) {
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
                      result[3] += 0.375;
                      result[4] += 0.25;
                      result[5] += 0.375;
                    }
                  }
                } else {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)59) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0.015873015873015872;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.7142857142857143;
                      result[4] += 0.09523809523809523;
                      result[5] += 0.1746031746031746;
                    }
                  } else {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)72) ) ) {
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)70.5) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)70.5) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)89) ) ) {
                if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)63.5) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
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
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 1;
                    }
                  }
                } else {
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)65) ) ) {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
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
                      result[2] += 0;
                      result[3] += 0.3333333333333333;
                      result[4] += 0;
                      result[5] += 0.6666666666666666;
                    }
                  }
                }
              } else {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)69) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91) ) ) {
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
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)92.5) ) ) {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)80) ) ) {
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)89) ) ) {
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
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
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
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)52) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)62) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)85) ) ) {
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
            }
          } else {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)62) ) ) {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80) ) ) {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)55.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
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
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)52) ) ) {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)86) ) ) {
                      result[0] += 0.8;
                      result[1] += 0;
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
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)67) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 1;
                    } else {
                      result[0] += 0.9631696428571429;
                      result[1] += 0.002232142857142857;
                      result[2] += 0;
                      result[3] += 0.005580357142857143;
                      result[4] += 0.029017857142857144;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)101) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
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
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)101) ) ) {
                if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)58) ) ) {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93.5) ) ) {
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
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
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
                      result[3] += 0.8666666666666667;
                      result[4] += 0;
                      result[5] += 0.13333333333333333;
                    }
                  } else {
                    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71) ) ) {
                      result[0] += 0.17391304347826086;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.782608695652174;
                      result[5] += 0.043478260869565216;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.11764705882352941;
                      result[3] += 0.23529411764705882;
                      result[4] += 0.11764705882352941;
                      result[5] += 0.5294117647058824;
                    }
                  }
                }
              } else {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)102.5) ) ) {
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
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
                if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)73) ) ) {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75) ) ) {
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
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)85.5) ) ) {
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
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)97.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.007194244604316547;
                      result[3] += 0.8848920863309353;
                      result[4] += 0;
                      result[5] += 0.1079136690647482;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.06451612903225806;
                      result[3] += 0.46774193548387094;
                      result[4] += 0;
                      result[5] += 0.46774193548387094;
                    }
                  } else {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)95.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.21052631578947367;
                      result[3] += 0.05263157894736842;
                      result[4] += 0;
                      result[5] += 0.7368421052631579;
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
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
                if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)69) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)83) ) ) {
                      result[0] += 0.041666666666666664;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.75;
                      result[4] += 0;
                      result[5] += 0.20833333333333334;
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
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)111.5) ) ) {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)89) ) ) {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)67.5) ) ) {
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
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)91.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0.04;
                      result[1] += 0;
                      result[2] += 0.88;
                      result[3] += 0.08;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
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
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)110.5) ) ) {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)102.5) ) ) {
                  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.5714285714285715;
                      result[4] += 0.14285714285714288;
                      result[5] += 0.28571428571428575;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)116.5) ) ) {
                      result[0] += 0.045454545454545456;
                      result[1] += 0;
                      result[2] += 0.045454545454545456;
                      result[3] += 0.045454545454545456;
                      result[4] += 0;
                      result[5] += 0.8636363636363636;
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
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)74) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0.7142857142857143;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.2857142857142857;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
                      result[0] += 0.05555555555555555;
                      result[1] += 0;
                      result[2] += 0.9444444444444444;
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
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)100.5) ) ) {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)89.5) ) ) {
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
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100) ) ) {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)80) ) ) {
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
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)97) ) ) {
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
                  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)91.5) ) ) {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
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
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)111.5) ) ) {
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
                  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)114.5) ) ) {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.6666666666666666;
                      result[4] += 0;
                      result[5] += 0.3333333333333333;
                    } else {
                      result[0] += 0.012195121951219513;
                      result[1] += 0;
                      result[2] += 0.9390243902439024;
                      result[3] += 0.012195121951219513;
                      result[4] += 0;
                      result[5] += 0.036585365853658534;
                    }
                  } else {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)111.5) ) ) {
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
                if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)106) ) ) {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
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
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)61.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                } else {
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)72) ) ) {
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
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)67.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79) ) ) {
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
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)99.5) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)97) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)82) ) ) {
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
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
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
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)102.5) ) ) {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)82.5) ) ) {
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
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)93.5) ) ) {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)83.5) ) ) {
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
            }
          } else {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)102) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77.5) ) ) {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
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
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)97) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)101) ) ) {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)102.5) ) ) {
                if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)94.5) ) ) {
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
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
              } else {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)100.5) ) ) {
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
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)82) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)113) ) ) {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)102.5) ) ) {
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
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85.5) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
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
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)99.5) ) ) {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)83) ) ) {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)102) ) ) {
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
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)85) ) ) {
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
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)96) ) ) {
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
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)101) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)93) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
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
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)84) ) ) {
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
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)86.5) ) ) {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)88.5) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)105) ) ) {
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
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
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.7241379310344828;
                      result[3] += 0.27586206896551724;
                      result[4] += 0;
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
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)101) ) ) {
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
                if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)113.5) ) ) {
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)104.5) ) ) {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
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
                  } else {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)99.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.8461538461538461;
                      result[3] += 0.15384615384615385;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.9855072463768116;
                      result[3] += 0.014492753623188406;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
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
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)112.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)95) ) ) {
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
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)106.5) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)113.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)104) ) ) {
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
                if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)110.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)86) ) ) {
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
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)88.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)117.5) ) ) {
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
                if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)117.5) ) ) {
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
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)85.5) ) ) {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85) ) ) {
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
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)109) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)70) ) ) {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)56.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65.5) ) ) {
                if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)75.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)57) ) ) {
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
                result[4] += 0;
                result[5] += 1;
              }
            }
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)50) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)64) ) ) {
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
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)48.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)48.5) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)54.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)49) ) ) {
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
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)52) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)77) ) ) {
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
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)51.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)48.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)67.5) ) ) {
                if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)50.5) ) ) {
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)58.5) ) ) {
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
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)89.5) ) ) {
                    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)106) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.0077279752704791345;
                      result[4] += 0.0015455950540958269;
                      result[5] += 0.990726429675425;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.5;
                      result[5] += 0.5;
                    }
                  } else {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)72.5) ) ) {
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
              } else {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)65.5) ) ) {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)78) ) ) {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)65) ) ) {
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
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)94.5) ) ) {
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
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)85.5) ) ) {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)80.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.02564102564102564;
                      result[5] += 0.9743589743589743;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)67.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.14285714285714285;
                      result[4] += 0.07142857142857142;
                      result[5] += 0.7857142857142857;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.7142857142857143;
                      result[4] += 0;
                      result[5] += 0.2857142857142857;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)57.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)59.5) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)57.5) ) ) {
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
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)67.5) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86.5) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73) ) ) {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)75.5) ) ) {
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
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)66) ) ) {
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
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)71.5) ) ) {
                if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)63.5) ) ) {
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)67.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)85) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.5;
                      result[4] += 0;
                      result[5] += 0.5;
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
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)94) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.05309734513274336;
                      result[4] += 0.008849557522123894;
                      result[5] += 0.9380530973451328;
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
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)72.5) ) ) {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)76.5) ) ) {
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
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)67.5) ) ) {
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)81.5) ) ) {
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
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
                      result[0] += 0.14285714285714285;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.2857142857142857;
                      result[5] += 0.5714285714285714;
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
          } else {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)66.5) ) ) {
                if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)66.5) ) ) {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)69) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)73) ) ) {
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
                if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)85) ) ) {
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)85.5) ) ) {
                    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)94.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.03636363636363636;
                      result[4] += 0;
                      result[5] += 0.9636363636363636;
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
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)66) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)80.5) ) ) {
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
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
                if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)74) ) ) {
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)79.5) ) ) {
                    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89.5) ) ) {
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
                      result[3] += 0.6;
                      result[4] += 0;
                      result[5] += 0.4;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
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
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71) ) ) {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)64.5) ) ) {
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
                    result[4] += 0;
                    result[5] += 1;
                  }
                }
              } else {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)96.5) ) ) {
                    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)78) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.3333333333333333;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0.6666666666666666;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.005714285714285714;
                      result[3] += 0.9085714285714286;
                      result[4] += 0;
                      result[5] += 0.08571428571428572;
                    }
                  } else {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)76.5) ) ) {
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
                  }
                } else {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)97.5) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)77.5) ) ) {
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
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
                      result[0] += 0;
                      result[1] += 0.5;
                      result[2] += 0;
                      result[3] += 0.4;
                      result[4] += 0;
                      result[5] += 0.1;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.0625;
                      result[4] += 0.0625;
                      result[5] += 0.875;
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
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)46.5) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)86) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)89.5) ) ) {
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
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)83) ) ) {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)62.5) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)52.5) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65.5) ) ) {
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
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)109.5) ) ) {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)54.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)85.5) ) ) {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)75) ) ) {
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
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)88.5) ) ) {
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)72.5) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)80) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)61) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)76) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                } else {
                  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
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
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)97) ) ) {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)84.5) ) ) {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)91.5) ) ) {
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
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)83.5) ) ) {
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
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            }
          } else {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)70.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)63.5) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)50.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
                      result[0] += 0.3333333333333333;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.16666666666666666;
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
                  }
                } else {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)85.5) ) ) {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)100.5) ) ) {
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
                }
              } else {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)94) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)77) ) ) {
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
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)91.5) ) ) {
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
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78) ) ) {
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
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)70.5) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
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
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)93) ) ) {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)69) ) ) {
                      result[0] += 0.9841688654353562;
                      result[1] += 0.002638522427440633;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.013192612137203167;
                      result[5] += 0;
                    } else {
                      result[0] += 0.6666666666666666;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.06666666666666667;
                      result[4] += 0.26666666666666666;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89.5) ) ) {
                      result[0] += 0.6666666666666666;
                      result[1] += 0;
                      result[2] += 0.3333333333333333;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0.2;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.8;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
                  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)50) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)93) ) ) {
                      result[0] += 0.2222222222222222;
                      result[1] += 0.037037037037037035;
                      result[2] += 0;
                      result[3] += 0.037037037037037035;
                      result[4] += 0.6296296296296297;
                      result[5] += 0.07407407407407407;
                    } else {
                      result[0] += 0.09090909090909091;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.7272727272727273;
                      result[4] += 0.18181818181818182;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)86) ) ) {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)97.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.02;
                      result[3] += 0.16;
                      result[4] += 0.02;
                      result[5] += 0.8;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.15;
                      result[3] += 0.5;
                      result[4] += 0;
                      result[5] += 0.35;
                    }
                  } else {
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)93) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.42857142857142855;
                      result[4] += 0.42857142857142855;
                      result[5] += 0.14285714285714285;
                    } else {
                      result[0] += 0.14285714285714285;
                      result[1] += 0;
                      result[2] += 0.8571428571428571;
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
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)85.5) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)106.5) ) ) {
                if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)91) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74) ) ) {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)78) ) ) {
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
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)104) ) ) {
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
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)118.5) ) ) {
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
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)93) ) ) {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)72.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)91.5) ) ) {
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
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)74) ) ) {
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
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)99.5) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)82.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)92.5) ) ) {
                if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)85) ) ) {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
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
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91.5) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)94.5) ) ) {
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
                if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
                    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)106.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.10909090909090909;
                      result[3] += 0.8363636363636363;
                      result[4] += 0;
                      result[5] += 0.05454545454545454;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.5;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0.5;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.27586206896551724;
                      result[3] += 0.6206896551724138;
                      result[4] += 0;
                      result[5] += 0.10344827586206896;
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
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)98.5) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)113.5) ) ) {
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)80.5) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)69) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)77) ) ) {
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
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
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
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
                if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
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
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)98.5) ) ) {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)86.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.7560975609756098;
                      result[3] += 0.1951219512195122;
                      result[4] += 0;
                      result[5] += 0.04878048780487805;
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
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)88) ) ) {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)101) ) ) {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
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
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)95) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)104.5) ) ) {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)85) ) ) {
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
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)119) ) ) {
                if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)74.5) ) ) {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84.5) ) ) {
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
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)85.5) ) ) {
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)97) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.8;
                      result[3] += 0.1;
                      result[4] += 0;
                      result[5] += 0.1;
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
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)78.5) ) ) {
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
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)77.5) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)89) ) ) {
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
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)103.5) ) ) {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)118.5) ) ) {
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
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)80.5) ) ) {
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
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)85.5) ) ) {
                if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)106.5) ) ) {
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
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)102.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.7272727272727273;
                      result[3] += 0.2727272727272727;
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
                  }
                } else {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)104.5) ) ) {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
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
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85) ) ) {
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
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)101) ) ) {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)105) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)88.5) ) ) {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)107.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.6875;
                      result[3] += 0.3125;
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
                    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)113.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.8823529411764706;
                      result[3] += 0.11764705882352941;
                      result[4] += 0;
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
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)101) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)107) ) ) {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)106.5) ) ) {
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
                  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)120.5) ) ) {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)91) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.7333333333333333;
                      result[3] += 0.26666666666666666;
                      result[4] += 0;
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
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)96) ) ) {
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
                if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)88) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)105) ) ) {
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
                    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.9393939393939394;
                      result[3] += 0.06060606060606061;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.9955156950672646;
                      result[3] += 0.004484304932735426;
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)114) ) ) {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)50.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)87.5) ) ) {
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
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)76) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)55.5) ) ) {
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
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)59.5) ) ) {
                if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)77) ) ) {
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
            }
          } else {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)78.5) ) ) {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)51) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)79) ) ) {
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
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)76) ) ) {
                if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
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
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63) ) ) {
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
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)66.5) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
                if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)68.5) ) ) {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)57.5) ) ) {
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
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)62) ) ) {
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
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)85.5) ) ) {
                if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)60) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)54.5) ) ) {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
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
                      result[3] += 0.6666666666666666;
                      result[4] += 0;
                      result[5] += 0.3333333333333333;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)77.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.015873015873015872;
                      result[4] += 0.003527336860670194;
                      result[5] += 0.9805996472663139;
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
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)60) ) ) {
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
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)65.5) ) ) {
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)89) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)67.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.1875;
                      result[4] += 0.0625;
                      result[5] += 0.75;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.03296703296703297;
                      result[4] += 0.01098901098901099;
                      result[5] += 0.9560439560439561;
                    }
                  } else {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)81) ) ) {
                      result[0] += 0;
                      result[1] += 0.6;
                      result[2] += 0;
                      result[3] += 0.4;
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
                  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)74) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)69.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.1111111111111111;
                      result[5] += 0.8888888888888888;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.9230769230769231;
                      result[5] += 0.07692307692307693;
                    }
                  } else {
                    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)80.5) ) ) {
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
                      result[3] += 0.07407407407407407;
                      result[4] += 0.1111111111111111;
                      result[5] += 0.8148148148148148;
                    }
                  }
                }
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)74) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)58) ) ) {
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
                      result[3] += 0.12244897959183673;
                      result[4] += 0;
                      result[5] += 0.8775510204081632;
                    }
                  }
                } else {
                  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78) ) ) {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)81) ) ) {
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
            }
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)86) ) ) {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)63.5) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
                if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)62.5) ) ) {
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
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)103) ) ) {
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
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61) ) ) {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)64.5) ) ) {
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
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)89.5) ) ) {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61) ) ) {
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
                      result[3] += 0.11;
                      result[4] += 0.02;
                      result[5] += 0.87;
                    }
                  } else {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)81) ) ) {
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
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)80) ) ) {
                    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)85) ) ) {
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
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87.5) ) ) {
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
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)70.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)87.5) ) ) {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)87.5) ) ) {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)72.5) ) ) {
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
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)88) ) ) {
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
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)95.5) ) ) {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)75.5) ) ) {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)96.5) ) ) {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)65) ) ) {
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
                      result[3] += 0.9719626168224299;
                      result[4] += 0;
                      result[5] += 0.028037383177570093;
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
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)74) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)49) ) ) {
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
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)56.5) ) ) {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)54) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)67) ) ) {
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
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)119.5) ) ) {
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)44.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)71.5) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)80) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)80) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)52) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
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
                  }
                }
              }
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)51.5) ) ) {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)55.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
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
                if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)51) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)78) ) ) {
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)65.5) ) ) {
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
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)62) ) ) {
                      result[0] += 0.07142857142857142;
                      result[1] += 0.07142857142857142;
                      result[2] += 0.14285714285714285;
                      result[3] += 0;
                      result[4] += 0.7142857142857143;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.1111111111111111;
                      result[3] += 0.3333333333333333;
                      result[4] += 0.05555555555555555;
                      result[5] += 0.5;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)105) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)110.5) ) ) {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)78.5) ) ) {
                      result[0] += 0.6666666666666666;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
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
                    result[0] += 0;
                    result[1] += 1;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89.5) ) ) {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)65) ) ) {
                      result[0] += 0.8873239436619719;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.014084507042253521;
                      result[4] += 0.028169014084507043;
                      result[5] += 0.07042253521126761;
                    } else {
                      result[0] += 0;
                      result[1] += 0.08333333333333333;
                      result[2] += 0.16666666666666666;
                      result[3] += 0.20833333333333334;
                      result[4] += 0.375;
                      result[5] += 0.16666666666666666;
                    }
                  } else {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
                      result[0] += 0.25;
                      result[1] += 0.125;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.625;
                      result[5] += 0;
                    } else {
                      result[0] += 0.9737417943107222;
                      result[1] += 0.0010940919037199126;
                      result[2] += 0.0010940919037199126;
                      result[3] += 0.0065645514223194755;
                      result[4] += 0.015317286652078776;
                      result[5] += 0.0021881838074398253;
                    }
                  }
                }
              } else {
                if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)108.5) ) ) {
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)114) ) ) {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)87) ) ) {
                      result[0] += 0.03225806451612903;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.8709677419354839;
                      result[4] += 0;
                      result[5] += 0.0967741935483871;
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
                    result[1] += 1;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)92) ) ) {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)106.5) ) ) {
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
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)99.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.6666666666666666;
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
                }
              }
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)69) ) ) {
                if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)56) ) ) {
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
          } else {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86) ) ) {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)67.5) ) ) {
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103.5) ) ) {
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
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
                    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)64.5) ) ) {
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
                      result[3] += 0.7037037037037037;
                      result[4] += 0;
                      result[5] += 0.2962962962962963;
                    }
                  } else {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.045454545454545456;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0.9545454545454546;
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
                if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)82) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)95.5) ) ) {
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
                } else {
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)77) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)90) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.42105263157894735;
                      result[4] += 0;
                      result[5] += 0.5789473684210527;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.8275862068965517;
                      result[4] += 0.06896551724137931;
                      result[5] += 0.10344827586206896;
                    }
                  } else {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
                      result[0] += 0.09090909090909091;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.3181818181818182;
                      result[4] += 0;
                      result[5] += 0.5909090909090909;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.4864864864864865;
                      result[3] += 0.35135135135135137;
                      result[4] += 0;
                      result[5] += 0.16216216216216217;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
                if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)96.5) ) ) {
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)98.5) ) ) {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)105.5) ) ) {
                      result[0] += 0.08333333333333333;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
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
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96) ) ) {
                      result[0] += 0.09523809523809523;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.23809523809523808;
                      result[4] += 0.6666666666666666;
                      result[5] += 0;
                    } else {
                      result[0] += 0.42857142857142855;
                      result[1] += 0;
                      result[2] += 0.5714285714285714;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)65) ) ) {
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
                if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)96.5) ) ) {
                  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)93.5) ) ) {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
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
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)77) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.3333333333333333;
                      result[4] += 0;
                      result[5] += 0.6666666666666666;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.8924731182795699;
                      result[3] += 0.08602150537634409;
                      result[4] += 0;
                      result[5] += 0.021505376344086023;
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
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)98.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)90.5) ) ) {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)89.5) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)65.5) ) ) {
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
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
                if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)98) ) ) {
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
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)80) ) ) {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
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
                if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)96.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)88.5) ) ) {
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
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)95.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)101) ) ) {
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
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)84) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)80.5) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)100.5) ) ) {
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
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)76.5) ) ) {
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
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)75) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)98.5) ) ) {
                if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)69.5) ) ) {
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
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)100) ) ) {
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
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)82.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)95.5) ) ) {
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)76) ) ) {
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
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)74) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)63.5) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)80.5) ) ) {
                if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)118.5) ) ) {
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
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)89) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                } else {
                  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
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
                if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)99.5) ) ) {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)98) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)69.5) ) ) {
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
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)92.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.75;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0.25;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.96875;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0.03125;
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
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)82.5) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)101) ) ) {
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
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)96.5) ) ) {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)76.5) ) ) {
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
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)112) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)100.5) ) ) {
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
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)85) ) ) {
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
                  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)107) ) ) {
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
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)83) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)93.5) ) ) {
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
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)69) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)100.5) ) ) {
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
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)104.5) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)110.5) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)102.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.9;
                      result[3] += 0.1;
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
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)106) ) ) {
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
                  }
                }
              } else {
                if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)105.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)115.5) ) ) {
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
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)86.5) ) ) {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)103.5) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)111.5) ) ) {
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
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)80.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.5555555555555556;
                      result[3] += 0.4444444444444444;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.9052631578947369;
                      result[3] += 0.09473684210526316;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85.5) ) ) {
                  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)103.5) ) ) {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)109.5) ) ) {
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
                } else {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)91.5) ) ) {
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
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)67.5) ) ) {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)59.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)49) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)74) ) ) {
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)95.5) ) ) {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)54.5) ) ) {
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
                      result[4] += 0.9772727272727273;
                      result[5] += 0.022727272727272728;
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
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)53) ) ) {
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
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)55.5) ) ) {
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
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)58) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)68.5) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)84.5) ) ) {
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)74) ) ) {
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
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)51.5) ) ) {
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
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)59) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)57.5) ) ) {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)56) ) ) {
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
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)91.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.010507880910683012;
                      result[4] += 0.0017513134851138354;
                      result[5] += 0.9877408056042032;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.5;
                      result[4] += 0;
                      result[5] += 0.5;
                    }
                  } else {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)85) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.03571428571428571;
                      result[4] += 0;
                      result[5] += 0.9642857142857143;
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
              }
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)64.5) ) ) {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75) ) ) {
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
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)76) ) ) {
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)66.5) ) ) {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)57.5) ) ) {
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
                    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.30303030303030304;
                      result[4] += 0.24242424242424243;
                      result[5] += 0.45454545454545453;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.07692307692307693;
                      result[5] += 0.9230769230769231;
                    }
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)100.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.08641975308641975;
                      result[4] += 0.006172839506172839;
                      result[5] += 0.9074074074074074;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)81.5) ) ) {
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
                      result[3] += 0.8888888888888888;
                      result[4] += 0;
                      result[5] += 0.1111111111111111;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)69.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)63) ) ) {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)55) ) ) {
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
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)83.5) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)111) ) ) {
                if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)108.5) ) ) {
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)88.5) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)71.5) ) ) {
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
                      result[4] += 0.3333333333333333;
                      result[5] += 0.6666666666666666;
                    }
                  } else {
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.24;
                      result[4] += 0.05333333333333334;
                      result[5] += 0.7066666666666667;
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
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)63.5) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)60.5) ) ) {
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
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)80) ) ) {
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)82) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
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
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  }
                }
              } else {
                if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)96.5) ) ) {
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)65.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.007751937984496124;
                      result[3] += 0.9224806201550387;
                      result[4] += 0;
                      result[5] += 0.06976744186046512;
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
            }
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)50) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)56.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)123.5) ) ) {
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
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)71.5) ) ) {
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
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)65.5) ) ) {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)67.5) ) ) {
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
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)57.5) ) ) {
                  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)65.5) ) ) {
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
            }
          } else {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)55.5) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)99.5) ) ) {
                if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)65) ) ) {
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
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)61) ) ) {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)33) ) ) {
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
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)113.5) ) ) {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)66.5) ) ) {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)66.5) ) ) {
                      result[0] += 0.16666666666666666;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.75;
                      result[5] += 0.08333333333333333;
                    } else {
                      result[0] += 0;
                      result[1] += 0.29411764705882354;
                      result[2] += 0;
                      result[3] += 0.17647058823529413;
                      result[4] += 0;
                      result[5] += 0.5294117647058824;
                    }
                  } else {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
                      result[0] += 0;
                      result[1] += 0.012345679012345678;
                      result[2] += 0.024691358024691357;
                      result[3] += 0.5308641975308642;
                      result[4] += 0;
                      result[5] += 0.43209876543209874;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.01818181818181818;
                      result[3] += 0.14545454545454545;
                      result[4] += 0.03636363636363636;
                      result[5] += 0.8;
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
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)74.5) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)68.5) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)99.5) ) ) {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)74) ) ) {
                  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)74) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)52) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0.10526315789473684;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.8947368421052632;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)53.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)48) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0.29411764705882354;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.7058823529411765;
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
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)69.5) ) ) {
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)97) ) ) {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)57.5) ) ) {
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
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)82.5) ) ) {
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
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)56.5) ) ) {
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
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)90.5) ) ) {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)67.5) ) ) {
                      result[0] += 0.9710610932475884;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.006430868167202572;
                      result[4] += 0.01929260450160772;
                      result[5] += 0.003215434083601286;
                    } else {
                      result[0] += 0.4861111111111111;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.18055555555555555;
                      result[4] += 0.19444444444444445;
                      result[5] += 0.1388888888888889;
                    }
                  } else {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
                      result[0] += 0.3076923076923077;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.11538461538461539;
                      result[4] += 0.5769230769230769;
                      result[5] += 0;
                    } else {
                      result[0] += 0.8666666666666667;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.13333333333333333;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)40) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)73) ) ) {
                      result[0] += 0.4;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.6;
                      result[5] += 0;
                    } else {
                      result[0] += 0.9903536977491961;
                      result[1] += 0;
                      result[2] += 0.001607717041800643;
                      result[3] += 0;
                      result[4] += 0.008038585209003215;
                      result[5] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)111.5) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)101.5) ) ) {
                if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)99) ) ) {
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)80.5) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)81) ) ) {
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
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)93) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0.3333333333333333;
                      result[2] += 0.3333333333333333;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0.3333333333333333;
                    }
                  }
                } else {
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.038461538461538464;
                      result[3] += 0.23076923076923078;
                      result[4] += 0;
                      result[5] += 0.7307692307692307;
                    }
                  } else {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)96.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0.09090909090909091;
                      result[1] += 0.045454545454545456;
                      result[2] += 0.5;
                      result[3] += 0.22727272727272727;
                      result[4] += 0;
                      result[5] += 0.13636363636363635;
                    }
                  }
                }
              } else {
                if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)100.5) ) ) {
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
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
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)83.5) ) ) {
                      result[0] += 0;
                      result[1] += 0.04761904761904762;
                      result[2] += 0.523809523809524;
                      result[3] += 0.33333333333333337;
                      result[4] += 0.09523809523809525;
                      result[5] += 0;
                    } else {
                      result[0] += 0.16666666666666666;
                      result[1] += 0.16666666666666666;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0.6666666666666666;
                    }
                  }
                } else {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)116) ) ) {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)96) ) ) {
                      result[0] += 0.017241379310344827;
                      result[1] += 0;
                      result[2] += 0.8620689655172413;
                      result[3] += 0.10344827586206896;
                      result[4] += 0.017241379310344827;
                      result[5] += 0;
                    } else {
                      result[0] += 0.5;
                      result[1] += 0.5;
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
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)78) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)106) ) ) {
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
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)114.5) ) ) {
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)94) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)92.5) ) ) {
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
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)87) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)94.5) ) ) {
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
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)107.5) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)88.5) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)71) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)89.5) ) ) {
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
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)102.5) ) ) {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)83) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)69.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)83) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.0847457627118644;
                      result[3] += 0.9152542372881356;
                      result[4] += 0;
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
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86) ) ) {
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
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
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
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)98) ) ) {
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
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
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
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)99) ) ) {
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
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)97.5) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91.5) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)107) ) ) {
                if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)102.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)93.5) ) ) {
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
                if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)113.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)116.5) ) ) {
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
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)64.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)98.5) ) ) {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)104.5) ) ) {
                    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)101.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.33333333333333337;
                      result[3] += 0.5000000000000001;
                      result[4] += 0;
                      result[5] += 0.16666666666666669;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.8620689655172413;
                      result[3] += 0.13793103448275862;
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
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
                    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)85.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.7450980392156863;
                      result[3] += 0.2549019607843137;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0.029411764705882353;
                      result[1] += 0;
                      result[2] += 0.9117647058823529;
                      result[3] += 0.058823529411764705;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)85.5) ) ) {
                      result[0] += 0.5;
                      result[1] += 0;
                      result[2] += 0.5;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.9863013698630136;
                      result[3] += 0.0136986301369863;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)121) ) ) {
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
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)105.5) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)104.5) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)105) ) ) {
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)81) ) ) {
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
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)101.5) ) ) {
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
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)86.5) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)117.5) ) ) {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)103.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)83.5) ) ) {
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
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)83) ) ) {
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
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)97.5) ) ) {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)86.5) ) ) {
                  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)113.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
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
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)126.5) ) ) {
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
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)43.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)107) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)50) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
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
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)89.5) ) ) {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)69.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)56) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)61.5) ) ) {
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
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)56.5) ) ) {
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
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)67.5) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)54) ) ) {
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
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)84.5) ) ) {
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
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)56.5) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59) ) ) {
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
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)81) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)79.5) ) ) {
                if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)63) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)59) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)56.5) ) ) {
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
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)48) ) ) {
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
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)64.5) ) ) {
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
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)80.5) ) ) {
                if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)72.5) ) ) {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)75.5) ) ) {
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
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)60) ) ) {
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
                if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)67) ) ) {
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
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)60.5) ) ) {
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
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)74.5) ) ) {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)91) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.0016129032258064516;
                      result[4] += 0;
                      result[5] += 0.9983870967741936;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.12;
                      result[4] += 0;
                      result[5] += 0.88;
                    }
                  } else {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
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
                      result[3] += 0.6;
                      result[4] += 0;
                      result[5] += 0.4;
                    }
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
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)81) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.09090909090909091;
                      result[4] += 0;
                      result[5] += 0.9090909090909091;
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
            }
          } else {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)88.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)78.5) ) ) {
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
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                }
              } else {
                if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)59) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)59) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 1;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.006622516556291391;
                      result[3] += 0.08609271523178808;
                      result[4] += 0.039735099337748346;
                      result[5] += 0.8675496688741722;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)80) ) ) {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)56) ) ) {
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
                      result[3] += 0.06976744186046512;
                      result[4] += 0.046511627906976744;
                      result[5] += 0.8837209302325582;
                    }
                  } else {
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)80) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.32;
                      result[4] += 0.08;
                      result[5] += 0.6;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.7368421052631579;
                      result[4] += 0;
                      result[5] += 0.2631578947368421;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)67.5) ) ) {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)83) ) ) {
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
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)82) ) ) {
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
                      result[3] += 0.7;
                      result[4] += 0;
                      result[5] += 0.3;
                    }
                  }
                } else {
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
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
                if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)83) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                } else {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)74.5) ) ) {
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)64.5) ) ) {
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
                      result[3] += 0.9404761904761905;
                      result[4] += 0;
                      result[5] += 0.05952380952380952;
                    }
                  } else {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)85.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.125;
                      result[5] += 0.875;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.07692307692307693;
                      result[3] += 0.6153846153846154;
                      result[4] += 0;
                      result[5] += 0.3076923076923077;
                    }
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)92.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)48) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)57.5) ) ) {
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
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)87.5) ) ) {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)98.5) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)34.5) ) ) {
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
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)64.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)64.5) ) ) {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73.5) ) ) {
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
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)85.5) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)95) ) ) {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)54.5) ) ) {
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
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)68.5) ) ) {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)52.5) ) ) {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)69) ) ) {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)49.5) ) ) {
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
                if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)94.5) ) ) {
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
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)78) ) ) {
                if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)124.5) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)76) ) ) {
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
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)68.5) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)47.5) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)54.5) ) ) {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)54.5) ) ) {
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
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)99.5) ) ) {
                      result[0] += 0;
                      result[1] += 0.06451612903225806;
                      result[2] += 0;
                      result[3] += 0.0967741935483871;
                      result[4] += 0.8387096774193549;
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
              }
            } else {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)83.5) ) ) {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78) ) ) {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)59.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.2;
                      result[3] += 0;
                      result[4] += 0.4;
                      result[5] += 0.4;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.7857142857142857;
                      result[4] += 0;
                      result[5] += 0.21428571428571427;
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
                if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)58.5) ) ) {
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)112.5) ) ) {
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
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)67.5) ) ) {
                      result[0] += 0.4583333333333333;
                      result[1] += 0.08333333333333333;
                      result[2] += 0;
                      result[3] += 0.20833333333333334;
                      result[4] += 0.25;
                      result[5] += 0;
                    } else {
                      result[0] += 0.9807073954983924;
                      result[1] += 0;
                      result[2] += 0.001071811361200429;
                      result[3] += 0.004287245444801716;
                      result[4] += 0.012861736334405146;
                      result[5] += 0.001071811361200429;
                    }
                  } else {
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)95) ) ) {
                      result[0] += 0.22727272727272727;
                      result[1] += 0.09090909090909091;
                      result[2] += 0;
                      result[3] += 0.22727272727272727;
                      result[4] += 0.4090909090909091;
                      result[5] += 0.045454545454545456;
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
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)90.5) ) ) {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)84) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)68.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
                    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)59.5) ) ) {
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
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 1;
                    }
                  } else {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.011627906976744186;
                      result[3] += 0.7906976744186046;
                      result[4] += 0.011627906976744186;
                      result[5] += 0.18604651162790697;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.16666666666666666;
                      result[3] += 0.25;
                      result[4] += 0;
                      result[5] += 0.5833333333333334;
                    }
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)92.5) ) ) {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)98.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.10714285714285714;
                      result[4] += 0;
                      result[5] += 0.8928571428571429;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)101) ) ) {
                      result[0] += 0.14285714285714285;
                      result[1] += 0;
                      result[2] += 0.8571428571428571;
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
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)97) ) ) {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)89) ) ) {
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
                if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
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
                  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)92.5) ) ) {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73) ) ) {
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
                      result[3] += 0.3333333333333333;
                      result[4] += 0;
                      result[5] += 0.6666666666666666;
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
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)118) ) ) {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)64) ) ) {
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
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)99.5) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)85) ) ) {
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
                if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)98) ) ) {
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
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)82) ) ) {
                      result[0] += 0.9827586206896551;
                      result[1] += 0;
                      result[2] += 0.017241379310344827;
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
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
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
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)76) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)91.5) ) ) {
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
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)81.5) ) ) {
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)83.5) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)76) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)66.5) ) ) {
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
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)84) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)74.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                } else {
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)118) ) ) {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.9090909090909091;
                      result[4] += 0;
                      result[5] += 0.09090909090909091;
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
                    result[1] += 1;
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
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)88) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
                if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)98.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.75;
                      result[4] += 0;
                      result[5] += 0.25;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.875;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0.125;
                    }
                  } else {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)83.5) ) ) {
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
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93.5) ) ) {
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)80.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82.5) ) ) {
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
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79) ) ) {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)83.5) ) ) {
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
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)106.5) ) ) {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
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
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)98.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)85) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.90625;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0.09375;
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
                if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)99) ) ) {
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
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)72.5) ) ) {
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)89) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)64.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)89) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
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
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)113.5) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)95.5) ) ) {
                if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)92.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)86) ) ) {
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
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)98.5) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)87.5) ) ) {
                if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)67) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)87.5) ) ) {
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
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)109) ) ) {
                if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101) ) ) {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)102) ) ) {
                    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83) ) ) {
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
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)85) ) ) {
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)100.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)96.5) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)81) ) ) {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
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
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)86.5) ) ) {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)96.5) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)110.5) ) ) {
                if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)92.5) ) ) {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)83) ) ) {
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
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)80) ) ) {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)99) ) ) {
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
                if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)111.5) ) ) {
                  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)106.5) ) ) {
                    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)117) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.872;
                      result[3] += 0.128;
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
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)116) ) ) {
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
                  }
                } else {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)89.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.9444444444444444;
                      result[3] += 0.05555555555555555;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)108.5) ) ) {
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
                  }
                }
              }
            }
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)100) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)82.5) ) ) {
                if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)85) ) ) {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)85) ) ) {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)83) ) ) {
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
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)108.5) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)119) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.9830508474576272;
                      result[3] += 0.01694915254237288;
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
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)108.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
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
                } else {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)105.5) ) ) {
                    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)86.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.9821428571428571;
                      result[3] += 0.017857142857142856;
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
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)126) ) ) {
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
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)95) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)53.5) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)68.5) ) ) {
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
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)64.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)74.5) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)69.5) ) ) {
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
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)113.5) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)86.5) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)54.5) ) ) {
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
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)43) ) ) {
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
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)51.5) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)56) ) ) {
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
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)69.5) ) ) {
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
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)68.5) ) ) {
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
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)75.5) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)55.5) ) ) {
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
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)68.5) ) ) {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)59.5) ) ) {
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
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)77.5) ) ) {
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
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)65.5) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)55.5) ) ) {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)58) ) ) {
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
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)69.5) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)55.5) ) ) {
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
                      result[3] += 0.008223684210526315;
                      result[4] += 0;
                      result[5] += 0.9917763157894737;
                    }
                  } else {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)67.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.2727272727272727;
                      result[4] += 0;
                      result[5] += 0.7272727272727273;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.029411764705882353;
                      result[4] += 0;
                      result[5] += 0.9705882352941176;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)59) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)58) ) ) {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)66) ) ) {
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
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)50.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.07575757575757576;
                      result[4] += 0.06565656565656566;
                      result[5] += 0.8585858585858586;
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
            }
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)72.5) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)74.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)56.5) ) ) {
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
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)96.5) ) ) {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)70.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                } else {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)83.5) ) ) {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)77) ) ) {
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
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)70.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.9523809523809523;
                      result[4] += 0;
                      result[5] += 0.047619047619047616;
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
                if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)70.5) ) ) {
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
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)84.5) ) ) {
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
              } else {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)95) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73) ) ) {
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
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)69) ) ) {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)88) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)90.5) ) ) {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)84) ) ) {
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
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
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
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)69) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)88) ) ) {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)76) ) ) {
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
            }
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)71.5) ) ) {
                if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)95) ) ) {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)67.5) ) ) {
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
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)94.5) ) ) {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)81.5) ) ) {
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
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
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
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)101) ) ) {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)107.5) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)81) ) ) {
                if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)40) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                } else {
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)61) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)48.5) ) ) {
                      result[0] += 0;
                      result[1] += 0.25;
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
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)41) ) ) {
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
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)110) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)60.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)85) ) ) {
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)65) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)49.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)78.5) ) ) {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)75.5) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.16666666666666666;
                      result[4] += 0.8333333333333334;
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
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)65) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)66.5) ) ) {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)83.5) ) ) {
                      result[0] += 0.7857142857142857;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.21428571428571427;
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
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)77) ) ) {
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
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)89.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
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
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)70.5) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)79.5) ) ) {
                if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)115.5) ) ) {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)70.5) ) ) {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)80) ) ) {
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
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)88) ) ) {
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
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)73.5) ) ) {
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
                if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)111.5) ) ) {
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)76) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)89) ) ) {
                      result[0] += 0.5;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.5;
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
              }
            } else {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)113.5) ) ) {
                if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)46.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)89.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.037037037037037035;
                      result[5] += 0.9629629629629629;
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
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
                      result[0] += 0;
                      result[1] += 0.02857142857142857;
                      result[2] += 0.047619047619047616;
                      result[3] += 0.6190476190476191;
                      result[4] += 0.09523809523809523;
                      result[5] += 0.20952380952380953;
                    } else {
                      result[0] += 0;
                      result[1] += 0.22727272727272727;
                      result[2] += 0.13636363636363635;
                      result[3] += 0.13636363636363635;
                      result[4] += 0;
                      result[5] += 0.5;
                    }
                  } else {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61) ) ) {
                      result[0] += 0;
                      result[1] += 0.25;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.75;
                      result[5] += 0;
                    } else {
                      result[0] += 0.041666666666666664;
                      result[1] += 0;
                      result[2] += 0.16666666666666666;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0.7916666666666666;
                    }
                  }
                }
              } else {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)72.5) ) ) {
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
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)72) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)57) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)89) ) ) {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)63.5) ) ) {
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
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
                if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96) ) ) {
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
                if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)86) ) ) {
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
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)82.5) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)63.5) ) ) {
                if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)106.5) ) ) {
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)108.5) ) ) {
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)71) ) ) {
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
                      result[4] += 1;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)83) ) ) {
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
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
                  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)74.5) ) ) {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)114.5) ) ) {
                      result[0] += 0.9803149606299213;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.0026246719160104987;
                      result[4] += 0.01706036745406824;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0.6666666666666666;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.3333333333333333;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)101) ) ) {
                      result[0] += 0.2727272727272727;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.6363636363636364;
                      result[5] += 0.09090909090909091;
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
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)90.5) ) ) {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
                      result[0] += 0.6363636363636364;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.36363636363636365;
                      result[5] += 0;
                    } else {
                      result[0] += 0.16666666666666666;
                      result[1] += 0;
                      result[2] += 0.8333333333333334;
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
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)102) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)89.5) ) ) {
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
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)91.5) ) ) {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)78) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)105.5) ) ) {
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
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)73.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)98.5) ) ) {
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
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
            }
          } else {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)86) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)93) ) ) {
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
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)105.5) ) ) {
                if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)86) ) ) {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)66.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.0641025641025641;
                      result[3] += 0.8461538461538461;
                      result[4] += 0.01282051282051282;
                      result[5] += 0.07692307692307693;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.3157894736842105;
                      result[3] += 0.42105263157894735;
                      result[4] += 0;
                      result[5] += 0.2631578947368421;
                    }
                  }
                } else {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
                    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
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
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
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
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59.5) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)97) ) ) {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)91.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.5;
                      result[4] += 0.5;
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
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)104) ) ) {
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
                      result[4] += 0;
                      result[5] += 0.3333333333333333;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)50) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)98) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)72.5) ) ) {
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)80) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
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
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)74.5) ) ) {
                  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)89.5) ) ) {
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
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)96.5) ) ) {
                if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)98) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
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
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)92.5) ) ) {
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
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
                  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)83) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)77.5) ) ) {
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
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)80) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.30000000000000004;
                      result[3] += 0.6000000000000001;
                      result[4] += 0;
                      result[5] += 0.10000000000000002;
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
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)95.5) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)92.5) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)99) ) ) {
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
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)83) ) ) {
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
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73) ) ) {
                if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)93) ) ) {
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
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)100.5) ) ) {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.6;
                      result[3] += 0.4;
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
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.9259259259259259;
                      result[3] += 0.07407407407407407;
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
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
                      result[0] += 0.42857142857142855;
                      result[1] += 0;
                      result[2] += 0.5714285714285714;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.9142857142857143;
                      result[3] += 0.08571428571428572;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)98.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)86) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)96.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)122.5) ) ) {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.625;
                      result[3] += 0.375;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.9172932330827067;
                      result[3] += 0.08270676691729323;
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
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)70.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)105.5) ) ) {
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
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)79.5) ) ) {
                  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)103.5) ) ) {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)105.5) ) ) {
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
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)89.5) ) ) {
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
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)98.5) ) ) {
                    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)111) ) ) {
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
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)130.5) ) ) {
                      result[0] += 0.001718213058419244;
                      result[1] += 0;
                      result[2] += 0.9879725085910653;
                      result[3] += 0.010309278350515464;
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
                }
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)46.5) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)109) ) ) {
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
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)68) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)37) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)56.5) ) ) {
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
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)72.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)69) ) ) {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)77.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                } else {
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)56.5) ) ) {
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
                if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)85.5) ) ) {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69) ) ) {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)60) ) ) {
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
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)58) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)69) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)85) ) ) {
                if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)74.5) ) ) {
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)70) ) ) {
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
                  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)73) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.95;
                      result[5] += 0.05;
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
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)56) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
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
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)59.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)77.5) ) ) {
                  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)54.5) ) ) {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)57) ) ) {
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
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)60.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.1;
                      result[4] += 0.5;
                      result[5] += 0.4;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.014647137150466045;
                      result[4] += 0.011984021304926764;
                      result[5] += 0.9733688415446072;
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
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)69) ) ) {
                if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)80) ) ) {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)60) ) ) {
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)90) ) ) {
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
                } else {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)81.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
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
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)94.5) ) ) {
                  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)63.5) ) ) {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
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
                      result[3] += 0;
                      result[4] += 1;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.09090909090909091;
                      result[5] += 0.9090909090909091;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.36363636363636365;
                      result[4] += 0;
                      result[5] += 0.6363636363636364;
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
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87.5) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75) ) ) {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)69.5) ) ) {
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
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)68.5) ) ) {
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
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)82.5) ) ) {
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)56) ) ) {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)71) ) ) {
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
                  result[4] += 1;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)68.5) ) ) {
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)52) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)96.5) ) ) {
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
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85) ) ) {
                    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.05;
                      result[3] += 0.05;
                      result[4] += 0;
                      result[5] += 0.9;
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
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)117.5) ) ) {
                if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)87.5) ) ) {
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)72.5) ) ) {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.9090909090909091;
                      result[4] += 0;
                      result[5] += 0.09090909090909091;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.2857142857142857;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0.7142857142857143;
                    }
                  } else {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)88) ) ) {
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
                      result[3] += 0.6666666666666666;
                      result[4] += 0;
                      result[5] += 0.3333333333333333;
                    }
                  }
                } else {
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)102.5) ) ) {
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)77) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.967032967032967;
                      result[4] += 0.01098901098901099;
                      result[5] += 0.02197802197802198;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.6818181818181818;
                      result[4] += 0;
                      result[5] += 0.3181818181818182;
                    }
                  } else {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)98.5) ) ) {
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
              } else {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)69) ) ) {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)70.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
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
                if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
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
            }
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)95) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)62) ) ) {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)49) ) ) {
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
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)91) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)71) ) ) {
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
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)70.5) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)68.5) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)57.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)78.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                } else {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)76) ) ) {
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
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65) ) ) {
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
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)54.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)98) ) ) {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)84.5) ) ) {
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
                      result[3] += 0.6666666666666666;
                      result[4] += 0;
                      result[5] += 0.3333333333333333;
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
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)106.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)54.5) ) ) {
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)80.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)53) ) ) {
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
                  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)80) ) ) {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)78) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.9811320754716981;
                      result[5] += 0.018867924528301886;
                    } else {
                      result[0] += 0.16666666666666666;
                      result[1] += 0.8333333333333334;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)55.5) ) ) {
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
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
                  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)79) ) ) {
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
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)67.5) ) ) {
                      result[0] += 0.4642857142857143;
                      result[1] += 0.03571428571428571;
                      result[2] += 0;
                      result[3] += 0.10714285714285714;
                      result[4] += 0.39285714285714285;
                      result[5] += 0;
                    } else {
                      result[0] += 0.9609856262833676;
                      result[1] += 0.001026694045174538;
                      result[2] += 0;
                      result[3] += 0.009240246406570842;
                      result[4] += 0.02566735112936345;
                      result[5] += 0.003080082135523614;
                    }
                  }
                } else {
                  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)94.5) ) ) {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)70.5) ) ) {
                      result[0] += 0;
                      result[1] += 0.18181818181818182;
                      result[2] += 0;
                      result[3] += 0.18181818181818182;
                      result[4] += 0.18181818181818182;
                      result[5] += 0.45454545454545453;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)99.5) ) ) {
                      result[0] += 0;
                      result[1] += 0.1111111111111111;
                      result[2] += 0.8888888888888888;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0.7368421052631579;
                      result[1] += 0;
                      result[2] += 0.21052631578947367;
                      result[3] += 0;
                      result[4] += 0.05263157894736842;
                      result[5] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97.5) ) ) {
                if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)105.5) ) ) {
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
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)87.5) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)71.5) ) ) {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)66.5) ) ) {
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
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 1;
                    }
                  } else {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
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
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)95.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103.5) ) ) {
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
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)74) ) ) {
                  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)59.5) ) ) {
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
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
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)86.5) ) ) {
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
                      result[4] += 0.25;
                      result[5] += 0.75;
                    }
                  }
                } else {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)86) ) ) {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65.5) ) ) {
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
                      result[3] += 0.09803921568627451;
                      result[4] += 0;
                      result[5] += 0.9019607843137255;
                    }
                  } else {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)89.5) ) ) {
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
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)77) ) ) {
                if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)97.5) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)71) ) ) {
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
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)78) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97) ) ) {
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
                  }
                }
              } else {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)68.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.75;
                      result[4] += 0;
                      result[5] += 0.25;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.08333333333333333;
                      result[3] += 0.25;
                      result[4] += 0;
                      result[5] += 0.6666666666666666;
                    }
                  } else {
                    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.06666666666666667;
                      result[3] += 0.9333333333333333;
                      result[4] += 0;
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
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)98) ) ) {
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
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93.5) ) ) {
                      result[0] += 0;
                      result[1] += 0.5;
                      result[2] += 0;
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
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)96) ) ) {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)70.5) ) ) {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)95.5) ) ) {
                    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)64.5) ) ) {
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
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)82) ) ) {
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
                      result[3] += 0.6;
                      result[4] += 0.4;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)96.5) ) ) {
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
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96) ) ) {
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
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81.5) ) ) {
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)89) ) ) {
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
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)91) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)75.5) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)88.5) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77.5) ) ) {
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
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)69) ) ) {
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
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)101) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
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
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71) ) ) {
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)72) ) ) {
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
                if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)81) ) ) {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)80) ) ) {
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
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)97) ) ) {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)98.5) ) ) {
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
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)88) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97.5) ) ) {
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)91.5) ) ) {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74) ) ) {
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
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
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
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)97) ) ) {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)85) ) ) {
                if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)91.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
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
            } else {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)75.5) ) ) {
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)113.5) ) ) {
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
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)79.5) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)101) ) ) {
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
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)88.5) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)68.5) ) ) {
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
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)97) ) ) {
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
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)91) ) ) {
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
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)105) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)117) ) ) {
                if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)76.5) ) ) {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)76) ) ) {
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
              } else {
                if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)109.5) ) ) {
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
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)97.5) ) ) {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)67.5) ) ) {
                if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
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
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)83) ) ) {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
                  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97) ) ) {
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
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
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
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
                if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
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
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)79.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
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
                  }
                }
              } else {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)85.5) ) ) {
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
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)124.5) ) ) {
                if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
                  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)103) ) ) {
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
                if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)106.5) ) ) {
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
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)97.5) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)96.5) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
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
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)86.5) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)83) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                } else {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)114) ) ) {
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)89.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.877906976744186;
                      result[3] += 0.12209302325581395;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.9690721649484536;
                      result[3] += 0.030927835051546393;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
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
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)100.5) ) ) {
                if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)102) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)87.5) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)104.5) ) ) {
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
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)99.5) ) ) {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)117.5) ) ) {
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
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)82.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.8571428571428571;
                      result[3] += 0.14285714285714285;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.9864864864864865;
                      result[3] += 0.013513513513513514;
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
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)84.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)59.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66) ) ) {
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
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)78) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
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
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78) ) ) {
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
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)70.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)56.5) ) ) {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)48.5) ) ) {
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
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)51.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)62.5) ) ) {
                if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)60.5) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)61.5) ) ) {
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
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)71) ) ) {
                if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)53.5) ) ) {
                  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)84.5) ) ) {
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
                  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)60.5) ) ) {
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)93.5) ) ) {
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
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)57.5) ) ) {
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)58.5) ) ) {
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
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)89.5) ) ) {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)56.5) ) ) {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)59.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)74) ) ) {
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
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61) ) ) {
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
                      result[3] += 0.020437956204379562;
                      result[4] += 0.013138686131386862;
                      result[5] += 0.9664233576642336;
                    }
                  } else {
                    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
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
                      result[3] += 0.09774436090225563;
                      result[4] += 0.07518796992481203;
                      result[5] += 0.8270676691729323;
                    }
                  }
                }
              } else {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)64.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.14814814814814814;
                      result[4] += 0.012345679012345678;
                      result[5] += 0.8395061728395061;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.5526315789473685;
                      result[4] += 0.02631578947368421;
                      result[5] += 0.42105263157894735;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)65.5) ) ) {
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
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)96.5) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)85.5) ) ) {
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
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)97.5) ) ) {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)72.5) ) ) {
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
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)71) ) ) {
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
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)69.5) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)54) ) ) {
                if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)52.5) ) ) {
                  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
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
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)64) ) ) {
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
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)55) ) ) {
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
                if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)41.5) ) ) {
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
                    result[4] += 0;
                    result[5] += 1;
                  }
                } else {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)74) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)48.5) ) ) {
                      result[0] += 0;
                      result[1] += 0.5;
                      result[2] += 0;
                      result[3] += 0.375;
                      result[4] += 0.125;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0.008771929824561403;
                      result[2] += 0.008771929824561403;
                      result[3] += 0.008771929824561403;
                      result[4] += 0.9210526315789473;
                      result[5] += 0.05263157894736842;
                    }
                  } else {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)56.5) ) ) {
                      result[0] += 0.6666666666666666;
                      result[1] += 0;
                      result[2] += 0.06666666666666667;
                      result[3] += 0;
                      result[4] += 0.26666666666666666;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.15789473684210525;
                      result[3] += 0.05263157894736842;
                      result[4] += 0.631578947368421;
                      result[5] += 0.15789473684210525;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)60.5) ) ) {
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)109) ) ) {
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77.5) ) ) {
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
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)65) ) ) {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)56.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)100) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)82.5) ) ) {
                      result[0] += 0.05555555555555555;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.9444444444444444;
                      result[5] += 0;
                    } else {
                      result[0] += 0.4;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.6;
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
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)100) ) ) {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)64.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)71.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.3389830508474576;
                      result[4] += 0;
                      result[5] += 0.6610169491525424;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.7142857142857143;
                      result[4] += 0.14285714285714285;
                      result[5] += 0.14285714285714285;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
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
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)71.5) ) ) {
                if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
                  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)52.5) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)54) ) ) {
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
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)67.5) ) ) {
                    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)78.5) ) ) {
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
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)95.5) ) ) {
                      result[0] += 0.9166666666666666;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.020833333333333332;
                      result[4] += 0.058333333333333334;
                      result[5] += 0.004166666666666667;
                    } else {
                      result[0] += 0.9955456570155903;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.0022271714922049;
                      result[4] += 0.0022271714922049;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)74) ) ) {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)69) ) ) {
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
                  } else {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0.35294117647058826;
                      result[1] += 0.058823529411764705;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.23529411764705882;
                      result[5] += 0.35294117647058826;
                    }
                  }
                } else {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)78) ) ) {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)89.5) ) ) {
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
                    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
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
                }
              }
            }
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)89.5) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)96.5) ) ) {
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)66) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)100.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.22727272727272727;
                      result[4] += 0.045454545454545456;
                      result[5] += 0.7272727272727273;
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
                  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)90) ) ) {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)85.5) ) ) {
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
                      result[4] += 0;
                      result[5] += 0.75;
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
                if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)117.5) ) ) {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.017857142857142856;
                      result[3] += 0.7738095238095238;
                      result[4] += 0.041666666666666664;
                      result[5] += 0.16666666666666666;
                    } else {
                      result[0] += 0;
                      result[1] += 0.025;
                      result[2] += 0.2;
                      result[3] += 0.325;
                      result[4] += 0;
                      result[5] += 0.45;
                    }
                  } else {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)98.5) ) ) {
                      result[0] += 0.047619047619047616;
                      result[1] += 0.047619047619047616;
                      result[2] += 0.09523809523809523;
                      result[3] += 0.2619047619047619;
                      result[4] += 0;
                      result[5] += 0.5476190476190477;
                    } else {
                      result[0] += 0.2;
                      result[1] += 0;
                      result[2] += 0.8;
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
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)88.5) ) ) {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)70) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)82) ) ) {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)102.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.3333333333333333;
                      result[3] += 0.6666666666666666;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.9047619047619048;
                      result[3] += 0.09523809523809523;
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
                if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)91) ) ) {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84.5) ) ) {
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
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)91) ) ) {
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
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)83) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)117) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)115) ) ) {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.25;
                      result[5] += 0.75;
                    } else {
                      result[0] += 0.875;
                      result[1] += 0;
                      result[2] += 0.125;
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
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)99.5) ) ) {
                      result[0] += 0.8333333333333334;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.16666666666666666;
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
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
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
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)69) ) ) {
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
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)85.5) ) ) {
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
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)90.5) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
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
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)82.5) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97.5) ) ) {
                    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
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
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)97.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.5;
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
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
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
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)114) ) ) {
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
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)88.5) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)101) ) ) {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)98) ) ) {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
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
                } else {
                  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)100.5) ) ) {
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
                if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)88) ) ) {
                  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
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
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)111.5) ) ) {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)93) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.782608695652174;
                      result[3] += 0.21739130434782608;
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
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)84.5) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)84) ) ) {
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
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)102.5) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)79.5) ) ) {
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
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)105) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)112.5) ) ) {
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
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)102.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)76.5) ) ) {
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
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)105) ) ) {
                if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)105) ) ) {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87) ) ) {
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
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)105) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)85) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)117.5) ) ) {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)110.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.75;
                      result[3] += 0.25;
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
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)90) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)107.5) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90) ) ) {
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
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)87) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
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
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)87) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.7894736842105263;
                      result[3] += 0.21052631578947367;
                      result[4] += 0;
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
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)131.5) ) ) {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)80.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)118.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)94) ) ) {
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
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80) ) ) {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)107) ) ) {
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
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)45) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)98.5) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
                if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)86.5) ) ) {
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)66) ) ) {
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
                }
              } else {
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)60.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                } else {
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)55.5) ) ) {
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
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)76.5) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)59) ) ) {
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
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)80.5) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)58) ) ) {
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
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)78) ) ) {
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)91) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)60.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)107.5) ) ) {
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)56) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
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
                      result[3] += 0.011589403973509934;
                      result[4] += 0.0016556291390728477;
                      result[5] += 0.9867549668874173;
                    }
                  }
                } else {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)71) ) ) {
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
            }
          } else {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)88) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)58) ) ) {
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)62.5) ) ) {
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
              }
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85) ) ) {
                if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)86) ) ) {
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
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)65) ) ) {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)56.5) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)57.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)49.5) ) ) {
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)68.5) ) ) {
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
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)65.5) ) ) {
                if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)74.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)77) ) ) {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)65) ) ) {
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
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)69.5) ) ) {
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
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)95.5) ) ) {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)63.5) ) ) {
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
            }
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)101.5) ) ) {
                if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)84.5) ) ) {
                  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)93) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)72.5) ) ) {
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
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)73.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)65) ) ) {
                      result[0] += 0.125;
                      result[1] += 0.125;
                      result[2] += 0;
                      result[3] += 0.5;
                      result[4] += 0.1875;
                      result[5] += 0.0625;
                    } else {
                      result[0] += 0;
                      result[1] += 0.012195121951219513;
                      result[2] += 0.018292682926829267;
                      result[3] += 0.2865853658536585;
                      result[4] += 0.012195121951219513;
                      result[5] += 0.6707317073170732;
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
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87.5) ) ) {
                if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
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
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)77) ) ) {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88) ) ) {
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
                      result[3] += 0.782608695652174;
                      result[4] += 0;
                      result[5] += 0.21739130434782608;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)81.5) ) ) {
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
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)80) ) ) {
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)70) ) ) {
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
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)94.5) ) ) {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)70.5) ) ) {
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
                      result[3] += 0.970873786407767;
                      result[4] += 0;
                      result[5] += 0.02912621359223301;
                    }
                  } else {
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
                      result[3] += 0.8;
                      result[4] += 0;
                      result[5] += 0.2;
                    }
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)48.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)85) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)83) ) ) {
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
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)70.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)98.5) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)108.5) ) ) {
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
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)70.5) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)42.5) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)85) ) ) {
                if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)93.5) ) ) {
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
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)35.5) ) ) {
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)131) ) ) {
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
                if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)54) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)95.5) ) ) {
                      result[0] += 0.05263157894736842;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.9473684210526315;
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
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)65.5) ) ) {
                      result[0] += 0.9411764705882353;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.058823529411764705;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0.5714285714285714;
                      result[2] += 0;
                      result[3] += 0.42857142857142855;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)72.5) ) ) {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)72.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 1;
                    } else {
                      result[0] += 0.0392156862745098;
                      result[1] += 0.00980392156862745;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.9313725490196079;
                      result[5] += 0.0196078431372549;
                    }
                  } else {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
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
            }
          } else {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)64.5) ) ) {
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)96.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)112) ) ) {
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
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)61.5) ) ) {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 1;
                      result[5] += 0;
                    } else {
                      result[0] += 0.9930555555555556;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.006944444444444444;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)82) ) ) {
                      result[0] += 0;
                      result[1] += 0.02702702702702703;
                      result[2] += 0;
                      result[3] += 0.16216216216216217;
                      result[4] += 0.5135135135135135;
                      result[5] += 0.2972972972972973;
                    } else {
                      result[0] += 0.6111111111111112;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.2222222222222222;
                      result[4] += 0.1388888888888889;
                      result[5] += 0.027777777777777776;
                    }
                  }
                } else {
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)67) ) ) {
                      result[0] += 0.9166666666666666;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0.08333333333333333;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.2;
                      result[3] += 0.4;
                      result[4] += 0;
                      result[5] += 0.4;
                    }
                  } else {
                    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
                      result[0] += 0.9817945383615084;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.0013003901170351106;
                      result[4] += 0.016905071521456438;
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
                }
              }
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)85.5) ) ) {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)89.5) ) ) {
                  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
                    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)102) ) ) {
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
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)58.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)81) ) ) {
                      result[0] += 0;
                      result[1] += 0.2;
                      result[2] += 0;
                      result[3] += 0.3;
                      result[4] += 0;
                      result[5] += 0.5;
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
                if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)113) ) ) {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)98.5) ) ) {
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
                      result[3] += 0.1111111111111111;
                      result[4] += 0.8888888888888888;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)89.5) ) ) {
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
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)121) ) ) {
                    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)120) ) ) {
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
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)78) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)65.5) ) ) {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)59.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)79) ) ) {
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
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)49.5) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)55.5) ) ) {
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
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.15384615384615385;
                      result[4] += 0.46153846153846156;
                      result[5] += 0.38461538461538464;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.05;
                      result[4] += 0.95;
                      result[5] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)111.5) ) ) {
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)77) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.85;
                      result[4] += 0.1;
                      result[5] += 0.05;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.14285714285714285;
                      result[3] += 0.14285714285714285;
                      result[4] += 0;
                      result[5] += 0.7142857142857143;
                    }
                  } else {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
                      result[0] += 0.019230769230769232;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.4423076923076923;
                      result[4] += 0.057692307692307696;
                      result[5] += 0.4807692307692308;
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
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.09090909090909091;
                      result[3] += 0.36363636363636365;
                      result[4] += 0;
                      result[5] += 0.5454545454545454;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.109375;
                      result[3] += 0.8125;
                      result[4] += 0;
                      result[5] += 0.078125;
                    }
                  } else {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)67) ) ) {
                      result[0] += 0.5;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.5;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.68;
                      result[3] += 0.16;
                      result[4] += 0.08;
                      result[5] += 0.08;
                    }
                  }
                }
              } else {
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)89.5) ) ) {
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
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90) ) ) {
                if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)88) ) ) {
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)60) ) ) {
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
                  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)97) ) ) {
                    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)113) ) ) {
                      result[0] += 0.2857142857142857;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.7142857142857143;
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
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)95) ) ) {
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
                if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)94.5) ) ) {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)121.5) ) ) {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)85.5) ) ) {
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
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)116) ) ) {
                if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)95.5) ) ) {
                  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)86) ) ) {
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
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77.5) ) ) {
                      result[0] += 0;
                      result[1] += 0.5;
                      result[2] += 0;
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
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
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
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)113.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.9456521739130435;
                      result[3] += 0.05434782608695652;
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
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
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
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)113.5) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)67) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)91.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)90.5) ) ) {
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
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)69.5) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)88) ) ) {
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
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)62) ) ) {
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
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)80) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74) ) ) {
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
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)98) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
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
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)75) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)81) ) ) {
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
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)89) ) ) {
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
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)69.5) ) ) {
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
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)87.5) ) ) {
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
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)79.5) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)95.5) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
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
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)98.5) ) ) {
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
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)105.5) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)92.5) ) ) {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
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
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)108.5) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)96.5) ) ) {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)78.5) ) ) {
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
                if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)99.5) ) ) {
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
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)106.5) ) ) {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)93.5) ) ) {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)92) ) ) {
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)99.5) ) ) {
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
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.9714285714285714;
                      result[3] += 0.02857142857142857;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.7758620689655172;
                      result[3] += 0.22413793103448276;
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
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83) ) ) {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)108) ) ) {
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
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)110.5) ) ) {
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
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)111.5) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)103.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)100) ) ) {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)70) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)82) ) ) {
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
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95) ) ) {
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
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)120.5) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)105) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)102.5) ) ) {
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
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)83) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)118.5) ) ) {
                if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)120.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)90.5) ) ) {
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
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)87.5) ) ) {
                if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
                    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)106.5) ) ) {
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
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81.5) ) ) {
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
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)105.5) ) ) {
                    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)102.5) ) ) {
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
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
                if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)90) ) ) {
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
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)86.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)92.5) ) ) {
                if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)111) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)106.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
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
                if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)85) ) ) {
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
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
                if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)106.5) ) ) {
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
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74) ) ) {
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)41) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)93) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)74.5) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)38.5) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)70) ) ) {
                      result[0] += 0.0051813471502590676;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.9948186528497409;
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
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)73) ) ) {
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
                      result[4] += 0.9565217391304348;
                      result[5] += 0.043478260869565216;
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
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)68) ) ) {
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
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)57.5) ) ) {
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
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)78.5) ) ) {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)79.5) ) ) {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)56) ) ) {
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
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78) ) ) {
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)68.5) ) ) {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)48.5) ) ) {
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
                      result[3] += 0.0060882800608828;
                      result[4] += 0.0076103500761035;
                      result[5] += 0.9863013698630136;
                    }
                  } else {
                    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)65.5) ) ) {
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
                      result[3] += 0.045454545454545456;
                      result[4] += 0;
                      result[5] += 0.9545454545454546;
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
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)64.5) ) ) {
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)51) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)91.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.04878048780487805;
                      result[4] += 0;
                      result[5] += 0.9512195121951219;
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
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)72.5) ) ) {
                    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)65.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 1;
                    } else {
                      result[0] += 0.047619047619047616;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.7619047619047619;
                      result[5] += 0.19047619047619047;
                    }
                  } else {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)72.5) ) ) {
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
                      result[3] += 0.22988505747126436;
                      result[4] += 0.034482758620689655;
                      result[5] += 0.735632183908046;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)76) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
                if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)69) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)63) ) ) {
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
                if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87) ) ) {
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
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)97.5) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)89.5) ) ) {
                  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.020202020202020204;
                      result[3] += 0.1111111111111111;
                      result[4] += 0.030303030303030304;
                      result[5] += 0.8383838383838383;
                    }
                  }
                } else {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)62) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)101) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.5416666666666666;
                      result[4] += 0;
                      result[5] += 0.4583333333333333;
                    } else {
                      result[0] += 0.8;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0.2;
                    }
                  }
                }
              } else {
                if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)70.5) ) ) {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)72) ) ) {
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
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
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
            }
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)97) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)89.5) ) ) {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)68.5) ) ) {
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
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
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
                  }
                } else {
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)102) ) ) {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
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
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81.5) ) ) {
                  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)65) ) ) {
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
                if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)98.5) ) ) {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)64) ) ) {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)65) ) ) {
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
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.05263157894736842;
                      result[3] += 0.10526315789473684;
                      result[4] += 0;
                      result[5] += 0.8421052631578947;
                    }
                  }
                } else {
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)70.5) ) ) {
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
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)67.5) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)41.5) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
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
                if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)89) ) ) {
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
                if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
                  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)52.5) ) ) {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)67.5) ) ) {
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
                    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)79.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.09090909090909091;
                      result[3] += 0;
                      result[4] += 0.09090909090909091;
                      result[5] += 0.8181818181818182;
                    } else {
                      result[0] += 0.125;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.5;
                      result[4] += 0.375;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)57.5) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)72) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 1;
                      result[5] += 0;
                    } else {
                      result[0] += 0.4;
                      result[1] += 0.4;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.2;
                      result[5] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)69) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
                if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59.5) ) ) {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)54.5) ) ) {
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
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)68.5) ) ) {
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
                      result[3] += 0.2222222222222222;
                      result[4] += 0.1111111111111111;
                      result[5] += 0.6666666666666666;
                    }
                  }
                }
              } else {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)94.5) ) ) {
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
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)67.5) ) ) {
                if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)92) ) ) {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)85) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)58.5) ) ) {
                      result[0] += 0;
                      result[1] += 0.5;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.5;
                      result[5] += 0;
                    } else {
                      result[0] += 0.8571428571428571;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.14285714285714285;
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
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)66) ) ) {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)93) ) ) {
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
                }
              } else {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)69.5) ) ) {
                  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)70.5) ) ) {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0.09090909090909091;
                      result[1] += 0.3181818181818182;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.5909090909090909;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)80) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 1;
                    } else {
                      result[0] += 0;
                      result[1] += 0.7142857142857143;
                      result[2] += 0;
                      result[3] += 0.2857142857142857;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)71.5) ) ) {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)65) ) ) {
                      result[0] += 0;
                      result[1] += 0.25;
                      result[2] += 0;
                      result[3] += 0.75;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0.9587301587301589;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.005291005291005292;
                      result[4] += 0.03386243386243387;
                      result[5] += 0.002116402116402117;
                    }
                  } else {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
                      result[0] += 0.07142857142857142;
                      result[1] += 0.07142857142857142;
                      result[2] += 0;
                      result[3] += 0.2857142857142857;
                      result[4] += 0.39285714285714285;
                      result[5] += 0.17857142857142858;
                    } else {
                      result[0] += 0.9714285714285714;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.02857142857142857;
                      result[5] += 0;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)108.5) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)99) ) ) {
                if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)90.5) ) ) {
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)85.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.2857142857142857;
                      result[4] += 0;
                      result[5] += 0.7142857142857143;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.09090909090909091;
                      result[4] += 0;
                      result[5] += 0.9090909090909091;
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
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)95) ) ) {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
                      result[0] += 0.014705882352941176;
                      result[1] += 0.007352941176470588;
                      result[2] += 0.11029411764705882;
                      result[3] += 0.6470588235294118;
                      result[4] += 0.014705882352941176;
                      result[5] += 0.20588235294117646;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.3;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0.7;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.1111111111111111;
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
                }
              } else {
                if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)76.5) ) ) {
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
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
                if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)98.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                } else {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)93.5) ) ) {
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
                if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)127.5) ) ) {
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101) ) ) {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80) ) ) {
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
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)97.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.5714285714285715;
                      result[3] += 0.14285714285714288;
                      result[4] += 0;
                      result[5] += 0.28571428571428575;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.9361702127659575;
                      result[3] += 0.06382978723404255;
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
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)92.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)92.5) ) ) {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
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
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103.5) ) ) {
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
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)97.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)66.5) ) ) {
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
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)100.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)103.5) ) ) {
                  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81.5) ) ) {
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
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)85.5) ) ) {
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
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)93) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)57.5) ) ) {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)68.5) ) ) {
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
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)83) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)65.5) ) ) {
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
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)74) ) ) {
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
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)74.5) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)67.5) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97) ) ) {
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
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)98) ) ) {
                  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)94) ) ) {
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
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
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
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)106.5) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)69) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)90.5) ) ) {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)87) ) ) {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)87.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 1;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.14473684210526316;
                      result[3] += 0.8421052631578947;
                      result[4] += 0;
                      result[5] += 0.013157894736842105;
                    }
                  } else {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77.5) ) ) {
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
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)114) ) ) {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)91) ) ) {
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
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)80) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93.5) ) ) {
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
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)113) ) ) {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)79.5) ) ) {
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
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)99) ) ) {
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
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)87.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)83.5) ) ) {
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)98) ) ) {
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)114.5) ) ) {
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
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)99.5) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)123.5) ) ) {
                if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.9323308270676691;
                      result[3] += 0.06766917293233082;
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
                } else {
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)117.5) ) ) {
                    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)84.5) ) ) {
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
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)104) ) ) {
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
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
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
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)64.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)88.5) ) ) {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)87) ) ) {
                  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)112.5) ) ) {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.7142857142857143;
                      result[3] += 0.2857142857142857;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.9594594594594594;
                      result[3] += 0.04054054054054054;
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
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)88.5) ) ) {
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
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.9830508474576272;
                      result[3] += 0.01694915254237288;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)108.5) ) ) {
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
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)85.5) ) ) {
                    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)122) ) ) {
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
