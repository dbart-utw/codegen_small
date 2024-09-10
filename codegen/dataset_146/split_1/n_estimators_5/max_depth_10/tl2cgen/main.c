
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
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)109) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
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
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
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
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)93) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)64.5) ) ) {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)69) ) ) {
                result[0] += 0;
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
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)74) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)80) ) ) {
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)55) ) ) {
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
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)42.5) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)63) ) ) {
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
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)69) ) ) {
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
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)76) ) ) {
                  result[0] += 0;
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
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)82) ) ) {
                    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)81.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 1;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.03225806451612903;
                      result[4] += 0;
                      result[5] += 0.967741935483871;
                    }
                  } else {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)57.5) ) ) {
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
                      result[3] += 0.057692307692307696;
                      result[4] += 0;
                      result[5] += 0.9423076923076923;
                    }
                  }
                } else {
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)59.5) ) ) {
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
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)80) ) ) {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)86) ) ) {
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
          } else {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)72.5) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)58.5) ) ) {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)97) ) ) {
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
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)76) ) ) {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)73.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)70) ) ) {
                      result[0] += 0;
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
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)76.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
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
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)93.5) ) ) {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)65) ) ) {
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)80) ) ) {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)66.5) ) ) {
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
                      result[3] += 0.625;
                      result[4] += 0;
                      result[5] += 0.375;
                    }
                  } else {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)83) ) ) {
                      result[0] += 0;
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
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)88.5) ) ) {
                    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.010526315789473684;
                      result[4] += 0;
                      result[5] += 0.9894736842105263;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.42857142857142855;
                      result[4] += 0;
                      result[5] += 0.5714285714285714;
                    }
                  } else {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)88.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.125;
                      result[4] += 0.08333333333333333;
                      result[5] += 0.7916666666666666;
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
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)76) ) ) {
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)88.5) ) ) {
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
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)92.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)69.5) ) ) {
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
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)80) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)69) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)77.5) ) ) {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)37) ) ) {
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
                if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)82) ) ) {
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)66) ) ) {
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
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)69.5) ) ) {
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
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)86.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)63.5) ) ) {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)69) ) ) {
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
                if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)60) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)77.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.01818181818181818;
                      result[4] += 0;
                      result[5] += 0.9818181818181818;
                    } else {
                      result[0] += 0;
                      result[1] += 0.2;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0.8;
                    }
                  } else {
                    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)86.5) ) ) {
                      result[0] += 0;
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
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)97.5) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)95.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
                if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)80.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                } else {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)81) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)70.5) ) ) {
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
                      result[3] += 0.7;
                      result[4] += 0;
                      result[5] += 0.3;
                    }
                  }
                }
              } else {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)86.5) ) ) {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)92.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.8518518518518519;
                      result[4] += 0;
                      result[5] += 0.14814814814814814;
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
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)80) ) ) {
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
                }
              }
            } else {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)79.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)91) ) ) {
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
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
                if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)63.5) ) ) {
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
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89) ) ) {
                  result[0] += 0;
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
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)98) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)52.5) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)66) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)41.5) ) ) {
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
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)50) ) ) {
                if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)110.5) ) ) {
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
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)69) ) ) {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)94) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)72.5) ) ) {
                      result[0] += 0;
                      result[1] += 0.5;
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
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)73) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)103.5) ) ) {
                      result[0] += 0.018018018018018018;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.018018018018018018;
                      result[4] += 0.963963963963964;
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
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)108.5) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)56) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60.5) ) ) {
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
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)102.5) ) ) {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)102.5) ) ) {
                    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87.5) ) ) {
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
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)105) ) ) {
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
                  result[0] += 0;
                  result[1] += 1;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)61.5) ) ) {
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)76.5) ) ) {
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
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)69.5) ) ) {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)69) ) ) {
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
                      result[4] += 0.125;
                      result[5] += 0.875;
                    }
                  } else {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)87.5) ) ) {
                      result[0] += 0.7058823529411765;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.0392156862745098;
                      result[4] += 0.21568627450980393;
                      result[5] += 0.0392156862745098;
                    } else {
                      result[0] += 0.9758507135016463;
                      result[1] += 0.002195389681668496;
                      result[2] += 0.002195389681668496;
                      result[3] += 0.0032930845225027433;
                      result[4] += 0.014270032930845222;
                      result[5] += 0.002195389681668496;
                    }
                  }
                }
              } else {
                if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)95.5) ) ) {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
                      result[0] += 0.09090909090909091;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.8181818181818182;
                      result[4] += 0;
                      result[5] += 0.09090909090909091;
                    } else {
                      result[0] += 0.5;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.5;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75) ) ) {
                      result[0] += 0;
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
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)88) ) ) {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)89.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 1;
                    } else {
                      result[0] += 0.11764705882352941;
                      result[1] += 0;
                      result[2] += 0.8235294117647058;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0.058823529411764705;
                    }
                  } else {
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)97) ) ) {
                      result[0] += 0.5;
                      result[1] += 0;
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
                  }
                }
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)109.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
                if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)95) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)83.5) ) ) {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73.5) ) ) {
                      result[0] += 0;
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
                  } else {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)93.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.9024390243902439;
                      result[4] += 0.024390243902439025;
                      result[5] += 0.07317073170731707;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.2;
                      result[3] += 0;
                      result[4] += 0.2;
                      result[5] += 0.6;
                    }
                  }
                } else {
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)85.5) ) ) {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.20689655172413793;
                      result[4] += 0;
                      result[5] += 0.7931034482758621;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)105) ) ) {
                      result[0] += 0.8333333333333334;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.16666666666666666;
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
                if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77.5) ) ) {
                  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)74) ) ) {
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
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)76.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)63.5) ) ) {
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
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)88) ) ) {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)86.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99.5) ) ) {
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
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)57.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)110) ) ) {
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
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)64) ) ) {
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
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)100.5) ) ) {
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
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
                if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77.5) ) ) {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)80.5) ) ) {
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
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)98) ) ) {
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
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)67) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
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
                      result[2] += 0;
                      result[3] += 0.3333333333333333;
                      result[4] += 0;
                      result[5] += 0.6666666666666666;
                    }
                  } else {
                    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.875;
                      result[4] += 0;
                      result[5] += 0.125;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.14285714285714285;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0.8571428571428571;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)100.5) ) ) {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84) ) ) {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)97) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)97.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.125;
                      result[3] += 0.875;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.375;
                      result[4] += 0;
                      result[5] += 0.625;
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
                if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)98) ) ) {
                    result[0] += 0;
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
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)105) ) ) {
                if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)92) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                } else {
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85) ) ) {
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.5;
                      result[3] += 0.5;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.023809523809523808;
                      result[3] += 0.9523809523809523;
                      result[4] += 0;
                      result[5] += 0.023809523809523808;
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
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80) ) ) {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)80) ) ) {
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
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)95.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)108) ) ) {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)95.5) ) ) {
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
              }
            }
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)103) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
                if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)97.5) ) ) {
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
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)87) ) ) {
                if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)95.5) ) ) {
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
                if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)110) ) ) {
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
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)80) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)96) ) ) {
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
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)98.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)81.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
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
                    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.8;
                      result[3] += 0.05;
                      result[4] += 0;
                      result[5] += 0.15;
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
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)103) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)85) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
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
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)82) ) ) {
                if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)83.5) ) ) {
                  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
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
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86) ) ) {
                  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)93) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)110) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.47058823529411764;
                      result[3] += 0.5294117647058824;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.9;
                      result[4] += 0;
                      result[5] += 0.1;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88.5) ) ) {
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
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)75.5) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)91.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)76) ) ) {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)91) ) ) {
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
                if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)108.5) ) ) {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)59.5) ) ) {
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
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)87.5) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)86.5) ) ) {
                if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)120) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)105) ) ) {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.638888888888889;
                      result[3] += 0.16666666666666669;
                      result[4] += 0.02777777777777778;
                      result[5] += 0.16666666666666669;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.8974358974358975;
                      result[3] += 0.07692307692307693;
                      result[4] += 0.008547008547008548;
                      result[5] += 0.017094017094017096;
                    }
                  } else {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)92.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.5116279069767442;
                      result[3] += 0.4883720930232558;
                      result[4] += 0;
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
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)65) ) ) {
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
                if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)119) ) ) {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90.5) ) ) {
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)102.5) ) ) {
                      result[0] += 0;
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
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.8805970149253731;
                      result[3] += 0.11940298507462686;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.9842931937172775;
                      result[3] += 0.015706806282722512;
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
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)86.5) ) ) {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)86.5) ) ) {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.25;
                      result[3] += 0.75;
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
                  } else {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)124.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
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
              } else {
                if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)101.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)127.5) ) ) {
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
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)97) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)55) ) ) {
                  result[0] += 0;
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
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)59.5) ) ) {
                if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)58) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
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
                }
              } else {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)59.5) ) ) {
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)63.5) ) ) {
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
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            }
          } else {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)87.5) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)55) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)80) ) ) {
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
                  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)88.5) ) ) {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)97.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.00764525993883792;
                      result[4] += 0.0015290519877675841;
                      result[5] += 0.9908256880733946;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.6666666666666666;
                      result[4] += 0;
                      result[5] += 0.3333333333333333;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)77) ) ) {
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
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)74) ) ) {
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
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)99.5) ) ) {
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
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)72.5) ) ) {
                if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)81) ) ) {
                    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)67.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.07142857142857144;
                      result[4] += 0.8571428571428572;
                      result[5] += 0.07142857142857144;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.42857142857142855;
                      result[4] += 0;
                      result[5] += 0.5714285714285714;
                    }
                  } else {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)94) ) ) {
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
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)66.5) ) ) {
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)64.5) ) ) {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)45) ) ) {
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
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)79.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.11764705882352941;
                      result[4] += 0.17647058823529413;
                      result[5] += 0.7058823529411765;
                    } else {
                      result[0] += 0;
                      result[1] += 0.10526315789473684;
                      result[2] += 0;
                      result[3] += 0.21052631578947367;
                      result[4] += 0.5789473684210527;
                      result[5] += 0.10526315789473684;
                    }
                  }
                } else {
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)71.5) ) ) {
                    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)87.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.09243697478991597;
                      result[4] += 0;
                      result[5] += 0.907563025210084;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)70.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.7058823529411765;
                      result[4] += 0.11764705882352941;
                      result[5] += 0.17647058823529413;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.13333333333333333;
                      result[4] += 0;
                      result[5] += 0.8666666666666667;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)101.5) ) ) {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
                  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)85) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71) ) ) {
                      result[0] += 0;
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
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)96) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.9307692307692308;
                      result[4] += 0;
                      result[5] += 0.06923076923076923;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 1;
                    }
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73.5) ) ) {
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
                      result[3] += 0.38235294117647056;
                      result[4] += 0;
                      result[5] += 0.6176470588235294;
                    }
                  }
                }
              } else {
                if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
                  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)63.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)85) ) ) {
                      result[0] += 0;
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
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)62) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
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
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)94.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)72.5) ) ) {
                if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)91.5) ) ) {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)93.5) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)49) ) ) {
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
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)70.5) ) ) {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)54) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)99.5) ) ) {
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)81) ) ) {
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
                if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)54.5) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)48.5) ) ) {
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
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)100) ) ) {
                if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)70.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                } else {
                  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)48.5) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)56.5) ) ) {
                      result[0] += 0.06451612903225806;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.9354838709677419;
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
            }
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)66.5) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)100.5) ) ) {
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)71.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)65) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)94.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.5;
                      result[5] += 0.5;
                    } else {
                      result[0] += 0;
                      result[1] += 0.7777777777777778;
                      result[2] += 0;
                      result[3] += 0.2222222222222222;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)52.5) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93.5) ) ) {
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
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61) ) ) {
                  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)64.5) ) ) {
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
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)85.5) ) ) {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)66.5) ) ) {
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
                      result[3] += 0.08695652173913043;
                      result[4] += 0.08695652173913043;
                      result[5] += 0.8260869565217391;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.8571428571428571;
                      result[4] += 0;
                      result[5] += 0.14285714285714285;
                    } else {
                      result[0] += 0.2;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.2;
                      result[4] += 0;
                      result[5] += 0.6;
                    }
                  }
                }
              } else {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)83.5) ) ) {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0.3888888888888889;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.05555555555555555;
                      result[4] += 0.5555555555555556;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
                      result[0] += 0;
                      result[1] += 0.25;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.75;
                      result[5] += 0;
                    } else {
                      result[0] += 0.9657458563535911;
                      result[1] += 0;
                      result[2] += 0.0022099447513812156;
                      result[3] += 0.0022099447513812156;
                      result[4] += 0.02541436464088398;
                      result[5] += 0.004419889502762431;
                    }
                  }
                } else {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)102.5) ) ) {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0.2142857142857143;
                      result[1] += 0;
                      result[2] += 0.14285714285714288;
                      result[3] += 0.14285714285714288;
                      result[4] += 0.4285714285714286;
                      result[5] += 0.07142857142857144;
                    }
                  } else {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)114.5) ) ) {
                      result[0] += 0.55;
                      result[1] += 0;
                      result[2] += 0.4;
                      result[3] += 0.025;
                      result[4] += 0.025;
                      result[5] += 0;
                    } else {
                      result[0] += 0.926829268292683;
                      result[1] += 0;
                      result[2] += 0.024390243902439025;
                      result[3] += 0;
                      result[4] += 0.04878048780487805;
                      result[5] += 0;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)60) ) ) {
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
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)68) ) ) {
                    result[0] += 0;
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
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)90.5) ) ) {
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
                      result[3] += 0.13333333333333333;
                      result[4] += 0;
                      result[5] += 0.8666666666666667;
                    }
                  } else {
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
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
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)65) ) ) {
                if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)72.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
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
                      result[4] += 1;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)46) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)67.5) ) ) {
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
                if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)86) ) ) {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)74.5) ) ) {
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
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)83) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.7837837837837838;
                      result[4] += 0.013513513513513514;
                      result[5] += 0.20270270270270271;
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
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
                      result[0] += 0.2857142857142857;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.7142857142857143;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.041666666666666664;
                      result[3] += 0.22916666666666666;
                      result[4] += 0;
                      result[5] += 0.7291666666666666;
                    }
                  } else {
                    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)99) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.3333333333333333;
                      result[3] += 0.6666666666666666;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.5862068965517241;
                      result[3] += 0.10344827586206896;
                      result[4] += 0;
                      result[5] += 0.3103448275862069;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)113.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96) ) ) {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)102) ) ) {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
                    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
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
                  result[0] += 0;
                  result[1] += 1;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)83) ) ) {
                    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)110) ) ) {
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
                  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)90.5) ) ) {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)107.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.625;
                      result[4] += 0;
                      result[5] += 0.375;
                    } else {
                      result[0] += 0.21052631578947367;
                      result[1] += 0;
                      result[2] += 0.6842105263157895;
                      result[3] += 0.05263157894736842;
                      result[4] += 0;
                      result[5] += 0.05263157894736842;
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
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)100.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
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
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)91.5) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
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
            }
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)106) ) ) {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)70) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                } else {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)98.5) ) ) {
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)99) ) ) {
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
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)80) ) ) {
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)87) ) ) {
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
                if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73) ) ) {
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
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)69) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)51) ) ) {
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
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)108.5) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82) ) ) {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)78.5) ) ) {
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
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)103.5) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
                if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
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
                if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)97.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)71) ) ) {
                      result[0] += 0;
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
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)76.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)104.5) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)101) ) ) {
                if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)86.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100) ) ) {
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
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85) ) ) {
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
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)105.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)100.5) ) ) {
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
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)93.5) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)116) ) ) {
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)82) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
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
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)101.5) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)108.5) ) ) {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)97) ) ) {
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
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)94) ) ) {
                    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)102.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.75;
                      result[3] += 0.25;
                      result[4] += 0;
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
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)87.5) ) ) {
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
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)111.5) ) ) {
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
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)105) ) ) {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)101.5) ) ) {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)83.5) ) ) {
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
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)88.5) ) ) {
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)106.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85) ) ) {
                      result[0] += 0.4;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.6;
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
                  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)86.5) ) ) {
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
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)119) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
                if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)108) ) ) {
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
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)106) ) ) {
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
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)48.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59.5) ) ) {
                if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)57.5) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)65) ) ) {
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
                if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)64.5) ) ) {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)52) ) ) {
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
                    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)68.5) ) ) {
                      result[0] += 0;
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
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)64.5) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)74) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)76) ) ) {
                if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)56.5) ) ) {
                  result[0] += 0;
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
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)85) ) ) {
              result[0] += 0;
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
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)59.5) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)74) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)61.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)77.5) ) ) {
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
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)70.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)73) ) ) {
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
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)82) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)65.5) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)58) ) ) {
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
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)99) ) ) {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)57.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)54.5) ) ) {
                    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)77) ) ) {
                      result[0] += 0;
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
                    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)61.5) ) ) {
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
                      result[3] += 0.007054673721340388;
                      result[4] += 0.001763668430335097;
                      result[5] += 0.9911816578483245;
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
            }
          } else {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)72.5) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)71.5) ) ) {
                if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)65.5) ) ) {
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
                  } else {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)67.5) ) ) {
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
                if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)81.5) ) ) {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)63.5) ) ) {
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
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  }
                }
              }
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)84.5) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)75.5) ) ) {
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)94.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.01904761904761905;
                      result[4] += 0;
                      result[5] += 0.9809523809523809;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)67) ) ) {
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
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)80) ) ) {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)63.5) ) ) {
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
                      result[3] += 0.05555555555555555;
                      result[4] += 0;
                      result[5] += 0.9444444444444444;
                    }
                  } else {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)69.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.4;
                      result[4] += 0.06666666666666667;
                      result[5] += 0.5333333333333333;
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
            }
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)53) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)68.5) ) ) {
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)63) ) ) {
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
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)63.5) ) ) {
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
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)86) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)71) ) ) {
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)64) ) ) {
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
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)70) ) ) {
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
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)63.5) ) ) {
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
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)72) ) ) {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)61) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                } else {
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)56) ) ) {
                    result[0] += 0;
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
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)96.5) ) ) {
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)69) ) ) {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)78) ) ) {
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
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)63) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.7142857142857143;
                      result[4] += 0;
                      result[5] += 0.2857142857142857;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.07894736842105263;
                      result[4] += 0;
                      result[5] += 0.9210526315789473;
                    }
                  }
                } else {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
                    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.9411764705882353;
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
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  }
                }
              } else {
                if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)69) ) ) {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)65.5) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
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
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
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
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)65.5) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)60) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)86.5) ) ) {
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
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)87.5) ) ) {
                if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                } else {
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
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)82) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
                if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72) ) ) {
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
                if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)99) ) ) {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)65) ) ) {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)74) ) ) {
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
                    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)72.5) ) ) {
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
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 1;
                    }
                  }
                } else {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)68) ) ) {
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
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75) ) ) {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)80) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
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
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)88) ) ) {
                    result[0] += 0;
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
                if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)85) ) ) {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)95) ) ) {
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
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
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
                      result[2] += 0.06666666666666667;
                      result[3] += 0.26666666666666666;
                      result[4] += 0;
                      result[5] += 0.6666666666666666;
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
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)50) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)83) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)51) ) ) {
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
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)47) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)113) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)50.5) ) ) {
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
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)102) ) ) {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)77.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)72) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)67.5) ) ) {
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)79) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)89) ) ) {
                      result[0] += 0.3333333333333333;
                      result[1] += 0;
                      result[2] += 0.6666666666666666;
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)53) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)72.5) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)69) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)100) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)64.5) ) ) {
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
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)68.5) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
                if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)93) ) ) {
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)99) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77) ) ) {
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
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)92) ) ) {
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
                if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)104.5) ) ) {
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)104.5) ) ) {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)86.5) ) ) {
                      result[0] += 0.047619047619047616;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.19047619047619047;
                      result[4] += 0.7619047619047619;
                      result[5] += 0;
                    } else {
                      result[0] += 0.75;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.25;
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
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)68.5) ) ) {
                if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)63.5) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)64.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)71.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 1;
                    } else {
                      result[0] += 0.125;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.875;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
                  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)70.5) ) ) {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)93) ) ) {
                      result[0] += 0.9616438356164384;
                      result[1] += 0.005479452054794521;
                      result[2] += 0.005479452054794521;
                      result[3] += 0;
                      result[4] += 0.024657534246575342;
                      result[5] += 0.0027397260273972603;
                    } else {
                      result[0] += 0.14285714285714285;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.8571428571428571;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)99.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.6153846153846154;
                      result[4] += 0.23076923076923078;
                      result[5] += 0.15384615384615385;
                    } else {
                      result[0] += 0.11764705882352941;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.8823529411764706;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
                      result[0] += 0.9622641509433962;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.03773584905660377;
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
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)108.5) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)90) ) ) {
                  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)95) ) ) {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)91) ) ) {
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
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
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
                if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)82) ) ) {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)65.5) ) ) {
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
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)109.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)65.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
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
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)96.5) ) ) {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)71) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)93.5) ) ) {
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
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)102.5) ) ) {
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
                if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)89) ) ) {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
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
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)99.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)100.5) ) ) {
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
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)95) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)90) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)107.5) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)82) ) ) {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)80.5) ) ) {
                  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)76.5) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
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
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)90) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)67) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)84.5) ) ) {
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
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)84) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)80.5) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)74.5) ) ) {
                if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)102.5) ) ) {
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)81.5) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91) ) ) {
                      result[0] += 0;
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
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)103) ) ) {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85.5) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)78) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 1;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.06756756756756757;
                      result[3] += 0.8783783783783784;
                      result[4] += 0;
                      result[5] += 0.05405405405405406;
                    }
                  } else {
                    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)104.5) ) ) {
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
                  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)83) ) ) {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
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
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)98.5) ) ) {
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
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)98.5) ) ) {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
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
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)89) ) ) {
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)91.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.5;
                      result[4] += 0.5;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.7857142857142857;
                      result[3] += 0.14285714285714285;
                      result[4] += 0;
                      result[5] += 0.07142857142857142;
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
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)97) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)86) ) ) {
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
                result[4] += 0;
                result[5] += 1;
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
                if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)115) ) ) {
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
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)87) ) ) {
                    result[0] += 0;
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
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)117) ) ) {
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
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88.5) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)98.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)76.5) ) ) {
                  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)80.5) ) ) {
                    result[0] += 0;
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
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
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
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96) ) ) {
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)86) ) ) {
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
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)105) ) ) {
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
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)95) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)96) ) ) {
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
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)102.5) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)85.5) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)89.5) ) ) {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)70) ) ) {
                    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)80) ) ) {
                      result[0] += 0;
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
                if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)93.5) ) ) {
                  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)75.5) ) ) {
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
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.9387755102040817;
                      result[3] += 0.02040816326530612;
                      result[4] += 0;
                      result[5] += 0.04081632653061224;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.7058823529411765;
                      result[3] += 0.29411764705882354;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)98.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.8888888888888888;
                      result[3] += 0.1111111111111111;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.5918367346938775;
                      result[3] += 0.40816326530612246;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)98) ) ) {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
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
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)89.5) ) ) {
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
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)69) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
                if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)103.5) ) ) {
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)119.5) ) ) {
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
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)112.5) ) ) {
                      result[0] += 0.05555555555555555;
                      result[1] += 0;
                      result[2] += 0.3333333333333333;
                      result[3] += 0.6111111111111112;
                      result[4] += 0;
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
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)111.5) ) ) {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
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
                  } else {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)88.5) ) ) {
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
              } else {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)94) ) ) {
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)92.5) ) ) {
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
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)101.5) ) ) {
                    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.9565217391304348;
                      result[3] += 0.043478260869565216;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.9974358974358974;
                      result[3] += 0.002564102564102564;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
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
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)62) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)58.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)57.5) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)77.5) ) ) {
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
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)64.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)79.5) ) ) {
                if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)64.5) ) ) {
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
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)55.5) ) ) {
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
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)64.5) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)72) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)71) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)51.5) ) ) {
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
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)79) ) ) {
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
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)68.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)59) ) ) {
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)80.5) ) ) {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75) ) ) {
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
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)81) ) ) {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)54) ) ) {
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
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)64.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)66) ) ) {
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)71) ) ) {
                    result[0] += 0;
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
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)70) ) ) {
                  result[0] += 0;
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
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)57.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)66.5) ) ) {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)91) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.007312614259597806;
                      result[4] += 0.005484460694698354;
                      result[5] += 0.9872029250457038;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)71.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.05405405405405406;
                      result[4] += 0.09009009009009009;
                      result[5] += 0.8558558558558559;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.6363636363636364;
                      result[5] += 0.36363636363636365;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)72) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)87.5) ) ) {
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
                      result[3] += 0.3333333333333333;
                      result[4] += 0.6666666666666666;
                      result[5] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)84.5) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
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
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
                if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)68.5) ) ) {
                  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)84.5) ) ) {
                    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)81.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.2222222222222222;
                      result[4] += 0;
                      result[5] += 0.7777777777777778;
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
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)83.5) ) ) {
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
                if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)75.5) ) ) {
                  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)80.5) ) ) {
                    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)60.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.4;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0.6;
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
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.9130434782608695;
                      result[4] += 0;
                      result[5] += 0.08695652173913043;
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
                  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)58) ) ) {
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
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)65.5) ) ) {
              result[0] += 0;
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
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)69) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)80) ) ) {
                if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)71.5) ) ) {
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)68) ) ) {
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
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)76) ) ) {
                    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)89.5) ) ) {
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
                    result[4] += 0;
                    result[5] += 1;
                  }
                }
              } else {
                if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)65.5) ) ) {
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
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)60) ) ) {
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)71.5) ) ) {
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
                    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)68.5) ) ) {
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
                      result[3] += 0.041237113402061855;
                      result[4] += 0;
                      result[5] += 0.9587628865979382;
                    }
                  }
                } else {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)97) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)67.5) ) ) {
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
                      result[3] += 0.7727272727272727;
                      result[4] += 0;
                      result[5] += 0.22727272727272727;
                    }
                  } else {
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)64.5) ) ) {
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
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)102.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)98) ) ) {
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
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)87.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)104) ) ) {
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
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)72.5) ) ) {
                result[0] += 0;
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
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                } else {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
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
                if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)61) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                } else {
                  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96) ) ) {
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
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
                if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)96.5) ) ) {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81.5) ) ) {
                      result[0] += 0;
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
              } else {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)103.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                } else {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)111) ) ) {
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
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)38.5) ) ) {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)42.5) ) ) {
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
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)130.5) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)70.5) ) ) {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)52.5) ) ) {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
                    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)76) ) ) {
                      result[0] += 0;
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
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)67.5) ) ) {
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
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)93.5) ) ) {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)45) ) ) {
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
                }
              } else {
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)50.5) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)95) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)73.5) ) ) {
                      result[0] += 0;
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
                      result[4] += 0.9166666666666666;
                      result[5] += 0.08333333333333333;
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
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)104.5) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)66.5) ) ) {
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
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)61.5) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)101) ) ) {
                if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)77.5) ) ) {
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)95.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65) ) ) {
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
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)104.5) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)78) ) ) {
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
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
                  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
                    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.26666666666666666;
                      result[4] += 0.06666666666666667;
                      result[5] += 0.6666666666666666;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.01694915254237288;
                      result[3] += 0.864406779661017;
                      result[4] += 0.03389830508474576;
                      result[5] += 0.0847457627118644;
                    }
                  } else {
                    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)82.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.2;
                      result[3] += 0.6;
                      result[4] += 0.2;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.15;
                      result[4] += 0.1;
                      result[5] += 0.75;
                    }
                  }
                }
              } else {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)70.5) ) ) {
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)123) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
                    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)58.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 1;
                      result[5] += 0;
                    } else {
                      result[0] += 0.9727822580645161;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.0020161290322580645;
                      result[4] += 0.023185483870967742;
                      result[5] += 0.0020161290322580645;
                    }
                  } else {
                    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)102.5) ) ) {
                      result[0] += 0.2857142857142857;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.21428571428571427;
                      result[4] += 0.42857142857142855;
                      result[5] += 0.07142857142857142;
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
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)89.5) ) ) {
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)110.5) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)77) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.875;
                      result[5] += 0.125;
                    } else {
                      result[0] += 0.08333333333333333;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.4166666666666667;
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
                } else {
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)89.5) ) ) {
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
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)108.5) ) ) {
                if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)67.5) ) ) {
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)104) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.5714285714285714;
                      result[5] += 0.42857142857142855;
                    } else {
                      result[0] += 0.5;
                      result[1] += 0;
                      result[2] += 0.5;
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
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)70.5) ) ) {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)78.5) ) ) {
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
                  } else {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.8974358974358975;
                      result[4] += 0;
                      result[5] += 0.10256410256410256;
                    } else {
                      result[0] += 0.5;
                      result[1] += 0;
                      result[2] += 0.25;
                      result[3] += 0.25;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              } else {
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
              }
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)88) ) ) {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)92.5) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78) ) ) {
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)83.5) ) ) {
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
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)88) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)105.5) ) ) {
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
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)77) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)110.5) ) ) {
                result[0] += 0;
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
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)81) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
                  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79) ) ) {
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
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  }
                } else {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)101) ) ) {
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
                      result[4] += 0;
                      result[5] += 1;
                    }
                  } else {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)77.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.75;
                      result[4] += 0;
                      result[5] += 0.25;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.8;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0.2;
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
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)99) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101.5) ) ) {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97) ) ) {
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
                if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)106.5) ) ) {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)99) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.07142857142857142;
                      result[3] += 0.9285714285714286;
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
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)88) ) ) {
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
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)68) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
                if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
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
                    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)80.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.4;
                      result[5] += 0.6;
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
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)105) ) ) {
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
                    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.14285714285714285;
                      result[3] += 0.8571428571428571;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0.023255813953488372;
                      result[1] += 0;
                      result[2] += 0.8604651162790697;
                      result[3] += 0.11627906976744186;
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
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)91) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)79.5) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
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
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)70) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
                  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
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
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)80.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)101) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
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
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)83.5) ) ) {
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
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)72.5) ) ) {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)115.5) ) ) {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)101) ) ) {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)73) ) ) {
                      result[0] += 0;
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
              } else {
                if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)128.5) ) ) {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)95) ) ) {
                    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)95.5) ) ) {
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
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)91) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.8544891640866873;
                      result[3] += 0.14241486068111456;
                      result[4] += 0;
                      result[5] += 0.0030959752321981426;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.9871794871794872;
                      result[3] += 0.01282051282051282;
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
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)97.5) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)102) ) ) {
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
                if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)113.5) ) ) {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)105.5) ) ) {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)112) ) ) {
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
                } else {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)104.5) ) ) {
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
                if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)85) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)85) ) ) {
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
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)86.5) ) ) {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)108.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.9782608695652174;
                      result[3] += 0.021739130434782608;
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
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)90) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)47) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)95.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)53.5) ) ) {
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
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)74.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)60) ) ) {
                  result[0] += 0;
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
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)75) ) ) {
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
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)67) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)66) ) ) {
              result[0] += 0;
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
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)77) ) ) {
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)55.5) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)75) ) ) {
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
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)51.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)74.5) ) ) {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)57.5) ) ) {
                    result[0] += 0;
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
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)56.5) ) ) {
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
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)69.5) ) ) {
                if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)60.5) ) ) {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)76) ) ) {
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)53.5) ) ) {
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
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)54.5) ) ) {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)77) ) ) {
                      result[0] += 0;
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
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)91.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.005813953488372093;
                      result[4] += 0.014534883720930232;
                      result[5] += 0.9796511627906976;
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
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)64.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)85.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)89.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.17647058823529413;
                      result[4] += 0;
                      result[5] += 0.8235294117647058;
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
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)67.5) ) ) {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)67.5) ) ) {
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74) ) ) {
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
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)70.5) ) ) {
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
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)67) ) ) {
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
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
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)63.5) ) ) {
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
                      result[3] += 0.10256410256410256;
                      result[4] += 0.0641025641025641;
                      result[5] += 0.8333333333333334;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)86) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)60) ) ) {
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)61.5) ) ) {
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
                if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)68.5) ) ) {
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
                  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)58.5) ) ) {
                    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)71.5) ) ) {
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
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)69.5) ) ) {
                      result[0] += 0;
                      result[1] += 0.008928571428571428;
                      result[2] += 0;
                      result[3] += 0.13392857142857142;
                      result[4] += 0.017857142857142856;
                      result[5] += 0.8392857142857143;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.2;
                      result[4] += 0.6;
                      result[5] += 0.2;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77.5) ) ) {
                if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77.5) ) ) {
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
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)70.5) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)74) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)54.5) ) ) {
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
                  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)66.5) ) ) {
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)85) ) ) {
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
                      result[2] += 0;
                      result[3] += 0.75;
                      result[4] += 0;
                      result[5] += 0.25;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)85.5) ) ) {
                if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                } else {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)79) ) ) {
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
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)74.5) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)83.5) ) ) {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
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
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78) ) ) {
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
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)92) ) ) {
                      result[0] += 0;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)97) ) ) {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)63.5) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)78) ) ) {
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
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)78) ) ) {
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
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)56.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)83) ) ) {
                if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)64.5) ) ) {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)60) ) ) {
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
                if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)125) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
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
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)107.5) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)102.5) ) ) {
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
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)65) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)55.5) ) ) {
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
                    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)93) ) ) {
                      result[0] += 0.9696969696969697;
                      result[1] += 0;
                      result[2] += 0.005050505050505051;
                      result[3] += 0.007575757575757576;
                      result[4] += 0.017676767676767676;
                      result[5] += 0;
                    } else {
                      result[0] += 0.5909090909090909;
                      result[1] += 0;
                      result[2] += 0.09090909090909091;
                      result[3] += 0;
                      result[4] += 0.3181818181818182;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)69) ) ) {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)72) ) ) {
                      result[0] += 0.21739130434782608;
                      result[1] += 0.043478260869565216;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.7391304347826086;
                      result[5] += 0;
                    } else {
                      result[0] += 0.7384615384615385;
                      result[1] += 0.015384615384615385;
                      result[2] += 0;
                      result[3] += 0.03076923076923077;
                      result[4] += 0.2153846153846154;
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
                      result[0] += 0.015384615384615382;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.523076923076923;
                      result[4] += 0.10769230769230767;
                      result[5] += 0.3538461538461538;
                    }
                  }
                }
              } else {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)85) ) ) {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)110.5) ) ) {
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
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)74.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)97.5) ) ) {
                      result[0] += 0.4;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.6;
                      result[5] += 0;
                    } else {
                      result[0] += 0.9444444444444444;
                      result[1] += 0;
                      result[2] += 0.05555555555555555;
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
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)86) ) ) {
                if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)65) ) ) {
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)100.5) ) ) {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.6;
                      result[4] += 0.4;
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
                    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)73) ) ) {
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
                      result[3] += 0.8;
                      result[4] += 0;
                      result[5] += 0.2;
                    }
                  }
                } else {
                  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)71) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)86) ) ) {
                      result[0] += 0;
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
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)95.5) ) ) {
                  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)86) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.9361702127659575;
                      result[4] += 0;
                      result[5] += 0.06382978723404255;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.3333333333333333;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0.6666666666666666;
                    }
                  } else {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)79.5) ) ) {
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
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)88.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.8571428571428571;
                      result[3] += 0.14285714285714285;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.08333333333333333;
                      result[3] += 0.875;
                      result[4] += 0;
                      result[5] += 0.041666666666666664;
                    }
                  } else {
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)77) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.9;
                      result[3] += 0.1;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)94) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)81.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)126) ) ) {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
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
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)91.5) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)97.5) ) ) {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)87.5) ) ) {
                    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)109) ) ) {
                      result[0] += 0.3333333333333333;
                      result[1] += 0.3333333333333333;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.3333333333333333;
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
                    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)111) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.12;
                      result[4] += 0;
                      result[5] += 0.88;
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
                  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)74) ) ) {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)101) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                      result[2] += 0;
                      result[3] += 0;
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
                  } else {
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
                      result[0] += 0;
                      result[1] += 0.33333333333333337;
                      result[2] += 0.16666666666666669;
                      result[3] += 0.33333333333333337;
                      result[4] += 0;
                      result[5] += 0.16666666666666669;
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
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
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
                  }
                } else {
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)98.5) ) ) {
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
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)90) ) ) {
                if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)101) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97.5) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)86.5) ) ) {
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
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)101) ) ) {
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
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)103) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)88) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)97) ) ) {
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
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)102.5) ) ) {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)92.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.8666666666666667;
                      result[4] += 0;
                      result[5] += 0.13333333333333333;
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
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                } else {
                  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)98) ) ) {
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
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)99) ) ) {
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
              } else {
                if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)105) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)95.5) ) ) {
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
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)100.5) ) ) {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74) ) ) {
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)84) ) ) {
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
            }
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)106.5) ) ) {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)100.5) ) ) {
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
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)57.5) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)81) ) ) {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93.5) ) ) {
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
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)98) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)89) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)96) ) ) {
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
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)91) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)77.5) ) ) {
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
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)92.5) ) ) {
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
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
                if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)70.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)78.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.23076923076923078;
                      result[3] += 0.7692307692307693;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.8235294117647058;
                      result[3] += 0.17647058823529413;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)110.5) ) ) {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)82.5) ) ) {
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
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)119) ) ) {
                      result[0] += 0.012195121951219513;
                      result[1] += 0;
                      result[2] += 0.8292682926829268;
                      result[3] += 0.13414634146341464;
                      result[4] += 0;
                      result[5] += 0.024390243902439025;
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
              }
            }
          } else {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)102.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)110.5) ) ) {
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
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)132) ) ) {
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)101) ) ) {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)89) ) ) {
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
                      result[2] += 0.7777777777777778;
                      result[3] += 0.2222222222222222;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)83) ) ) {
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
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.948051948051948;
                      result[3] += 0.05194805194805195;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.9938524590163934;
                      result[3] += 0.006147540983606557;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)102) ) ) {
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
