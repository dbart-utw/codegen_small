
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
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 858993459;
        result[5] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c70000))) ) ) {
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
          result[0] += 0;
          result[1] += 858993459;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42cc0000))) ) ) {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42780000))) ) ) {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42420000))) ) ) {
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
              if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x427e0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 180840728;
                result[5] += 678152730;
              } else {
                result[0] += 137438953;
                result[1] += 34359738;
                result[2] += 0;
                result[3] += 0;
                result[4] += 670014898;
                result[5] += 17179869;
              }
            }
          } else {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c20000))) ) ) {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42830000))) ) ) {
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
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42870000))) ) ) {
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x429d0000))) ) ) {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426a0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 687194767;
                result[5] += 171798691;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 103079215;
                result[5] += 755914243;
              }
            } else {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x425e0000))) ) ) {
                result[0] += 572662306;
                result[1] += 71582788;
                result[2] += 0;
                result[3] += 0;
                result[4] += 214748364;
                result[5] += 0;
              } else {
                result[0] += 46432078;
                result[1] += 69648118;
                result[2] += 0;
                result[3] += 0;
                result[4] += 673265143;
                result[5] += 69648118;
              }
            }
          } else {
            if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42830000))) ) ) {
              if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42940000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 858993459;
              } else {
                result[0] += 171798691;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 687194767;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42840000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 858993459;
              } else {
                result[0] += 846508088;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 12485370;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42620000))) ) ) {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42950000))) ) ) {
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
                result[4] += 171798691;
                result[5] += 687194767;
              }
            } else {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
                result[0] += 0;
                result[1] += 156180628;
                result[2] += 0;
                result[3] += 0;
                result[4] += 390451572;
                result[5] += 312361257;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 9667128;
                result[4] += 5524073;
                result[5] += 843802256;
              }
            }
          } else {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42780000))) ) ) {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428d0000))) ) ) {
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
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a00000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 80530636;
                result[4] += 0;
                result[5] += 778462822;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 412316860;
                result[4] += 68719476;
                result[5] += 377957121;
              }
            }
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x427e0000))) ) ) {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b20000))) ) ) {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42830000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 85899345;
                result[4] += 85899345;
                result[5] += 687194767;
              } else {
                result[0] += 22605091;
                result[1] += 113025455;
                result[2] += 0;
                result[3] += 45210182;
                result[4] += 497312002;
                result[5] += 180840728;
              }
            } else {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x429c0000))) ) ) {
                result[0] += 103079215;
                result[1] += 171798691;
                result[2] += 0;
                result[3] += 0;
                result[4] += 584115552;
                result[5] += 0;
              } else {
                result[0] += 757270549;
                result[1] += 45210182;
                result[2] += 0;
                result[3] += 0;
                result[4] += 56512727;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 601295421;
                result[5] += 257698037;
              } else {
                result[0] += 0;
                result[1] += 3784112;
                result[2] += 7568224;
                result[3] += 136228037;
                result[4] += 7568224;
                result[5] += 703844860;
              }
            } else {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
                result[0] += 4200457;
                result[1] += 4200457;
                result[2] += 8400914;
                result[3] += 451549128;
                result[4] += 96610511;
                result[5] += 294031990;
              } else {
                result[0] += 156800393;
                result[1] += 54539267;
                result[2] += 238609294;
                result[3] += 81808900;
                result[4] += 238609294;
                result[5] += 88626309;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428b0000))) ) ) {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b90000))) ) ) {
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
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bd0000))) ) ) {
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
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bf0000))) ) ) {
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
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428f0000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 858993459;
            } else {
              if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 858993459;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 851002822;
                result[1] += 0;
                result[2] += 0;
                result[3] += 2663545;
                result[4] += 5327091;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c70000))) ) ) {
              if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42bd0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 143165576;
                result[4] += 715827882;
                result[5] += 0;
              } else {
                result[0] += 245426702;
                result[1] += 0;
                result[2] += 368140053;
                result[3] += 122713351;
                result[4] += 0;
                result[5] += 122713351;
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
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d60000))) ) ) {
            if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a10000))) ) ) {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b30000))) ) ) {
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
              result[2] += 0;
              result[3] += 858993459;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b40000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 858993459;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ea0000))) ) ) {
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
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428b0000))) ) ) {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a70000))) ) ) {
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
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
              if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b40000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 85899345;
                result[3] += 257698037;
                result[4] += 0;
                result[5] += 515396075;
              } else {
                result[0] += 0;
                result[1] += 12271335;
                result[2] += 61356675;
                result[3] += 760822777;
                result[4] += 0;
                result[5] += 24542670;
              }
            } else {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a60000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 697932185;
                result[3] += 161061273;
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
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
            if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42780000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 858993459;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
                result[0] += 0;
                result[1] += 75793540;
                result[2] += 176851594;
                result[3] += 75793540;
                result[4] += 101058054;
                result[5] += 429496729;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 202116108;
                result[3] += 606348324;
                result[4] += 0;
                result[5] += 50529027;
              }
            }
          } else {
            if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ae0000))) ) ) {
              if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42960000))) ) ) {
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
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 687194767;
                result[3] += 85899345;
                result[4] += 0;
                result[5] += 85899345;
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
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d30000))) ) ) {
              if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 858993459;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 414686497;
                result[3] += 414686497;
                result[4] += 0;
                result[5] += 29620464;
              }
            } else {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42910000))) ) ) {
                result[0] += 515396075;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 343597383;
                result[5] += 0;
              } else {
                result[0] += 56021312;
                result[1] += 0;
                result[2] += 728277063;
                result[3] += 56021312;
                result[4] += 0;
                result[5] += 18673770;
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
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
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
                result[0] += 515396075;
                result[1] += 0;
                result[2] += 343597383;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 1125810;
                result[1] += 0;
                result[2] += 818464278;
                result[3] += 38277559;
                result[4] += 0;
                result[5] += 1125810;
              }
            }
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42aa0000))) ) ) {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42b00000))) ) ) {
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
            if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42bb0000))) ) ) {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
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
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42d00000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42420000))) ) ) {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
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
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
              if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42de0000))) ) ) {
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
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42980000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 515396075;
                result[5] += 343597383;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 805306367;
                result[5] += 53687091;
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
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x425e0000))) ) ) {
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428a0000))) ) ) {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42960000))) ) ) {
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
              result[0] += 858993459;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
              if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x429e0000))) ) ) {
                result[0] += 0;
                result[1] += 61356675;
                result[2] += 0;
                result[3] += 0;
                result[4] += 122713351;
                result[5] += 674923432;
              } else {
                result[0] += 0;
                result[1] += 273316100;
                result[2] += 0;
                result[3] += 156180628;
                result[4] += 429496729;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x424a0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 858993459;
                result[5] += 0;
              } else {
                result[0] += 2785924;
                result[1] += 928641;
                result[2] += 0;
                result[3] += 36217021;
                result[4] += 25073322;
                result[5] += 793988548;
              }
            }
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x426e0000))) ) ) {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42900000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 429496729;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 687194767;
                result[4] += 0;
                result[5] += 171798691;
              }
            } else {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42950000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 81808900;
                result[4] += 20452225;
                result[5] += 756732332;
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
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c30000))) ) ) {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 143165576;
                result[4] += 0;
                result[5] += 715827882;
              } else {
                result[0] += 13527456;
                result[1] += 6763728;
                result[2] += 0;
                result[3] += 750773810;
                result[4] += 0;
                result[5] += 87928464;
              }
            } else {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 858993459;
              } else {
                result[0] += 151587081;
                result[1] += 0;
                result[2] += 202116108;
                result[3] += 404232216;
                result[4] += 0;
                result[5] += 101058054;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c90000))) ) ) {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cb0000))) ) ) {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
                result[0] += 15339168;
                result[1] += 0;
                result[2] += 7669584;
                result[3] += 7669584;
                result[4] += 828315121;
                result[5] += 0;
              } else {
                result[0] += 180840728;
                result[1] += 30140121;
                result[2] += 0;
                result[3] += 75350303;
                result[4] += 512382063;
                result[5] += 60280242;
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
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42be0000))) ) ) {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
                result[0] += 0;
                result[1] += 858993459;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 322122547;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 536870911;
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
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
            if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42940000))) ) ) {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
                result[0] += 858993459;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 110127366;
                result[1] += 33038209;
                result[2] += 0;
                result[3] += 33038209;
                result[4] += 517598622;
                result[5] += 165191049;
              }
            } else {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428f0000))) ) ) {
                result[0] += 20452225;
                result[1] += 20452225;
                result[2] += 40904450;
                result[3] += 265878927;
                result[4] += 122713351;
                result[5] += 388592279;
              } else {
                result[0] += 820377369;
                result[1] += 858135;
                result[2] += 1716270;
                result[3] += 7723217;
                result[4] += 25744059;
                result[5] += 2574405;
              }
            }
          } else {
            if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42db0000))) ) ) {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
                result[0] += 5651272;
                result[1] += 28256363;
                result[2] += 62164000;
                result[3] += 378635274;
                result[4] += 5651272;
                result[5] += 378635274;
              } else {
                result[0] += 104120419;
                result[1] += 0;
                result[2] += 481556939;
                result[3] += 104120419;
                result[4] += 65075262;
                result[5] += 104120419;
              }
            } else {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
                result[0] += 673979483;
                result[1] += 0;
                result[2] += 13215283;
                result[3] += 0;
                result[4] += 158583407;
                result[5] += 13215283;
              } else {
                result[0] += 61356675;
                result[1] += 0;
                result[2] += 797636783;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a30000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a70000))) ) ) {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42040000))) ) ) {
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
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
              result[0] += 0;
              result[1] += 858993459;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42e70000))) ) ) {
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
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ad0000))) ) ) {
            if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b50000))) ) ) {
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
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42890000))) ) ) {
              if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bc0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 572662306;
                result[3] += 0;
                result[4] += 286331153;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 214748364;
                result[2] += 0;
                result[3] += 429496729;
                result[4] += 0;
                result[5] += 214748364;
              }
            } else {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a00000))) ) ) {
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
                result[3] += 83128399;
                result[4] += 0;
                result[5] += 775865059;
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b10000))) ) ) {
              if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428d0000))) ) ) {
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
                result[3] += 468541886;
                result[4] += 0;
                result[5] += 390451572;
              }
            } else {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c30000))) ) ) {
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
                result[3] += 429496729;
                result[4] += 0;
                result[5] += 429496729;
              }
            }
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
            if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 74695083;
                result[3] += 746950833;
                result[4] += 0;
                result[5] += 37347541;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 858993459;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 143165576;
                result[3] += 0;
                result[4] += 0;
                result[5] += 715827882;
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
            if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a50000))) ) ) {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 122713351;
                result[3] += 736280107;
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
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429a0000))) ) ) {
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
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 858993459;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c70000))) ) ) {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b40000))) ) ) {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a20000))) ) ) {
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
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42bc0000))) ) ) {
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
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42aa0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 858993459;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a70000))) ) ) {
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
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42bb0000))) ) ) {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x427c0000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 858993459;
              result[5] += 0;
            } else {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c20000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 85899345;
                result[3] += 0;
                result[4] += 0;
                result[5] += 773094113;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 286331153;
                result[3] += 572662306;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
              if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a60000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 85899345;
                result[3] += 773094113;
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
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 214748364;
                result[3] += 483183820;
                result[4] += 0;
                result[5] += 161061273;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 823202064;
                result[3] += 35791394;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42af0000))) ) ) {
            if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42b90000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 708486058;
                result[3] += 128481927;
                result[4] += 3670912;
                result[5] += 18354561;
              } else {
                result[0] += 71582788;
                result[1] += 0;
                result[2] += 357913941;
                result[3] += 429496729;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b50000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 844267856;
                result[3] += 14725602;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 720446126;
                result[3] += 138547332;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a00000))) ) ) {
              if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42db0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 286331153;
                result[3] += 572662306;
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
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42890000))) ) ) {
                result[0] += 214748364;
                result[1] += 0;
                result[2] += 644245094;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 850965482;
                result[3] += 8027976;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 858993459;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42df0000))) ) ) {
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
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cb0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 858993459;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 143165576;
                result[1] += 0;
                result[2] += 715827882;
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
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42cd0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42920000))) ) ) {
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c30000))) ) ) {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 858993459;
                result[5] += 0;
              } else {
                result[0] += 95443717;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 699920596;
                result[5] += 63629145;
              }
            } else {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a30000))) ) ) {
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
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42920000))) ) ) {
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
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 858993459;
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
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c40000))) ) ) {
            if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42810000))) ) ) {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42720000))) ) ) {
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
                result[4] += 590558003;
                result[5] += 268435455;
              }
            } else {
              if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 9938767;
                result[4] += 1419823;
                result[5] += 847634867;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 343597383;
                result[4] += 0;
                result[5] += 515396075;
              }
            }
          } else {
            if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42980000))) ) ) {
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
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426e0000))) ) ) {
              if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x423e0000))) ) ) {
                result[0] += 0;
                result[1] += 687194767;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 171798691;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 858993459;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x427c0000))) ) ) {
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
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
              if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42af0000))) ) ) {
                result[0] += 0;
                result[1] += 9651611;
                result[2] += 4825805;
                result[3] += 125470954;
                result[4] += 82038701;
                result[5] += 637006385;
              } else {
                result[0] += 24542670;
                result[1] += 269969372;
                result[2] += 98170681;
                result[3] += 171798691;
                result[4] += 171798691;
                result[5] += 122713351;
              }
            } else {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a40000))) ) ) {
                result[0] += 0;
                result[1] += 30140121;
                result[2] += 120560485;
                result[3] += 210980849;
                result[4] += 15070060;
                result[5] += 482241941;
              } else {
                result[0] += 0;
                result[1] += 6006947;
                result[2] += 12013894;
                result[3] += 708819777;
                result[4] += 0;
                result[5] += 132152839;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b10000))) ) ) {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x422e0000))) ) ) {
              result[0] += 0;
              result[1] += 858993459;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42620000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 858993459;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 286331153;
                result[2] += 0;
                result[3] += 0;
                result[4] += 572662306;
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
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42360000))) ) ) {
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c60000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 858993459;
              result[5] += 0;
            } else {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42960000))) ) ) {
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
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429c0000))) ) ) {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42260000))) ) ) {
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
                result[4] += 816747879;
                result[5] += 42245579;
              }
            } else {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b50000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 858993459;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 171798691;
                result[2] += 0;
                result[3] += 601295421;
                result[4] += 42949672;
                result[5] += 42949672;
              }
            }
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42db0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428a0000))) ) ) {
            if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42850000))) ) ) {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423c0000))) ) ) {
                result[0] += 0;
                result[1] += 808464432;
                result[2] += 0;
                result[3] += 0;
                result[4] += 50529027;
                result[5] += 0;
              } else {
                result[0] += 36814005;
                result[1] += 24542670;
                result[2] += 0;
                result[3] += 61356675;
                result[4] += 724008772;
                result[5] += 12271335;
              }
            } else {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x427e0000))) ) ) {
                result[0] += 793918196;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 41214332;
                result[5] += 23860929;
              } else {
                result[0] += 429496729;
                result[1] += 21122789;
                result[2] += 7040929;
                result[3] += 63368369;
                result[4] += 239391619;
                result[5] += 98573019;
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a80000))) ) ) {
                result[0] += 0;
                result[1] += 9387906;
                result[2] += 28163719;
                result[3] += 408373939;
                result[4] += 51633486;
                result[5] += 361434406;
              } else {
                result[0] += 429496729;
                result[1] += 0;
                result[2] += 234270943;
                result[3] += 117135471;
                result[4] += 0;
                result[5] += 78090314;
              }
            } else {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
                result[0] += 552210080;
                result[1] += 0;
                result[2] += 40904450;
                result[3] += 81808900;
                result[4] += 163617801;
                result[5] += 20452225;
              } else {
                result[0] += 43677633;
                result[1] += 43677633;
                result[2] += 509572390;
                result[3] += 189269745;
                result[4] += 29118422;
                result[5] += 43677633;
              }
            }
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ba0000))) ) ) {
                result[0] += 731305242;
                result[1] += 23216039;
                result[2] += 11608019;
                result[3] += 0;
                result[4] += 92864157;
                result[5] += 0;
              } else {
                result[0] += 61356675;
                result[1] += 122713351;
                result[2] += 0;
                result[3] += 0;
                result[4] += 674923432;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429b0000))) ) ) {
                result[0] += 851405177;
                result[1] += 0;
                result[2] += 7588281;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 477218588;
                result[1] += 0;
                result[2] += 381774870;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e80000))) ) ) {
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
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 858993459;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ce0000))) ) ) {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42890000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 644245094;
                result[5] += 214748364;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 22025473;
                result[4] += 22025473;
                result[5] += 814942512;
              }
            } else {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
                result[0] += 0;
                result[1] += 20452225;
                result[2] += 61356675;
                result[3] += 81808900;
                result[4] += 40904450;
                result[5] += 654471206;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 252645135;
                result[3] += 404232216;
                result[4] += 0;
                result[5] += 202116108;
              }
            }
          } else {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a20000))) ) ) {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
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
              result[2] += 858993459;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c50000))) ) ) {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a00000))) ) ) {
              if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b80000))) ) ) {
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
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
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
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429a0000))) ) ) {
              if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b90000))) ) ) {
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
              result[2] += 858993459;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a10000))) ) ) {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c90000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 429496729;
                result[3] += 429496729;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 598692410;
                result[3] += 78090314;
                result[4] += 0;
                result[5] += 182210733;
              }
            } else {
              if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c90000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 858993459;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 293866183;
                result[3] += 542522184;
                result[4] += 0;
                result[5] += 22605091;
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a70000))) ) ) {
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
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42e80000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 805306367;
                result[3] += 53687091;
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
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42cd0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
            if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a50000))) ) ) {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42920000))) ) ) {
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
              if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a20000))) ) ) {
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
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42d70000))) ) ) {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42d10000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 558345748;
                result[3] += 300647710;
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
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c10000))) ) ) {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ac0000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 858993459;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42cd0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 429496729;
                result[3] += 429496729;
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
            result[0] += 858993459;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
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
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 858993459;
            result[5] += 0;
          } else {
            if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42af0000))) ) ) {
              if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x43018000))) ) ) {
                result[0] += 3046076;
                result[1] += 0;
                result[2] += 782841556;
                result[3] += 70059750;
                result[4] += 0;
                result[5] += 3046076;
              } else {
                result[0] += 858993459;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d90000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 814942512;
                result[3] += 44050946;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 854751515;
                result[3] += 4241943;
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
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x41f00000))) ) ) {
            result[0] += 0;
            result[1] += 858993459;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42780000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 858993459;
              result[5] += 0;
            } else {
              if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x427a0000))) ) ) {
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
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
            if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x424c0000))) ) ) {
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
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42930000))) ) ) {
              if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42520000))) ) ) {
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
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429b0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 730144440;
                result[5] += 128849018;
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
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
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429a0000))) ) ) {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42870000))) ) ) {
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
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
            if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42780000))) ) ) {
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
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 11107674;
                result[4] += 8639302;
                result[5] += 839246482;
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
            if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428b0000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 858993459;
              result[5] += 0;
            } else {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a00000))) ) ) {
                result[0] += 0;
                result[1] += 343597383;
                result[2] += 0;
                result[3] += 515396075;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 156180628;
                result[1] += 0;
                result[2] += 156180628;
                result[3] += 0;
                result[4] += 0;
                result[5] += 546632201;
              }
            }
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42910000))) ) ) {
            if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
                result[0] += 644245094;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 214748364;
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
              if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 577868326;
                result[5] += 281125132;
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
            if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b70000))) ) ) {
              if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 46747943;
                result[4] += 11686985;
                result[5] += 800558529;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 286331153;
                result[4] += 0;
                result[5] += 572662306;
              }
            } else {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a90000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 858993459;
              } else {
                result[0] += 68174084;
                result[1] += 68174084;
                result[2] += 27269633;
                result[3] += 463583771;
                result[4] += 68174084;
                result[5] += 163617801;
              }
            }
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
            if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428a0000))) ) ) {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42760000))) ) ) {
                result[0] += 95443717;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 763549741;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 23860929;
                result[3] += 644245094;
                result[4] += 0;
                result[5] += 190887435;
              }
            } else {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428c0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 773094113;
                result[4] += 0;
                result[5] += 85899345;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 197146039;
                result[4] += 0;
                result[5] += 661847419;
              }
            }
          } else {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a50000))) ) ) {
              if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42910000))) ) ) {
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
                result[3] += 831283992;
                result[4] += 0;
                result[5] += 27709466;
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
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42200000))) ) ) {
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
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
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
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cd0000))) ) ) {
            if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42580000))) ) ) {
              if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b60000))) ) ) {
                result[0] += 586978863;
                result[1] += 0;
                result[2] += 0;
                result[3] += 14316557;
                result[4] += 257698037;
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
              if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x429a0000))) ) ) {
                result[0] += 0;
                result[1] += 858993459;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 13634816;
                result[1] += 13634816;
                result[2] += 0;
                result[3] += 0;
                result[4] += 818089008;
                result[5] += 13634816;
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42260000))) ) ) {
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
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428d0000))) ) ) {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
                result[0] += 54829369;
                result[1] += 54829369;
                result[2] += 91382282;
                result[3] += 328976218;
                result[4] += 109658739;
                result[5] += 219317478;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 37347541;
                result[3] += 149390166;
                result[4] += 37347541;
                result[5] += 634908208;
              }
            } else {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
                result[0] += 150323855;
                result[1] += 150323855;
                result[2] += 21474836;
                result[3] += 21474836;
                result[4] += 386547056;
                result[5] += 128849018;
              } else {
                result[0] += 814697537;
                result[1] += 4342737;
                result[2] += 868547;
                result[3] += 12159664;
                result[4] += 20845139;
                result[5] += 6079832;
              }
            }
          } else {
            if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
              if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ab0000))) ) ) {
                result[0] += 59929776;
                result[1] += 0;
                result[2] += 0;
                result[3] += 59929776;
                result[4] += 119859552;
                result[5] += 619274354;
              } else {
                result[0] += 15907286;
                result[1] += 0;
                result[2] += 15907286;
                result[3] += 604476878;
                result[4] += 0;
                result[5] += 222702007;
              }
            } else {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c70000))) ) ) {
                result[0] += 253793521;
                result[1] += 117135471;
                result[2] += 58567735;
                result[3] += 39045157;
                result[4] += 253793521;
                result[5] += 136658050;
              } else {
                result[0] += 742519769;
                result[1] += 0;
                result[2] += 116473689;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c50000))) ) ) {
            if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a50000))) ) ) {
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
              if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42af0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 90420364;
                result[3] += 135630546;
                result[4] += 0;
                result[5] += 632942548;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 112042625;
                result[3] += 634908208;
                result[4] += 0;
                result[5] += 112042625;
              }
            }
          } else {
            if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b40000))) ) ) {
              if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429c0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 429496729;
                result[4] += 0;
                result[5] += 429496729;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 797636783;
                result[3] += 61356675;
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
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cd0000))) ) ) {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42940000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 368140053;
                result[4] += 0;
                result[5] += 490853405;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 47721858;
                result[3] += 811271600;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c50000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 572662306;
                result[4] += 0;
                result[5] += 286331153;
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
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42d10000))) ) ) {
              if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42960000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 858993459;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 702812830;
                result[3] += 124944503;
                result[4] += 0;
                result[5] += 31236125;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ba0000))) ) ) {
            if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c30000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 268435455;
                result[3] += 107374182;
                result[4] += 0;
                result[5] += 483183820;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 490853405;
                result[3] += 333079096;
                result[4] += 17530478;
                result[5] += 17530478;
              }
            } else {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
                result[0] += 78090314;
                result[1] += 0;
                result[2] += 234270943;
                result[3] += 156180628;
                result[4] += 0;
                result[5] += 390451572;
              } else {
                result[0] += 8078308;
                result[1] += 0;
                result[2] += 770132066;
                result[3] += 70012006;
                result[4] += 0;
                result[5] += 10771077;
              }
            }
          } else {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e30000))) ) ) {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c70000))) ) ) {
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
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b70000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 858993459;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c10000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 572662306;
                result[3] += 286331153;
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
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42740000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 858993459;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 515396075;
                result[3] += 343597383;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 1473402;
                result[1] += 0;
                result[2] += 845732839;
                result[3] += 11787217;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42420000))) ) ) {
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
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42870000))) ) ) {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42810000))) ) ) {
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
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42bc0000))) ) ) {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428b0000))) ) ) {
              if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x427e0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 858993459;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 85899345;
                result[3] += 0;
                result[4] += 429496729;
                result[5] += 343597383;
              }
            } else {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42880000))) ) ) {
                result[0] += 95443717;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 763549741;
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
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ee0000))) ) ) {
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 858993459;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42520000))) ) ) {
            if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426c0000))) ) ) {
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
            if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
              if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42860000))) ) ) {
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
              if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42560000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 858993459;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 29620464;
                result[2] += 0;
                result[3] += 59240928;
                result[4] += 177722784;
                result[5] += 592409282;
              }
            }
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 858993459;
            result[5] += 0;
          } else {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42780000))) ) ) {
              if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42940000))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
                result[2] += 0;
                result[3] += 0;
                result[4] += 343597383;
                result[5] += 429496729;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 858993459;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428f0000))) ) ) {
                result[0] += 0;
                result[1] += 1033686;
                result[2] += 0;
                result[3] += 15505297;
                result[4] += 18606356;
                result[5] += 823848118;
              } else {
                result[0] += 14081859;
                result[1] += 0;
                result[2] += 0;
                result[3] += 126736739;
                result[4] += 154900459;
                result[5] += 563274399;
              }
            }
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42820000))) ) ) {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ab0000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 858993459;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b70000))) ) ) {
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
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b30000))) ) ) {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x427a0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 171798691;
                result[4] += 0;
                result[5] += 687194767;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 858993459;
              }
            } else {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
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
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bd0000))) ) ) {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a40000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 236963712;
                result[4] += 0;
                result[5] += 622029746;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 16519104;
                result[3] += 545130464;
                result[4] += 16519104;
                result[5] += 280824784;
              }
            } else {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a40000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 481036337;
                result[4] += 0;
                result[5] += 377957121;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 814942512;
                result[4] += 0;
                result[5] += 44050946;
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42dd0000))) ) ) {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428a0000))) ) ) {
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
                result[3] += 85899345;
                result[4] += 0;
                result[5] += 773094113;
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
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42300000))) ) ) {
            if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x422e0000))) ) ) {
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
            if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x427a0000))) ) ) {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42830000))) ) ) {
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
            } else {
              if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42460000))) ) ) {
                result[0] += 0;
                result[1] += 687194767;
                result[2] += 0;
                result[3] += 0;
                result[4] += 171798691;
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
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 858993459;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42af0000))) ) ) {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ae0000))) ) ) {
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
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d80000))) ) ) {
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
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42dc0000))) ) ) {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42580000))) ) ) {
                result[0] += 548801376;
                result[1] += 262470223;
                result[2] += 0;
                result[3] += 0;
                result[4] += 47721858;
                result[5] += 0;
              } else {
                result[0] += 40265318;
                result[1] += 13421772;
                result[2] += 0;
                result[3] += 13421772;
                result[4] += 671088639;
                result[5] += 120795955;
              }
            } else {
              if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428a0000))) ) ) {
                result[0] += 0;
                result[1] += 66076419;
                result[2] += 264305679;
                result[3] += 132152839;
                result[4] += 0;
                result[5] += 396458519;
              } else {
                result[0] += 782449487;
                result[1] += 3865857;
                result[2] += 7731714;
                result[3] += 17009771;
                result[4] += 40204914;
                result[5] += 7731714;
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
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ab0000))) ) ) {
            if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x425a0000))) ) ) {
              result[0] += 0;
              result[1] += 858993459;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 442254058;
                result[4] += 25514657;
                result[5] += 391224743;
              } else {
                result[0] += 122713351;
                result[1] += 0;
                result[2] += 490853405;
                result[3] += 245426702;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e30000))) ) ) {
              if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42860000))) ) ) {
                result[0] += 715827882;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 143165576;
                result[5] += 0;
              } else {
                result[0] += 50529027;
                result[1] += 0;
                result[2] += 252645135;
                result[3] += 50529027;
                result[4] += 404232216;
                result[5] += 101058054;
              }
            } else {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c90000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 85899345;
                result[3] += 0;
                result[4] += 773094113;
                result[5] += 0;
              } else {
                result[0] += 846722123;
                result[1] += 0;
                result[2] += 12271335;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ca0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 484915662;
                result[4] += 0;
                result[5] += 374077796;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 104120419;
                result[3] += 78090314;
                result[4] += 0;
                result[5] += 676782725;
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
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c50000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 858993459;
            } else {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42cf0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 644245094;
                result[3] += 214748364;
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
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x423a0000))) ) ) {
            if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42e50000))) ) ) {
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
          } else {
            if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d70000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 47721858;
                result[3] += 95443717;
                result[4] += 47721858;
                result[5] += 668106023;
              } else {
                result[0] += 61356675;
                result[1] += 0;
                result[2] += 61356675;
                result[3] += 0;
                result[4] += 613566756;
                result[5] += 122713351;
              }
            } else {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a50000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 200039572;
                result[3] += 564817616;
                result[4] += 35301101;
                result[5] += 58835168;
              } else {
                result[0] += 22025473;
                result[1] += 0;
                result[2] += 616713252;
                result[3] += 176203786;
                result[4] += 0;
                result[5] += 44050946;
              }
            }
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ca0000))) ) ) {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a40000))) ) ) {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d50000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 763549741;
                result[4] += 0;
                result[5] += 95443717;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 644245094;
                result[3] += 214748364;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42900000))) ) ) {
                result[0] += 687194767;
                result[1] += 0;
                result[2] += 0;
                result[3] += 171798691;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 13492043;
                result[1] += 0;
                result[2] += 699337606;
                result[3] += 116931046;
                result[4] += 2248673;
                result[5] += 26984087;
              }
            }
          } else {
            if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42940000))) ) ) {
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
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
            if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 715827882;
                result[3] += 143165576;
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
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 71582788;
                result[3] += 787410670;
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
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42740000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 858993459;
            } else {
              if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 709603292;
                result[3] += 149390166;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 845054417;
                result[3] += 13939041;
                result[4] += 0;
                result[5] += 0;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_0/test_data.csv", "r");
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
