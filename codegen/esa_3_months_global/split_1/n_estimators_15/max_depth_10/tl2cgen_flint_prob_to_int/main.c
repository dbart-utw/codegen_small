
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
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae89bf6))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f44ffbe))) ) ) {
        result[0] += 0;
        result[1] += 286331153;
      } else {
        if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f36a666))) ) ) {
          result[0] += 0;
          result[1] += 286331153;
        } else {
          result[0] += 286331153;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
        result[0] += 0;
        result[1] += 286331153;
      } else {
        if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
          if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd59576))) ) ) {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de84e))) ) ) {
              result[0] += 0;
              result[1] += 286331153;
            } else {
              if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee74630))) ) ) {
                result[0] += 0;
                result[1] += 286331153;
              } else {
                if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed1c0bb))) ) ) {
                  if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f2f8954))) ) ) {
                    result[0] += 0;
                    result[1] += 286331153;
                  } else {
                    if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec8b260))) ) ) {
                      result[0] += 286251726;
                      result[1] += 79426;
                    } else {
                      result[0] += 286331153;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6e36d0))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e08b800))) ) ) {
                      result[0] += 233660862;
                      result[1] += 52670290;
                    } else {
                      result[0] += 278604406;
                      result[1] += 7726746;
                    }
                  } else {
                    if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f4a7947))) ) ) {
                      result[0] += 285091624;
                      result[1] += 1239528;
                    } else {
                      result[0] += 286331153;
                      result[1] += 0;
                    }
                  }
                }
              }
            }
          } else {
            result[0] += 0;
            result[1] += 286331153;
          }
        } else {
          if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f490576))) ) ) {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7038ee))) ) ) {
              result[0] += 286331153;
              result[1] += 0;
            } else {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += 286331153;
                result[1] += 0;
              } else {
                if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e58fb12))) ) ) {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e978702))) ) ) {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
                      result[0] += 269488144;
                      result[1] += 16843009;
                    } else {
                      result[0] += 104120419;
                      result[1] += 182210733;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 8316672;
                      result[1] += 278014480;
                    }
                  }
                } else {
                  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea2dade))) ) ) {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec056d2))) ) ) {
                      result[0] += 95443717;
                      result[1] += 190887435;
                    } else {
                      result[0] += 0;
                      result[1] += 286331153;
                    }
                  } else {
                    result[0] += 286331153;
                    result[1] += 0;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f45783c))) ) ) {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f36f7fc))) ) ) {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
                    result[0] += 286331153;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 286331153;
                  }
                } else {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                    result[0] += 286331153;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e9f9924))) ) ) {
                      result[0] += 243754029;
                      result[1] += 42577123;
                    } else {
                      result[0] += 281538999;
                      result[1] += 4792153;
                    }
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e91fcb2))) ) ) {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e09da8c))) ) ) {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e6c2591))) ) ) {
                      result[0] += 198441860;
                      result[1] += 87889292;
                    } else {
                      result[0] += 119458588;
                      result[1] += 166872564;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 50596669;
                      result[1] += 235734483;
                    }
                  }
                } else {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb9172e))) ) ) {
                    result[0] += 0;
                    result[1] += 286331153;
                  } else {
                    if ( ( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7ab16e))) ) ) {
                      result[0] += 283964779;
                      result[1] += 2366373;
                    } else {
                      result[0] += 286331153;
                      result[1] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7350da))) ) ) {
                  result[0] += 286331153;
                  result[1] += 0;
                } else {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eab93a4))) ) ) {
                    result[0] += 0;
                    result[1] += 286331153;
                  } else {
                    result[0] += 286331153;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f462cff))) ) ) {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb09d49))) ) ) {
                    result[0] += 286331153;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3aea446e))) ) ) {
                      result[0] += 9269713;
                      result[1] += 277061439;
                    } else {
                      result[0] += 286331153;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb680d2))) ) ) {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e49292d))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 60280242;
                      result[1] += 226050910;
                    }
                  } else {
                    result[0] += 286331153;
                    result[1] += 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[75].missing != -1) || ((*( ((int*)(data)) + 75 ))<=((int)(0x3886cbc0))) ) ) {
      if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
        result[0] += 0;
        result[1] += 286331153;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3ea873c5))) ) ) {
            result[0] += 0;
            result[1] += 286331153;
          } else {
            result[0] += 286331153;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e03eae8))) ) ) {
            result[0] += 0;
            result[1] += 286331153;
          } else {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e932573))) ) ) {
              result[0] += 0;
              result[1] += 286331153;
            } else {
              result[0] += 286331153;
              result[1] += 0;
            }
          }
        }
      }
    } else {
      result[0] += 0;
      result[1] += 286331153;
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 286331153;
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1ccd5a))) ) ) {
        result[0] += 0;
        result[1] += 286331153;
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
          result[0] += 0;
          result[1] += 286331153;
        } else {
          if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f40ba05))) ) ) {
            result[0] += 286331153;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 286331153;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
        if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
            result[0] += 0;
            result[1] += 286331153;
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7350da))) ) ) {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7038ee))) ) ) {
                if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee78222))) ) ) {
                  result[0] += 0;
                  result[1] += 286331153;
                } else {
                  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e10640f))) ) ) {
                    if ( ( !(data[69].missing != -1) || ((*( ((int*)(data)) + 69 ))<=((int)(0x3f5505c4))) ) ) {
                      result[0] += 284520567;
                      result[1] += 1810585;
                    } else {
                      result[0] += 266984453;
                      result[1] += 19346699;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 286331153;
                  }
                }
              } else {
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea9fad8))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e822724))) ) ) {
                    result[0] += 286331153;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb4dc48))) ) ) {
                      result[0] += 242280206;
                      result[1] += 44050946;
                    } else {
                      result[0] += 48737217;
                      result[1] += 237593935;
                    }
                  }
                } else {
                  result[0] += 286331153;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9db3e0))) ) ) {
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea9fad8))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e822724))) ) ) {
                    result[0] += 286331153;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 286331153;
                  }
                } else {
                  result[0] += 286331153;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e913962))) ) ) {
                  if ( ( !(data[69].missing != -1) || ((*( ((int*)(data)) + 69 ))<=((int)(0x3f54615e))) ) ) {
                    result[0] += 286331153;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7ba04c))) ) ) {
                      result[0] += 0;
                      result[1] += 286331153;
                    } else {
                      result[0] += 286331153;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e08b800))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e828a5a))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 15907286;
                      result[1] += 270423866;
                    }
                  } else {
                    if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6383af))) ) ) {
                      result[0] += 15070060;
                      result[1] += 271261092;
                    } else {
                      result[0] += 286331153;
                      result[1] += 0;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                result[0] += 0;
                result[1] += 286331153;
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                  if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6383af))) ) ) {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                      result[0] += 0;
                      result[1] += 286331153;
                    } else {
                      result[0] += 280753273;
                      result[1] += 5577879;
                    }
                  } else {
                    result[0] += 286331153;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                    result[0] += 0;
                    result[1] += 286331153;
                  } else {
                    if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f49aae7))) ) ) {
                      result[0] += 0;
                      result[1] += 286331153;
                    } else {
                      result[0] += 245777813;
                      result[1] += 40553339;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f386016))) ) ) {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                  result[0] += 0;
                  result[1] += 286331153;
                } else {
                  if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae79d48))) ) ) {
                    if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d728d94))) ) ) {
                      result[0] += 0;
                      result[1] += 286331153;
                    } else {
                      result[0] += 248073963;
                      result[1] += 38257189;
                    }
                  } else {
                    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed0a64a))) ) ) {
                      result[0] += 234195711;
                      result[1] += 52135441;
                    } else {
                      result[0] += 197595939;
                      result[1] += 88735213;
                    }
                  }
                }
              } else {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e790546))) ) ) {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                      result[0] += 278486463;
                      result[1] += 7844689;
                    } else {
                      result[0] += 59652323;
                      result[1] += 226678829;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 286331153;
                    }
                  }
                } else {
                  if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae945bf))) ) ) {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0d5b02))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 286331153;
                    }
                  } else {
                    result[0] += 286331153;
                    result[1] += 0;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
              result[0] += 0;
              result[1] += 286331153;
            } else {
              if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f377010))) ) ) {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7038ee))) ) ) {
                  result[0] += 286331153;
                  result[1] += 0;
                } else {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0a43f6))) ) ) {
                    result[0] += 286331153;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[51].missing != -1) || ((*( ((int*)(data)) + 51 ))<=((int)(0x3f0cd768))) ) ) {
                      result[0] += 35791394;
                      result[1] += 250539758;
                    } else {
                      result[0] += 0;
                      result[1] += 286331153;
                    }
                  }
                }
              } else {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                  result[0] += 0;
                  result[1] += 286331153;
                } else {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                    result[0] += 286331153;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[70].missing != -1) || ((*( ((int*)(data)) + 70 ))<=((int)(0x3f6e9078))) ) ) {
                      result[0] += 93224096;
                      result[1] += 193107056;
                    } else {
                      result[0] += 202667642;
                      result[1] += 83663510;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f324a3c))) ) ) {
          result[0] += 0;
          result[1] += 286331153;
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
            result[0] += 0;
            result[1] += 286331153;
          } else {
            if ( ( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38850440))) ) ) {
              if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
                if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec52565))) ) ) {
                  result[0] += 0;
                  result[1] += 286331153;
                } else {
                  if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee76429))) ) ) {
                    result[0] += 0;
                    result[1] += 286331153;
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8666f0))) ) ) {
                      result[0] += 0;
                      result[1] += 286331153;
                    } else {
                      result[0] += 286331153;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e1da382))) ) ) {
                  if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee74630))) ) ) {
                    result[0] += 0;
                    result[1] += 286331153;
                  } else {
                    if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f4514c0))) ) ) {
                      result[0] += 282583151;
                      result[1] += 3748001;
                    } else {
                      result[0] += 286138395;
                      result[1] += 192757;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 286331153;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 286331153;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 286331153;
  } else {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f522de3))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
          result[0] += 0;
          result[1] += 286331153;
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e92c31e))) ) ) {
            result[0] += 0;
            result[1] += 286331153;
          } else {
            result[0] += 286331153;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea59655))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1ccd5a))) ) ) {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                result[0] += 0;
                result[1] += 286331153;
              } else {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9db3e0))) ) ) {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                    result[0] += 0;
                    result[1] += 286331153;
                  } else {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e984ca4))) ) ) {
                      result[0] += 278153913;
                      result[1] += 8177239;
                    } else {
                      result[0] += 258975630;
                      result[1] += 27355522;
                    }
                  }
                } else {
                  if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aef92e5))) ) ) {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e65c1ea))) ) ) {
                      result[0] += 267368824;
                      result[1] += 18962328;
                    } else {
                      result[0] += 150769211;
                      result[1] += 135561941;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 250143961;
                      result[1] += 36187191;
                    } else {
                      result[0] += 178770232;
                      result[1] += 107560920;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec5d64a))) ) ) {
                result[0] += 0;
                result[1] += 286331153;
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e81619a))) ) ) {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e4ab473))) ) ) {
                    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed23173))) ) ) {
                      result[0] += 283086607;
                      result[1] += 3244545;
                    } else {
                      result[0] += 0;
                      result[1] += 286331153;
                    }
                  } else {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e7a9052))) ) ) {
                      result[0] += 0;
                      result[1] += 286331153;
                    } else {
                      result[0] += 286331153;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                    result[0] += 0;
                    result[1] += 286331153;
                  } else {
                    if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f2f8954))) ) ) {
                      result[0] += 0;
                      result[1] += 286331153;
                    } else {
                      result[0] += 286166348;
                      result[1] += 164804;
                    }
                  }
                }
              }
            }
          } else {
            result[0] += 286331153;
            result[1] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 286331153;
        }
      }
    } else {
      if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f40745c))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
            result[0] += 0;
            result[1] += 286331153;
          } else {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e900e68))) ) ) {
              result[0] += 0;
              result[1] += 286331153;
            } else {
              result[0] += 286331153;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
            if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e822724))) ) ) {
                result[0] += 286331153;
                result[1] += 0;
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e91fd23))) ) ) {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e741665))) ) ) {
                    result[0] += 286331153;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 286331153;
                  }
                } else {
                  result[0] += 286331153;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
                if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f504bde))) ) ) {
                  result[0] += 286331153;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 286331153;
                }
              } else {
                if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edd2005))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                    if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aef3e00))) ) ) {
                      result[0] += 95443717;
                      result[1] += 190887435;
                    } else {
                      result[0] += 276156949;
                      result[1] += 10174203;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
                      result[0] += 161061273;
                      result[1] += 125269879;
                    } else {
                      result[0] += 0;
                      result[1] += 286331153;
                    }
                  }
                } else {
                  result[0] += 286331153;
                  result[1] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3eabf9c1))) ) ) {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e809c0e))) ) ) {
                result[0] += 0;
                result[1] += 286331153;
              } else {
                if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e0d690c))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
                      result[0] += 161061273;
                      result[1] += 125269879;
                    } else {
                      result[0] += 259283584;
                      result[1] += 27047568;
                    }
                  } else {
                    result[0] += 286331153;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 286331153;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 286331153;
            }
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8c31d2))) ) ) {
          if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d728d94))) ) ) {
            result[0] += 0;
            result[1] += 286331153;
          } else {
            if ( ( !(data[63].missing != -1) || ((*( ((int*)(data)) + 63 ))<=((int)(0x3f7f0ae2))) ) ) {
              result[0] += 0;
              result[1] += 286331153;
            } else {
              result[0] += 286331153;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3f180c))) ) ) {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
              result[0] += 0;
              result[1] += 286331153;
            } else {
              if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f490576))) ) ) {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3ea4c0e7))) ) ) {
                  result[0] += 0;
                  result[1] += 286331153;
                } else {
                  result[0] += 286331153;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e9603e4))) ) ) {
                  result[0] += 286331153;
                  result[1] += 0;
                } else {
                  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d0c9e6c))) ) ) {
                    result[0] += 286331153;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 286331153;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f5308af))) ) ) {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e988e00))) ) ) {
                if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f418b01))) ) ) {
                  if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f501dba))) ) ) {
                    if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d33cc3e))) ) ) {
                      result[0] += 286262835;
                      result[1] += 68317;
                    } else {
                      result[0] += 0;
                      result[1] += 286331153;
                    }
                  } else {
                    if ( ( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38850f88))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 286331153;
                    }
                  }
                } else {
                  if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f462b65))) ) ) {
                    result[0] += 286331153;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edd04c2))) ) ) {
                      result[0] += 0;
                      result[1] += 286331153;
                    } else {
                      result[0] += 286331153;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 286331153;
              }
            } else {
              result[0] += 0;
              result[1] += 286331153;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0dcf64))) ) ) {
      if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ecd3ffc))) ) ) {
        result[0] += 0;
        result[1] += 286331153;
      } else {
        if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3aea6eca))) ) ) {
          result[0] += 286331153;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 286331153;
        }
      }
    } else {
      if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d728d94))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb5c326))) ) ) {
          result[0] += 0;
          result[1] += 286331153;
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e182b3a))) ) ) {
            result[0] += 0;
            result[1] += 286331153;
          } else {
            if ( ( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x36d53000))) ) ) {
              result[0] += 286331153;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 286331153;
            }
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9eccae))) ) ) {
            result[0] += 0;
            result[1] += 286331153;
          } else {
            if ( ( !(data[62].missing != -1) || ((*( ((int*)(data)) + 62 ))<=((int)(0x3f7e380c))) ) ) {
              result[0] += 0;
              result[1] += 286331153;
            } else {
              if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f470cdc))) ) ) {
                result[0] += 0;
                result[1] += 286331153;
              } else {
                if ( ( !(data[68].missing != -1) || ((*( ((int*)(data)) + 68 ))<=((int)(0x3f4ec87a))) ) ) {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3eb9e0b2))) ) ) {
                    result[0] += 0;
                    result[1] += 286331153;
                  } else {
                    result[0] += 286331153;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f46f076))) ) ) {
                    if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f386016))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 286331153;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 286331153;
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f425b6a))) ) ) {
            result[0] += 0;
            result[1] += 286331153;
          } else {
            if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
              if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3d75f0))) ) ) {
                result[0] += 0;
                result[1] += 286331153;
              } else {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb621fc))) ) ) {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec2bc12))) ) ) {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e69462e))) ) ) {
                      result[0] += 0;
                      result[1] += 286331153;
                    } else {
                      result[0] += 279869204;
                      result[1] += 6461948;
                    }
                  } else {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f47d2be))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 228474886;
                      result[1] += 57856266;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e7a439c))) ) ) {
                    result[0] += 0;
                    result[1] += 286331153;
                  } else {
                    if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d8aa9f0))) ) ) {
                      result[0] += 274206381;
                      result[1] += 12124771;
                    } else {
                      result[0] += 286267803;
                      result[1] += 63349;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f373418))) ) ) {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb53f1a))) ) ) {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0b0981))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 286331153;
                    }
                  } else {
                    if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3f680866))) ) ) {
                      result[0] += 229064922;
                      result[1] += 57266230;
                    } else {
                      result[0] += 281125132;
                      result[1] += 5206020;
                    }
                  }
                } else {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb79c96))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 25232247;
                      result[1] += 261098905;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 117901063;
                      result[1] += 168430090;
                    }
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9205d6))) ) ) {
                      result[0] += 198229259;
                      result[1] += 88101893;
                    } else {
                      result[0] += 266237738;
                      result[1] += 20093414;
                    }
                  } else {
                    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f479687))) ) ) {
                      result[0] += 284398115;
                      result[1] += 1933037;
                    } else {
                      result[0] += 239719104;
                      result[1] += 46612048;
                    }
                  }
                } else {
                  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 94019184;
                      result[1] += 192311968;
                    }
                  } else {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e913962))) ) ) {
                      result[0] += 260301048;
                      result[1] += 26030104;
                    } else {
                      result[0] += 101718564;
                      result[1] += 184612588;
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
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3ea757a2))) ) ) {
      result[0] += 0;
      result[1] += 286331153;
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f53226a))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1765b0))) ) ) {
          result[0] += 0;
          result[1] += 286331153;
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
            result[0] += 286331153;
            result[1] += 0;
          } else {
            if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6b2045))) ) ) {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e99538a))) ) ) {
                result[0] += 286331153;
                result[1] += 0;
              } else {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb621fc))) ) ) {
                  result[0] += 286331153;
                  result[1] += 0;
                } else {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb5a1ec))) ) ) {
                    result[0] += 0;
                    result[1] += 286331153;
                  } else {
                    result[0] += 286331153;
                    result[1] += 0;
                  }
                }
              }
            } else {
              result[0] += 286331153;
              result[1] += 0;
            }
          }
        }
      } else {
        result[0] += 0;
        result[1] += 286331153;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee58c9f))) ) ) {
      result[0] += 0;
      result[1] += 286331153;
    } else {
      result[0] += 286331153;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7a1c2c))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3ea2649f))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
          result[0] += 0;
          result[1] += 286331153;
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
            if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f3a0a80))) ) ) {
              result[0] += 0;
              result[1] += 286331153;
            } else {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
                result[0] += 0;
                result[1] += 286331153;
              } else {
                if ( ( !(data[68].missing != -1) || ((*( ((int*)(data)) + 68 ))<=((int)(0x3f4ed750))) ) ) {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e75a25b))) ) ) {
                    result[0] += 0;
                    result[1] += 286331153;
                  } else {
                    result[0] += 286331153;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f532d44))) ) ) {
                    if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dc55866))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 283728142;
                      result[1] += 2603010;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e80fe64))) ) ) {
                      result[0] += 0;
                      result[1] += 286331153;
                    } else {
                      result[0] += 286331153;
                      result[1] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
              if ( ( !(data[70].missing != -1) || ((*( ((int*)(data)) + 70 ))<=((int)(0x3f6ecc1c))) ) ) {
                result[0] += 286331153;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 286331153;
              }
            } else {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
                  if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f532d44))) ) ) {
                    if ( ( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f4a0f28))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 214748364;
                      result[1] += 71582788;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 286331153;
                  }
                } else {
                  if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f45f820))) ) ) {
                    if ( ( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f4a1e24))) ) ) {
                      result[0] += 262470223;
                      result[1] += 23860929;
                    } else {
                      result[0] += 0;
                      result[1] += 286331153;
                    }
                  } else {
                    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec1ef9e))) ) ) {
                      result[0] += 143165576;
                      result[1] += 143165576;
                    } else {
                      result[0] += 31814572;
                      result[1] += 254516580;
                    }
                  }
                }
              } else {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6a0bb8))) ) ) {
                  result[0] += 0;
                  result[1] += 286331153;
                } else {
                  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e122986))) ) ) {
                    if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
                      result[0] += 271060158;
                      result[1] += 15270994;
                    } else {
                      result[0] += 284873997;
                      result[1] += 1457155;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 286331153;
                  }
                }
              }
            }
          }
        }
      } else {
        result[0] += 0;
        result[1] += 286331153;
      }
    } else {
      if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f61df9d))) ) ) {
        result[0] += 0;
        result[1] += 286331153;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += 0;
            result[1] += 286331153;
          } else {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
              if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f377010))) ) ) {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9e7982))) ) ) {
                  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f46e1c3))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 14081859;
                      result[1] += 272249293;
                    }
                  } else {
                    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
                      result[0] += 71582788;
                      result[1] += 214748364;
                    } else {
                      result[0] += 0;
                      result[1] += 286331153;
                    }
                  }
                } else {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0bd498))) ) ) {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ebe824a))) ) ) {
                      result[0] += 200431807;
                      result[1] += 85899345;
                    } else {
                      result[0] += 270167297;
                      result[1] += 16163855;
                    }
                  } else {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eba4384))) ) ) {
                      result[0] += 163617801;
                      result[1] += 122713351;
                    } else {
                      result[0] += 0;
                      result[1] += 286331153;
                    }
                  }
                }
              } else {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3ea004c8))) ) ) {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de84e))) ) ) {
                    result[0] += 0;
                    result[1] += 286331153;
                  } else {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
                      result[0] += 269636590;
                      result[1] += 16694562;
                    } else {
                      result[0] += 283799285;
                      result[1] += 2531867;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6d22c4))) ) ) {
                    result[0] += 0;
                    result[1] += 286331153;
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                      result[0] += 282673638;
                      result[1] += 3657514;
                    } else {
                      result[0] += 198522932;
                      result[1] += 87808220;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e667e74))) ) ) {
                    if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f37ac08))) ) ) {
                      result[0] += 177252618;
                      result[1] += 109078534;
                    } else {
                      result[0] += 286331153;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 286331153;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e675ad4))) ) ) {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e96d05a))) ) ) {
                      result[0] += 282057553;
                      result[1] += 4273599;
                    } else {
                      result[0] += 20452225;
                      result[1] += 265878927;
                    }
                  } else {
                    if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 10670726;
                      result[1] += 275660426;
                    }
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea06598))) ) ) {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb72d14))) ) ) {
                      result[0] += 278852354;
                      result[1] += 7478798;
                    } else {
                      result[0] += 0;
                      result[1] += 286331153;
                    }
                  } else {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e946b36))) ) ) {
                      result[0] += 229064922;
                      result[1] += 57266230;
                    } else {
                      result[0] += 14559211;
                      result[1] += 271771941;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8666f0))) ) ) {
                    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ebb2615))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 16142158;
                      result[1] += 270188994;
                    }
                  } else {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                      result[0] += 0;
                      result[1] += 286331153;
                    } else {
                      result[0] += 254516580;
                      result[1] += 31814572;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
            result[0] += 0;
            result[1] += 286331153;
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7fac27))) ) ) {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                result[0] += 0;
                result[1] += 286331153;
              } else {
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea6c904))) ) ) {
                  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
                      result[0] += 35791394;
                      result[1] += 250539758;
                    } else {
                      result[0] += 286331153;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e81c45f))) ) ) {
                      result[0] += 106541824;
                      result[1] += 179789328;
                    } else {
                      result[0] += 286331153;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
                    if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f4d17e8))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 136348168;
                      result[1] += 149982984;
                    }
                  } else {
                    result[0] += 286331153;
                    result[1] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec5d64a))) ) ) {
                result[0] += 0;
                result[1] += 286331153;
              } else {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
                  result[0] += 0;
                  result[1] += 286331153;
                } else {
                  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x36552000))) ) ) {
                    if ( ( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x36d53000))) ) ) {
                      result[0] += 286319444;
                      result[1] += 11708;
                    } else {
                      result[0] += 0;
                      result[1] += 286331153;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 286331153;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f448739))) ) ) {
      result[0] += 0;
      result[1] += 286331153;
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0d5b02))) ) ) {
          if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aefe7ca))) ) ) {
            result[0] += 0;
            result[1] += 286331153;
          } else {
            if ( ( !(data[70].missing != -1) || ((*( ((int*)(data)) + 70 ))<=((int)(0x3f71b687))) ) ) {
              result[0] += 0;
              result[1] += 286331153;
            } else {
              if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed4e510))) ) ) {
                result[0] += 0;
                result[1] += 286331153;
              } else {
                result[0] += 286331153;
                result[1] += 0;
              }
            }
          }
        } else {
          result[0] += 0;
          result[1] += 286331153;
        }
      } else {
        if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3c3c87))) ) ) {
          result[0] += 0;
          result[1] += 286331153;
        } else {
          if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de84e))) ) ) {
              result[0] += 0;
              result[1] += 286331153;
            } else {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9db3e0))) ) ) {
                if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f44ffbe))) ) ) {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e805e98))) ) ) {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                      result[0] += 0;
                      result[1] += 286331153;
                    } else {
                      result[0] += 286331153;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb73e1f))) ) ) {
                      result[0] += 0;
                      result[1] += 286331153;
                    } else {
                      result[0] += 286331153;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f44cf16))) ) ) {
                    if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f2fa3b1))) ) ) {
                      result[0] += 0;
                      result[1] += 286331153;
                    } else {
                      result[0] += 286041604;
                      result[1] += 289548;
                    }
                  } else {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea6c904))) ) ) {
                      result[0] += 278310672;
                      result[1] += 8020480;
                    } else {
                      result[0] += 285992700;
                      result[1] += 338452;
                    }
                  }
                }
              } else {
                if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed1c0bb))) ) ) {
                  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3ddb3fdd))) ) ) {
                    result[0] += 286331153;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 286331153;
                  }
                } else {
                  if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6383af))) ) ) {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eaac72f))) ) ) {
                      result[0] += 225971489;
                      result[1] += 60359663;
                    } else {
                      result[0] += 284430724;
                      result[1] += 1900428;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e08b800))) ) ) {
                      result[0] += 251412719;
                      result[1] += 34918433;
                    } else {
                      result[0] += 285546684;
                      result[1] += 784468;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f490576))) ) ) {
              if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                  result[0] += 0;
                  result[1] += 286331153;
                } else {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f488d86))) ) ) {
                      result[0] += 280928678;
                      result[1] += 5402474;
                    } else {
                      result[0] += 255495490;
                      result[1] += 30835662;
                    }
                  } else {
                    result[0] += 286331153;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7350da))) ) ) {
                    result[0] += 286331153;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea1fe82))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 286331153;
                    }
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
                    result[0] += 286331153;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eb05e44))) ) ) {
                      result[0] += 7408309;
                      result[1] += 278922843;
                    } else {
                      result[0] += 165191049;
                      result[1] += 121140103;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea7957a))) ) ) {
                if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae7f22c))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                      result[0] += 0;
                      result[1] += 286331153;
                    } else {
                      result[0] += 284386629;
                      result[1] += 1944523;
                    }
                  } else {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
                      result[0] += 100866656;
                      result[1] += 185464496;
                    } else {
                      result[0] += 18623164;
                      result[1] += 267707988;
                    }
                  }
                } else {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0c7d46))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8c31d2))) ) ) {
                      result[0] += 223696213;
                      result[1] += 62634939;
                    } else {
                      result[0] += 283704261;
                      result[1] += 2626891;
                    }
                  } else {
                    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
                      result[0] += 204522252;
                      result[1] += 81808900;
                    } else {
                      result[0] += 17353403;
                      result[1] += 268977749;
                    }
                  }
                }
              } else {
                if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f37ac08))) ) ) {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                    result[0] += 286331153;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f4f8492))) ) ) {
                      result[0] += 0;
                      result[1] += 286331153;
                    } else {
                      result[0] += 39045157;
                      result[1] += 247285995;
                    }
                  }
                } else {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                    result[0] += 0;
                    result[1] += 286331153;
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 268996736;
                      result[1] += 17334416;
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
    if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3ad30d33))) ) ) {
      result[0] += 0;
      result[1] += 286331153;
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1da382))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x36553000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb621fc))) ) ) {
            result[0] += 286331153;
            result[1] += 0;
          } else {
            if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7288c2))) ) ) {
              result[0] += 286331153;
              result[1] += 0;
            } else {
              if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e939ec0))) ) ) {
                if ( ( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38853cc0))) ) ) {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e970209))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e9a1914))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 286331153;
                    }
                  } else {
                    if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3f5db6))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 151587081;
                      result[1] += 134744072;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 286331153;
                }
              } else {
                result[0] += 286331153;
                result[1] += 0;
              }
            }
          }
        } else {
          result[0] += 0;
          result[1] += 286331153;
        }
      } else {
        result[0] += 0;
        result[1] += 286331153;
      }
    }
  }
  if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f50c45b))) ) ) {
      result[0] += 0;
      result[1] += 286331153;
    } else {
      if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f4066ab))) ) ) {
        result[0] += 0;
        result[1] += 286331153;
      } else {
        result[0] += 286331153;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
      result[0] += 0;
      result[1] += 286331153;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
        if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de84e))) ) ) {
            result[0] += 0;
            result[1] += 286331153;
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e08b800))) ) ) {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec13604))) ) ) {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ebe1f78))) ) ) {
                  if ( ( !(data[70].missing != -1) || ((*( ((int*)(data)) + 70 ))<=((int)(0x3f7198b6))) ) ) {
                    result[0] += 286331153;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[70].missing != -1) || ((*( ((int*)(data)) + 70 ))<=((int)(0x3f71b687))) ) ) {
                      result[0] += 277383304;
                      result[1] += 8947848;
                    } else {
                      result[0] += 286331153;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed2f6fa))) ) ) {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e667e74))) ) ) {
                      result[0] += 245426702;
                      result[1] += 40904450;
                    } else {
                      result[0] += 285463482;
                      result[1] += 867670;
                    }
                  } else {
                    if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f510194))) ) ) {
                      result[0] += 191936267;
                      result[1] += 94394885;
                    } else {
                      result[0] += 123153184;
                      result[1] += 163177968;
                    }
                  }
                }
              } else {
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea7957a))) ) ) {
                  if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e71c4e4))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 286331153;
                    }
                  } else {
                    result[0] += 286331153;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea1fe82))) ) ) {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e9f9924))) ) ) {
                      result[0] += 163100023;
                      result[1] += 123231129;
                    } else {
                      result[0] += 106456454;
                      result[1] += 179874698;
                    }
                  } else {
                    result[0] += 286331153;
                    result[1] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec1fba6))) ) ) {
                if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec1ef9e))) ) ) {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7350da))) ) ) {
                      result[0] += 284626800;
                      result[1] += 1704352;
                    } else {
                      result[0] += 0;
                      result[1] += 286331153;
                    }
                  } else {
                    if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3ef526))) ) ) {
                      result[0] += 241120970;
                      result[1] += 45210182;
                    } else {
                      result[0] += 127258290;
                      result[1] += 159072862;
                    }
                  }
                } else {
                  if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee79fcd))) ) ) {
                    result[0] += 0;
                    result[1] += 286331153;
                  } else {
                    result[0] += 286331153;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0e208c))) ) ) {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e7a447c))) ) ) {
                    result[0] += 286331153;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e92d24c))) ) ) {
                      result[0] += 0;
                      result[1] += 286331153;
                    } else {
                      result[0] += 286331153;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb8b83e))) ) ) {
                    result[0] += 286331153;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 286331153;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
            if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f373418))) ) ) {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e746375))) ) ) {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                    result[0] += 286331153;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 286331153;
                    }
                  }
                } else {
                  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ece5562))) ) ) {
                    if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f4d7f18))) ) ) {
                      result[0] += 22025473;
                      result[1] += 264305679;
                    } else {
                      result[0] += 286331153;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 105182872;
                      result[1] += 181148280;
                    }
                  }
                }
              } else {
                result[0] += 286331153;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f44e5b2))) ) ) {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                  result[0] += 0;
                  result[1] += 286331153;
                } else {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e9ace84))) ) ) {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 286331153;
                    }
                  } else {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1072de))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 268435455;
                      result[1] += 17895697;
                    }
                  }
                }
              } else {
                if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f37ac08))) ) ) {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec38888))) ) ) {
                    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f522142))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 143165576;
                      result[1] += 143165576;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 286331153;
                  }
                } else {
                  result[0] += 286331153;
                  result[1] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f522de3))) ) ) {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e576228))) ) ) {
                  if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f47202b))) ) ) {
                    result[0] += 286331153;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec1ef9e))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 114532461;
                      result[1] += 171798691;
                    }
                  }
                } else {
                  result[0] += 286331153;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed6d328))) ) ) {
                    result[0] += 0;
                    result[1] += 286331153;
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7350da))) ) ) {
                      result[0] += 3869339;
                      result[1] += 282461813;
                    } else {
                      result[0] += 0;
                      result[1] += 286331153;
                    }
                  }
                } else {
                  if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f386016))) ) ) {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb416a6))) ) ) {
                      result[0] += 213294086;
                      result[1] += 73037066;
                    } else {
                      result[0] += 64927699;
                      result[1] += 221403453;
                    }
                  } else {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                      result[0] += 0;
                      result[1] += 286331153;
                    } else {
                      result[0] += 123255132;
                      result[1] += 163076020;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                  result[0] += 0;
                  result[1] += 286331153;
                } else {
                  if ( ( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f46cb20))) ) ) {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                      result[0] += 0;
                      result[1] += 286331153;
                    } else {
                      result[0] += 286331153;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 31814572;
                      result[1] += 254516580;
                    }
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec056d2))) ) ) {
                    if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae945bf))) ) ) {
                      result[0] += 265380093;
                      result[1] += 20951059;
                    } else {
                      result[0] += 195910788;
                      result[1] += 90420364;
                    }
                  } else {
                    if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f37ac08))) ) ) {
                      result[0] += 21895911;
                      result[1] += 264435241;
                    } else {
                      result[0] += 185542587;
                      result[1] += 100788565;
                    }
                  }
                } else {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e906cee))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
                      result[0] += 171798691;
                      result[1] += 114532461;
                    } else {
                      result[0] += 0;
                      result[1] += 286331153;
                    }
                  } else {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e95361a))) ) ) {
                      result[0] += 10412041;
                      result[1] += 275919111;
                    } else {
                      result[0] += 659242;
                      result[1] += 285671910;
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
          result[1] += 286331153;
        } else {
          if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec5d64a))) ) ) {
            result[0] += 0;
            result[1] += 286331153;
          } else {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
              result[0] += 0;
              result[1] += 286331153;
            } else {
              if ( ( !(data[44].missing != -1) || ((*( ((int*)(data)) + 44 ))<=((int)(0x369c5000))) ) ) {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7fac27))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8603ba))) ) ) {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec1ef9e))) ) ) {
                      result[0] += 193466995;
                      result[1] += 92864157;
                    } else {
                      result[0] += 74836551;
                      result[1] += 211494601;
                    }
                  } else {
                    result[0] += 286331153;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea5fc90))) ) ) {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e131598))) ) ) {
                      result[0] += 286031667;
                      result[1] += 299485;
                    } else {
                      result[0] += 226293975;
                      result[1] += 60037177;
                    }
                  } else {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f485169))) ) ) {
                      result[0] += 285912050;
                      result[1] += 419102;
                    } else {
                      result[0] += 286326041;
                      result[1] += 5111;
                    }
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 286331153;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 286331153;
  } else {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
      if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae89bf6))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e919a5e))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4c87d3))) ) ) {
            result[0] += 0;
            result[1] += 286331153;
          } else {
            result[0] += 286331153;
            result[1] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 286331153;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f448739))) ) ) {
          if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d8cd954))) ) ) {
            result[0] += 286331153;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 286331153;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1ccd5a))) ) ) {
              result[0] += 0;
              result[1] += 286331153;
            } else {
              result[0] += 286331153;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec5d64a))) ) ) {
              result[0] += 0;
              result[1] += 286331153;
            } else {
              if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f34e56e))) ) ) {
                result[0] += 0;
                result[1] += 286331153;
              } else {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
                  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9cee3c))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 52745212;
                      result[1] += 233585940;
                    }
                  } else {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e454d38))) ) ) {
                      result[0] += 95443717;
                      result[1] += 190887435;
                    } else {
                      result[0] += 270062337;
                      result[1] += 16268815;
                    }
                  }
                } else {
                  if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f44e364))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e81619a))) ) ) {
                      result[0] += 35791394;
                      result[1] += 250539758;
                    } else {
                      result[0] += 286275574;
                      result[1] += 55578;
                    }
                  } else {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb1c5be))) ) ) {
                      result[0] += 286283981;
                      result[1] += 47171;
                    } else {
                      result[0] += 286331153;
                      result[1] += 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
          result[0] += 0;
          result[1] += 286331153;
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e08b800))) ) ) {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e675ad4))) ) ) {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e667e74))) ) ) {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea92e63))) ) ) {
                    if ( ( !(data[64].missing != -1) || ((*( ((int*)(data)) + 64 ))<=((int)(0x3f35a2c5))) ) ) {
                      result[0] += 202116108;
                      result[1] += 84215045;
                    } else {
                      result[0] += 0;
                      result[1] += 286331153;
                    }
                  } else {
                    if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f4b479c))) ) ) {
                      result[0] += 220254733;
                      result[1] += 66076419;
                    } else {
                      result[0] += 280894485;
                      result[1] += 5436667;
                    }
                  }
                } else {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9cee3c))) ) ) {
                    result[0] += 286331153;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e4ab473))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 260301048;
                      result[1] += 26030104;
                    }
                  }
                }
              } else {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f47d2be))) ) ) {
                  result[0] += 286331153;
                  result[1] += 0;
                } else {
                  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e8e669f))) ) ) {
                    result[0] += 286331153;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e81619a))) ) ) {
                      result[0] += 0;
                      result[1] += 286331153;
                    } else {
                      result[0] += 219064914;
                      result[1] += 67266238;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f48c7a2))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de84e))) ) ) {
                  result[0] += 0;
                  result[1] += 286331153;
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7350da))) ) ) {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea5301a))) ) ) {
                      result[0] += 278071600;
                      result[1] += 8259552;
                    } else {
                      result[0] += 285963496;
                      result[1] += 367656;
                    }
                  } else {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e96d05a))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 250751542;
                      result[1] += 35579610;
                    }
                  }
                }
              } else {
                if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec2bc12))) ) ) {
                  result[0] += 286331153;
                  result[1] += 0;
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e63dda1))) ) ) {
                    result[0] += 0;
                    result[1] += 286331153;
                  } else {
                    if ( ( !(data[70].missing != -1) || ((*( ((int*)(data)) + 70 ))<=((int)(0x3f6fd8cc))) ) ) {
                      result[0] += 163617801;
                      result[1] += 122713351;
                    } else {
                      result[0] += 286331153;
                      result[1] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec1fba6))) ) ) {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea1fe82))) ) ) {
                  result[0] += 286331153;
                  result[1] += 0;
                } else {
                  if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f44cf16))) ) ) {
                    result[0] += 286331153;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f492384))) ) ) {
                      result[0] += 254516580;
                      result[1] += 31814572;
                    } else {
                      result[0] += 286331153;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e7b0926))) ) ) {
                  result[0] += 286331153;
                  result[1] += 0;
                } else {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0f20c1))) ) ) {
                    result[0] += 286331153;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 286331153;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0ee618))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e834fe4))) ) ) {
                  if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aef3e00))) ) ) {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e939ec0))) ) ) {
                      result[0] += 274877906;
                      result[1] += 11453246;
                    } else {
                      result[0] += 0;
                      result[1] += 286331153;
                    }
                  } else {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
                      result[0] += 199927258;
                      result[1] += 86403894;
                    } else {
                      result[0] += 51924231;
                      result[1] += 234406921;
                    }
                  }
                } else {
                  result[0] += 286331153;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb6df49))) ) ) {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e4f5644))) ) ) {
                      result[0] += 224421714;
                      result[1] += 61909438;
                    } else {
                      result[0] += 0;
                      result[1] += 286331153;
                    }
                  } else {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
                      result[0] += 220254733;
                      result[1] += 66076419;
                    } else {
                      result[0] += 4061434;
                      result[1] += 282269718;
                    }
                  }
                } else {
                  if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3adaae17))) ) ) {
                    result[0] += 0;
                    result[1] += 286331153;
                  } else {
                    result[0] += 286331153;
                    result[1] += 0;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e932573))) ) ) {
          result[0] += 0;
          result[1] += 286331153;
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eab0a81))) ) ) {
            result[0] += 0;
            result[1] += 286331153;
          } else {
            if ( ( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x36d53000))) ) ) {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8b6c47))) ) ) {
                result[0] += 0;
                result[1] += 286331153;
              } else {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e03eae8))) ) ) {
                  result[0] += 0;
                  result[1] += 286331153;
                } else {
                  result[0] += 286331153;
                  result[1] += 0;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 286331153;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
      result[0] += 0;
      result[1] += 286331153;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e9199ed))) ) ) {
        result[0] += 0;
        result[1] += 286331153;
      } else {
        result[0] += 286331153;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
      result[0] += 0;
      result[1] += 286331153;
    } else {
      if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f41984c))) ) ) {
        result[0] += 0;
        result[1] += 286331153;
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
            result[0] += 0;
            result[1] += 286331153;
          } else {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea06598))) ) ) {
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea6c904))) ) ) {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e08b800))) ) ) {
                    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed60d85))) ) ) {
                      result[0] += 0;
                      result[1] += 286331153;
                    } else {
                      result[0] += 286331153;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb6df49))) ) ) {
                      result[0] += 240778469;
                      result[1] += 45552683;
                    } else {
                      result[0] += 40904450;
                      result[1] += 245426702;
                    }
                  }
                } else {
                  result[0] += 286331153;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                  result[0] += 0;
                  result[1] += 286331153;
                } else {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f45b482))) ) ) {
                    result[0] += 286331153;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 286331153;
                  }
                }
              }
            } else {
              if ( ( !(data[69].missing != -1) || ((*( ((int*)(data)) + 69 ))<=((int)(0x3f54e7ca))) ) ) {
                if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3eceaafa))) ) ) {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e878fb0))) ) ) {
                    if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee76429))) ) ) {
                      result[0] += 0;
                      result[1] += 286331153;
                    } else {
                      result[0] += 286331153;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e11fd22))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 286175791;
                      result[1] += 155361;
                    }
                  }
                } else {
                  result[0] += 286331153;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f485169))) ) ) {
                  if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f42f15c))) ) ) {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb604a0))) ) ) {
                      result[0] += 0;
                      result[1] += 286331153;
                    } else {
                      result[0] += 286331153;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 286331153;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f44896c))) ) ) {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb8b858))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 262470223;
                      result[1] += 23860929;
                    }
                  } else {
                    result[0] += 286331153;
                    result[1] += 0;
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e182b3a))) ) ) {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
              result[0] += 0;
              result[1] += 286331153;
            } else {
              if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8666f0))) ) ) {
                  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ecfe0a8))) ) ) {
                    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
                      result[0] += 263651457;
                      result[1] += 22679695;
                    } else {
                      result[0] += 158815254;
                      result[1] += 127515898;
                    }
                  } else {
                    if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e95b786))) ) ) {
                      result[0] += 256811274;
                      result[1] += 29519878;
                    } else {
                      result[0] += 0;
                      result[1] += 286331153;
                    }
                  }
                } else {
                  if ( ( !(data[50].missing != -1) || ((*( ((int*)(data)) + 50 ))<=((int)(0x3eb7063e))) ) ) {
                    if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 286331153;
                    }
                  } else {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1072de))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 284541583;
                      result[1] += 1789569;
                    }
                  }
                }
              } else {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                  result[0] += 0;
                  result[1] += 286331153;
                } else {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f497d8a))) ) ) {
                      result[0] += 231468432;
                      result[1] += 54862720;
                    } else {
                      result[0] += 273374992;
                      result[1] += 12956160;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 257714772;
                      result[1] += 28616380;
                    } else {
                      result[0] += 167186646;
                      result[1] += 119144506;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x367fe000))) ) ) {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0faba2))) ) ) {
                if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aef92e5))) ) ) {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e9603e4))) ) ) {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
                      result[0] += 220254733;
                      result[1] += 66076419;
                    } else {
                      result[0] += 0;
                      result[1] += 286331153;
                    }
                  } else {
                    if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 164857330;
                      result[1] += 121473822;
                    }
                  }
                } else {
                  if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f478e5d))) ) ) {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec1ef9e))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 286331153;
                    }
                  } else {
                    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 183684135;
                      result[1] += 102647017;
                    }
                  }
                }
              } else {
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea5fc90))) ) ) {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
                    result[0] += 0;
                    result[1] += 286331153;
                  } else {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e1da382))) ) ) {
                      result[0] += 285201889;
                      result[1] += 1129263;
                    } else {
                      result[0] += 0;
                      result[1] += 286331153;
                    }
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e834fe4))) ) ) {
                    result[0] += 0;
                    result[1] += 286331153;
                  } else {
                    result[0] += 286331153;
                    result[1] += 0;
                  }
                }
              }
            } else {
              result[0] += 0;
              result[1] += 286331153;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aeee91c))) ) ) {
    if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dc55866))) ) ) {
      result[0] += 286331153;
      result[1] += 0;
    } else {
      if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f497d8a))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3eb28b60))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0d26b5))) ) ) {
            result[0] += 0;
            result[1] += 286331153;
          } else {
            result[0] += 286331153;
            result[1] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 286331153;
        }
      } else {
        if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aee9437))) ) ) {
          result[0] += 0;
          result[1] += 286331153;
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e88553b))) ) ) {
            result[0] += 0;
            result[1] += 286331153;
          } else {
            if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62b194))) ) ) {
              result[0] += 0;
              result[1] += 286331153;
            } else {
              result[0] += 286331153;
              result[1] += 0;
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
      if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea560bb))) ) ) {
        result[0] += 0;
        result[1] += 286331153;
      } else {
        result[0] += 286331153;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e913728))) ) ) {
          result[0] += 0;
          result[1] += 286331153;
        } else {
          result[0] += 286331153;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de84e))) ) ) {
            result[0] += 0;
            result[1] += 286331153;
          } else {
            if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3de10940))) ) ) {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e81619a))) ) ) {
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea6c904))) ) ) {
                  if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f37e825))) ) ) {
                    if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f38241d))) ) ) {
                      result[0] += 62245902;
                      result[1] += 224085250;
                    } else {
                      result[0] += 159742643;
                      result[1] += 126588509;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7350da))) ) ) {
                      result[0] += 271261092;
                      result[1] += 15070060;
                    } else {
                      result[0] += 0;
                      result[1] += 286331153;
                    }
                  }
                } else {
                  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e92d24c))) ) ) {
                    result[0] += 286331153;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 224974477;
                      result[1] += 61356675;
                    }
                  }
                }
              } else {
                if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb8b858))) ) ) {
                    if ( ( !(data[70].missing != -1) || ((*( ((int*)(data)) + 70 ))<=((int)(0x3f717abc))) ) ) {
                      result[0] += 286326627;
                      result[1] += 4525;
                    } else {
                      result[0] += 286292757;
                      result[1] += 38395;
                    }
                  } else {
                    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec1ef9e))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 283131922;
                      result[1] += 3199230;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
                    result[0] += 0;
                    result[1] += 286331153;
                  } else {
                    result[0] += 286331153;
                    result[1] += 0;
                  }
                }
              }
            } else {
              result[0] += 0;
              result[1] += 286331153;
            }
          }
        } else {
          if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3eda8b92))) ) ) {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
                result[0] += 0;
                result[1] += 286331153;
              } else {
                if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
                  if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3af36342))) ) ) {
                    if ( ( !(data[50].missing != -1) || ((*( ((int*)(data)) + 50 ))<=((int)(0x3f000000))) ) ) {
                      result[0] += 285501207;
                      result[1] += 829945;
                    } else {
                      result[0] += 286331153;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62b194))) ) ) {
                      result[0] += 229064922;
                      result[1] += 57266230;
                    } else {
                      result[0] += 286331153;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
                    if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae79d48))) ) ) {
                      result[0] += 282221136;
                      result[1] += 4110016;
                    } else {
                      result[0] += 255180840;
                      result[1] += 31150312;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e08b800))) ) ) {
                      result[0] += 260429023;
                      result[1] += 25902129;
                    } else {
                      result[0] += 285204751;
                      result[1] += 1126401;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8c31d2))) ) ) {
                if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f513ce0))) ) ) {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                      result[0] += 2084935;
                      result[1] += 284246217;
                    } else {
                      result[0] += 190704767;
                      result[1] += 95626385;
                    }
                  } else {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e96d05a))) ) ) {
                      result[0] += 23860929;
                      result[1] += 262470223;
                    } else {
                      result[0] += 56013531;
                      result[1] += 230317621;
                    }
                  }
                } else {
                  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                      result[0] += 0;
                      result[1] += 286331153;
                    } else {
                      result[0] += 49497070;
                      result[1] += 236834082;
                    }
                  } else {
                    result[0] += 286331153;
                    result[1] += 0;
                  }
                }
              } else {
                result[0] += 286331153;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f4a66bd))) ) ) {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8b6c47))) ) ) {
                result[0] += 0;
                result[1] += 286331153;
              } else {
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea5fc90))) ) ) {
                  if ( ( !(data[75].missing != -1) || ((*( ((int*)(data)) + 75 ))<=((int)(0x38850f88))) ) ) {
                    if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edd01ac))) ) ) {
                      result[0] += 276912365;
                      result[1] += 9418787;
                    } else {
                      result[0] += 286331153;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 286331153;
                  }
                } else {
                  result[0] += 286331153;
                  result[1] += 0;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 286331153;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f63bfa7))) ) ) {
      if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d610a91))) ) ) {
        result[0] += 286331153;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 286331153;
      }
    } else {
      if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea70c21))) ) ) {
        result[0] += 0;
        result[1] += 286331153;
      } else {
        result[0] += 286331153;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e50e189))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
          result[0] += 0;
          result[1] += 286331153;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e853e30))) ) ) {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
              if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f37ac08))) ) ) {
                result[0] += 0;
                result[1] += 286331153;
              } else {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea06598))) ) ) {
                  if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f52be1e))) ) ) {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f497d8a))) ) ) {
                      result[0] += 238609294;
                      result[1] += 47721858;
                    } else {
                      result[0] += 286331153;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e822724))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 286331153;
                    }
                  }
                } else {
                  result[0] += 286331153;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea06598))) ) ) {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9c8b6b))) ) ) {
                  result[0] += 286331153;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 286331153;
                }
              } else {
                if ( ( !(data[69].missing != -1) || ((*( ((int*)(data)) + 69 ))<=((int)(0x3f51a3e8))) ) ) {
                  result[0] += 0;
                  result[1] += 286331153;
                } else {
                  result[0] += 286331153;
                  result[1] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec5d64a))) ) ) {
              result[0] += 0;
              result[1] += 286331153;
            } else {
              if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee74630))) ) ) {
                result[0] += 0;
                result[1] += 286331153;
              } else {
                if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f39a3a0))) ) ) {
                  result[0] += 0;
                  result[1] += 286331153;
                } else {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea3974e))) ) ) {
                    result[0] += 286331153;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ebf8a7a))) ) ) {
                      result[0] += 286247796;
                      result[1] += 83356;
                    } else {
                      result[0] += 286331153;
                      result[1] += 0;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        result[0] += 0;
        result[1] += 286331153;
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e55c93f))) ) ) {
          if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee3ce8c))) ) ) {
            result[0] += 0;
            result[1] += 286331153;
          } else {
            result[0] += 286331153;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e99538a))) ) ) {
            result[0] += 0;
            result[1] += 286331153;
          } else {
            result[0] += 286331153;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d4333ee))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8c31d2))) ) ) {
            result[0] += 0;
            result[1] += 286331153;
          } else {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1b4246))) ) ) {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb9172e))) ) ) {
                result[0] += 0;
                result[1] += 286331153;
              } else {
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea5fc90))) ) ) {
                  if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f4eb49d))) ) ) {
                    result[0] += 286331153;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f440618))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 71582788;
                      result[1] += 214748364;
                    }
                  }
                } else {
                  result[0] += 286331153;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f50ec1a))) ) ) {
                if ( ( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x36d53000))) ) ) {
                  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e9603e4))) ) ) {
                    result[0] += 286331153;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e99538a))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 283308048;
                      result[1] += 3023104;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 286331153;
                }
              } else {
                result[0] += 0;
                result[1] += 286331153;
              }
            }
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += 0;
            result[1] += 286331153;
          } else {
            if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
              if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f2ec374))) ) ) {
                result[0] += 0;
                result[1] += 286331153;
              } else {
                if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6347b6))) ) ) {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e7038ee))) ) ) {
                    result[0] += 0;
                    result[1] += 286331153;
                  } else {
                    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed16bed))) ) ) {
                      result[0] += 275787951;
                      result[1] += 10543201;
                    } else {
                      result[0] += 244602479;
                      result[1] += 41728673;
                    }
                  }
                } else {
                  if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f5364d6))) ) ) {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e95378d))) ) ) {
                      result[0] += 283766142;
                      result[1] += 2565010;
                    } else {
                      result[0] += 270325063;
                      result[1] += 16006089;
                    }
                  } else {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec18964))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 134744072;
                      result[1] += 151587081;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f513ce0))) ) ) {
                if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e95b786))) ) ) {
                  if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f373418))) ) ) {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
                      result[0] += 270937004;
                      result[1] += 15394148;
                    } else {
                      result[0] += 131825728;
                      result[1] += 154505424;
                    }
                  } else {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e68f3be))) ) ) {
                      result[0] += 281091105;
                      result[1] += 5240047;
                    } else {
                      result[0] += 225398158;
                      result[1] += 60932994;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 286331153;
                }
              } else {
                if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f485169))) ) ) {
                    result[0] += 286331153;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ebe1f78))) ) ) {
                      result[0] += 77263961;
                      result[1] += 209067191;
                    } else {
                      result[0] += 22545760;
                      result[1] += 263785392;
                    }
                  }
                } else {
                  if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f373418))) ) ) {
                    if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6293aa))) ) ) {
                      result[0] += 16843009;
                      result[1] += 269488144;
                    } else {
                      result[0] += 186991773;
                      result[1] += 99339379;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
                      result[0] += 274289188;
                      result[1] += 12041964;
                    } else {
                      result[0] += 206158430;
                      result[1] += 80172722;
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
    result[1] += 286331153;
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3ebc317e))) ) ) {
        if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec5d64a))) ) ) {
          result[0] += 0;
          result[1] += 286331153;
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
            result[0] += 0;
            result[1] += 286331153;
          } else {
            if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4ed78))) ) ) {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ebc946c))) ) ) {
                  if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aefe7ca))) ) ) {
                    result[0] += 0;
                    result[1] += 286331153;
                  } else {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e913962))) ) ) {
                      result[0] += 0;
                      result[1] += 286331153;
                    } else {
                      result[0] += 81808900;
                      result[1] += 204522252;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 286331153;
                }
              } else {
                if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
                  if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f427ee4))) ) ) {
                    result[0] += 0;
                    result[1] += 286331153;
                  } else {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e17b3df))) ) ) {
                      result[0] += 286267072;
                      result[1] += 64080;
                    } else {
                      result[0] += 280669237;
                      result[1] += 5661915;
                    }
                  }
                } else {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ebf8a7a))) ) ) {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e64a32c))) ) ) {
                      result[0] += 0;
                      result[1] += 286331153;
                    } else {
                      result[0] += 275981834;
                      result[1] += 10349318;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
                      result[0] += 0;
                      result[1] += 286331153;
                    } else {
                      result[0] += 252774572;
                      result[1] += 33556580;
                    }
                  }
                }
              }
            } else {
              result[0] += 286331153;
              result[1] += 0;
            }
          }
        }
      } else {
        result[0] += 0;
        result[1] += 286331153;
      }
    } else {
      if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
          result[0] += 0;
          result[1] += 286331153;
        } else {
          if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e95b786))) ) ) {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e4f5644))) ) ) {
              if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
                if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e8e669f))) ) ) {
                  result[0] += 286331153;
                  result[1] += 0;
                } else {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea1320e))) ) ) {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6809ba))) ) ) {
                      result[0] += 215303270;
                      result[1] += 71027882;
                    } else {
                      result[0] += 279710779;
                      result[1] += 6620373;
                    }
                  } else {
                    result[0] += 286331153;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
                  if ( ( !(data[73].missing != -1) || ((*( ((int*)(data)) + 73 ))<=((int)(0x3f78f1aa))) ) ) {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7038ee))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 3755162;
                      result[1] += 282575990;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 286331153;
                    }
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea1fe82))) ) ) {
                      result[0] += 282029015;
                      result[1] += 4302137;
                    } else {
                      result[0] += 262303363;
                      result[1] += 24027789;
                    }
                  } else {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                      result[0] += 0;
                      result[1] += 286331153;
                    } else {
                      result[0] += 183625413;
                      result[1] += 102705739;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                result[0] += 0;
                result[1] += 286331153;
              } else {
                if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f37bee6))) ) ) {
                  result[0] += 0;
                  result[1] += 286331153;
                } else {
                  result[0] += 286331153;
                  result[1] += 0;
                }
              }
            }
          } else {
            result[0] += 0;
            result[1] += 286331153;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e932573))) ) ) {
          result[0] += 0;
          result[1] += 286331153;
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eace390))) ) ) {
            result[0] += 0;
            result[1] += 286331153;
          } else {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e03eae8))) ) ) {
              result[0] += 0;
              result[1] += 286331153;
            } else {
              if ( ( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x36d53000))) ) ) {
                if ( ( !(data[62].missing != -1) || ((*( ((int*)(data)) + 62 ))<=((int)(0x3f7e380c))) ) ) {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e073712))) ) ) {
                    result[0] += 0;
                    result[1] += 286331153;
                  } else {
                    result[0] += 286331153;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 286331153;
                  result[1] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 286331153;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f448739))) ) ) {
      result[0] += 0;
      result[1] += 286331153;
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e138919))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec2bc12))) ) ) {
          if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e05e4f4))) ) ) {
              result[0] += 0;
              result[1] += 286331153;
            } else {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
                result[0] += 0;
                result[1] += 286331153;
              } else {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb621fc))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7350da))) ) ) {
                      result[0] += 279026353;
                      result[1] += 7304799;
                    } else {
                      result[0] += 113451966;
                      result[1] += 172879186;
                    }
                  } else {
                    if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f464e4b))) ) ) {
                      result[0] += 285977548;
                      result[1] += 353604;
                    } else {
                      result[0] += 279172874;
                      result[1] += 7158278;
                    }
                  }
                } else {
                  if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f39a6ac))) ) ) {
                    result[0] += 0;
                    result[1] += 286331153;
                  } else {
                    if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae79d48))) ) ) {
                      result[0] += 286276865;
                      result[1] += 54287;
                    } else {
                      result[0] += 285018061;
                      result[1] += 1313091;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
              if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e95b786))) ) ) {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec07061))) ) ) {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                    result[0] += 286331153;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 139403272;
                      result[1] += 146927880;
                    }
                  }
                } else {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                    result[0] += 286331153;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb2ee32))) ) ) {
                      result[0] += 0;
                      result[1] += 286331153;
                    } else {
                      result[0] += 253177019;
                      result[1] += 33154133;
                    }
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 286331153;
              }
            } else {
              if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d728d94))) ) ) {
                result[0] += 0;
                result[1] += 286331153;
              } else {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                  result[0] += 0;
                  result[1] += 286331153;
                } else {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                    result[0] += 286331153;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec056d2))) ) ) {
                      result[0] += 157482134;
                      result[1] += 128849018;
                    } else {
                      result[0] += 93296019;
                      result[1] += 193035133;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f4db2b0))) ) ) {
            result[0] += 0;
            result[1] += 286331153;
          } else {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb505da))) ) ) {
              result[0] += 0;
              result[1] += 286331153;
            } else {
              result[0] += 286331153;
              result[1] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
          if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f2d52cb))) ) ) {
            result[0] += 0;
            result[1] += 286331153;
          } else {
            if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec52565))) ) ) {
              result[0] += 0;
              result[1] += 286331153;
            } else {
              if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f497d8a))) ) ) {
                result[0] += 286331153;
                result[1] += 0;
              } else {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb9172e))) ) ) {
                  result[0] += 286331153;
                  result[1] += 0;
                } else {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea3974e))) ) ) {
                    result[0] += 286331153;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f46cb20))) ) ) {
                      result[0] += 143165576;
                      result[1] += 143165576;
                    } else {
                      result[0] += 286331153;
                      result[1] += 0;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
            if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f327dc9))) ) ) {
              result[0] += 0;
              result[1] += 286331153;
            } else {
              if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3de10940))) ) ) {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0c7d46))) ) ) {
                  result[0] += 286331153;
                  result[1] += 0;
                } else {
                  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
                    result[0] += 286331153;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 286331153;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 286331153;
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += 286331153;
                result[1] += 0;
              } else {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
                  result[0] += 286331153;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 286331153;
                }
              }
            } else {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e891ac6))) ) ) {
                result[0] += 0;
                result[1] += 286331153;
              } else {
                if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f45a012))) ) ) {
                  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f49d791))) ) ) {
                    result[0] += 0;
                    result[1] += 286331153;
                  } else {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3ea57e34))) ) ) {
                      result[0] += 0;
                      result[1] += 286331153;
                    } else {
                      result[0] += 286331153;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3ea7b619))) ) ) {
                    result[0] += 0;
                    result[1] += 286331153;
                  } else {
                    result[0] += 286331153;
                    result[1] += 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[66].missing != -1) || ((*( ((int*)(data)) + 66 ))<=((int)(0x367fe000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e4f5644))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e19b730))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb73dc0))) ) ) {
            result[0] += 0;
            result[1] += 286331153;
          } else {
            if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f500f9e))) ) ) {
              result[0] += 0;
              result[1] += 286331153;
            } else {
              result[0] += 286331153;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
            result[0] += 0;
            result[1] += 286331153;
          } else {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea5fc90))) ) ) {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e07dfc0))) ) ) {
                result[0] += 0;
                result[1] += 286331153;
              } else {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e03417a))) ) ) {
                  result[0] += 0;
                  result[1] += 286331153;
                } else {
                  result[0] += 286331153;
                  result[1] += 0;
                }
              }
            } else {
              result[0] += 286331153;
              result[1] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e19b730))) ) ) {
          result[0] += 0;
          result[1] += 286331153;
        } else {
          if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3f180c))) ) ) {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3ea757a2))) ) ) {
              result[0] += 0;
              result[1] += 286331153;
            } else {
              result[0] += 286331153;
              result[1] += 0;
            }
          } else {
            result[0] += 286331153;
            result[1] += 0;
          }
        }
      }
    } else {
      result[0] += 0;
      result[1] += 286331153;
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 286331153;
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8dbd57))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
        result[0] += 0;
        result[1] += 286331153;
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
            if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f478e5d))) ) ) {
              if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aefe7ca))) ) ) {
                result[0] += 0;
                result[1] += 286331153;
              } else {
                if ( ( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f47f5c8))) ) ) {
                  result[0] += 0;
                  result[1] += 286331153;
                } else {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ebd59f2))) ) ) {
                    result[0] += 286331153;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 286331153;
                  }
                }
              }
            } else {
              result[0] += 0;
              result[1] += 286331153;
            }
          } else {
            if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f373418))) ) ) {
              if ( ( !(data[60].missing != -1) || ((*( ((int*)(data)) + 60 ))<=((int)(0x3f779c76))) ) ) {
                if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                    result[0] += 286331153;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
                      result[0] += 26030104;
                      result[1] += 260301048;
                    } else {
                      result[0] += 1072401;
                      result[1] += 285258751;
                    }
                  }
                } else {
                  if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
                    if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f4860f2))) ) ) {
                      result[0] += 54539267;
                      result[1] += 231791885;
                    } else {
                      result[0] += 0;
                      result[1] += 286331153;
                    }
                  } else {
                    if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f461cd8))) ) ) {
                      result[0] += 268977749;
                      result[1] += 17353403;
                    } else {
                      result[0] += 159072862;
                      result[1] += 127258290;
                    }
                  }
                }
              } else {
                result[0] += 286331153;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e96d05a))) ) ) {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                  result[0] += 286331153;
                  result[1] += 0;
                } else {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                    result[0] += 0;
                    result[1] += 286331153;
                  } else {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec056d2))) ) ) {
                      result[0] += 282189999;
                      result[1] += 4141153;
                    } else {
                      result[0] += 183364777;
                      result[1] += 102966375;
                    }
                  }
                }
              } else {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                  result[0] += 286331153;
                  result[1] += 0;
                } else {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                    result[0] += 286331153;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ebe1f78))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 116080197;
                      result[1] += 170250955;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e0d4a20))) ) ) {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
              if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e8e669f))) ) ) {
                result[0] += 286331153;
                result[1] += 0;
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e809c0e))) ) ) {
                  result[0] += 0;
                  result[1] += 286331153;
                } else {
                  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eaac72f))) ) ) {
                      result[0] += 217353630;
                      result[1] += 68977522;
                    } else {
                      result[0] += 283589267;
                      result[1] += 2741885;
                    }
                  } else {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9cee3c))) ) ) {
                      result[0] += 284378340;
                      result[1] += 1952812;
                    } else {
                      result[0] += 263107596;
                      result[1] += 23223556;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
                result[0] += 286331153;
                result[1] += 0;
              } else {
                if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0ee618))) ) ) {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e5c2ce6))) ) ) {
                      result[0] += 194296139;
                      result[1] += 92035013;
                    } else {
                      result[0] += 76996612;
                      result[1] += 209334540;
                    }
                  } else {
                    if ( ( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f487c0d))) ) ) {
                      result[0] += 278377509;
                      result[1] += 7953643;
                    } else {
                      result[0] += 241591910;
                      result[1] += 44739242;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 286331153;
                }
              }
            }
          } else {
            result[0] += 0;
            result[1] += 286331153;
          }
        }
      }
    } else {
      if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f363e20))) ) ) {
        result[0] += 0;
        result[1] += 286331153;
      } else {
        if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f414558))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e22fb72))) ) ) {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
              result[0] += 0;
              result[1] += 286331153;
            } else {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb0960f))) ) ) {
                result[0] += 0;
                result[1] += 286331153;
              } else {
                if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee74630))) ) ) {
                  result[0] += 0;
                  result[1] += 286331153;
                } else {
                  if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f53226a))) ) ) {
                    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f448739))) ) ) {
                      result[0] += 281433655;
                      result[1] += 4897497;
                    } else {
                      result[0] += 286288323;
                      result[1] += 42829;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 286331153;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eabc7ce))) ) ) {
              result[0] += 0;
              result[1] += 286331153;
            } else {
              result[0] += 286331153;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eac851a))) ) ) {
            result[0] += 0;
            result[1] += 286331153;
          } else {
            if ( ( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x36d53000))) ) ) {
              result[0] += 286331153;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 286331153;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 286331153;
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8dbd57))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
          result[0] += 0;
          result[1] += 286331153;
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += 0;
            result[1] += 286331153;
          } else {
            if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
              result[0] += 286331153;
              result[1] += 0;
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e7350da))) ) ) {
                  if ( ( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7e8ade))) ) ) {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb97de0))) ) ) {
                      result[0] += 286190656;
                      result[1] += 140496;
                    } else {
                      result[0] += 275804272;
                      result[1] += 10526880;
                    }
                  } else {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e13bf08))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 286331153;
                    }
                  }
                } else {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e4c3fb8))) ) ) {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6d22c4))) ) ) {
                      result[0] += 0;
                      result[1] += 286331153;
                    } else {
                      result[0] += 279554084;
                      result[1] += 6777068;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e83b2aa))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 250539758;
                      result[1] += 35791394;
                    }
                  }
                }
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e08b800))) ) ) {
                    if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f37e825))) ) ) {
                      result[0] += 79148448;
                      result[1] += 207182704;
                    } else {
                      result[0] += 223338299;
                      result[1] += 62992853;
                    }
                  } else {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                      result[0] += 0;
                      result[1] += 286331153;
                    } else {
                      result[0] += 258109601;
                      result[1] += 28221551;
                    }
                  }
                } else {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6b2045))) ) ) {
                    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 251762699;
                      result[1] += 34568453;
                    }
                  } else {
                    result[0] += 286331153;
                    result[1] += 0;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea9fad8))) ) ) {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6ad143))) ) ) {
                  result[0] += 0;
                  result[1] += 286331153;
                } else {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec1232a))) ) ) {
                    result[0] += 286331153;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f468492))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 286331153;
                    }
                  }
                }
              } else {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                  result[0] += 0;
                  result[1] += 286331153;
                } else {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3ea0ca6a))) ) ) {
                    if ( ( !(data[69].missing != -1) || ((*( ((int*)(data)) + 69 ))<=((int)(0x3f510ea8))) ) ) {
                      result[0] += 182210733;
                      result[1] += 104120419;
                    } else {
                      result[0] += 278555386;
                      result[1] += 7775766;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 280716816;
                      result[1] += 5614336;
                    } else {
                      result[0] += 132152839;
                      result[1] += 154178313;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
                if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e8e669f))) ) ) {
                  result[0] += 286331153;
                  result[1] += 0;
                } else {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6b2045))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e072ceb))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 136348168;
                      result[1] += 149982984;
                    }
                  } else {
                    if ( ( !(data[70].missing != -1) || ((*( ((int*)(data)) + 70 ))<=((int)(0x3f6eae4a))) ) ) {
                      result[0] += 250539758;
                      result[1] += 35791394;
                    } else {
                      result[0] += 286331153;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7350da))) ) ) {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec38888))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 75696741;
                      result[1] += 210634411;
                    }
                  } else {
                    if ( ( !(data[50].missing != -1) || ((*( ((int*)(data)) + 50 ))<=((int)(0x3e12bb51))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 5614336;
                      result[1] += 280716816;
                    }
                  }
                } else {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                      result[0] += 143165576;
                      result[1] += 143165576;
                    } else {
                      result[0] += 0;
                      result[1] += 286331153;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 286331153;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
              result[0] += 286331153;
              result[1] += 0;
            } else {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea3974e))) ) ) {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec056d2))) ) ) {
                    result[0] += 286331153;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 103079215;
                      result[1] += 183251937;
                    }
                  }
                } else {
                  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f490576))) ) ) {
                    if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3f680866))) ) ) {
                      result[0] += 95443717;
                      result[1] += 190887435;
                    } else {
                      result[0] += 0;
                      result[1] += 286331153;
                    }
                  } else {
                    if ( ( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f4a1e24))) ) ) {
                      result[0] += 281307799;
                      result[1] += 5023353;
                    } else {
                      result[0] += 0;
                      result[1] += 286331153;
                    }
                  }
                }
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6efc3a))) ) ) {
                    result[0] += 0;
                    result[1] += 286331153;
                  } else {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb79c96))) ) ) {
                      result[0] += 262470223;
                      result[1] += 23860929;
                    } else {
                      result[0] += 0;
                      result[1] += 286331153;
                    }
                  }
                } else {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3eba4384))) ) ) {
                    if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fe908))) ) ) {
                      result[0] += 9138228;
                      result[1] += 277192924;
                    } else {
                      result[0] += 286331153;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 286331153;
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3e4710))) ) ) {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
              result[0] += 0;
              result[1] += 286331153;
            } else {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb416a6))) ) ) {
                  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e94d152))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 286331153;
                    }
                  } else {
                    if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f373418))) ) ) {
                      result[0] += 238609294;
                      result[1] += 47721858;
                    } else {
                      result[0] += 286331153;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 89989790;
                      result[1] += 196341362;
                    }
                  } else {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e4b7a16))) ) ) {
                      result[0] += 27012372;
                      result[1] += 259318780;
                    } else {
                      result[0] += 286331153;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
                  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f526a29))) ) ) {
                    result[0] += 286331153;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 286331153;
                  }
                } else {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                    result[0] += 0;
                    result[1] += 286331153;
                  } else {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e939ec0))) ) ) {
                      result[0] += 192143273;
                      result[1] += 94187879;
                    } else {
                      result[0] += 68470493;
                      result[1] += 217860659;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f44cf16))) ) ) {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                result[0] += 0;
                result[1] += 286331153;
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9603e4))) ) ) {
                    if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f373418))) ) ) {
                      result[0] += 90420364;
                      result[1] += 195910788;
                    } else {
                      result[0] += 259061519;
                      result[1] += 27269633;
                    }
                  } else {
                    result[0] += 286331153;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                    result[0] += 286331153;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aef3e00))) ) ) {
                      result[0] += 286331153;
                      result[1] += 0;
                    } else {
                      result[0] += 13936472;
                      result[1] += 272394680;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                result[0] += 0;
                result[1] += 286331153;
              } else {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                  result[0] += 0;
                  result[1] += 286331153;
                } else {
                  if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f630b9a))) ) ) {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb79c96))) ) ) {
                      result[0] += 23091222;
                      result[1] += 263239930;
                    } else {
                      result[0] += 247285995;
                      result[1] += 39045157;
                    }
                  } else {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e13bf07))) ) ) {
                      result[0] += 247709741;
                      result[1] += 38621411;
                    } else {
                      result[0] += 0;
                      result[1] += 286331153;
                    }
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[62].missing != -1) || ((*( ((int*)(data)) + 62 ))<=((int)(0x3f7e4c4f))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f40f358))) ) ) {
          result[0] += 0;
          result[1] += 286331153;
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e0d974c))) ) ) {
            if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec5d64a))) ) ) {
              result[0] += 0;
              result[1] += 286331153;
            } else {
              if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea895f6))) ) ) {
                if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f44ffbe))) ) ) {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
                    if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee74630))) ) ) {
                      result[0] += 0;
                      result[1] += 286331153;
                    } else {
                      result[0] += 286322961;
                      result[1] += 8191;
                    }
                  } else {
                    if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f501dba))) ) ) {
                      result[0] += 261504098;
                      result[1] += 24827054;
                    } else {
                      result[0] += 47721858;
                      result[1] += 238609294;
                    }
                  }
                } else {
                  if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f539c6a))) ) ) {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb0960f))) ) ) {
                      result[0] += 0;
                      result[1] += 286331153;
                    } else {
                      result[0] += 286035203;
                      result[1] += 295949;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 286331153;
                  }
                }
              } else {
                result[0] += 286331153;
                result[1] += 0;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 286331153;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 286331153;
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
    

    FILE* file = fopen("./codegen/esa_3_months_global/split_1/test_data.csv", "r");
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
