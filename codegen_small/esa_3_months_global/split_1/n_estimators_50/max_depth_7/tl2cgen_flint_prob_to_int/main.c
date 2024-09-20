
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
  if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
      if ( LIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f44cf16))) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6ad143))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
              if ( LIKELY( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f48fefc))) ) ) {
                result[0] += 70983769;
                result[1] += 14915576;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            } else {
              if ( LIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
                result[0] += 85833292;
                result[1] += 66053;
              } else {
                result[0] += 85575454;
                result[1] += 323891;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
            if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
              if ( LIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eaec55a))) ) ) {
                result[0] += 37157477;
                result[1] += 48741868;
              } else {
                result[0] += 6135667;
                result[1] += 79763678;
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f46693e))) ) ) {
                result[0] += 76520757;
                result[1] += 9378588;
              } else {
                result[0] += 82047357;
                result[1] += 3851988;
              }
            }
          } else {
            if ( UNLIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eaac72f))) ) ) {
              if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 77963651;
                result[1] += 7935694;
              }
            } else {
              if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 84366797;
                result[1] += 1532548;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e0d4a20))) ) ) {
              if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += 82549238;
                result[1] += 3350107;
              } else {
                result[0] += 67741760;
                result[1] += 18157585;
              }
            } else {
              result[0] += 0;
              result[1] += 85899345;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0d5b02))) ) ) {
        if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb859e2))) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e77f2fb))) ) ) {
              if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            } else {
              result[0] += 85899345;
              result[1] += 0;
            }
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
            if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0c7d46))) ) ) {
                result[0] += 84810042;
                result[1] += 1089303;
              } else {
                result[0] += 60960826;
                result[1] += 24938519;
              }
            }
          } else {
            if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
              if ( LIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed23173))) ) ) {
                result[0] += 35240757;
                result[1] += 50658588;
              } else {
                result[0] += 22940478;
                result[1] += 62958867;
              }
            } else {
              result[0] += 85899345;
              result[1] += 0;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e90d462))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f431db8))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            if ( UNLIKELY( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f393ce4))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb621fc))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85875004;
                result[1] += 24340;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3ea757a2))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3acc9585))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( LIKELY( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x36d52000))) ) ) {
          if ( LIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed3bc9c))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f522de3))) ) ) {
              result[0] += 85899345;
              result[1] += 0;
            } else {
              if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e970209))) ) ) {
                result[0] += 85870452;
                result[1] += 28893;
              } else {
                result[0] += 84809252;
                result[1] += 1090093;
              }
            }
          }
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    if ( LIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f44896c))) ) ) {
      if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1e5951))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    } else {
      if ( LIKELY( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6383af))) ) ) {
        if ( LIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3e4710))) ) ) {
          if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e9a7c4a))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        } else {
          if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e93eb6e))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        }
      } else {
        if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edae3a8))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
      if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1ccd5a))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f3b0332))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
          if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
            if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e95378d))) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec1ef9e))) ) ) {
                result[0] += 85061698;
                result[1] += 837646;
              } else {
                result[0] += 75673233;
                result[1] += 10226112;
              }
            } else {
              if ( UNLIKELY( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f377010))) ) ) {
                result[0] += 50758704;
                result[1] += 35140641;
              } else {
                result[0] += 76268774;
                result[1] += 9630571;
              }
            }
          } else {
            if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += 55332198;
                result[1] += 30567147;
              } else {
                result[0] += 17484579;
                result[1] += 68414766;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8603ba))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( LIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3aea9952))) ) ) {
                result[0] += 85883535;
                result[1] += 15810;
              } else {
                result[0] += 85689528;
                result[1] += 209817;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      if ( LIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e4f5644))) ) ) {
        if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
          if ( UNLIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ad8b0ba))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de84e))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( UNLIKELY( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee74630))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85825217;
                result[1] += 74128;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e18f0c4))) ) ) {
            if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
              if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de84e))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 83567476;
                result[1] += 2331869;
              }
            } else {
              if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
                result[0] += 85683083;
                result[1] += 216262;
              } else {
                result[0] += 10191826;
                result[1] += 75707519;
              }
            }
          } else {
            if ( LIKELY( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f50ec1a))) ) ) {
              if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d4b554a))) ) ) {
                result[0] += 85740636;
                result[1] += 158708;
              } else {
                result[0] += 62664276;
                result[1] += 23235068;
              }
            } else {
              result[0] += 0;
              result[1] += 85899345;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          if ( LIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae8716e))) ) ) {
            if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edded12))) ) ) {
              if ( LIKELY( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7a1c2c))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 12494450;
                result[1] += 73404895;
              }
            } else {
              result[0] += 85899345;
              result[1] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb79c96))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              result[0] += 85899345;
              result[1] += 0;
            }
          }
        }
      }
    }
  } else {
    result[0] += 0;
    result[1] += 85899345;
  }
  if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    if ( LIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3ea06598))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
          if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
            if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e809c0e))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( LIKELY( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ebee51c))) ) ) {
                result[0] += 85710080;
                result[1] += 189265;
              } else {
                result[0] += 83957082;
                result[1] += 1942263;
              }
            }
          } else {
            if ( UNLIKELY( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
              if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
                result[0] += 2996488;
                result[1] += 82902857;
              } else {
                result[0] += 57266230;
                result[1] += 28633115;
              }
            } else {
              if ( LIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3aea9952))) ) ) {
                result[0] += 80836989;
                result[1] += 5062356;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
            if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
              if ( UNLIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec1232a))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 2454267;
                result[1] += 83445078;
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb7f29b))) ) ) {
                result[0] += 79588373;
                result[1] += 6310972;
              } else {
                result[0] += 60405155;
                result[1] += 25494190;
              }
            }
          } else {
            if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f522de3))) ) ) {
              if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += 82228433;
                result[1] += 3670912;
              } else {
                result[0] += 2792825;
                result[1] += 83106519;
              }
            } else {
              if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 725595;
                result[1] += 85173750;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e0d800c))) ) ) {
            if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x36552000))) ) ) {
                result[0] += 85743026;
                result[1] += 156319;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea1fe82))) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ebebe06))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      } else {
        result[0] += 0;
        result[1] += 85899345;
      }
    }
  }
  if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
      if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dc55866))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 85899345;
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e10712c))) ) ) {
          if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
            if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
              if ( UNLIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
                result[0] += 7669584;
                result[1] += 78229761;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            } else {
              result[0] += 0;
              result[1] += 85899345;
            }
          } else {
            if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
              if ( UNLIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
                result[0] += 76945173;
                result[1] += 8954172;
              } else {
                result[0] += 63437526;
                result[1] += 22461819;
              }
            } else {
              if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85862964;
                result[1] += 36381;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( LIKELY( !(data[44].missing != -1) || ((*( ((int*)(data)) + 44 ))<=((int)(0x36552000))) ) ) {
                result[0] += 85679130;
                result[1] += 220215;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8dbd57))) ) ) {
      if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d728d94))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
          if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e809c0e))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            if ( LIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85838656;
                result[1] += 60689;
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb4dc48))) ) ) {
                result[0] += 85420353;
                result[1] += 478992;
              } else {
                result[0] += 79333666;
                result[1] += 6565679;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
              if ( LIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea2caf8))) ) ) {
                result[0] += 72301742;
                result[1] += 13597603;
              } else {
                result[0] += 32014979;
                result[1] += 53884366;
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb416a6))) ) ) {
                result[0] += 18763451;
                result[1] += 67135894;
              } else {
                result[0] += 7704964;
                result[1] += 78194381;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae476b4))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e93eafe))) ) ) {
              if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f504bde))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85406615;
                result[1] += 492730;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x36552000))) ) ) {
                result[0] += 85789164;
                result[1] += 110181;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f36800b))) ) ) {
    if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb621fc))) ) ) {
      if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ecc7888))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f431db8))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( UNLIKELY( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f367fe8))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
      if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1e5870))) ) ) {
        if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1e5870))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb38ba0))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        }
      } else {
        if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb4488e))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee58c9f))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( UNLIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3d98d6))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee30aac))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              result[0] += 85899345;
              result[1] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0ee618))) ) ) {
              if ( LIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae79d48))) ) ) {
                result[0] += 84180298;
                result[1] += 1719047;
              } else {
                result[0] += 77250512;
                result[1] += 8648833;
              }
            } else {
              if ( LIKELY( !(data[66].missing != -1) || ((*( ((int*)(data)) + 66 ))<=((int)(0x36554000))) ) ) {
                result[0] += 85777461;
                result[1] += 121884;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0c7d46))) ) ) {
      if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
        if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e657868))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( UNLIKELY( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f381cc3))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7288c2))) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb416a6))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 85888539;
                result[1] += 10806;
              }
            } else {
              if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f513ce0))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 84222170;
                result[1] += 1677175;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e87f206))) ) ) {
          if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1072de))) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7c951c))) ) ) {
              if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d728d94))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 61450402;
                result[1] += 24448943;
              }
            } else {
              if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
                result[0] += 84728081;
                result[1] += 1171264;
              } else {
                result[0] += 23945392;
                result[1] += 61953953;
              }
            }
          } else {
            if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
              if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
                result[0] += 22147542;
                result[1] += 63751803;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            } else {
              if ( LIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae945bf))) ) ) {
                result[0] += 85620903;
                result[1] += 278441;
              } else {
                result[0] += 81797410;
                result[1] += 4101935;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edb5c08))) ) ) {
            if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              result[0] += 85899345;
              result[1] += 0;
            }
          } else {
            if ( LIKELY( !(data[75].missing != -1) || ((*( ((int*)(data)) + 75 ))<=((int)(0x38850f88))) ) ) {
              if ( LIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f52bb8a))) ) ) {
                result[0] += 85888194;
                result[1] += 11151;
              } else {
                result[0] += 59055800;
                result[1] += 26843545;
              }
            } else {
              result[0] += 0;
              result[1] += 85899345;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e919a5e))) ) ) {
        if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( LIKELY( !(data[44].missing != -1) || ((*( ((int*)(data)) + 44 ))<=((int)(0x37a1ac00))) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f46693e))) ) ) {
              if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
                result[0] += 67661397;
                result[1] += 18237948;
              } else {
                result[0] += 85658055;
                result[1] += 241290;
              }
            } else {
              result[0] += 0;
              result[1] += 85899345;
            }
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        }
      } else {
        if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb153bb))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( UNLIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3ada2eaa))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3d75f0))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd59576))) ) ) {
          if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
              if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 80668603;
                result[1] += 5230742;
              }
            } else {
              if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e822724))) ) ) {
                result[0] += 85319728;
                result[1] += 579617;
              } else {
                result[0] += 50573595;
                result[1] += 35325750;
              }
            }
          } else {
            if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e809c0e))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( UNLIKELY( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee74630))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85363477;
                result[1] += 535868;
              }
            }
          }
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3ea8d23c))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e03eae8))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3acc9585))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x36552000))) ) ) {
            if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d258d46))) ) ) {
              result[0] += 85899345;
              result[1] += 0;
            } else {
              if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1b4246))) ) ) {
                result[0] += 84513872;
                result[1] += 1385473;
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3cd958e9))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 85899345;
      }
    }
  } else {
    if ( UNLIKELY( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f3b5226))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7b0a06))) ) ) {
        if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
          if ( LIKELY( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6383af))) ) ) {
            if ( LIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9db3e0))) ) ) {
              if ( UNLIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6e36d0))) ) ) {
                result[0] += 74695083;
                result[1] += 11204262;
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 63743827;
                result[1] += 22155518;
              }
            }
          } else {
            if ( UNLIKELY( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f377010))) ) ) {
              if ( LIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3ea0ca6a))) ) ) {
                result[0] += 83513252;
                result[1] += 2386092;
              } else {
                result[0] += 34359738;
                result[1] += 51539607;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e10f037))) ) ) {
                result[0] += 85722452;
                result[1] += 176893;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
            if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e08b800))) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0e7812))) ) ) {
                result[0] += 83638836;
                result[1] += 2260509;
              } else {
                result[0] += 50107951;
                result[1] += 35791394;
              }
            } else {
              if ( LIKELY( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7e8ade))) ) ) {
                result[0] += 85169064;
                result[1] += 730281;
              } else {
                result[0] += 61356675;
                result[1] += 24542670;
              }
            }
          } else {
            if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
              if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                result[0] += 78536544;
                result[1] += 7362801;
              } else {
                result[0] += 29819980;
                result[1] += 56079365;
              }
            } else {
              if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e60f7a3))) ) ) {
                result[0] += 9398177;
                result[1] += 76501168;
              } else {
                result[0] += 2564159;
                result[1] += 83335186;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
          if ( LIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e805e98))) ) ) {
            if ( LIKELY( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
              if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0e7812))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb505da))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 81127160;
                result[1] += 4772185;
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f42a534))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              result[0] += 85899345;
              result[1] += 0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e878fb0))) ) ) {
            if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
              if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
                result[0] += 59165365;
                result[1] += 26733980;
              } else {
                result[0] += 2863311;
                result[1] += 83036034;
              }
            } else {
              result[0] += 0;
              result[1] += 85899345;
            }
          } else {
            if ( UNLIKELY( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f621b95))) ) ) {
              if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd04c5c))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            } else {
              if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85856186;
                result[1] += 43159;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aeee91c))) ) ) {
    if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e72bbd2))) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f448739))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ebf8a7a))) ) ) {
          if ( LIKELY( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f46b870))) ) ) {
            if ( UNLIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e75eeba))) ) ) {
              result[0] += 85899345;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 85899345;
            }
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    } else {
      result[0] += 85899345;
      result[1] += 0;
    }
  } else {
    if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
      if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1ccd5a))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e21705c))) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0b2bea))) ) ) {
            if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e91fd22))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              result[0] += 85899345;
              result[1] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c462))) ) ) {
              result[0] += 85899345;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 85899345;
            }
          }
        } else {
          if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3cd958e9))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
          if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
            if ( UNLIKELY( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6347b6))) ) ) {
              if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e675ad4))) ) ) {
                result[0] += 83401154;
                result[1] += 2498191;
              } else {
                result[0] += 41105208;
                result[1] += 44794137;
              }
            } else {
              if ( UNLIKELY( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f497d8a))) ) ) {
                result[0] += 71691659;
                result[1] += 14207686;
              } else {
                result[0] += 85429522;
                result[1] += 469823;
              }
            }
          } else {
            if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( UNLIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec056d2))) ) ) {
                result[0] += 70924653;
                result[1] += 14974691;
              } else {
                result[0] += 56223592;
                result[1] += 29675753;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8603ba))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            if ( LIKELY( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f50ec1a))) ) ) {
              if ( UNLIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f4443c3))) ) ) {
                result[0] += 82164591;
                result[1] += 3734754;
              } else {
                result[0] += 85844347;
                result[1] += 54997;
              }
            } else {
              if ( LIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6fc1dd))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f4443c3))) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0d5b02))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( LIKELY( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f377010))) ) ) {
          if ( LIKELY( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6347b6))) ) ) {
            if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e932573))) ) ) {
              if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dc55866))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            } else {
              if ( LIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f43fe1a))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 1620742;
                result[1] += 84278603;
              }
            }
          } else {
            if ( LIKELY( !(data[62].missing != -1) || ((*( ((int*)(data)) + 62 ))<=((int)(0x3f7e380c))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( UNLIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ebf8a5d))) ) ) {
                result[0] += 11848185;
                result[1] += 74051160;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
            if ( LIKELY( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f48904a))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              result[0] += 85899345;
              result[1] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f37e825))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              result[0] += 85899345;
              result[1] += 0;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
      if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f513ce0))) ) ) {
        if ( LIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea5301a))) ) ) {
          if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
            if ( LIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aefe7ca))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                result[0] += 34359738;
                result[1] += 51539607;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            }
          } else {
            if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
                result[0] += 85860873;
                result[1] += 38472;
              } else {
                result[0] += 78808720;
                result[1] += 7090625;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb79c96))) ) ) {
            if ( UNLIKELY( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f46ad4e))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
                result[0] += 47392742;
                result[1] += 38506603;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            }
          } else {
            if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1072de))) ) ) {
              result[0] += 85899345;
              result[1] += 0;
            } else {
              if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
          if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42e172))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            if ( LIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3af36342))) ) ) {
              result[0] += 85899345;
              result[1] += 0;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e9eccae))) ) ) {
                result[0] += 42949672;
                result[1] += 42949672;
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f373418))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += 79851927;
                result[1] += 6047417;
              } else {
                result[0] += 16923453;
                result[1] += 68975892;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f44ffbe))) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e20efac))) ) ) {
            if ( LIKELY( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x36d53000))) ) ) {
              if ( UNLIKELY( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f3571d4))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85857351;
                result[1] += 41994;
              }
            } else {
              result[0] += 0;
              result[1] += 85899345;
            }
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        } else {
          if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb2ce54))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e9199ed))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      result[0] += 85899345;
      result[1] += 0;
    }
  } else {
    if ( UNLIKELY( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f34ff90))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
        if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
          if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3ddb3fdd))) ) ) {
            if ( LIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea3974e))) ) ) {
              if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dc55866))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 85841266;
                result[1] += 58079;
              }
            } else {
              if ( LIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e95378d))) ) ) {
                result[0] += 85893409;
                result[1] += 5936;
              } else {
                result[0] += 85172412;
                result[1] += 726933;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        } else {
          if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d374ba3))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea06598))) ) ) {
                result[0] += 75181514;
                result[1] += 10717831;
              } else {
                result[0] += 84759089;
                result[1] += 1140256;
              }
            } else {
              if ( UNLIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
                result[0] += 75056773;
                result[1] += 10842572;
              } else {
                result[0] += 37420119;
                result[1] += 48479225;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3f180c))) ) ) {
          if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
            if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3e0142))) ) ) {
              if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e925fe8))) ) ) {
                result[0] += 83673974;
                result[1] += 2225371;
              } else {
                result[0] += 65358197;
                result[1] += 20541147;
              }
            } else {
              if ( LIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e714cea))) ) ) {
                result[0] += 81107800;
                result[1] += 4791545;
              } else {
                result[0] += 84060287;
                result[1] += 1839058;
              }
            }
          } else {
            if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e900e68))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            } else {
              if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
                result[0] += 48784779;
                result[1] += 37114566;
              } else {
                result[0] += 80906905;
                result[1] += 4992440;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e09da8c))) ) ) {
              if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 74376262;
                result[1] += 11523082;
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 288434;
                result[1] += 85610911;
              }
            }
          } else {
            if ( LIKELY( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec44c73))) ) ) {
              if ( LIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f52ef00))) ) ) {
                result[0] += 84482118;
                result[1] += 1417227;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            } else {
              if ( LIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f40ba05))) ) ) {
                result[0] += 4405094;
                result[1] += 81494251;
              } else {
                result[0] += 68719476;
                result[1] += 17179869;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e913728))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      result[0] += 85899345;
      result[1] += 0;
    }
  } else {
    if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
      if ( LIKELY( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f4e2f38))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4db514))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
        if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
          if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
            if ( UNLIKELY( !(data[73].missing != -1) || ((*( ((int*)(data)) + 73 ))<=((int)(0x3f776d8c))) ) ) {
              if ( UNLIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed0a64a))) ) ) {
                result[0] += 84960555;
                result[1] += 938790;
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            } else {
              result[0] += 85899345;
              result[1] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e08b800))) ) ) {
              if ( UNLIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea9fad8))) ) ) {
                result[0] += 38343809;
                result[1] += 47555536;
              } else {
                result[0] += 83985746;
                result[1] += 1913599;
              }
            } else {
              if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6c5c58))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 84243281;
                result[1] += 1656064;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
            if ( LIKELY( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f4de63d))) ) ) {
              if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e797ef2))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 71582788;
                result[1] += 14316557;
              }
            } else {
              if ( UNLIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6809ba))) ) ) {
                result[0] += 55581929;
                result[1] += 30317416;
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
              if ( UNLIKELY( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 75911049;
                result[1] += 9988296;
              }
            } else {
              if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 6375609;
                result[1] += 79523736;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
          if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f513ce0))) ) ) {
            if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
              if ( LIKELY( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f497d8a))) ) ) {
                result[0] += 83445078;
                result[1] += 2454267;
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            } else {
              if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
                result[0] += 12984784;
                result[1] += 72914561;
              } else {
                result[0] += 78741067;
                result[1] += 7158278;
              }
            }
          } else {
            if ( LIKELY( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f499b98))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e9603e4))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f422cae))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( UNLIKELY( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f2af1fa))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85863659;
                result[1] += 35686;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    if ( UNLIKELY( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f373418))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
        if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea3559e))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      } else {
        if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3cd958e9))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eb12ab8))) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
        if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e946b36))) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ebebe06))) ) ) {
              if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 65595864;
                result[1] += 20303481;
              }
            } else {
              if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                result[0] += 750212;
                result[1] += 85149133;
              } else {
                result[0] += 81984449;
                result[1] += 3914896;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
            if ( UNLIKELY( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f36f7fc))) ) ) {
              if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 12003402;
                result[1] += 73895943;
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
                result[0] += 57977210;
                result[1] += 27922135;
              } else {
                result[0] += 80302873;
                result[1] += 5596472;
              }
            }
          } else {
            if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
              if ( LIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea1fe82))) ) ) {
                result[0] += 30156153;
                result[1] += 55743192;
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            } else {
              if ( LIKELY( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f3a2236))) ) ) {
                result[0] += 298650;
                result[1] += 85600695;
              } else {
                result[0] += 6362914;
                result[1] += 79536431;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e93eafe))) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
            if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3da40e98))) ) ) {
              if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0c9578))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 4256273;
                result[1] += 81643072;
              }
            } else {
              result[0] += 0;
              result[1] += 85899345;
            }
          } else {
            if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( LIKELY( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38850440))) ) ) {
                result[0] += 85832444;
                result[1] += 66901;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f50ec1a))) ) ) {
            if ( LIKELY( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38850f88))) ) ) {
              if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f504bde))) ) ) {
                result[0] += 85669129;
                result[1] += 230216;
              } else {
                result[0] += 85888781;
                result[1] += 10564;
              }
            } else {
              result[0] += 0;
              result[1] += 85899345;
            }
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        }
      }
    } else {
      result[0] += 0;
      result[1] += 85899345;
    }
  }
  if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1b4246))) ) ) {
    if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
      if ( UNLIKELY( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
        if ( LIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eaf91cf))) ) ) {
          if ( LIKELY( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f377010))) ) ) {
            if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
              result[0] += 85899345;
              result[1] += 0;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e09da8c))) ) ) {
                result[0] += 5692125;
                result[1] += 80207220;
              } else {
                result[0] += 19088743;
                result[1] += 66810602;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e822724))) ) ) {
                result[0] += 84718598;
                result[1] += 1180747;
              } else {
                result[0] += 41875931;
                result[1] += 44023414;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7038ee))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e69462e))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
              if ( UNLIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea5301a))) ) ) {
                result[0] += 83545939;
                result[1] += 2353406;
              } else {
                result[0] += 85714665;
                result[1] += 184680;
              }
            } else {
              if ( UNLIKELY( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                result[0] += 23046165;
                result[1] += 62853179;
              } else {
                result[0] += 84410015;
                result[1] += 1489330;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
        if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
          if ( UNLIKELY( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f364ba6))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f30ce74))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
                result[0] += 85401863;
                result[1] += 497482;
              } else {
                result[0] += 14914504;
                result[1] += 70984841;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e479de8))) ) ) {
            if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
              if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
                result[0] += 7809031;
                result[1] += 78090314;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            } else {
              if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f513ce0))) ) ) {
                result[0] += 84475599;
                result[1] += 1423746;
              } else {
                result[0] += 62683306;
                result[1] += 23216039;
              }
            }
          } else {
            if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
              if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ad90574))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 84597840;
                result[1] += 1301505;
              }
            } else {
              if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
                result[0] += 464938;
                result[1] += 85434407;
              } else {
                result[0] += 85194727;
                result[1] += 704618;
              }
            }
          }
        }
      } else {
        result[0] += 0;
        result[1] += 85899345;
      }
    }
  } else {
    if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
      if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
        if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb79c96))) ) ) {
          if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f4359f0))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            if ( LIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea92e63))) ) ) {
              if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e75a17a))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 6135667;
                result[1] += 79763678;
              }
            } else {
              if ( UNLIKELY( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f44ffa6))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 57266230;
                result[1] += 28633115;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f355bf2))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7421ac))) ) ) {
              result[0] += 85899345;
              result[1] += 0;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e122986))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f461dd6))) ) ) {
          if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f522de3))) ) ) {
            if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1072de))) ) ) {
              result[0] += 85899345;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 85899345;
            }
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7350da))) ) ) {
            if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e9404fb))) ) ) {
              result[0] += 85899345;
              result[1] += 0;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 15618062;
                result[1] += 70281283;
              }
            }
          } else {
            if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e892d56))) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb4795b))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 14316557;
                result[1] += 71582788;
              }
            } else {
              result[0] += 0;
              result[1] += 85899345;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e1da382))) ) ) {
        if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea895f6))) ) ) {
            if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8b6c47))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e98f0c4))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            }
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 85899345;
      }
    }
  }
  if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
      if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( LIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3ea06598))) ) ) {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( LIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae945bf))) ) ) {
                result[0] += 85109040;
                result[1] += 790304;
              } else {
                result[0] += 81716098;
                result[1] += 4183247;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f44cf16))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            if ( LIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9a3a9f))) ) ) {
              result[0] += 85899345;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 85899345;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3acd945e))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3ea69a56))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e03eae8))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            if ( LIKELY( !(data[66].missing != -1) || ((*( ((int*)(data)) + 66 ))<=((int)(0x36554000))) ) ) {
              if ( LIKELY( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x388d0280))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            } else {
              result[0] += 0;
              result[1] += 85899345;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
    if ( UNLIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aeee91c))) ) ) {
      if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dc55866))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( LIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
        if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46e1c3))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4f5adb))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb621fc))) ) ) {
              if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de84e))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 81277430;
                result[1] += 4621915;
              }
            } else {
              if ( LIKELY( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7c17e2))) ) ) {
                result[0] += 85867574;
                result[1] += 31771;
              } else {
                result[0] += 85743318;
                result[1] += 156026;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea06598))) ) ) {
              if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 79596091;
                result[1] += 6303254;
              }
            } else {
              result[0] += 85899345;
              result[1] += 0;
            }
          } else {
            if ( LIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae79d48))) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
                result[0] += 51252593;
                result[1] += 34646752;
              } else {
                result[0] += 85706313;
                result[1] += 193032;
              }
            } else {
              if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += 85289265;
                result[1] += 610080;
              } else {
                result[0] += 31283132;
                result[1] += 54616213;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edb5c08))) ) ) {
      if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0d5b02))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( UNLIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3f180c))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb73dc0))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f44c378))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              result[0] += 85899345;
              result[1] += 0;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x36d52000))) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f46e1c3))) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e1e4c31))) ) ) {
            if ( LIKELY( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f50ec1a))) ) ) {
              if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1b4246))) ) ) {
                result[0] += 85225331;
                result[1] += 674014;
              } else {
                result[0] += 85895096;
                result[1] += 4249;
              }
            } else {
              result[0] += 0;
              result[1] += 85899345;
            }
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        } else {
          if ( LIKELY( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e16b69b))) ) ) {
            if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3ea403fa))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              result[0] += 85899345;
              result[1] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 85899345;
      }
    }
  }
  if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1e5870))) ) ) {
      if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1e5870))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e95d9b9))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    } else {
      if ( UNLIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aefe7ca))) ) ) {
        if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eab68f8))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      } else {
        if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e131598))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e98cf7d))) ) ) {
      if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d3b5afc))) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e87f206))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e03eae8))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e91fcb2))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85889050;
                result[1] += 10295;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
            if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( UNLIKELY( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
                result[0] += 39916967;
                result[1] += 45982378;
              } else {
                result[0] += 69623680;
                result[1] += 16275665;
              }
            }
          } else {
            if ( UNLIKELY( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f2bcf5d))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de84e))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85162186;
                result[1] += 737158;
              }
            }
          }
        }
      }
    } else {
      result[0] += 0;
      result[1] += 85899345;
    }
  }
  if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    if ( LIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3ea06598))) ) ) {
      if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
        if ( LIKELY( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f4bf3dc))) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e97027a))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      } else {
        if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
          if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3eba75de))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
            if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1ccd5a))) ) ) {
              if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                result[0] += 419703;
                result[1] += 85479642;
              } else {
                result[0] += 65283502;
                result[1] += 20615843;
              }
            } else {
              if ( UNLIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f4f1da8))) ) ) {
                result[0] += 85839883;
                result[1] += 59462;
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f2d7a67))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85542151;
                result[1] += 357194;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[70].missing != -1) || ((*( ((int*)(data)) + 70 ))<=((int)(0x3f6f07e6))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( UNLIKELY( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3f68bba0))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e11c43c))) ) ) {
      if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
        if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
          if ( LIKELY( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f497d8a))) ) ) {
            if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edd32c8))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              result[0] += 85899345;
              result[1] += 0;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea06598))) ) ) {
              if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1a7bda))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d7ef469))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f2d6e77))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6ad143))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85457336;
                result[1] += 442009;
              }
            } else {
              if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                result[0] += 21738655;
                result[1] += 64160690;
              } else {
                result[0] += 81381109;
                result[1] += 4518236;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e809c0e))) ) ) {
          if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
            if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0e208c))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 81808900;
                result[1] += 4090445;
              }
            }
          } else {
            if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e95b786))) ) ) {
              if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 59620807;
                result[1] += 26278538;
              }
            } else {
              result[0] += 0;
              result[1] += 85899345;
            }
          }
        } else {
          if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3eda8b92))) ) ) {
            if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( LIKELY( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec5d7b8))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            }
          } else {
            if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7288c2))) ) ) {
              if ( LIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x36552000))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            } else {
              if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edd01ac))) ) ) {
                result[0] += 82458077;
                result[1] += 3441268;
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
        if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec52565))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( UNLIKELY( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f2ea591))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            if ( UNLIKELY( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f49aae7))) ) ) {
              if ( LIKELY( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f38241d))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 42949672;
                result[1] += 42949672;
              }
            } else {
              if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 84761606;
                result[1] += 1137739;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f455a69))) ) ) {
          if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f513ce0))) ) ) {
              result[0] += 85899345;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 85899345;
            }
          } else {
            if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
              if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e67ba38))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85655313;
                result[1] += 244032;
              }
            } else {
              if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8aa64c))) ) ) {
                result[0] += 31159566;
                result[1] += 54739779;
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f44ffbe))) ) ) {
            if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1fe466))) ) ) {
              if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb79c96))) ) ) {
                result[0] += 1038058;
                result[1] += 84861287;
              } else {
                result[0] += 85784572;
                result[1] += 114772;
              }
            } else {
              if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb5c326))) ) ) {
                result[0] += 180840;
                result[1] += 85718505;
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              result[0] += 85899345;
              result[1] += 0;
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ebc7f0c))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      result[0] += 85899345;
      result[1] += 0;
    }
  } else {
    if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e75ba96))) ) ) {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
        if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
          if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
            if ( UNLIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec1232a))) ) ) {
              if ( UNLIKELY( !(data[49].missing != -1) || ((*( ((int*)(data)) + 49 ))<=((int)(0x3f266bb4))) ) ) {
                result[0] += 82694146;
                result[1] += 3205199;
              } else {
                result[0] += 85628938;
                result[1] += 270407;
              }
            } else {
              if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e68f3be))) ) ) {
                result[0] += 84309794;
                result[1] += 1589551;
              } else {
                result[0] += 68236470;
                result[1] += 17662875;
              }
            }
          } else {
            if ( UNLIKELY( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee79fcd))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
                result[0] += 72155450;
                result[1] += 13743895;
              } else {
                result[0] += 84491159;
                result[1] += 1408185;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
            if ( UNLIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea5fc90))) ) ) {
              if ( LIKELY( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3f68bba0))) ) ) {
                result[0] += 19088743;
                result[1] += 66810602;
              } else {
                result[0] += 70281283;
                result[1] += 15618062;
              }
            } else {
              if ( UNLIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e946b36))) ) ) {
                result[0] += 82530744;
                result[1] += 3368601;
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
              result[0] += 85899345;
              result[1] += 0;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
                result[0] += 32473321;
                result[1] += 53426024;
              } else {
                result[0] += 3890237;
                result[1] += 82009108;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
          if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f422cae))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e988d8f))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              result[0] += 85899345;
              result[1] += 0;
            }
          }
        } else {
          if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3de10940))) ) ) {
            if ( LIKELY( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x36d52000))) ) ) {
              if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85761329;
                result[1] += 138016;
              }
            } else {
              result[0] += 0;
              result[1] += 85899345;
            }
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        }
      }
    } else {
      result[0] += 0;
      result[1] += 85899345;
    }
  }
  if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0c7d46))) ) ) {
      if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
        if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
            if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e182b3a))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              result[0] += 85899345;
              result[1] += 0;
            }
          } else {
            if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1a7bda))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              result[0] += 85899345;
              result[1] += 0;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea79579))) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7b0a06))) ) ) {
            if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f513ce0))) ) ) {
              if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 71778102;
                result[1] += 14121243;
              }
            } else {
              if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
                result[0] += 75611999;
                result[1] += 10287346;
              } else {
                result[0] += 27578400;
                result[1] += 58320945;
              }
            }
          } else {
            if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e878fb0))) ) ) {
              if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
                result[0] += 54552191;
                result[1] += 31347154;
              } else {
                result[0] += 2807168;
                result[1] += 83092177;
              }
            } else {
              if ( LIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e50e189))) ) ) {
                result[0] += 85840536;
                result[1] += 58809;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            }
          }
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
        if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb79c96))) ) ) {
            if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8666f0))) ) ) {
              if ( UNLIKELY( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f37ac08))) ) ) {
                result[0] += 35085648;
                result[1] += 50813697;
              } else {
                result[0] += 69907446;
                result[1] += 15991899;
              }
            } else {
              result[0] += 0;
              result[1] += 85899345;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea8c80b))) ) ) {
              if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e809c0e))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 84530650;
                result[1] += 1368695;
              }
            } else {
              result[0] += 0;
              result[1] += 85899345;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb4488e))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edb5c08))) ) ) {
      if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d728d94))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f504bde))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
            if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( UNLIKELY( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
                result[0] += 37490649;
                result[1] += 48408696;
              } else {
                result[0] += 68237364;
                result[1] += 17661980;
              }
            }
          } else {
            if ( LIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3ea18ff1))) ) ) {
              if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46e1c3))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 84897517;
                result[1] += 1001827;
              }
            } else {
              result[0] += 0;
              result[1] += 85899345;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e1da382))) ) ) {
          if ( LIKELY( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x36d52000))) ) ) {
            if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
                result[0] += 3579139;
                result[1] += 82320206;
              } else {
                result[0] += 85897346;
                result[1] += 1999;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
    if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dc55866))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      result[0] += 0;
      result[1] += 85899345;
    }
  } else {
    if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
      if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
        if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec689ae))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
            if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( UNLIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea6c904))) ) ) {
                result[0] += 85266894;
                result[1] += 632451;
              } else {
                result[0] += 85861320;
                result[1] += 38025;
              }
            }
          } else {
            if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45783c))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 73465604;
                result[1] += 12433741;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9c676e))) ) ) {
          if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f48c3c8))) ) ) {
            if ( LIKELY( !(data[64].missing != -1) || ((*( ((int*)(data)) + 64 ))<=((int)(0x3f35a2c5))) ) ) {
              if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e92c2ae))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            } else {
              if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb6df49))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( UNLIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e92d24c))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85290130;
                result[1] += 609215;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38853cc0))) ) ) {
        if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d33cc3e))) ) ) {
          if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e20efac))) ) ) {
            if ( LIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f533c24))) ) ) {
              if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea895f6))) ) ) {
                result[0] += 85695133;
                result[1] += 204212;
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 85899345;
            }
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      } else {
        result[0] += 0;
        result[1] += 85899345;
      }
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1b4246))) ) ) {
    if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      if ( LIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3ea2cada))) ) ) {
        if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
          if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec1ef9e))) ) ) {
              result[0] += 85899345;
              result[1] += 0;
            } else {
              if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 78858415;
                result[1] += 7040929;
              }
            }
          } else {
            if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
              if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e6dbe7b))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 414972;
                result[1] += 85484373;
              }
            } else {
              if ( UNLIKELY( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f37ac08))) ) ) {
                result[0] += 15767375;
                result[1] += 70131970;
              } else {
                result[0] += 63840393;
                result[1] += 22058952;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f34e56e))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e809c0e))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85271936;
                result[1] += 627409;
              }
            }
          }
        }
      } else {
        result[0] += 0;
        result[1] += 85899345;
      }
    }
  } else {
    if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f522de3))) ) ) {
      if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( LIKELY( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x367fe000))) ) ) {
            if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e657868))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e9f1ca7))) ) ) {
                result[0] += 73591633;
                result[1] += 12307712;
              } else {
                result[0] += 85856496;
                result[1] += 42849;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e131598))) ) ) {
        if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eaebd00))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e9eccae))) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e86042b))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              result[0] += 85899345;
              result[1] += 0;
            }
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f531eed))) ) ) {
          if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edd01ac))) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0f20c1))) ) ) {
              result[0] += 85899345;
              result[1] += 0;
            } else {
              if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb7fb0c))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            }
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d33cc3e))) ) ) {
            if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f579621))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              result[0] += 85899345;
              result[1] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aeee91c))) ) ) {
    if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dc55866))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f44ffbe))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( LIKELY( !(data[73].missing != -1) || ((*( ((int*)(data)) + 73 ))<=((int)(0x3f7802cc))) ) ) {
          if ( LIKELY( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7bdc16))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8603ba))) ) ) {
        if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec38888))) ) ) {
          if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
            if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
              if ( LIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae79d48))) ) ) {
                result[0] += 85281108;
                result[1] += 618237;
              } else {
                result[0] += 79030661;
                result[1] += 6868684;
              }
            } else {
              if ( UNLIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec056d2))) ) ) {
                result[0] += 70746315;
                result[1] += 15153030;
              } else {
                result[0] += 33885722;
                result[1] += 52013623;
              }
            }
          } else {
            if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
                result[0] += 29701084;
                result[1] += 56198261;
              } else {
                result[0] += 84464273;
                result[1] += 1435072;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
            if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
                result[0] += 50354788;
                result[1] += 35544556;
              } else {
                result[0] += 11402568;
                result[1] += 74496777;
              }
            }
          } else {
            if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
              if ( LIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e9b9b16))) ) ) {
                result[0] += 85018326;
                result[1] += 881018;
              } else {
                result[0] += 74815559;
                result[1] += 11083786;
              }
            } else {
              if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 4772185;
                result[1] += 81127160;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f52a668))) ) ) {
          if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85863505;
                result[1] += 35840;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e925fe8))) ) ) {
            if ( UNLIKELY( !(data[62].missing != -1) || ((*( ((int*)(data)) + 62 ))<=((int)(0x3f7e380c))) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f462cff))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 1141941;
                result[1] += 84757404;
              }
            } else {
              if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f444afa))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            }
          } else {
            if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb03738))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              result[0] += 85899345;
              result[1] += 0;
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
    if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1d92e6))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      result[0] += 85899345;
      result[1] += 0;
    }
  } else {
    if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8dbd57))) ) ) {
        if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
          if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed8247d))) ) ) {
            if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e809c0e))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
                result[0] += 85388250;
                result[1] += 511095;
              } else {
                result[0] += 66984928;
                result[1] += 18914417;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        } else {
          if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
            if ( LIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9db3e0))) ) ) {
              if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec2bc12))) ) ) {
                result[0] += 85720929;
                result[1] += 178416;
              } else {
                result[0] += 79975253;
                result[1] += 5924092;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e77f2fc))) ) ) {
                result[0] += 46253493;
                result[1] += 39645851;
              } else {
                result[0] += 83753925;
                result[1] += 2145420;
              }
            }
          } else {
            if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
              if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3e4710))) ) ) {
                result[0] += 13654;
                result[1] += 85885691;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            } else {
              if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
                result[0] += 81196826;
                result[1] += 4702518;
              } else {
                result[0] += 16498959;
                result[1] += 69400386;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f36144d))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f431db8))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f48c3c8))) ) ) {
              if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb1b232))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85870493;
                result[1] += 28852;
              }
            } else {
              if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb3ea17))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3ad30d33))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e22fb72))) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e2241c8))) ) ) {
            if ( UNLIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e939ec0))) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x36553000))) ) ) {
                result[0] += 85893724;
                result[1] += 5620;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            } else {
              result[0] += 85899345;
              result[1] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        } else {
          if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea895f6))) ) ) {
            if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e26d808))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3ea8d23c))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            }
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ebe8a28))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      result[0] += 85899345;
      result[1] += 0;
    }
  } else {
    if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
      if ( LIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3f180c))) ) ) {
        if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e79a066))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      } else {
        if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec689ae))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( UNLIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e9ccda8))) ) ) {
            if ( LIKELY( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f37e825))) ) ) {
              result[0] += 85899345;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 85899345;
            }
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
        if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1ccd5a))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e1da382))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
          if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
            if ( LIKELY( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f38f638))) ) ) {
              if ( LIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9eccae))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 264305;
                result[1] += 85635040;
              }
            } else {
              if ( LIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aefe7ca))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 7809031;
                result[1] += 78090314;
              }
            }
          } else {
            if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
                result[0] += 84959649;
                result[1] += 939696;
              } else {
                result[0] += 74368807;
                result[1] += 11530537;
              }
            } else {
              if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e853e30))) ) ) {
                result[0] += 19320620;
                result[1] += 66578724;
              } else {
                result[0] += 71314562;
                result[1] += 14584783;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
            if ( UNLIKELY( !(data[50].missing != -1) || ((*( ((int*)(data)) + 50 ))<=((int)(0x3f000000))) ) ) {
              if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f422cae))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            } else {
              if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3eda3044))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38850440))) ) ) {
              if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
                result[0] += 44313154;
                result[1] += 41586191;
              } else {
                result[0] += 85834785;
                result[1] += 64560;
              }
            } else {
              result[0] += 0;
              result[1] += 85899345;
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( UNLIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae61f2c))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f422cae))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6ad143))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec52565))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85736831;
                result[1] += 162514;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f44ffbe))) ) ) {
        if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edb5c08))) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
            if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e6dbe7b))) ) ) {
              if ( UNLIKELY( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f449315))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 84127999;
                result[1] += 1771345;
              }
            } else {
              if ( LIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e979cce))) ) ) {
                result[0] += 82004314;
                result[1] += 3895031;
              } else {
                result[0] += 62943486;
                result[1] += 22955859;
              }
            }
          } else {
            if ( UNLIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f44896c))) ) ) {
              if ( UNLIKELY( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f360b9e))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 83105222;
                result[1] += 2794123;
              }
            } else {
              if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
                result[0] += 6594793;
                result[1] += 79304552;
              } else {
                result[0] += 82725507;
                result[1] += 3173838;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e0d8188))) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e1da382))) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e88b800))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85849493;
                result[1] += 49852;
              }
            } else {
              result[0] += 0;
              result[1] += 85899345;
            }
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        }
      } else {
        if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1b4246))) ) ) {
          if ( LIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3aea446e))) ) ) {
            if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
              if ( UNLIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
                result[0] += 45346006;
                result[1] += 40553339;
              } else {
                result[0] += 27959394;
                result[1] += 57939950;
              }
            } else {
              if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e19b730))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 961784;
                result[1] += 84937561;
              }
            }
          } else {
            if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edb5c08))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( UNLIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea5fc90))) ) ) {
                result[0] += 75161927;
                result[1] += 10737418;
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
            if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
              if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e70f013))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 334238;
                result[1] += 85565107;
              }
            } else {
              result[0] += 85899345;
              result[1] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb79c96))) ) ) {
                result[0] += 76857309;
                result[1] += 9042036;
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee58c9f))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      result[0] += 85899345;
      result[1] += 0;
    }
  } else {
    if ( UNLIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aee9437))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
          if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f513ce0))) ) ) {
            if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
              if ( UNLIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ebebe06))) ) ) {
                result[0] += 80902056;
                result[1] += 4997288;
              } else {
                result[0] += 68272278;
                result[1] += 17627067;
              }
            } else {
              if ( UNLIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed16bed))) ) ) {
                result[0] += 69948245;
                result[1] += 15951100;
              } else {
                result[0] += 35322815;
                result[1] += 50576529;
              }
            }
          } else {
            if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
              if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 74327413;
                result[1] += 11571932;
              }
            } else {
              if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                result[0] += 66939179;
                result[1] += 18960166;
              } else {
                result[0] += 6163942;
                result[1] += 79735403;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7fac27))) ) ) {
            if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
              if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
                result[0] += 56164956;
                result[1] += 29734388;
              } else {
                result[0] += 84637585;
                result[1] += 1261760;
              }
            } else {
              if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
                result[0] += 77903941;
                result[1] += 7995404;
              } else {
                result[0] += 8897940;
                result[1] += 77001405;
              }
            }
          } else {
            if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e89e0c1))) ) ) {
              if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
                result[0] += 83036034;
                result[1] += 2863311;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            } else {
              if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb32cca))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85876009;
                result[1] += 23336;
              }
            }
          }
        }
      } else {
        result[0] += 0;
        result[1] += 85899345;
      }
    }
  }
  if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee66ce4))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      result[0] += 85899345;
      result[1] += 0;
    }
  } else {
    if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec38888))) ) ) {
        if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3eda8b92))) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
            if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec5d64a))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( UNLIKELY( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f2e4bcf))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85241692;
                result[1] += 657653;
              }
            }
          } else {
            if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb4dc48))) ) ) {
                result[0] += 85711536;
                result[1] += 187809;
              } else {
                result[0] += 82291861;
                result[1] += 3607483;
              }
            } else {
              if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 14394292;
                result[1] += 71505053;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[44].missing != -1) || ((*( ((int*)(data)) + 44 ))<=((int)(0x36552000))) ) ) {
            if ( LIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f40ba05))) ) ) {
              result[0] += 85899345;
              result[1] += 0;
            } else {
              if ( LIKELY( !(data[75].missing != -1) || ((*( ((int*)(data)) + 75 ))<=((int)(0x38850f88))) ) ) {
                result[0] += 85762031;
                result[1] += 137314;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 85899345;
      }
    }
  }
  if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
      if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
        if ( LIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea3974e))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e873b23))) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e17b3df))) ) ) {
              if ( LIKELY( !(data[70].missing != -1) || ((*( ((int*)(data)) + 70 ))<=((int)(0x3f71b687))) ) ) {
                result[0] += 85732874;
                result[1] += 166471;
              } else {
                result[0] += 83935932;
                result[1] += 1963413;
              }
            } else {
              if ( LIKELY( !(data[48].missing != -1) || ((*( ((int*)(data)) + 48 ))<=((int)(0x3f6dda8a))) ) ) {
                result[0] += 77718455;
                result[1] += 8180890;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            }
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( UNLIKELY( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
            if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
              if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae79d48))) ) ) {
                result[0] += 76670490;
                result[1] += 9228855;
              } else {
                result[0] += 58284645;
                result[1] += 27614700;
              }
            } else {
              if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
                result[0] += 83154957;
                result[1] += 2744388;
              } else {
                result[0] += 19426827;
                result[1] += 66472518;
              }
            }
          } else {
            if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec38888))) ) ) {
              if ( UNLIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6fc1dd))) ) ) {
                result[0] += 75245163;
                result[1] += 10654182;
              } else {
                result[0] += 83059243;
                result[1] += 2840102;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                result[0] += 84672212;
                result[1] += 1227133;
              } else {
                result[0] += 40518559;
                result[1] += 45380786;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
        if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46e1c3))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( LIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e98cf7d))) ) ) {
            if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4488e))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae476b4))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85852575;
                result[1] += 46769;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        }
      } else {
        if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
          if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
            if ( LIKELY( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f488b22))) ) ) {
              if ( LIKELY( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f532d44))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 77309411;
                result[1] += 8589934;
              }
            } else {
              if ( LIKELY( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7c7158))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            }
          } else {
            if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
              result[0] += 85899345;
              result[1] += 0;
            } else {
              if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 1235961;
                result[1] += 84663384;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
            if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e10712c))) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                result[0] += 78588763;
                result[1] += 7310582;
              } else {
                result[0] += 1009853;
                result[1] += 84889492;
              }
            } else {
              if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
                result[0] += 34359738;
                result[1] += 51539607;
              } else {
                result[0] += 63697;
                result[1] += 85835648;
              }
            }
          } else {
            if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f44ffbe))) ) ) {
              if ( LIKELY( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f49f59f))) ) ) {
                result[0] += 33604579;
                result[1] += 52294766;
              } else {
                result[0] += 73740077;
                result[1] += 12159268;
              }
            } else {
              if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae84711))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d33cc3e))) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f46693e))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e932573))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( LIKELY( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38853cc0))) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e9576f4))) ) ) {
              if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7288c2))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 85837636;
                result[1] += 61709;
              }
            } else {
              if ( LIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3f5db6))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 81242152;
                result[1] += 4657193;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        }
      }
    } else {
      result[0] += 0;
      result[1] += 85899345;
    }
  }
  if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      if ( UNLIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae61f2c))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
          if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e08b800))) ) ) {
            if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb621fc))) ) ) {
              if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e072ceb))) ) ) {
                result[0] += 85796533;
                result[1] += 102811;
              } else {
                result[0] += 74324256;
                result[1] += 11575089;
              }
            } else {
              result[0] += 85899345;
              result[1] += 0;
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45783c))) ) ) {
              if ( UNLIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aef3e00))) ) ) {
                result[0] += 85840686;
                result[1] += 58659;
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7fac27))) ) ) {
                result[0] += 83200937;
                result[1] += 2698408;
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3eda8b92))) ) ) {
            if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 77023262;
                result[1] += 8876083;
              }
            }
          } else {
            if ( LIKELY( !(data[66].missing != -1) || ((*( ((int*)(data)) + 66 ))<=((int)(0x36554000))) ) ) {
              if ( LIKELY( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f50ec1a))) ) ) {
                result[0] += 85792487;
                result[1] += 106858;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            } else {
              result[0] += 0;
              result[1] += 85899345;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f431db8))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
        if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae476b4))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e809c0e))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
                result[0] += 75731140;
                result[1] += 10168205;
              } else {
                result[0] += 85696733;
                result[1] += 202611;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
          if ( LIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3ea8c828))) ) ) {
            if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec5d64a))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed1c0bb))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 83082973;
                result[1] += 2816371;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        } else {
          if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e55c93f))) ) ) {
            if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
              result[0] += 85899345;
              result[1] += 0;
            } else {
              if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e92c2ae))) ) ) {
                result[0] += 1792442;
                result[1] += 84106903;
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
              if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
                result[0] += 68719476;
                result[1] += 17179869;
              } else {
                result[0] += 30576445;
                result[1] += 55322900;
              }
            } else {
              if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e19b730))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 6289619;
                result[1] += 79609726;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3ea8d23c))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      if ( UNLIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3acd945e))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( LIKELY( !(data[66].missing != -1) || ((*( ((int*)(data)) + 66 ))<=((int)(0x36554000))) ) ) {
          if ( LIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f40ba05))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e053c46))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( LIKELY( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38853cc0))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            }
          }
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e11c43c))) ) ) {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( UNLIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f40f358))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
            if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( LIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eaec55a))) ) ) {
                result[0] += 85890543;
                result[1] += 8802;
              } else {
                result[0] += 85759354;
                result[1] += 139991;
              }
            }
          } else {
            if ( UNLIKELY( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f373418))) ) ) {
              if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f522de3))) ) ) {
                result[0] += 77339710;
                result[1] += 8559634;
              } else {
                result[0] += 29272615;
                result[1] += 56626730;
              }
            } else {
              if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                result[0] += 17468212;
                result[1] += 68431133;
              } else {
                result[0] += 83201353;
                result[1] += 2697992;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d33cc3e))) ) ) {
        if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f44ffbe))) ) ) {
          if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
            if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb6df49))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              result[0] += 85899345;
              result[1] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              result[0] += 85899345;
              result[1] += 0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e932573))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e1da382))) ) ) {
              result[0] += 85899345;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 85899345;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( UNLIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f3a2858))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e05e4f4))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
                result[0] += 83989145;
                result[1] += 1910200;
              } else {
                result[0] += 37117001;
                result[1] += 48782344;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[62].missing != -1) || ((*( ((int*)(data)) + 62 ))<=((int)(0x3f7e23c8))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( UNLIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3ed262))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f504bde))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            if ( LIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae79d48))) ) ) {
              if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
                result[0] += 85788279;
                result[1] += 111065;
              } else {
                result[0] += 63765534;
                result[1] += 22133811;
              }
            } else {
              if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e822724))) ) ) {
                result[0] += 66082581;
                result[1] += 19816764;
              } else {
                result[0] += 85740512;
                result[1] += 158833;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e932573))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e1da382))) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x36552000))) ) ) {
            if ( UNLIKELY( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f4f0d78))) ) ) {
              if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e073712))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e08886f))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85895978;
                result[1] += 3367;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e9a1985))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      result[0] += 85899345;
      result[1] += 0;
    }
  } else {
    if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      if ( UNLIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aec176e))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e8faba2))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
            if ( UNLIKELY( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
              if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += 65586208;
                result[1] += 20313137;
              } else {
                result[0] += 8802908;
                result[1] += 77096437;
              }
            } else {
              if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 77844064;
                result[1] += 8055281;
              }
            }
          } else {
            if ( LIKELY( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38850440))) ) ) {
              if ( UNLIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aeee91c))) ) ) {
                result[0] += 83765200;
                result[1] += 2134145;
              } else {
                result[0] += 85842006;
                result[1] += 57339;
              }
            } else {
              result[0] += 0;
              result[1] += 85899345;
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0c7d46))) ) ) {
      if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
        if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f480f05))) ) ) {
            if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e97c804))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              result[0] += 85899345;
              result[1] += 0;
            }
          } else {
            if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f4b5a92))) ) ) {
              if ( UNLIKELY( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f505ae8))) ) ) {
                result[0] += 6932227;
                result[1] += 78967117;
              } else {
                result[0] += 20007611;
                result[1] += 65891734;
              }
            } else {
              if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee32e94))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f38cdca))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( LIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f40745c))) ) ) {
            if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
              if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3ddb3fdd))) ) ) {
                result[0] += 85819060;
                result[1] += 80285;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            } else {
              if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                result[0] += 24542670;
                result[1] += 61356675;
              } else {
                result[0] += 77055041;
                result[1] += 8844304;
              }
            }
          } else {
            if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
              if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f20c1))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            } else {
              if ( LIKELY( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38850440))) ) ) {
                result[0] += 85858368;
                result[1] += 40977;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
        if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1ccd5a))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e9a7c4a))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec52154))) ) ) {
          if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8aa6bc))) ) ) {
            if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
                result[0] += 55400881;
                result[1] += 30498464;
              } else {
                result[0] += 79050878;
                result[1] += 6848467;
              }
            }
          } else {
            if ( UNLIKELY( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee78222))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( LIKELY( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f4753fd))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 85696593;
                result[1] += 202752;
              }
            }
          }
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
      if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51791f))) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e913728))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      } else {
        if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae74838))) ) ) {
          if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1d92e6))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3cd958e9))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f4227f4))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( LIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae84711))) ) ) {
          if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edd13ea))) ) ) {
            if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
                result[0] += 85630746;
                result[1] += 268599;
              } else {
                result[0] += 73347034;
                result[1] += 12552311;
              }
            }
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        } else {
          if ( LIKELY( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x367fe000))) ) ) {
            if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d3b5afc))) ) ) {
              if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85873157;
                result[1] += 26188;
              }
            } else {
              if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 82219405;
                result[1] += 3679940;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e913728))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      result[0] += 85899345;
      result[1] += 0;
    }
  } else {
    if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      if ( UNLIKELY( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f3fa42f))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( LIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3ed262))) ) ) {
          if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
            if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85556684;
                result[1] += 342661;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
                result[0] += 60768865;
                result[1] += 25130480;
              } else {
                result[0] += 84643410;
                result[1] += 1255935;
              }
            }
          } else {
            if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
              if ( UNLIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae8f0da))) ) ) {
                result[0] += 77309411;
                result[1] += 8589934;
              } else {
                result[0] += 4697902;
                result[1] += 81201443;
              }
            } else {
              if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
                result[0] += 84194349;
                result[1] += 1704996;
              } else {
                result[0] += 66058141;
                result[1] += 19841204;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
              if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                result[0] += 81391508;
                result[1] += 4507837;
              } else {
                result[0] += 22587079;
                result[1] += 63312266;
              }
            } else {
              if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85843196;
                result[1] += 56149;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e9a1985))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f38cdca))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
          if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
            if ( LIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9db3e0))) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb8b83e))) ) ) {
                result[0] += 85535172;
                result[1] += 364173;
              } else {
                result[0] += 82673079;
                result[1] += 3226266;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 78585144;
                result[1] += 7314201;
              }
            }
          } else {
            if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
              if ( LIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f402eb2))) ) ) {
                result[0] += 84953665;
                result[1] += 945680;
              } else {
                result[0] += 57266230;
                result[1] += 28633115;
              }
            } else {
              if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
                result[0] += 38834102;
                result[1] += 47065243;
              } else {
                result[0] += 5549053;
                result[1] += 80350292;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
              if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e08b800))) ) ) {
                result[0] += 85615693;
                result[1] += 283652;
              } else {
                result[0] += 85878467;
                result[1] += 20878;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e809c0e))) ) ) {
                result[0] += 65577520;
                result[1] += 20321825;
              } else {
                result[0] += 85769757;
                result[1] += 129588;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
      if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
        if ( LIKELY( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f386016))) ) ) {
          if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4f5adb))) ) ) {
            if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edd32c8))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              result[0] += 85899345;
              result[1] += 0;
            }
          } else {
            if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e93eb6e))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              result[0] += 85899345;
              result[1] += 0;
            }
          }
        } else {
          if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea5c7fe))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        }
      } else {
        if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f444afa))) ) ) {
          if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1ccd5a))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e8faba2))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e99b6c0))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
      if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e79a066))) ) ) {
        if ( UNLIKELY( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f4635de))) ) ) {
          if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f43d275))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
        if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea06598))) ) ) {
            if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
              result[0] += 85899345;
              result[1] += 0;
            } else {
              if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de84e))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 70851285;
                result[1] += 15048060;
              }
            }
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
            if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 76116364;
                result[1] += 9782981;
              }
            }
          } else {
            if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
              if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
                result[0] += 41401936;
                result[1] += 44497408;
              } else {
                result[0] += 8760713;
                result[1] += 77138632;
              }
            } else {
              if ( LIKELY( !(data[68].missing != -1) || ((*( ((int*)(data)) + 68 ))<=((int)(0x3f51681e))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 79536431;
                result[1] += 6362914;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e77f2fc))) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                result[0] += 82428665;
                result[1] += 3470680;
              } else {
                result[0] += 15270994;
                result[1] += 70628351;
              }
            } else {
              if ( LIKELY( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38850440))) ) ) {
                result[0] += 85885269;
                result[1] += 14075;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edb5c08))) ) ) {
      if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
        if ( LIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e50e189))) ) ) {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
              if ( UNLIKELY( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
                result[0] += 39340456;
                result[1] += 46558889;
              } else {
                result[0] += 69612184;
                result[1] += 16287161;
              }
            } else {
              if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e8e669f))) ) ) {
                result[0] += 85871122;
                result[1] += 28223;
              } else {
                result[0] += 78874711;
                result[1] += 7024634;
              }
            }
          }
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      } else {
        result[0] += 0;
        result[1] += 85899345;
      }
    } else {
      if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( LIKELY( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x367fe000))) ) ) {
          if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e09da8c))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            if ( LIKELY( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f4bdfdc))) ) ) {
              if ( LIKELY( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f50ec1a))) ) ) {
                result[0] += 85898265;
                result[1] += 1080;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            } else {
              if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edd01ac))) ) ) {
                result[0] += 84504228;
                result[1] += 1395116;
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            }
          }
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    if ( UNLIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f43fe1a))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
        if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e8fa078))) ) ) {
          if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3cd2b32b))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      } else {
        if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
            if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
              if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e08b800))) ) ) {
                result[0] += 64170536;
                result[1] += 21728809;
              } else {
                result[0] += 85015928;
                result[1] += 883417;
              }
            } else {
              if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += 84722642;
                result[1] += 1176703;
              } else {
                result[0] += 11971257;
                result[1] += 73928088;
              }
            }
          } else {
            if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3ddb3fdd))) ) ) {
              if ( LIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x36552000))) ) ) {
                result[0] += 85847086;
                result[1] += 52259;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            } else {
              result[0] += 0;
              result[1] += 85899345;
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3eda8b92))) ) ) {
        if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
          if ( UNLIKELY( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f363e20))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            if ( LIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
              if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85845847;
                result[1] += 53498;
              }
            } else {
              if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 82529242;
                result[1] += 3370103;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
            if ( UNLIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3ad95a84))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d8aa9f0))) ) ) {
                result[0] += 77096939;
                result[1] += 8802406;
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
              if ( LIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e96d05a))) ) ) {
                result[0] += 85612057;
                result[1] += 287288;
              } else {
                result[0] += 66333383;
                result[1] += 19565962;
              }
            } else {
              if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += 85803689;
                result[1] += 95656;
              } else {
                result[0] += 14144137;
                result[1] += 71755208;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( LIKELY( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f50ec1a))) ) ) {
            if ( LIKELY( !(data[75].missing != -1) || ((*( ((int*)(data)) + 75 ))<=((int)(0x38850f88))) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e88b800))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85889423;
                result[1] += 9922;
              }
            } else {
              result[0] += 0;
              result[1] += 85899345;
            }
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
      if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e932573))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    } else {
      if ( LIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3ea06598))) ) ) {
        if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
          if ( UNLIKELY( !(data[62].missing != -1) || ((*( ((int*)(data)) + 62 ))<=((int)(0x3f7df11e))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            if ( UNLIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f39a3a0))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e17b3df))) ) ) {
                result[0] += 85890783;
                result[1] += 8561;
              } else {
                result[0] += 85170355;
                result[1] += 728990;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e18f0c4))) ) ) {
            if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
                result[0] += 57571081;
                result[1] += 28328264;
              } else {
                result[0] += 79802183;
                result[1] += 6097161;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e88b800))) ) ) {
              if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 72118702;
                result[1] += 13780643;
              }
            } else {
              if ( LIKELY( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38850440))) ) ) {
                result[0] += 85870788;
                result[1] += 28557;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea1fe82))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    }
  } else {
    result[0] += 0;
    result[1] += 85899345;
  }
  if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e9a1985))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      result[0] += 85899345;
      result[1] += 0;
    }
  } else {
    if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e75ba96))) ) ) {
      if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
          if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7421ac))) ) ) {
            if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f47d2be))) ) ) {
              if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            } else {
              if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1d92e6))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1e5951))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              result[0] += 85899345;
              result[1] += 0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e897d8b))) ) ) {
              if ( LIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed6d328))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 933688;
                result[1] += 84965657;
              }
            } else {
              result[0] += 85899345;
              result[1] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e8dbd57))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f3967f0))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85051818;
                result[1] += 847526;
              }
            }
          }
        }
      }
    } else {
      result[0] += 0;
      result[1] += 85899345;
    }
  }
  if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3cd958e9))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      result[0] += 0;
      result[1] += 85899345;
    }
  } else {
    if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae476b4))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
          if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8038d9))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            if ( LIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9db3e0))) ) ) {
              if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6244f4))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85791567;
                result[1] += 107778;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85096377;
                result[1] += 802968;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e822724))) ) ) {
            if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += 84042811;
                result[1] += 1856534;
              } else {
                result[0] += 36770276;
                result[1] += 49129069;
              }
            }
          } else {
            if ( LIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x36552000))) ) ) {
              if ( UNLIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3af03caf))) ) ) {
                result[0] += 84892205;
                result[1] += 1007140;
              } else {
                result[0] += 85822928;
                result[1] += 76416;
              }
            } else {
              result[0] += 0;
              result[1] += 85899345;
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee66ce4))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e50e189))) ) ) {
      if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
        if ( UNLIKELY( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f630b9a))) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e05e4f4))) ) ) {
            if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1d92e6))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              result[0] += 85899345;
              result[1] += 0;
            }
          } else {
            if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e900ed8))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              result[0] += 85899345;
              result[1] += 0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee66ce4))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        }
      } else {
        if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
              if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f47d2be))) ) ) {
                result[0] += 85883461;
                result[1] += 15884;
              } else {
                result[0] += 83835628;
                result[1] += 2063716;
              }
            } else {
              result[0] += 0;
              result[1] += 85899345;
            }
          }
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            if ( UNLIKELY( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f36f7fc))) ) ) {
              if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee24e50))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3e0142))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 4202215;
                result[1] += 81697130;
              }
            }
          } else {
            if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed8efbc))) ) ) {
              if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb79c96))) ) ) {
                result[0] += 61208112;
                result[1] += 24691233;
              } else {
                result[0] += 79218285;
                result[1] += 6681060;
              }
            } else {
              if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8c31d2))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85837844;
                result[1] += 61501;
              }
            }
          }
        }
      }
    } else {
      result[0] += 0;
      result[1] += 85899345;
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
    

    FILE* file = fopen("./codegen_small/esa_3_months_global/split_1/test_data.csv", "r");
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
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        
    }
    

    return 0;
}
