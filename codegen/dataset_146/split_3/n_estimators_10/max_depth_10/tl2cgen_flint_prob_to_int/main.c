
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
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42820000))) ) ) {
            if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42800000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 429496729;
              }
            } else {
              if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42940000))) ) ) {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42500000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 429496729;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 429496729;
            }
          }
        } else {
          result[0] += 0;
          result[1] += 429496729;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42620000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 429496729;
            result[5] += 0;
          } else {
            result[0] += 429496729;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42810000))) ) ) {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428e0000))) ) ) {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42560000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              } else {
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42740000))) ) ) {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429f0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42820000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 429496729;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428d0000))) ) ) {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42720000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42870000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b30000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                } else {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42910000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                }
              }
            } else {
              if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428a0000))) ) ) {
                if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42980000))) ) ) {
                  result[0] += 0;
                  result[1] += 429496729;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 429496729;
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
                result[3] += 429496729;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424c0000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 429496729;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 429496729;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x425c0000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 429496729;
              result[5] += 0;
            } else {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428b0000))) ) ) {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x429c0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                } else {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
                    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42840000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a50000))) ) ) {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ab0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 143165576;
                      result[4] += 0;
                      result[5] += 286331153;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            }
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42910000))) ) ) {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x428f0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 429496729;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42930000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 429496729;
              } else {
                result[0] += 0;
                result[1] += 429496729;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42b60000))) ) ) {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
                if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42640000))) ) ) {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x426a0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x428a0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 23146530;
                      result[4] += 5143673;
                      result[5] += 401206525;
                    }
                  } else {
                    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 47721858;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 381774870;
                    }
                  }
                }
              } else {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428d0000))) ) ) {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428a0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 357913941;
                      result[4] += 0;
                      result[5] += 71582788;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 71582788;
                      result[4] += 0;
                      result[5] += 357913941;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42870000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 192533016;
                      result[4] += 0;
                      result[5] += 236963712;
                    }
                  }
                } else {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
                    result[0] += 429496729;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b20000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cc0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 429496729;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bb0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a20000))) ) ) {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42820000))) ) ) {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42860000))) ) ) {
                if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42980000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 429496729;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429c0000))) ) ) {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429a0000))) ) ) {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428a0000))) ) ) {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428b0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  } else {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428a0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 53687091;
                      result[4] += 0;
                      result[5] += 375809638;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  }
                } else {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cc0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 429496729;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42890000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 429496729;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a30000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 429496729;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 429496729;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a40000))) ) ) {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42740000))) ) ) {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bc0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 429496729;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b00000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42830000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 429496729;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42890000))) ) ) {
                  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428a0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                }
              }
            }
          } else {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42950000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                } else {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429b0000))) ) ) {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 417341161;
                      result[4] += 0;
                      result[5] += 12155567;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                }
              } else {
                if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b40000))) ) ) {
                  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b50000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42920000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428d0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 429496729;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b40000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                } else {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428d0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
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
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42560000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b00000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42440000))) ) ) {
          result[0] += 0;
          result[1] += 429496729;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 429496729;
            result[5] += 0;
          } else {
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429e0000))) ) ) {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a00000))) ) ) {
                result[0] += 0;
                result[1] += 429496729;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 429496729;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 429496729;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42d60000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 429496729;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c30000))) ) ) {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42720000))) ) ) {
                if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42840000))) ) ) {
                  result[0] += 429496729;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 429496729;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 429496729;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c40000))) ) ) {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x423a0000))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x424c0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 429496729;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x425a0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 429496729;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                result[0] += 429496729;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          result[0] += 429496729;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42300000))) ) ) {
            result[0] += 0;
            result[1] += 429496729;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42980000))) ) ) {
              if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42760000))) ) ) {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x425c0000))) ) ) {
                  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424a0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 429496729;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a50000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    result[0] += 0;
                    result[1] += 429496729;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x424a0000))) ) ) {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x425e0000))) ) ) {
                    result[0] += 429496729;
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
                    result[4] += 429496729;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42e80000))) ) ) {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42980000))) ) ) {
                      result[0] += 11402568;
                      result[1] += 3800856;
                      result[2] += 0;
                      result[3] += 11402568;
                      result[4] += 402890737;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 214748364;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 214748364;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42720000))) ) ) {
                if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429b0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                } else {
                  result[0] += 0;
                  result[1] += 429496729;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x426e0000))) ) ) {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42990000))) ) ) {
                    result[0] += 429496729;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ca0000))) ) ) {
                    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a10000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 85899345;
                      result[5] += 343597383;
                    } else {
                      result[0] += 61356675;
                      result[1] += 0;
                      result[2] += 245426702;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 122713351;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b60000))) ) ) {
                      result[0] += 0;
                      result[1] += 85899345;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 343597383;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42780000))) ) ) {
                result[0] += 429496729;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x429a0000))) ) ) {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429a0000))) ) ) {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428b0000))) ) ) {
                      result[0] += 0;
                      result[1] += 322122547;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 107374182;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 257698037;
                      result[5] += 171798691;
                    }
                  }
                } else {
                  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x429b0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c60000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 357913941;
                      result[4] += 0;
                      result[5] += 71582788;
                    } else {
                      result[0] += 322122547;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 107374182;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428d0000))) ) ) {
                  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42580000))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42500000))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 429496729;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b10000))) ) ) {
                      result[0] += 214748364;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 214748364;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ad0000))) ) ) {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429a0000))) ) ) {
                      result[0] += 214748364;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 214748364;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42640000))) ) ) {
                      result[0] += 0;
                      result[1] += 245426702;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 184070026;
                      result[5] += 0;
                    } else {
                      result[0] += 416189672;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 2294320;
                      result[4] += 10553872;
                      result[5] += 458864;
                    }
                  }
                }
              } else {
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d70000))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x429a0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c70000))) ) ) {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b20000))) ) ) {
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42910000))) ) ) {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x423a0000))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429c0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 390451572;
                      result[5] += 39045157;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42860000))) ) ) {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d70000))) ) ) {
                      result[0] += 257698037;
                      result[1] += 85899345;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 85899345;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 39045157;
                      result[4] += 0;
                      result[5] += 390451572;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 31580641;
                      result[3] += 277909648;
                      result[4] += 0;
                      result[5] += 120006439;
                    }
                  }
                }
              } else {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c90000))) ) ) {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b30000))) ) ) {
                    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d20000))) ) ) {
                      result[0] += 429496729;
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
                      result[4] += 429496729;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42e10000))) ) ) {
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bd0000))) ) ) {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b80000))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 429496729;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42cd0000))) ) ) {
                    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bd0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42aa0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 53687091;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 375809638;
                    } else {
                      result[0] += 85899345;
                      result[1] += 0;
                      result[2] += 343597383;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42b30000))) ) ) {
                  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b20000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 429496729;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 429496729;
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
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b50000))) ) ) {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42900000))) ) ) {
                if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x425a0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428a0000))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a00000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x428b0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42950000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 286331153;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42e50000))) ) ) {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ae0000))) ) ) {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42af0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 11012736;
                      result[3] += 220254733;
                      result[4] += 11012736;
                      result[5] += 187216523;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 64718685;
                      result[3] += 317709909;
                      result[4] += 0;
                      result[5] += 47068134;
                    }
                  } else {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42960000))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
                    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d60000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 357913941;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 71582788;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42dc0000))) ) ) {
                  result[0] += 0;
                  result[1] += 429496729;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 429496729;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
              result[0] += 429496729;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42930000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 429496729;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bd0000))) ) ) {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429f0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  } else {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 171798691;
                      result[3] += 257698037;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 319054713;
                      result[3] += 73628010;
                      result[4] += 0;
                      result[5] += 36814005;
                    }
                  }
                } else {
                  if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42bc0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 429496729;
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
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42870000))) ) ) {
            if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428d0000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 429496729;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42af0000))) ) ) {
                result[0] += 429496729;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b80000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 429496729;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42910000))) ) ) {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cc0000))) ) ) {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ae0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                result[0] += 429496729;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429a0000))) ) ) {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42d20000))) ) ) {
                    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cd0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 322122547;
                      result[4] += 0;
                      result[5] += 107374182;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 53687091;
                      result[4] += 0;
                      result[5] += 375809638;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42cf0000))) ) ) {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 241591910;
                      result[3] += 187904819;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 4032833;
                      result[2] += 371020648;
                      result[3] += 46377581;
                      result[4] += 0;
                      result[5] += 8065666;
                    }
                  } else {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 143165576;
                      result[3] += 286331153;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42960000))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42f10000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 429496729;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42af0000))) ) ) {
                    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 156180628;
                      result[3] += 273316100;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 390745144;
                      result[3] += 37136935;
                      result[4] += 0;
                      result[5] += 1614649;
                    }
                  } else {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c30000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 428233503;
                      result[3] += 1263225;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 34824059;
                      result[1] += 0;
                      result[2] += 371456630;
                      result[3] += 23216039;
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
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42620000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 429496729;
            result[5] += 0;
          } else {
            if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x424c0000))) ) ) {
              result[0] += 429496729;
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
              result[4] += 429496729;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bf0000))) ) ) {
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x427a0000))) ) ) {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42700000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 429496729;
              }
            } else {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
                if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42560000))) ) ) {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42860000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42990000))) ) ) {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
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
            result[5] += 429496729;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
            if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
              if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426a0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              } else {
                result[0] += 429496729;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42850000))) ) ) {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b40000))) ) ) {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42970000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 286331153;
                      result[5] += 143165576;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42860000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    result[0] += 429496729;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42be0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 429496729;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42800000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              } else {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
                  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42420000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42920000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  }
                } else {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a90000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ca0000))) ) ) {
                      result[0] += 85899345;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 85899345;
                      result[4] += 171798691;
                      result[5] += 85899345;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
                if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b10000))) ) ) {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42440000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ad0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 3214795;
                      result[4] += 3214795;
                      result[5] += 423067137;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 85899345;
                      result[4] += 171798691;
                      result[5] += 171798691;
                    }
                  }
                } else {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
                    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x427e0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  } else {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 36398027;
                      result[4] += 0;
                      result[5] += 393098701;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 67108863;
                      result[4] += 107374182;
                      result[5] += 255013683;
                    }
                  }
                }
              } else {
                if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a70000))) ) ) {
                  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42800000))) ) ) {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42900000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                } else {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428a0000))) ) ) {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42850000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 28633115;
                      result[2] += 0;
                      result[3] += 314964268;
                      result[4] += 0;
                      result[5] += 85899345;
                    }
                  } else {
                    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428d0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 227380621;
                      result[4] += 25264513;
                      result[5] += 176851594;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 79117818;
                      result[4] += 0;
                      result[5] += 350378910;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
            if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b70000))) ) ) {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a40000))) ) ) {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42960000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42980000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ae0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 257698037;
                      result[4] += 0;
                      result[5] += 171798691;
                    }
                  }
                }
              } else {
                if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428d0000))) ) ) {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ac0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 143165576;
                      result[4] += 0;
                      result[5] += 286331153;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                } else {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b30000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42870000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 429496729;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42960000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42820000))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
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
                    result[5] += 429496729;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42950000))) ) ) {
              if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42950000))) ) ) {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
                  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a30000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42830000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a00000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428d0000))) ) ) {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a50000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42970000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 214748364;
                      result[4] += 0;
                      result[5] += 214748364;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c60000))) ) ) {
                if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b70000))) ) ) {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42be0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x427c0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                }
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42d10000))) ) ) {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a00000))) ) ) {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42760000))) ) ) {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42780000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42850000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 401787263;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 27709466;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42980000))) ) ) {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42910000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  } else {
                    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
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
                      result[5] += 429496729;
                    }
                  }
                }
              } else {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42910000))) ) ) {
                  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d60000))) ) ) {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42a30000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a70000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c50000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 74051160;
                      result[4] += 0;
                      result[5] += 355445569;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 214748364;
                      result[3] += 214748364;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42890000))) ) ) {
                if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42c20000))) ) ) {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428a0000))) ) ) {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cd0000))) ) ) {
                      result[0] += 13421772;
                      result[1] += 6710886;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 409364070;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 429496729;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42680000))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 39045157;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 39045157;
                      result[4] += 351406415;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42560000))) ) ) {
                    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ee0000))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 257698037;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 171798691;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x426e0000))) ) ) {
                    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42810000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 429496729;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42870000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 286331153;
                      result[4] += 143165576;
                      result[5] += 0;
                    } else {
                      result[0] += 33038209;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 396458519;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a30000))) ) ) {
                      result[0] += 107374182;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 214748364;
                      result[5] += 107374182;
                    } else {
                      result[0] += 412156799;
                      result[1] += 889227;
                      result[2] += 0;
                      result[3] += 2223067;
                      result[4] += 13783021;
                      result[5] += 444613;
                    }
                  } else {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
                      result[0] += 0;
                      result[1] += 18673770;
                      result[2] += 56021312;
                      result[3] += 224085250;
                      result[4] += 37347541;
                      result[5] += 93368854;
                    } else {
                      result[0] += 342574772;
                      result[1] += 0;
                      result[2] += 5113056;
                      result[3] += 0;
                      result[4] += 81808900;
                      result[5] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a20000))) ) ) {
              result[0] += 0;
              result[1] += 429496729;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d30000))) ) ) {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429e0000))) ) ) {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42700000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c90000))) ) ) {
                  result[0] += 429496729;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 429496729;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            }
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b10000))) ) ) {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b10000))) ) ) {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a40000))) ) ) {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42980000))) ) ) {
                    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d10000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 300647710;
                      result[4] += 64424509;
                      result[5] += 64424509;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  }
                } else {
                  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42950000))) ) ) {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ac0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a10000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 83804239;
                      result[4] += 0;
                      result[5] += 345692489;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  }
                }
              } else {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ce0000))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42d50000))) ) ) {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b00000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 11930464;
                      result[3] += 369844405;
                      result[4] += 0;
                      result[5] += 47721858;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42e20000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 429496729;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a20000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
                  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b60000))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bf0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 71582788;
                      result[5] += 357913941;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42bf0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 16519104;
                      result[3] += 322122547;
                      result[4] += 8259552;
                      result[5] += 82595524;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 195225786;
                      result[3] += 234270943;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bd0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b10000))) ) ) {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a00000))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42820000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bb0000))) ) ) {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cc0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 322122547;
                      result[1] += 0;
                      result[2] += 107374182;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 395136991;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 34359738;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c50000))) ) ) {
              if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42da0000))) ) ) {
                if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b20000))) ) ) {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42740000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
                      result[0] += 171798691;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 171798691;
                      result[4] += 85899345;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 85899345;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 343597383;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42e00000))) ) ) {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42dd0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42820000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  result[0] += 429496729;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
                result[0] += 429496729;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42e90000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 429496729;
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
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42d50000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42990000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 429496729;
            result[5] += 0;
          } else {
            if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c90000))) ) ) {
              result[0] += 0;
              result[1] += 429496729;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 429496729;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          result[0] += 429496729;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cc0000))) ) ) {
            if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42af0000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 429496729;
            } else {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 429496729;
              } else {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bd0000))) ) ) {
                  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42be0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42bf0000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 429496729;
            } else {
              if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cd0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 429496729;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c20000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42940000))) ) ) {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42e10000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 429496729;
            } else {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428b0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 429496729;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42e80000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                }
              }
            }
          } else {
            if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42990000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 429496729;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ae0000))) ) ) {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ae0000))) ) ) {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a00000))) ) ) {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c50000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ad0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ab0000))) ) ) {
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d90000))) ) ) {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a50000))) ) ) {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a60000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ef0000))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a20000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 377660917;
                      result[3] += 51835812;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ec0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  }
                }
              } else {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c40000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42de0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d20000))) ) ) {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 161061273;
                      result[3] += 268435455;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 343597383;
                      result[3] += 34359738;
                      result[4] += 0;
                      result[5] += 51539607;
                    }
                  } else {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ce0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 334053011;
                      result[3] += 95443717;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42df0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 429496729;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b30000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42d50000))) ) ) {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e50000))) ) ) {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a10000))) ) ) {
                  result[0] += 429496729;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42af0000))) ) ) {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a80000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42af0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            }
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 429496729;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 429496729;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x43030000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a70000))) ) ) {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 429496729;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 429496729;
              } else {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
                  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ac0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b00000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c70000))) ) ) {
                    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ce0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42e10000))) ) ) {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ab0000))) ) ) {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42cd0000))) ) ) {
                  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a80000))) ) ) {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42cd0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 143165576;
                      result[3] += 286331153;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a20000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42cf0000))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ca0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b30000))) ) ) {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429e0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
                    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d40000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d50000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 412653720;
                      result[3] += 16843009;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ea0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b50000))) ) ) {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42b10000))) ) ) {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42b20000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 306783378;
                      result[3] += 122713351;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42be0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 429496729;
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
          result[0] += 429496729;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 429496729;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 429496729;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42940000))) ) ) {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b10000))) ) ) {
              result[0] += 429496729;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 429496729;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d10000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42d90000))) ) ) {
                    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ab0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 214748364;
                      result[3] += 214748364;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 429496729;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a60000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42aa0000))) ) ) {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42b40000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ee0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a70000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
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
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 429496729;
            result[5] += 0;
          } else {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
              if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x422a0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 429496729;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x429f0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 429496729;
              } else {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x429d0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  result[0] += 429496729;
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
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 429496729;
          } else {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42980000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 429496729;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 429496729;
            }
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 429496729;
              result[5] += 0;
            } else {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428b0000))) ) ) {
                if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x424a0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42850000))) ) ) {
                    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b50000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1517656;
                      result[4] += 0;
                      result[5] += 427979073;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 22906492;
                      result[4] += 11453246;
                      result[5] += 395136991;
                    }
                  }
                }
              } else {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429b0000))) ) ) {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42840000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a40000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42880000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 429496729;
              result[5] += 0;
            } else {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42980000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42640000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42810000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 214748364;
                      result[4] += 0;
                      result[5] += 214748364;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42890000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 429496729;
              result[5] += 0;
            } else {
              result[0] += 429496729;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ac0000))) ) ) {
              if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x423a0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428b0000))) ) ) {
                    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b60000))) ) ) {
                      result[0] += 0;
                      result[1] += 4450743;
                      result[2] += 0;
                      result[3] += 24479088;
                      result[4] += 26704459;
                      result[5] += 373862438;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428d0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 190887435;
                      result[5] += 238609294;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 322122547;
                      result[4] += 0;
                      result[5] += 107374182;
                    }
                  }
                }
              } else {
                if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428b0000))) ) ) {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42870000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 171798691;
                      result[4] += 0;
                      result[5] += 257698037;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a00000))) ) ) {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42540000))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 94136269;
                      result[4] += 0;
                      result[5] += 335360460;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 171798691;
                      result[4] += 0;
                      result[5] += 257698037;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 337461716;
                      result[4] += 61356675;
                      result[5] += 30678337;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
                if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42970000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 286331153;
                      result[4] += 0;
                      result[5] += 143165576;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  } else {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428a0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 122713351;
                      result[4] += 0;
                      result[5] += 306783378;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x429c0000))) ) ) {
                    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428f0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  } else {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42bf0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 386547056;
                      result[4] += 0;
                      result[5] += 42949672;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 214748364;
                      result[5] += 214748364;
                    }
                  }
                }
              } else {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c20000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                }
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c20000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x422a0000))) ) ) {
            if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x429c0000))) ) ) {
              result[0] += 0;
              result[1] += 429496729;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428c0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 429496729;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42990000))) ) ) {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x421e0000))) ) ) {
                result[0] += 0;
                result[1] += 429496729;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42400000))) ) ) {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42820000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 429496729;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
                      result[0] += 322122547;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 107374182;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 386547056;
                      result[5] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 429496729;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 429496729;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
              result[0] += 0;
              result[1] += 429496729;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 429496729;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
              result[0] += 0;
              result[1] += 429496729;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 429496729;
              result[5] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d40000))) ) ) {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42970000))) ) ) {
                if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42600000))) ) ) {
                  result[0] += 429496729;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
                    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a40000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42340000))) ) ) {
                  result[0] += 0;
                  result[1] += 429496729;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42520000))) ) ) {
                    result[0] += 429496729;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42960000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 429496729;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42890000))) ) ) {
                  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x425a0000))) ) ) {
                    result[0] += 429496729;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
                      result[0] += 0;
                      result[1] += 53687091;
                      result[2] += 0;
                      result[3] += 107374182;
                      result[4] += 0;
                      result[5] += 268435455;
                    } else {
                      result[0] += 42949672;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 386547056;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42e20000))) ) ) {
                      result[0] += 416213325;
                      result[1] += 442780;
                      result[2] += 0;
                      result[3] += 2656680;
                      result[4] += 7970042;
                      result[5] += 2213900;
                    } else {
                      result[0] += 214748364;
                      result[1] += 35791394;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 178956970;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
                      result[0] += 46017506;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 92035013;
                      result[4] += 184070026;
                      result[5] += 107374182;
                    } else {
                      result[0] += 409044504;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 20452225;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bf0000))) ) ) {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a20000))) ) ) {
                      result[0] += 0;
                      result[1] += 343597383;
                      result[2] += 0;
                      result[3] += 85899345;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  } else {
                    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b60000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 75793540;
                      result[1] += 50529027;
                      result[2] += 0;
                      result[3] += 176851594;
                      result[4] += 126322567;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b20000))) ) ) {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42bd0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 429496729;
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
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42cd0000))) ) ) {
              result[0] += 0;
              result[1] += 429496729;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 429496729;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
            if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428a0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428b0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 5506368;
                      result[2] += 16519104;
                      result[3] += 198229259;
                      result[4] += 0;
                      result[5] += 209241996;
                    }
                  }
                }
              } else {
                if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42aa0000))) ) ) {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429c0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                } else {
                  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b90000))) ) ) {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b50000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  } else {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429e0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 322122547;
                      result[3] += 107374182;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
                  result[0] += 0;
                  result[1] += 429496729;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429a0000))) ) ) {
                    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 257698037;
                      result[4] += 0;
                      result[5] += 171798691;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                }
              } else {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
                  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42920000))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 429496729;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b30000))) ) ) {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bf0000))) ) ) {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428f0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d80000))) ) ) {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 334053011;
                      result[4] += 0;
                      result[5] += 95443717;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c90000))) ) ) {
                  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c60000))) ) ) {
                    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 357913941;
                      result[3] += 35791394;
                      result[4] += 0;
                      result[5] += 35791394;
                    }
                  } else {
                    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c10000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42940000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b80000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 143165576;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 286331153;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 409520137;
                      result[3] += 19976592;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c70000))) ) ) {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e80000))) ) ) {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b20000))) ) ) {
                    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ba0000))) ) ) {
                      result[0] += 53687091;
                      result[1] += 0;
                      result[2] += 375809638;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 245426702;
                      result[1] += 0;
                      result[2] += 122713351;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 61356675;
                    }
                  } else {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42bb0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 429496729;
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
                  result[4] += 429496729;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42960000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 429496729;
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
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d30000))) ) ) {
            if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
              if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 429496729;
              } else {
                if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42aa0000))) ) ) {
                  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a30000))) ) ) {
                    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c50000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 214748364;
                      result[3] += 0;
                      result[4] += 214748364;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                } else {
                  if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a60000))) ) ) {
                    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x429e0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429f0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 412977624;
                      result[4] += 0;
                      result[5] += 16519104;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 277909648;
                      result[4] += 0;
                      result[5] += 151587081;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 429496729;
              } else {
                if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42960000))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42930000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 42949672;
                      result[3] += 386547056;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b30000))) ) ) {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42870000))) ) ) {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42900000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ae0000))) ) ) {
                    result[0] += 429496729;
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
                    result[4] += 429496729;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b10000))) ) ) {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42990000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 214748364;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 214748364;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d30000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 429496729;
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
              result[1] += 429496729;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x426e0000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 429496729;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 429496729;
            }
          } else {
            if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ba0000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 429496729;
            } else {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ca0000))) ) ) {
                if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42970000))) ) ) {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ca0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ac0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42e20000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
            if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b30000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 429496729;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c60000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 429496729;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a30000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42960000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ca0000))) ) ) {
              if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ca0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 429496729;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 429496729;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 429496729;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a60000))) ) ) {
              if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42990000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 429496729;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b60000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 429496729;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d70000))) ) ) {
                if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ac0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 429496729;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b50000))) ) ) {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c10000))) ) ) {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ce0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 429496729;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 429496729;
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
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 429496729;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 429496729;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 429496729;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42af0000))) ) ) {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42cf0000))) ) ) {
              if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42c20000))) ) ) {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42af0000))) ) ) {
                  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 384286547;
                      result[3] += 45210182;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bd0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 343597383;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 85899345;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 414338021;
                      result[3] += 10105805;
                      result[4] += 0;
                      result[5] += 5052902;
                    }
                  }
                } else {
                  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cd0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42aa0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 317454104;
                      result[3] += 112042625;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 429496729;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d90000))) ) ) {
                if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42b50000))) ) ) {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b20000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ad0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 171798691;
                      result[3] += 257698037;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42b10000))) ) ) {
                  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b70000))) ) ) {
                    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ca0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 286331153;
                      result[3] += 143165576;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42dd0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ba0000))) ) ) {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429b0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42be0000))) ) ) {
                  result[0] += 429496729;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42d50000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 429496729;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42f10000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42e70000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
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
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c50000))) ) ) {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b00000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 429496729;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 429496729;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 429496729;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ab0000))) ) ) {
              if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42c70000))) ) ) {
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ca0000))) ) ) {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42d10000))) ) ) {
                    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d40000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ad0000))) ) ) {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a20000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 214748364;
                      result[3] += 214748364;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 406891638;
                      result[3] += 22605091;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                result[0] += 429496729;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42e40000))) ) ) {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c10000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42e00000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b10000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
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
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b20000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 429496729;
            result[5] += 0;
          } else {
            if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428a0000))) ) ) {
              if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42890000))) ) ) {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42910000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x428d0000))) ) ) {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428d0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42990000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 429496729;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 429496729;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42990000))) ) ) {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 429496729;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 429496729;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 429496729;
              result[5] += 0;
            } else {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429a0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 429496729;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 429496729;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 429496729;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42740000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 429496729;
          } else {
            if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x428e0000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 429496729;
            } else {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42840000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 429496729;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42810000))) ) ) {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a80000))) ) ) {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x427a0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 429496729;
              } else {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42980000))) ) ) {
                  if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42830000))) ) ) {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x428a0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  } else {
                    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ab0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 214748364;
                      result[4] += 0;
                      result[5] += 214748364;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 429496729;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bf0000))) ) ) {
              if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42bf0000))) ) ) {
                if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42800000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428f0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 4427801;
                      result[4] += 4427801;
                      result[5] += 420641126;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 63629145;
                      result[4] += 0;
                      result[5] += 365867584;
                    }
                  } else {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  }
                }
              } else {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ba0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 429496729;
              }
            }
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42620000))) ) ) {
            if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x426c0000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 429496729;
              result[5] += 0;
            } else {
              result[0] += 429496729;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b30000))) ) ) {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42860000))) ) ) {
                  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a70000))) ) ) {
                    result[0] += 429496729;
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
                    result[4] += 429496729;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42830000))) ) ) {
                  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428d0000))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 429496729;
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
                  result[5] += 429496729;
                }
              }
            } else {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
                if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428a0000))) ) ) {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42850000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42830000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 214748364;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 214748364;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x425e0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42870000))) ) ) {
                    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42830000))) ) ) {
                      result[0] += 0;
                      result[1] += 8676701;
                      result[2] += 0;
                      result[3] += 34706806;
                      result[4] += 34706806;
                      result[5] += 351406415;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 17179869;
                      result[4] += 257698037;
                      result[5] += 154618822;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                } else {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
                    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428d0000))) ) ) {
                      result[0] += 0;
                      result[1] += 35791394;
                      result[2] += 0;
                      result[3] += 357913941;
                      result[4] += 0;
                      result[5] += 35791394;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 3329432;
                      result[3] += 119859552;
                      result[4] += 3329432;
                      result[5] += 302978313;
                    }
                  } else {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42870000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428a0000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 429496729;
              result[5] += 0;
            } else {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42760000))) ) ) {
                if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42af0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 429496729;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b00000))) ) ) {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                } else {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42970000))) ) ) {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42940000))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 375809638;
                      result[4] += 0;
                      result[5] += 53687091;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428b0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42890000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  }
                }
              } else {
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c50000))) ) ) {
                  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42720000))) ) ) {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b40000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  } else {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a90000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 184070026;
                      result[4] += 0;
                      result[5] += 245426702;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 408904420;
                      result[4] += 0;
                      result[5] += 20592308;
                    }
                  }
                } else {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b00000))) ) ) {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42740000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  } else {
                    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 286331153;
                      result[3] += 143165576;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42960000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c80000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
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
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42be0000))) ) ) {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42340000))) ) ) {
              if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b70000))) ) ) {
                result[0] += 0;
                result[1] += 429496729;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42950000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 429496729;
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42120000))) ) ) {
              result[0] += 0;
              result[1] += 429496729;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x425c0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 429496729;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c70000))) ) ) {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x427e0000))) ) ) {
              if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42260000))) ) ) {
                if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cd0000))) ) ) {
                  result[0] += 0;
                  result[1] += 429496729;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42df0000))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426a0000))) ) ) {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cb0000))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 429496729;
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
                  result[4] += 429496729;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d60000))) ) ) {
                result[0] += 0;
                result[1] += 429496729;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 429496729;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428b0000))) ) ) {
            if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
              if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b60000))) ) ) {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42640000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  result[0] += 429496729;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d30000))) ) ) {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42da0000))) ) ) {
                    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
                      result[0] += 0;
                      result[1] += 161061273;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 268435455;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 429496729;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 429496729;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 429496729;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x423a0000))) ) ) {
                if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42780000))) ) ) {
                  result[0] += 429496729;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 429496729;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ad0000))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42840000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  } else {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x429c0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 400863614;
                      result[5] += 28633115;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  }
                } else {
                  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428e0000))) ) ) {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b60000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 429496729;
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
                    result[4] += 429496729;
                    result[5] += 0;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428d0000))) ) ) {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x427e0000))) ) ) {
                if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42850000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  result[0] += 429496729;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429c0000))) ) ) {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a30000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ad0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 286331153;
                      result[5] += 0;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428b0000))) ) ) {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42900000))) ) ) {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b40000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42940000))) ) ) {
                    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 119304647;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 310192082;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
                      result[0] += 422100115;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 6903506;
                      result[5] += 493107;
                    } else {
                      result[0] += 313174698;
                      result[1] += 0;
                      result[2] += 17895697;
                      result[3] += 17895697;
                      result[4] += 44739242;
                      result[5] += 35791394;
                    }
                  }
                } else {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42aa0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b80000))) ) ) {
                      result[0] += 85899345;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 343597383;
                      result[5] += 0;
                    } else {
                      result[0] += 343597383;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 85899345;
                      result[5] += 0;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ad0000))) ) ) {
            if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428d0000))) ) ) {
                if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429c0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42900000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b10000))) ) ) {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 398818391;
                      result[4] += 0;
                      result[5] += 30678337;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 107374182;
                      result[4] += 0;
                      result[5] += 322122547;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428d0000))) ) ) {
                  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
                    result[0] += 429496729;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428e0000))) ) ) {
                  result[0] += 0;
                  result[1] += 429496729;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x429c0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a90000))) ) ) {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x427e0000))) ) ) {
                result[0] += 0;
                result[1] += 429496729;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b60000))) ) ) {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b20000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    result[0] += 429496729;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42820000))) ) ) {
                if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ad0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c70000))) ) ) {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b40000))) ) ) {
                    result[0] += 429496729;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a40000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  result[0] += 429496729;
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
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c10000))) ) ) {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 429496729;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 429496729;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 429496729;
            }
          } else {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ca0000))) ) ) {
              if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ce0000))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b10000))) ) ) {
                  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c10000))) ) ) {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 85899345;
                      result[4] += 85899345;
                      result[5] += 257698037;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a40000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b80000))) ) ) {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bd0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 30678337;
                      result[3] += 383479222;
                      result[4] += 0;
                      result[5] += 15339168;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 161061273;
                      result[3] += 255013683;
                      result[4] += 0;
                      result[5] += 13421772;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a60000))) ) ) {
                    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42dc0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 158235637;
                      result[3] += 22605091;
                      result[4] += 0;
                      result[5] += 248656001;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42980000))) ) ) {
                if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42aa0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 429496729;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42c30000))) ) ) {
            if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
              if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c60000))) ) ) {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428a0000))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b70000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42980000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 35791394;
                      result[4] += 0;
                      result[5] += 393705335;
                    }
                  }
                } else {
                  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429e0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                }
              } else {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42cd0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 429496729;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42f20000))) ) ) {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428e0000))) ) ) {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42da0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42cd0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 400863614;
                      result[3] += 28633115;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 429496729;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            result[0] += 429496729;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
            if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428b0000))) ) ) {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 429496729;
              } else {
                if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42880000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ae0000))) ) ) {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c60000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c50000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 35791394;
                      result[3] += 393705335;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 238609294;
                      result[3] += 190887435;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                } else {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e20000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 429496729;
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
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42be0000))) ) ) {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42f20000))) ) ) {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
                  result[0] += 429496729;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42d60000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 398070139;
                      result[3] += 15713294;
                      result[4] += 0;
                      result[5] += 15713294;
                    } else {
                      result[0] += 4210752;
                      result[1] += 0;
                      result[2] += 341070932;
                      result[3] += 84215045;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42b40000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b20000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 429496729;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a30000))) ) ) {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ed0000))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42af0000))) ) ) {
                    result[0] += 429496729;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bb0000))) ) ) {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42910000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 429496729;
            } else {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a90000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 429496729;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a00000))) ) ) {
                  result[0] += 429496729;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ad0000))) ) ) {
                if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42db0000))) ) ) {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429a0000))) ) ) {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 85899345;
                      result[3] += 343597383;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42e00000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 412653720;
                      result[3] += 16843009;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                      result[2] += 71582788;
                      result[3] += 214748364;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42d20000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42db0000))) ) ) {
                    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42df0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
                if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                }
              } else {
                if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42dd0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42df0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42aa0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 334053011;
                      result[3] += 95443717;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 402653183;
                      result[3] += 26843545;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 425032106;
                      result[3] += 4464622;
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
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429a0000))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a30000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42460000))) ) ) {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42480000))) ) ) {
                result[0] += 429496729;
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
                result[4] += 429496729;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 429496729;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x428d0000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 429496729;
            } else {
              if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              } else {
                result[0] += 429496729;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42200000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 429496729;
            result[5] += 0;
          } else {
            if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42740000))) ) ) {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42660000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 429496729;
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
              result[5] += 429496729;
            }
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42970000))) ) ) {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42bb0000))) ) ) {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42740000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 429496729;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 429496729;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42740000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 429496729;
              result[5] += 0;
            } else {
              result[0] += 429496729;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a50000))) ) ) {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x424c0000))) ) ) {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42940000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 429496729;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x423c0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              } else {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a20000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                } else {
                  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42910000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429b0000))) ) ) {
              if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ca0000))) ) ) {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x429d0000))) ) ) {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x428f0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42940000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42810000))) ) ) {
                  result[0] += 0;
                  result[1] += 429496729;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 429496729;
              result[5] += 0;
            }
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c20000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 429496729;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 429496729;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42850000))) ) ) {
              if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a40000))) ) ) {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42810000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                }
              } else {
                if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x427c0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 429496729;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
            if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42850000))) ) ) {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42940000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                } else {
                  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42700000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428d0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  }
                }
              } else {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42580000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42580000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ca0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1493901;
                      result[4] += 0;
                      result[5] += 428002827;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 214748364;
                      result[5] += 214748364;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428a0000))) ) ) {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42a80000))) ) ) {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a60000))) ) ) {
                    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428b0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 30678337;
                      result[5] += 398818391;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x429a0000))) ) ) {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428a0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 257698037;
                      result[4] += 0;
                      result[5] += 171798691;
                    }
                  } else {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ab0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42980000))) ) ) {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42810000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42aa0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 257698037;
                      result[5] += 171798691;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  }
                } else {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 78090314;
                      result[4] += 0;
                      result[5] += 351406415;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42910000))) ) ) {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42820000))) ) ) {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42890000))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42870000))) ) ) {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
                  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b20000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429c0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 107374182;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 322122547;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ac0000))) ) ) {
                    result[0] += 429496729;
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
                    result[5] += 429496729;
                  }
                }
              }
            } else {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c30000))) ) ) {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428f0000))) ) ) {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42660000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b80000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 29620464;
                      result[4] += 0;
                      result[5] += 399876265;
                    } else {
                      result[0] += 429496729;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bb0000))) ) ) {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42930000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 245426702;
                      result[5] += 184070026;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 35791394;
                      result[4] += 0;
                      result[5] += 393705335;
                    }
                  } else {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a40000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 143165576;
                      result[5] += 286331153;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x427e0000))) ) ) {
                  result[0] += 429496729;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42aa0000))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
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
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 429496729;
            result[5] += 0;
          } else {
            if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b10000))) ) ) {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ac0000))) ) ) {
                  if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42960000))) ) ) {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42860000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                } else {
                  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428e0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 53687091;
                      result[3] += 161061273;
                      result[4] += 53687091;
                      result[5] += 161061273;
                    }
                  } else {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b90000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 107374182;
                      result[3] += 107374182;
                      result[4] += 0;
                      result[5] += 214748364;
                    }
                  }
                }
              } else {
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428d0000))) ) ) {
                  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42850000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                } else {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
                    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428a0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                }
              }
            } else {
              if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d60000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 429496729;
              } else {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42980000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                } else {
                  result[0] += 0;
                  result[1] += 429496729;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            }
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ab0000))) ) ) {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ad0000))) ) ) {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b30000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                }
              } else {
                if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b00000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42aa0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42950000))) ) ) {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a70000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 195225786;
                      result[4] += 0;
                      result[5] += 234270943;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 417454765;
                      result[4] += 0;
                      result[5] += 12041964;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                }
              } else {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42940000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
                    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42850000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 61356675;
                      result[4] += 0;
                      result[5] += 368140053;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 337461716;
                      result[4] += 0;
                      result[5] += 92035013;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b70000))) ) ) {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
                if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bb0000))) ) ) {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x429c0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ac0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 47721858;
                      result[4] += 0;
                      result[5] += 381774870;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42890000))) ) ) {
                    result[0] += 429496729;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42660000))) ) ) {
                  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42720000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                }
              }
            } else {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42980000))) ) ) {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c20000))) ) ) {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ce0000))) ) ) {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42940000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 322122547;
                      result[5] += 107374182;
                    } else {
                      result[0] += 429496729;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 429496729;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ac0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42930000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 25264513;
                      result[3] += 252645135;
                      result[4] += 0;
                      result[5] += 151587081;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 411601032;
                      result[4] += 0;
                      result[5] += 17895697;
                    }
                  }
                } else {
                  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ad0000))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c90000))) ) ) {
                      result[0] += 17530478;
                      result[1] += 0;
                      result[2] += 43826196;
                      result[3] += 149009069;
                      result[4] += 0;
                      result[5] += 219130984;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
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
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42480000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b00000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 429496729;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 429496729;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c50000))) ) ) {
              result[0] += 0;
              result[1] += 429496729;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c90000))) ) ) {
                result[0] += 429496729;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 429496729;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d40000))) ) ) {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42180000))) ) ) {
              result[0] += 0;
              result[1] += 429496729;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428a0000))) ) ) {
                if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42de0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cc0000))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42660000))) ) ) {
                  result[0] += 429496729;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429a0000))) ) ) {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c10000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 214748364;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 214748364;
                    }
                  } else {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42980000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 429496729;
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
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42df0000))) ) ) {
              result[0] += 0;
              result[1] += 429496729;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42e70000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 429496729;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42c20000))) ) ) {
            if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c50000))) ) ) {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a00000))) ) ) {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42680000))) ) ) {
                  result[0] += 429496729;
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
                  result[4] += 429496729;
                  result[5] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 429496729;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42850000))) ) ) {
                  result[0] += 429496729;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 429496729;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a00000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a00000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42af0000))) ) ) {
              if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a30000))) ) ) {
                result[0] += 0;
                result[1] += 429496729;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ca0000))) ) ) {
                  result[0] += 0;
                  result[1] += 429496729;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 429496729;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              result[0] += 429496729;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
            if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42850000))) ) ) {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x429a0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 429496729;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42940000))) ) ) {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428a0000))) ) ) {
                    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ab0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 409974150;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 19522578;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ab0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 85899345;
                      result[4] += 0;
                      result[5] += 343597383;
                    } else {
                      result[0] += 107374182;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 322122547;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42830000))) ) ) {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42db0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 398818391;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 30678337;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
                      result[0] += 427121194;
                      result[1] += 0;
                      result[2] += 475107;
                      result[3] += 0;
                      result[4] += 1900428;
                      result[5] += 0;
                    } else {
                      result[0] += 337461716;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 15339168;
                      result[4] += 76695844;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d70000))) ) ) {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a60000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42dd0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 429496729;
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
            if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bd0000))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b30000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                } else {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c70000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                }
              } else {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                } else {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x427e0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42cd0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 286331153;
                      result[3] += 143165576;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c70000))) ) ) {
                if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42930000))) ) ) {
                  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ce0000))) ) ) {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d20000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 429496729;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 429496729;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b50000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42e00000))) ) ) {
                  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ba0000))) ) ) {
                    result[0] += 429496729;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 429496729;
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
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c10000))) ) ) {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42860000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 429496729;
              }
            } else {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a80000))) ) ) {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b20000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 429496729;
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
            result[5] += 429496729;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c10000))) ) ) {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42cd0000))) ) ) {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42aa0000))) ) ) {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d30000))) ) ) {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b20000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42d90000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 16519104;
                      result[3] += 371679862;
                      result[4] += 0;
                      result[5] += 41297762;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  }
                } else {
                  if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a70000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c40000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 429496729;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42de0000))) ) ) {
                result[0] += 0;
                result[1] += 429496729;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 429496729;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42af0000))) ) ) {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a00000))) ) ) {
                result[0] += 0;
                result[1] += 429496729;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ba0000))) ) ) {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
                    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429e0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 122713351;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 306783378;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 61356675;
                      result[3] += 306783378;
                      result[4] += 0;
                      result[5] += 61356675;
                    }
                  } else {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 351406415;
                      result[3] += 78090314;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  result[0] += 429496729;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
                  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cf0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42df0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 286331153;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 143165576;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42be0000))) ) ) {
            if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
              if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d50000))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c40000))) ) ) {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ca0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42e10000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 429496729;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ab0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                }
              } else {
                if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c60000))) ) ) {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42df0000))) ) ) {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 318332870;
                      result[3] += 106110956;
                      result[4] += 0;
                      result[5] += 5052902;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 390952151;
                      result[3] += 38544578;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c70000))) ) ) {
                      result[0] += 214748364;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 214748364;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 415180171;
                      result[3] += 14316557;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42e30000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 429496729;
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
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
              result[0] += 429496729;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42d00000))) ) ) {
                if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42980000))) ) ) {
                  result[0] += 429496729;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 429496729;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cb0000))) ) ) {
            if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ad0000))) ) ) {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
                  if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a00000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ca0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 377957121;
                      result[3] += 51539607;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ab0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42d30000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 314964268;
                      result[3] += 114532461;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c50000))) ) ) {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a10000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42940000))) ) ) {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ac0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ad0000))) ) ) {
                  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42d90000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42d20000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 286331153;
                      result[3] += 143165576;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42cc0000))) ) ) {
              result[0] += 429496729;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 429496729;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 429496729;
            result[5] += 0;
          } else {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42980000))) ) ) {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42680000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  result[0] += 429496729;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42810000))) ) ) {
                  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42870000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 429496729;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42780000))) ) ) {
            if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428d0000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 429496729;
              result[5] += 0;
            } else {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                } else {
                  result[0] += 0;
                  result[1] += 429496729;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 429496729;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x427c0000))) ) ) {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42870000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 429496729;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x426e0000))) ) ) {
                result[0] += 429496729;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a00000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                } else {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42540000))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
            if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x428e0000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 429496729;
            } else {
              if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x429e0000))) ) ) {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x427e0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
              if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              } else {
                if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c10000))) ) ) {
                  if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428d0000))) ) ) {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b10000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 4458443;
                      result[4] += 0;
                      result[5] += 425038285;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 75793540;
                      result[4] += 0;
                      result[5] += 353703189;
                    }
                  } else {
                    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428b0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 21474836;
                      result[4] += 21474836;
                      result[5] += 386547056;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 214748364;
                      result[4] += 0;
                      result[5] += 214748364;
                    }
                  }
                } else {
                  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ac0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  }
                }
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 429496729;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42910000))) ) ) {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
                if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42660000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
                    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42af0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 12632256;
                      result[4] += 0;
                      result[5] += 416864472;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 214748364;
                      result[5] += 214748364;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 429496729;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
                  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42890000))) ) ) {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a00000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42860000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 343597383;
                      result[5] += 85899345;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x426e0000))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
                if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
                    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 214748364;
                      result[4] += 214748364;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 9336885;
                      result[2] += 0;
                      result[3] += 28010656;
                      result[4] += 0;
                      result[5] += 392149187;
                    }
                  } else {
                    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ab0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 368140053;
                      result[4] += 0;
                      result[5] += 61356675;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x429c0000))) ) ) {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b10000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 343597383;
                      result[2] += 0;
                      result[3] += 85899345;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42910000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 341070932;
                      result[4] += 0;
                      result[5] += 88425797;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 147639500;
                      result[4] += 0;
                      result[5] += 281857228;
                    }
                  }
                }
              } else {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42820000))) ) ) {
                  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x429a0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42af0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  }
                } else {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c60000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429a0000))) ) ) {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x429e0000))) ) ) {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b30000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ae0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42cf0000))) ) ) {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ad0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 286331153;
                      result[4] += 0;
                      result[5] += 143165576;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                }
              } else {
                if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b20000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42960000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                }
              }
            } else {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a80000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 429496729;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cd0000))) ) ) {
                  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42bd0000))) ) ) {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ba0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 14316557;
                      result[4] += 0;
                      result[5] += 415180171;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42990000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  }
                } else {
                  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b40000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428d0000))) ) ) {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42320000))) ) ) {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x422e0000))) ) ) {
                if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ee0000))) ) ) {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42280000))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 429496729;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 429496729;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42580000))) ) ) {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d90000))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 214748364;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 214748364;
                      result[5] += 0;
                    }
                  }
                } else {
                  result[0] += 429496729;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428a0000))) ) ) {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42e70000))) ) ) {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42940000))) ) ) {
                      result[0] += 0;
                      result[1] += 7809031;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 413878666;
                      result[5] += 7809031;
                    } else {
                      result[0] += 134217727;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 187904819;
                      result[5] += 107374182;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 429496729;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42560000))) ) ) {
                      result[0] += 0;
                      result[1] += 322122547;
                      result[2] += 0;
                      result[3] += 107374182;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 370928993;
                      result[4] += 58567735;
                      result[5] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428b0000))) ) ) {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x424a0000))) ) ) {
                if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42bf0000))) ) ) {
                  result[0] += 429496729;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42700000))) ) ) {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ac0000))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 429496729;
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
                    result[4] += 429496729;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x427e0000))) ) ) {
                  if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
                    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a30000))) ) ) {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x425c0000))) ) ) {
                      result[0] += 429496729;
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
                      result[4] += 429496729;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 429496729;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x429c0000))) ) ) {
                  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
                    result[0] += 429496729;
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
                    result[4] += 429496729;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b50000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c00000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 357913941;
                      result[4] += 0;
                      result[5] += 71582788;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ac0000))) ) ) {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
                      result[0] += 117135471;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 273316100;
                      result[5] += 39045157;
                    } else {
                      result[0] += 413870988;
                      result[1] += 0;
                      result[2] += 422317;
                      result[3] += 2956221;
                      result[4] += 10980250;
                      result[5] += 1266952;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c90000))) ) ) {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b70000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 429496729;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c20000))) ) ) {
                      result[0] += 85899345;
                      result[1] += 0;
                      result[2] += 42949672;
                      result[3] += 42949672;
                      result[4] += 257698037;
                      result[5] += 0;
                    } else {
                      result[0] += 340018244;
                      result[1] += 0;
                      result[2] += 89478485;
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
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ad0000))) ) ) {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428f0000))) ) ) {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42680000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
                    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 40518559;
                      result[4] += 0;
                      result[5] += 388978170;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a70000))) ) ) {
                  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42b20000))) ) ) {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428a0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 92035013;
                      result[4] += 153391689;
                      result[5] += 184070026;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 25264513;
                      result[4] += 0;
                      result[5] += 404232216;
                    }
                  } else {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42220000))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bd0000))) ) ) {
                    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 277094664;
                      result[4] += 0;
                      result[5] += 152402065;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  } else {
                    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428b0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 306783378;
                      result[3] += 122713351;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 393705335;
                      result[4] += 0;
                      result[5] += 35791394;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b50000))) ) ) {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a60000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 29620464;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 14810232;
                      result[4] += 0;
                      result[5] += 385066033;
                    }
                  }
                } else {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428d0000))) ) ) {
                    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d70000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429f0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 214748364;
                      result[4] += 214748364;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  }
                }
              } else {
                if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429a0000))) ) ) {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42980000))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 404232216;
                      result[4] += 0;
                      result[5] += 25264513;
                    }
                  } else {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b40000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 53687091;
                      result[5] += 375809638;
                    } else {
                      result[0] += 0;
                      result[1] += 85899345;
                      result[2] += 171798691;
                      result[3] += 171798691;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42910000))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ba0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 107374182;
                      result[3] += 107374182;
                      result[4] += 214748364;
                      result[5] += 0;
                    } else {
                      result[0] += 429496729;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42bf0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 143165576;
                      result[3] += 224974477;
                      result[4] += 0;
                      result[5] += 61356675;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 349590361;
                      result[3] += 59929776;
                      result[4] += 0;
                      result[5] += 19976592;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42640000))) ) ) {
                  result[0] += 0;
                  result[1] += 429496729;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
                    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b60000))) ) ) {
                      result[0] += 429496729;
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
                      result[4] += 429496729;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42e20000))) ) ) {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ed0000))) ) ) {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42900000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 429496729;
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
                    result[4] += 429496729;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 429496729;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42e80000))) ) ) {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42980000))) ) ) {
                  if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42d70000))) ) ) {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42860000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  } else {
                    result[0] += 429496729;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42e60000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 429496729;
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
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 429496729;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 429496729;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b90000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 429496729;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 429496729;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42640000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 429496729;
            result[5] += 0;
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 429496729;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 429496729;
            }
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42cc0000))) ) ) {
            if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c60000))) ) ) {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a10000))) ) ) {
                if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                }
              } else {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a40000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 429496729;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c50000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 429496729;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 429496729;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 429496729;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
            if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42940000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 429496729;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b40000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 429496729;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 429496729;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 429496729;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42dc0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ad0000))) ) ) {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 429496729;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c10000))) ) ) {
                if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42990000))) ) ) {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428b0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a10000))) ) ) {
                  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
                    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c70000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 286331153;
                      result[3] += 122713351;
                      result[4] += 0;
                      result[5] += 20452225;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 412316860;
                      result[3] += 17179869;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b30000))) ) ) {
                    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ac0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 259061519;
                      result[3] += 170435210;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 85899345;
                      result[3] += 343597383;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42e50000))) ) ) {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c20000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 429496729;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a10000))) ) ) {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d20000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42e30000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 286331153;
                      result[3] += 143165576;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
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
              result[3] += 429496729;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42df0000))) ) ) {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42e70000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 429496729;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 429496729;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 429496729;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 429496729;
          result[5] += 0;
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cb0000))) ) ) {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a00000))) ) ) {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ba0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b40000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42db0000))) ) ) {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42d70000))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 429496729;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              }
            } else {
              result[0] += 0;
              result[1] += 429496729;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b30000))) ) ) {
              if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b60000))) ) ) {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
                    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 343597383;
                      result[3] += 85899345;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ac0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 353703189;
                      result[3] += 50529027;
                      result[4] += 0;
                      result[5] += 25264513;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 143165576;
                      result[3] += 286331153;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42dc0000))) ) ) {
                    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a40000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 408021893;
                      result[3] += 21474836;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ae0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 268435455;
                      result[3] += 161061273;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 429496729;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a80000))) ) ) {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a70000))) ) ) {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b00000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42960000))) ) ) {
                  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42db0000))) ) ) {
                    result[0] += 429496729;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
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
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x424a0000))) ) ) {
            if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42520000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 429496729;
              result[5] += 0;
            } else {
              result[0] += 429496729;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42850000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 429496729;
              result[5] += 0;
            } else {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42620000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 429496729;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x423a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 429496729;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 429496729;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 429496729;
            result[5] += 0;
          } else {
            result[0] += 429496729;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42810000))) ) ) {
            if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x429a0000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 429496729;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 429496729;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a20000))) ) ) {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42930000))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ac0000))) ) ) {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x427e0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 286331153;
                      result[5] += 143165576;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42960000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42870000))) ) ) {
                if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b40000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  result[0] += 429496729;
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
                result[3] += 429496729;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x427e0000))) ) ) {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42540000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 429496729;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 429496729;
            }
          } else {
            if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42bd0000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 429496729;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 429496729;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42870000))) ) ) {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42890000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 429496729;
              } else {
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42960000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                }
              }
            } else {
              if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42950000))) ) ) {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428f0000))) ) ) {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x427a0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42870000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 143165576;
                      result[4] += 0;
                      result[5] += 286331153;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 5402474;
                      result[5] += 424094254;
                    }
                  }
                } else {
                  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42870000))) ) ) {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42740000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 198229259;
                      result[4] += 33038209;
                      result[5] += 198229259;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                }
              } else {
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a00000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42870000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a00000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 286331153;
                      result[4] += 0;
                      result[5] += 143165576;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 107374182;
                      result[4] += 0;
                      result[5] += 322122547;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
              if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42900000))) ) ) {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42850000))) ) ) {
                  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42870000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                } else {
                  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b00000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428d0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  }
                }
              } else {
                if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a90000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                } else {
                  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ac0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                }
              }
            } else {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42840000))) ) ) {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b10000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 429496729;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42780000))) ) ) {
              if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42bd0000))) ) ) {
                if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42940000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                }
              } else {
                result[0] += 0;
                result[1] += 429496729;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 429496729;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 429496729;
              result[5] += 0;
            } else {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42870000))) ) ) {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b30000))) ) ) {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42740000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 27012372;
                      result[4] += 2701237;
                      result[5] += 399783119;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a20000))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42810000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  }
                }
              } else {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b70000))) ) ) {
                  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42d90000))) ) ) {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a70000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 25264513;
                      result[5] += 404232216;
                    } else {
                      result[0] += 0;
                      result[1] += 23216039;
                      result[2] += 0;
                      result[3] += 179924305;
                      result[4] += 46432078;
                      result[5] += 179924305;
                    }
                  } else {
                    result[0] += 429496729;
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
                  result[5] += 429496729;
                }
              }
            }
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a00000))) ) ) {
            if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b90000))) ) ) {
              if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428e0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 429496729;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                }
              }
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x429a0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 429496729;
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x429a0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428a0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429b0000))) ) ) {
                if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42950000))) ) ) {
                  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42910000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42830000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 390451572;
                      result[4] += 0;
                      result[5] += 39045157;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 143165576;
                      result[4] += 0;
                      result[5] += 286331153;
                    }
                  }
                } else {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428d0000))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ab0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 238609294;
                      result[4] += 0;
                      result[5] += 190887435;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                }
              } else {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42f70000))) ) ) {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42be0000))) ) ) {
                    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a10000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 286331153;
                      result[4] += 0;
                      result[5] += 143165576;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 429496729;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c50000))) ) ) {
                  if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ba0000))) ) ) {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42810000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 420641126;
                      result[4] += 0;
                      result[5] += 8855602;
                    }
                  } else {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429e0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 143165576;
                      result[4] += 0;
                      result[5] += 286331153;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
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
                  result[5] += 429496729;
                }
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c70000))) ) ) {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a80000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 47721858;
                      result[3] += 262470223;
                      result[4] += 0;
                      result[5] += 119304647;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                } else {
                  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42b30000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 429496729;
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
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cb0000))) ) ) {
            if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c20000))) ) ) {
              if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x429c0000))) ) ) {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42200000))) ) ) {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42320000))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
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
                    result[5] += 429496729;
                  }
                } else {
                  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42d40000))) ) ) {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 61356675;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 368140053;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 429496729;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42810000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                } else {
                  result[0] += 429496729;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x428a0000))) ) ) {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42420000))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
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
                    result[5] += 429496729;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 429496729;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42bd0000))) ) ) {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x424c0000))) ) ) {
                result[0] += 0;
                result[1] += 429496729;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 429496729;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c20000))) ) ) {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
              result[0] += 0;
              result[1] += 429496729;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42e20000))) ) ) {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42940000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 429496729;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 429496729;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42780000))) ) ) {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
                result[0] += 0;
                result[1] += 429496729;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42020000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 429496729;
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
              result[4] += 429496729;
              result[5] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a20000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 429496729;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 429496729;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a40000))) ) ) {
              if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42980000))) ) ) {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
                  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c40000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    result[0] += 0;
                    result[1] += 429496729;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x429a0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 429496729;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428a0000))) ) ) {
                  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ba0000))) ) ) {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a00000))) ) ) {
                      result[0] += 0;
                      result[1] += 61356675;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 368140053;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 143165576;
                      result[4] += 71582788;
                      result[5] += 214748364;
                    }
                  } else {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42870000))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 286331153;
                      result[2] += 143165576;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c20000))) ) ) {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 214748364;
                      result[4] += 0;
                      result[5] += 214748364;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42940000))) ) ) {
                if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ae0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a00000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 390451572;
                      result[5] += 39045157;
                    } else {
                      result[0] += 0;
                      result[1] += 214748364;
                      result[2] += 0;
                      result[3] += 214748364;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429b0000))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 214748364;
                      result[4] += 0;
                      result[5] += 214748364;
                    }
                  }
                }
              } else {
                if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c60000))) ) ) {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cb0000))) ) ) {
                    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429b0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 400863614;
                      result[4] += 0;
                      result[5] += 28633115;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  } else {
                    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ab0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 95443717;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 47721858;
                      result[4] += 0;
                      result[5] += 286331153;
                    }
                  }
                } else {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42990000))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42830000))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 47721858;
                      result[4] += 0;
                      result[5] += 381774870;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428f0000))) ) ) {
            if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42540000))) ) ) {
                result[0] += 429496729;
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
                result[4] += 429496729;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42e30000))) ) ) {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e00000))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42910000))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 429496729;
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
                  result[4] += 429496729;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d40000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  result[0] += 429496729;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42970000))) ) ) {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428e0000))) ) ) {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42890000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x425e0000))) ) ) {
                      result[0] += 429496729;
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
                      result[4] += 429496729;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d90000))) ) ) {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c20000))) ) ) {
                      result[0] += 411863432;
                      result[1] += 2519042;
                      result[2] += 0;
                      result[3] += 3778563;
                      result[4] += 11335690;
                      result[5] += 0;
                    } else {
                      result[0] += 107374182;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 322122547;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428f0000))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 398818391;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 30678337;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ca0000))) ) ) {
                  if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42af0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42620000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 429496729;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b00000))) ) ) {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b90000))) ) ) {
                  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
                    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a80000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42840000))) ) ) {
                      result[0] += 0;
                      result[1] += 39045157;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 390451572;
                      result[5] += 0;
                    } else {
                      result[0] += 47721858;
                      result[1] += 95443717;
                      result[2] += 0;
                      result[3] += 47721858;
                      result[4] += 0;
                      result[5] += 238609294;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
                  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x429c0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42e70000))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b30000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x429a0000))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 143165576;
                      result[5] += 0;
                    } else {
                      result[0] += 415414869;
                      result[1] += 0;
                      result[2] += 7040929;
                      result[3] += 0;
                      result[4] += 7040929;
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
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42910000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 429496729;
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b10000))) ) ) {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x427a0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 429496729;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a70000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                } else {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42be0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42cb0000))) ) ) {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b70000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ca0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 37347541;
                      result[3] += 392149187;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42df0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                }
              } else {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b70000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                } else {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a30000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
              if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x428f0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 429496729;
              }
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bf0000))) ) ) {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
                  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a40000))) ) ) {
                    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 35791394;
                      result[3] += 393705335;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bd0000))) ) ) {
                      result[0] += 0;
                      result[1] += 214748364;
                      result[2] += 0;
                      result[3] += 214748364;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  }
                } else {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
                    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c80000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 214748364;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 214748364;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  } else {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42f90000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 429496729;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42e50000))) ) ) {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42970000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 15907286;
                      result[2] += 286331153;
                      result[3] += 95443717;
                      result[4] += 31814572;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ae0000))) ) ) {
                    result[0] += 429496729;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 286331153;
                      result[5] += 143165576;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42f20000))) ) ) {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42af0000))) ) ) {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42d50000))) ) ) {
                if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c50000))) ) ) {
                    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428c0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42930000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 324806901;
                      result[3] += 83214991;
                      result[4] += 0;
                      result[5] += 21474836;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 411601032;
                      result[3] += 17895697;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ca0000))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42d20000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c20000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    result[0] += 429496729;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42af0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 214748364;
                      result[3] += 214748364;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 429496729;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42d10000))) ) ) {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42aa0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 429496729;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 429496729;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42e10000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42e20000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 214748364;
                      result[3] += 214748364;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ae0000))) ) ) {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cd0000))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42e50000))) ) ) {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ba0000))) ) ) {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42e90000))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 429496729;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a80000))) ) ) {
                    result[0] += 429496729;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 429496729;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 429496729;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
            if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42890000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 429496729;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b60000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 429496729;
              } else {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42e00000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42bc0000))) ) ) {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42eb0000))) ) ) {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c20000))) ) ) {
                    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ca0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 348966092;
                      result[3] += 80530636;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 415969273;
                      result[3] += 13527456;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42bd0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                result[0] += 429496729;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429f0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 429496729;
              } else {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
                  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c80000))) ) ) {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 306783378;
                      result[3] += 122713351;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 406280690;
                      result[3] += 23216039;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 429496729;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b30000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ee0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 413589443;
                      result[3] += 15907286;
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
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 429496729;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 429496729;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a20000))) ) ) {
            if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
                if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428a0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42990000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42540000))) ) ) {
                  result[0] += 429496729;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                }
              }
            } else {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x427a0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 429496729;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 429496729;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x424e0000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 429496729;
              result[5] += 0;
            } else {
              if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x426e0000))) ) ) {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  result[0] += 429496729;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b10000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x429c0000))) ) ) {
              if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42850000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 429496729;
              } else {
                if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x425a0000))) ) ) {
                  result[0] += 0;
                  result[1] += 429496729;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 429496729;
              result[4] += 0;
              result[5] += 0;
            }
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42580000))) ) ) {
          result[0] += 429496729;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42780000))) ) ) {
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a30000))) ) ) {
              if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ac0000))) ) ) {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42720000))) ) ) {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426a0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                } else {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42760000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a40000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 429496729;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 429496729;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ab0000))) ) ) {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x426a0000))) ) ) {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x429a0000))) ) ) {
                  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b90000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a90000))) ) ) {
                  if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 45210182;
                      result[4] += 0;
                      result[5] += 384286547;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x427e0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 2497074;
                      result[4] += 832358;
                      result[5] += 426167297;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 12707003;
                      result[4] += 5082801;
                      result[5] += 411706924;
                    }
                  }
                } else {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a90000))) ) ) {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 26541932;
                      result[4] += 12064514;
                      result[5] += 390890281;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 156180628;
                      result[5] += 273316100;
                    }
                  } else {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ac0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 21474836;
                      result[4] += 0;
                      result[5] += 408021893;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 268435455;
                      result[4] += 0;
                      result[5] += 161061273;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42eb0000))) ) ) {
                if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428b0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 429496729;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a10000))) ) ) {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a00000))) ) ) {
                if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42830000))) ) ) {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42900000))) ) ) {
                    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x429a0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 429496729;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 429496729;
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
                  result[5] += 429496729;
                }
              } else {
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x429c0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                } else {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ae0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b50000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
                if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42840000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                } else {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a00000))) ) ) {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428d0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  } else {
                    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 429496729;
              }
            }
          } else {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429e0000))) ) ) {
              if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cc0000))) ) ) {
                if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x427c0000))) ) ) {
                  result[0] += 429496729;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 429496729;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cd0000))) ) ) {
            if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428a0000))) ) ) {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a60000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 429496729;
              } else {
                result[0] += 429496729;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
                if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x429d0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a20000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 107374182;
                      result[4] += 0;
                      result[5] += 322122547;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  }
                }
              } else {
                if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a70000))) ) ) {
                  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b40000))) ) ) {
                    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x429a0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                } else {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ba0000))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42920000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 402411350;
                      result[4] += 0;
                      result[5] += 27085379;
                    }
                  } else {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ba0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 71582788;
                      result[4] += 0;
                      result[5] += 357913941;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 348966092;
                      result[4] += 26843545;
                      result[5] += 53687091;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429a0000))) ) ) {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42af0000))) ) ) {
                if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 429496729;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 429496729;
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
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42580000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a90000))) ) ) {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b10000))) ) ) {
              if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42720000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              } else {
                result[0] += 429496729;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 429496729;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
              if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c20000))) ) ) {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
                  result[0] += 0;
                  result[1] += 429496729;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42860000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 429496729;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 429496729;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
                result[0] += 429496729;
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
                result[4] += 429496729;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c70000))) ) ) {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c90000))) ) ) {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429b0000))) ) ) {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c80000))) ) ) {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a20000))) ) ) {
                    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42870000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 107374182;
                      result[4] += 322122547;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42920000))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 429496729;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 429496729;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42820000))) ) ) {
                result[0] += 0;
                result[1] += 429496729;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 429496729;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a80000))) ) ) {
              if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c70000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 429496729;
              } else {
                result[0] += 0;
                result[1] += 429496729;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42660000))) ) ) {
                if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x425e0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42aa0000))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 429496729;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c60000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42360000))) ) ) {
            result[0] += 0;
            result[1] += 429496729;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42910000))) ) ) {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42620000))) ) ) {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x422c0000))) ) ) {
                  result[0] += 0;
                  result[1] += 429496729;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a40000))) ) ) {
                    result[0] += 429496729;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b60000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 143165576;
                      result[4] += 286331153;
                      result[5] += 0;
                    } else {
                      result[0] += 429496729;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
                  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42bd0000))) ) ) {
                    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 429496729;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x429e0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42bd0000))) ) ) {
                      result[0] += 8947848;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 8947848;
                      result[4] += 411601032;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 286331153;
                      result[4] += 143165576;
                      result[5] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x429a0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42970000))) ) ) {
                    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a90000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ab0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42890000))) ) ) {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x429c0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
                      result[0] += 419598508;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 860714;
                      result[4] += 7746433;
                      result[5] += 1291072;
                    } else {
                      result[0] += 295875524;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 57266230;
                      result[4] += 28633115;
                      result[5] += 47721858;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
            if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
              if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b30000))) ) ) {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ac0000))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ad0000))) ) ) {
                    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42720000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                }
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ac0000))) ) ) {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b60000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 357913941;
                      result[4] += 0;
                      result[5] += 71582788;
                    }
                  }
                } else {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42da0000))) ) ) {
                    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d60000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 388198967;
                      result[4] += 0;
                      result[5] += 41297762;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42830000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 429496729;
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
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x426a0000))) ) ) {
                if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a20000))) ) ) {
                  result[0] += 0;
                  result[1] += 429496729;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d30000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429b0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429f0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c90000))) ) ) {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a10000))) ) ) {
                if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42d40000))) ) ) {
                  result[0] += 429496729;
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
                  result[4] += 429496729;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b40000))) ) ) {
                  result[0] += 429496729;
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
                  result[5] += 429496729;
                }
              }
            } else {
              if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b70000))) ) ) {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42df0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 429496729;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42e70000))) ) ) {
                  result[0] += 429496729;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ca0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 429496729;
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
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42810000))) ) ) {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a00000))) ) ) {
              if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ae0000))) ) ) {
                if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a60000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 429496729;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 429496729;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42830000))) ) ) {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x427e0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 429496729;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b90000))) ) ) {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42b60000))) ) ) {
                  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b90000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c20000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42be0000))) ) ) {
                  if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a80000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                } else {
                  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bd0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42700000))) ) ) {
            result[0] += 0;
            result[1] += 429496729;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b00000))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a70000))) ) ) {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 143165576;
                      result[5] += 286331153;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                } else {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c30000))) ) ) {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b90000))) ) ) {
                      result[0] += 0;
                      result[1] += 214748364;
                      result[2] += 0;
                      result[3] += 214748364;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ae0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 105490424;
                      result[3] += 226050910;
                      result[4] += 0;
                      result[5] += 97955394;
                    } else {
                      result[0] += 257698037;
                      result[1] += 0;
                      result[2] += 85899345;
                      result[3] += 0;
                      result[4] += 85899345;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d20000))) ) ) {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42990000))) ) ) {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a00000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 184070026;
                      result[3] += 184070026;
                      result[4] += 0;
                      result[5] += 61356675;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 370255801;
                      result[3] += 59240928;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a00000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                }
              }
            } else {
              if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c10000))) ) ) {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b80000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ae0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
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
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42cd0000))) ) ) {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c10000))) ) ) {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c50000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 429496729;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 429496729;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
                result[0] += 429496729;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a20000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428b0000))) ) ) {
                    result[0] += 429496729;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42dd0000))) ) ) {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
                result[0] += 429496729;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 429496729;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 429496729;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428c0000))) ) ) {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c50000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 429496729;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
                if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cd0000))) ) ) {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42cd0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 143165576;
                      result[3] += 250539758;
                      result[4] += 0;
                      result[5] += 35791394;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b50000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c20000))) ) ) {
                    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 214748364;
                      result[3] += 214748364;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 429496729;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ef0000))) ) ) {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429a0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 4294967;
                      result[1] += 0;
                      result[2] += 408021893;
                      result[3] += 12884901;
                      result[4] += 0;
                      result[5] += 4294967;
                    }
                  } else {
                    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42b50000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 346226955;
                      result[3] += 83269774;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 195225786;
                      result[3] += 234270943;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42de0000))) ) ) {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 71582788;
                      result[3] += 286331153;
                      result[4] += 0;
                      result[5] += 71582788;
                    } else {
                      result[0] += 184070026;
                      result[1] += 0;
                      result[2] += 245426702;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ad0000))) ) ) {
              if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
                if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a00000))) ) ) {
                  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a00000))) ) ) {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a80000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42dd0000))) ) ) {
                  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ad0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42db0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e30000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 353703189;
                      result[3] += 75793540;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 71582788;
                      result[3] += 357913941;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42910000))) ) ) {
                if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a00000))) ) ) {
                  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 429496729;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
                  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ae0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c30000))) ) ) {
                    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42af0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 412316860;
                      result[3] += 17179869;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 428255409;
                      result[3] += 1241320;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42af0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 268435455;
                      result[3] += 161061273;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
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
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42720000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x423e0000))) ) ) {
            result[0] += 0;
            result[1] += 429496729;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 429496729;
              result[5] += 0;
            } else {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42460000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 429496729;
              } else {
                if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42600000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                }
              }
            }
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x429d0000))) ) ) {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 429496729;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 429496729;
            }
          } else {
            if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x427e0000))) ) ) {
                result[0] += 429496729;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x424c0000))) ) ) {
                  result[0] += 0;
                  result[1] += 429496729;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42bb0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 429496729;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42890000))) ) ) {
            if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429a0000))) ) ) {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
                if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42850000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                } else {
                  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42620000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42a90000))) ) ) {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 2330000;
                      result[4] += 776666;
                      result[5] += 426390062;
                    }
                  } else {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428b0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 16843009;
                      result[4] += 5614336;
                      result[5] += 407039384;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 245426702;
                      result[4] += 0;
                      result[5] += 184070026;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42810000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              } else {
                if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a30000))) ) ) {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42820000))) ) ) {
                    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a90000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42930000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a40000))) ) ) {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a00000))) ) ) {
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42620000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42970000))) ) ) {
                    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b60000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 35060957;
                      result[4] += 30678337;
                      result[5] += 363757434;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428a0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 71582788;
                      result[2] += 0;
                      result[3] += 71582788;
                      result[4] += 0;
                      result[5] += 286331153;
                    }
                  }
                }
              } else {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428e0000))) ) ) {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42850000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 429496729;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                }
              }
            } else {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x425e0000))) ) ) {
                result[0] += 0;
                result[1] += 429496729;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b30000))) ) ) {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42870000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a50000))) ) ) {
                    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42850000))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 286331153;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b30000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 429496729;
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
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
            if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ac0000))) ) ) {
                if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429b0000))) ) ) {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ab0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42990000))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 429496729;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b70000))) ) ) {
                if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42660000))) ) ) {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428b0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x429e0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c60000))) ) ) {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42a50000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 268435455;
                      result[4] += 0;
                      result[5] += 161061273;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 429496729;
              }
            }
          } else {
            if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
              if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42910000))) ) ) {
                  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b70000))) ) ) {
                    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42af0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                }
              } else {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42820000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                } else {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a20000))) ) ) {
                    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42aa0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 214748364;
                      result[4] += 0;
                      result[5] += 214748364;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                }
              }
            } else {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a00000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 429496729;
              } else {
                if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42aa0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42de0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b60000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42300000))) ) ) {
            result[0] += 0;
            result[1] += 429496729;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 429496729;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 429496729;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c90000))) ) ) {
            if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b20000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 429496729;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 429496729;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 429496729;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
            if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428b0000))) ) ) {
              if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b90000))) ) ) {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
                  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
                    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b40000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  } else {
                    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42720000))) ) ) {
                      result[0] += 429496729;
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
                      result[4] += 429496729;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42520000))) ) ) {
                    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428e0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 286331153;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 143165576;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42e10000))) ) ) {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e70000))) ) ) {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a20000))) ) ) {
                      result[0] += 143165576;
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
                      result[4] += 429496729;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 429496729;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    result[0] += 429496729;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
                if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42b70000))) ) ) {
                  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d40000))) ) ) {
                    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cd0000))) ) ) {
                      result[0] += 0;
                      result[1] += 61356675;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 184070026;
                      result[5] += 184070026;
                    } else {
                      result[0] += 429496729;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42240000))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 171798691;
                      result[2] += 0;
                      result[3] += 214748364;
                      result[4] += 42949672;
                      result[5] += 0;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428f0000))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x429c0000))) ) ) {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
                      result[0] += 429496729;
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
                      result[4] += 214748364;
                      result[5] += 214748364;
                    }
                  } else {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42950000))) ) ) {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
                      result[0] += 300647710;
                      result[1] += 64424509;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 64424509;
                      result[5] += 0;
                    } else {
                      result[0] += 421050382;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 2111586;
                      result[4] += 5490125;
                      result[5] += 844634;
                    }
                  } else {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d90000))) ) ) {
                      result[0] += 61356675;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 245426702;
                      result[4] += 0;
                      result[5] += 122713351;
                    } else {
                      result[0] += 322122547;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 107374182;
                      result[5] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ac0000))) ) ) {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42870000))) ) ) {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x425a0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42660000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                }
              } else {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42940000))) ) ) {
                  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x428b0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
                      result[0] += 0;
                      result[1] += 49557314;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 346901204;
                      result[5] += 33038209;
                    } else {
                      result[0] += 0;
                      result[1] += 61356675;
                      result[2] += 81808900;
                      result[3] += 122713351;
                      result[4] += 122713351;
                      result[5] += 40904450;
                    }
                  }
                } else {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a00000))) ) ) {
                    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a00000))) ) ) {
                      result[0] += 0;
                      result[1] += 71582788;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 286331153;
                      result[5] += 71582788;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 33038209;
                      result[4] += 0;
                      result[5] += 396458519;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ab0000))) ) ) {
                      result[0] += 26843545;
                      result[1] += 26843545;
                      result[2] += 0;
                      result[3] += 134217727;
                      result[4] += 0;
                      result[5] += 241591910;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a10000))) ) ) {
                if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
                  result[0] += 429496729;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c60000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 429496729;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42cd0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 429496729;
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
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b50000))) ) ) {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
                if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42870000))) ) ) {
                  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a20000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 171798691;
                      result[5] += 257698037;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                }
              } else {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
                    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42800000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 370928993;
                      result[4] += 0;
                      result[5] += 58567735;
                    }
                  } else {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b40000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 21474836;
                      result[1] += 0;
                      result[2] += 107374182;
                      result[3] += 85899345;
                      result[4] += 0;
                      result[5] += 214748364;
                    }
                  }
                } else {
                  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429c0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 39045157;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 390451572;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 85899345;
                      result[3] += 257698037;
                      result[4] += 0;
                      result[5] += 85899345;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 322122547;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 107374182;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
                if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
                  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
                    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 14316557;
                      result[3] += 229064922;
                      result[4] += 0;
                      result[5] += 186115249;
                    } else {
                      result[0] += 16519104;
                      result[1] += 0;
                      result[2] += 99114629;
                      result[3] += 148671944;
                      result[4] += 99114629;
                      result[5] += 66076419;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42bf0000))) ) ) {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c90000))) ) ) {
                      result[0] += 47721858;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 381774870;
                      result[5] += 0;
                    } else {
                      result[0] += 214748364;
                      result[1] += 0;
                      result[2] += 214748364;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 429496729;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428a0000))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
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
                    result[5] += 429496729;
                  }
                } else {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428b0000))) ) ) {
                    result[0] += 429496729;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42960000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 23860929;
                      result[1] += 0;
                      result[2] += 381774870;
                      result[3] += 15907286;
                      result[4] += 0;
                      result[5] += 7953643;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
              if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42c70000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              } else {
                result[0] += 429496729;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c50000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              } else {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a60000))) ) ) {
                  result[0] += 429496729;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42d70000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 429496729;
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
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a30000))) ) ) {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
              if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ba0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 429496729;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c60000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42990000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 429496729;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 429496729;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 429496729;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 429496729;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c40000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 429496729;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42cd0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 429496729;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 429496729;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a00000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 429496729;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 429496729;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 429496729;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 429496729;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ab0000))) ) ) {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c60000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 429496729;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 429496729;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c10000))) ) ) {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42cd0000))) ) ) {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428e0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b30000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 429496729;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a90000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a10000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                } else {
                  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ad0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ac0000))) ) ) {
            if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 429496729;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 429496729;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b50000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 429496729;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 429496729;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 429496729;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c30000))) ) ) {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 429496729;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
                result[0] += 429496729;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42cd0000))) ) ) {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a50000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 315806418;
                      result[3] += 88425797;
                      result[4] += 0;
                      result[5] += 25264513;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 406280690;
                      result[3] += 16251227;
                      result[4] += 0;
                      result[5] += 6964811;
                    }
                  } else {
                    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 107374182;
                      result[3] += 214748364;
                      result[4] += 0;
                      result[5] += 107374182;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 361935446;
                      result[3] += 67561283;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b40000))) ) ) {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42bf0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 429496729;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 429496729;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42d20000))) ) ) {
                  result[0] += 429496729;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 429496729;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
            if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42c80000))) ) ) {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429e0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 429496729;
              } else {
                if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              result[0] += 429496729;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
              if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
                if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42d00000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a00000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ee0000))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c50000))) ) ) {
                    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bc0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42e30000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 357913941;
                      result[3] += 71582788;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42db0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ad0000))) ) ) {
                if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42f00000))) ) ) {
                  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a80000))) ) ) {
                    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 245426702;
                      result[3] += 184070026;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e30000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 429496729;
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
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42300000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42340000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 429496729;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 429496729;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42810000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 429496729;
              result[5] += 0;
            } else {
              if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42960000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 429496729;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x429e0000))) ) ) {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42940000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 429496729;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42800000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              } else {
                result[0] += 429496729;
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
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42620000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x426a0000))) ) ) {
            result[0] += 429496729;
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
            result[4] += 429496729;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 429496729;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 429496729;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42640000))) ) ) {
            if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42980000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 429496729;
            } else {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 429496729;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x427e0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              } else {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428c0000))) ) ) {
                  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42860000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 429496729;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429b0000))) ) ) {
                if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x427c0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42600000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                }
              } else {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42920000))) ) ) {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42890000))) ) ) {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42be0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                }
              }
            } else {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x424a0000))) ) ) {
                if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42830000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42870000))) ) ) {
                  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42af0000))) ) ) {
                    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b40000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 5965232;
                      result[4] += 662803;
                      result[5] += 422868693;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42810000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 156180628;
                      result[4] += 0;
                      result[5] += 273316100;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 8421504;
                      result[4] += 8421504;
                      result[5] += 412653720;
                    }
                  } else {
                    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428a0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 30678337;
                      result[4] += 214748364;
                      result[5] += 184070026;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 90420364;
                      result[4] += 0;
                      result[5] += 339076365;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a70000))) ) ) {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428a0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 429496729;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42980000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42870000))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a80000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c10000))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42890000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42810000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 26030104;
                      result[4] += 6507526;
                      result[5] += 396959098;
                    }
                  }
                } else {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42b00000))) ) ) {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428f0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 429496729;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42870000))) ) ) {
            if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428b0000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 429496729;
            } else {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c00000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 429496729;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bd0000))) ) ) {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 429496729;
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
                result[4] += 429496729;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
                result[0] += 0;
                result[1] += 429496729;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42600000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428a0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 214748364;
                      result[4] += 0;
                      result[5] += 214748364;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ab0000))) ) ) {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x427e0000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 429496729;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42810000))) ) ) {
                if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 429496729;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42960000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
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
                result[5] += 429496729;
              }
            }
          } else {
            if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a60000))) ) ) {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a40000))) ) ) {
                  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42960000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42850000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bd0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 414293305;
                      result[4] += 0;
                      result[5] += 15203424;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 143165576;
                      result[4] += 0;
                      result[5] += 286331153;
                    }
                  }
                }
              } else {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429a0000))) ) ) {
                  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b30000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 90420364;
                      result[4] += 0;
                      result[5] += 339076365;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 300647710;
                      result[4] += 0;
                      result[5] += 128849018;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x429a0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b10000))) ) ) {
                    result[0] += 429496729;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42860000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 429496729;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 429496729;
            result[5] += 0;
          } else {
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a80000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 429496729;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 429496729;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42e70000))) ) ) {
            if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428b0000))) ) ) {
              if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42f40000))) ) ) {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ba0000))) ) ) {
                  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ae0000))) ) ) {
                    result[0] += 429496729;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 429496729;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 429496729;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a20000))) ) ) {
                if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a20000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42d50000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42500000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 214748364;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 214748364;
                    }
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 429496729;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 429496729;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
            if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x424e0000))) ) ) {
              result[0] += 0;
              result[1] += 429496729;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42580000))) ) ) {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x425a0000))) ) ) {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42620000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    result[0] += 429496729;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 429496729;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
                  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429a0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42700000))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42060000))) ) ) {
                    result[0] += 429496729;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cd0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 107374182;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 322122547;
                      result[5] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
                result[0] += 429496729;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42820000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42be0000))) ) ) {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x429a0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 306783378;
                      result[4] += 0;
                      result[5] += 122713351;
                    }
                  } else {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42990000))) ) ) {
                      result[0] += 0;
                      result[1] += 23860929;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 405635800;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42810000))) ) ) {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42cb0000))) ) ) {
                  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429b0000))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42990000))) ) ) {
                      result[0] += 429496729;
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
                      result[5] += 429496729;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x424e0000))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a60000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    } else {
                      result[0] += 429496729;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42890000))) ) ) {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e90000))) ) ) {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42900000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428b0000))) ) ) {
                    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x429e0000))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 297343889;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 16519104;
                      result[4] += 115633734;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
                      result[0] += 420686540;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1762037;
                      result[4] += 7048151;
                      result[5] += 0;
                    } else {
                      result[0] += 305168728;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 45210182;
                      result[4] += 45210182;
                      result[5] += 33907636;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cd0000))) ) ) {
            if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
                if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42870000))) ) ) {
                  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42cd0000))) ) ) {
                    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428a0000))) ) ) {
                      result[0] += 78090314;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 78090314;
                      result[4] += 234270943;
                      result[5] += 39045157;
                    } else {
                      result[0] += 0;
                      result[1] += 47721858;
                      result[2] += 15907286;
                      result[3] += 95443717;
                      result[4] += 31814572;
                      result[5] += 238609294;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428d0000))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c10000))) ) ) {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ab0000))) ) ) {
                      result[0] += 0;
                      result[1] += 40904450;
                      result[2] += 0;
                      result[3] += 143165576;
                      result[4] += 20452225;
                      result[5] += 224974477;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 419021199;
                      result[4] += 0;
                      result[5] += 10475529;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429f0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            } else {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42860000))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c50000))) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 429496729;
                  result[5] += 0;
                } else {
                  result[0] += 429496729;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42cd0000))) ) ) {
                  if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42cd0000))) ) ) {
                    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429e0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 322122547;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 107374182;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42f60000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 429496729;
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
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a40000))) ) ) {
                if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42950000))) ) ) {
                  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428e0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    result[0] += 429496729;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42eb0000))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42d30000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 429496729;
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
                    result[4] += 429496729;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e10000))) ) ) {
                  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42be0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a70000))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42e30000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 429496729;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
                result[0] += 429496729;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42990000))) ) ) {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429b0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 429496729;
                    result[5] += 0;
                  } else {
                    result[0] += 429496729;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42df0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 429496729;
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
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 429496729;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 429496729;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42bf0000))) ) ) {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42bb0000))) ) ) {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ac0000))) ) ) {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
                    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b10000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 429496729;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cd0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
                  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ac0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  } else {
                    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 171798691;
                      result[4] += 0;
                      result[5] += 257698037;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
                    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d50000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 386547056;
                      result[4] += 0;
                      result[5] += 42949672;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  } else {
                    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42e50000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 363420309;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 66076419;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
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
              result[4] += 429496729;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a20000))) ) ) {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428c0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d60000))) ) ) {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429e0000))) ) ) {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c80000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 429496729;
                }
              }
            } else {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c40000))) ) ) {
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42dd0000))) ) ) {
                  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c10000))) ) ) {
                    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 343597383;
                      result[4] += 0;
                      result[5] += 85899345;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 396458519;
                      result[3] += 33038209;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42d10000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 30678337;
                      result[3] += 398818391;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
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
                  result[5] += 429496729;
                }
              } else {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42cd0000))) ) ) {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429c0000))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ce0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42aa0000))) ) ) {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a60000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
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
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
            if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42460000))) ) ) {
              result[0] += 0;
              result[1] += 429496729;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ad0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 429496729;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
              if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 429496729;
              } else {
                if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429e0000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
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
                  result[5] += 429496729;
                }
              }
            } else {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a80000))) ) ) {
                if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a90000))) ) ) {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b30000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bd0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 357913941;
                      result[4] += 71582788;
                      result[5] += 0;
                    }
                  }
                } else {
                  result[0] += 429496729;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              } else {
                if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x425a0000))) ) ) {
                  result[0] += 0;
                  result[1] += 429496729;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            }
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42be0000))) ) ) {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d60000))) ) ) {
                if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cc0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 429496729;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 429496729;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b50000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 322122547;
                      result[4] += 0;
                      result[5] += 107374182;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 351821789;
                      result[3] += 54829369;
                      result[4] += 0;
                      result[5] += 22845570;
                    }
                  }
                }
              } else {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 429496729;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42f20000))) ) ) {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42df0000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 391148807;
                      result[3] += 38347922;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d00000))) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 429496729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 429496729;
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
              if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ee0000))) ) ) {
                if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
                  result[0] += 429496729;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x43010000))) ) ) {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
                      result[0] += 2126221;
                      result[1] += 0;
                      result[2] += 378467415;
                      result[3] += 44650650;
                      result[4] += 0;
                      result[5] += 4252442;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 424815566;
                      result[3] += 4681163;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    result[0] += 429496729;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                }
              } else {
                if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b80000))) ) ) {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c30000))) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 429496729;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 429496729;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 429496729;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a10000))) ) ) {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42d20000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 429496729;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 429496729;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 429496729;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
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
