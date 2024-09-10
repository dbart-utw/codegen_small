
#include "header.h"


static const int32_t num_class[] = {  2, };

int32_t get_num_target(void) {
  return N_TARGET;
}
void get_num_class(int32_t* out) {
  for (int i = 0; i < N_TARGET; ++i) {
    out[i] = num_class[i];
  }
}
int32_t get_num_feature(void) {
  return 87;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "uint32";
}


void predict(union Entry* data, int pred_margin, uint32_t* result) {
  unsigned int tmp;
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 143165576;
  } else {
    if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f43fe1a))) ) ) {
      result[0] += 0;
      result[1] += 143165576;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d728d94))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e809c0e))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 140985390;
                      result[1] += 2180186;
                    } else {
                      result[0] += 131562614;
                      result[1] += 11602961;
                    }
                  }
                }
              } else {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e7f31ea))) ) ) {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 115586440;
                      result[1] += 27579135;
                    }
                  } else {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 134382412;
                      result[1] += 8783164;
                    }
                  }
                } else {
                  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e96d05a))) ) ) {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e77f2fc))) ) ) {
                      result[0] += 55423505;
                      result[1] += 87742071;
                    } else {
                      result[0] += 135557743;
                      result[1] += 7607832;
                    }
                  } else {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e92d24c))) ) ) {
                      result[0] += 18641351;
                      result[1] += 124524225;
                    } else {
                      result[0] += 70409299;
                      result[1] += 72756276;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[66].missing != -1) || ((*( ((int*)(data)) + 66 ))<=((int)(0x36554000))) ) ) {
            if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4f971a))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x36d53000))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8603ba))) ) ) {
                      result[0] += 66039340;
                      result[1] += 77126236;
                    } else {
                      result[0] += 143135010;
                      result[1] += 30565;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              }
            }
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f47d2be))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e9a1985))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        result[0] += 143165576;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51791f))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec056d2))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f630b9a))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              result[0] += 143165576;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e18f0c4))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e073652))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f504bde))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        }
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
      result[0] += 0;
      result[1] += 143165576;
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
          if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f630b9a))) ) ) {
            if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f522de3))) ) ) {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea861ee))) ) ) {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
                  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e7ee69d))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e618c20))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e7038ee))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 128355344;
                      result[1] += 14810232;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                }
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
                  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e6c2591))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae79d48))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec056d2))) ) ) {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea2caf8))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae79d48))) ) ) {
                      result[0] += 31629604;
                      result[1] += 111535972;
                    } else {
                      result[0] += 89478485;
                      result[1] += 53687091;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
                if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed0a64a))) ) ) {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f513ce0))) ) ) {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 3869339;
                      result[1] += 139296236;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                } else {
                  if ( ( !(data[62].missing != -1) || ((*( ((int*)(data)) + 62 ))<=((int)(0x3f7e380c))) ) ) {
                    if ( ( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7a57f8))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 121690740;
                      result[1] += 21474836;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 46804130;
                      result[1] += 96361445;
                    }
                  }
                }
              } else {
                if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f521772))) ) ) {
                  if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f485745))) ) ) {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e49292d))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 140653899;
                      result[1] += 2511676;
                    }
                  } else {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                } else {
                  if ( ( !(data[73].missing != -1) || ((*( ((int*)(data)) + 73 ))<=((int)(0x3f78209e))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e74dbf0))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 130150524;
                      result[1] += 13015052;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de84e))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec1232a))) ) ) {
                if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ecf1b04))) ) ) {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f490576))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea2caf8))) ) ) {
                    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
                      result[0] += 142873996;
                      result[1] += 291579;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f477b8e))) ) ) {
                      result[0] += 141931390;
                      result[1] += 1234186;
                    } else {
                      result[0] += 100215903;
                      result[1] += 42949672;
                    }
                  }
                }
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
                  if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f52f5b1))) ) ) {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e17b3df))) ) ) {
                      result[0] += 141917946;
                      result[1] += 1247630;
                    } else {
                      result[0] += 112042625;
                      result[1] += 31122951;
                    }
                  } else {
                    if ( ( !(data[73].missing != -1) || ((*( ((int*)(data)) + 73 ))<=((int)(0x3f7713f0))) ) ) {
                      result[0] += 42949672;
                      result[1] += 100215903;
                    } else {
                      result[0] += 130533319;
                      result[1] += 12632256;
                    }
                  }
                } else {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 142024814;
                      result[1] += 1140761;
                    } else {
                      result[0] += 98192096;
                      result[1] += 44973479;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ebb0926))) ) ) {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9bc5c8))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            } else {
              if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3f6a8a39))) ) ) {
                  if ( ( !(data[50].missing != -1) || ((*( ((int*)(data)) + 50 ))<=((int)(0x3e12bb51))) ) ) {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e9f9924))) ) ) {
                      result[0] += 40904450;
                      result[1] += 102261126;
                    } else {
                      result[0] += 4693953;
                      result[1] += 138471623;
                    }
                  }
                } else {
                  if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae79d48))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed8247d))) ) ) {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ebee51c))) ) ) {
                    if ( ( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7a939c))) ) ) {
                      result[0] += 138228832;
                      result[1] += 4936744;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 141827580;
                      result[1] += 1337996;
                    } else {
                      result[0] += 86986679;
                      result[1] += 56178897;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e4dcafe))) ) ) {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e978702))) ) ) {
                    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f46693e))) ) ) {
                      result[0] += 33405301;
                      result[1] += 109760275;
                    } else {
                      result[0] += 130150524;
                      result[1] += 13015052;
                    }
                  } else {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb97de0))) ) ) {
                      result[0] += 11180549;
                      result[1] += 131985026;
                    } else {
                      result[0] += 51283191;
                      result[1] += 91882384;
                    }
                  }
                } else {
                  if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3ef526))) ) ) {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0d5b02))) ) ) {
                      result[0] += 82320206;
                      result[1] += 60845370;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3ebc317e))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3ddb3fdd))) ) ) {
              if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f385ea5))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x36552000))) ) ) {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e03eae8))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae79d48))) ) ) {
                      result[0] += 143064805;
                      result[1] += 100770;
                    } else {
                      result[0] += 142853628;
                      result[1] += 311947;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          }
        } else {
          result[0] += 0;
          result[1] += 143165576;
        }
      }
    }
  }
  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 143165576;
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
      result[0] += 0;
      result[1] += 143165576;
    } else {
      if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3d98d6))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e939ec0))) ) ) {
            if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e10712c))) ) ) {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9db3e0))) ) ) {
                  if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aefe7ca))) ) ) {
                    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ebf8a7a))) ) ) {
                      result[0] += 142800358;
                      result[1] += 365218;
                    } else {
                      result[0] += 138995705;
                      result[1] += 4169871;
                    }
                  } else {
                    if ( ( !(data[70].missing != -1) || ((*( ((int*)(data)) + 70 ))<=((int)(0x3f6e817b))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 127258290;
                      result[1] += 15907286;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8666f0))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea3974e))) ) ) {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e138838))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f2af1fa))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8038d9))) ) ) {
                  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f497d8a))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 122713351;
                      result[1] += 20452225;
                    }
                  }
                } else {
                  if ( ( !(data[48].missing != -1) || ((*( ((int*)(data)) + 48 ))<=((int)(0x3e92576a))) ) ) {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f488d86))) ) ) {
                      result[0] += 141915222;
                      result[1] += 1250354;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[69].missing != -1) || ((*( ((int*)(data)) + 69 ))<=((int)(0x3f54e7ca))) ) ) {
                      result[0] += 143163499;
                      result[1] += 2076;
                    } else {
                      result[0] += 143120456;
                      result[1] += 45119;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7c951c))) ) ) {
            if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e667e74))) ) ) {
                  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f488d86))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 62915813;
                      result[1] += 80249762;
                    }
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e822724))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec386ec))) ) ) {
                    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 636291;
                      result[1] += 142529285;
                    }
                  } else {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
                      result[0] += 114532461;
                      result[1] += 28633115;
                    } else {
                      result[0] += 2202547;
                      result[1] += 140963029;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec38888))) ) ) {
                    if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f36f7fc))) ) ) {
                      result[0] += 87215810;
                      result[1] += 55949765;
                    } else {
                      result[0] += 132010097;
                      result[1] += 11155478;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 18721652;
                      result[1] += 124443924;
                    }
                  }
                }
              } else {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9a022c))) ) ) {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb28b60))) ) ) {
                      result[0] += 131235111;
                      result[1] += 11930464;
                    } else {
                      result[0] += 97061407;
                      result[1] += 46104168;
                    }
                  } else {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 83557604;
                      result[1] += 59607972;
                    }
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3ea0ca6a))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                      result[0] += 71582788;
                      result[1] += 71582788;
                    } else {
                      result[0] += 1085101;
                      result[1] += 142080475;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x36552000))) ) ) {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb32cca))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e822724))) ) ) {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 120729180;
                      result[1] += 22436396;
                    } else {
                      result[0] += 31929013;
                      result[1] += 111236563;
                    }
                  } else {
                    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e0d690c))) ) ) {
                      result[0] += 143132578;
                      result[1] += 32997;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                }
              }
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f4443c3))) ) ) {
    if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae89bf6))) ) ) {
      if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dbb29ae))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 143165576;
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f44ffbe))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        result[0] += 143165576;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
      if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ebe8a28))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        result[0] += 143165576;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e809c0e))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0a833a))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f3748c8))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e81619a))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9f3f24))) ) ) {
                      result[0] += 142501851;
                      result[1] += 663725;
                    } else {
                      result[0] += 137137552;
                      result[1] += 6028024;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
                      result[0] += 56218096;
                      result[1] += 86947479;
                    } else {
                      result[0] += 134805542;
                      result[1] += 8360033;
                    }
                  }
                } else {
                  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7421ac))) ) ) {
                    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
                      result[0] += 143156596;
                      result[1] += 8980;
                    } else {
                      result[0] += 143072712;
                      result[1] += 92864;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e872c7a))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1072de))) ) ) {
            if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edd01ac))) ) ) {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f36f7fc))) ) ) {
                  if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f4f450a))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 60037177;
                      result[1] += 83128399;
                    }
                  } else {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec1232a))) ) ) {
                      result[0] += 95443717;
                      result[1] += 47721858;
                    } else {
                      result[0] += 139861755;
                      result[1] += 3303820;
                    }
                  }
                } else {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
                      result[0] += 129480631;
                      result[1] += 13684944;
                    } else {
                      result[0] += 141871131;
                      result[1] += 1294444;
                    }
                  }
                }
              } else {
                if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7288c2))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 137094951;
                      result[1] += 6070625;
                    }
                  }
                } else {
                  if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae945bf))) ) ) {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 92421495;
                      result[1] += 50744080;
                    }
                  } else {
                    if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f630b9a))) ) ) {
                      result[0] += 18768657;
                      result[1] += 124396918;
                    } else {
                      result[0] += 53350413;
                      result[1] += 89815162;
                    }
                  }
                }
              }
            } else {
              result[0] += 143165576;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e81c45f))) ) ) {
              if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f630b9a))) ) ) {
                if ( ( !(data[69].missing != -1) || ((*( ((int*)(data)) + 69 ))<=((int)(0x3f50d2dc))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8038d9))) ) ) {
                      result[0] += 2565691;
                      result[1] += 140599885;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f37ac08))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e822724))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 44404296;
                      result[1] += 98761280;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f38241d))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x379e2000))) ) ) {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
                    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f533c24))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 143165576;
  } else {
    if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aee9437))) ) ) {
      result[0] += 0;
      result[1] += 143165576;
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
          if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae79d48))) ) ) {
            if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f52be1e))) ) ) {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e072ceb))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f490576))) ) ) {
                  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9f3f24))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e7fac28))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 141120353;
                      result[1] += 2045222;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e6c5d38))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e95378d))) ) ) {
                      result[0] += 143081013;
                      result[1] += 84563;
                    } else {
                      result[0] += 139899441;
                      result[1] += 3266134;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
                if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e946b36))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              } else {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6e36d0))) ) ) {
                  if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f4636c0))) ) ) {
                    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
                      result[0] += 71582788;
                      result[1] += 71582788;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de84e))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e072ceb))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[73].missing != -1) || ((*( ((int*)(data)) + 73 ))<=((int)(0x3f7731c1))) ) ) {
                    if ( ( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7d246a))) ) ) {
                      result[0] += 134665120;
                      result[1] += 8500456;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
                      result[0] += 132110319;
                      result[1] += 11055256;
                    } else {
                      result[0] += 142288914;
                      result[1] += 876661;
                    }
                  }
                }
              } else {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e49292d))) ) ) {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb6df49))) ) ) {
                    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed29444))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 35791394;
                      result[1] += 107374182;
                    }
                  } else {
                    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed16bed))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 39493952;
                      result[1] += 103671624;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7350da))) ) ) {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb6df49))) ) ) {
                      result[0] += 113168979;
                      result[1] += 29996596;
                    } else {
                      result[0] += 22906492;
                      result[1] += 120259084;
                    }
                  } else {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e65c1ea))) ) ) {
                      result[0] += 95443717;
                      result[1] += 47721858;
                    } else {
                      result[0] += 1756632;
                      result[1] += 141408943;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
              if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f4a3198))) ) ) {
                if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f38ba1c))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f472020))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
                      result[0] += 53687091;
                      result[1] += 89478485;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                }
              } else {
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eab93a4))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              }
            } else {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e4ab473))) ) ) {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                  if ( ( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7eb7ac))) ) ) {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0fc970))) ) ) {
                      result[0] += 142736937;
                      result[1] += 428639;
                    } else {
                      result[0] += 82885333;
                      result[1] += 60280242;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed0a64a))) ) ) {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6e36d0))) ) ) {
                      result[0] += 13362120;
                      result[1] += 129803456;
                    } else {
                      result[0] += 1995339;
                      result[1] += 141170237;
                    }
                  } else {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6b2045))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 70179204;
                      result[1] += 72986372;
                    }
                  }
                }
              } else {
                if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e96d05a))) ) ) {
                  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e95b786))) ) ) {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0d5b02))) ) ) {
                      result[0] += 134237307;
                      result[1] += 8928268;
                    } else {
                      result[0] += 100349703;
                      result[1] += 42815873;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                    if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f630b9a))) ) ) {
                      result[0] += 76885217;
                      result[1] += 66280359;
                    } else {
                      result[0] += 140739041;
                      result[1] += 2426535;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 32395130;
                      result[1] += 110770446;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[75].missing != -1) || ((*( ((int*)(data)) + 75 ))<=((int)(0x38850f88))) ) ) {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e89e0c1))) ) ) {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e10712c))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e7e2112))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed41cce))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              }
            } else {
              if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd59576))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e7ee69c))) ) ) {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e95b786))) ) ) {
                      result[0] += 123916423;
                      result[1] += 19249153;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                } else {
                  if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f2f8954))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eafd8c2))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143146767;
                      result[1] += 18808;
                    }
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d610a91))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
    } else {
      result[0] += 0;
      result[1] += 143165576;
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
      result[0] += 0;
      result[1] += 143165576;
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de84e))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f377010))) ) ) {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e822724))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              } else {
                if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d53bf14))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e979cce))) ) ) {
                      result[0] += 133388415;
                      result[1] += 9777161;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea06598))) ) ) {
                      result[0] += 138271847;
                      result[1] += 4893729;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
              if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f497d8a))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e853e30))) ) ) {
                    if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae945bf))) ) ) {
                      result[0] += 95443717;
                      result[1] += 47721858;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
                      result[0] += 35791394;
                      result[1] += 107374182;
                    } else {
                      result[0] += 109479558;
                      result[1] += 33686018;
                    }
                  }
                } else {
                  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e95378d))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e08b800))) ) ) {
                      result[0] += 35791394;
                      result[1] += 107374182;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
                if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e68f3be))) ) ) {
                  if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f4e835f))) ) ) {
                    if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f37e825))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    if ( ( !(data[69].missing != -1) || ((*( ((int*)(data)) + 69 ))<=((int)(0x3f52392a))) ) ) {
                      result[0] += 127258290;
                      result[1] += 15907286;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f474434))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e853e30))) ) ) {
                      result[0] += 7485781;
                      result[1] += 135679794;
                    } else {
                      result[0] += 107374182;
                      result[1] += 35791394;
                    }
                  } else {
                    if ( ( !(data[49].missing != -1) || ((*( ((int*)(data)) + 49 ))<=((int)(0x3f000000))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 57947971;
                      result[1] += 85217605;
                    }
                  }
                }
              } else {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea06598))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f37ac08))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8666f0))) ) ) {
                    if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f44896c))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 4054798;
                      result[1] += 139110778;
                    }
                  } else {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e746375))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 119304647;
                      result[1] += 23860929;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae61f2c))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec5d64a))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[44].missing != -1) || ((*( ((int*)(data)) + 44 ))<=((int)(0x36552000))) ) ) {
                if ( ( !(data[66].missing != -1) || ((*( ((int*)(data)) + 66 ))<=((int)(0x3671a000))) ) ) {
                  if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee74630))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e09311e))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143087030;
                      result[1] += 78546;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
      result[0] += 0;
      result[1] += 143165576;
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e9388a8))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        result[0] += 143165576;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
      if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ebc7f0c))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        result[0] += 143165576;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f340681))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e809c0e))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9db3e0))) ) ) {
                if ( ( !(data[73].missing != -1) || ((*( ((int*)(data)) + 73 ))<=((int)(0x3f79c290))) ) ) {
                  if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6383af))) ) ) {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e9205d6))) ) ) {
                      result[0] += 20452225;
                      result[1] += 122713351;
                    } else {
                      result[0] += 141884043;
                      result[1] += 1281533;
                    }
                  } else {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9cee3c))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 139347827;
                      result[1] += 3817748;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e75a25c))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              } else {
                if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
                  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb7f29b))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 23534067;
                      result[1] += 119631509;
                    }
                  } else {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb66772))) ) ) {
                      result[0] += 50153545;
                      result[1] += 93012030;
                    } else {
                      result[0] += 126751688;
                      result[1] += 16413887;
                    }
                  }
                } else {
                  if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee79fcd))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 131059663;
                      result[1] += 12105912;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
              if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea1320e))) ) ) {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea06598))) ) ) {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9603e4))) ) ) {
                      result[0] += 119304647;
                      result[1] += 23860929;
                    } else {
                      result[0] += 141860115;
                      result[1] += 1305461;
                    }
                  }
                } else {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9603e4))) ) ) {
                    if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62edb0))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e4ab473))) ) ) {
                  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
                      result[0] += 6944598;
                      result[1] += 136220977;
                    } else {
                      result[0] += 89478485;
                      result[1] += 53687091;
                    }
                  } else {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 124766787;
                      result[1] += 18398788;
                    }
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f522de3))) ) ) {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
                  if ( ( !(data[63].missing != -1) || ((*( ((int*)(data)) + 63 ))<=((int)(0x3f7f0ae2))) ) ) {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 28741574;
                      result[1] += 114424002;
                    }
                  } else {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eac5ffc))) ) ) {
                      result[0] += 7482521;
                      result[1] += 135683055;
                    } else {
                      result[0] += 79763678;
                      result[1] += 63401898;
                    }
                  }
                } else {
                  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
                    if ( ( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7e4f12))) ) ) {
                      result[0] += 171148;
                      result[1] += 142994428;
                    } else {
                      result[0] += 4618244;
                      result[1] += 138547332;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e77f2fc))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f630b9a))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e939ec0))) ) ) {
                      result[0] += 98734880;
                      result[1] += 44430696;
                    } else {
                      result[0] += 18311876;
                      result[1] += 124853700;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f53226a))) ) ) {
            if ( ( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x36d53000))) ) ) {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e182b3a))) ) ) {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143110150;
                      result[1] += 55426;
                    }
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
    if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0d5b02))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
            if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f470cdc))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed6d328))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f505250))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e809c0e))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
                if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec056d2))) ) ) {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e95378d))) ) ) {
                    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
                      result[0] += 26030104;
                      result[1] += 117135471;
                    } else {
                      result[0] += 120259084;
                      result[1] += 22906492;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 142777243;
                      result[1] += 388333;
                    } else {
                      result[0] += 136546620;
                      result[1] += 6618956;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                    if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee78222))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 139232691;
                      result[1] += 3932885;
                    }
                  } else {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                      result[0] += 8651331;
                      result[1] += 134514245;
                    } else {
                      result[0] += 101298890;
                      result[1] += 41866686;
                    }
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8603ba))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e766705))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f36bc04))) ) ) {
                      result[0] += 142910470;
                      result[1] += 255106;
                    } else {
                      result[0] += 143147391;
                      result[1] += 18185;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46e1c3))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
            if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3ea2649f))) ) ) {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0dcf64))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3d98d6))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f47d2be))) ) ) {
                      result[0] += 143156867;
                      result[1] += 8708;
                    } else {
                      result[0] += 141238830;
                      result[1] += 1926745;
                    }
                  }
                }
              }
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          } else {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                    if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f373418))) ) ) {
                      result[0] += 11012736;
                      result[1] += 132152839;
                    } else {
                      result[0] += 140697204;
                      result[1] += 2468372;
                    }
                  } else {
                    if ( ( !(data[70].missing != -1) || ((*( ((int*)(data)) + 70 ))<=((int)(0x3f730dd7))) ) ) {
                      result[0] += 1684300;
                      result[1] += 141481275;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e932573))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d33cc3e))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed4e511))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 143165576;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
      result[0] += 0;
      result[1] += 143165576;
    } else {
      if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec8b260))) ) ) {
        if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f377010))) ) ) {
          if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f451abc))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4fd360))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              result[0] += 143165576;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42e172))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec5878e))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x36638000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e03eae8))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38850f80))) ) ) {
              if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea2dade))) ) ) {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e15142e))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              } else {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1b4246))) ) ) {
                  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e9603e4))) ) ) {
                    if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3aee14ca))) ) ) {
                      result[0] += 142598209;
                      result[1] += 567366;
                    } else {
                      result[0] += 47721858;
                      result[1] += 95443717;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e91fcb2))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              }
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          }
        } else {
          result[0] += 0;
          result[1] += 143165576;
        }
      }
    }
  }
  if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f475a41))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f50c45b))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed3bc9c))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 143165576;
        }
      }
    } else {
      if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f369eab))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        result[0] += 143165576;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f4bd5ce))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea895f6))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f47d2be))) ) ) {
              if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ecfe0a8))) ) ) {
                if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f4b7b34))) ) ) {
                  if ( ( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7f1122))) ) ) {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e17b3df))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 71582788;
                      result[1] += 71582788;
                    }
                  } else {
                    if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f46ec42))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e7d5b88))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e81619a))) ) ) {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ebf8a7a))) ) ) {
                    if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 139616016;
                      result[1] += 3549559;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e7350da))) ) ) {
                      result[0] += 139347827;
                      result[1] += 3817748;
                    } else {
                      result[0] += 38544578;
                      result[1] += 104620998;
                    }
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e82ed20))) ) ) {
                    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 134217727;
                      result[1] += 8947848;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45783c))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                  if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f51200e))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[69].missing != -1) || ((*( ((int*)(data)) + 69 ))<=((int)(0x3f5363ac))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 3670912;
                      result[1] += 139494664;
                    }
                  }
                } else {
                  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7038ee))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 3635063;
                      result[1] += 139530513;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 97379604;
                      result[1] += 45785972;
                    }
                  }
                }
              } else {
                if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea0f9b0))) ) ) {
                  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d728d94))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec13604))) ) ) {
                      result[0] += 136024243;
                      result[1] += 7141333;
                    } else {
                      result[0] += 113535192;
                      result[1] += 29630383;
                    }
                  }
                } else {
                  if ( ( !(data[68].missing != -1) || ((*( ((int*)(data)) + 68 ))<=((int)(0x3f4e7db2))) ) ) {
                    if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f4ce712))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    if ( ( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38850440))) ) ) {
                      result[0] += 143028628;
                      result[1] += 136948;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        result[0] += 143165576;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
    result[0] += 0;
    result[1] += 143165576;
  } else {
    if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e99d7ce))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        } else {
          result[0] += 0;
          result[1] += 143165576;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3ea06598))) ) ) {
          if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae945bf))) ) ) {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f385ea5))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e4ab473))) ) ) {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec056d2))) ) ) {
                      result[0] += 123342650;
                      result[1] += 19822925;
                    } else {
                      result[0] += 87746643;
                      result[1] += 55418932;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 129050660;
                      result[1] += 14114915;
                    }
                  }
                } else {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
                    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ecfe0a8))) ) ) {
                      result[0] += 79252372;
                      result[1] += 63913203;
                    } else {
                      result[0] += 134866122;
                      result[1] += 8299453;
                    }
                  } else {
                    if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee74630))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143112420;
                      result[1] += 53156;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee76429))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e88553b))) ) ) {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eaac72f))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e809c0e))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 120718535;
                      result[1] += 22447041;
                    }
                  } else {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec07061))) ) ) {
                      result[0] += 142663241;
                      result[1] += 502335;
                    } else {
                      result[0] += 131936903;
                      result[1] += 11228672;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6ad143))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 129327203;
                      result[1] += 13838373;
                    }
                  } else {
                    if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
                      result[0] += 112210857;
                      result[1] += 30954719;
                    } else {
                      result[0] += 19473010;
                      result[1] += 123692565;
                    }
                  }
                }
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e7ee69c))) ) ) {
                  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f497d8a))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e95c040))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb416a6))) ) ) {
            if ( ( !(data[69].missing != -1) || ((*( ((int*)(data)) + 69 ))<=((int)(0x3f5274ce))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e932573))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e1da382))) ) ) {
          if ( ( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x36d52000))) ) ) {
            if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3aea9952))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e09d9cc))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e93eafe))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f38241d))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb1c5be))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              }
            }
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        } else {
          result[0] += 0;
          result[1] += 143165576;
        }
      }
    }
  }
  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
    result[0] += 0;
    result[1] += 143165576;
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8dbd57))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f494192))) ) ) {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec386ec))) ) ) {
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea6c904))) ) ) {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9f3f24))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
                      result[0] += 124174224;
                      result[1] += 18991351;
                    } else {
                      result[0] += 55974511;
                      result[1] += 87191065;
                    }
                  }
                } else {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e4c3fb8))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 89478485;
                      result[1] += 53687091;
                    }
                  }
                }
              } else {
                if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f38060f))) ) ) {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0a43f6))) ) ) {
                      result[0] += 64047757;
                      result[1] += 79117818;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e96d05a))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f513ce0))) ) ) {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
                      result[0] += 35370318;
                      result[1] += 107795257;
                    } else {
                      result[0] += 135823752;
                      result[1] += 7341824;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                }
              } else {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec07061))) ) ) {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea1fe82))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 129743803;
                      result[1] += 13421772;
                    }
                  }
                } else {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f47a8ae))) ) ) {
                      result[0] += 20452225;
                      result[1] += 122713351;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f36f7fc))) ) ) {
              if ( ( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7bdc16))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea06598))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e687fc2))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e08b800))) ) ) {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb4dc48))) ) ) {
                      result[0] += 139984119;
                      result[1] += 3181457;
                    } else {
                      result[0] += 118676727;
                      result[1] += 24488848;
                    }
                  } else {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 141695326;
                      result[1] += 1470249;
                    }
                  }
                }
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
          if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed1c0bb))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7288c2))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                if ( ( !(data[73].missing != -1) || ((*( ((int*)(data)) + 73 ))<=((int)(0x3f7722c4))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
                    if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f44cf16))) ) ) {
                      result[0] += 116080197;
                      result[1] += 27085379;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eaac72f))) ) ) {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6e36d0))) ) ) {
                      result[0] += 5010795;
                      result[1] += 138154781;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f490576))) ) ) {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec056d2))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e81c45f))) ) ) {
                      result[0] += 104988089;
                      result[1] += 38177487;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f45f820))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 140195336;
                      result[1] += 2970240;
                    }
                  }
                } else {
                  if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae79d48))) ) ) {
                    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f522de3))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 122713351;
                      result[1] += 20452225;
                    }
                  } else {
                    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
                      result[0] += 141440690;
                      result[1] += 1724886;
                    } else {
                      result[0] += 70796164;
                      result[1] += 72369412;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec1232a))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f4a2061))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec056d2))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                  if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f630b9a))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e822724))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e70f013))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 61356675;
                      result[1] += 81808900;
                    }
                  }
                } else {
                  if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f630b9a))) ) ) {
                    if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 13015052;
                      result[1] += 130150524;
                    }
                  } else {
                    if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d53bf14))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 125706359;
                      result[1] += 17459216;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
              if ( ( !(data[48].missing != -1) || ((*( ((int*)(data)) + 48 ))<=((int)(0x3f6dda8a))) ) ) {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e072ceb))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e64f32e))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e77f2fb))) ) ) {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb79c96))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
                if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e629052))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e979cce))) ) ) {
                    if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f37ac08))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f37e825))) ) ) {
                      result[0] += 28954835;
                      result[1] += 114210740;
                    } else {
                      result[0] += 1264155;
                      result[1] += 141901421;
                    }
                  }
                }
              } else {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e9c676e))) ) ) {
                      result[0] += 1154561;
                      result[1] += 142011015;
                    } else {
                      result[0] += 60037177;
                      result[1] += 83128399;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e98cf7d))) ) ) {
          if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f2d7a67))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f533c24))) ) ) {
              if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f485169))) ) ) {
                if ( ( !(data[50].missing != -1) || ((*( ((int*)(data)) + 50 ))<=((int)(0x3eb7063e))) ) ) {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea1fe82))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e95378d))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3da6cd8b))) ) ) {
                      result[0] += 107374182;
                      result[1] += 35791394;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e90d462))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 142970128;
                      result[1] += 195447;
                    }
                  } else {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea3974e))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 143145845;
                      result[1] += 19730;
                    }
                  }
                } else {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e09311e))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[50].missing != -1) || ((*( ((int*)(data)) + 50 ))<=((int)(0x3e12bb51))) ) ) {
                      result[0] += 142999875;
                      result[1] += 165700;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              }
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          }
        } else {
          result[0] += 0;
          result[1] += 143165576;
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f47d2be))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e9388a8))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        result[0] += 143165576;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3cd958e9))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 143165576;
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
      result[0] += 0;
      result[1] += 143165576;
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
        if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea2caf8))) ) ) {
                  if ( ( !(data[73].missing != -1) || ((*( ((int*)(data)) + 73 ))<=((int)(0x3f7713f0))) ) ) {
                    if ( ( !(data[50].missing != -1) || ((*( ((int*)(data)) + 50 ))<=((int)(0x3f000000))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e5c2ce6))) ) ) {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb7f29b))) ) ) {
                      result[0] += 88994817;
                      result[1] += 54170758;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f4787da))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f40ba05))) ) ) {
                if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f373418))) ) ) {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                    if ( ( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7a57f8))) ) ) {
                      result[0] += 71582788;
                      result[1] += 71582788;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea2caf8))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 68719476;
                      result[1] += 74446099;
                    }
                  }
                } else {
                  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e979cce))) ) ) {
                    if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f499115))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 141241738;
                      result[1] += 1923837;
                    }
                  } else {
                    if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aefe7ca))) ) ) {
                      result[0] += 118481856;
                      result[1] += 24683720;
                    } else {
                      result[0] += 20452225;
                      result[1] += 122713351;
                    }
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            }
          } else {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
                    if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aef92e5))) ) ) {
                      result[0] += 41756626;
                      result[1] += 101408950;
                    } else {
                      result[0] += 120259084;
                      result[1] += 22906492;
                    }
                  } else {
                    if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f42d5af))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                }
              } else {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                    if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f4f450a))) ) ) {
                      result[0] += 30954719;
                      result[1] += 112210857;
                    } else {
                      result[0] += 906111;
                      result[1] += 142259465;
                    }
                  } else {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
                      result[0] += 86833631;
                      result[1] += 56331944;
                    } else {
                      result[0] += 30368455;
                      result[1] += 112797120;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea9fad8))) ) ) {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3ea004c8))) ) ) {
                  if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f52f5b1))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9cee3c))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                } else {
                  if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae945bf))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e809c0e))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7350da))) ) ) {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e9e003a))) ) ) {
                      result[0] += 137664633;
                      result[1] += 5500943;
                    } else {
                      result[0] += 116142355;
                      result[1] += 27023221;
                    }
                  } else {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9eccae))) ) ) {
                      result[0] += 11012736;
                      result[1] += 132152839;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e65c1ea))) ) ) {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9f3f24))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f38060f))) ) ) {
                  if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f4f0d78))) ) ) {
                    if ( ( !(data[48].missing != -1) || ((*( ((int*)(data)) + 48 ))<=((int)(0x3f6dda8a))) ) ) {
                      result[0] += 127258290;
                      result[1] += 15907286;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7d3366))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              }
            } else {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e74dbf0))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e841570))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f40f358))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3ddb3fdd))) ) ) {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f45783c))) ) ) {
                if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f50ec1a))) ) ) {
                  if ( ( !(data[44].missing != -1) || ((*( ((int*)(data)) + 44 ))<=((int)(0x36552000))) ) ) {
                    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x36552000))) ) ) {
                      result[0] += 143079688;
                      result[1] += 85887;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f456756))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              } else {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e131598))) ) ) {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1765b0))) ) ) {
                    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f490007))) ) ) {
                      result[0] += 58950531;
                      result[1] += 84215045;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e9eccae))) ) ) {
                      result[0] += 140481221;
                      result[1] += 2684354;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1a7bda))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              }
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e93eafe))) ) ) {
    if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aeee91c))) ) ) {
      if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
        if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3eca2e64))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb6df49))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e95b786))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42e172))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9cee3c))) ) ) {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e7039cf))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e9205d6))) ) ) {
                      result[0] += 127034243;
                      result[1] += 16131332;
                    } else {
                      result[0] += 142949118;
                      result[1] += 216458;
                    }
                  }
                } else {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f513ce0))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                      result[0] += 131323224;
                      result[1] += 11842351;
                    } else {
                      result[0] += 76457601;
                      result[1] += 66707974;
                    }
                  } else {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
                      result[0] += 90081711;
                      result[1] += 53083865;
                    } else {
                      result[0] += 34722994;
                      result[1] += 108442582;
                    }
                  }
                }
              } else {
                if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e0d4a20))) ) ) {
                  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
                    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed0a64a))) ) ) {
                      result[0] += 125269879;
                      result[1] += 17895697;
                    } else {
                      result[0] += 72133425;
                      result[1] += 71032151;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                      result[0] += 130533319;
                      result[1] += 12632256;
                    } else {
                      result[0] += 56679886;
                      result[1] += 86485689;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              }
            } else {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8c31d2))) ) ) {
                if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8b6c46))) ) ) {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0c7d46))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 142606335;
                      result[1] += 559240;
                    }
                  } else {
                    if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3fc622))) ) ) {
                      result[0] += 142572021;
                      result[1] += 593555;
                    } else {
                      result[0] += 121690740;
                      result[1] += 21474836;
                    }
                  }
                } else {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e92d24c))) ) ) {
                    if ( ( !(data[69].missing != -1) || ((*( ((int*)(data)) + 69 ))<=((int)(0x3f54ac26))) ) ) {
                      result[0] += 106219621;
                      result[1] += 36945955;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e053c46))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e576228))) ) ) {
                    if ( ( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7f201e))) ) ) {
                      result[0] += 142989264;
                      result[1] += 176312;
                    } else {
                      result[0] += 131712330;
                      result[1] += 11453246;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb6df49))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x37037800))) ) ) {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea5fc90))) ) ) {
              if ( ( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38850440))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            } else {
              result[0] += 143165576;
              result[1] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        }
      }
    }
  } else {
    if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
      result[0] += 0;
      result[1] += 143165576;
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f41a75b))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1b4246))) ) ) {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e9eccae))) ) ) {
              if ( ( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x36d53000))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            } else {
              result[0] += 143165576;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e03eae8))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1b4246))) ) ) {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e07dfc0))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f501dba))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f49114e))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f44b1e0))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
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
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 143165576;
  } else {
    if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d258d46))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
        if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f392967))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f448739))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e0d690c))) ) ) {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e05e4f4))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 142277036;
                      result[1] += 888539;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              }
            } else {
              if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de84e))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb5063a))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
                      result[0] += 139170258;
                      result[1] += 3995318;
                    } else {
                      result[0] += 142742635;
                      result[1] += 422941;
                    }
                  }
                }
              } else {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                  if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3fc622))) ) ) {
                    if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f46bbd4))) ) ) {
                      result[0] += 3329432;
                      result[1] += 139836144;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f46827e))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 71582788;
                      result[1] += 71582788;
                    }
                  }
                } else {
                  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                      result[0] += 139929464;
                      result[1] += 3236111;
                    } else {
                      result[0] += 84198644;
                      result[1] += 58966931;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8c31d2))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e09da8c))) ) ) {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
                if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e939ec0))) ) ) {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e4ab473))) ) ) {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb47978))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f37ac08))) ) ) {
                    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed0a64a))) ) ) {
                      result[0] += 15907286;
                      result[1] += 127258290;
                    } else {
                      result[0] += 85899345;
                      result[1] += 57266230;
                    }
                  } else {
                    if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 137711649;
                      result[1] += 5453926;
                    }
                  }
                }
              } else {
                if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec38888))) ) ) {
                  if ( ( !(data[68].missing != -1) || ((*( ((int*)(data)) + 68 ))<=((int)(0x3f4f12f3))) ) ) {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9cee3c))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 123818876;
                      result[1] += 19346699;
                    }
                  } else {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea7957a))) ) ) {
                      result[0] += 138737775;
                      result[1] += 4427801;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e7b0a07))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
                if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f44ffbe))) ) ) {
                  if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f377010))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f2beb0a))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[68].missing != -1) || ((*( ((int*)(data)) + 68 ))<=((int)(0x3f5274ce))) ) ) {
                      result[0] += 141937273;
                      result[1] += 1228303;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                }
              } else {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
                      result[0] += 37495746;
                      result[1] += 105669830;
                    } else {
                      result[0] += 472493;
                      result[1] += 142693082;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e82ed20))) ) ) {
                if ( ( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7e1348))) ) ) {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e64f32e))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f47f7a2))) ) ) {
                      result[0] += 124491805;
                      result[1] += 18673770;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcf0c))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f37ac08))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
                if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e95378d))) ) ) {
                  if ( ( !(data[69].missing != -1) || ((*( ((int*)(data)) + 69 ))<=((int)(0x3f553292))) ) ) {
                    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ec8ee27))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 133988295;
                      result[1] += 9177280;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  if ( ( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f4715e7))) ) ) {
                    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f5186e2))) ) ) {
                      result[0] += 6224590;
                      result[1] += 136940986;
                    } else {
                      result[0] += 71582788;
                      result[1] += 71582788;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e822724))) ) ) {
                  if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f402eb2))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d728d94))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[62].missing != -1) || ((*( ((int*)(data)) + 62 ))<=((int)(0x3f7e380c))) ) ) {
                      result[0] += 5614336;
                      result[1] += 137551240;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb9172e))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x36d53000))) ) ) {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e932573))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e97027a))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee58c9f))) ) ) {
      result[0] += 0;
      result[1] += 143165576;
    } else {
      result[0] += 143165576;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
      result[0] += 0;
      result[1] += 143165576;
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f40f358))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e4ab473))) ) ) {
                  if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f44cf16))) ) ) {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                      result[0] += 139290724;
                      result[1] += 3874851;
                    } else {
                      result[0] += 64331544;
                      result[1] += 78834031;
                    }
                  } else {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                      result[0] += 100853483;
                      result[1] += 42312093;
                    } else {
                      result[0] += 140144497;
                      result[1] += 3021078;
                    }
                  }
                } else {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea0cbd3))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f373418))) ) ) {
                      result[0] += 114002218;
                      result[1] += 29163358;
                    } else {
                      result[0] += 141519154;
                      result[1] += 1646422;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6e36d0))) ) ) {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0a43f6))) ) ) {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eaac72f))) ) ) {
                    if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f386016))) ) ) {
                      result[0] += 22573825;
                      result[1] += 120591751;
                    } else {
                      result[0] += 78741067;
                      result[1] += 64424509;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb35104))) ) ) {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e6b591c))) ) ) {
                      result[0] += 125985707;
                      result[1] += 17179869;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                } else {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3ea0ca6a))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 125269879;
                      result[1] += 17895697;
                    } else {
                      result[0] += 10439156;
                      result[1] += 132726419;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                  if ( ( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f46bc4a))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e897dfc))) ) ) {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0d5b02))) ) ) {
                      result[0] += 6049249;
                      result[1] += 137116326;
                    } else {
                      result[0] += 113668;
                      result[1] += 143051907;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                      result[0] += 107374182;
                      result[1] += 35791394;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7288c2))) ) ) {
            if ( ( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x3798c400))) ) ) {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee74630))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eba4384))) ) ) {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e131598))) ) ) {
                      result[0] += 143067802;
                      result[1] += 97773;
                    } else {
                      result[0] += 141794892;
                      result[1] += 1370683;
                    }
                  } else {
                    if ( ( !(data[68].missing != -1) || ((*( ((int*)(data)) + 68 ))<=((int)(0x3f5274ce))) ) ) {
                      result[0] += 141772237;
                      result[1] += 1393338;
                    } else {
                      result[0] += 85899345;
                      result[1] += 57266230;
                    }
                  }
                }
              }
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          } else {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
              if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f48c3c8))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d072326))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              }
            } else {
              if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f533c24))) ) ) {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049397))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e08b800))) ) ) {
                      result[0] += 139760322;
                      result[1] += 3405254;
                    } else {
                      result[0] += 142987214;
                      result[1] += 178362;
                    }
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 143165576;
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
      if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f3bc354))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec5d64a))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e10712c))) ) ) {
            if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
                if ( ( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7f201e))) ) ) {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f51b565))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f49d35c))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 141353354;
                      result[1] += 1812222;
                    }
                  }
                } else {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ebd59f2))) ) ) {
                    if ( ( !(data[50].missing != -1) || ((*( ((int*)(data)) + 50 ))<=((int)(0x3eb7063e))) ) ) {
                      result[0] += 35791394;
                      result[1] += 107374182;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e08b800))) ) ) {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea9fad8))) ) ) {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e939ec0))) ) ) {
                      result[0] += 118747148;
                      result[1] += 24418427;
                    } else {
                      result[0] += 87752282;
                      result[1] += 55413293;
                    }
                  } else {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec13604))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 105490424;
                      result[1] += 37675151;
                    }
                  }
                } else {
                  if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f405932))) ) ) {
                    if ( ( !(data[73].missing != -1) || ((*( ((int*)(data)) + 73 ))<=((int)(0x3f788938))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e699500))) ) ) {
                      result[0] += 133376477;
                      result[1] += 9789099;
                    } else {
                      result[0] += 142581567;
                      result[1] += 584008;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7350da))) ) ) {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e9603e4))) ) ) {
                      result[0] += 113996009;
                      result[1] += 29169567;
                    } else {
                      result[0] += 80021409;
                      result[1] += 63144166;
                    }
                  }
                } else {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9eccae))) ) ) {
                      result[0] += 136849448;
                      result[1] += 6316128;
                    } else {
                      result[0] += 38693399;
                      result[1] += 104472177;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 1289779;
                      result[1] += 141875796;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f522de3))) ) ) {
                  if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f4e835f))) ) ) {
                    if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f4ae06c))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[63].missing != -1) || ((*( ((int*)(data)) + 63 ))<=((int)(0x3f7f0ae2))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              }
            } else {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb5c326))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
        if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3f5db6))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e97653f))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e99538a))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f373418))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea861ee))) ) ) {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              result[0] += 143165576;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7c951c))) ) ) {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb79c96))) ) ) {
                if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f522de3))) ) ) {
                  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec1ef9e))) ) ) {
                      result[0] += 62634939;
                      result[1] += 80530636;
                    } else {
                      result[0] += 17895697;
                      result[1] += 125269879;
                    }
                  } else {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e09da8c))) ) ) {
                      result[0] += 128849018;
                      result[1] += 14316557;
                    } else {
                      result[0] += 47721858;
                      result[1] += 95443717;
                    }
                  }
                } else {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 3624444;
                      result[1] += 139541131;
                    }
                  }
                }
              } else {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eaac72f))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e7a447c))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 9544371;
                      result[1] += 133621204;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb28b60))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
                      result[0] += 110627945;
                      result[1] += 32537631;
                    } else {
                      result[0] += 23427094;
                      result[1] += 119738482;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e5e00e8))) ) ) {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e49292d))) ) ) {
                  if ( ( !(data[48].missing != -1) || ((*( ((int*)(data)) + 48 ))<=((int)(0x3f495da8))) ) ) {
                    if ( ( !(data[68].missing != -1) || ((*( ((int*)(data)) + 68 ))<=((int)(0x3f51df8c))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 114532461;
                      result[1] += 28633115;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e83b31a))) ) ) {
                    if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e9db))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            }
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8c31d2))) ) ) {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7350da))) ) ) {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3ea0ca6a))) ) ) {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e777a00))) ) ) {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e9eccae))) ) ) {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                      result[0] += 140489584;
                      result[1] += 2675992;
                    } else {
                      result[0] += 80826211;
                      result[1] += 62339365;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 142164418;
                      result[1] += 1001157;
                    } else {
                      result[0] += 113690310;
                      result[1] += 29475265;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f488d86))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
                      result[0] += 127547513;
                      result[1] += 15618062;
                    } else {
                      result[0] += 11012736;
                      result[1] += 132152839;
                    }
                  }
                }
              } else {
                if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f37e825))) ) ) {
                  if ( ( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f467182))) ) ) {
                    if ( ( !(data[63].missing != -1) || ((*( ((int*)(data)) + 63 ))<=((int)(0x3f7f0ae2))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f630b9a))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 71582788;
                      result[1] += 71582788;
                    }
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f45783c))) ) ) {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec1ef9e))) ) ) {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3ea0ca6a))) ) ) {
                      result[0] += 139736460;
                      result[1] += 3429115;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e097e6c))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                } else {
                  if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3f5db6))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 2667681;
                      result[1] += 140497894;
                    }
                  }
                }
              } else {
                if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f49788c))) ) ) {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 25565281;
                      result[1] += 117600294;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e80fe64))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3ea25594))) ) ) {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e09d9cc))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d258d46))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[75].missing != -1) || ((*( ((int*)(data)) + 75 ))<=((int)(0x38851068))) ) ) {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
                      result[0] += 142860968;
                      result[1] += 304607;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              }
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e93eafe))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
      result[0] += 0;
      result[1] += 143165576;
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eb12ab8))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f505250))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3af06737))) ) ) {
              if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f38ba1c))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb416a6))) ) ) {
                  if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f46b864))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              }
            } else {
              if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f46d625))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            }
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e809c0e))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
              if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3c3c87))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e0f04ba))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8666f0))) ) ) {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb4dc48))) ) ) {
                      result[0] += 141364751;
                      result[1] += 1800824;
                    } else {
                      result[0] += 82244054;
                      result[1] += 60921521;
                    }
                  } else {
                    if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f2f8954))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143150223;
                      result[1] += 15352;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              }
            } else {
              if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ebb0926))) ) ) {
                    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec1232a))) ) ) {
                      result[0] += 127364693;
                      result[1] += 15800883;
                    } else {
                      result[0] += 29964888;
                      result[1] += 113200688;
                    }
                  } else {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                      result[0] += 14162616;
                      result[1] += 129002960;
                    } else {
                      result[0] += 109588083;
                      result[1] += 33577493;
                    }
                  }
                }
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6d21e3))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee74630))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea9fad8))) ) ) {
                      result[0] += 134149262;
                      result[1] += 9016313;
                    } else {
                      result[0] += 142956304;
                      result[1] += 209272;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        result[0] += 0;
        result[1] += 143165576;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
      result[0] += 0;
      result[1] += 143165576;
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb1b232))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f2eff53))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f45dc42))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f501dba))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              }
            } else {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1b4246))) ) ) {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e95d948))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d610a91))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
    } else {
      result[0] += 0;
      result[1] += 143165576;
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1b4246))) ) ) {
      if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
        if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
            if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f373418))) ) ) {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7038ee))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e96d05a))) ) ) {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ebf2440))) ) ) {
                      result[0] += 14316557;
                      result[1] += 128849018;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f461cd8))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 8947848;
                      result[1] += 134217727;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f37ac08))) ) ) {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e822724))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3f68aca4))) ) ) {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 17895697;
                      result[1] += 125269879;
                    }
                  } else {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e9eccae))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 132560718;
                      result[1] += 10604857;
                    }
                  }
                }
              } else {
                if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9603e4))) ) ) {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec38888))) ) ) {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e9ace84))) ) ) {
                      result[0] += 121140103;
                      result[1] += 22025473;
                    } else {
                      result[0] += 142206343;
                      result[1] += 959233;
                    }
                  } else {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e9c676e))) ) ) {
                      result[0] += 116322030;
                      result[1] += 26843545;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                } else {
                  if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae7f22c))) ) ) {
                    if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f4858f1))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 141120353;
                      result[1] += 2045222;
                    }
                  } else {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec1fba6))) ) ) {
                      result[0] += 141689642;
                      result[1] += 1475933;
                    } else {
                      result[0] += 107374182;
                      result[1] += 35791394;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb621fc))) ) ) {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1072de))) ) ) {
                    if ( ( !(data[68].missing != -1) || ((*( ((int*)(data)) + 68 ))<=((int)(0x3f4ec87a))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 134400337;
                      result[1] += 8765239;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            } else {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 74357314;
                      result[1] += 68808261;
                    }
                  } else {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e946b36))) ) ) {
                      result[0] += 22858369;
                      result[1] += 120307207;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f37694a))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae79d48))) ) ) {
              if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4f5adb))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0c7e06))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e8e669f))) ) ) {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb9172e))) ) ) {
                      result[0] += 143127456;
                      result[1] += 38120;
                    } else {
                      result[0] += 142969190;
                      result[1] += 196386;
                    }
                  } else {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb4dc48))) ) ) {
                      result[0] += 142776010;
                      result[1] += 389566;
                    } else {
                      result[0] += 135411928;
                      result[1] += 7753648;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3e4710))) ) ) {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e81619a))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e068da3))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45783c))) ) ) {
                      result[0] += 143004716;
                      result[1] += 160860;
                    } else {
                      result[0] += 140891862;
                      result[1] += 2273713;
                    }
                  }
                }
              } else {
                if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f50c45b))) ) ) {
                  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e657868))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
                      result[0] += 125464509;
                      result[1] += 17701067;
                    } else {
                      result[0] += 142577828;
                      result[1] += 587747;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d33cc3e))) ) ) {
          if ( ( !(data[75].missing != -1) || ((*( ((int*)(data)) + 75 ))<=((int)(0x38853d80))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        } else {
          result[0] += 0;
          result[1] += 143165576;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e5e00e7))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x367fe000))) ) ) {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec44c73))) ) ) {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e09311e))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e1da382))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e85a166))) ) ) {
                      result[0] += 92590780;
                      result[1] += 50574796;
                    } else {
                      result[0] += 143162282;
                      result[1] += 3293;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e872ceb))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          }
        } else {
          result[0] += 0;
          result[1] += 143165576;
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 143165576;
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
      if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
        if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f3a7f9d))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3e4710))) ) ) {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e068da3))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46e1c3))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6a0bb8))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e8e669f))) ) ) {
                      result[0] += 143152918;
                      result[1] += 12658;
                    } else {
                      result[0] += 141349522;
                      result[1] += 1816053;
                    }
                  }
                }
              } else {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                    if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f4ce450))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 142572758;
                      result[1] += 592818;
                    }
                  } else {
                    if ( ( !(data[48].missing != -1) || ((*( ((int*)(data)) + 48 ))<=((int)(0x3f495da8))) ) ) {
                      result[0] += 92136262;
                      result[1] += 51029314;
                    } else {
                      result[0] += 73388776;
                      result[1] += 69776800;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f431db8))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45783c))) ) ) {
                  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f448739))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de84e))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                      result[0] += 122789287;
                      result[1] += 20376288;
                    } else {
                      result[0] += 136965345;
                      result[1] += 6200231;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3eba4384))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb604a0))) ) ) {
                      result[0] += 141230906;
                      result[1] += 1934669;
                    } else {
                      result[0] += 35791394;
                      result[1] += 107374182;
                    }
                  } else {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 47721858;
                      result[1] += 95443717;
                    }
                  }
                } else {
                  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f497d8a))) ) ) {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6367e9))) ) ) {
                      result[0] += 49994328;
                      result[1] += 93171248;
                    } else {
                      result[0] += 9627186;
                      result[1] += 133538390;
                    }
                  } else {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 76500689;
                      result[1] += 66664886;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0dcf64))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f46e1c3))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f2fda6d))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x36d52000))) ) ) {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e248687))) ) ) {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1b4246))) ) ) {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e699500))) ) ) {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e939ec0))) ) ) {
                      result[0] += 112042625;
                      result[1] += 31122951;
                    } else {
                      result[0] += 142323426;
                      result[1] += 842150;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e83b2aa))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e8aa6bc))) ) ) {
                      result[0] += 142844217;
                      result[1] += 321359;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e932573))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f493c46))) ) ) {
          if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ecb3ef3))) ) ) {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f475a41))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3ea93112))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7288c2))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f51b565))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x36d53000))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d33cc3e))) ) ) {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eabc76e))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              result[0] += 143165576;
              result[1] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        }
      }
    }
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 143165576;
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8dbd57))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9eccae))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f4a3198))) ) ) {
              if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3f6a03f4))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e991248))) ) ) {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ebf8a7a))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              }
            } else {
              result[0] += 143165576;
              result[1] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae945bf))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
            if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f4c4920))) ) ) {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea6c904))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea5fc90))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f497d8a))) ) ) {
                      result[0] += 79536431;
                      result[1] += 63629145;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e667e74))) ) ) {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e7c951c))) ) ) {
                    if ( ( !(data[69].missing != -1) || ((*( ((int*)(data)) + 69 ))<=((int)(0x3f524826))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f479687))) ) ) {
                if ( ( !(data[70].missing != -1) || ((*( ((int*)(data)) + 70 ))<=((int)(0x3f717abc))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f47518b))) ) ) {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e699500))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e939ec0))) ) ) {
              if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aef3e00))) ) ) {
                if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f52a668))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              } else {
                if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
                  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e6a8ca7))) ) ) {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ebd251c))) ) ) {
                      result[0] += 106219621;
                      result[1] += 36945955;
                    } else {
                      result[0] += 141368519;
                      result[1] += 1797057;
                    }
                  } else {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e95378d))) ) ) {
                      result[0] += 123916423;
                      result[1] += 19249153;
                    } else {
                      result[0] += 40904450;
                      result[1] += 102261126;
                    }
                  }
                } else {
                  if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6383af))) ) ) {
                    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ecfe0a8))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 128943830;
                      result[1] += 14221746;
                    }
                  } else {
                    if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d728d94))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 58636964;
                      result[1] += 84528611;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0e208c))) ) ) {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ebf47ed))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7038ee))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6fc1dd))) ) ) {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb8b83e))) ) ) {
                      result[0] += 134744072;
                      result[1] += 8421504;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
                      result[0] += 13979130;
                      result[1] += 129186446;
                    } else {
                      result[0] += 112487238;
                      result[1] += 30678337;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e15d9b9))) ) ) {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[70].missing != -1) || ((*( ((int*)(data)) + 70 ))<=((int)(0x3f72c336))) ) ) {
                      result[0] += 140562566;
                      result[1] += 2603010;
                    } else {
                      result[0] += 85899345;
                      result[1] += 57266230;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e822724))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f37ac08))) ) ) {
                if ( ( !(data[68].missing != -1) || ((*( ((int*)(data)) + 68 ))<=((int)(0x3f5274ce))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e822724))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e7e6c80))) ) ) {
                      result[0] += 457398;
                      result[1] += 142708178;
                    } else {
                      result[0] += 26030104;
                      result[1] += 117135471;
                    }
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e6f5764))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 107374182;
                      result[1] += 35791394;
                    }
                  } else {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f497d8a))) ) ) {
                      result[0] += 10226112;
                      result[1] += 132939463;
                    } else {
                      result[0] += 114626033;
                      result[1] += 28539543;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3e4710))) ) ) {
              if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
                if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e8e669f))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[73].missing != -1) || ((*( ((int*)(data)) + 73 ))<=((int)(0x3f792d4e))) ) ) {
                    if ( ( !(data[70].missing != -1) || ((*( ((int*)(data)) + 70 ))<=((int)(0x3f6f438a))) ) ) {
                      result[0] += 131646507;
                      result[1] += 11519069;
                    } else {
                      result[0] += 140481221;
                      result[1] += 2684354;
                    }
                  } else {
                    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed41f6e))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3ea004c8))) ) ) {
                    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec1232a))) ) ) {
                      result[0] += 135823752;
                      result[1] += 7341824;
                    } else {
                      result[0] += 142442518;
                      result[1] += 723058;
                    }
                  } else {
                    if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed1c0bb))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 94489280;
                      result[1] += 48676296;
                    }
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6fc1dd))) ) ) {
                      result[0] += 101058054;
                      result[1] += 42107522;
                    } else {
                      result[0] += 23008753;
                      result[1] += 120156823;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e809c0e))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee78222))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed1c0bb))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 127299018;
                      result[1] += 15866558;
                    }
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f44ffbe))) ) ) {
        if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f427ee4))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e657868))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f40745c))) ) ) {
              if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e0d974c))) ) ) {
                if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e0b86fb))) ) ) {
                  if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae7f22c))) ) ) {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e1da382))) ) ) {
                      result[0] += 143137863;
                      result[1] += 27713;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1e4c31))) ) ) {
                      result[0] += 143103899;
                      result[1] += 61677;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            } else {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec25e78))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb32cca))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e988e00))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3aea6eca))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f4443c3))) ) ) {
    if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f36bc04))) ) ) {
      if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e79a066))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        result[0] += 143165576;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0d5b02))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0ee618))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
            if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f3f59a6))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7350da))) ) ) {
                  if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6347b6))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e822724))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 135248586;
                      result[1] += 7916990;
                    }
                  }
                } else {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea06598))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e7da6de))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f373418))) ) ) {
                    if ( ( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7f1122))) ) ) {
                      result[0] += 142320941;
                      result[1] += 844634;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    if ( ( !(data[68].missing != -1) || ((*( ((int*)(data)) + 68 ))<=((int)(0x3f51df8c))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 142150217;
                      result[1] += 1015358;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                  if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3af06737))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e6dbe7b))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 71582788;
                      result[1] += 71582788;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e809c0e))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7038ee))) ) ) {
                      result[0] += 141180685;
                      result[1] += 1984891;
                    } else {
                      result[0] += 131317918;
                      result[1] += 11847658;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[62].missing != -1) || ((*( ((int*)(data)) + 62 ))<=((int)(0x3f7e380c))) ) ) {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0dcf64))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f504bde))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
                      result[0] += 113690310;
                      result[1] += 29475265;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4fd360))) ) ) {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb7fb6c))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb9172e))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd358))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e138919))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 111738986;
                      result[1] += 31426589;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
          if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e657868))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec2bc12))) ) ) {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea6c904))) ) ) {
                if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3af165e6))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae79d48))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e7a447c))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e878f40))) ) ) {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb859e2))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0c9496))) ) ) {
                      result[0] += 138691652;
                      result[1] += 4473924;
                    } else {
                      result[0] += 99114629;
                      result[1] += 44050946;
                    }
                  } else {
                    if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f46d259))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 95443717;
                      result[1] += 47721858;
                    }
                  }
                } else {
                  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed1c0bb))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[70].missing != -1) || ((*( ((int*)(data)) + 70 ))<=((int)(0x3f6ee9ee))) ) ) {
                      result[0] += 119304647;
                      result[1] += 23860929;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
            if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e5f5eb9))) ) ) {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1072de))) ) ) {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                  if ( ( !(data[49].missing != -1) || ((*( ((int*)(data)) + 49 ))<=((int)(0x3f266bb4))) ) ) {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 28633115;
                      result[1] += 114532461;
                    }
                  } else {
                    if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f4eb49d))) ) ) {
                      result[0] += 139256618;
                      result[1] += 3908957;
                    } else {
                      result[0] += 122713351;
                      result[1] += 20452225;
                    }
                  }
                } else {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e96d05a))) ) ) {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f490576))) ) ) {
                      result[0] += 3904515;
                      result[1] += 139261060;
                    } else {
                      result[0] += 71582788;
                      result[1] += 71582788;
                    }
                  } else {
                    if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f38241d))) ) ) {
                      result[0] += 84741389;
                      result[1] += 58424187;
                    } else {
                      result[0] += 32395130;
                      result[1] += 110770446;
                    }
                  }
                }
              } else {
                if ( ( !(data[62].missing != -1) || ((*( ((int*)(data)) + 62 ))<=((int)(0x3f7e380c))) ) ) {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e978702))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f513ce0))) ) ) {
                      result[0] += 114532461;
                      result[1] += 28633115;
                    } else {
                      result[0] += 27531841;
                      result[1] += 115633734;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f37ac08))) ) ) {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
                    if ( ( !(data[64].missing != -1) || ((*( ((int*)(data)) + 64 ))<=((int)(0x3f35a2c5))) ) ) {
                      result[0] += 22369621;
                      result[1] += 120795955;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[68].missing != -1) || ((*( ((int*)(data)) + 68 ))<=((int)(0x3f525722))) ) ) {
                    if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f630b9a))) ) ) {
                      result[0] += 107374182;
                      result[1] += 35791394;
                    } else {
                      result[0] += 141301441;
                      result[1] += 1864135;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                  if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3e4710))) ) ) {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6cab8b))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e60f7a3))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 69114416;
                      result[1] += 74051160;
                    }
                  }
                } else {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eaf91cf))) ) ) {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6e36d0))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 3829531;
                      result[1] += 139336044;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb6df49))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea5fc90))) ) ) {
                if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed48240))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38850f88))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3ea8d23c))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e03eae8))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x36638000))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae945bf))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e9199ed))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        result[0] += 143165576;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1a7bda))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8dbd57))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
        if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d8aa9f0))) ) ) {
          if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae79d48))) ) ) {
            if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ebee51c))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e7b0a06))) ) ) {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6a5aa2))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e072ceb))) ) ) {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e834fe4))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9db3e0))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8aa64c))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e072ceb))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e92d24c))) ) ) {
                      result[0] += 114532461;
                      result[1] += 28633115;
                    } else {
                      result[0] += 26512143;
                      result[1] += 116653432;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9db3e0))) ) ) {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9cee3c))) ) ) {
                if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f630b9a))) ) ) {
                  if ( ( !(data[73].missing != -1) || ((*( ((int*)(data)) + 73 ))<=((int)(0x3f7995e8))) ) ) {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea9fad8))) ) ) {
                      result[0] += 71582788;
                      result[1] += 71582788;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f494192))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f4b7697))) ) ) {
                    if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f44ac16))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              }
            } else {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de84e))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e946b36))) ) ) {
                    if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f377010))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 65917963;
                      result[1] += 77247613;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
                      result[0] += 98241205;
                      result[1] += 44924370;
                    } else {
                      result[0] += 138691652;
                      result[1] += 4473924;
                    }
                  }
                }
              }
            }
          }
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea06598))) ) ) {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f386016))) ) ) {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                      result[0] += 124957485;
                      result[1] += 18208090;
                    } else {
                      result[0] += 137141779;
                      result[1] += 6023797;
                    }
                  } else {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9205d6))) ) ) {
                      result[0] += 134217727;
                      result[1] += 8947848;
                    } else {
                      result[0] += 141969206;
                      result[1] += 1196369;
                    }
                  }
                }
              } else {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb79c96))) ) ) {
                  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7288c2))) ) ) {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e805e98))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 129530759;
                      result[1] += 13634816;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea1fe82))) ) ) {
                      result[0] += 138932185;
                      result[1] += 4233390;
                    } else {
                      result[0] += 86372620;
                      result[1] += 56792955;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6ad143))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e822724))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 125954414;
                      result[1] += 17211162;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
                  if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3f687fd6))) ) ) {
                    if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f4811f3))) ) ) {
                      result[0] += 81808900;
                      result[1] += 61356675;
                    } else {
                      result[0] += 137863147;
                      result[1] += 5302428;
                    }
                  } else {
                    if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f4608a2))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                } else {
                  if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f464e4b))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aef92e5))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 107374182;
                      result[1] += 35791394;
                    }
                  }
                }
              } else {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
                    if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f4a1217))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 108621603;
                      result[1] += 34543972;
                    }
                  } else {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3eb97de0))) ) ) {
                      result[0] += 97474435;
                      result[1] += 45691141;
                    } else {
                      result[0] += 20965670;
                      result[1] += 122199906;
                    }
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f3d79d0))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec5d64a))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3aeb431c))) ) ) {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb32cca))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[75].missing != -1) || ((*( ((int*)(data)) + 75 ))<=((int)(0x38850f80))) ) ) {
                if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f472518))) ) ) {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea5fc90))) ) ) {
                    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f46693e))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 133212889;
                      result[1] += 9952687;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e9eccae))) ) ) {
                    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec1ef9e))) ) ) {
                      result[0] += 143122379;
                      result[1] += 43196;
                    } else {
                      result[0] += 141924256;
                      result[1] += 1241320;
                    }
                  } else {
                    if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f373418))) ) ) {
                      result[0] += 143087514;
                      result[1] += 78061;
                    } else {
                      result[0] += 143162489;
                      result[1] += 3087;
                    }
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eaebd00))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1b4246))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8b6c47))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 143165576;
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
      if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae61f2c))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec5d64a))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e809c0e))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f47d2be))) ) ) {
              if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e72bbd2))) ) ) {
                if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f38241d))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f4de63d))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f497d8a))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 137863147;
                      result[1] += 5302428;
                    }
                  }
                }
              } else {
                if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e576228))) ) ) {
                  if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f373418))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
                      result[0] += 141160456;
                      result[1] += 2005120;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6437bc))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 142750603;
                      result[1] += 414972;
                    }
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9db3e0))) ) ) {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8666f0))) ) ) {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
                    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f4e835f))) ) ) {
                      result[0] += 128095515;
                      result[1] += 15070060;
                    } else {
                      result[0] += 142438847;
                      result[1] += 726728;
                    }
                  } else {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e939ea3))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 31814572;
                      result[1] += 111351003;
                    }
                  }
                } else {
                  if ( ( !(data[68].missing != -1) || ((*( ((int*)(data)) + 68 ))<=((int)(0x3f4ed750))) ) ) {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec1232a))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 141892993;
                      result[1] += 1272582;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d374ba3))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7b0a06))) ) ) {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                      result[0] += 121977071;
                      result[1] += 21188505;
                    } else {
                      result[0] += 66441483;
                      result[1] += 76724093;
                    }
                  } else {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9a022c))) ) ) {
                      result[0] += 142976579;
                      result[1] += 188997;
                    } else {
                      result[0] += 131652260;
                      result[1] += 11513315;
                    }
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3f180c))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e988e00))) ) ) {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1e5870))) ) ) {
              if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3af09194))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7350da))) ) ) {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e96d076))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              }
            } else {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eaebd00))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            }
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
            if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae945bf))) ) ) {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb79c96))) ) ) {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e49292d))) ) ) {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7038ee))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 30878849;
                      result[1] += 112286726;
                    }
                  }
                } else {
                  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3eb4c670))) ) ) {
                    if ( ( !(data[68].missing != -1) || ((*( ((int*)(data)) + 68 ))<=((int)(0x3f4f4ebe))) ) ) {
                      result[0] += 34359738;
                      result[1] += 108805838;
                    } else {
                      result[0] += 3046076;
                      result[1] += 140119500;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f522de3))) ) ) {
                  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 76695844;
                      result[1] += 66469731;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e772d70))) ) ) {
                      result[0] += 132939463;
                      result[1] += 10226112;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3ebaf09e))) ) ) {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e5dc5d0))) ) ) {
                      result[0] += 135211933;
                      result[1] += 7953643;
                    } else {
                      result[0] += 20452225;
                      result[1] += 122713351;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              }
            } else {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e072ceb))) ) ) {
                      result[0] += 139494664;
                      result[1] += 3670912;
                    } else {
                      result[0] += 108853165;
                      result[1] += 34312410;
                    }
                  } else {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9db3df))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                }
              } else {
                if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e8dbd57))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e822724))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 2196914;
                      result[1] += 140968662;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de84e))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f2cffc6))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e90719e))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7288c2))) ) ) {
                      result[0] += 142140035;
                      result[1] += 1025541;
                    } else {
                      result[0] += 136240135;
                      result[1] += 6925440;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f480f05))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea06598))) ) ) {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e96d05a))) ) ) {
                      result[0] += 136241002;
                      result[1] += 6924574;
                    } else {
                      result[0] += 121400539;
                      result[1] += 21765036;
                    }
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f490576))) ) ) {
                      result[0] += 135211933;
                      result[1] += 7953643;
                    } else {
                      result[0] += 142624648;
                      result[1] += 540927;
                    }
                  } else {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e72d830))) ) ) {
                      result[0] += 102261126;
                      result[1] += 40904450;
                    } else {
                      result[0] += 135074586;
                      result[1] += 8090990;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8c31d2))) ) ) {
          if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
            if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
              if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f485745))) ) ) {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
                    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec1ef9e))) ) ) {
                      result[0] += 84689495;
                      result[1] += 58476080;
                    } else {
                      result[0] += 13015052;
                      result[1] += 130150524;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9e6674))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          } else {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e80fed4))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e08b800))) ) ) {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3ebaf09e))) ) ) {
                    if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f424b50))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 129083716;
                      result[1] += 14081859;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f386016))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 12449180;
                      result[1] += 130716395;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x36d52000))) ) ) {
            if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d33cc3e))) ) ) {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e1da382))) ) ) {
                if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f533c24))) ) ) {
                  if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f4f1bcd))) ) ) {
                    if ( ( !(data[70].missing != -1) || ((*( ((int*)(data)) + 70 ))<=((int)(0x3f6e9078))) ) ) {
                      result[0] += 142946501;
                      result[1] += 219075;
                    } else {
                      result[0] += 143159787;
                      result[1] += 5788;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1b4246))) ) ) {
                      result[0] += 135823752;
                      result[1] += 7341824;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        }
      }
    }
  }
  if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f4443c3))) ) ) {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f475a41))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f44ffbe))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f338622))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae1a506))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dc55866))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f36012c))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
      if ( ( !(data[62].missing != -1) || ((*( ((int*)(data)) + 62 ))<=((int)(0x3f7e4c4f))) ) ) {
        if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d728d94))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f448739))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0bd498))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3fc622))) ) ) {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                      result[0] += 7953643;
                      result[1] += 135211933;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                } else {
                  if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f470cdc))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                }
              } else {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
                  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed0a64a))) ) ) {
                    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f522de3))) ) ) {
                      result[0] += 113416885;
                      result[1] += 29748691;
                    } else {
                      result[0] += 81212239;
                      result[1] += 61953336;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 77521028;
                      result[1] += 65644547;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 141800601;
                      result[1] += 1364975;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        result[0] += 0;
        result[1] += 143165576;
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e1da382))) ) ) {
          if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f4d1bb4))) ) ) {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e91fcb2))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[75].missing != -1) || ((*( ((int*)(data)) + 75 ))<=((int)(0x38850f88))) ) ) {
                if ( ( !(data[70].missing != -1) || ((*( ((int*)(data)) + 70 ))<=((int)(0x3f6e54ac))) ) ) {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb1c5be))) ) ) {
                    if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae8f0da))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 107374182;
                      result[1] += 35791394;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1b4246))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e988e00))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e21705c))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 143145837;
                      result[1] += 19738;
                    }
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            }
          } else {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              result[0] += 143165576;
              result[1] += 0;
            }
          }
        } else {
          result[0] += 0;
          result[1] += 143165576;
        }
      }
    }
  }
  if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aeee91c))) ) ) {
    if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec8b260))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f431db8))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f3b0fd0))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      }
    } else {
      result[0] += 143165576;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
      result[0] += 0;
      result[1] += 143165576;
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3eba4384))) ) ) {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e77f2fc))) ) ) {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f386016))) ) ) {
                    if ( ( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7d7e2e))) ) ) {
                      result[0] += 139075131;
                      result[1] += 4090445;
                    } else {
                      result[0] += 91105366;
                      result[1] += 52060209;
                    }
                  } else {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 125812173;
                      result[1] += 17353403;
                    }
                  }
                }
              } else {
                if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec52565))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9e7982))) ) ) {
                    if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dc55866))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 142990984;
                      result[1] += 174592;
                    }
                  } else {
                    if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f482198))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 128095515;
                      result[1] += 15070060;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3de10940))) ) ) {
                if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae945bf))) ) ) {
                  if ( ( !(data[69].missing != -1) || ((*( ((int*)(data)) + 69 ))<=((int)(0x3f510ea8))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8666f0))) ) ) {
                      result[0] += 47721858;
                      result[1] += 95443717;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec1ef9e))) ) ) {
                      result[0] += 143109344;
                      result[1] += 56231;
                    } else {
                      result[0] += 142911156;
                      result[1] += 254419;
                    }
                  }
                } else {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
                      result[0] += 143012722;
                      result[1] += 152854;
                    } else {
                      result[0] += 138618514;
                      result[1] += 4547061;
                    }
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            }
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e4f5644))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e925fe8))) ) ) {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
              if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6ad143))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f49b983))) ) ) {
                    if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae945bf))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 139369519;
                      result[1] += 3796056;
                    }
                  } else {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea2caf8))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 135630546;
                      result[1] += 7535030;
                    }
                  }
                }
              } else {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                  if ( ( !(data[49].missing != -1) || ((*( ((int*)(data)) + 49 ))<=((int)(0x3f266bb4))) ) ) {
                    if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f373418))) ) ) {
                      result[0] += 99420539;
                      result[1] += 43745037;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f377010))) ) ) {
                      result[0] += 123515399;
                      result[1] += 19650177;
                    } else {
                      result[0] += 141685828;
                      result[1] += 1479747;
                    }
                  }
                } else {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e805e98))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 136940986;
                      result[1] += 6224590;
                    }
                  } else {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 69998460;
                      result[1] += 73167115;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45783c))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3e0142))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
                      result[0] += 2049696;
                      result[1] += 141115880;
                    } else {
                      result[0] += 243989;
                      result[1] += 142921586;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea5fc90))) ) ) {
                if ( ( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38850440))) ) ) {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e9eccae))) ) ) {
                    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f515378))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 132774526;
                      result[1] += 10391049;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1b4246))) ) ) {
                      result[0] += 137990917;
                      result[1] += 5174659;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3f5db6))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e18f0c4))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f4443c3))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4fd360))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f2f1536))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e99d7ce))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        } else {
          result[0] += 0;
          result[1] += 143165576;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0c7d46))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
            if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f2af1fa))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8666f0))) ) ) {
                if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e95378d))) ) ) {
                  if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6347b6))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f416dee))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 142093175;
                      result[1] += 1072401;
                    }
                  }
                } else {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
                      result[0] += 110127366;
                      result[1] += 33038209;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                }
              } else {
                if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f373418))) ) ) {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e7da6de))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f43600d))) ) ) {
                      result[0] += 139015849;
                      result[1] += 4149726;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec2bc12))) ) ) {
                  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec1232a))) ) ) {
                      result[0] += 80004292;
                      result[1] += 63161283;
                    } else {
                      result[0] += 128244093;
                      result[1] += 14921482;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e64a32c))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 142640198;
                      result[1] += 525378;
                    }
                  }
                } else {
                  if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6347b6))) ) ) {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
                      result[0] += 107281698;
                      result[1] += 35883878;
                    } else {
                      result[0] += 124656631;
                      result[1] += 18508945;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de84e))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 141197664;
                      result[1] += 1967911;
                    }
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e946b36))) ) ) {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e96d05a))) ) ) {
                      result[0] += 95443717;
                      result[1] += 47721858;
                    } else {
                      result[0] += 142190001;
                      result[1] += 975574;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 141424961;
                      result[1] += 1740614;
                    } else {
                      result[0] += 76485718;
                      result[1] += 66679857;
                    }
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                    if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f630b9a))) ) ) {
                      result[0] += 14060904;
                      result[1] += 129104671;
                    } else {
                      result[0] += 123543898;
                      result[1] += 19621677;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
                      result[0] += 10894320;
                      result[1] += 132271256;
                    } else {
                      result[0] += 51746593;
                      result[1] += 91418982;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e93e337))) ) ) {
                if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee74630))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d8aa9f0))) ) ) {
                    if ( ( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f46180c))) ) ) {
                      result[0] += 95443717;
                      result[1] += 47721858;
                    } else {
                      result[0] += 139456166;
                      result[1] += 3709410;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb8b858))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x36e36000))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e93eafe))) ) ) {
                      result[0] += 137990917;
                      result[1] += 5174659;
                    } else {
                      result[0] += 142899963;
                      result[1] += 265613;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3ea757a2))) ) ) {
      result[0] += 0;
      result[1] += 143165576;
    } else {
      if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f34c4b1))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e049398))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1b4246))) ) ) {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x36638000))) ) ) {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e05e4f4))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
      result[0] += 0;
      result[1] += 143165576;
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e913728))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
      result[0] += 0;
      result[1] += 143165576;
    } else {
      if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f3bc354))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e97c804))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              result[0] += 143165576;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6244f4))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dc55866))) ) ) {
                if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee74630))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f4653b0))) ) ) {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ebdf190))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e138919))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 102261126;
                      result[1] += 40904450;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              }
            }
          }
        } else {
          if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f630b9a))) ) ) {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e77f2fc))) ) ) {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e7038ee))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
                      result[0] += 124343808;
                      result[1] += 18821768;
                    } else {
                      result[0] += 142329573;
                      result[1] += 836003;
                    }
                  }
                }
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae945bf))) ) ) {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb28b60))) ) ) {
                      result[0] += 96226043;
                      result[1] += 46939533;
                    } else {
                      result[0] += 1560387;
                      result[1] += 141605188;
                    }
                  } else {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea2caf8))) ) ) {
                      result[0] += 434493;
                      result[1] += 142731083;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
                  if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f522142))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f443d70))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e87f206))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e822724))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 1363481;
                      result[1] += 141802094;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb5063a))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9f3f24))) ) ) {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e991248))) ) ) {
                      result[0] += 142774413;
                      result[1] += 391162;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
                      result[0] += 119304647;
                      result[1] += 23860929;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f4514c0))) ) ) {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0dcf64))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1d92e6))) ) ) {
                    if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f38f638))) ) ) {
                      result[0] += 196656;
                      result[1] += 142968920;
                    } else {
                      result[0] += 10804949;
                      result[1] += 132360627;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e979cce))) ) ) {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 134946258;
                      result[1] += 8219318;
                    }
                  } else {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f490576))) ) ) {
                      result[0] += 133895862;
                      result[1] += 9269713;
                    } else {
                      result[0] += 142305436;
                      result[1] += 860140;
                    }
                  }
                } else {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb9172e))) ) ) {
                      result[0] += 135151218;
                      result[1] += 8014357;
                    } else {
                      result[0] += 108976782;
                      result[1] += 34188794;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed8efbc))) ) ) {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6568b6))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 141650596;
                      result[1] += 1514979;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e81619a))) ) ) {
                      result[0] += 72884293;
                      result[1] += 70281283;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
                      result[0] += 100746146;
                      result[1] += 42419430;
                    } else {
                      result[0] += 5476278;
                      result[1] += 137689297;
                    }
                  }
                }
              } else {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[44].missing != -1) || ((*( ((int*)(data)) + 44 ))<=((int)(0x36552000))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
                      result[0] += 142178227;
                      result[1] += 987348;
                    } else {
                      result[0] += 143154481;
                      result[1] += 11094;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
      if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3ce09f37))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 143165576;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e81243a))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3ebf480a))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
            if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f30cc6a))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e809c0e))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e08b800))) ) ) {
                      result[0] += 142567479;
                      result[1] += 598097;
                    } else {
                      result[0] += 143131109;
                      result[1] += 34466;
                    }
                  } else {
                    if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d3fb56c))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 135436749;
                      result[1] += 7728826;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1d92e6))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e80fed4))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
                      result[0] += 88828806;
                      result[1] += 54336769;
                    } else {
                      result[0] += 140494764;
                      result[1] += 2670811;
                    }
                  }
                } else {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e95fbbc))) ) ) {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e4f5644))) ) ) {
                      result[0] += 95716414;
                      result[1] += 47449162;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                      result[0] += 767643;
                      result[1] += 142397932;
                    } else {
                      result[0] += 75015413;
                      result[1] += 68150163;
                    }
                  }
                }
              } else {
                if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f50ec1a))) ) ) {
                  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x36552000))) ) ) {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e1da382))) ) ) {
                      result[0] += 142930053;
                      result[1] += 235522;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              }
            }
          }
        } else {
          result[0] += 0;
          result[1] += 143165576;
        }
      } else {
        if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec96f46))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8d5a92))) ) ) {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0a43f6))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            } else {
              result[0] += 143165576;
              result[1] += 0;
            }
          }
        }
      }
    }
  } else {
    result[0] += 0;
    result[1] += 143165576;
  }
  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
    result[0] += 0;
    result[1] += 143165576;
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
      if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aec176e))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edb6efb))) ) ) {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
              if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed16bed))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                  if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3f6790f8))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 136850670;
                      result[1] += 6314906;
                    }
                  }
                } else {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                      result[0] += 115633734;
                      result[1] += 27531841;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7350da))) ) ) {
                      result[0] += 41902119;
                      result[1] += 101263456;
                    } else {
                      result[0] += 8282306;
                      result[1] += 134883270;
                    }
                  }
                }
              } else {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de84e))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 132679477;
                      result[1] += 10486098;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                      result[0] += 132956825;
                      result[1] += 10208750;
                    } else {
                      result[0] += 12535234;
                      result[1] += 130630341;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
                if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f427ee4))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f2af1fa))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
                      result[0] += 143154992;
                      result[1] += 10583;
                    } else {
                      result[0] += 142514231;
                      result[1] += 651344;
                    }
                  }
                }
              } else {
                if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3e4710))) ) ) {
                  if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f483d5c))) ) ) {
                    if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3f682638))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb6df49))) ) ) {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9f9924))) ) ) {
                      result[0] += 25264513;
                      result[1] += 117901063;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              }
            }
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f455a69))) ) ) {
        if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edd01ac))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
              if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f373418))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e822724))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e4ab473))) ) ) {
                      result[0] += 2336035;
                      result[1] += 140829541;
                    } else {
                      result[0] += 63629145;
                      result[1] += 79536431;
                    }
                  }
                }
              } else {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9cee3c))) ) ) {
                    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f4e1c74))) ) ) {
                      result[0] += 59652323;
                      result[1] += 83513252;
                    } else {
                      result[0] += 135314561;
                      result[1] += 7851015;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                      result[0] += 128095515;
                      result[1] += 15070060;
                    } else {
                      result[0] += 43745037;
                      result[1] += 99420539;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d3b5afc))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 4082114;
                      result[1] += 139083462;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eb7f45f))) ) ) {
                if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9205d6))) ) ) {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec386ec))) ) ) {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e77f2fc))) ) ) {
                      result[0] += 110442016;
                      result[1] += 32723560;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809b9f))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[70].missing != -1) || ((*( ((int*)(data)) + 70 ))<=((int)(0x3f6e54ac))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e08b800))) ) ) {
                      result[0] += 35791394;
                      result[1] += 107374182;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d8aa9f0))) ) ) {
                      result[0] += 140487308;
                      result[1] += 2678267;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            }
          }
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f40745c))) ) ) {
          if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d258d46))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d728d94))) ) ) {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e938838))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e969fb4))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eafd8c2))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae945bf))) ) ) {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                  if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f36f7fc))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb79c96))) ) ) {
                    if ( ( !(data[70].missing != -1) || ((*( ((int*)(data)) + 70 ))<=((int)(0x3f728792))) ) ) {
                      result[0] += 4090445;
                      result[1] += 139075131;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                  if ( ( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7e8ade))) ) ) {
                    if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f37ac08))) ) ) {
                      result[0] += 95443717;
                      result[1] += 47721858;
                    } else {
                      result[0] += 138471623;
                      result[1] += 4693953;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7b0a06))) ) ) {
                      result[0] += 2202547;
                      result[1] += 140963029;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb859e2))) ) ) {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0bd498))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          } else {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8c31d2))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x36552000))) ) ) {
                if ( ( !(data[75].missing != -1) || ((*( ((int*)(data)) + 75 ))<=((int)(0x38850f80))) ) ) {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1b4246))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e988e00))) ) ) {
                      result[0] += 142644216;
                      result[1] += 521360;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    if ( ( !(data[68].missing != -1) || ((*( ((int*)(data)) + 68 ))<=((int)(0x3f4ed750))) ) ) {
                      result[0] += 142942692;
                      result[1] += 222883;
                    } else {
                      result[0] += 143158495;
                      result[1] += 7080;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
    if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee74dea))) ) ) {
      result[0] += 0;
      result[1] += 143165576;
    } else {
      result[0] += 143165576;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
      if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee58c9f))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        result[0] += 143165576;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f3e61f6))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
          if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f369df6))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4ea618))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
                if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ece5562))) ) ) {
                  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d86ed08))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec1ef9e))) ) ) {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ebdf190))) ) ) {
                    if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f63bfa7))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 143119719;
                      result[1] += 45857;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb1c5be))) ) ) {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea463a6))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 141281818;
                      result[1] += 1883757;
                    }
                  } else {
                    if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f45b528))) ) ) {
                      result[0] += 142910682;
                      result[1] += 254894;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e08b800))) ) ) {
                  if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3e4710))) ) ) {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e9603e4))) ) ) {
                      result[0] += 141766564;
                      result[1] += 1399012;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6e36d0))) ) ) {
                      result[0] += 48905045;
                      result[1] += 94260531;
                    } else {
                      result[0] += 137959555;
                      result[1] += 5206020;
                    }
                  }
                } else {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea2caf8))) ) ) {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 135730967;
                      result[1] += 7434609;
                    }
                  } else {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 142320443;
                      result[1] += 845133;
                    }
                  }
                }
              } else {
                if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e072ceb))) ) ) {
                      result[0] += 31122951;
                      result[1] += 112042625;
                    } else {
                      result[0] += 133729663;
                      result[1] += 9435912;
                    }
                  } else {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ebc946c))) ) ) {
                      result[0] += 100089208;
                      result[1] += 43076368;
                    } else {
                      result[0] += 51783293;
                      result[1] += 91382282;
                    }
                  }
                } else {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
                      result[0] += 129357729;
                      result[1] += 13807847;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                      result[0] += 93057624;
                      result[1] += 50107951;
                    } else {
                      result[0] += 22224259;
                      result[1] += 120941317;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x36638000))) ) ) {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e10712c))) ) ) {
                  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea9fad8))) ) ) {
                      result[0] += 142131890;
                      result[1] += 1033686;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0c9578))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 43493339;
                      result[1] += 99672236;
                    }
                  }
                } else {
                  if ( ( !(data[66].missing != -1) || ((*( ((int*)(data)) + 66 ))<=((int)(0x37037800))) ) ) {
                    if ( ( !(data[75].missing != -1) || ((*( ((int*)(data)) + 75 ))<=((int)(0x38850f80))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 143165576;
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
    

    FILE* file = fopen("./codegen/esa_3_months_global/split_0/test_data.csv", "r");
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
