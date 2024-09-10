
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
  return "uint32";
}


void predict(union Entry* data, int pred_margin, uint32_t* result) {
  unsigned int tmp;
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42da0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 858993459;
            result[5] += 0;
          } else {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 858993459;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 858993459;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 858993459;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 858993459;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42810000))) ) ) {
            if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42850000))) ) ) {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x428a0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 858993459;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 858993459;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 858993459;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42940000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 858993459;
            } else {
              if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a00000))) ) ) {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x425c0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 858993459;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 858993459;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 858993459;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x422a0000))) ) ) {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x427c0000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 858993459;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 858993459;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 858993459;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 858993459;
            result[5] += 0;
          } else {
            result[0] += 858993459;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42740000))) ) ) {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42980000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 858993459;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 858993459;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a40000))) ) ) {
                    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a30000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 27709466;
                      result[4] += 0;
                      result[5] += 831283992;
                    }
                  } else {
                    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42660000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 49557314;
                      result[4] += 0;
                      result[5] += 809436144;
                    }
                  }
                } else {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x426e0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  }
                }
              }
            } else {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a00000))) ) ) {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ac0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 858993459;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 858993459;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 858993459;
              }
            }
          } else {
            if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42910000))) ) ) {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x426a0000))) ) ) {
                if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c20000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 858993459;
                } else {
                  result[0] += 0;
                  result[1] += 858993459;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42980000))) ) ) {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42930000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 858993459;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428c0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 858993459;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42990000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  } else {
                    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 858993459;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bb0000))) ) ) {
                if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42820000))) ) ) {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a00000))) ) ) {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42850000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 858993459;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 536870911;
                      result[4] += 0;
                      result[5] += 322122547;
                    }
                  } else {
                    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a60000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b10000))) ) ) {
                    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 9042036;
                      result[4] += 0;
                      result[5] += 849951422;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 368140053;
                      result[4] += 0;
                      result[5] += 490853405;
                    }
                  } else {
                    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b10000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 107374182;
                      result[4] += 71582788;
                      result[5] += 680036488;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 751619276;
                      result[4] += 0;
                      result[5] += 107374182;
                    }
                  }
                }
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42980000))) ) ) {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b10000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  } else {
                    result[0] += 0;
                    result[1] += 858993459;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b90000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428b0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a00000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428a0000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 858993459;
              result[5] += 0;
            } else {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x429b0000))) ) ) {
                if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42140000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 858993459;
                } else {
                  result[0] += 0;
                  result[1] += 858993459;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a40000))) ) ) {
                  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42840000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  } else {
                    result[0] += 858993459;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428b0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 858993459;
                    result[5] += 0;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ad0000))) ) ) {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x427e0000))) ) ) {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428a0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 858993459;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 858993459;
                }
              } else {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42700000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 858993459;
                  result[5] += 0;
                } else {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
                    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429b0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 15618062;
                      result[4] += 0;
                      result[5] += 843375396;
                    } else {
                      result[0] += 0;
                      result[1] += 171798691;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 687194767;
                    }
                  } else {
                    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ad0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
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
              result[3] += 858993459;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c30000))) ) ) {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42bf0000))) ) ) {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42a10000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 858993459;
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a20000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  } else {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428d0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 601295421;
                      result[4] += 0;
                      result[5] += 257698037;
                    }
                  }
                }
              } else {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ad0000))) ) ) {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  } else {
                    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b90000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 731735168;
                      result[4] += 0;
                      result[5] += 127258290;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    }
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  } else {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a00000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 572662306;
                      result[4] += 0;
                      result[5] += 286331153;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x429f0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 858993459;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b60000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 858993459;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 858993459;
                }
              }
            }
          } else {
            if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x427e0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 858993459;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 858993459;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 858993459;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42920000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 858993459;
              } else {
                if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b20000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 858993459;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 858993459;
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
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42c40000))) ) ) {
            if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42520000))) ) ) {
              if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42840000))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42260000))) ) ) {
                  result[0] += 0;
                  result[1] += 858993459;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 858993459;
                  result[5] += 0;
                }
              } else {
                result[0] += 858993459;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42480000))) ) ) {
                if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42dd0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 858993459;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 858993459;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428a0000))) ) ) {
                  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bc0000))) ) ) {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42910000))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 858993459;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42920000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  } else {
                    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42cf0000))) ) ) {
                      result[0] += 15477359;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 15477359;
                      result[4] += 828038739;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42d90000))) ) ) {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42600000))) ) ) {
                result[0] += 0;
                result[1] += 858993459;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
                  result[0] += 0;
                  result[1] += 858993459;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 858993459;
                  result[5] += 0;
                }
              }
            } else {
              result[0] += 858993459;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
                result[0] += 0;
                result[1] += 858993459;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42cd0000))) ) ) {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cd0000))) ) ) {
                    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
                      result[0] += 572662306;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 286331153;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 858993459;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d20000))) ) ) {
                      result[0] += 0;
                      result[1] += 858993459;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 858993459;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 858993459;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42760000))) ) ) {
                  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429a0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42990000))) ) ) {
                      result[0] += 0;
                      result[1] += 858993459;
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
                      result[5] += 858993459;
                    }
                  }
                } else {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428b0000))) ) ) {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428a0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 107374182;
                      result[5] += 751619276;
                    }
                  } else {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42af0000))) ) ) {
                      result[0] += 606348324;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 33686018;
                      result[4] += 185273099;
                      result[5] += 33686018;
                    } else {
                      result[0] += 838249379;
                      result[1] += 1885825;
                      result[2] += 1885825;
                      result[3] += 2828738;
                      result[4] += 12257864;
                      result[5] += 1885825;
                    }
                  }
                }
              } else {
                if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42bf0000))) ) ) {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cb0000))) ) ) {
                      result[0] += 78090314;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 702812830;
                      result[4] += 0;
                      result[5] += 78090314;
                    } else {
                      result[0] += 429496729;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42960000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 858993459;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b00000))) ) ) {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b30000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    } else {
                      result[0] += 101058054;
                      result[1] += 0;
                      result[2] += 707406378;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 50529027;
                    }
                  } else {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c20000))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 858993459;
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
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42db0000))) ) ) {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42be0000))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a70000))) ) ) {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42930000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 715827882;
                      result[4] += 0;
                      result[5] += 143165576;
                    }
                  } else {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42bb0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 775189219;
                      result[4] += 20951059;
                      result[5] += 62853179;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 171798691;
                      result[3] += 0;
                      result[4] += 171798691;
                      result[5] += 515396075;
                    }
                  }
                } else {
                  if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ab0000))) ) ) {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 177722784;
                      result[4] += 0;
                      result[5] += 681270674;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d20000))) ) ) {
                      result[0] += 715827882;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 143165576;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 858993459;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429b0000))) ) ) {
                  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42940000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 858993459;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42990000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x427e0000))) ) ) {
                      result[0] += 858993459;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 858993459;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b00000))) ) ) {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ad0000))) ) ) {
                  result[0] += 858993459;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c70000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 858993459;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c90000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 858993459;
                  result[5] += 0;
                } else {
                  result[0] += 858993459;
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
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0;
            result[1] += 858993459;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42dc0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 858993459;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 858993459;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
                result[0] += 0;
                result[1] += 858993459;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42800000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 858993459;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 858993459;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            }
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428e0000))) ) ) {
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c90000))) ) ) {
              result[0] += 0;
              result[1] += 858993459;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 858993459;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 858993459;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
            if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429b0000))) ) ) {
                  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a10000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 858993459;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c40000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  }
                }
              } else {
                if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42860000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 858993459;
                  result[5] += 0;
                } else {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b30000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 286331153;
                      result[4] += 0;
                      result[5] += 572662306;
                    }
                  } else {
                    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d00000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 751619276;
                      result[4] += 0;
                      result[5] += 107374182;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 122713351;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 736280107;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c90000))) ) ) {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a80000))) ) ) {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c20000))) ) ) {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c30000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 107374182;
                      result[3] += 751619276;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 322122547;
                      result[4] += 0;
                      result[5] += 536870911;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 858993459;
                }
              } else {
                if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
                  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c40000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 858993459;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d20000))) ) ) {
                if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b80000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 858993459;
                } else {
                  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42aa0000))) ) ) {
                    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42920000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 20452225;
                      result[3] += 818089008;
                      result[4] += 0;
                      result[5] += 20452225;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 858993459;
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
                result[5] += 858993459;
              }
            } else {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a00000))) ) ) {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a00000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  } else {
                    result[0] += 858993459;
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
                  result[3] += 858993459;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bf0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 858993459;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d80000))) ) ) {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42bf0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 858993459;
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
                    result[5] += 858993459;
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
            if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ce0000))) ) ) {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
                if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c30000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 858993459;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 858993459;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 858993459;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ae0000))) ) ) {
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bf0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 858993459;
                } else {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a30000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 858993459;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42dc0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 858993459;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 858993459;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a00000))) ) ) {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 858993459;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c00000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 858993459;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 858993459;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c50000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 858993459;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a30000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 858993459;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 572662306;
                      result[3] += 286331153;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    }
                  } else {
                    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 687194767;
                      result[3] += 42949672;
                      result[4] += 0;
                      result[5] += 128849018;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 858993459;
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
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ce0000))) ) ) {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c10000))) ) ) {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42aa0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 858993459;
              } else {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 858993459;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 858993459;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a40000))) ) ) {
                if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a70000))) ) ) {
                  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 858993459;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 214748364;
                      result[3] += 644245094;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 858993459;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 858993459;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ac0000))) ) ) {
                  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ba0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  } else {
                    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42dc0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 404232216;
                      result[3] += 454761243;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 773094113;
                      result[4] += 0;
                      result[5] += 85899345;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
                    result[0] += 858993459;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b10000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 858993459;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            }
          } else {
            result[0] += 0;
            result[1] += 858993459;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42970000))) ) ) {
            if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b70000))) ) ) {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42980000))) ) ) {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b60000))) ) ) {
                  result[0] += 858993459;
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
                  result[4] += 858993459;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d90000))) ) ) {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 858993459;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 858993459;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              result[0] += 858993459;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42af0000))) ) ) {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ad0000))) ) ) {
                if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42f00000))) ) ) {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d20000))) ) ) {
                    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c90000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 548801376;
                      result[3] += 143165576;
                      result[4] += 23860929;
                      result[5] += 143165576;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 770891565;
                      result[3] += 66076419;
                      result[4] += 7341824;
                      result[5] += 14683648;
                    }
                  } else {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42b90000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 439485025;
                      result[3] += 419508433;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 858993459;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42820000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 858993459;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 858993459;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ee0000))) ) ) {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b50000))) ) ) {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42cd0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 858993459;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 756427075;
                      result[3] += 102566383;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 845501415;
                      result[3] += 13492043;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 858993459;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ad0000))) ) ) {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a00000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 858993459;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ad0000))) ) ) {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b00000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 214748364;
                      result[3] += 644245094;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 792917039;
                      result[3] += 66076419;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42f90000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 858993459;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 429496729;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cb0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 858993459;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ff0000))) ) ) {
                    result[0] += 858993459;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 858993459;
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
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c20000))) ) ) {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 858993459;
                result[5] += 0;
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425c0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 858993459;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 858993459;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x426e0000))) ) ) {
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42680000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 858993459;
                  result[5] += 0;
                } else {
                  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42850000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 858993459;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 858993459;
                  result[5] += 0;
                } else {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x426e0000))) ) ) {
                    result[0] += 858993459;
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
                    result[4] += 858993459;
                    result[5] += 0;
                  }
                }
              }
            }
          } else {
            result[0] += 0;
            result[1] += 858993459;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 858993459;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x427e0000))) ) ) {
            if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 858993459;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 858993459;
            }
          } else {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42af0000))) ) ) {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x425c0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 858993459;
                result[5] += 0;
              } else {
                if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a00000))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42870000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 858993459;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 858993459;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b10000))) ) ) {
                    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c30000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 6567228;
                      result[4] += 1313445;
                      result[5] += 851112785;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 572662306;
                      result[4] += 0;
                      result[5] += 286331153;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x429a0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    }
                  }
                }
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 858993459;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42620000))) ) ) {
            if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
              if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42940000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 858993459;
                result[5] += 0;
              } else {
                result[0] += 858993459;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c70000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 858993459;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 858993459;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
              if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42910000))) ) ) {
                if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a20000))) ) ) {
                    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42870000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 61356675;
                      result[4] += 736280107;
                      result[5] += 61356675;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 368140053;
                      result[4] += 0;
                      result[5] += 490853405;
                    }
                  } else {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bc0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    } else {
                      result[0] += 0;
                      result[1] += 858993459;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a50000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  } else {
                    result[0] += 0;
                    result[1] += 858993459;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42850000))) ) ) {
                  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42810000))) ) ) {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42340000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 858993459;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    }
                  } else {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x429f0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 101058054;
                      result[4] += 151587081;
                      result[5] += 606348324;
                    } else {
                      result[0] += 0;
                      result[1] += 90420364;
                      result[2] += 0;
                      result[3] += 180840728;
                      result[4] += 497312002;
                      result[5] += 90420364;
                    }
                  }
                } else {
                  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428f0000))) ) ) {
                    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42af0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 79402756;
                      result[4] += 0;
                      result[5] += 779590702;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428d0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 606348324;
                      result[4] += 101058054;
                      result[5] += 151587081;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 114532461;
                      result[4] += 0;
                      result[5] += 744460997;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42cb0000))) ) ) {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
                  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42aa0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  } else {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428e0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
                    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c00000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 799524681;
                      result[4] += 0;
                      result[5] += 59468777;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    }
                  } else {
                    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42930000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 328438675;
                      result[4] += 0;
                      result[5] += 530554783;
                    }
                  }
                }
              } else {
                if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x427e0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 858993459;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42aa0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42780000))) ) ) {
                      result[0] += 858993459;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 286331153;
                      result[3] += 572662306;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 858993459;
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
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 858993459;
          result[5] += 0;
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 858993459;
            result[5] += 0;
          } else {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bd0000))) ) ) {
              result[0] += 0;
              result[1] += 858993459;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42910000))) ) ) {
                if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42b70000))) ) ) {
                  if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42bb0000))) ) ) {
                    result[0] += 0;
                    result[1] += 858993459;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42440000))) ) ) {
                      result[0] += 0;
                      result[1] += 858993459;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 858993459;
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
                  result[4] += 858993459;
                  result[5] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 858993459;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428d0000))) ) ) {
            if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42580000))) ) ) {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c70000))) ) ) {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42780000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 858993459;
                  result[5] += 0;
                } else {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a20000))) ) ) {
                    result[0] += 858993459;
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
                    result[4] += 858993459;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x425a0000))) ) ) {
                  result[0] += 0;
                  result[1] += 858993459;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42420000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 858993459;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 858993459;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c80000))) ) ) {
                if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x428d0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 858993459;
                } else {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42420000))) ) ) {
                    result[0] += 0;
                    result[1] += 858993459;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42620000))) ) ) {
                      result[0] += 55418932;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 803574526;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 858993459;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 858993459;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42850000))) ) ) {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c90000))) ) ) {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 858993459;
                  result[5] += 0;
                } else {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42820000))) ) ) {
                    result[0] += 858993459;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bd0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 668106023;
                      result[2] += 0;
                      result[3] += 190887435;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42520000))) ) ) {
                  result[0] += 0;
                  result[1] += 858993459;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bb0000))) ) ) {
                    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 858993459;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 858993459;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42740000))) ) ) {
                  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42810000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 858993459;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ab0000))) ) ) {
                    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42850000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 74695083;
                      result[4] += 74695083;
                      result[5] += 709603292;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 736280107;
                      result[4] += 0;
                      result[5] += 122713351;
                    } else {
                      result[0] += 171798691;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 171798691;
                      result[4] += 0;
                      result[5] += 515396075;
                    }
                  }
                }
              } else {
                if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42a70000))) ) ) {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
                      result[0] += 858993459;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 334053011;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 47721858;
                      result[4] += 477218588;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
                      result[0] += 0;
                      result[1] += 214748364;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 644245094;
                      result[5] += 0;
                    } else {
                      result[0] += 829569373;
                      result[1] += 0;
                      result[2] += 1898328;
                      result[3] += 1898328;
                      result[4] += 21830772;
                      result[5] += 3796656;
                    }
                  }
                } else {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cd0000))) ) ) {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42aa0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 184070026;
                      result[1] += 0;
                      result[2] += 122713351;
                      result[3] += 122713351;
                      result[4] += 368140053;
                      result[5] += 61356675;
                    }
                  } else {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e50000))) ) ) {
                      result[0] += 472446402;
                      result[1] += 0;
                      result[2] += 343597383;
                      result[3] += 21474836;
                      result[4] += 21474836;
                      result[5] += 0;
                    } else {
                      result[0] += 796140279;
                      result[1] += 0;
                      result[2] += 20951059;
                      result[3] += 0;
                      result[4] += 41902119;
                      result[5] += 0;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
              if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42700000))) ) ) {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42830000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 858993459;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 858993459;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42880000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 858993459;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b50000))) ) ) {
                    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42be0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 114532461;
                      result[4] += 0;
                      result[5] += 744460997;
                    }
                  } else {
                    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 858993459;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42820000))) ) ) {
                if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42910000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 858993459;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42990000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 858993459;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42380000))) ) ) {
                    result[0] += 0;
                    result[1] += 858993459;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42870000))) ) ) {
                      result[0] += 858993459;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ac0000))) ) ) {
                    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 644245094;
                      result[4] += 0;
                      result[5] += 214748364;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    }
                  } else {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a60000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 673265143;
                      result[4] += 11608019;
                      result[5] += 174120295;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 858993459;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
                      result[0] += 245426702;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 613566756;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 35791394;
                      result[3] += 196852667;
                      result[4] += 0;
                      result[5] += 626349397;
                    }
                  } else {
                    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c60000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 286331153;
                      result[3] += 572662306;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 503547889;
                      result[3] += 88861392;
                      result[4] += 0;
                      result[5] += 266584176;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42e30000))) ) ) {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c00000))) ) ) {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cc0000))) ) ) {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
                    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 572662306;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 858993459;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 858993459;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
                  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a60000))) ) ) {
                    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42dc0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 858993459;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 858993459;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 858993459;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b50000))) ) ) {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d70000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 536870911;
                      result[4] += 0;
                      result[5] += 322122547;
                    } else {
                      result[0] += 180840728;
                      result[1] += 0;
                      result[2] += 587732366;
                      result[3] += 45210182;
                      result[4] += 0;
                      result[5] += 45210182;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 858993459;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c90000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 858993459;
                result[5] += 0;
              } else {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
                  result[0] += 858993459;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 858993459;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 858993459;
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
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b70000))) ) ) {
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a00000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 858993459;
            } else {
              if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428c0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 858993459;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 858993459;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
              if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42d40000))) ) ) {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428c0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 858993459;
                } else {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c50000))) ) ) {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c60000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 572662306;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 286331153;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
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
                result[5] += 858993459;
              }
            } else {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a00000))) ) ) {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ae0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 858993459;
                } else {
                  result[0] += 858993459;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42920000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 858993459;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 858993459;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            }
          }
        } else {
          result[0] += 0;
          result[1] += 858993459;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428a0000))) ) ) {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424c0000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 858993459;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 858993459;
            }
          } else {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d90000))) ) ) {
              if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 858993459;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a40000))) ) ) {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429d0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 858993459;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 858993459;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 858993459;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42cf0000))) ) ) {
              if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
                if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 858993459;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 858993459;
                }
              } else {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c30000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 858993459;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
                    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428e0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 858993459;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 858993459;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 858993459;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 858993459;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42d10000))) ) ) {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 858993459;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ca0000))) ) ) {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ad0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 858993459;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
                    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c80000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 687194767;
                      result[3] += 171798691;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 858993459;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42aa0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 858993459;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 858993459;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 858993459;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c90000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 858993459;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 858993459;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42bb0000))) ) ) {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e80000))) ) ) {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a40000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 858993459;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b50000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 858993459;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 858993459;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 858993459;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
            if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42cb0000))) ) ) {
              if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d90000))) ) ) {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c20000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  }
                } else {
                  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42bc0000))) ) ) {
                    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cd0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 644245094;
                      result[3] += 214748364;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 858993459;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
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
                result[5] += 858993459;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 858993459;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42af0000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 858993459;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 858993459;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
            if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
              if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42df0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 858993459;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 858993459;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42d20000))) ) ) {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42cb0000))) ) ) {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a70000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 858993459;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 858993459;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 858993459;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42b10000))) ) ) {
                  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d50000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42aa0000))) ) ) {
                      result[0] += 343597383;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 515396075;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 674923432;
                      result[3] += 153391689;
                      result[4] += 0;
                      result[5] += 30678337;
                    }
                  }
                } else {
                  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ad0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 572662306;
                      result[3] += 286331153;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 858993459;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ee0000))) ) ) {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42d80000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 858993459;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c90000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 858993459;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 858993459;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42d40000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 858993459;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 858993459;
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
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42420000))) ) ) {
            result[0] += 858993459;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 858993459;
              result[5] += 0;
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426e0000))) ) ) {
                if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42660000))) ) ) {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42820000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 858993459;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 858993459;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42810000))) ) ) {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42500000))) ) ) {
                      result[0] += 858993459;
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
                      result[4] += 858993459;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42890000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 858993459;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42af0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 858993459;
                    result[5] += 0;
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 858993459;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 858993459;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42810000))) ) ) {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42940000))) ) ) {
              if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42980000))) ) ) {
                if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42620000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 858993459;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 858993459;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 858993459;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 858993459;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 858993459;
            }
          } else {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42aa0000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 858993459;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 858993459;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x426e0000))) ) ) {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42940000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 858993459;
              result[5] += 0;
            } else {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42760000))) ) ) {
                result[0] += 858993459;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429b0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 858993459;
                  result[5] += 0;
                } else {
                  result[0] += 858993459;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428d0000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 858993459;
              result[5] += 0;
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42920000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 858993459;
              } else {
                result[0] += 858993459;
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
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42830000))) ) ) {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42680000))) ) ) {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42990000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 858993459;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 858993459;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c60000))) ) ) {
                if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42660000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 858993459;
                  result[5] += 0;
                } else {
                  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x425a0000))) ) ) {
                    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x429a0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42760000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 858993459;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 6059918;
                      result[4] += 1514979;
                      result[5] += 851418560;
                    }
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 858993459;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42910000))) ) ) {
              if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428f0000))) ) ) {
                if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42830000))) ) ) {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42990000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 858993459;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42870000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 858993459;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 515396075;
                      result[5] += 343597383;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 858993459;
                }
              } else {
                if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a30000))) ) ) {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x427e0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 858993459;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  }
                } else {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x427e0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 858993459;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  }
                }
              }
            } else {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a90000))) ) ) {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 858993459;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
                    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42bd0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 16361780;
                      result[4] += 0;
                      result[5] += 842631678;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42860000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    }
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a00000))) ) ) {
                    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x427e0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 47721858;
                      result[4] += 0;
                      result[5] += 811271600;
                    }
                  } else {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428b0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 343597383;
                      result[4] += 57266230;
                      result[5] += 458129844;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
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
                  result[5] += 858993459;
                }
              }
            }
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
            if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42540000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 858993459;
            } else {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42890000))) ) ) {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x427c0000))) ) ) {
                  result[0] += 0;
                  result[1] += 858993459;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 858993459;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 858993459;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x427e0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 858993459;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ac0000))) ) ) {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428e0000))) ) ) {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42800000))) ) ) {
                  result[0] += 0;
                  result[1] += 858993459;
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
                  result[5] += 858993459;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 858993459;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428c0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 858993459;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 858993459;
              }
            }
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
            if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x427e0000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 858993459;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 858993459;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
              if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42900000))) ) ) {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42740000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 858993459;
                } else {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42600000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
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
                result[5] += 858993459;
              }
            } else {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c10000))) ) ) {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428a0000))) ) ) {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x429c0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 214748364;
                      result[4] += 0;
                      result[5] += 644245094;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x427c0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 613566756;
                      result[4] += 0;
                      result[5] += 245426702;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 67815273;
                      result[4] += 0;
                      result[5] += 791178185;
                    }
                  }
                } else {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
                    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 808464432;
                      result[4] += 0;
                      result[5] += 50529027;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 858993459;
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
                    result[5] += 858993459;
                  }
                }
              } else {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428a0000))) ) ) {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42830000))) ) ) {
                    result[0] += 0;
                    result[1] += 858993459;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a40000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 858993459;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
                    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428e0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42830000))) ) ) {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42700000))) ) ) {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ad0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 858993459;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 858993459;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42af0000))) ) ) {
                if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 858993459;
                } else {
                  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42af0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 858993459;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a40000))) ) ) {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
                if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42900000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 858993459;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 858993459;
                }
              } else {
                if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42820000))) ) ) {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42940000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 858993459;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 858993459;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42910000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 368140053;
                      result[4] += 0;
                      result[5] += 490853405;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    }
                  }
                } else {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42880000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 858993459;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42960000))) ) ) {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a00000))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b00000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42aa0000))) ) ) {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42be0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  }
                } else {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    }
                  } else {
                    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c50000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 57266230;
                      result[3] += 229064922;
                      result[4] += 0;
                      result[5] += 572662306;
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
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 858993459;
            result[5] += 0;
          } else {
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a60000))) ) ) {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x424c0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 858993459;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 858993459;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x423c0000))) ) ) {
                result[0] += 0;
                result[1] += 858993459;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42e20000))) ) ) {
                  result[0] += 0;
                  result[1] += 858993459;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424a0000))) ) ) {
                    result[0] += 0;
                    result[1] += 858993459;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 858993459;
                    result[5] += 0;
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cc0000))) ) ) {
            if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x429b0000))) ) ) {
              result[0] += 0;
              result[1] += 858993459;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42900000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 858993459;
                result[5] += 0;
              } else {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42870000))) ) ) {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429e0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b20000))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                      result[2] += 572662306;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 858993459;
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
                  result[4] += 858993459;
                  result[5] += 0;
                }
              }
            }
          } else {
            result[0] += 0;
            result[1] += 858993459;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42540000))) ) ) {
            result[0] += 0;
            result[1] += 858993459;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42910000))) ) ) {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428a0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 858993459;
                result[5] += 0;
              } else {
                if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c80000))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42810000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 858993459;
                    result[5] += 0;
                  } else {
                    result[0] += 858993459;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 858993459;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 858993459;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42890000))) ) ) {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ba0000))) ) ) {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c60000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  } else {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429a0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 858993459;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    }
                  }
                } else {
                  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b80000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 858993459;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 858993459;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d10000))) ) ) {
                  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42d10000))) ) ) {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ad0000))) ) ) {
                      result[0] += 40904450;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 163617801;
                      result[4] += 654471206;
                      result[5] += 0;
                    } else {
                      result[0] += 644245094;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 214748364;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 858993459;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 858993459;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42890000))) ) ) {
                if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x427e0000))) ) ) {
                  result[0] += 0;
                  result[1] += 858993459;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42810000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428f0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    } else {
                      result[0] += 107374182;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 751619276;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428d0000))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ba0000))) ) ) {
                      result[0] += 826045764;
                      result[1] += 4706813;
                      result[2] += 4706813;
                      result[3] += 0;
                      result[4] += 21180660;
                      result[5] += 2353406;
                    } else {
                      result[0] += 122713351;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 736280107;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c70000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 528611359;
                      result[4] += 198229259;
                      result[5] += 132152839;
                    } else {
                      result[0] += 101058054;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 757935405;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 858993459;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
                      result[0] += 826578611;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 32414847;
                      result[5] += 0;
                    } else {
                      result[0] += 858993459;
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
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d90000))) ) ) {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a00000))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b40000))) ) ) {
                  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42be0000))) ) ) {
                    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b60000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  }
                } else {
                  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 858993459;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a40000))) ) ) {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42830000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 858993459;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 858993459;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42db0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42830000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 858993459;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 715827882;
                      result[1] += 0;
                      result[2] += 143165576;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c10000))) ) ) {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428e0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 858993459;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42bb0000))) ) ) {
                      result[0] += 858993459;
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
                      result[4] += 858993459;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42cd0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 858993459;
                      result[5] += 0;
                    } else {
                      result[0] += 858993459;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b20000))) ) ) {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  }
                } else {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c70000))) ) ) {
                    result[0] += 858993459;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c90000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 858993459;
                      result[5] += 0;
                    } else {
                      result[0] += 858993459;
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
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b40000))) ) ) {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d70000))) ) ) {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a10000))) ) ) {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42990000))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 858993459;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 858993459;
              }
            } else {
              result[0] += 858993459;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b40000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 858993459;
            } else {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 858993459;
              } else {
                if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42860000))) ) ) {
                  result[0] += 0;
                  result[1] += 858993459;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a80000))) ) ) {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a10000))) ) ) {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42950000))) ) ) {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42cd0000))) ) ) {
                  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a30000))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b60000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 858993459;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 858993459;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ce0000))) ) ) {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ab0000))) ) ) {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429c0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 58040098;
                      result[3] += 754521281;
                      result[4] += 0;
                      result[5] += 46432078;
                    }
                  } else {
                    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 858993459;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a60000))) ) ) {
                    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  } else {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c50000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 858993459;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427c0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 858993459;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c50000))) ) ) {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  }
                } else {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42b20000))) ) ) {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b70000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 674923432;
                      result[3] += 122713351;
                      result[4] += 0;
                      result[5] += 61356675;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c20000))) ) ) {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ac0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 858993459;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 858993459;
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
                result[5] += 858993459;
              }
            } else {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
                if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42e60000))) ) ) {
                  result[0] += 858993459;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 858993459;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ae0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ea0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 858993459;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b10000))) ) ) {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c90000))) ) ) {
              if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c50000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 858993459;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42990000))) ) ) {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a10000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429e0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 858993459;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a20000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 858993459;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c00000))) ) ) {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
                  if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ac0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 858993459;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  }
                } else {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42d20000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 858993459;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b90000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 858993459;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 858993459;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42be0000))) ) ) {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c00000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 858993459;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 858993459;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 858993459;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42cd0000))) ) ) {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ab0000))) ) ) {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b30000))) ) ) {
                if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ab0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 858993459;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428c0000))) ) ) {
                    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a00000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 858993459;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42bb0000))) ) ) {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42970000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 858993459;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429f0000))) ) ) {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ae0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 806402022;
                      result[3] += 17530478;
                      result[4] += 0;
                      result[5] += 35060957;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 606348324;
                      result[3] += 252645135;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c50000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 763549741;
                      result[3] += 95443717;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 508383883;
                      result[3] += 350609575;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c40000))) ) ) {
                if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  } else {
                    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42cd0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 858993459;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 858993459;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b30000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 858993459;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 858993459;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
              result[0] += 858993459;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
                if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
                  if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42cf0000))) ) ) {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ef0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 858993459;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42e10000))) ) ) {
                      result[0] += 47721858;
                      result[1] += 0;
                      result[2] += 286331153;
                      result[3] += 524940447;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 858993459;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42df0000))) ) ) {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 808464432;
                      result[3] += 50529027;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 858993459;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b10000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 572662306;
                      result[3] += 286331153;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 858993459;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bc0000))) ) ) {
                  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42b90000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 858993459;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cb0000))) ) ) {
                    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 821645917;
                      result[3] += 37347541;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 856790911;
                      result[3] += 2202547;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
                      result[0] += 858993459;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 858993459;
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
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42780000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 858993459;
          result[5] += 0;
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42660000))) ) ) {
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x429b0000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 858993459;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 858993459;
            }
          } else {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42810000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 858993459;
              result[5] += 0;
            } else {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x429f0000))) ) ) {
                if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42810000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 858993459;
                } else {
                  result[0] += 858993459;
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
                result[4] += 858993459;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x425e0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42660000))) ) ) {
            result[0] += 858993459;
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
            result[4] += 858993459;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42810000))) ) ) {
            if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42900000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 858993459;
              result[5] += 0;
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428e0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 858993459;
              } else {
                if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x424e0000))) ) ) {
                  result[0] += 0;
                  result[1] += 858993459;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 858993459;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x429e0000))) ) ) {
              if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42960000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 858993459;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 858993459;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42890000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 858993459;
                result[5] += 0;
              } else {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x426c0000))) ) ) {
                  if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a10000))) ) ) {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42960000))) ) ) {
                      result[0] += 0;
                      result[1] += 572662306;
                      result[2] += 0;
                      result[3] += 286331153;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 858993459;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a20000))) ) ) {
                    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42580000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    } else {
                      result[0] += 0;
                      result[1] += 429496729;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 858993459;
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
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42810000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 858993459;
          result[5] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
                if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42840000))) ) ) {
                  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x428e0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 858993459;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 858993459;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428c0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 858993459;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 858993459;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42660000))) ) ) {
                result[0] += 0;
                result[1] += 858993459;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
                  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42850000))) ) ) {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b60000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 6281487;
                      result[4] += 4711115;
                      result[5] += 848000855;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428f0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 46432078;
                      result[4] += 77386798;
                      result[5] += 735174582;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 546632201;
                      result[5] += 312361257;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42900000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 858993459;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42af0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 85899345;
                      result[5] += 773094113;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 286331153;
                      result[4] += 572662306;
                      result[5] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a90000))) ) ) {
              if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a90000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 858993459;
              } else {
                if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42880000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 858993459;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 858993459;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
                if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42890000))) ) ) {
                  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a90000))) ) ) {
                    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a30000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 190887435;
                      result[4] += 0;
                      result[5] += 668106023;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a70000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  }
                }
              } else {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42970000))) ) ) {
                  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a10000))) ) ) {
                    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42720000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 343597383;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 515396075;
                    } else {
                      result[0] += 0;
                      result[1] += 858993459;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 784298375;
                      result[4] += 0;
                      result[5] += 74695083;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    }
                  }
                } else {
                  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42680000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 858993459;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42830000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 858993459;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 858993459;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428a0000))) ) ) {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a00000))) ) ) {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x428f0000))) ) ) {
                  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42880000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 858993459;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42980000))) ) ) {
                    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b30000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 858993459;
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
                    result[5] += 858993459;
                  }
                }
              } else {
                if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42830000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 858993459;
                } else {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  }
                }
              }
            } else {
              if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a60000))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
                  if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42700000))) ) ) {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428f0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 858993459;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42890000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 35422410;
                      result[4] += 0;
                      result[5] += 823571048;
                    }
                  }
                } else {
                  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c20000))) ) ) {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42870000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 286331153;
                      result[4] += 0;
                      result[5] += 572662306;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 663767672;
                      result[4] += 0;
                      result[5] += 195225786;
                    }
                  } else {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42810000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    }
                  }
                }
              } else {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42cd0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 858993459;
                  result[5] += 0;
                } else {
                  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c40000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 858993459;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a40000))) ) ) {
            if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42af0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 858993459;
              } else {
                if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42d00000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 858993459;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 858993459;
                }
              }
            } else {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42910000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 858993459;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 858993459;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
                if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42930000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 858993459;
                } else {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  }
                }
              } else {
                if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42740000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 858993459;
                } else {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c00000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c10000))) ) ) {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429c0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a30000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
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
                  result[5] += 858993459;
                }
              } else {
                if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42cf0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 858993459;
                } else {
                  if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42de0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 858993459;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  }
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x421a0000))) ) ) {
            if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x422a0000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 858993459;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 858993459;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x43028000))) ) ) {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428d0000))) ) ) {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42520000))) ) ) {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
                    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42980000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 858993459;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42870000))) ) ) {
                      result[0] += 0;
                      result[1] += 858993459;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 858993459;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42bb0000))) ) ) {
                    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42340000))) ) ) {
                      result[0] += 0;
                      result[1] += 858993459;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 858993459;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 858993459;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424a0000))) ) ) {
                  result[0] += 0;
                  result[1] += 858993459;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42be0000))) ) ) {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42930000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 787410670;
                      result[5] += 71582788;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              }
            } else {
              result[0] += 0;
              result[1] += 858993459;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x425e0000))) ) ) {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42cb0000))) ) ) {
              result[0] += 0;
              result[1] += 858993459;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 858993459;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42850000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 858993459;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 858993459;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 858993459;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42760000))) ) ) {
            if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x426a0000))) ) ) {
              result[0] += 858993459;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ca0000))) ) ) {
                if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x429b0000))) ) ) {
                  if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42bf0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 858993459;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42820000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 858993459;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    }
                  }
                } else {
                  result[0] += 858993459;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 858993459;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 858993459;
            } else {
              if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d10000))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x429c0000))) ) ) {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42820000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 858993459;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 858993459;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
                    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 229064922;
                      result[4] += 57266230;
                      result[5] += 572662306;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 14559211;
                      result[3] += 742519769;
                      result[4] += 29118422;
                      result[5] += 72796055;
                    }
                  } else {
                    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a50000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 171798691;
                      result[3] += 515396075;
                      result[4] += 171798691;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 128849018;
                      result[4] += 85899345;
                      result[5] += 644245094;
                    }
                  }
                }
              } else {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428d0000))) ) ) {
                  result[0] += 858993459;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 858993459;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            }
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42f60000))) ) ) {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 858993459;
                  result[5] += 0;
                } else {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
                    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426a0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 858993459;
                      result[5] += 0;
                    } else {
                      result[0] += 835613596;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1731841;
                      result[4] += 19916178;
                      result[5] += 1731841;
                    }
                  } else {
                    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42cd0000))) ) ) {
                      result[0] += 245426702;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 184070026;
                      result[4] += 368140053;
                      result[5] += 61356675;
                    } else {
                      result[0] += 858993459;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b30000))) ) ) {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42dd0000))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x429a0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 751619276;
                      result[5] += 107374182;
                    } else {
                      result[0] += 71582788;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 357913941;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 858993459;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b30000))) ) ) {
                    result[0] += 0;
                    result[1] += 858993459;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 858993459;
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
              result[1] += 858993459;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
              if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d90000))) ) ) {
                if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42870000))) ) ) {
                  if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d00000))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a40000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 490853405;
                      result[5] += 368140053;
                    } else {
                      result[0] += 429496729;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 858993459;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428d0000))) ) ) {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429d0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 66076419;
                      result[4] += 0;
                      result[5] += 792917039;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 770891565;
                      result[4] += 0;
                      result[5] += 88101893;
                    } else {
                      result[0] += 429496729;
                      result[1] += 0;
                      result[2] += 214748364;
                      result[3] += 214748364;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42d40000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 858993459;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 858993459;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b00000))) ) ) {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b90000))) ) ) {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429c0000))) ) ) {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a70000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 858993459;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 858993459;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 858993459;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c20000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 858993459;
                  result[5] += 0;
                } else {
                  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b00000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 858993459;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d30000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 858993459;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 858993459;
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
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 858993459;
              result[5] += 0;
            } else {
              if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42dd0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 858993459;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 858993459;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a20000))) ) ) {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ab0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 858993459;
              } else {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429e0000))) ) ) {
                    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  }
                } else {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ca0000))) ) ) {
                    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    }
                  } else {
                    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429b0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 644245094;
                      result[4] += 0;
                      result[5] += 214748364;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 687194767;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 171798691;
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
              result[5] += 858993459;
            }
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c00000))) ) ) {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cb0000))) ) ) {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c20000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 858993459;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 858993459;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42d50000))) ) ) {
                    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c60000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 858993459;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 61356675;
                      result[3] += 797636783;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  }
                } else {
                  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b00000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 858993459;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 858993459;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42880000))) ) ) {
              result[0] += 0;
              result[1] += 858993459;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
                  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
                    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cc0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    }
                  } else {
                    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a10000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 343597383;
                      result[5] += 515396075;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 858993459;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
                    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42d20000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    }
                  } else {
                    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 122713351;
                      result[3] += 736280107;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 19976592;
                      result[1] += 0;
                      result[2] += 739133906;
                      result[3] += 99882960;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 858993459;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b60000))) ) ) {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429f0000))) ) ) {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a30000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 858993459;
              } else {
                if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 858993459;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 858993459;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428c0000))) ) ) {
                result[0] += 858993459;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
                  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 858993459;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 858993459;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 858993459;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a10000))) ) ) {
              result[0] += 858993459;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ca0000))) ) ) {
                result[0] += 858993459;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
                  result[0] += 858993459;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 858993459;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            }
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
            if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c00000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 858993459;
              } else {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a70000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 858993459;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 858993459;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42910000))) ) ) {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e70000))) ) ) {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ca0000))) ) ) {
                    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42920000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 858993459;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 858993459;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x43008000))) ) ) {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42be0000))) ) ) {
                    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42bf0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    }
                  } else {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42b60000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 734000602;
                      result[3] += 122333433;
                      result[4] += 0;
                      result[5] += 2659422;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 847980722;
                      result[3] += 11012736;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  result[0] += 858993459;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c30000))) ) ) {
              if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cc0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 858993459;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 858993459;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
                if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42e30000))) ) ) {
                  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42d30000))) ) ) {
                    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42e00000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 858993459;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 286331153;
                      result[3] += 572662306;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 858993459;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42d10000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 858993459;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42aa0000))) ) ) {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42aa0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 858993459;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 858993459;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ad0000))) ) ) {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42d90000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 840319688;
                      result[3] += 18673770;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 687194767;
                      result[3] += 171798691;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 858993459;
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
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b40000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
            if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x423c0000))) ) ) {
              result[0] += 0;
              result[1] += 858993459;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42bf0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 858993459;
                result[5] += 0;
              } else {
                if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42560000))) ) ) {
                  result[0] += 858993459;
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
                  result[4] += 858993459;
                  result[5] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
              if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42950000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 858993459;
              } else {
                if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42700000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 858993459;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 858993459;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42960000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 858993459;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 858993459;
              }
            }
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42860000))) ) ) {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42840000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 858993459;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 858993459;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x429a0000))) ) ) {
              result[0] += 0;
              result[1] += 858993459;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 858993459;
              result[4] += 0;
              result[5] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
            if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x425e0000))) ) ) {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42960000))) ) ) {
                result[0] += 858993459;
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
                result[4] += 858993459;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x424e0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 858993459;
                result[5] += 0;
              } else {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42950000))) ) ) {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42660000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 858993459;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42620000))) ) ) {
                    result[0] += 858993459;
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
                    result[4] += 858993459;
                    result[5] += 0;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428b0000))) ) ) {
                if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42720000))) ) ) {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42980000))) ) ) {
                    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42560000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 858993459;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 858993459;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x425a0000))) ) ) {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x429a0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b70000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 4994148;
                      result[4] += 12485370;
                      result[5] += 841513940;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42810000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 858993459;
                  result[5] += 0;
                } else {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ab0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  } else {
                    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b30000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 151587081;
                      result[4] += 0;
                      result[5] += 707406378;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42870000))) ) ) {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42870000))) ) ) {
                  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42940000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 858993459;
                    result[5] += 0;
                  } else {
                    result[0] += 858993459;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x428d0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 858993459;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  }
                }
              } else {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42860000))) ) ) {
                  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  }
                } else {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428c0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 858993459;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x427e0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 88101893;
                      result[4] += 55063683;
                      result[5] += 715827882;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ac0000))) ) ) {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42700000))) ) ) {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42760000))) ) ) {
                  result[0] += 0;
                  result[1] += 858993459;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 858993459;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
                  if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42890000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 858993459;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  }
                } else {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x426a0000))) ) ) {
                    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428f0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 858993459;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428b0000))) ) ) {
                      result[0] += 0;
                      result[1] += 7669584;
                      result[2] += 0;
                      result[3] += 115043766;
                      result[4] += 15339168;
                      result[5] += 720940938;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 171798691;
                      result[4] += 515396075;
                      result[5] += 171798691;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429b0000))) ) ) {
                if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429b0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 858993459;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 858993459;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 858993459;
              }
            }
          } else {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428d0000))) ) ) {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
                result[0] += 858993459;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42940000))) ) ) {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x425a0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 858993459;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42850000))) ) ) {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42aa0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a20000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 644245094;
                      result[4] += 0;
                      result[5] += 214748364;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ab0000))) ) ) {
                if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b40000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 858993459;
                } else {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429e0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  }
                }
              } else {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42950000))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a70000))) ) ) {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 286331153;
                      result[4] += 0;
                      result[5] += 572662306;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429c0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    }
                  } else {
                    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b80000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
          result[0] += 0;
          result[1] += 858993459;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c20000))) ) ) {
            if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x427e0000))) ) ) {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x429c0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 858993459;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 858993459;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x429c0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 858993459;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 858993459;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
              result[0] += 0;
              result[1] += 858993459;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a60000))) ) ) {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42810000))) ) ) {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42700000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 858993459;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 858993459;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 858993459;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 858993459;
                  result[5] += 0;
                } else {
                  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42fa0000))) ) ) {
                    result[0] += 858993459;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
                      result[0] += 0;
                      result[1] += 858993459;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 858993459;
                      result[5] += 0;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42d70000))) ) ) {
            if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
              if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cd0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 858993459;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 858993459;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42820000))) ) ) {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x425e0000))) ) ) {
                      result[0] += 858993459;
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
                      result[4] += 858993459;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ba0000))) ) ) {
                      result[0] += 832963354;
                      result[1] += 0;
                      result[2] += 4338350;
                      result[3] += 6507526;
                      result[4] += 15184227;
                      result[5] += 0;
                    } else {
                      result[0] += 507587043;
                      result[1] += 0;
                      result[2] += 78090314;
                      result[3] += 0;
                      result[4] += 273316100;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428a0000))) ) ) {
                    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42900000))) ) ) {
                      result[0] += 186737708;
                      result[1] += 37347541;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 634908208;
                      result[5] += 0;
                    } else {
                      result[0] += 634333631;
                      result[1] += 13215283;
                      result[2] += 0;
                      result[3] += 26430567;
                      result[4] += 185013975;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x429a0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 858993459;
                      result[5] += 0;
                    } else {
                      result[0] += 13215283;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 449319655;
                      result[4] += 92506987;
                      result[5] += 303951531;
                    }
                  }
                }
              } else {
                if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42aa0000))) ) ) {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42dd0000))) ) ) {
                      result[0] += 858993459;
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
                      result[4] += 858993459;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 858993459;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42950000))) ) ) {
                    result[0] += 858993459;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c30000))) ) ) {
                      result[0] += 343597383;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 515396075;
                      result[5] += 0;
                    } else {
                      result[0] += 811271600;
                      result[1] += 0;
                      result[2] += 47721858;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42df0000))) ) ) {
              result[0] += 0;
              result[1] += 858993459;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 858993459;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ac0000))) ) ) {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42820000))) ) ) {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c90000))) ) ) {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 515396075;
                      result[4] += 343597383;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 858993459;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42920000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 858993459;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 687194767;
                      result[4] += 0;
                      result[5] += 171798691;
                    }
                  }
                } else {
                  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428e0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ac0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bf0000))) ) ) {
                  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ac0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 804164089;
                      result[4] += 0;
                      result[5] += 54829369;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 286331153;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 572662306;
                    }
                  } else {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x429f0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 858993459;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b10000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 736280107;
                      result[3] += 122713351;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 71582788;
                      result[3] += 751619276;
                      result[4] += 0;
                      result[5] += 35791394;
                    }
                  } else {
                    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429a0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 773094113;
                      result[3] += 85899345;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bc0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 858993459;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a30000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 858993459;
                  result[5] += 0;
                } else {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42fc0000))) ) ) {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
                      result[0] += 858993459;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 858993459;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 858993459;
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
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b70000))) ) ) {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
                if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c30000))) ) ) {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42af0000))) ) ) {
                    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42da0000))) ) ) {
                      result[0] += 286331153;
                      result[1] += 286331153;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 286331153;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 858993459;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42de0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 103079215;
                      result[4] += 0;
                      result[5] += 755914243;
                    } else {
                      result[0] += 858993459;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42940000))) ) ) {
                    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ca0000))) ) ) {
                      result[0] += 0;
                      result[1] += 858993459;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 286331153;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 572662306;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
                      result[0] += 0;
                      result[1] += 286331153;
                      result[2] += 143165576;
                      result[3] += 286331153;
                      result[4] += 0;
                      result[5] += 143165576;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 858993459;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  } else {
                    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d40000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 858993459;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c50000))) ) ) {
                    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b30000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 858993459;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 858993459;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 858993459;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42b40000))) ) ) {
                if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ca0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 858993459;
                  result[5] += 0;
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c30000))) ) ) {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ad0000))) ) ) {
                      result[0] += 858993459;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 858993459;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 858993459;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a00000))) ) ) {
                  result[0] += 858993459;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 858993459;
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
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 858993459;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 858993459;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ce0000))) ) ) {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b00000))) ) ) {
              if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ae0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 858993459;
              } else {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c20000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 858993459;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 858993459;
                }
              }
            } else {
              if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cd0000))) ) ) {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
                  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  } else {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 744460997;
                      result[4] += 0;
                      result[5] += 114532461;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 858993459;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429e0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 858993459;
                } else {
                  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c40000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 858993459;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429e0000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 858993459;
            } else {
              if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
                if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ad0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 858993459;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 858993459;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d20000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 858993459;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42bf0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 858993459;
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
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 858993459;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 858993459;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c90000))) ) ) {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42940000))) ) ) {
                  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 858993459;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 858993459;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 858993459;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 858993459;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42d50000))) ) ) {
            if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c90000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 858993459;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 858993459;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 858993459;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42660000))) ) ) {
        result[0] += 0;
        result[1] += 858993459;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a20000))) ) ) {
            if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a30000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 858993459;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42bb0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 858993459;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 858993459;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42c40000))) ) ) {
              if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b20000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 858993459;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c00000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 858993459;
                } else {
                  result[0] += 858993459;
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
              result[4] += 858993459;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b60000))) ) ) {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429b0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 858993459;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 858993459;
              }
            } else {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b90000))) ) ) {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 858993459;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 858993459;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
                  if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428d0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 858993459;
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429d0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 198229259;
                      result[3] += 660764199;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 707406378;
                      result[3] += 151587081;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42dd0000))) ) ) {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a50000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 801727228;
                      result[3] += 57266230;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 858993459;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ee0000))) ) ) {
                      result[0] += 10475529;
                      result[1] += 0;
                      result[2] += 712336039;
                      result[3] += 115230829;
                      result[4] += 0;
                      result[5] += 20951059;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 286331153;
                      result[3] += 572662306;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cd0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 858993459;
              } else {
                if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42dd0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 858993459;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 858993459;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x43040000))) ) ) {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ca0000))) ) ) {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b20000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 858993459;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 858993459;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d90000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 858993459;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 668106023;
                      result[3] += 190887435;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a60000))) ) ) {
                      result[0] += 858993459;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 858993459;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 814370422;
                      result[3] += 44623036;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 853712761;
                      result[3] += 5280697;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cc0000))) ) ) {
                  result[0] += 858993459;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 858993459;
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

void postprocess(uint32_t* result) {
  // Do nothing
}


int main() {
    uint32_t result[MAX_N_CLASS];
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
