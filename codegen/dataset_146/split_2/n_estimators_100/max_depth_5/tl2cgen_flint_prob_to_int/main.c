
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
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42460000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0;
            result[1] += 16106127;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26843545;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 164558;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42291440;
            result[5] += 493674;
          } else {
            result[0] += 0;
            result[1] += 3506095;
            result[2] += 0;
            result[3] += 0;
            result[4] += 27172242;
            result[5] += 12271335;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42680000))) ) ) {
            result[0] += 17179869;
            result[1] += 0;
            result[2] += 1431655;
            result[3] += 0;
            result[4] += 18611524;
            result[5] += 5726623;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2140503;
            result[4] += 977186;
            result[5] += 39831982;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 1571329;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4713988;
            result[4] += 2095105;
            result[5] += 34569248;
          } else {
            result[0] += 1577743;
            result[1] += 1227133;
            result[2] += 2980181;
            result[3] += 22614317;
            result[4] += 701219;
            result[5] += 13849078;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 28633115;
            result[2] += 0;
            result[3] += 4772185;
            result[4] += 9544371;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42890000))) ) ) {
            result[0] += 6710886;
            result[1] += 8589934;
            result[2] += 0;
            result[3] += 1879048;
            result[4] += 24696061;
            result[5] += 1073741;
          } else {
            result[0] += 36843911;
            result[1] += 1046702;
            result[2] += 976921;
            result[3] += 837361;
            result[4] += 1849173;
            result[5] += 1395602;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
            result[0] += 12919820;
            result[1] += 1047552;
            result[2] += 349184;
            result[3] += 3491843;
            result[4] += 16062479;
            result[5] += 9078792;
          } else {
            result[0] += 1997659;
            result[1] += 166471;
            result[2] += 11819483;
            result[3] += 19144234;
            result[4] += 499414;
            result[5] += 9322409;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ca0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 15618062;
            result[4] += 0;
            result[5] += 27331610;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 12271335;
            result[4] += 0;
            result[5] += 30678337;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 11538718;
            result[3] += 19231196;
            result[4] += 1923119;
            result[5] += 10256638;
          } else {
            result[0] += 0;
            result[1] += 1022611;
            result[2] += 35791394;
            result[3] += 2045222;
            result[4] += 0;
            result[5] += 4090445;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ae0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 5726623;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 0;
            result[4] += 0;
            result[5] += 8589934;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32659647;
            result[3] += 9842633;
            result[4] += 0;
            result[5] += 447392;
          } else {
            result[0] += 805306;
            result[1] += 0;
            result[2] += 38386270;
            result[3] += 3758096;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x429e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39241787;
            result[3] += 3707885;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 12271335;
            result[1] += 0;
            result[2] += 24542670;
            result[3] += 0;
            result[4] += 0;
            result[5] += 6135667;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42472454;
            result[3] += 477218;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42e50000))) ) ) {
            result[0] += 164558;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41468649;
            result[5] += 1316465;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7158278;
            result[3] += 0;
            result[4] += 35791394;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5726623;
            result[4] += 8589934;
            result[5] += 28633115;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 22576110;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 16519104;
            result[5] += 3854457;
          } else {
            result[0] += 0;
            result[1] += 132288;
            result[2] += 0;
            result[3] += 1984327;
            result[4] += 1940231;
            result[5] += 38892824;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 818089;
            result[3] += 12680379;
            result[4] += 1636178;
            result[5] += 27815026;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 37505348;
            result[4] += 0;
            result[5] += 5444324;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 5274521;
            result[1] += 16577066;
            result[2] += 0;
            result[3] += 188375;
            result[4] += 20344581;
            result[5] += 565127;
          } else {
            result[0] += 37875947;
            result[1] += 707961;
            result[2] += 78662;
            result[3] += 747292;
            result[4] += 2871177;
            result[5] += 668630;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 1543102;
            result[1] += 257183;
            result[2] += 12987775;
            result[3] += 14788061;
            result[4] += 642959;
            result[5] += 12730591;
          } else {
            result[0] += 32351701;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3346727;
            result[4] += 6693455;
            result[5] += 557787;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 42949672;
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
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 1263225;
            result[2] += 2526451;
            result[3] += 7579354;
            result[4] += 1263225;
            result[5] += 30317416;
          } else {
            result[0] += 17179869;
            result[1] += 0;
            result[2] += 25769803;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2221534;
            result[3] += 34063533;
            result[4] += 0;
            result[5] += 6664604;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7579354;
            result[3] += 30317416;
            result[4] += 0;
            result[5] += 5052902;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34359738;
            result[3] += 7268406;
            result[4] += 0;
            result[5] += 1321528;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 22906492;
            result[3] += 17179869;
            result[4] += 0;
            result[5] += 2863311;
          } else {
            result[0] += 1952257;
            result[1] += 0;
            result[2] += 37092899;
            result[3] += 3904515;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42f60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39699427;
            result[3] += 3018085;
            result[4] += 0;
            result[5] += 232160;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32212254;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 81037;
            result[1] += 0;
            result[2] += 42220338;
            result[3] += 648296;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42e30000))) ) ) {
            result[0] += 175304;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41547234;
            result[5] += 1227133;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
            result[0] += 42438367;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 511305;
            result[5] += 0;
          } else {
            result[0] += 2309122;
            result[1] += 1847297;
            result[2] += 0;
            result[3] += 3232771;
            result[4] += 18011153;
            result[5] += 17549328;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 1385473;
            result[2] += 0;
            result[3] += 2078209;
            result[4] += 30480413;
            result[5] += 9005576;
          } else {
            result[0] += 146752;
            result[1] += 0;
            result[2] += 48917;
            result[3] += 1418611;
            result[4] += 2543716;
            result[5] += 38791674;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 3067833;
            result[1] += 0;
            result[2] += 1533916;
            result[3] += 10353939;
            result[4] += 0;
            result[5] += 27993983;
          } else {
            result[0] += 0;
            result[1] += 269276;
            result[2] += 269276;
            result[3] += 25715948;
            result[4] += 0;
            result[5] += 16695170;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42480000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 14316557;
            result[2] += 0;
            result[3] += 0;
            result[4] += 28633115;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42551990;
            result[2] += 0;
            result[3] += 0;
            result[4] += 397682;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cc0000))) ) ) {
            result[0] += 580400;
            result[1] += 1160801;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40047668;
            result[5] += 1160801;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 6561755;
            result[1] += 9544371;
            result[2] += 0;
            result[3] += 2386092;
            result[4] += 20878313;
            result[5] += 3579139;
          } else {
            result[0] += 38121697;
            result[1] += 270366;
            result[2] += 270366;
            result[3] += 1120090;
            result[4] += 2394676;
            result[5] += 772476;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 833974;
            result[1] += 416987;
            result[2] += 21683330;
            result[3] += 11050158;
            result[4] += 416987;
            result[5] += 8548235;
          } else {
            result[0] += 32582510;
            result[1] += 0;
            result[2] += 8886139;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1481023;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3904515;
            result[3] += 27331610;
            result[4] += 0;
            result[5] += 11713547;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1590728;
            result[3] += 1590728;
            result[4] += 1590728;
            result[5] += 38177487;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 38306465;
            result[4] += 0;
            result[5] += 4643207;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 23126746;
            result[3] += 13215283;
            result[4] += 0;
            result[5] += 6607641;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 32212254;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 32212254;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36268612;
            result[3] += 5726623;
            result[4] += 0;
            result[5] += 954437;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9544371;
            result[3] += 33405301;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34359738;
            result[3] += 4772185;
            result[4] += 0;
            result[5] += 3817748;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 14316557;
            result[1] += 0;
            result[2] += 22906492;
            result[3] += 0;
            result[4] += 0;
            result[5] += 5726623;
          } else {
            result[0] += 623966;
            result[1] += 0;
            result[2] += 40141825;
            result[3] += 2131884;
            result[4] += 0;
            result[5] += 51997;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2526451;
            result[4] += 20211610;
            result[5] += 20211610;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 28633115;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14316557;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 17808400;
            result[1] += 7332870;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8380423;
            result[5] += 9427976;
          } else {
            result[0] += 0;
            result[1] += 53486;
            result[2] += 106973;
            result[3] += 2353406;
            result[4] += 1658082;
            result[5] += 38777724;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 6113274;
            result[1] += 1410755;
            result[2] += 156750;
            result[3] += 9875289;
            result[4] += 3135012;
            result[5] += 22258589;
          } else {
            result[0] += 665886;
            result[1] += 998829;
            result[2] += 0;
            result[3] += 33627263;
            result[4] += 665886;
            result[5] += 6991807;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42860000))) ) ) {
            result[0] += 0;
            result[1] += 4631827;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35791394;
            result[5] += 2526451;
          } else {
            result[0] += 5153960;
            result[1] += 10307921;
            result[2] += 0;
            result[3] += 12025908;
            result[4] += 10307921;
            result[5] += 5153960;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 3303820;
            result[1] += 28082478;
            result[2] += 0;
            result[3] += 0;
            result[4] += 11563373;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 488064;
            result[1] += 18546449;
            result[2] += 0;
            result[3] += 2440322;
            result[4] += 20498707;
            result[5] += 976128;
          } else {
            result[0] += 36928690;
            result[1] += 0;
            result[2] += 36490;
            result[3] += 1715067;
            result[4] += 2554356;
            result[5] += 1715067;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 1475370;
            result[1] += 327860;
            result[2] += 8852222;
            result[3] += 17540515;
            result[4] += 2458950;
            result[5] += 12294753;
          } else {
            result[0] += 17570320;
            result[1] += 278893;
            result[2] += 20359260;
            result[3] += 2788939;
            result[4] += 836681;
            result[5] += 1115575;
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ae0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4294967;
            result[3] += 0;
            result[4] += 0;
            result[5] += 38654705;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7293340;
            result[3] += 24311135;
            result[4] += 0;
            result[5] += 11345196;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4294967;
            result[3] += 0;
            result[4] += 0;
            result[5] += 38654705;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32212254;
            result[3] += 0;
            result[4] += 0;
            result[5] += 10737418;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 0;
            result[4] += 0;
            result[5] += 14316557;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5726623;
            result[3] += 25769803;
            result[4] += 2863311;
            result[5] += 8589934;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3904515;
            result[3] += 31236125;
            result[4] += 0;
            result[5] += 7809031;
          } else {
            result[0] += 284121;
            result[1] += 47353;
            result[2] += 39776984;
            result[3] += 2604445;
            result[4] += 0;
            result[5] += 236767;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 679046;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 38535872;
            result[5] += 3734754;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
            result[0] += 21474836;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 0;
          } else {
            result[0] += 110837;
            result[1] += 0;
            result[2] += 166256;
            result[3] += 1607149;
            result[4] += 886702;
            result[5] += 40178726;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 2625744;
            result[1] += 1500425;
            result[2] += 187553;
            result[3] += 8439892;
            result[4] += 3375956;
            result[5] += 26820101;
          } else {
            result[0] += 2576980;
            result[1] += 858993;
            result[2] += 858993;
            result[3] += 30064771;
            result[4] += 1431655;
            result[5] += 7158278;
          }
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42180000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1965017;
            result[1] += 4210752;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35931752;
            result[5] += 842150;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 35449972;
            result[1] += 555533;
            result[2] += 104162;
            result[3] += 1215229;
            result[4] += 3298479;
            result[5] += 2326295;
          } else {
            result[0] += 10078103;
            result[1] += 565127;
            result[2] += 8476909;
            result[3] += 10172290;
            result[4] += 1412818;
            result[5] += 12244424;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 2321603;
            result[1] += 37145663;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3482405;
            result[5] += 0;
          } else {
            result[0] += 16106127;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 5368709;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ca0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 11713547;
            result[4] += 0;
            result[5] += 31236125;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 11647368;
            result[3] += 26206580;
            result[4] += 0;
            result[5] += 5095723;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 29846382;
            result[3] += 8735526;
            result[4] += 0;
            result[5] += 4367763;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 18790481;
            result[3] += 24159191;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37896770;
            result[3] += 5052902;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42d70000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42f20000))) ) ) {
            result[0] += 617346;
            result[1] += 0;
            result[2] += 38275478;
            result[3] += 3880463;
            result[4] += 0;
            result[5] += 176384;
          } else {
            result[0] += 33405301;
            result[1] += 0;
            result[2] += 9544371;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42930000))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42549520;
            result[3] += 400152;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cc0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 135916;
            result[1] += 135916;
            result[2] += 0;
            result[3] += 135916;
            result[4] += 41862339;
            result[5] += 679583;
          } else {
            result[0] += 0;
            result[1] += 33405301;
            result[2] += 0;
            result[3] += 0;
            result[4] += 9544371;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42520000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 42847654;
            result[2] += 0;
            result[3] += 0;
            result[4] += 102018;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x424e0000))) ) ) {
            result[0] += 12884901;
            result[1] += 30064771;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 5602131;
            result[2] += 0;
            result[3] += 0;
            result[4] += 37347541;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42620000))) ) ) {
            result[0] += 27678678;
            result[1] += 954437;
            result[2] += 0;
            result[3] += 0;
            result[4] += 13362120;
            result[5] += 954437;
          } else {
            result[0] += 43736;
            result[1] += 437369;
            result[2] += 0;
            result[3] += 2799164;
            result[4] += 2230583;
            result[5] += 37438818;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1590728;
            result[4] += 4772185;
            result[5] += 36586758;
          } else {
            result[0] += 335544;
            result[1] += 0;
            result[2] += 1342177;
            result[3] += 32883343;
            result[4] += 1342177;
            result[5] += 7046430;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
            result[0] += 5856773;
            result[1] += 13015052;
            result[2] += 1301505;
            result[3] += 0;
            result[4] += 20824083;
            result[5] += 1952257;
          } else {
            result[0] += 38004425;
            result[1] += 428328;
            result[2] += 194694;
            result[3] += 1051351;
            result[4] += 2102703;
            result[5] += 1168168;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 2106965;
            result[1] += 1134519;
            result[2] += 1620742;
            result[3] += 12965939;
            result[4] += 5510524;
            result[5] += 19610982;
          } else {
            result[0] += 20452225;
            result[1] += 0;
            result[2] += 17588913;
            result[3] += 2454267;
            result[4] += 0;
            result[5] += 2454267;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b90000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1034931;
            result[2] += 1552397;
            result[3] += 2587329;
            result[4] += 1552397;
            result[5] += 36222615;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 16106127;
            result[2] += 21474836;
            result[3] += 0;
            result[4] += 0;
            result[5] += 5368709;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5965232;
            result[3] += 30223843;
            result[4] += 0;
            result[5] += 6760596;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 32212254;
            result[2] += 0;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 25379352;
            result[1] += 0;
            result[2] += 13665805;
            result[3] += 0;
            result[4] += 3904515;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3904515;
            result[3] += 23427094;
            result[4] += 1952257;
            result[5] += 13665805;
          } else {
            result[0] += 580400;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 11994953;
            result[4] += 193466;
            result[5] += 1547735;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 695541;
            result[1] += 0;
            result[2] += 37733113;
            result[3] += 3999362;
            result[4] += 0;
            result[5] += 521655;
          } else {
            result[0] += 159961;
            result[1] += 0;
            result[2] += 41749961;
            result[3] += 959769;
            result[4] += 0;
            result[5] += 79980;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42300000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 27331610;
            result[5] += 15618062;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42230849;
            result[5] += 718822;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2526451;
            result[4] += 32843867;
            result[5] += 7579354;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1131822;
            result[4] += 297847;
            result[5] += 41520002;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
            result[0] += 29734388;
            result[1] += 1238932;
            result[2] += 0;
            result[3] += 2890843;
            result[4] += 6607641;
            result[5] += 2477865;
          } else {
            result[0] += 759424;
            result[1] += 421902;
            result[2] += 337521;
            result[3] += 17551143;
            result[4] += 2615795;
            result[5] += 21263885;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42420000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 24542670;
            result[2] += 0;
            result[3] += 0;
            result[4] += 18407002;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 5368709;
            result[2] += 1342177;
            result[3] += 1342177;
            result[4] += 32212254;
            result[5] += 2684354;
          } else {
            result[0] += 4880644;
            result[1] += 27331610;
            result[2] += 8785160;
            result[3] += 0;
            result[4] += 1952257;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
            result[0] += 6231040;
            result[1] += 14242378;
            result[2] += 0;
            result[3] += 1112685;
            result[4] += 20028344;
            result[5] += 1335222;
          } else {
            result[0] += 37989504;
            result[1] += 192254;
            result[2] += 461410;
            result[3] += 1345782;
            result[4] += 2153251;
            result[5] += 807469;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42df0000))) ) ) {
            result[0] += 1043311;
            result[1] += 0;
            result[2] += 15649678;
            result[3] += 15649678;
            result[4] += 1217197;
            result[5] += 9389807;
          } else {
            result[0] += 28454158;
            result[1] += 0;
            result[2] += 2147483;
            result[3] += 2147483;
            result[4] += 6979321;
            result[5] += 3221225;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ac0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6135667;
            result[3] += 3067833;
            result[4] += 0;
            result[5] += 33746171;
          } else {
            result[0] += 4294967;
            result[1] += 0;
            result[2] += 11453246;
            result[3] += 17179869;
            result[4] += 1431655;
            result[5] += 8589934;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8288533;
            result[3] += 28633115;
            result[4] += 0;
            result[5] += 6028024;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32212254;
            result[3] += 5368709;
            result[4] += 0;
            result[5] += 5368709;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 7158278;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42e50000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5368709;
            result[3] += 37580963;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1431655;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 10737418;
            result[4] += 715827;
            result[5] += 1431655;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 28633115;
            result[1] += 0;
            result[2] += 4772185;
            result[3] += 9544371;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 30678337;
            result[1] += 0;
            result[2] += 12271335;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 159664;
            result[1] += 0;
            result[2] += 40714373;
            result[3] += 1969191;
            result[4] += 0;
            result[5] += 106442;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42420000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 376751;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42196169;
            result[5] += 376751;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 1753047;
            result[1] += 876523;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21913098;
            result[5] += 18407002;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42520000))) ) ) {
            result[0] += 40423221;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2526451;
            result[5] += 0;
          } else {
            result[0] += 208493;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1928565;
            result[4] += 1928565;
            result[5] += 38884048;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 4405094;
            result[1] += 3579139;
            result[2] += 0;
            result[3] += 6882960;
            result[4] += 1376592;
            result[5] += 26705886;
          } else {
            result[0] += 1919538;
            result[1] += 239942;
            result[2] += 479884;
            result[3] += 28073249;
            result[4] += 239942;
            result[5] += 11997115;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 32212254;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10737418;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 10626723;
            result[1] += 5977531;
            result[2] += 221390;
            result[3] += 2878070;
            result[4] += 22803176;
            result[5] += 442780;
          } else {
            result[0] += 38485802;
            result[1] += 241290;
            result[2] += 80430;
            result[3] += 965161;
            result[4] += 2613978;
            result[5] += 563010;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42dd0000))) ) ) {
            result[0] += 2755262;
            result[1] += 810371;
            result[2] += 8103711;
            result[3] += 9886528;
            result[4] += 3403558;
            result[5] += 17990240;
          } else {
            result[0] += 38654705;
            result[1] += 715827;
            result[2] += 715827;
            result[3] += 0;
            result[4] += 2863311;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 34359738;
            result[5] += 8589934;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1342177;
            result[4] += 2684354;
            result[5] += 38923141;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 5726623;
            result[2] += 2863311;
            result[3] += 20043180;
            result[4] += 0;
            result[5] += 14316557;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 740511;
            result[3] += 40728138;
            result[4] += 0;
            result[5] += 1481023;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 11453246;
            result[4] += 1431655;
            result[5] += 30064771;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12570635;
            result[3] += 23046165;
            result[4] += 0;
            result[5] += 7332870;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 19522578;
            result[4] += 3904515;
            result[5] += 19522578;
          } else {
            result[0] += 3734754;
            result[1] += 7469508;
            result[2] += 26143279;
            result[3] += 5602131;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 17179869;
            result[2] += 8589934;
            result[3] += 0;
            result[4] += 17179869;
            result[5] += 0;
          } else {
            result[0] += 40997415;
            result[1] += 0;
            result[2] += 1952257;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 367091;
            result[2] += 22759655;
            result[3] += 16152013;
            result[4] += 0;
            result[5] += 3670912;
          } else {
            result[0] += 484394;
            result[1] += 322929;
            result[2] += 36975470;
            result[3] += 4036623;
            result[4] += 322929;
            result[5] += 807324;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39324051;
            result[3] += 3625621;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42678981;
            result[3] += 270691;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1073741;
            result[3] += 0;
            result[4] += 37580963;
            result[5] += 4294967;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14316557;
            result[5] += 28633115;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 69610;
            result[1] += 0;
            result[2] += 0;
            result[3] += 278441;
            result[4] += 835325;
            result[5] += 41766294;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 740511;
            result[3] += 9626650;
            result[4] += 1110767;
            result[5] += 31471743;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42620000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 40372692;
            result[1] += 0;
            result[2] += 858993;
            result[3] += 0;
            result[4] += 1717986;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 198841;
            result[1] += 0;
            result[2] += 397682;
            result[3] += 3579139;
            result[4] += 6561755;
            result[5] += 32212254;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 484394;
            result[3] += 25349994;
            result[4] += 1291719;
            result[5] += 15823563;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42320000))) ) ) {
            result[0] += 3435973;
            result[1] += 34359738;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5153960;
            result[5] += 0;
          } else {
            result[0] += 885560;
            result[1] += 7527262;
            result[2] += 0;
            result[3] += 1328340;
            result[4] += 32322949;
            result[5] += 885560;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 36342030;
            result[2] += 0;
            result[3] += 0;
            result[4] += 6607641;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
            result[0] += 4294967;
            result[1] += 19020569;
            result[2] += 0;
            result[3] += 0;
            result[4] += 19020569;
            result[5] += 613566;
          } else {
            result[0] += 38899920;
            result[1] += 222922;
            result[2] += 260075;
            result[3] += 631612;
            result[4] += 2377836;
            result[5] += 557305;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 1118481;
            result[1] += 3579139;
            result[2] += 3355443;
            result[3] += 15435038;
            result[4] += 1565873;
            result[5] += 17895697;
          } else {
            result[0] += 31496426;
            result[1] += 0;
            result[2] += 5726623;
            result[3] += 0;
            result[4] += 5153960;
            result[5] += 572662;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7620103;
            result[3] += 25284888;
            result[4] += 0;
            result[5] += 10044681;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 6135667;
            result[4] += 6135667;
            result[5] += 30678337;
          } else {
            result[0] += 1385473;
            result[1] += 0;
            result[2] += 30018588;
            result[3] += 8312839;
            result[4] += 0;
            result[5] += 3232771;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4294967;
            result[3] += 36507222;
            result[4] += 0;
            result[5] += 2147483;
          } else {
            result[0] += 627919;
            result[1] += 0;
            result[2] += 33907636;
            result[3] += 7032694;
            result[4] += 0;
            result[5] += 1381422;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 15618062;
            result[1] += 0;
            result[2] += 23427094;
            result[3] += 0;
            result[4] += 0;
            result[5] += 3904515;
          } else {
            result[0] += 71822;
            result[1] += 0;
            result[2] += 41369584;
            result[3] += 1508266;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 171798;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42262478;
            result[5] += 515396;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 28633115;
            result[4] += 14316557;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32212254;
            result[3] += 0;
            result[4] += 10737418;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 32212254;
            result[5] += 10737418;
          } else {
            result[0] += 124491;
            result[1] += 0;
            result[2] += 62245;
            result[3] += 933688;
            result[4] += 1058180;
            result[5] += 40771066;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 35544556;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7405116;
            result[5] += 0;
          } else {
            result[0] += 204522;
            result[1] += 409044;
            result[2] += 272696;
            result[3] += 15952735;
            result[4] += 3885922;
            result[5] += 22224751;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42480000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 28633115;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14316557;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42da0000))) ) ) {
            result[0] += 1552397;
            result[1] += 8279455;
            result[2] += 0;
            result[3] += 1034931;
            result[4] += 31565422;
            result[5] += 517465;
          } else {
            result[0] += 1342177;
            result[1] += 38923141;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2684354;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 5602131;
            result[1] += 13071639;
            result[2] += 0;
            result[3] += 0;
            result[4] += 24275902;
            result[5] += 0;
          } else {
            result[0] += 38786604;
            result[1] += 370966;
            result[2] += 329747;
            result[3] += 824369;
            result[4] += 1978487;
            result[5] += 659495;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 1684300;
            result[1] += 842150;
            result[2] += 12295396;
            result[3] += 18527309;
            result[4] += 336860;
            result[5] += 9263654;
          } else {
            result[0] += 31167019;
            result[1] += 0;
            result[2] += 6841540;
            result[3] += 0;
            result[4] += 4941112;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42520000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1717986;
            result[3] += 25769803;
            result[4] += 3435973;
            result[5] += 12025908;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4569114;
            result[3] += 3655291;
            result[4] += 913822;
            result[5] += 33811444;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c00000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42fa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38506603;
            result[3] += 2962046;
            result[4] += 0;
            result[5] += 1481023;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7469508;
            result[3] += 35480164;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 29734388;
            result[3] += 13215283;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 16106127;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 5368709;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36342030;
            result[3] += 5368709;
            result[4] += 0;
            result[5] += 1238932;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 409044;
            result[1] += 0;
            result[2] += 37632094;
            result[3] += 4090445;
            result[4] += 0;
            result[5] += 818089;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39467267;
            result[3] += 3482405;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42504136;
            result[3] += 445536;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 194342;
            result[1] += 388684;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41783618;
            result[5] += 583027;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17179869;
            result[5] += 25769803;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x424a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 32212254;
            result[5] += 10737418;
          } else {
            result[0] += 57419;
            result[1] += 0;
            result[2] += 114838;
            result[3] += 1492903;
            result[4] += 1090967;
            result[5] += 40193544;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 26843545;
            result[1] += 2928386;
            result[2] += 0;
            result[3] += 488064;
            result[4] += 10737418;
            result[5] += 1952257;
          } else {
            result[0] += 255652;
            result[1] += 1278264;
            result[2] += 1448699;
            result[3] += 14998298;
            result[4] += 1619134;
            result[5] += 23349623;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42460000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 10737418;
            result[2] += 0;
            result[3] += 0;
            result[4] += 32212254;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 42455998;
            result[2] += 0;
            result[3] += 0;
            result[4] += 493674;
            result[5] += 0;
          } else {
            result[0] += 21474836;
            result[1] += 21474836;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 3834792;
            result[1] += 16873085;
            result[2] += 153391;
            result[3] += 2914442;
            result[4] += 17793435;
            result[5] += 1380525;
          } else {
            result[0] += 37727598;
            result[1] += 340570;
            result[2] += 681140;
            result[3] += 870345;
            result[4] += 2724560;
            result[5] += 605457;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42e30000))) ) ) {
            result[0] += 1638407;
            result[1] += 819203;
            result[2] += 12405082;
            result[3] += 13926460;
            result[4] += 2106523;
            result[5] += 12053995;
          } else {
            result[0] += 36022306;
            result[1] += 1385473;
            result[2] += 2078209;
            result[3] += 0;
            result[4] += 2078209;
            result[5] += 1385473;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42e90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5368709;
            result[3] += 10737418;
            result[4] += 26843545;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3482405;
            result[3] += 3482405;
            result[4] += 0;
            result[5] += 35984861;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8589934;
            result[3] += 32519038;
            result[4] += 0;
            result[5] += 1840700;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 25931878;
            result[3] += 15397052;
            result[4] += 0;
            result[5] += 1620742;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39513699;
            result[3] += 3435973;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42dd0000))) ) ) {
            result[0] += 5368709;
            result[1] += 0;
            result[2] += 37580963;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 8589934;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 0;
            result[4] += 2863311;
            result[5] += 17179869;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36984440;
            result[3] += 5624361;
            result[4] += 0;
            result[5] += 340870;
          } else {
            result[0] += 86942;
            result[1] += 0;
            result[2] += 42080246;
            result[3] += 782483;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 1068399;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41240233;
            result[5] += 641039;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 998829;
            result[4] += 21974251;
            result[5] += 19976592;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c00000))) ) ) {
            result[0] += 0;
            result[1] += 12271335;
            result[2] += 0;
            result[3] += 18407002;
            result[4] += 12271335;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
            result[0] += 33154133;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7535030;
            result[5] += 2260509;
          } else {
            result[0] += 254390;
            result[1] += 211992;
            result[2] += 42398;
            result[3] += 3391879;
            result[4] += 2119924;
            result[5] += 36929087;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42910000))) ) ) {
            result[0] += 1227133;
            result[1] += 0;
            result[2] += 0;
            result[3] += 8589934;
            result[4] += 1227133;
            result[5] += 31905471;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 36527291;
            result[4] += 401398;
            result[5] += 6020982;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 6073691;
            result[2] += 867670;
            result[3] += 0;
            result[4] += 34706806;
            result[5] += 1301505;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
            result[0] += 117348;
            result[1] += 42832324;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 28633115;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14316557;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 7874106;
            result[1] += 8232020;
            result[2] += 1073741;
            result[3] += 715827;
            result[4] += 23622320;
            result[5] += 1431655;
          } else {
            result[0] += 37846029;
            result[1] += 179705;
            result[2] += 215646;
            result[3] += 1868939;
            result[4] += 2084586;
            result[5] += 754764;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 1307163;
            result[1] += 373475;
            result[2] += 3734754;
            result[3] += 14192065;
            result[4] += 3734754;
            result[5] += 19607459;
          } else {
            result[0] += 23553046;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 1385473;
            result[4] += 2770946;
            result[5] += 923648;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3232771;
            result[3] += 31865886;
            result[4] += 0;
            result[5] += 7851015;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 16320875;
            result[3] += 17179869;
            result[4] += 0;
            result[5] += 9448928;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 42949672;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 3789677;
            result[1] += 0;
            result[2] += 6316128;
            result[3] += 11369031;
            result[4] += 0;
            result[5] += 21474836;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 16106127;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33628680;
            result[3] += 7858876;
            result[4] += 365529;
            result[5] += 1096587;
          } else {
            result[0] += 26430567;
            result[1] += 0;
            result[2] += 16519104;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8589934;
            result[3] += 0;
            result[4] += 0;
            result[5] += 34359738;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 233422;
            result[1] += 0;
            result[2] += 38514652;
            result[3] += 3968176;
            result[4] += 0;
            result[5] += 233422;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42308633;
            result[3] += 641039;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c20000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41283521;
            result[5] += 1666151;
          } else {
            result[0] += 0;
            result[1] += 34359738;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8589934;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
            result[0] += 31496426;
            result[1] += 2863311;
            result[2] += 0;
            result[3] += 1227133;
            result[4] += 4090445;
            result[5] += 3272356;
          } else {
            result[0] += 82516;
            result[1] += 123774;
            result[2] += 206290;
            result[3] += 3094356;
            result[4] += 2104162;
            result[5] += 37338572;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
            result[0] += 533536;
            result[1] += 0;
            result[2] += 0;
            result[3] += 33612787;
            result[4] += 1333840;
            result[5] += 7469508;
          } else {
            result[0] += 2684354;
            result[1] += 0;
            result[2] += 0;
            result[3] += 13958643;
            result[4] += 1610612;
            result[5] += 24696061;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b60000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 4294967;
            result[2] += 0;
            result[3] += 0;
            result[4] += 38654705;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 10737418;
            result[2] += 0;
            result[3] += 21474836;
            result[4] += 10737418;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 5289368;
            result[1] += 9944012;
            result[2] += 0;
            result[3] += 0;
            result[4] += 27293141;
            result[5] += 423149;
          } else {
            result[0] += 38891436;
            result[1] += 126819;
            result[2] += 507279;
            result[3] += 1268199;
            result[4] += 1733205;
            result[5] += 422733;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42df0000))) ) ) {
            result[0] += 1595653;
            result[1] += 664855;
            result[2] += 13961967;
            result[3] += 10903632;
            result[4] += 2792393;
            result[5] += 13031170;
          } else {
            result[0] += 37025580;
            result[1] += 0;
            result[2] += 5183581;
            result[3] += 0;
            result[4] += 740511;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d50000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 641039;
            result[2] += 3846239;
            result[3] += 24359516;
            result[4] += 1282079;
            result[5] += 12820797;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7669584;
            result[3] += 1533916;
            result[4] += 3067833;
            result[5] += 30678337;
          } else {
            result[0] += 9911462;
            result[1] += 0;
            result[2] += 13215283;
            result[3] += 13215283;
            result[4] += 6607641;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 3303820;
            result[1] += 0;
            result[2] += 16519104;
            result[3] += 19822925;
            result[4] += 0;
            result[5] += 3303820;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13362120;
            result[3] += 28633115;
            result[4] += 0;
            result[5] += 954437;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 1130254;
            result[1] += 0;
            result[2] += 38428654;
            result[3] += 1130254;
            result[4] += 0;
            result[5] += 2260509;
          } else {
            result[0] += 23860929;
            result[1] += 0;
            result[2] += 9544371;
            result[3] += 9544371;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 390451;
            result[1] += 0;
            result[2] += 30064771;
            result[3] += 12103998;
            result[4] += 0;
            result[5] += 390451;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39439363;
            result[3] += 3303820;
            result[4] += 0;
            result[5] += 206488;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33038209;
            result[3] += 9911462;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42037467;
            result[3] += 912205;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 933688;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 27076967;
            result[5] += 14939016;
          } else {
            result[0] += 0;
            result[1] += 9544371;
            result[2] += 0;
            result[3] += 33405301;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42810000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42840000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
            result[0] += 604924;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2419699;
            result[4] += 15123124;
            result[5] += 24801923;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1837153;
            result[4] += 1390278;
            result[5] += 39722240;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 318145;
            result[1] += 0;
            result[2] += 954437;
            result[3] += 5408477;
            result[4] += 954437;
            result[5] += 35314175;
          } else {
            result[0] += 386933;
            result[1] += 0;
            result[2] += 773867;
            result[3] += 25150709;
            result[4] += 193466;
            result[5] += 16444694;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42480000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 7158278;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35791394;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 1493901;
            result[1] += 2240852;
            result[2] += 1867377;
            result[3] += 0;
            result[4] += 35853640;
            result[5] += 1493901;
          } else {
            result[0] += 3303820;
            result[1] += 35516075;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4129776;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42850000))) ) ) {
            result[0] += 7754802;
            result[1] += 15509604;
            result[2] += 0;
            result[3] += 596523;
            result[4] += 17895697;
            result[5] += 1193046;
          } else {
            result[0] += 38279494;
            result[1] += 638656;
            result[2] += 39916;
            result[3] += 957985;
            result[4] += 2355047;
            result[5] += 678572;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 464320;
            result[1] += 0;
            result[2] += 4875368;
            result[3] += 19269312;
            result[4] += 1160801;
            result[5] += 17179869;
          } else {
            result[0] += 34087042;
            result[1] += 0;
            result[2] += 5453926;
            result[3] += 0;
            result[4] += 3408704;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 6710886;
            result[4] += 0;
            result[5] += 36238786;
          } else {
            result[0] += 0;
            result[1] += 34359738;
            result[2] += 8589934;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 11261194;
            result[3] += 23569942;
            result[4] += 0;
            result[5] += 8118535;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40265318;
            result[3] += 0;
            result[4] += 0;
            result[5] += 2684354;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 18673770;
            result[3] += 18673770;
            result[4] += 1867377;
            result[5] += 3734754;
          } else {
            result[0] += 460175;
            result[1] += 0;
            result[2] += 34973305;
            result[3] += 6902626;
            result[4] += 0;
            result[5] += 613566;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 6991807;
            result[1] += 0;
            result[2] += 34459621;
            result[3] += 998829;
            result[4] += 0;
            result[5] += 499414;
          } else {
            result[0] += 131144;
            result[1] += 0;
            result[2] += 41310372;
            result[3] += 1377012;
            result[4] += 0;
            result[5] += 131144;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42de0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 17179869;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 25769803;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x426a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 1385473;
            result[2] += 0;
            result[3] += 0;
            result[4] += 37407779;
            result[5] += 4156419;
          } else {
            result[0] += 1431655;
            result[1] += 2863311;
            result[2] += 0;
            result[3] += 4294967;
            result[4] += 11453246;
            result[5] += 22906492;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 27331610;
            result[5] += 15618062;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 938058;
            result[4] += 201012;
            result[5] += 41810602;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1867377;
            result[4] += 41082295;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4032833;
            result[4] += 3427908;
            result[5] += 35488931;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 631612;
            result[3] += 5052902;
            result[4] += 631612;
            result[5] += 36633544;
          } else {
            result[0] += 1700977;
            result[1] += 850488;
            result[2] += 1275732;
            result[3] += 17009771;
            result[4] += 1275732;
            result[5] += 20836970;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 36942725;
            result[4] += 600694;
            result[5] += 5406252;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 4973120;
            result[2] += 0;
            result[3] += 0;
            result[4] += 37072349;
            result[5] += 904203;
          } else {
            result[0] += 0;
            result[1] += 38654705;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4294967;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 28633115;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14316557;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 10283724;
            result[1] += 3024624;
            result[2] += 0;
            result[3] += 2419699;
            result[4] += 23592073;
            result[5] += 3629549;
          } else {
            result[0] += 0;
            result[1] += 31496426;
            result[2] += 0;
            result[3] += 2863311;
            result[4] += 0;
            result[5] += 8589934;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
            result[0] += 39865105;
            result[1] += 351406;
            result[2] += 0;
            result[3] += 780903;
            result[4] += 1366580;
            result[5] += 585677;
          } else {
            result[0] += 9576616;
            result[1] += 1451002;
            result[2] += 7255012;
            result[3] += 10447217;
            result[4] += 5513809;
            result[5] += 8706014;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3482405;
            result[3] += 11608019;
            result[4] += 27859247;
            result[5] += 0;
          } else {
            result[0] += 181990;
            result[1] += 181990;
            result[2] += 5459704;
            result[3] += 24568668;
            result[4] += 363980;
            result[5] += 12193339;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42d20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 16291255;
            result[3] += 14810232;
            result[4] += 0;
            result[5] += 11848185;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38859227;
            result[3] += 2045222;
            result[4] += 0;
            result[5] += 2045222;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 1695381;
            result[1] += 16388690;
            result[2] += 6216400;
            result[3] += 3390763;
            result[4] += 10737418;
            result[5] += 4521018;
          } else {
            result[0] += 33746171;
            result[1] += 2045222;
            result[2] += 6135667;
            result[3] += 1022611;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 34359738;
            result[4] += 0;
            result[5] += 8589934;
          } else {
            result[0] += 891072;
            result[1] += 0;
            result[2] += 38048776;
            result[3] += 3252412;
            result[4] += 133660;
            result[5] += 623750;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42758785;
            result[5] += 190887;
          } else {
            result[0] += 0;
            result[1] += 17179869;
            result[2] += 0;
            result[3] += 0;
            result[4] += 25769803;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7809031;
            result[5] += 35140641;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
            result[0] += 11116385;
            result[1] += 15158708;
            result[2] += 0;
            result[3] += 1010580;
            result[4] += 12632256;
            result[5] += 3031741;
          } else {
            result[0] += 104883;
            result[1] += 209766;
            result[2] += 0;
            result[3] += 1153715;
            result[4] += 2254988;
            result[5] += 39226319;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 613566;
            result[3] += 6135667;
            result[4] += 0;
            result[5] += 36200438;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3095471;
            result[3] += 27085379;
            result[4] += 580400;
            result[5] += 12188420;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42260000))) ) ) {
            result[0] += 0;
            result[1] += 32928082;
            result[2] += 0;
            result[3] += 5726623;
            result[4] += 4294967;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 8589934;
            result[4] += 34359738;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42890000))) ) ) {
            result[0] += 4933408;
            result[1] += 6674611;
            result[2] += 0;
            result[3] += 580400;
            result[4] += 29020049;
            result[5] += 1741202;
          } else {
            result[0] += 35065191;
            result[1] += 691621;
            result[2] += 34581;
            result[3] += 829945;
            result[4] += 3596429;
            result[5] += 2731903;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 372396;
            result[1] += 1117188;
            result[2] += 10054692;
            result[3] += 18992196;
            result[4] += 496528;
            result[5] += 11916672;
          } else {
            result[0] += 31101487;
            result[1] += 0;
            result[2] += 4813325;
            result[3] += 1851279;
            result[4] += 5183581;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c40000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2260509;
            result[4] += 0;
            result[5] += 40689163;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42900000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b20000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 21474836;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2147483;
            result[3] += 38654705;
            result[4] += 0;
            result[5] += 2147483;
          }
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 7809031;
            result[4] += 0;
            result[5] += 35140641;
          } else {
            result[0] += 0;
            result[1] += 14316557;
            result[2] += 0;
            result[3] += 28633115;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 499414;
            result[2] += 22973080;
            result[3] += 17978932;
            result[4] += 0;
            result[5] += 1498244;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36507222;
            result[3] += 5368709;
            result[4] += 0;
            result[5] += 1073741;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 19522578;
            result[3] += 11713547;
            result[4] += 3904515;
            result[5] += 7809031;
          } else {
            result[0] += 266107;
            result[1] += 0;
            result[2] += 40554709;
            result[3] += 1969191;
            result[4] += 0;
            result[5] += 159664;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c00000))) ) ) {
            result[0] += 294175;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41184617;
            result[5] += 1470879;
          } else {
            result[0] += 0;
            result[1] += 40265318;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2684354;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 15823563;
            result[5] += 27126109;
          } else {
            result[0] += 36762008;
            result[1] += 0;
            result[2] += 1819901;
            result[3] += 0;
            result[4] += 1455921;
            result[5] += 2911842;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1501361;
            result[4] += 1662222;
            result[5] += 39786089;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 8180890;
            result[4] += 16361780;
            result[5] += 18407002;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42500000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1507006;
            result[1] += 1318630;
            result[2] += 2637260;
            result[3] += 14504933;
            result[4] += 2637260;
            result[5] += 20344581;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42520000))) ) ) {
            result[0] += 2202547;
            result[1] += 33038209;
            result[2] += 3303820;
            result[3] += 0;
            result[4] += 4405094;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 2911842;
            result[2] += 0;
            result[3] += 727960;
            result[4] += 39309870;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
            result[0] += 6979321;
            result[1] += 2684354;
            result[2] += 1073741;
            result[3] += 8053063;
            result[4] += 2684354;
            result[5] += 21474836;
          } else {
            result[0] += 38418101;
            result[1] += 681740;
            result[2] += 160409;
            result[3] += 962457;
            result[4] += 2486348;
            result[5] += 240614;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 596523;
            result[2] += 2584934;
            result[3] += 24258611;
            result[4] += 2187251;
            result[5] += 13322352;
          } else {
            result[0] += 20517359;
            result[1] += 4650601;
            result[2] += 11763286;
            result[3] += 1367823;
            result[4] += 3282777;
            result[5] += 1367823;
          }
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1385473;
            result[4] += 0;
            result[5] += 41564199;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 16291255;
            result[4] += 5924092;
            result[5] += 20734324;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2928386;
            result[3] += 30748061;
            result[4] += 0;
            result[5] += 9273224;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32212254;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9817068;
            result[3] += 11044201;
            result[4] += 1227133;
            result[5] += 20861269;
          } else {
            result[0] += 2386092;
            result[1] += 0;
            result[2] += 38177487;
            result[3] += 0;
            result[4] += 0;
            result[5] += 2386092;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 122016;
            result[1] += 0;
            result[2] += 33676448;
            result[3] += 7809031;
            result[4] += 0;
            result[5] += 1342177;
          } else {
            result[0] += 23622320;
            result[1] += 0;
            result[2] += 17179869;
            result[3] += 0;
            result[4] += 0;
            result[5] += 2147483;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 10737418;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 32212254;
          } else {
            result[0] += 70874;
            result[1] += 0;
            result[2] += 41248695;
            result[3] += 1559229;
            result[4] += 0;
            result[5] += 70874;
          }
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x424a0000))) ) ) {
            result[0] += 12271335;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 30678337;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42186123;
            result[5] += 763549;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x429e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42580000))) ) ) {
            result[0] += 42949672;
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
            result[4] += 33405301;
            result[5] += 9544371;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 463962;
            result[4] += 596523;
            result[5] += 41889187;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5099047;
            result[4] += 5099047;
            result[5] += 32751577;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
            result[0] += 22817013;
            result[1] += 14763950;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1342177;
            result[5] += 4026531;
          } else {
            result[0] += 0;
            result[1] += 499414;
            result[2] += 1997659;
            result[3] += 7990636;
            result[4] += 1997659;
            result[5] += 30464302;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 4487279;
            result[1] += 0;
            result[2] += 6410398;
            result[3] += 10897678;
            result[4] += 5769359;
            result[5] += 15384957;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1547735;
            result[3] += 36758729;
            result[4] += 0;
            result[5] += 4643207;
          }
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b60000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 2431113;
            result[2] += 0;
            result[3] += 2431113;
            result[4] += 37277074;
            result[5] += 810371;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 17179869;
            result[2] += 0;
            result[3] += 8589934;
            result[4] += 17179869;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42425896;
            result[2] += 0;
            result[3] += 104755;
            result[4] += 419021;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42820000))) ) ) {
            result[0] += 25218156;
            result[1] += 2758235;
            result[2] += 0;
            result[3] += 0;
            result[4] += 13791179;
            result[5] += 1182101;
          } else {
            result[0] += 416987;
            result[1] += 2084935;
            result[2] += 1042467;
            result[3] += 14803042;
            result[4] += 625480;
            result[5] += 23976759;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 842150;
            result[1] += 21895911;
            result[2] += 0;
            result[3] += 1684300;
            result[4] += 17685159;
            result[5] += 842150;
          } else {
            result[0] += 35698880;
            result[1] += 416313;
            result[2] += 1734639;
            result[3] += 1665253;
            result[4] += 2567266;
            result[5] += 867319;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 5856773;
            result[1] += 5856773;
            result[2] += 0;
            result[3] += 7809031;
            result[4] += 7809031;
            result[5] += 15618062;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8947848;
            result[3] += 28633115;
            result[4] += 1342177;
            result[5] += 4026531;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 2741468;
            result[1] += 0;
            result[2] += 26500862;
            result[3] += 7310582;
            result[4] += 0;
            result[5] += 6396759;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 1193046;
            result[1] += 1193046;
            result[2] += 28633115;
            result[3] += 5965232;
            result[4] += 0;
            result[5] += 5965232;
          } else {
            result[0] += 30678337;
            result[1] += 0;
            result[2] += 10226112;
            result[3] += 0;
            result[4] += 2045222;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12271335;
            result[3] += 30678337;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 581004;
            result[1] += 0;
            result[2] += 39150794;
            result[3] += 3039102;
            result[4] += 44692;
            result[5] += 134078;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x423e0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 178956;
            result[2] += 0;
            result[3] += 178956;
            result[4] += 40981146;
            result[5] += 1610612;
          } else {
            result[0] += 0;
            result[1] += 33038209;
            result[2] += 0;
            result[3] += 0;
            result[4] += 9911462;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 34164512;
            result[5] += 8785160;
          } else {
            result[0] += 58514;
            result[1] += 234058;
            result[2] += 58514;
            result[3] += 2282067;
            result[4] += 1053261;
            result[5] += 39263256;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42980000))) ) ) {
            result[0] += 13267176;
            result[1] += 0;
            result[2] += 0;
            result[3] += 674602;
            result[4] += 15066115;
            result[5] += 13941778;
          } else {
            result[0] += 1582911;
            result[1] += 0;
            result[2] += 2638186;
            result[3] += 21211017;
            result[4] += 211054;
            result[5] += 17306502;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42738618;
            result[2] += 0;
            result[3] += 0;
            result[4] += 211054;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42480000))) ) ) {
            result[0] += 0;
            result[1] += 39045157;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3904515;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 6756128;
            result[2] += 0;
            result[3] += 0;
            result[4] += 36193544;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42890000))) ) ) {
            result[0] += 13161996;
            result[1] += 12469259;
            result[2] += 0;
            result[3] += 692736;
            result[4] += 11776523;
            result[5] += 4849156;
          } else {
            result[0] += 39048703;
            result[1] += 624155;
            result[2] += 234058;
            result[3] += 741184;
            result[4] += 1911474;
            result[5] += 390096;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 1312872;
            result[1] += 375106;
            result[2] += 1875531;
            result[3] += 16504677;
            result[4] += 5626594;
            result[5] += 17254890;
          } else {
            result[0] += 15158708;
            result[1] += 0;
            result[2] += 21615194;
            result[3] += 3649318;
            result[4] += 842150;
            result[5] += 1684300;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d40000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1385473;
            result[3] += 27709466;
            result[4] += 0;
            result[5] += 13854733;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5052902;
            result[4] += 2526451;
            result[5] += 35370318;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7809031;
            result[3] += 31236125;
            result[4] += 0;
            result[5] += 3904515;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 11453246;
            result[3] += 2863311;
            result[4] += 0;
            result[5] += 28633115;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35370318;
            result[3] += 5895053;
            result[4] += 0;
            result[5] += 1684300;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 23427094;
            result[3] += 17179869;
            result[4] += 0;
            result[5] += 2342709;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40178726;
            result[3] += 2770946;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
            result[0] += 1431655;
            result[1] += 7158278;
            result[2] += 34359738;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 31101487;
            result[3] += 11848185;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 325376;
            result[1] += 0;
            result[2] += 41105873;
            result[3] += 1409964;
            result[4] += 0;
            result[5] += 108458;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 876523;
            result[1] += 0;
            result[2] += 0;
            result[3] += 876523;
            result[4] += 32431385;
            result[5] += 8765239;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 4772185;
            result[2] += 0;
            result[3] += 28633115;
            result[4] += 9544371;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10737418;
            result[5] += 32212254;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 22497447;
            result[5] += 20452225;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 60749;
            result[3] += 1214983;
            result[4] += 364495;
            result[5] += 41309444;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42620000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
            result[0] += 17895697;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 25053975;
            result[5] += 0;
          } else {
            result[0] += 42399036;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 550636;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 746950;
            result[1] += 622459;
            result[2] += 746950;
            result[3] += 8340950;
            result[4] += 4855180;
            result[5] += 27637180;
          } else {
            result[0] += 218018;
            result[1] += 218018;
            result[2] += 654055;
            result[3] += 29214498;
            result[4] += 654055;
            result[5] += 11991025;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 34359738;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8589934;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 8589934;
            result[1] += 34359738;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42500000))) ) ) {
            result[0] += 0;
            result[1] += 31456098;
            result[2] += 0;
            result[3] += 1814774;
            result[4] += 7259099;
            result[5] += 2419699;
          } else {
            result[0] += 3168418;
            result[1] += 3520464;
            result[2] += 0;
            result[3] += 2112278;
            result[4] += 33444417;
            result[5] += 704092;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 37847916;
            result[1] += 276839;
            result[2] += 197742;
            result[3] += 1107358;
            result[4] += 2333361;
            result[5] += 1186455;
          } else {
            result[0] += 14987646;
            result[1] += 447392;
            result[2] += 4250228;
            result[3] += 8947848;
            result[4] += 4697620;
            result[5] += 9618937;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5602131;
            result[3] += 11204262;
            result[4] += 0;
            result[5] += 26143279;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8589934;
            result[3] += 28155896;
            result[4] += 0;
            result[5] += 6203841;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 23565307;
            result[3] += 15203424;
            result[4] += 380085;
            result[5] += 3800856;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41415756;
            result[3] += 1533916;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 1464193;
            result[1] += 0;
            result[2] += 31236125;
            result[3] += 5856773;
            result[4] += 488064;
            result[5] += 3904515;
          } else {
            result[0] += 34359738;
            result[1] += 0;
            result[2] += 2147483;
            result[3] += 6442450;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 149650;
            result[1] += 0;
            result[2] += 36514704;
            result[3] += 5686716;
            result[4] += 0;
            result[5] += 598601;
          } else {
            result[0] += 452101;
            result[1] += 0;
            result[2] += 41668717;
            result[3] += 753503;
            result[4] += 0;
            result[5] += 75350;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42740000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 191739;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41799235;
            result[5] += 958698;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 40518559;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2431113;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 28139440;
            result[5] += 14810232;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 54297;
            result[3] += 1031660;
            result[4] += 923065;
            result[5] += 40940649;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4250228;
            result[4] += 6710886;
            result[5] += 31988558;
          } else {
            result[0] += 0;
            result[1] += 303531;
            result[2] += 151765;
            result[3] += 23675438;
            result[4] += 2428250;
            result[5] += 16390687;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d70000))) ) ) {
            result[0] += 33163259;
            result[1] += 1495597;
            result[2] += 487694;
            result[3] += 1268006;
            result[4] += 5299618;
            result[5] += 1235493;
          } else {
            result[0] += 0;
            result[1] += 42035850;
            result[2] += 0;
            result[3] += 0;
            result[4] += 913822;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 174592;
            result[1] += 0;
            result[2] += 9777161;
            result[3] += 19205138;
            result[4] += 3491843;
            result[5] += 10300937;
          } else {
            result[0] += 14718708;
            result[1] += 3378064;
            result[2] += 17372901;
            result[3] += 241290;
            result[4] += 2895483;
            result[5] += 4343225;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d30000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 5368709;
            result[2] += 2684354;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 13421772;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8589934;
            result[3] += 0;
            result[4] += 0;
            result[5] += 34359738;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6135667;
            result[3] += 32041819;
            result[4] += 1363481;
            result[5] += 3408704;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 24750658;
            result[3] += 17471053;
            result[4] += 0;
            result[5] += 727960;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35656332;
            result[3] += 5672598;
            result[4] += 0;
            result[5] += 1620742;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 42949672;
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 32212254;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 10737418;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30317416;
            result[3] += 8842579;
            result[4] += 0;
            result[5] += 3789677;
          } else {
            result[0] += 256799;
            result[1] += 0;
            result[2] += 41087878;
            result[3] += 1476595;
            result[4] += 0;
            result[5] += 128399;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 202592;
            result[1] += 810371;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41734116;
            result[5] += 202592;
          } else {
            result[0] += 32843867;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7579354;
            result[5] += 2526451;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 1176703;
            result[1] += 588351;
            result[2] += 0;
            result[3] += 588351;
            result[4] += 12943737;
            result[5] += 27652529;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 64683;
            result[3] += 517465;
            result[4] += 517465;
            result[5] += 41850057;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 3681400;
            result[2] += 0;
            result[3] += 7362801;
            result[4] += 4448358;
            result[5] += 27457112;
          } else {
            result[0] += 257183;
            result[1] += 514367;
            result[2] += 2571836;
            result[3] += 25975550;
            result[4] += 1543102;
            result[5] += 12087632;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 2660599;
            result[1] += 7981797;
            result[2] += 0;
            result[3] += 1900428;
            result[4] += 26605992;
            result[5] += 3800856;
          } else {
            result[0] += 10203513;
            result[1] += 118645;
            result[2] += 474582;
            result[3] += 8186539;
            result[4] += 5694984;
            result[5] += 18271407;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42890000))) ) ) {
            result[0] += 2330602;
            result[1] += 15648330;
            result[2] += 665886;
            result[3] += 2330602;
            result[4] += 21308364;
            result[5] += 665886;
          } else {
            result[0] += 34959036;
            result[1] += 713449;
            result[2] += 1605261;
            result[3] += 1890641;
            result[4] += 2604091;
            result[5] += 1177192;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 25769803;
            result[4] += 0;
            result[5] += 17179869;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 4772185;
            result[4] += 0;
            result[5] += 23860929;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9544371;
            result[3] += 32808777;
            result[4] += 0;
            result[5] += 596523;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 1431655;
            result[4] += 0;
            result[5] += 20043180;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7669584;
            result[3] += 32212254;
            result[4] += 0;
            result[5] += 3067833;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ee0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36645133;
            result[3] += 5516471;
            result[4] += 0;
            result[5] += 788067;
          } else {
            result[0] += 23622320;
            result[1] += 0;
            result[2] += 12884901;
            result[3] += 0;
            result[4] += 6442450;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 11453246;
            result[3] += 28633115;
            result[4] += 0;
            result[5] += 2863311;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36168145;
            result[3] += 2260509;
            result[4] += 0;
            result[5] += 4521018;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42154308;
            result[3] += 0;
            result[4] += 0;
            result[5] += 795364;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 25053975;
            result[3] += 17895697;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42cf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 4772185;
            result[4] += 0;
            result[5] += 23860929;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428e0000))) ) ) {
            result[0] += 28633115;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 56216;
            result[1] += 0;
            result[2] += 41094516;
            result[3] += 1574071;
            result[4] += 0;
            result[5] += 224867;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42581006;
            result[5] += 368666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x426a0000))) ) ) {
            result[0] += 36047046;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 6902626;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 7381975;
            result[2] += 671088;
            result[3] += 0;
            result[4] += 12079595;
            result[5] += 22817013;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 783276;
            result[4] += 1109642;
            result[5] += 41056754;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2147483;
            result[3] += 10737418;
            result[4] += 8589934;
            result[5] += 21474836;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 954437;
            result[2] += 159072;
            result[3] += 7317351;
            result[4] += 4931258;
            result[5] += 29587552;
          } else {
            result[0] += 891072;
            result[1] += 1247500;
            result[2] += 2851430;
            result[3] += 19425370;
            result[4] += 1960358;
            result[5] += 16573940;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42360000))) ) ) {
            result[0] += 0;
            result[1] += 41160103;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1789569;
            result[5] += 0;
          } else {
            result[0] += 1342177;
            result[1] += 1342177;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40265318;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
            result[0] += 15142512;
            result[1] += 2477865;
            result[2] += 550636;
            result[3] += 8259552;
            result[4] += 9085507;
            result[5] += 7433597;
          } else {
            result[0] += 39012619;
            result[1] += 795364;
            result[2] += 39768;
            result[3] += 556755;
            result[4] += 2465629;
            result[5] += 79536;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 920350;
            result[1] += 1533916;
            result[2] += 6442450;
            result[3] += 17486652;
            result[4] += 306783;
            result[5] += 16259519;
          } else {
            result[0] += 20344581;
            result[1] += 0;
            result[2] += 15823563;
            result[3] += 4144266;
            result[4] += 2260509;
            result[5] += 376751;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2629571;
            result[3] += 876523;
            result[4] += 3506095;
            result[5] += 35937481;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 24542670;
            result[4] += 0;
            result[5] += 18407002;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2684354;
            result[4] += 0;
            result[5] += 40265318;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4090445;
            result[3] += 28121809;
            result[4] += 0;
            result[5] += 10737418;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 2202547;
            result[2] += 11012736;
            result[3] += 26430567;
            result[4] += 0;
            result[5] += 3303820;
          } else {
            result[0] += 1176703;
            result[1] += 0;
            result[2] += 31182639;
            result[3] += 5883516;
            result[4] += 2941758;
            result[5] += 1765055;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 246837;
            result[1] += 0;
            result[2] += 30854650;
            result[3] += 10613999;
            result[4] += 0;
            result[5] += 1234186;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 23427094;
            result[3] += 19522578;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41378343;
            result[3] += 1571329;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 0;
            result[4] += 0;
            result[5] += 21474836;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39498359;
            result[3] += 3451313;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40802189;
            result[3] += 2147483;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 870601;
            result[1] += 580400;
            result[2] += 290200;
            result[3] += 290200;
            result[4] += 38306465;
            result[5] += 2611804;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 3435973;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 18897856;
            result[5] += 20615843;
          } else {
            result[0] += 40984655;
            result[1] += 0;
            result[2] += 280716;
            result[3] += 0;
            result[4] += 1684300;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47563;
            result[3] += 2187912;
            result[4] += 2330602;
            result[5] += 38383594;
          } else {
            result[0] += 431655;
            result[1] += 4964032;
            result[2] += 431655;
            result[3] += 8417272;
            result[4] += 11654685;
            result[5] += 17050372;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 897902;
            result[3] += 29930085;
            result[4] += 0;
            result[5] += 12121684;
          } else {
            result[0] += 2726963;
            result[1] += 0;
            result[2] += 14998298;
            result[3] += 10907853;
            result[4] += 681740;
            result[5] += 13634816;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 287609;
            result[1] += 42566193;
            result[2] += 0;
            result[3] += 0;
            result[4] += 95869;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d40000))) ) ) {
            result[0] += 6344838;
            result[1] += 3904515;
            result[2] += 1464193;
            result[3] += 488064;
            result[4] += 28795803;
            result[5] += 1952257;
          } else {
            result[0] += 1385473;
            result[1] += 34636833;
            result[2] += 0;
            result[3] += 2770946;
            result[4] += 4156419;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
            result[0] += 3827198;
            result[1] += 14033061;
            result[2] += 5102931;
            result[3] += 2976710;
            result[4] += 1275732;
            result[5] += 15734038;
          } else {
            result[0] += 39448100;
            result[1] += 310265;
            result[2] += 842150;
            result[3] += 265942;
            result[4] += 1905919;
            result[5] += 177294;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 1501736;
            result[1] += 1802084;
            result[2] += 15918410;
            result[3] += 14116326;
            result[4] += 1501736;
            result[5] += 8109378;
          } else {
            result[0] += 29734388;
            result[1] += 0;
            result[2] += 3303820;
            result[3] += 0;
            result[4] += 8589934;
            result[5] += 1321528;
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3904515;
            result[3] += 32212254;
            result[4] += 0;
            result[5] += 6832902;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12271335;
            result[3] += 9203501;
            result[4] += 0;
            result[5] += 21474836;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42960000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 16980103;
            result[3] += 20975421;
            result[4] += 0;
            result[5] += 4994148;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42dc0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38087445;
            result[3] += 4862227;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 32212254;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 32212254;
            result[5] += 10737418;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38445195;
            result[3] += 3771190;
            result[4] += 0;
            result[5] += 733287;
          } else {
            result[0] += 402338;
            result[1] += 0;
            result[2] += 42245579;
            result[3] += 301754;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ca0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 392234;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42557438;
            result[5] += 0;
          } else {
            result[0] += 4772185;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 28633115;
            result[5] += 9544371;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
            result[0] += 7809031;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 28633115;
            result[5] += 6507526;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1428129;
            result[4] += 1322342;
            result[5] += 40199201;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 4013988;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4816785;
            result[4] += 3211190;
            result[5] += 30907708;
          } else {
            result[0] += 852176;
            result[1] += 3579139;
            result[2] += 2556528;
            result[3] += 21474836;
            result[4] += 2215657;
            result[5] += 12271335;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42180000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 28633115;
            result[2] += 0;
            result[3] += 954437;
            result[4] += 13362120;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42848376;
            result[2] += 0;
            result[3] += 0;
            result[4] += 101296;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 24193668;
            result[1] += 1497328;
            result[2] += 0;
            result[3] += 3073462;
            result[4] += 9772035;
            result[5] += 4413177;
          } else {
            result[0] += 40268737;
            result[1] += 0;
            result[2] += 273564;
            result[3] += 437703;
            result[4] += 1586675;
            result[5] += 382990;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 1426899;
            result[1] += 570759;
            result[2] += 4280698;
            result[3] += 22687700;
            result[4] += 2996488;
            result[5] += 10987125;
          } else {
            result[0] += 14164253;
            result[1] += 0;
            result[2] += 22160203;
            result[3] += 3426835;
            result[4] += 1827645;
            result[5] += 1370734;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2526451;
            result[3] += 7579354;
            result[4] += 1263225;
            result[5] += 31580641;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 31236125;
            result[4] += 7809031;
            result[5] += 3904515;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42960000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 1282079;
            result[1] += 2564159;
            result[2] += 29487835;
            result[3] += 5769359;
            result[4] += 0;
            result[5] += 3846239;
          } else {
            result[0] += 31019208;
            result[1] += 0;
            result[2] += 11930464;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42be0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
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
          result[5] += 42949672;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42dc0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33150475;
            result[3] += 8756729;
            result[4] += 0;
            result[5] += 1042467;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7158278;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 66076;
            result[1] += 0;
            result[2] += 41165609;
            result[3] += 1585834;
            result[4] += 0;
            result[5] += 132152;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42217576;
            result[5] += 732096;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 19190279;
            result[5] += 23759393;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 7158278;
            result[2] += 0;
            result[3] += 4772185;
            result[4] += 27042386;
            result[5] += 3976821;
          } else {
            result[0] += 39768215;
            result[1] += 0;
            result[2] += 0;
            result[3] += 795364;
            result[4] += 2386092;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42680000))) ) ) {
            result[0] += 6285317;
            result[1] += 1047552;
            result[2] += 0;
            result[3] += 0;
            result[4] += 25141271;
            result[5] += 10475529;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 49538;
            result[3] += 2377836;
            result[4] += 1832915;
            result[5] += 38689382;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
            result[0] += 370255;
            result[1] += 0;
            result[2] += 0;
            result[3] += 13329208;
            result[4] += 740511;
            result[5] += 28509696;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 24235886;
            result[4] += 0;
            result[5] += 18713786;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 867670;
            result[1] += 3036845;
            result[2] += 0;
            result[3] += 867670;
            result[4] += 35574476;
            result[5] += 2603010;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425a0000))) ) ) {
            result[0] += 0;
            result[1] += 42616729;
            result[2] += 0;
            result[3] += 0;
            result[4] += 332943;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 28633115;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14316557;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
            result[0] += 5602131;
            result[1] += 23030984;
            result[2] += 0;
            result[3] += 2489836;
            result[4] += 11826721;
            result[5] += 0;
          } else {
            result[0] += 38352027;
            result[1] += 383137;
            result[2] += 38313;
            result[3] += 842901;
            result[4] += 2911842;
            result[5] += 421450;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 1549730;
            result[1] += 2213900;
            result[2] += 4206411;
            result[3] += 15497304;
            result[4] += 3542241;
            result[5] += 15940084;
          } else {
            result[0] += 34050191;
            result[1] += 773867;
            result[2] += 3869339;
            result[3] += 386933;
            result[4] += 3869339;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 10307921;
            result[4] += 0;
            result[5] += 32641751;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5368709;
            result[4] += 0;
            result[5] += 37580963;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4873721;
            result[3] += 32288406;
            result[4] += 0;
            result[5] += 5787544;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42cf0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14763950;
            result[3] += 20132659;
            result[4] += 2013265;
            result[5] += 6039797;
          } else {
            result[0] += 1431655;
            result[1] += 0;
            result[2] += 30064771;
            result[3] += 5726623;
            result[4] += 0;
            result[5] += 5726623;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ed0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40904450;
            result[3] += 2045222;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 28633115;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1034931;
            result[1] += 0;
            result[2] += 22251035;
            result[3] += 13971580;
            result[4] += 0;
            result[5] += 5692125;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35979769;
            result[3] += 6781527;
            result[4] += 0;
            result[5] += 188375;
          } else {
            result[0] += 12079595;
            result[1] += 0;
            result[2] += 30870077;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35639090;
            result[3] += 4569114;
            result[4] += 0;
            result[5] += 2741468;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 15618062;
            result[3] += 27331610;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 281637;
            result[1] += 70409;
            result[2] += 41541486;
            result[3] += 985730;
            result[4] += 0;
            result[5] += 70409;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42140000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 186737;
            result[4] += 42389459;
            result[5] += 373475;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
            result[0] += 3904515;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 37743651;
            result[5] += 1301505;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1952257;
            result[4] += 11713547;
            result[5] += 29283867;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42620000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
            result[0] += 6135667;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 30678337;
            result[5] += 6135667;
          } else {
            result[0] += 42412802;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 536870;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 62336;
            result[1] += 0;
            result[2] += 0;
            result[3] += 872707;
            result[4] += 1620742;
            result[5] += 40393886;
          } else {
            result[0] += 615765;
            result[1] += 2617005;
            result[2] += 461824;
            result[3] += 10468020;
            result[4] += 2001239;
            result[5] += 26785817;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42740000))) ) ) {
            result[0] += 0;
            result[1] += 3303820;
            result[2] += 0;
            result[3] += 0;
            result[4] += 39645851;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 0;
            result[1] += 21474836;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42563608;
            result[2] += 0;
            result[3] += 0;
            result[4] += 386064;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42820000))) ) ) {
            result[0] += 31755765;
            result[1] += 1825956;
            result[2] += 0;
            result[3] += 238168;
            result[4] += 8653446;
            result[5] += 476336;
          } else {
            result[0] += 3190102;
            result[1] += 1633954;
            result[2] += 2022991;
            result[3] += 17428852;
            result[4] += 4357213;
            result[5] += 14316557;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 9698313;
            result[1] += 0;
            result[2] += 23553046;
            result[3] += 8312839;
            result[4] += 0;
            result[5] += 1385473;
          } else {
            result[0] += 42104761;
            result[1] += 0;
            result[2] += 563274;
            result[3] += 0;
            result[4] += 281637;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 727960;
            result[3] += 34214146;
            result[4] += 0;
            result[5] += 8007566;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7579354;
            result[3] += 15158708;
            result[4] += 0;
            result[5] += 20211610;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38654705;
            result[3] += 4294967;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7158278;
            result[3] += 28633115;
            result[4] += 0;
            result[5] += 7158278;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32994450;
            result[3] += 7964177;
            result[4] += 0;
            result[5] += 1991044;
          }
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 2684354;
            result[1] += 0;
            result[2] += 16106127;
            result[3] += 13421772;
            result[4] += 0;
            result[5] += 10737418;
          } else {
            result[0] += 1342177;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 4473924;
            result[4] += 0;
            result[5] += 1342177;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38233630;
            result[3] += 4547612;
            result[4] += 0;
            result[5] += 168430;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 198841;
            result[1] += 0;
            result[2] += 40563580;
            result[3] += 1988410;
            result[4] += 0;
            result[5] += 198841;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42608802;
            result[3] += 340870;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c20000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42820000))) ) ) {
            result[0] += 172488;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41914741;
            result[5] += 862443;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 19088743;
            result[5] += 23860929;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42460000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 33864165;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7433597;
            result[5] += 1651910;
          } else {
            result[0] += 0;
            result[1] += 410608;
            result[2] += 410608;
            result[3] += 2422591;
            result[4] += 1601374;
            result[5] += 38104489;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3435973;
            result[4] += 9735259;
            result[5] += 29778439;
          } else {
            result[0] += 466844;
            result[1] += 466844;
            result[2] += 4668442;
            result[3] += 26143279;
            result[4] += 0;
            result[5] += 11204262;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424a0000))) ) ) {
            result[0] += 692736;
            result[1] += 38793252;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3463683;
            result[5] += 0;
          } else {
            result[0] += 9467401;
            result[1] += 1385473;
            result[2] += 0;
            result[3] += 0;
            result[4] += 30942237;
            result[5] += 1154561;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42950000))) ) ) {
            result[0] += 37499619;
            result[1] += 81344;
            result[2] += 406720;
            result[3] += 1260833;
            result[4] += 2277634;
            result[5] += 1423521;
          } else {
            result[0] += 16590002;
            result[1] += 737333;
            result[2] += 6820334;
            result[3] += 10507001;
            result[4] += 3133667;
            result[5] += 5161334;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 21474836;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 18407002;
            result[1] += 6135667;
            result[2] += 18407002;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 3579139;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35791394;
            result[5] += 3579139;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4294967;
            result[3] += 4294967;
            result[4] += 0;
            result[5] += 34359738;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5368709;
            result[3] += 30799436;
            result[4] += 282563;
            result[5] += 6498963;
          } else {
            result[0] += 0;
            result[1] += 3579139;
            result[2] += 28633115;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 2684354;
            result[1] += 2684354;
            result[2] += 5368709;
            result[3] += 1342177;
            result[4] += 8053063;
            result[5] += 22817013;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 5726623;
            result[1] += 0;
            result[2] += 17179869;
            result[3] += 20043180;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37896770;
            result[3] += 4210752;
            result[4] += 842150;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 8589934;
            result[1] += 0;
            result[2] += 8589934;
            result[3] += 8589934;
            result[4] += 17179869;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42960000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 488064;
            result[1] += 0;
            result[2] += 34489888;
            result[3] += 7320966;
            result[4] += 0;
            result[5] += 650752;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32212254;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38412735;
            result[3] += 4536937;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 85217;
            result[1] += 0;
            result[2] += 42267932;
            result[3] += 596523;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42240000))) ) ) {
            result[0] += 0;
            result[1] += 36342030;
            result[2] += 0;
            result[3] += 0;
            result[4] += 6607641;
            result[5] += 0;
          } else {
            result[0] += 326613;
            result[1] += 326613;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41479912;
            result[5] += 816533;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10226112;
            result[5] += 32723560;
          } else {
            result[0] += 2300875;
            result[1] += 1533916;
            result[2] += 0;
            result[3] += 4601750;
            result[4] += 29144420;
            result[5] += 5368709;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42700000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40086361;
            result[5] += 2863311;
          } else {
            result[0] += 42245579;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 704092;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 55134;
            result[3] += 1984837;
            result[4] += 1819434;
            result[5] += 39090267;
          } else {
            result[0] += 1209849;
            result[1] += 806566;
            result[2] += 1209849;
            result[3] += 11291932;
            result[4] += 7057457;
            result[5] += 21374015;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42680000))) ) ) {
            result[0] += 34852603;
            result[1] += 1760232;
            result[2] += 1056139;
            result[3] += 704092;
            result[4] += 3520464;
            result[5] += 1056139;
          } else {
            result[0] += 1331084;
            result[1] += 443694;
            result[2] += 2040996;
            result[3] += 18901405;
            result[4] += 1774779;
            result[5] += 18457710;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 1374389;
            result[1] += 26113401;
            result[2] += 0;
            result[3] += 343597;
            result[4] += 14431090;
            result[5] += 687194;
          } else {
            result[0] += 35871271;
            result[1] += 774200;
            result[2] += 2064533;
            result[3] += 1659000;
            result[4] += 1659000;
            result[5] += 921666;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 29734388;
            result[2] += 0;
            result[3] += 13215283;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 14316557;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d60000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6911441;
            result[3] += 31595161;
            result[4] += 0;
            result[5] += 4443069;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 18407002;
            result[3] += 8180890;
            result[4] += 0;
            result[5] += 16361780;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 7158278;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c40000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38738920;
            result[3] += 1684300;
            result[4] += 0;
            result[5] += 2526451;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42870000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 15032385;
            result[4] += 0;
            result[5] += 1073741;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37675151;
            result[3] += 4332642;
            result[4] += 0;
            result[5] += 941878;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38572636;
            result[3] += 4377036;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 175304;
            result[1] += 0;
            result[2] += 42599063;
            result[3] += 87652;
            result[4] += 0;
            result[5] += 87652;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42da0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
            result[0] += 394033;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42161605;
            result[5] += 394033;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 36342030;
            result[5] += 6607641;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x424a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 66178;
            result[1] += 0;
            result[2] += 0;
            result[3] += 661782;
            result[4] += 992673;
            result[5] += 41229038;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
            result[0] += 28934516;
            result[1] += 2712610;
            result[2] += 0;
            result[3] += 3164712;
            result[4] += 2712610;
            result[5] += 5425221;
          } else {
            result[0] += 207152;
            result[1] += 552407;
            result[2] += 414305;
            result[3] += 14293540;
            result[4] += 4557360;
            result[5] += 22924905;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42580000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 19088743;
            result[2] += 0;
            result[3] += 0;
            result[4] += 23860929;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42839545;
            result[2] += 0;
            result[3] += 0;
            result[4] += 110127;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42480000))) ) ) {
            result[0] += 0;
            result[1] += 39214918;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3734754;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 2816371;
            result[2] += 0;
            result[3] += 0;
            result[4] += 38725114;
            result[5] += 1408185;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42850000))) ) ) {
            result[0] += 6135667;
            result[1] += 16873085;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17384391;
            result[5] += 2556528;
          } else {
            result[0] += 38658342;
            result[1] += 181836;
            result[2] += 545508;
            result[3] += 1018281;
            result[4] += 1745625;
            result[5] += 800078;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 1248537;
            result[1] += 499414;
            result[2] += 12235662;
            result[3] += 16730395;
            result[4] += 2996488;
            result[5] += 9239173;
          } else {
            result[0] += 22605091;
            result[1] += 2712610;
            result[2] += 10850443;
            result[3] += 1808407;
            result[4] += 3616814;
            result[5] += 1356305;
          }
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4713988;
            result[3] += 13094412;
            result[4] += 1571329;
            result[5] += 23569942;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6927366;
            result[3] += 29094939;
            result[4] += 0;
            result[5] += 6927366;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 8589934;
            result[1] += 0;
            result[2] += 17179869;
            result[3] += 0;
            result[4] += 17179869;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 0;
            result[4] += 0;
            result[5] += 21474836;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 15123124;
            result[3] += 22987148;
            result[4] += 0;
            result[5] += 4839399;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33038209;
            result[3] += 9911462;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 5726623;
            result[1] += 0;
            result[2] += 17179869;
            result[3] += 0;
            result[4] += 5726623;
            result[5] += 14316557;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38069028;
            result[3] += 4880644;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 23622320;
            result[3] += 19327352;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35288379;
            result[3] += 6500491;
            result[4] += 0;
            result[5] += 1160801;
          } else {
            result[0] += 250070;
            result[1] += 0;
            result[2] += 41449247;
            result[3] += 1000283;
            result[4] += 0;
            result[5] += 250070;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 891072;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41167528;
            result[5] += 891072;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1160801;
            result[4] += 8125613;
            result[5] += 33663257;
          } else {
            result[0] += 28163719;
            result[1] += 704092;
            result[2] += 0;
            result[3] += 5632743;
            result[4] += 7745022;
            result[5] += 704092;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1193046;
            result[4] += 28633115;
            result[5] += 13123511;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1711762;
            result[4] += 881816;
            result[5] += 40356093;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 461824;
            result[2] += 0;
            result[3] += 4156419;
            result[4] += 3232771;
            result[5] += 35098657;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 216917;
            result[3] += 24945517;
            result[4] += 0;
            result[5] += 17787238;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42580000))) ) ) {
            result[0] += 13699464;
            result[1] += 23326115;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5924092;
            result[5] += 0;
          } else {
            result[0] += 2107959;
            result[1] += 2371454;
            result[2] += 0;
            result[3] += 790484;
            result[4] += 36625794;
            result[5] += 1053979;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
            result[0] += 37267327;
            result[1] += 295186;
            result[2] += 516576;
            result[3] += 1365238;
            result[4] += 1623527;
            result[5] += 1881815;
          } else {
            result[0] += 5462427;
            result[1] += 535532;
            result[2] += 13174089;
            result[3] += 11995918;
            result[4] += 2142128;
            result[5] += 9639577;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 0;
            result[1] += 24542670;
            result[2] += 9203501;
            result[3] += 9203501;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 26843545;
            result[1] += 5368709;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10737418;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42740000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 42949672;
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
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a30000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 0;
            result[4] += 28633115;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4156419;
            result[3] += 0;
            result[4] += 0;
            result[5] += 38793252;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5237764;
            result[3] += 32474142;
            result[4] += 1047552;
            result[5] += 4190211;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37580963;
            result[3] += 0;
            result[4] += 0;
            result[5] += 5368709;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5368709;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 10737418;
          } else {
            result[0] += 572662;
            result[1] += 572662;
            result[2] += 33214413;
            result[3] += 6299285;
            result[4] += 0;
            result[5] += 2290649;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 0;
            result[4] += 0;
            result[5] += 21474836;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 5368709;
            result[2] += 5368709;
            result[3] += 8053063;
            result[4] += 0;
            result[5] += 24159191;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6135667;
            result[3] += 36814005;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 30678337;
            result[1] += 0;
            result[2] += 12271335;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 526989;
            result[1] += 0;
            result[2] += 36757542;
            result[3] += 4874656;
            result[4] += 131747;
            result[5] += 658737;
          } else {
            result[0] += 256161;
            result[1] += 0;
            result[2] += 41754254;
            result[3] += 853870;
            result[4] += 0;
            result[5] += 85387;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 227246;
            result[1] += 454493;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41813438;
            result[5] += 454493;
          } else {
            result[0] += 0;
            result[1] += 33038209;
            result[2] += 0;
            result[3] += 0;
            result[4] += 9911462;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x429b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 21474836;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 1047552;
            result[2] += 0;
            result[3] += 1047552;
            result[4] += 28283930;
            result[5] += 12570635;
          } else {
            result[0] += 242928;
            result[1] += 0;
            result[2] += 145756;
            result[3] += 1797667;
            result[4] += 1700496;
            result[5] += 39062824;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 559604;
            result[1] += 2937925;
            result[2] += 0;
            result[3] += 18327059;
            result[4] += 1119209;
            result[5] += 20005873;
          } else {
            result[0] += 1753047;
            result[1] += 0;
            result[2] += 28048766;
            result[3] += 4382619;
            result[4] += 1753047;
            result[5] += 7012191;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 4294967;
            result[1] += 4294967;
            result[2] += 954437;
            result[3] += 1431655;
            result[4] += 29826161;
            result[5] += 2147483;
          } else {
            result[0] += 876523;
            result[1] += 37690529;
            result[2] += 876523;
            result[3] += 3506095;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
            result[0] += 35606317;
            result[1] += 680603;
            result[2] += 752246;
            result[3] += 1576134;
            result[4] += 2865699;
            result[5] += 1468671;
          } else {
            result[0] += 10626723;
            result[1] += 221390;
            result[2] += 5091971;
            result[3] += 12840623;
            result[4] += 5313361;
            result[5] += 8855602;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d50000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 36814005;
            result[4] += 0;
            result[5] += 6135667;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2526451;
            result[4] += 3789677;
            result[5] += 36633544;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 0;
            result[1] += 9203501;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3067833;
            result[5] += 30678337;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 23860929;
            result[4] += 0;
            result[5] += 19088743;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1507006;
            result[3] += 40689163;
            result[4] += 0;
            result[5] += 753503;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9138228;
            result[3] += 25587039;
            result[4] += 0;
            result[5] += 8224405;
          } else {
            result[0] += 2260509;
            result[1] += 0;
            result[2] += 26803179;
            result[3] += 11625475;
            result[4] += 0;
            result[5] += 2260509;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 9544371;
            result[4] += 0;
            result[5] += 33405301;
          } else {
            result[0] += 3579139;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 0;
            result[4] += 10737418;
            result[5] += 14316557;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32526739;
            result[3] += 9344698;
            result[4] += 0;
            result[5] += 1078234;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 3303820;
            result[1] += 0;
            result[2] += 29734388;
            result[3] += 0;
            result[4] += 0;
            result[5] += 9911462;
          } else {
            result[0] += 138101;
            result[1] += 0;
            result[2] += 41706756;
            result[3] += 1104814;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x423e0000))) ) ) {
            result[0] += 28633115;
            result[1] += 14316557;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 850488;
            result[1] += 283496;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41106947;
            result[5] += 708740;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42620000))) ) ) {
            result[0] += 40231339;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2718333;
            result[5] += 0;
          } else {
            result[0] += 2454267;
            result[1] += 10430634;
            result[2] += 0;
            result[3] += 0;
            result[4] += 13498468;
            result[5] += 16566302;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1387194;
            result[4] += 2240852;
            result[5] += 39321626;
          } else {
            result[0] += 715827;
            result[1] += 7874106;
            result[2] += 715827;
            result[3] += 3579139;
            result[4] += 16464041;
            result[5] += 13600729;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 1106950;
            result[1] += 0;
            result[2] += 885560;
            result[3] += 15054524;
            result[4] += 885560;
            result[5] += 25017077;
          } else {
            result[0] += 5856773;
            result[1] += 976128;
            result[2] += 26355481;
            result[3] += 1952257;
            result[4] += 0;
            result[5] += 7809031;
          }
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 1385473;
            result[1] += 4849156;
            result[2] += 0;
            result[3] += 6234629;
            result[4] += 29094939;
            result[5] += 1385473;
          } else {
            result[0] += 1034931;
            result[1] += 38292479;
            result[2] += 0;
            result[3] += 517465;
            result[4] += 3104795;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
            result[0] += 37624376;
            result[1] += 192945;
            result[2] += 38589;
            result[3] += 964727;
            result[4] += 2315346;
            result[5] += 1813687;
          } else {
            result[0] += 12271335;
            result[1] += 876523;
            result[2] += 7888715;
            result[3] += 14170470;
            result[4] += 1460873;
            result[5] += 6281754;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42bc0000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1651910;
            result[4] += 0;
            result[5] += 41297762;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2386092;
            result[3] += 0;
            result[4] += 38177487;
            result[5] += 2386092;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 16519104;
            result[4] += 13215283;
            result[5] += 13215283;
          } else {
            result[0] += 8053063;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1342177;
            result[5] += 33554431;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4411047;
            result[3] += 28555728;
            result[4] += 696481;
            result[5] += 9286415;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 24245783;
            result[3] += 10391049;
            result[4] += 0;
            result[5] += 8312839;
          }
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 6135667;
            result[1] += 0;
            result[2] += 3067833;
            result[3] += 18407002;
            result[4] += 0;
            result[5] += 15339168;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 27746248;
            result[3] += 14063167;
            result[4] += 0;
            result[5] += 1140256;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33864165;
            result[3] += 8259552;
            result[4] += 0;
            result[5] += 825955;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40563580;
            result[3] += 1789569;
            result[4] += 0;
            result[5] += 596523;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 0;
            result[4] += 7158278;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 825955;
            result[1] += 0;
            result[2] += 36755008;
            result[3] += 4955731;
            result[4] += 412977;
            result[5] += 0;
          } else {
            result[0] += 74695;
            result[1] += 0;
            result[2] += 41829246;
            result[3] += 896341;
            result[4] += 0;
            result[5] += 149390;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 490853;
            result[4] += 42458819;
            result[5] += 0;
          } else {
            result[0] += 17031766;
            result[1] += 1481023;
            result[2] += 0;
            result[3] += 740511;
            result[4] += 10367162;
            result[5] += 13329208;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 246271;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1723897;
            result[4] += 2610473;
            result[5] += 38369031;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 16760847;
            result[1] += 1047552;
            result[2] += 0;
            result[3] += 0;
            result[4] += 25141271;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 35280088;
            result[2] += 0;
            result[3] += 3067833;
            result[4] += 3067833;
            result[5] += 1533916;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 685367;
            result[2] += 2513012;
            result[3] += 11651241;
            result[4] += 913822;
            result[5] += 27186229;
          } else {
            result[0] += 1130254;
            result[1] += 0;
            result[2] += 0;
            result[3] += 30516872;
            result[4] += 282563;
            result[5] += 11019981;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
            result[0] += 6524000;
            result[1] += 1268555;
            result[2] += 906111;
            result[3] += 8698667;
            result[4] += 12504335;
            result[5] += 13048001;
          } else {
            result[0] += 36710747;
            result[1] += 760844;
            result[2] += 228253;
            result[3] += 456506;
            result[4] += 4527024;
            result[5] += 266295;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 969831;
            result[1] += 2078209;
            result[2] += 12469259;
            result[3] += 16210037;
            result[4] += 831283;
            result[5] += 10391049;
          } else {
            result[0] += 33076184;
            result[1] += 0;
            result[2] += 2468372;
            result[3] += 2468372;
            result[4] += 4936744;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12884901;
            result[3] += 4294967;
            result[4] += 4294967;
            result[5] += 21474836;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 21474836;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 1814774;
            result[1] += 604924;
            result[2] += 6654174;
            result[3] += 15728049;
            result[4] += 1209849;
            result[5] += 16937899;
          } else {
            result[0] += 3142658;
            result[1] += 0;
            result[2] += 24093718;
            result[3] += 15713294;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42e50000))) ) ) {
            result[0] += 1342177;
            result[1] += 0;
            result[2] += 32480690;
            result[3] += 8589934;
            result[4] += 0;
            result[5] += 536870;
          } else {
            result[0] += 31496426;
            result[1] += 0;
            result[2] += 11453246;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 24022698;
            result[3] += 16743092;
            result[4] += 0;
            result[5] += 2183881;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36936718;
            result[3] += 6012954;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32212254;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30064771;
            result[3] += 12271335;
            result[4] += 0;
            result[5] += 613566;
          } else {
            result[0] += 1651910;
            result[1] += 0;
            result[2] += 40471807;
            result[3] += 825955;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 7158278;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42770715;
            result[3] += 178956;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c80000))) ) ) {
            result[0] += 485307;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41251098;
            result[5] += 1213267;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42500000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1840700;
            result[2] += 0;
            result[3] += 0;
            result[4] += 19020569;
            result[5] += 22088403;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42660000))) ) ) {
            result[0] += 12271335;
            result[1] += 16873085;
            result[2] += 0;
            result[3] += 3067833;
            result[4] += 6135667;
            result[5] += 4601750;
          } else {
            result[0] += 101776;
            result[1] += 50888;
            result[2] += 101776;
            result[3] += 2442635;
            result[4] += 1017764;
            result[5] += 39234831;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
            result[0] += 19714603;
            result[1] += 9153208;
            result[2] += 0;
            result[3] += 704092;
            result[4] += 12673673;
            result[5] += 704092;
          } else {
            result[0] += 0;
            result[1] += 401398;
            result[2] += 3077390;
            result[3] += 23147331;
            result[4] += 1337996;
            result[5] += 14985555;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42820000))) ) ) {
            result[0] += 28546348;
            result[1] += 1648573;
            result[2] += 86767;
            result[3] += 1127971;
            result[4] += 10932644;
            result[5] += 607369;
          } else {
            result[0] += 2030717;
            result[1] += 1726109;
            result[2] += 5076793;
            result[3] += 12691983;
            result[4] += 5482936;
            result[5] += 15941131;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 37787452;
            result[1] += 2168132;
            result[2] += 671088;
            result[3] += 103244;
            result[4] += 2168132;
            result[5] += 51622;
          } else {
            result[0] += 8504885;
            result[1] += 2976710;
            result[2] += 23813680;
            result[3] += 2976710;
            result[4] += 2976710;
            result[5] += 1700977;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42d60000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428c0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 17179869;
            result[1] += 8589934;
            result[2] += 17179869;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42810000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3681400;
            result[3] += 3681400;
            result[4] += 0;
            result[5] += 35586871;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42dd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4772185;
            result[3] += 0;
            result[4] += 9544371;
            result[5] += 28633115;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 671088;
            result[1] += 0;
            result[2] += 11408506;
            result[3] += 27514634;
            result[4] += 0;
            result[5] += 3355443;
          } else {
            result[0] += 954437;
            result[1] += 0;
            result[2] += 30541989;
            result[3] += 10498808;
            result[4] += 0;
            result[5] += 954437;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7158278;
            result[3] += 33405301;
            result[4] += 0;
            result[5] += 2386092;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30678337;
            result[3] += 12271335;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1498244;
            result[1] += 0;
            result[2] += 38954354;
            result[3] += 1997659;
            result[4] += 0;
            result[5] += 499414;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 28633115;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1160801;
            result[1] += 0;
            result[2] += 37145663;
            result[3] += 4643207;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41696684;
            result[3] += 1044157;
            result[4] += 0;
            result[5] += 208831;
          } else {
            result[0] += 11713547;
            result[1] += 0;
            result[2] += 31236125;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 530242;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40121710;
            result[5] += 2297719;
          } else {
            result[0] += 0;
            result[1] += 27917287;
            result[2] += 0;
            result[3] += 10737418;
            result[4] += 4294967;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42680000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 3067833;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5113056;
            result[4] += 13293946;
            result[5] += 21474836;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 8053063;
            result[2] += 0;
            result[3] += 8053063;
            result[4] += 22817013;
            result[5] += 4026531;
          } else {
            result[0] += 421994;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2344414;
            result[4] += 1500425;
            result[5] += 38682838;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 9866816;
            result[4] += 0;
            result[5] += 33082856;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 32615917;
            result[4] += 0;
            result[5] += 10333755;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42300000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 6999205;
            result[2] += 0;
            result[3] += 954437;
            result[4] += 34677884;
            result[5] += 318145;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 42627550;
            result[2] += 0;
            result[3] += 0;
            result[4] += 322122;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42660000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1179936;
            result[2] += 4719744;
            result[3] += 16991079;
            result[4] += 1415923;
            result[5] += 18642989;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d60000))) ) ) {
            result[0] += 24299751;
            result[1] += 1645581;
            result[2] += 3455720;
            result[3] += 6088650;
            result[4] += 4497922;
            result[5] += 2962046;
          } else {
            result[0] += 37833783;
            result[1] += 951793;
            result[2] += 2082047;
            result[3] += 237948;
            result[4] += 1784612;
            result[5] += 59487;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2526451;
            result[3] += 18948385;
            result[4] += 631612;
            result[5] += 20843223;
          } else {
            result[0] += 0;
            result[1] += 2684354;
            result[2] += 32212254;
            result[3] += 5368709;
            result[4] += 0;
            result[5] += 2684354;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38177487;
            result[3] += 0;
            result[4] += 0;
            result[5] += 4772185;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17179869;
            result[3] += 12884901;
            result[4] += 0;
            result[5] += 12884901;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5856773;
            result[3] += 35140641;
            result[4] += 0;
            result[5] += 1952257;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4294967;
            result[3] += 0;
            result[4] += 17179869;
            result[5] += 21474836;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32947694;
            result[3] += 9119451;
            result[4] += 0;
            result[5] += 882527;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12271335;
            result[3] += 30678337;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 6135667;
            result[2] += 0;
            result[3] += 18407002;
            result[4] += 18407002;
            result[5] += 0;
          } else {
            result[0] += 596523;
            result[1] += 0;
            result[2] += 36984440;
            result[3] += 4971026;
            result[4] += 0;
            result[5] += 397682;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41143378;
            result[3] += 1806294;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42535367;
            result[3] += 414305;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 832358;
            result[1] += 332943;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41617900;
            result[5] += 166471;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
            result[0] += 42467092;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 482580;
            result[5] += 0;
          } else {
            result[0] += 6362914;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 27042386;
            result[5] += 9544371;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x424a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4521018;
            result[3] += 0;
            result[4] += 33907636;
            result[5] += 4521018;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1019913;
            result[4] += 1643193;
            result[5] += 40286566;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 241290;
            result[2] += 0;
            result[3] += 3378064;
            result[4] += 7238708;
            result[5] += 32091609;
          } else {
            result[0] += 3155486;
            result[1] += 701219;
            result[2] += 1227133;
            result[3] += 18231697;
            result[4] += 4733229;
            result[5] += 14900906;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42440000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 7809031;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35140641;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 14316557;
            result[2] += 0;
            result[3] += 0;
            result[4] += 28633115;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42765339;
            result[2] += 0;
            result[3] += 0;
            result[4] += 184333;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d60000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
            result[0] += 6080224;
            result[1] += 1164298;
            result[2] += 129366;
            result[3] += 17076375;
            result[4] += 3363528;
            result[5] += 15135878;
          } else {
            result[0] += 21026725;
            result[1] += 1447741;
            result[2] += 7307649;
            result[3] += 4963686;
            result[4] += 5377326;
            result[5] += 2826543;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 7158278;
            result[1] += 11930464;
            result[2] += 0;
            result[3] += 0;
            result[4] += 23860929;
            result[5] += 0;
          } else {
            result[0] += 40386446;
            result[1] += 250070;
            result[2] += 937765;
            result[3] += 62517;
            result[4] += 1312872;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 36442146;
            result[4] += 0;
            result[5] += 6507526;
          } else {
            result[0] += 14316557;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 0;
            result[4] += 14316557;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e30000))) ) ) {
            result[0] += 0;
            result[1] += 1342177;
            result[2] += 2684354;
            result[3] += 9395240;
            result[4] += 5368709;
            result[5] += 24159191;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32212254;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 1867377;
            result[1] += 5602131;
            result[2] += 29878033;
            result[3] += 3734754;
            result[4] += 0;
            result[5] += 1867377;
          } else {
            result[0] += 33038209;
            result[1] += 0;
            result[2] += 0;
            result[3] += 9911462;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 23030984;
            result[3] += 13694098;
            result[4] += 0;
            result[5] += 6224590;
          } else {
            result[0] += 228455;
            result[1] += 0;
            result[2] += 37238280;
            result[3] += 5254481;
            result[4] += 0;
            result[5] += 228455;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 32212254;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 129366;
            result[1] += 0;
            result[2] += 41850057;
            result[3] += 970248;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42640000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42733845;
            result[5] += 215827;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 36814005;
            result[5] += 6135667;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x428c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40265318;
            result[5] += 2684354;
          }
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3904515;
            result[4] += 35140641;
            result[5] += 3904515;
          } else {
            result[0] += 52569;
            result[1] += 105139;
            result[2] += 0;
            result[3] += 1156539;
            result[4] += 1734809;
            result[5] += 39900614;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2280513;
            result[3] += 9122054;
            result[4] += 380085;
            result[5] += 31167019;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 41082295;
            result[4] += 0;
            result[5] += 1867377;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 14316557;
            result[2] += 0;
            result[3] += 9544371;
            result[4] += 14316557;
            result[5] += 4772185;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 520602;
            result[1] += 0;
            result[2] += 780903;
            result[3] += 8850235;
            result[4] += 7028128;
            result[5] += 25769803;
          } else {
            result[0] += 353495;
            result[1] += 353495;
            result[2] += 1590728;
            result[3] += 23330686;
            result[4] += 530242;
            result[5] += 16791024;
          }
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 565127;
            result[1] += 6781527;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35037891;
            result[5] += 565127;
          } else {
            result[0] += 2045222;
            result[1] += 32723560;
            result[2] += 6135667;
            result[3] += 2045222;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42640000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 29094939;
            result[2] += 0;
            result[3] += 0;
            result[4] += 13854733;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 30494267;
            result[1] += 4509715;
            result[2] += 0;
            result[3] += 644245;
            result[4] += 6442450;
            result[5] += 858993;
          } else {
            result[0] += 3368601;
            result[1] += 0;
            result[2] += 8632042;
            result[3] += 12211181;
            result[4] += 2105376;
            result[5] += 16632471;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42460000))) ) ) {
            result[0] += 6607641;
            result[1] += 34690120;
            result[2] += 0;
            result[3] += 1651910;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 38918797;
            result[1] += 324323;
            result[2] += 1019301;
            result[3] += 555982;
            result[4] += 1992271;
            result[5] += 138995;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2045222;
            result[3] += 2045222;
            result[4] += 0;
            result[5] += 38859227;
          } else {
            result[0] += 421075;
            result[1] += 2315913;
            result[2] += 21053761;
            result[3] += 15369245;
            result[4] += 842150;
            result[5] += 2947526;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 34359738;
            result[2] += 8589934;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 35791394;
            result[1] += 894784;
            result[2] += 5368709;
            result[3] += 0;
            result[4] += 894784;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9203501;
            result[3] += 30678337;
            result[4] += 0;
            result[5] += 3067833;
          } else {
            result[0] += 4156419;
            result[1] += 0;
            result[2] += 31865886;
            result[3] += 6234629;
            result[4] += 0;
            result[5] += 692736;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17179869;
            result[3] += 12884901;
            result[4] += 0;
            result[5] += 12884901;
          } else {
            result[0] += 97723;
            result[1] += 0;
            result[2] += 40750884;
            result[3] += 1954478;
            result[4] += 0;
            result[5] += 146585;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x423c0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42340000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 176023;
            result[1] += 176023;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42069556;
            result[5] += 528069;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 37955524;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4994148;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 423984;
            result[2] += 339187;
            result[3] += 2713503;
            result[4] += 2459112;
            result[5] += 37013883;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42620000))) ) ) {
            result[0] += 33960206;
            result[1] += 2996488;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5992977;
            result[5] += 0;
          } else {
            result[0] += 1093264;
            result[1] += 312361;
            result[2] += 1405625;
            result[3] += 21084384;
            result[4] += 2967431;
            result[5] += 16086604;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a60000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 32212254;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10737418;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42846428;
            result[2] += 0;
            result[3] += 0;
            result[4] += 103244;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d70000))) ) ) {
            result[0] += 35335229;
            result[1] += 666702;
            result[2] += 701792;
            result[3] += 771971;
            result[4] += 4666917;
            result[5] += 807060;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 1431655;
            result[1] += 1431655;
            result[2] += 2386092;
            result[3] += 11453246;
            result[4] += 5965232;
            result[5] += 20281790;
          } else {
            result[0] += 14536812;
            result[1] += 0;
            result[2] += 21805218;
            result[3] += 3964585;
            result[4] += 660764;
            result[5] += 1982292;
          }
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 10105805;
            result[2] += 0;
            result[3] += 0;
            result[4] += 27790964;
            result[5] += 5052902;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1176703;
            result[3] += 8825275;
            result[4] += 1176703;
            result[5] += 31770990;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 2477865;
            result[1] += 0;
            result[2] += 27256523;
            result[3] += 3303820;
            result[4] += 3303820;
            result[5] += 6607641;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 3579139;
            result[4] += 0;
            result[5] += 21474836;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4051855;
            result[3] += 36466703;
            result[4] += 0;
            result[5] += 2431113;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42bc0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37896770;
            result[3] += 0;
            result[4] += 0;
            result[5] += 5052902;
          } else {
            result[0] += 32212254;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10105805;
            result[3] += 10105805;
            result[4] += 0;
            result[5] += 22738062;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 22106449;
            result[3] += 19579997;
            result[4] += 0;
            result[5] += 1263225;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17179869;
            result[3] += 8589934;
            result[4] += 0;
            result[5] += 17179869;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37955524;
            result[3] += 4994148;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 205500;
            result[1] += 0;
            result[2] += 35346142;
            result[3] += 6576026;
            result[4] += 0;
            result[5] += 822003;
          } else {
            result[0] += 22738062;
            result[1] += 0;
            result[2] += 20211610;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 5368709;
            result[1] += 0;
            result[2] += 16106127;
            result[3] += 0;
            result[4] += 0;
            result[5] += 21474836;
          } else {
            result[0] += 77108;
            result[1] += 0;
            result[2] += 41870147;
            result[3] += 1002416;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 39645851;
            result[5] += 3303820;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41468649;
            result[5] += 1481023;
          } else {
            result[0] += 9544371;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 19088743;
            result[5] += 14316557;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x429c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 34690120;
            result[5] += 8259552;
          } else {
            result[0] += 0;
            result[1] += 14316557;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4772185;
            result[5] += 23860929;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 31236125;
            result[5] += 11713547;
          } else {
            result[0] += 59818;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1555280;
            result[4] += 418729;
            result[5] += 40915844;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42680000))) ) ) {
            result[0] += 41433802;
            result[1] += 505290;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1010580;
            result[5] += 0;
          } else {
            result[0] += 4026531;
            result[1] += 4026531;
            result[2] += 0;
            result[3] += 2684354;
            result[4] += 26843545;
            result[5] += 5368709;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 262689;
            result[1] += 1050756;
            result[2] += 131344;
            result[3] += 8800085;
            result[4] += 3414958;
            result[5] += 29289838;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2052741;
            result[3] += 27475158;
            result[4] += 157903;
            result[5] += 13263869;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42420000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425a0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 30678337;
            result[2] += 0;
            result[3] += 0;
            result[4] += 12271335;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42300000))) ) ) {
            result[0] += 0;
            result[1] += 37955524;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4994148;
            result[5] += 0;
          } else {
            result[0] += 536870;
            result[1] += 4831838;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35970351;
            result[5] += 1610612;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42460000))) ) ) {
            result[0] += 4643207;
            result[1] += 33663257;
            result[2] += 0;
            result[3] += 3482405;
            result[4] += 1160801;
            result[5] += 0;
          } else {
            result[0] += 4849156;
            result[1] += 1385473;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35329569;
            result[5] += 1385473;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 40071826;
            result[1] += 305226;
            result[2] += 130811;
            result[3] += 348829;
            result[4] += 1613337;
            result[5] += 479641;
          } else {
            result[0] += 17772278;
            result[1] += 2468372;
            result[2] += 4196232;
            result[3] += 8886139;
            result[4] += 4689906;
            result[5] += 4936744;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2684354;
            result[3] += 27514634;
            result[4] += 0;
            result[5] += 12750684;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 2660599;
            result[1] += 4180941;
            result[2] += 11022482;
            result[3] += 11022482;
            result[4] += 3040684;
            result[5] += 11022482;
          } else {
            result[0] += 4772185;
            result[1] += 0;
            result[2] += 33405301;
            result[3] += 3976821;
            result[4] += 0;
            result[5] += 795364;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 19993813;
            result[3] += 15550743;
            result[4] += 0;
            result[5] += 7405116;
          } else {
            result[0] += 780903;
            result[1] += 0;
            result[2] += 36181845;
            result[3] += 5726623;
            result[4] += 0;
            result[5] += 260301;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 5482936;
            result[1] += 0;
            result[2] += 30156153;
            result[3] += 5482936;
            result[4] += 0;
            result[5] += 1827645;
          } else {
            result[0] += 119139;
            result[1] += 0;
            result[2] += 41341294;
            result[3] += 1131822;
            result[4] += 0;
            result[5] += 357417;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42810000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42518017;
            result[5] += 431655;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
            result[0] += 41082295;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1867377;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 29878033;
            result[5] += 13071639;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 25419194;
            result[5] += 17530478;
          } else {
            result[0] += 53024;
            result[1] += 53024;
            result[2] += 0;
            result[3] += 2280044;
            result[4] += 1590728;
            result[5] += 38972851;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 1917396;
            result[1] += 2300875;
            result[2] += 383479;
            result[3] += 11312637;
            result[4] += 1917396;
            result[5] += 25117889;
          } else {
            result[0] += 576505;
            result[1] += 0;
            result[2] += 0;
            result[3] += 32284317;
            result[4] += 288252;
            result[5] += 9800596;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42240000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 12271335;
            result[2] += 0;
            result[3] += 0;
            result[4] += 30678337;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42890000))) ) ) {
            result[0] += 7596540;
            result[1] += 4674794;
            result[2] += 0;
            result[3] += 1168698;
            result[4] += 26587892;
            result[5] += 2921746;
          } else {
            result[0] += 36055212;
            result[1] += 1301505;
            result[2] += 527637;
            result[3] += 1442208;
            result[4] += 2673362;
            result[5] += 949747;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 2326440;
            result[1] += 0;
            result[2] += 1073741;
            result[3] += 14853428;
            result[4] += 7337235;
            result[5] += 17358826;
          } else {
            result[0] += 11780481;
            result[1] += 0;
            result[2] += 24542670;
            result[3] += 3926827;
            result[4] += 490853;
            result[5] += 2208840;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42dd0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ed0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 9085507;
            result[4] += 2477865;
            result[5] += 31386299;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3506095;
            result[3] += 32431385;
            result[4] += 0;
            result[5] += 7012191;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35370318;
            result[3] += 5052902;
            result[4] += 0;
            result[5] += 2526451;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8589934;
            result[3] += 0;
            result[4] += 0;
            result[5] += 34359738;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32461962;
            result[3] += 7990636;
            result[4] += 0;
            result[5] += 2497074;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42e00000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 14316557;
            result[4] += 14316557;
            result[5] += 14316557;
          } else {
            result[0] += 4772185;
            result[1] += 0;
            result[2] += 38177487;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 736280;
            result[1] += 0;
            result[2] += 33378031;
            result[3] += 8099081;
            result[4] += 0;
            result[5] += 736280;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39370533;
            result[3] += 3579139;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 119304;
            result[1] += 0;
            result[2] += 42711063;
            result[3] += 119304;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c80000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 891072;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41702172;
            result[5] += 356428;
          } else {
            result[0] += 3198379;
            result[1] += 456911;
            result[2] += 0;
            result[3] += 0;
            result[4] += 30156153;
            result[5] += 9138228;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x424a0000))) ) ) {
            result[0] += 0;
            result[1] += 40997415;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1952257;
            result[5] += 0;
          } else {
            result[0] += 1022611;
            result[1] += 5113056;
            result[2] += 0;
            result[3] += 0;
            result[4] += 36814005;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 32641751;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10307921;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
            result[0] += 34768782;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8180890;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53553;
            result[3] += 2142128;
            result[4] += 1499489;
            result[5] += 39254501;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 1487434;
            result[1] += 1115575;
            result[2] += 743717;
            result[3] += 7809031;
            result[4] += 2974869;
            result[5] += 28819044;
          } else {
            result[0] += 3187078;
            result[1] += 607062;
            result[2] += 2883546;
            result[3] += 24737797;
            result[4] += 758828;
            result[5] += 10775359;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42820000))) ) ) {
            result[0] += 38155290;
            result[1] += 1598127;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1997659;
            result[5] += 1198595;
          } else {
            result[0] += 3655291;
            result[1] += 609215;
            result[2] += 5026025;
            result[3] += 18428760;
            result[4] += 4721417;
            result[5] += 10508962;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
            result[0] += 38400486;
            result[1] += 445998;
            result[2] += 0;
            result[3] += 579798;
            result[4] += 2809791;
            result[5] += 713597;
          } else {
            result[0] += 13215283;
            result[1] += 2202547;
            result[2] += 17253287;
            result[3] += 5139277;
            result[4] += 1835456;
            result[5] += 3303820;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 825955;
            result[3] += 19822925;
            result[4] += 2477865;
            result[5] += 19822925;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12469259;
            result[3] += 0;
            result[4] += 0;
            result[5] += 30480413;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12570635;
            result[3] += 25141271;
            result[4] += 0;
            result[5] += 5237764;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42cf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32212254;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4090445;
            result[3] += 36814005;
            result[4] += 0;
            result[5] += 2045222;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42e70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33188383;
            result[3] += 7809031;
            result[4] += 0;
            result[5] += 1952257;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42f40000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 216917;
            result[1] += 0;
            result[2] += 36442146;
            result[3] += 6073691;
            result[4] += 0;
            result[5] += 216917;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41072880;
            result[3] += 1443686;
            result[4] += 144368;
            result[5] += 288737;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 241290;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42708382;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42620000))) ) ) {
            result[0] += 39881839;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3067833;
            result[5] += 0;
          } else {
            result[0] += 4367763;
            result[1] += 0;
            result[2] += 727960;
            result[3] += 0;
            result[4] += 23294737;
            result[5] += 14559211;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 1073741;
            result[2] += 0;
            result[3] += 0;
            result[4] += 37580963;
            result[5] += 4294967;
          } else {
            result[0] += 0;
            result[1] += 296545;
            result[2] += 148272;
            result[3] += 2125242;
            result[4] += 1087333;
            result[5] += 39292278;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 4264506;
            result[2] += 609215;
            result[3] += 5178329;
            result[4] += 4873721;
            result[5] += 28023900;
          } else {
            result[0] += 173885;
            result[1] += 0;
            result[2] += 4173247;
            result[3] += 27821650;
            result[4] += 173885;
            result[5] += 10607004;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x425a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 4955731;
            result[2] += 0;
            result[3] += 0;
            result[4] += 34690120;
            result[5] += 3303820;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 5541893;
            result[1] += 27709466;
            result[2] += 0;
            result[3] += 0;
            result[4] += 9698313;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 7730941;
            result[1] += 6585616;
            result[2] += 0;
            result[3] += 286331;
            result[4] += 28346784;
            result[5] += 0;
          } else {
            result[0] += 37922791;
            result[1] += 482580;
            result[2] += 0;
            result[3] += 1608601;
            result[4] += 2292257;
            result[5] += 643440;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 876523;
            result[1] += 2848702;
            result[2] += 4820881;
            result[3] += 16215692;
            result[4] += 4382619;
            result[5] += 13805252;
          } else {
            result[0] += 20763749;
            result[1] += 2275479;
            result[2] += 14790615;
            result[3] += 1422174;
            result[4] += 2275479;
            result[5] += 1422174;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1455921;
            result[4] += 7279605;
            result[5] += 34214146;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 14641933;
            result[4] += 976128;
            result[5] += 27331610;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8103711;
            result[3] += 27957805;
            result[4] += 0;
            result[5] += 6888155;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 24542670;
            result[3] += 12271335;
            result[4] += 0;
            result[5] += 6135667;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39443577;
            result[3] += 2629571;
            result[4] += 0;
            result[5] += 876523;
          }
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42d60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30395153;
            result[3] += 9250698;
            result[4] += 0;
            result[5] += 3303820;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 18527309;
            result[3] += 21053761;
            result[4] += 0;
            result[5] += 3368601;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 21474836;
            result[1] += 0;
            result[2] += 0;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40178726;
            result[3] += 2770946;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42f90000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12271335;
            result[3] += 24542670;
            result[4] += 0;
            result[5] += 6135667;
          } else {
            result[0] += 345903;
            result[1] += 0;
            result[2] += 40067144;
            result[3] += 2190721;
            result[4] += 172951;
            result[5] += 172951;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c00000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 215827;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42086362;
            result[5] += 647482;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x425a0000))) ) ) {
            result[0] += 42949672;
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
            result[4] += 28908433;
            result[5] += 14041239;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42660000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42660000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4772185;
            result[4] += 28633115;
            result[5] += 9544371;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 97171;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1700496;
            result[4] += 1311811;
            result[5] += 39840194;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42660000))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 1590728;
            result[2] += 5567550;
            result[3] += 7953643;
            result[4] += 2386092;
            result[5] += 25451658;
          } else {
            result[0] += 370255;
            result[1] += 185127;
            result[2] += 2036406;
            result[3] += 25917906;
            result[4] += 1481023;
            result[5] += 12958953;
          }
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 0;
            result[1] += 14316557;
            result[2] += 0;
            result[3] += 0;
            result[4] += 28633115;
            result[5] += 0;
          } else {
            result[0] += 104755;
            result[1] += 42321141;
            result[2] += 209510;
            result[3] += 314265;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 3275822;
            result[1] += 1091940;
            result[2] += 0;
            result[3] += 0;
            result[4] += 38217929;
            result[5] += 363980;
          } else {
            result[0] += 3067833;
            result[1] += 37836616;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2045222;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
            result[0] += 38839833;
            result[1] += 259179;
            result[2] += 37025;
            result[3] += 740511;
            result[4] += 2369637;
            result[5] += 703486;
          } else {
            result[0] += 6037653;
            result[1] += 1097755;
            result[2] += 7958725;
            result[3] += 9605358;
            result[4] += 2607168;
            result[5] += 15643011;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 6871947;
            result[4] += 6871947;
            result[5] += 29205777;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6781527;
            result[3] += 30140121;
            result[4] += 0;
            result[5] += 6028024;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8886139;
            result[3] += 22215348;
            result[4] += 0;
            result[5] += 11848185;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 31173149;
            result[3] += 11083786;
            result[4] += 0;
            result[5] += 692736;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 27709466;
            result[1] += 1385473;
            result[2] += 9698313;
            result[3] += 0;
            result[4] += 2770946;
            result[5] += 1385473;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42740000))) ) ) {
            result[0] += 0;
            result[1] += 21474836;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 0;
          } else {
            result[0] += 436776;
            result[1] += 0;
            result[2] += 40280484;
            result[3] += 1261798;
            result[4] += 0;
            result[5] += 970614;
          }
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42524428;
            result[5] += 425244;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x425a0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5726623;
            result[3] += 0;
            result[4] += 0;
            result[5] += 37223049;
          } else {
            result[0] += 6964811;
            result[1] += 1160801;
            result[2] += 0;
            result[3] += 1160801;
            result[4] += 19733633;
            result[5] += 13929623;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x426c0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 34359738;
            result[5] += 8589934;
          } else {
            result[0] += 113174;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1810789;
            result[4] += 735633;
            result[5] += 40290075;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42620000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42830000))) ) ) {
            result[0] += 42949672;
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
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 4220488;
            result[2] += 0;
            result[3] += 4220488;
            result[4] += 3972224;
            result[5] += 30536472;
          } else {
            result[0] += 0;
            result[1] += 157324;
            result[2] += 3461145;
            result[3] += 23441396;
            result[4] += 471974;
            result[5] += 15417831;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
            result[0] += 0;
            result[1] += 42849557;
            result[2] += 0;
            result[3] += 0;
            result[4] += 100115;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 32212254;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10737418;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 2321603;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40628069;
            result[5] += 0;
          } else {
            result[0] += 10850443;
            result[1] += 12206749;
            result[2] += 1356305;
            result[3] += 6781527;
            result[4] += 10398341;
            result[5] += 1356305;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 37263485;
            result[1] += 303263;
            result[2] += 37907;
            result[3] += 947697;
            result[4] += 3070541;
            result[5] += 1326777;
          } else {
            result[0] += 16291255;
            result[1] += 0;
            result[2] += 5924092;
            result[3] += 11001886;
            result[4] += 2115747;
            result[5] += 7616690;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42800000))) ) ) {
            result[0] += 0;
            result[1] += 10737418;
            result[2] += 0;
            result[3] += 0;
            result[4] += 32212254;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1741202;
            result[2] += 0;
            result[3] += 5223608;
            result[4] += 4062806;
            result[5] += 31922054;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8403196;
            result[3] += 25209590;
            result[4] += 1244918;
            result[5] += 8091967;
          } else {
            result[0] += 940503;
            result[1] += 0;
            result[2] += 26334106;
            result[3] += 14107556;
            result[4] += 313501;
            result[5] += 1254005;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 4772185;
            result[2] += 2386092;
            result[3] += 0;
            result[4] += 0;
            result[5] += 35791394;
          } else {
            result[0] += 954437;
            result[1] += 2863311;
            result[2] += 22906492;
            result[3] += 4772185;
            result[4] += 4772185;
            result[5] += 6681060;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 12725829;
            result[1] += 0;
            result[2] += 15907286;
            result[3] += 4772185;
            result[4] += 1590728;
            result[5] += 7953643;
          } else {
            result[0] += 253839;
            result[1] += 0;
            result[2] += 40055900;
            result[3] += 2436860;
            result[4] += 0;
            result[5] += 203071;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 227246;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40904450;
            result[5] += 1817975;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42580000))) ) ) {
            result[0] += 40495405;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2454267;
            result[5] += 0;
          } else {
            result[0] += 3530110;
            result[1] += 0;
            result[2] += 1765055;
            result[3] += 6471868;
            result[4] += 21769012;
            result[5] += 9413626;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 10462099;
            result[2] += 0;
            result[3] += 1101273;
            result[4] += 21474836;
            result[5] += 9911462;
          } else {
            result[0] += 0;
            result[1] += 149303;
            result[2] += 0;
            result[3] += 2040482;
            result[4] += 1493036;
            result[5] += 39266850;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 704092;
            result[1] += 0;
            result[2] += 704092;
            result[3] += 4224557;
            result[4] += 7040929;
            result[5] += 30275998;
          } else {
            result[0] += 668477;
            result[1] += 0;
            result[2] += 3509506;
            result[3] += 22561112;
            result[4] += 334238;
            result[5] += 15876338;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a50000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42e40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1867377;
            result[4] += 41082295;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 34184433;
            result[2] += 0;
            result[3] += 2629571;
            result[4] += 6135667;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42890000))) ) ) {
            result[0] += 6607641;
            result[1] += 12961143;
            result[2] += 0;
            result[3] += 762420;
            result[4] += 20839486;
            result[5] += 1778980;
          } else {
            result[0] += 37120251;
            result[1] += 150436;
            result[2] += 37609;
            result[3] += 1203493;
            result[4] += 2745469;
            result[5] += 1692412;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 810371;
            result[1] += 2025927;
            result[2] += 11345196;
            result[3] += 16612609;
            result[4] += 1215556;
            result[5] += 10940011;
          } else {
            result[0] += 34690120;
            result[1] += 825955;
            result[2] += 5368709;
            result[3] += 0;
            result[4] += 2064888;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 8351325;
            result[4] += 0;
            result[5] += 34598347;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5368709;
            result[4] += 0;
            result[5] += 37580963;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 5368709;
            result[2] += 10737418;
            result[3] += 2684354;
            result[4] += 10737418;
            result[5] += 13421772;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 29054190;
            result[3] += 12632256;
            result[4] += 0;
            result[5] += 1263225;
          }
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8589934;
            result[3] += 0;
            result[4] += 0;
            result[5] += 34359738;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 31684184;
            result[3] += 10796092;
            result[4] += 0;
            result[5] += 469395;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42940000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 0;
            result[4] += 0;
            result[5] += 21474836;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41134898;
            result[3] += 1209849;
            result[4] += 0;
            result[5] += 604924;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42980000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37625333;
            result[3] += 4969383;
            result[4] += 0;
            result[5] += 354955;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36650387;
            result[3] += 5726623;
            result[4] += 0;
            result[5] += 572662;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42233845;
            result[3] += 715827;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 42751748;
            result[2] += 0;
            result[3] += 0;
            result[4] += 197924;
            result[5] += 0;
          } else {
            result[0] += 24542670;
            result[1] += 18407002;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 580400;
            result[3] += 0;
            result[4] += 42079071;
            result[5] += 290200;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 19088743;
            result[2] += 0;
            result[3] += 9544371;
            result[4] += 14316557;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 22497447;
            result[5] += 20452225;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1021181;
            result[4] += 480555;
            result[5] += 41447936;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 5651272;
            result[1] += 1883757;
            result[2] += 0;
            result[3] += 5023353;
            result[4] += 6781527;
            result[5] += 23609761;
          } else {
            result[0] += 521655;
            result[1] += 1043311;
            result[2] += 1564967;
            result[3] += 25561141;
            result[4] += 695541;
            result[5] += 13563054;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 36954785;
            result[1] += 574852;
            result[2] += 82121;
            result[3] += 780156;
            result[4] += 3777600;
            result[5] += 780156;
          } else {
            result[0] += 8822094;
            result[1] += 696481;
            result[2] += 4178887;
            result[3] += 5571849;
            result[4] += 7893453;
            result[5] += 15786906;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 879515;
            result[1] += 1026101;
            result[2] += 13046146;
            result[3] += 15244935;
            result[4] += 732929;
            result[5] += 12020044;
          } else {
            result[0] += 33405301;
            result[1] += 0;
            result[2] += 3470680;
            result[3] += 0;
            result[4] += 6073691;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b60000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1193046;
            result[3] += 0;
            result[4] += 1193046;
            result[5] += 40563580;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 7158278;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b60000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4294967;
            result[3] += 17179869;
            result[4] += 0;
            result[5] += 21474836;
          } else {
            result[0] += 0;
            result[1] += 313501;
            result[2] += 31036624;
            result[3] += 10345541;
            result[4] += 0;
            result[5] += 1254005;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42700000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 14316557;
            result[2] += 28633115;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42d90000))) ) ) {
            result[0] += 249224;
            result[1] += 0;
            result[2] += 38712858;
            result[3] += 3738366;
            result[4] += 0;
            result[5] += 249224;
          } else {
            result[0] += 147087;
            result[1] += 0;
            result[2] += 42655497;
            result[3] += 147087;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x423c0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428e0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 42529627;
            result[2] += 0;
            result[3] += 0;
            result[4] += 420045;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
            result[0] += 1087333;
            result[1] += 362444;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41137450;
            result[5] += 362444;
          } else {
            result[0] += 17179869;
            result[1] += 1762037;
            result[2] += 0;
            result[3] += 2202547;
            result[4] += 10792481;
            result[5] += 11012736;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 218573;
            result[1] += 0;
            result[2] += 163930;
            result[3] += 1420727;
            result[4] += 2732167;
            result[5] += 38414274;
          } else {
            result[0] += 740511;
            result[1] += 370255;
            result[2] += 518358;
            result[3] += 16587459;
            result[4] += 2295585;
            result[5] += 22437501;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42870000))) ) ) {
            result[0] += 4713988;
            result[1] += 17808400;
            result[2] += 0;
            result[3] += 0;
            result[4] += 19117842;
            result[5] += 1309441;
          } else {
            result[0] += 36978060;
            result[1] += 382795;
            result[2] += 535913;
            result[3] += 1378064;
            result[4] += 2449892;
            result[5] += 1224946;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 2770946;
            result[2] += 7389191;
            result[3] += 22167573;
            result[4] += 461824;
            result[5] += 10160137;
          } else {
            result[0] += 6947741;
            result[1] += 1894838;
            result[2] += 22738062;
            result[3] += 1894838;
            result[4] += 4421289;
            result[5] += 5052902;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cd0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42e30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 25769803;
            result[1] += 0;
            result[2] += 0;
            result[3] += 17179869;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 842150;
            result[3] += 37896770;
            result[4] += 0;
            result[5] += 4210752;
          } else {
            result[0] += 6135667;
            result[1] += 6135667;
            result[2] += 24542670;
            result[3] += 0;
            result[4] += 0;
            result[5] += 6135667;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 1481023;
            result[2] += 16291255;
            result[3] += 17772278;
            result[4] += 0;
            result[5] += 7405116;
          } else {
            result[0] += 0;
            result[1] += 6135667;
            result[2] += 36814005;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42eb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 31758560;
            result[3] += 9376337;
            result[4] += 0;
            result[5] += 1814774;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5368709;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 16106127;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42e10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40459836;
            result[3] += 622459;
            result[4] += 622459;
            result[5] += 1244918;
          } else {
            result[0] += 9203501;
            result[1] += 0;
            result[2] += 24542670;
            result[3] += 9203501;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 36342030;
            result[1] += 0;
            result[2] += 6607641;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 28633115;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 182764;
            result[1] += 0;
            result[2] += 41853085;
            result[3] += 852901;
            result[4] += 0;
            result[5] += 60921;
          }
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cc0000))) ) ) {
            result[0] += 3043677;
            result[1] += 1690932;
            result[2] += 0;
            result[3] += 0;
            result[4] += 36073216;
            result[5] += 2141847;
          } else {
            result[0] += 0;
            result[1] += 37466735;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5482936;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
            result[0] += 10604857;
            result[1] += 5302428;
            result[2] += 530242;
            result[3] += 6893157;
            result[4] += 14846800;
            result[5] += 4772185;
          } else {
            result[0] += 39763495;
            result[1] += 127447;
            result[2] += 127447;
            result[3] += 509788;
            result[4] += 637235;
            result[5] += 1784259;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 30480413;
            result[5] += 12469259;
          } else {
            result[0] += 44973;
            result[1] += 44973;
            result[2] += 134920;
            result[3] += 2338620;
            result[4] += 3148143;
            result[5] += 37238041;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42820000))) ) ) {
            result[0] += 26755533;
            result[1] += 6688883;
            result[2] += 1056139;
            result[3] += 352046;
            result[4] += 8097069;
            result[5] += 0;
          } else {
            result[0] += 1890390;
            result[1] += 75615;
            result[2] += 2722162;
            result[3] += 18374595;
            result[4] += 3629549;
            result[5] += 16257358;
          }
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42be0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 2386092;
            result[1] += 40563580;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42960000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8589934;
            result[3] += 34359738;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 42193960;
            result[1] += 0;
            result[2] += 251904;
            result[3] += 62976;
            result[4] += 440832;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 14316557;
            result[4] += 28633115;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ff0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2684354;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 4473924;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 18221073;
            result[3] += 19522578;
            result[4] += 0;
            result[5] += 5206020;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37025580;
            result[3] += 4443069;
            result[4] += 0;
            result[5] += 1481023;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 954437;
            result[1] += 0;
            result[2] += 21952055;
            result[3] += 13362120;
            result[4] += 0;
            result[5] += 6681060;
          } else {
            result[0] += 40423221;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2526451;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33228553;
            result[3] += 8307138;
            result[4] += 0;
            result[5] += 1413981;
          } else {
            result[0] += 401935;
            result[1] += 0;
            result[2] += 40882576;
            result[3] += 1320645;
            result[4] += 0;
            result[5] += 344516;
          }
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 254894;
            result[1] += 764682;
            result[2] += 0;
            result[3] += 0;
            result[4] += 39253707;
            result[5] += 2676389;
          } else {
            result[0] += 604924;
            result[1] += 30851173;
            result[2] += 0;
            result[3] += 0;
            result[4] += 11493574;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42840000))) ) ) {
            result[0] += 1952257;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5856773;
            result[5] += 35140641;
          } else {
            result[0] += 38767731;
            result[1] += 113025;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3729840;
            result[5] += 339076;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 876523;
            result[2] += 1753047;
            result[3] += 1753047;
            result[4] += 28925289;
            result[5] += 9641763;
          } else {
            result[0] += 112286;
            result[1] += 0;
            result[2] += 56143;
            result[3] += 1628157;
            result[4] += 1796587;
            result[5] += 39356497;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 1507006;
            result[1] += 4332642;
            result[2] += 1507006;
            result[3] += 3014012;
            result[4] += 10172290;
            result[5] += 22416715;
          } else {
            result[0] += 4490935;
            result[1] += 979840;
            result[2] += 326613;
            result[3] += 19596808;
            result[4] += 2449601;
            result[5] += 15105873;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b60000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x420e0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 8589934;
            result[1] += 8589934;
            result[2] += 0;
            result[3] += 0;
            result[4] += 25769803;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 6135667;
            result[2] += 0;
            result[3] += 36814005;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42640000))) ) ) {
            result[0] += 5052902;
            result[1] += 37896770;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 21474836;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 42264968;
            result[1] += 0;
            result[2] += 0;
            result[3] += 124491;
            result[4] += 560213;
            result[5] += 0;
          } else {
            result[0] += 21474836;
            result[1] += 0;
            result[2] += 12884901;
            result[3] += 4294967;
            result[4] += 4294967;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d90000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 37223049;
            result[4] += 0;
            result[5] += 5726623;
          } else {
            result[0] += 2863311;
            result[1] += 0;
            result[2] += 27678678;
            result[3] += 2863311;
            result[4] += 0;
            result[5] += 9544371;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2386092;
            result[4] += 0;
            result[5] += 40563580;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4294967;
            result[3] += 31138512;
            result[4] += 0;
            result[5] += 7516192;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 27126109;
            result[4] += 0;
            result[5] += 15823563;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30769914;
            result[3] += 8974558;
            result[4] += 0;
            result[5] += 3205199;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a50000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e50000))) ) ) {
            result[0] += 744792;
            result[1] += 0;
            result[2] += 30039944;
            result[3] += 7944448;
            result[4] += 496528;
            result[5] += 3723960;
          } else {
            result[0] += 30963717;
            result[1] += 0;
            result[2] += 7990636;
            result[3] += 998829;
            result[4] += 2996488;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 850488;
            result[1] += 0;
            result[2] += 33806920;
            result[3] += 7229152;
            result[4] += 0;
            result[5] += 1063110;
          } else {
            result[0] += 255272;
            result[1] += 0;
            result[2] += 40588398;
            result[3] += 2106001;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d20000))) ) ) {
            result[0] += 0;
            result[1] += 321720;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42306232;
            result[5] += 321720;
          } else {
            result[0] += 0;
            result[1] += 34359738;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8589934;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x429e0000))) ) ) {
            result[0] += 876523;
            result[1] += 0;
            result[2] += 2629571;
            result[3] += 0;
            result[4] += 11394811;
            result[5] += 28048766;
          } else {
            result[0] += 29205777;
            result[1] += 4724464;
            result[2] += 0;
            result[3] += 0;
            result[4] += 6442450;
            result[5] += 2576980;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 63161;
            result[2] += 0;
            result[3] += 505290;
            result[4] += 1326386;
            result[5] += 41054834;
          } else {
            result[0] += 0;
            result[1] += 401398;
            result[2] += 267599;
            result[3] += 7358978;
            result[4] += 7894176;
            result[5] += 27027520;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1374389;
            result[3] += 29721173;
            result[4] += 0;
            result[5] += 11854109;
          } else {
            result[0] += 9842633;
            result[1] += 0;
            result[2] += 25948760;
            result[3] += 4473924;
            result[4] += 0;
            result[5] += 2684354;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42420000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 1552397;
            result[1] += 6727057;
            result[2] += 0;
            result[3] += 517465;
            result[4] += 33117820;
            result[5] += 1034931;
          } else {
            result[0] += 0;
            result[1] += 36238786;
            result[2] += 0;
            result[3] += 0;
            result[4] += 6710886;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
            result[0] += 8899481;
            result[1] += 3482405;
            result[2] += 0;
            result[3] += 9286415;
            result[4] += 5417075;
            result[5] += 15864293;
          } else {
            result[0] += 39432599;
            result[1] += 703414;
            result[2] += 41377;
            result[3] += 579282;
            result[4] += 1986112;
            result[5] += 206886;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 950915;
            result[1] += 1901830;
            result[2] += 13788271;
            result[3] += 14580700;
            result[4] += 1743344;
            result[5] += 9984610;
          } else {
            result[0] += 27895148;
            result[1] += 0;
            result[2] += 10626723;
            result[3] += 442780;
            result[4] += 3985021;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 25769803;
            result[5] += 17179869;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1867377;
            result[3] += 1867377;
            result[4] += 1867377;
            result[5] += 37347541;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2431113;
            result[3] += 26742249;
            result[4] += 0;
            result[5] += 13776310;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 27331610;
            result[3] += 0;
            result[4] += 0;
            result[5] += 15618062;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 0;
            result[1] += 17179869;
            result[2] += 8589934;
            result[3] += 17179869;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 456911;
            result[2] += 31983799;
            result[3] += 8224405;
            result[4] += 0;
            result[5] += 2284557;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e30000))) ) ) {
            result[0] += 0;
            result[1] += 5368709;
            result[2] += 10737418;
            result[3] += 5368709;
            result[4] += 0;
            result[5] += 21474836;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 27236377;
            result[3] += 14665741;
            result[4] += 0;
            result[5] += 1047552;
          } else {
            result[0] += 950214;
            result[1] += 0;
            result[2] += 38958774;
            result[3] += 2470556;
            result[4] += 0;
            result[5] += 570128;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 28633115;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 78518;
            result[1] += 0;
            result[2] += 42321524;
            result[3] += 549630;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 239942;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42229846;
            result[5] += 479884;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14316557;
            result[5] += 28633115;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42660000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 10737418;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17895697;
            result[5] += 14316557;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42810000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 30678337;
            result[2] += 0;
            result[3] += 0;
            result[4] += 12271335;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1022611;
            result[4] += 33746171;
            result[5] += 8180890;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42260000))) ) ) {
            result[0] += 0;
            result[1] += 40423221;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 2526451;
          } else {
            result[0] += 47881;
            result[1] += 95762;
            result[2] += 95762;
            result[3] += 2250428;
            result[4] += 1723732;
            result[5] += 38736104;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a00000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42480000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4772185;
            result[4] += 1590728;
            result[5] += 36586758;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 523776;
            result[3] += 29156891;
            result[4] += 349184;
            result[5] += 12919820;
          } else {
            result[0] += 8886139;
            result[1] += 5924092;
            result[2] += 19253301;
            result[3] += 8886139;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42480000))) ) ) {
            result[0] += 0;
            result[1] += 29734388;
            result[2] += 0;
            result[3] += 0;
            result[4] += 13215283;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1605595;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41344077;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42640000))) ) ) {
            result[0] += 0;
            result[1] += 42757933;
            result[2] += 0;
            result[3] += 0;
            result[4] += 191739;
            result[5] += 0;
          } else {
            result[0] += 9544371;
            result[1] += 19088743;
            result[2] += 0;
            result[3] += 4772185;
            result[4] += 9544371;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 20074303;
            result[1] += 1633954;
            result[2] += 233422;
            result[3] += 1633954;
            result[4] += 13071639;
            result[5] += 6302397;
          } else {
            result[0] += 4090445;
            result[1] += 0;
            result[2] += 7499149;
            result[3] += 12953075;
            result[4] += 1022611;
            result[5] += 17384391;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 39592310;
            result[1] += 450377;
            result[2] += 0;
            result[3] += 736981;
            result[4] += 1883398;
            result[5] += 286604;
          } else {
            result[0] += 13094412;
            result[1] += 6285317;
            result[2] += 13094412;
            result[3] += 4190211;
            result[4] += 2095105;
            result[5] += 4190211;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 923648;
            result[2] += 1385473;
            result[3] += 32789535;
            result[4] += 0;
            result[5] += 7851015;
          } else {
            result[0] += 0;
            result[1] += 2013265;
            result[2] += 15435038;
            result[3] += 14092861;
            result[4] += 0;
            result[5] += 11408506;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 2497074;
            result[1] += 0;
            result[2] += 22473666;
            result[3] += 8989466;
            result[4] += 2996488;
            result[5] += 5992977;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42bc0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 40628069;
            result[1] += 0;
            result[2] += 2321603;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 443924;
            result[1] += 0;
            result[2] += 35291979;
            result[3] += 6325920;
            result[4] += 0;
            result[5] += 887848;
          } else {
            result[0] += 75748;
            result[1] += 0;
            result[2] += 42040685;
            result[3] += 757489;
            result[4] += 0;
            result[5] += 75748;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 795364;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41955467;
            result[5] += 198841;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42640000))) ) ) {
            result[0] += 0;
            result[1] += 40423221;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2526451;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4955731;
            result[4] += 19822925;
            result[5] += 18171015;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 2095105;
            result[2] += 0;
            result[3] += 1047552;
            result[4] += 31426589;
            result[5] += 8380423;
          } else {
            result[0] += 1287570;
            result[1] += 91969;
            result[2] += 45984;
            result[3] += 1517493;
            result[4] += 2483171;
            result[5] += 37523483;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 306783;
            result[1] += 0;
            result[2] += 1840700;
            result[3] += 11044201;
            result[4] += 920350;
            result[5] += 28837637;
          } else {
            result[0] += 227246;
            result[1] += 0;
            result[2] += 3635951;
            result[3] += 29314856;
            result[4] += 0;
            result[5] += 9771618;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 1789569;
            result[1] += 25053975;
            result[2] += 0;
            result[3] += 3579139;
            result[4] += 12526987;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 6376807;
            result[1] += 12190955;
            result[2] += 562659;
            result[3] += 750212;
            result[4] += 20068187;
            result[5] += 3000850;
          } else {
            result[0] += 37433875;
            result[1] += 183859;
            result[2] += 735439;
            result[3] += 1213475;
            result[4] += 1948914;
            result[5] += 1434107;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 991146;
            result[1] += 1982292;
            result[2] += 2973438;
            result[3] += 15693149;
            result[4] += 4129776;
            result[5] += 17179869;
          } else {
            result[0] += 16886196;
            result[1] += 367091;
            result[2] += 16519104;
            result[3] += 3670912;
            result[4] += 3303820;
            result[5] += 2202547;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6871947;
            result[3] += 1717986;
            result[4] += 3435973;
            result[5] += 30923764;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5368709;
            result[3] += 27917287;
            result[4] += 0;
            result[5] += 9663676;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42d00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 22548578;
            result[3] += 8589934;
            result[4] += 0;
            result[5] += 11811160;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 14316557;
            result[2] += 28633115;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 13665805;
            result[4] += 0;
            result[5] += 29283867;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 0;
            result[4] += 0;
            result[5] += 7158278;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 359411;
            result[1] += 0;
            result[2] += 33604974;
            result[3] += 8266464;
            result[4] += 0;
            result[5] += 718822;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41686447;
            result[3] += 1263225;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42df0000))) ) ) {
            result[0] += 378411;
            result[1] += 0;
            result[2] += 39922383;
            result[3] += 2648878;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42109874;
            result[3] += 839798;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 2551465;
            result[1] += 283496;
            result[2] += 0;
            result[3] += 0;
            result[4] += 37704993;
            result[5] += 2409717;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 2045222;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10226112;
            result[5] += 30678337;
          } else {
            result[0] += 38428654;
            result[1] += 251167;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3516347;
            result[5] += 753503;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 2863311;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40086361;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3005507;
            result[4] += 1939037;
            result[5] += 38005128;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 7579354;
            result[1] += 1554739;
            result[2] += 1360396;
            result[3] += 7773696;
            result[4] += 12437914;
            result[5] += 12243571;
          } else {
            result[0] += 231534;
            result[1] += 578836;
            result[2] += 2083811;
            result[3] += 23732299;
            result[4] += 1273440;
            result[5] += 15049750;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5153960;
            result[4] += 37795712;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 36814005;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4090445;
            result[5] += 2045222;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 3789677;
            result[1] += 27790964;
            result[2] += 2526451;
            result[3] += 0;
            result[4] += 8842579;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 7040929;
            result[1] += 15490045;
            result[2] += 0;
            result[3] += 704092;
            result[4] += 16194138;
            result[5] += 3520464;
          } else {
            result[0] += 39093510;
            result[1] += 310265;
            result[2] += 443237;
            result[3] += 310265;
            result[4] += 1950243;
            result[5] += 842150;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12632256;
            result[3] += 12000643;
            result[4] += 0;
            result[5] += 18316772;
          } else {
            result[0] += 8778035;
            result[1] += 0;
            result[2] += 27588111;
            result[3] += 627002;
            result[4] += 2821511;
            result[5] += 3135012;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42be0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 28633115;
            result[5] += 14316557;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1789569;
            result[3] += 1789569;
            result[4] += 0;
            result[5] += 39370533;
          } else {
            result[0] += 0;
            result[1] += 14316557;
            result[2] += 28633115;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42800000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8589934;
            result[3] += 3435973;
            result[4] += 0;
            result[5] += 30923764;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12884901;
            result[3] += 26306674;
            result[4] += 536870;
            result[5] += 3221225;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35370318;
            result[3] += 7579354;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 24542670;
            result[3] += 18407002;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38654705;
            result[3] += 4294967;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33038209;
            result[3] += 0;
            result[4] += 3303820;
            result[5] += 6607641;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 77247;
            result[1] += 0;
            result[2] += 40246006;
            result[3] += 2549171;
            result[4] += 0;
            result[5] += 77247;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 178214;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42415029;
            result[5] += 356428;
          } else {
            result[0] += 2112278;
            result[1] += 704092;
            result[2] += 0;
            result[3] += 2816371;
            result[4] += 26755533;
            result[5] += 10561394;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 12271335;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 30678337;
            result[5] += 0;
          } else {
            result[0] += 41848399;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1101273;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 50174;
            result[1] += 401398;
            result[2] += 652273;
            result[3] += 1956819;
            result[4] += 2859966;
            result[5] += 37029040;
          } else {
            result[0] += 2708537;
            result[1] += 773867;
            result[2] += 1392962;
            result[3] += 16947708;
            result[4] += 3250245;
            result[5] += 17876350;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 298261;
            result[1] += 42551990;
            result[2] += 0;
            result[3] += 0;
            result[4] += 99420;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42420000))) ) ) {
            result[0] += 0;
            result[1] += 30678337;
            result[2] += 0;
            result[3] += 0;
            result[4] += 12271335;
            result[5] += 0;
          } else {
            result[0] += 4405094;
            result[1] += 2753184;
            result[2] += 0;
            result[3] += 550636;
            result[4] += 34690120;
            result[5] += 550636;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42940000))) ) ) {
            result[0] += 9795539;
            result[1] += 16577066;
            result[2] += 0;
            result[3] += 0;
            result[4] += 15070060;
            result[5] += 1507006;
          } else {
            result[0] += 38442083;
            result[1] += 127573;
            result[2] += 255146;
            result[3] += 1360781;
            result[4] += 1573403;
            result[5] += 1190684;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 3520464;
            result[1] += 704092;
            result[2] += 2112278;
            result[3] += 9857301;
            result[4] += 6336836;
            result[5] += 20418696;
          } else {
            result[0] += 8180890;
            result[1] += 0;
            result[2] += 26587892;
            result[3] += 4772185;
            result[4] += 0;
            result[5] += 3408704;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42be0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 0;
            result[4] += 0;
            result[5] += 21474836;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 7648571;
            result[4] += 0;
            result[5] += 35301101;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 466844;
            result[2] += 6068975;
            result[3] += 30344877;
            result[4] += 466844;
            result[5] += 5602131;
          } else {
            result[0] += 0;
            result[1] += 4294967;
            result[2] += 4294967;
            result[3] += 0;
            result[4] += 0;
            result[5] += 34359738;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 0;
            result[1] += 3303820;
            result[2] += 32377445;
            result[3] += 1321528;
            result[4] += 0;
            result[5] += 5946877;
          } else {
            result[0] += 0;
            result[1] += 18407002;
            result[2] += 0;
            result[3] += 6135667;
            result[4] += 18407002;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 0;
            result[4] += 0;
            result[5] += 7158278;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 707961;
            result[1] += 0;
            result[2] += 29734388;
            result[3] += 11799360;
            result[4] += 0;
            result[5] += 707961;
          } else {
            result[0] += 346368;
            result[1] += 0;
            result[2] += 37754147;
            result[3] += 4849156;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34896609;
            result[3] += 6710886;
            result[4] += 0;
            result[5] += 1342177;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 299300;
            result[1] += 0;
            result[2] += 41378343;
            result[3] += 1272028;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 300347;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42048630;
            result[5] += 600694;
          } else {
            result[0] += 0;
            result[1] += 26843545;
            result[2] += 0;
            result[3] += 0;
            result[4] += 16106127;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 2386092;
            result[2] += 0;
            result[3] += 0;
            result[4] += 9544371;
            result[5] += 31019208;
          } else {
            result[0] += 0;
            result[1] += 2477865;
            result[2] += 0;
            result[3] += 0;
            result[4] += 37167986;
            result[5] += 3303820;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x424a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 39881839;
            result[5] += 3067833;
          } else {
            result[0] += 342423;
            result[1] += 48917;
            result[2] += 48917;
            result[3] += 2739386;
            result[4] += 1320775;
            result[5] += 38449251;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 1022611;
            result[1] += 1022611;
            result[2] += 0;
            result[3] += 11248723;
            result[4] += 7669584;
            result[5] += 21986142;
          } else {
            result[0] += 21823077;
            result[1] += 232160;
            result[2] += 232160;
            result[3] += 5804009;
            result[4] += 5804009;
            result[5] += 9054255;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 19522578;
            result[2] += 0;
            result[3] += 0;
            result[4] += 23427094;
            result[5] += 0;
          } else {
            result[0] += 187553;
            result[1] += 42668343;
            result[2] += 0;
            result[3] += 0;
            result[4] += 93776;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 6135667;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 36814005;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
            result[0] += 42073149;
            result[1] += 876523;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1465859;
            result[1] += 1465859;
            result[2] += 1172687;
            result[3] += 21548129;
            result[4] += 1172687;
            result[5] += 16124450;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42890000))) ) ) {
            result[0] += 4908534;
            result[1] += 17997958;
            result[2] += 0;
            result[3] += 818089;
            result[4] += 17588913;
            result[5] += 1636178;
          } else {
            result[0] += 35617743;
            result[1] += 887549;
            result[2] += 2006633;
            result[3] += 1543564;
            result[4] += 2006633;
            result[5] += 887549;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4190211;
            result[4] += 1047552;
            result[5] += 37711907;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26843545;
            result[5] += 16106127;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34896609;
            result[3] += 2684354;
            result[4] += 0;
            result[5] += 5368709;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2928386;
            result[3] += 32212254;
            result[4] += 0;
            result[5] += 7809031;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4190211;
            result[3] += 28283930;
            result[4] += 0;
            result[5] += 10475529;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26247022;
            result[3] += 14316557;
            result[4] += 0;
            result[5] += 2386092;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
            result[0] += 0;
            result[1] += 1717986;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8589934;
            result[5] += 32641751;
          } else {
            result[0] += 0;
            result[1] += 9544371;
            result[2] += 4772185;
            result[3] += 28633115;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 28633115;
            result[4] += 0;
            result[5] += 14316557;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30678337;
            result[3] += 4601750;
            result[4] += 0;
            result[5] += 7669584;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 7579354;
            result[1] += 0;
            result[2] += 15158708;
            result[3] += 7579354;
            result[4] += 12632256;
            result[5] += 0;
          } else {
            result[0] += 39645851;
            result[1] += 3303820;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 624722;
            result[1] += 0;
            result[2] += 35296822;
            result[3] += 5778683;
            result[4] += 0;
            result[5] += 1249445;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41124800;
            result[3] += 1694524;
            result[4] += 0;
            result[5] += 130348;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 197924;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42355898;
            result[5] += 395849;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1385473;
            result[3] += 0;
            result[4] += 29094939;
            result[5] += 12469259;
          } else {
            result[0] += 0;
            result[1] += 29527900;
            result[2] += 0;
            result[3] += 13421772;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 32212254;
            result[5] += 10737418;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 64008;
            result[3] += 1600211;
            result[4] += 384050;
            result[5] += 40901402;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
            result[0] += 13913274;
            result[1] += 11493574;
            result[2] += 0;
            result[3] += 1209849;
            result[4] += 9678799;
            result[5] += 6654174;
          } else {
            result[0] += 113623;
            result[1] += 454493;
            result[2] += 227246;
            result[3] += 14089310;
            result[4] += 2613339;
            result[5] += 25451658;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x423a0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 3904515;
            result[2] += 0;
            result[3] += 0;
            result[4] += 39045157;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 0;
            result[1] += 42837824;
            result[2] += 0;
            result[3] += 0;
            result[4] += 111848;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 21474836;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42240000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 3303820;
            result[1] += 2033120;
            result[2] += 762420;
            result[3] += 2287260;
            result[4] += 33038209;
            result[5] += 1524840;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
            result[0] += 6645043;
            result[1] += 2917336;
            result[2] += 810371;
            result[3] += 10048602;
            result[4] += 7131266;
            result[5] += 15397052;
          } else {
            result[0] += 34759422;
            result[1] += 294849;
            result[2] += 1343201;
            result[3] += 2096704;
            result[4] += 2751924;
            result[5] += 1703572;
          }
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 32212254;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6800364;
            result[3] += 27559373;
            result[4] += 0;
            result[5] += 8589934;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 20541147;
            result[3] += 20541147;
            result[4] += 0;
            result[5] += 1867377;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36238786;
            result[3] += 4026531;
            result[4] += 0;
            result[5] += 2684354;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 32212254;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 23427094;
            result[3] += 19522578;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 550636;
            result[1] += 0;
            result[2] += 40747125;
            result[3] += 550636;
            result[4] += 0;
            result[5] += 1101273;
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42cf0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 34896609;
            result[4] += 0;
            result[5] += 8053063;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 27917287;
            result[3] += 9663676;
            result[4] += 0;
            result[5] += 5368709;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37092899;
            result[3] += 5406252;
            result[4] += 150173;
            result[5] += 300347;
          } else {
            result[0] += 394758;
            result[1] += 0;
            result[2] += 41686447;
            result[3] += 868467;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 4601750;
            result[1] += 0;
            result[2] += 38347922;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42240000))) ) ) {
            result[0] += 1282079;
            result[1] += 37180313;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4487279;
            result[5] += 0;
          } else {
            result[0] += 1595653;
            result[1] += 398913;
            result[2] += 0;
            result[3] += 0;
            result[4] += 39226481;
            result[5] += 1728624;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 3014012;
            result[1] += 753503;
            result[2] += 0;
            result[3] += 0;
            result[4] += 19591078;
            result[5] += 19591078;
          } else {
            result[0] += 38797080;
            result[1] += 355936;
            result[2] += 237291;
            result[3] += 0;
            result[4] += 2016973;
            result[5] += 1542391;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 831283;
            result[4] += 2216757;
            result[5] += 39901631;
          } else {
            result[0] += 1342177;
            result[1] += 268435;
            result[2] += 0;
            result[3] += 7247757;
            result[4] += 7247757;
            result[5] += 26843545;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 1101273;
            result[2] += 700810;
            result[3] += 20924199;
            result[4] += 3403936;
            result[5] += 16819452;
          } else {
            result[0] += 17735437;
            result[1] += 3846239;
            result[2] += 213679;
            result[3] += 5983039;
            result[4] += 9401918;
            result[5] += 5769359;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x425a0000))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d90000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 6781527;
            result[2] += 0;
            result[3] += 0;
            result[4] += 31647127;
            result[5] += 4521018;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 21474836;
            result[1] += 7158278;
            result[2] += 7158278;
            result[3] += 0;
            result[4] += 7158278;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429b0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42950000))) ) ) {
            result[0] += 42473210;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 476462;
            result[5] += 0;
          } else {
            result[0] += 29205777;
            result[1] += 0;
            result[2] += 1717986;
            result[3] += 1717986;
            result[4] += 10307921;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 17179869;
            result[4] += 4294967;
            result[5] += 21474836;
          } else {
            result[0] += 8947848;
            result[1] += 0;
            result[2] += 30422685;
            result[3] += 1789569;
            result[4] += 1789569;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 584349;
            result[1] += 0;
            result[2] += 10226112;
            result[3] += 26587892;
            result[4] += 0;
            result[5] += 5551318;
          } else {
            result[0] += 346368;
            result[1] += 0;
            result[2] += 24245783;
            result[3] += 11083786;
            result[4] += 0;
            result[5] += 7273734;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39925048;
            result[3] += 3024624;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 6442450;
            result[1] += 0;
            result[2] += 30601641;
            result[3] += 1610612;
            result[4] += 1610612;
            result[5] += 2684354;
          } else {
            result[0] += 40802189;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2147483;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 517465;
            result[1] += 0;
            result[2] += 26390762;
            result[3] += 11384250;
            result[4] += 0;
            result[5] += 4657193;
          } else {
            result[0] += 335544;
            result[1] += 0;
            result[2] += 40712710;
            result[3] += 1845493;
            result[4] += 0;
            result[5] += 55924;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 470251;
            result[1] += 470251;
            result[2] += 0;
            result[3] += 470251;
            result[4] += 38874156;
            result[5] += 2664760;
          } else {
            result[0] += 0;
            result[1] += 40086361;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2863311;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 2147483;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 15032385;
            result[5] += 25769803;
          } else {
            result[0] += 39695909;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3253763;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 1101273;
            result[2] += 0;
            result[3] += 2202547;
            result[4] += 27531841;
            result[5] += 12114010;
          } else {
            result[0] += 52441;
            result[1] += 0;
            result[2] += 104883;
            result[3] += 1573248;
            result[4] += 1625689;
            result[5] += 39593410;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 353495;
            result[1] += 706990;
            result[2] += 353495;
            result[3] += 9014128;
            result[4] += 2651214;
            result[5] += 29870348;
          } else {
            result[0] += 744792;
            result[1] += 744792;
            result[2] += 0;
            result[3] += 32522584;
            result[4] += 0;
            result[5] += 8937504;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 4697620;
            result[2] += 0;
            result[3] += 0;
            result[4] += 36909875;
            result[5] += 1342177;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 37993941;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4955731;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 8686450;
            result[1] += 5308386;
            result[2] += 2412902;
            result[3] += 2895483;
            result[4] += 21716126;
            result[5] += 1930322;
          } else {
            result[0] += 37957367;
            result[1] += 515079;
            result[2] += 356593;
            result[3] += 1188644;
            result[4] += 2060316;
            result[5] += 871672;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d70000))) ) ) {
            result[0] += 3006477;
            result[1] += 2720145;
            result[2] += 13887060;
            result[3] += 13171233;
            result[4] += 1861152;
            result[5] += 8303603;
          } else {
            result[0] += 36168145;
            result[1] += 0;
            result[2] += 5274521;
            result[3] += 1507006;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1827645;
            result[2] += 2741468;
            result[3] += 2741468;
            result[4] += 1827645;
            result[5] += 33811444;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 8589934;
            result[1] += 8589934;
            result[2] += 0;
            result[3] += 0;
            result[4] += 25769803;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6247225;
            result[3] += 33578835;
            result[4] += 0;
            result[5] += 3123612;
          } else {
            result[0] += 0;
            result[1] += 3530110;
            result[2] += 22945715;
            result[3] += 14120440;
            result[4] += 0;
            result[5] += 2353406;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37743651;
            result[3] += 2603010;
            result[4] += 0;
            result[5] += 2603010;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ed0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5368709;
            result[3] += 37580963;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 979840;
            result[1] += 0;
            result[2] += 36254096;
            result[3] += 5225815;
            result[4] += 0;
            result[5] += 489920;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 14316557;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33864165;
            result[3] += 9085507;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42090679;
            result[3] += 858993;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
            result[0] += 28633115;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 14316557;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42522737;
            result[3] += 426935;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
            result[0] += 1717986;
            result[1] += 429496;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40802189;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 23383710;
            result[5] += 19565962;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42580000))) ) ) {
            result[0] += 33875798;
            result[1] += 5444324;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2419699;
            result[5] += 1209849;
          } else {
            result[0] += 4849156;
            result[1] += 2078209;
            result[2] += 2078209;
            result[3] += 0;
            result[4] += 31173149;
            result[5] += 2770946;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 22973080;
            result[5] += 19976592;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2216076;
            result[4] += 1055274;
            result[5] += 39678321;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 1474666;
            result[1] += 184333;
            result[2] += 2027666;
            result[3] += 7926334;
            result[4] += 6083000;
            result[5] += 25253670;
          } else {
            result[0] += 619466;
            result[1] += 619466;
            result[2] += 1445421;
            result[3] += 28082478;
            result[4] += 619466;
            result[5] += 11563373;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42460000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 14316557;
            result[1] += 4772185;
            result[2] += 9544371;
            result[3] += 14316557;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 34702478;
            result[1] += 714042;
            result[2] += 357021;
            result[3] += 821149;
            result[4] += 4748384;
            result[5] += 1606596;
          } else {
            result[0] += 4367763;
            result[1] += 33486185;
            result[2] += 0;
            result[3] += 727960;
            result[4] += 4367763;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d20000))) ) ) {
            result[0] += 1915970;
            result[1] += 319328;
            result[2] += 6386568;
            result[3] += 13731122;
            result[4] += 3352948;
            result[5] += 17243734;
          } else {
            result[0] += 34670217;
            result[1] += 0;
            result[2] += 4139727;
            result[3] += 2069863;
            result[4] += 0;
            result[5] += 2069863;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4210752;
            result[3] += 29475265;
            result[4] += 0;
            result[5] += 9263654;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30064771;
            result[3] += 8589934;
            result[4] += 0;
            result[5] += 4294967;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34359738;
            result[3] += 4294967;
            result[4] += 0;
            result[5] += 4294967;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8589934;
            result[3] += 34359738;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41686447;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1263225;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42bc0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 631612;
            result[1] += 0;
            result[2] += 32212254;
            result[3] += 10105805;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7158278;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ed0000))) ) ) {
            result[0] += 347770;
            result[1] += 0;
            result[2] += 36863686;
            result[3] += 5564330;
            result[4] += 0;
            result[5] += 173885;
          } else {
            result[0] += 14316557;
            result[1] += 0;
            result[2] += 23860929;
            result[3] += 4772185;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 21474836;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 72550;
            result[1] += 0;
            result[2] += 41788870;
            result[3] += 1088251;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40708820;
            result[5] += 2240852;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6135667;
            result[3] += 0;
            result[4] += 18407002;
            result[5] += 18407002;
          } else {
            result[0] += 0;
            result[1] += 3067833;
            result[2] += 0;
            result[3] += 36814005;
            result[4] += 0;
            result[5] += 3067833;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2147483;
            result[4] += 21474836;
            result[5] += 19327352;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1032168;
            result[4] += 745454;
            result[5] += 41172049;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 18147749;
            result[1] += 0;
            result[2] += 0;
            result[3] += 604924;
            result[4] += 18752674;
            result[5] += 5444324;
          } else {
            result[0] += 0;
            result[1] += 190887;
            result[2] += 286331;
            result[3] += 18134306;
            result[4] += 2099761;
            result[5] += 22238386;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42aa0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42460000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35140641;
            result[5] += 7809031;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 202116;
            result[1] += 42242266;
            result[2] += 0;
            result[3] += 101058;
            result[4] += 404232;
            result[5] += 0;
          } else {
            result[0] += 16106127;
            result[1] += 21474836;
            result[2] += 0;
            result[3] += 5368709;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 3972224;
            result[1] += 10675352;
            result[2] += 0;
            result[3] += 248264;
            result[4] += 27805568;
            result[5] += 248264;
          } else {
            result[0] += 37797250;
            result[1] += 499861;
            result[2] += 153803;
            result[3] += 1307331;
            result[4] += 2076349;
            result[5] += 1115076;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 511305;
            result[1] += 1874787;
            result[2] += 3238268;
            result[3] += 17895697;
            result[4] += 2726963;
            result[5] += 16702650;
          } else {
            result[0] += 16374562;
            result[1] += 0;
            result[2] += 19595788;
            result[3] += 4831838;
            result[4] += 268435;
            result[5] += 1879048;
          }
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8589934;
            result[3] += 0;
            result[4] += 0;
            result[5] += 34359738;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4601750;
            result[3] += 36047046;
            result[4] += 0;
            result[5] += 2300875;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7158278;
            result[3] += 3579139;
            result[4] += 0;
            result[5] += 32212254;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 29331483;
            result[3] += 13618188;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41231686;
            result[3] += 1717986;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42950000))) ) ) {
            result[0] += 25769803;
            result[1] += 17179869;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 18253611;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 13958643;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30870077;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 1342177;
          } else {
            result[0] += 1952257;
            result[1] += 0;
            result[2] += 37743651;
            result[3] += 3253763;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 21474836;
            result[2] += 21474836;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39513699;
            result[3] += 3006477;
            result[4] += 0;
            result[5] += 429496;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42757073;
            result[3] += 192599;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1342177;
            result[3] += 0;
            result[4] += 37580963;
            result[5] += 4026531;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2260509;
            result[3] += 2260509;
            result[4] += 15823563;
            result[5] += 22605091;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x425e0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 38654705;
            result[5] += 4294967;
          } else {
            result[0] += 42139301;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 810371;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 123774;
            result[1] += 1155226;
            result[2] += 0;
            result[3] += 2599259;
            result[4] += 2392969;
            result[5] += 36678443;
          } else {
            result[0] += 604924;
            result[1] += 604924;
            result[2] += 4436116;
            result[3] += 19357599;
            result[4] += 806566;
            result[5] += 17139540;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42520000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 42652100;
            result[2] += 0;
            result[3] += 99190;
            result[4] += 198381;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42480000))) ) ) {
            result[0] += 3067833;
            result[1] += 38347922;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1533916;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 4294967;
            result[2] += 477218;
            result[3] += 954437;
            result[4] += 36268612;
            result[5] += 954437;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42d40000))) ) ) {
            result[0] += 35972903;
            result[1] += 34033;
            result[2] += 272264;
            result[3] += 1395353;
            result[4] += 3709599;
            result[5] += 1565518;
          } else {
            result[0] += 2863311;
            result[1] += 33405301;
            result[2] += 1908874;
            result[3] += 0;
            result[4] += 4772185;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 2839647;
            result[1] += 2839647;
            result[2] += 8163987;
            result[3] += 20232490;
            result[4] += 709911;
            result[5] += 8163987;
          } else {
            result[0] += 26463939;
            result[1] += 1735340;
            result[2] += 10845877;
            result[3] += 433835;
            result[4] += 1735340;
            result[5] += 1735340;
          }
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 32928082;
            result[4] += 0;
            result[5] += 10021590;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1717986;
            result[3] += 4294967;
            result[4] += 3435973;
            result[5] += 33500744;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 23427094;
            result[3] += 11713547;
            result[4] += 0;
            result[5] += 7809031;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17179869;
            result[3] += 4294967;
            result[4] += 0;
            result[5] += 21474836;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 11044201;
            result[3] += 28224070;
            result[4] += 0;
            result[5] += 3681400;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 25769803;
            result[5] += 17179869;
          } else {
            result[0] += 550636;
            result[1] += 0;
            result[2] += 32487573;
            result[3] += 8810189;
            result[4] += 550636;
            result[5] += 550636;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39370533;
            result[3] += 3579139;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33447532;
            result[3] += 8361883;
            result[4] += 0;
            result[5] += 1140256;
          } else {
            result[0] += 58835;
            result[1] += 0;
            result[2] += 41125782;
            result[3] += 1529714;
            result[4] += 0;
            result[5] += 235340;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 397682;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41557785;
            result[5] += 994205;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42580000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 5206020;
            result[1] += 3904515;
            result[2] += 0;
            result[3] += 0;
            result[4] += 27331610;
            result[5] += 6507526;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 38793252;
            result[5] += 4156419;
          } else {
            result[0] += 0;
            result[1] += 249417;
            result[2] += 0;
            result[3] += 1496504;
            result[4] += 1346853;
            result[5] += 39856897;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 375106;
            result[1] += 187553;
            result[2] += 937765;
            result[3] += 12003402;
            result[4] += 4501275;
            result[5] += 24944569;
          } else {
            result[0] += 842150;
            result[1] += 561433;
            result[2] += 1684300;
            result[3] += 30317416;
            result[4] += 561433;
            result[5] += 8982938;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42180000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 103493;
            result[1] += 42639193;
            result[2] += 0;
            result[3] += 0;
            result[4] += 206986;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42890000))) ) ) {
            result[0] += 11436303;
            result[1] += 5336941;
            result[2] += 0;
            result[3] += 762420;
            result[4] += 24397447;
            result[5] += 1016560;
          } else {
            result[0] += 34777508;
            result[1] += 696283;
            result[2] += 146585;
            result[3] += 1502505;
            result[4] += 3554708;
            result[5] += 2272081;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 842150;
            result[1] += 1010580;
            result[2] += 5558192;
            result[3] += 20716901;
            result[4] += 1852730;
            result[5] += 12969116;
          } else {
            result[0] += 18084072;
            result[1] += 0;
            result[2] += 19933580;
            result[3] += 2055008;
            result[4] += 1644006;
            result[5] += 1233004;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42960000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 1507006;
            result[2] += 753503;
            result[3] += 14316557;
            result[4] += 3014012;
            result[5] += 23358594;
          } else {
            result[0] += 12725829;
            result[1] += 3181457;
            result[2] += 19088743;
            result[3] += 4772185;
            result[4] += 0;
            result[5] += 3181457;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 16519104;
            result[4] += 0;
            result[5] += 26430567;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34235246;
            result[3] += 6224590;
            result[4] += 0;
            result[5] += 2489836;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42d60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 7158278;
            result[4] += 0;
            result[5] += 7158278;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7158278;
            result[3] += 33405301;
            result[4] += 0;
            result[5] += 2386092;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 21474836;
          } else {
            result[0] += 1227133;
            result[1] += 0;
            result[2] += 39268272;
            result[3] += 2454267;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36077725;
            result[3] += 4724464;
            result[4] += 0;
            result[5] += 2147483;
          } else {
            result[0] += 63913;
            result[1] += 0;
            result[2] += 41543582;
            result[3] += 1342177;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42540628;
            result[5] += 409044;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 10737418;
            result[1] += 565127;
            result[2] += 0;
            result[3] += 565127;
            result[4] += 18649200;
            result[5] += 12432800;
          } else {
            result[0] += 41218;
            result[1] += 577058;
            result[2] += 123655;
            result[3] += 2761639;
            result[4] += 1566302;
            result[5] += 37879797;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 10307921;
            result[4] += 1717986;
            result[5] += 30923764;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2962046;
            result[3] += 32582510;
            result[4] += 0;
            result[5] += 7405116;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a60000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42dd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42522313;
            result[2] += 0;
            result[3] += 0;
            result[4] += 427359;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
            result[0] += 1282079;
            result[1] += 9295078;
            result[2] += 0;
            result[3] += 961559;
            result[4] += 31410954;
            result[5] += 0;
          } else {
            result[0] += 34331939;
            result[1] += 1146714;
            result[2] += 138995;
            result[3] += 1389957;
            result[4] += 4065624;
            result[5] += 1876442;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 430573;
            result[1] += 215286;
            result[2] += 11517832;
            result[3] += 18729932;
            result[4] += 322929;
            result[5] += 11733118;
          } else {
            result[0] += 30023072;
            result[1] += 0;
            result[2] += 6254806;
            result[3] += 833974;
            result[4] += 5837819;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ae0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x428e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 842150;
            result[3] += 5895053;
            result[4] += 0;
            result[5] += 36212469;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42940000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32212254;
            result[3] += 0;
            result[4] += 0;
            result[5] += 10737418;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8589934;
            result[3] += 34359738;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8125613;
            result[3] += 9286415;
            result[4] += 2321603;
            result[5] += 23216039;
          } else {
            result[0] += 0;
            result[1] += 30064771;
            result[2] += 12884901;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13071639;
            result[3] += 24275902;
            result[4] += 0;
            result[5] += 5602131;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33746171;
            result[3] += 9203501;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d90000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42600000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x429e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 24542670;
            result[3] += 18407002;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 405185;
            result[1] += 0;
            result[2] += 28362991;
            result[3] += 12965939;
            result[4] += 0;
            result[5] += 1215556;
          } else {
            result[0] += 257183;
            result[1] += 0;
            result[2] += 39349101;
            result[3] += 3086204;
            result[4] += 0;
            result[5] += 257183;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 9761289;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 0;
            result[4] += 0;
            result[5] += 11713547;
          } else {
            result[0] += 148102;
            result[1] += 0;
            result[2] += 42357263;
            result[3] += 370255;
            result[4] += 0;
            result[5] += 74051;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 168430;
            result[1] += 673720;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41433802;
            result[5] += 673720;
          } else {
            result[0] += 2684354;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 18790481;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42890000))) ) ) {
            result[0] += 1507006;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17330569;
            result[5] += 24112097;
          } else {
            result[0] += 37827234;
            result[1] += 394033;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3152269;
            result[5] += 1576134;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42600000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 846298;
            result[4] += 846298;
            result[5] += 41257075;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 511305;
            result[2] += 511305;
            result[3] += 1533916;
            result[4] += 5368709;
            result[5] += 35024435;
          } else {
            result[0] += 295186;
            result[1] += 737966;
            result[2] += 295186;
            result[3] += 11807470;
            result[4] += 5460954;
            result[5] += 24352907;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 5368709;
            result[2] += 0;
            result[3] += 10737418;
            result[4] += 26843545;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42464913;
            result[2] += 0;
            result[3] += 0;
            result[4] += 484759;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 3702558;
            result[1] += 10367162;
            result[2] += 0;
            result[3] += 0;
            result[4] += 28139440;
            result[5] += 740511;
          } else {
            result[0] += 37947012;
            result[1] += 488064;
            result[2] += 122016;
            result[3] += 1016800;
            result[4] += 1992929;
            result[5] += 1382849;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 1117995;
            result[1] += 2142825;
            result[2] += 5124147;
            result[3] += 19658093;
            result[4] += 2235991;
            result[5] += 12670619;
          } else {
            result[0] += 29106389;
            result[1] += 2129735;
            result[2] += 7809031;
            result[3] += 1419823;
            result[4] += 2129735;
            result[5] += 354955;
          }
        }
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42aa0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9544371;
            result[3] += 4772185;
            result[4] += 0;
            result[5] += 28633115;
          } else {
            result[0] += 727960;
            result[1] += 0;
            result[2] += 8007566;
            result[3] += 32030264;
            result[4] += 0;
            result[5] += 2183881;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 28633115;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 7158278;
            result[4] += 0;
            result[5] += 14316557;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37896770;
            result[3] += 3789677;
            result[4] += 0;
            result[5] += 1263225;
          }
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c60000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 31745410;
            result[3] += 8403196;
            result[4] += 0;
            result[5] += 2801065;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1431655;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 5726623;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 153941;
            result[1] += 0;
            result[2] += 39716901;
            result[3] += 3078829;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 158778;
            result[1] += 0;
            result[2] += 42235168;
            result[3] += 555725;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42340000))) ) ) {
            result[0] += 0;
            result[1] += 10737418;
            result[2] += 0;
            result[3] += 0;
            result[4] += 16106127;
            result[5] += 16106127;
          } else {
            result[0] += 740511;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41468649;
            result[5] += 740511;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 727960;
            result[3] += 727960;
            result[4] += 29118422;
            result[5] += 12375329;
          } else {
            result[0] += 0;
            result[1] += 10105805;
            result[2] += 0;
            result[3] += 32843867;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42660000))) ) ) {
            result[0] += 41339060;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1610612;
            result[5] += 0;
          } else {
            result[0] += 3904515;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5856773;
            result[4] += 31236125;
            result[5] += 1952257;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1596642;
            result[4] += 2235298;
            result[5] += 39117731;
          } else {
            result[0] += 291513;
            result[1] += 485856;
            result[2] += 485856;
            result[3] += 18462529;
            result[4] += 777369;
            result[5] += 22446548;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42500000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42600000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 36507222;
            result[2] += 0;
            result[3] += 0;
            result[4] += 6442450;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42420000))) ) ) {
            result[0] += 0;
            result[1] += 39768215;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3181457;
            result[5] += 0;
          } else {
            result[0] += 4643207;
            result[1] += 1934669;
            result[2] += 0;
            result[3] += 773867;
            result[4] += 34824059;
            result[5] += 773867;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42950000))) ) ) {
            result[0] += 36387435;
            result[1] += 1388833;
            result[2] += 868020;
            result[3] += 1249950;
            result[4] += 2326295;
            result[5] += 729137;
          } else {
            result[0] += 5583457;
            result[1] += 286331;
            result[2] += 14889219;
            result[3] += 12455405;
            result[4] += 2004318;
            result[5] += 7730941;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42d70000))) ) ) {
            result[0] += 0;
            result[1] += 3681400;
            result[2] += 2454267;
            result[3] += 0;
            result[4] += 14725602;
            result[5] += 22088403;
          } else {
            result[0] += 5368709;
            result[1] += 0;
            result[2] += 37580963;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3655291;
            result[3] += 31983799;
            result[4] += 913822;
            result[5] += 6396759;
          } else {
            result[0] += 3904515;
            result[1] += 0;
            result[2] += 22450965;
            result[3] += 9761289;
            result[4] += 0;
            result[5] += 6832902;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
            result[0] += 32212254;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 10737418;
          } else {
            result[0] += 1590728;
            result[1] += 0;
            result[2] += 34200665;
            result[3] += 7158278;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7579354;
            result[3] += 27790964;
            result[4] += 0;
            result[5] += 7579354;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43020000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37011930;
            result[3] += 5937742;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37193531;
            result[3] += 5756141;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42438367;
            result[3] += 511305;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41819418;
            result[3] += 1130254;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ca0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 1533916;
            result[1] += 766958;
            result[2] += 0;
            result[3] += 2300875;
            result[4] += 28377462;
            result[5] += 9970459;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42460000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 12271335;
            result[2] += 0;
            result[3] += 0;
            result[4] += 30678337;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 390451;
            result[1] += 3123612;
            result[2] += 0;
            result[3] += 780903;
            result[4] += 23427094;
            result[5] += 15227611;
          } else {
            result[0] += 2383334;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1489584;
            result[4] += 1886806;
            result[5] += 37189948;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 727960;
            result[3] += 9463487;
            result[4] += 0;
            result[5] += 32758225;
          } else {
            result[0] += 2227020;
            result[1] += 0;
            result[2] += 2067947;
            result[3] += 26724240;
            result[4] += 159072;
            result[5] += 11771391;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42420000))) ) ) {
            result[0] += 1571329;
            result[1] += 35093025;
            result[2] += 0;
            result[3] += 1047552;
            result[4] += 5237764;
            result[5] += 0;
          } else {
            result[0] += 367091;
            result[1] += 3303820;
            result[2] += 367091;
            result[3] += 367091;
            result[4] += 35607848;
            result[5] += 2936729;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
            result[0] += 34414802;
            result[1] += 378562;
            result[2] += 344148;
            result[3] += 2305791;
            result[4] += 2099302;
            result[5] += 3407065;
          } else {
            result[0] += 7758650;
            result[1] += 831283;
            result[2] += 9282671;
            result[3] += 11360881;
            result[4] += 2770946;
            result[5] += 10945239;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x423c0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 39045157;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3904515;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x426a0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 42949672;
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
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4521018;
            result[3] += 30893624;
            result[4] += 0;
            result[5] += 7535030;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32212254;
            result[3] += 0;
            result[4] += 0;
            result[5] += 10737418;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42900000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 32212254;
          } else {
            result[0] += 1193046;
            result[1] += 0;
            result[2] += 33405301;
            result[3] += 7555960;
            result[4] += 0;
            result[5] += 795364;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39045157;
            result[3] += 0;
            result[4] += 0;
            result[5] += 3904515;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 156750;
            result[1] += 0;
            result[2] += 36522897;
            result[3] += 5486272;
            result[4] += 0;
            result[5] += 783753;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41954404;
            result[3] += 995268;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 316971;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42157243;
            result[5] += 475457;
          } else {
            result[0] += 753503;
            result[1] += 753503;
            result[2] += 0;
            result[3] += 0;
            result[4] += 24112097;
            result[5] += 17330569;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 21474836;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42620000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 8589934;
            result[2] += 0;
            result[3] += 0;
            result[4] += 25769803;
            result[5] += 8589934;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 339331;
            result[1] += 387807;
            result[2] += 48475;
            result[3] += 1939037;
            result[4] += 2035989;
            result[5] += 38199031;
          } else {
            result[0] += 949164;
            result[1] += 0;
            result[2] += 0;
            result[3] += 15661206;
            result[4] += 3084783;
            result[5] += 23254519;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426c0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x423a0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2260509;
            result[3] += 0;
            result[4] += 40689163;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 28633115;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14316557;
            result[5] += 0;
          } else {
            result[0] += 206986;
            result[1] += 42742686;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 36359511;
            result[1] += 681740;
            result[2] += 454493;
            result[3] += 0;
            result[4] += 3408704;
            result[5] += 2045222;
          } else {
            result[0] += 546433;
            result[1] += 1202153;
            result[2] += 2950740;
            result[3] += 19015885;
            result[4] += 4262181;
            result[5] += 14972277;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 5286113;
            result[1] += 10572227;
            result[2] += 1321528;
            result[3] += 0;
            result[4] += 25769803;
            result[5] += 0;
          } else {
            result[0] += 36648673;
            result[1] += 257183;
            result[2] += 1243054;
            result[3] += 514367;
            result[4] += 2486108;
            result[5] += 1800285;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42d20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 30455222;
            result[4] += 0;
            result[5] += 12494450;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5052902;
            result[3] += 27790964;
            result[4] += 0;
            result[5] += 10105805;
          } else {
            result[0] += 2424578;
            result[1] += 0;
            result[2] += 24245783;
            result[3] += 11776523;
            result[4] += 0;
            result[5] += 4502788;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35140641;
            result[3] += 7809031;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42d20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41819418;
            result[3] += 1130254;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 0;
            result[4] += 0;
            result[5] += 14316557;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 32212254;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 10737418;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34965438;
            result[3] += 7708915;
            result[4] += 0;
            result[5] += 275318;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34896609;
            result[3] += 0;
            result[4] += 0;
            result[5] += 8053063;
          } else {
            result[0] += 35791394;
            result[1] += 0;
            result[2] += 7158278;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 32212254;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41739823;
            result[3] += 1088864;
            result[4] += 0;
            result[5] += 120984;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42780000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x422e0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x424e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 368666;
            result[2] += 0;
            result[3] += 184333;
            result[4] += 40737672;
            result[5] += 1659000;
          } else {
            result[0] += 0;
            result[1] += 14316557;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 28633115;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 399996;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1249990;
            result[4] += 1749986;
            result[5] += 39549698;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1385473;
            result[3] += 19792476;
            result[4] += 0;
            result[5] += 21771723;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0;
            result[1] += 12271335;
            result[2] += 0;
            result[3] += 0;
            result[4] += 30678337;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 36814005;
            result[2] += 0;
            result[3] += 0;
            result[4] += 6135667;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42890000))) ) ) {
            result[0] += 4866219;
            result[1] += 8039840;
            result[2] += 0;
            result[3] += 211574;
            result[4] += 29197314;
            result[5] += 634724;
          } else {
            result[0] += 36530275;
            result[1] += 673859;
            result[2] += 531994;
            result[3] += 1312252;
            result[4] += 2801836;
            result[5] += 1099454;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 301754;
            result[1] += 0;
            result[2] += 9153208;
            result[3] += 19111095;
            result[4] += 2011694;
            result[5] += 12371919;
          } else {
            result[0] += 23264406;
            result[1] += 0;
            result[2] += 11632203;
            result[3] += 894784;
            result[4] += 5368709;
            result[5] += 1789569;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7405116;
            result[3] += 1481023;
            result[4] += 1481023;
            result[5] += 32582510;
          } else {
            result[0] += 0;
            result[1] += 596523;
            result[2] += 11333941;
            result[3] += 22966144;
            result[4] += 298261;
            result[5] += 7754802;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 31647127;
            result[3] += 11302545;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42800000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
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
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34996029;
            result[3] += 7953643;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c60000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 13215283;
            result[4] += 0;
            result[5] += 29734388;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36586758;
            result[3] += 6362914;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 12884901;
            result[1] += 0;
            result[2] += 4294967;
            result[3] += 25769803;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 21474836;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 21474836;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 34359738;
            result[1] += 0;
            result[2] += 8589934;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 236311;
            result[1] += 0;
            result[2] += 40527476;
            result[3] += 1949572;
            result[4] += 0;
            result[5] += 236311;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42c00000))) ) ) {
            result[0] += 401398;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42347574;
            result[5] += 200699;
          } else {
            result[0] += 0;
            result[1] += 36814005;
            result[2] += 0;
            result[3] += 0;
            result[4] += 6135667;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42620000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 6135667;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 16733638;
            result[5] += 20080366;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 1101273;
            result[2] += 0;
            result[3] += 2202547;
            result[4] += 17620378;
            result[5] += 22025473;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 128207;
            result[3] += 833351;
            result[4] += 705143;
            result[5] += 41282969;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 145592;
            result[2] += 0;
            result[3] += 7716381;
            result[4] += 3057434;
            result[5] += 32030264;
          } else {
            result[0] += 336860;
            result[1] += 842150;
            result[2] += 168430;
            result[3] += 25096083;
            result[4] += 1010580;
            result[5] += 15495568;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x423e0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 7279605;
            result[1] += 1455921;
            result[2] += 0;
            result[3] += 0;
            result[4] += 32030264;
            result[5] += 2183881;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0;
            result[1] += 42630739;
            result[2] += 0;
            result[3] += 0;
            result[4] += 318933;
            result[5] += 0;
          } else {
            result[0] += 1952257;
            result[1] += 18221073;
            result[2] += 0;
            result[3] += 0;
            result[4] += 22776341;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 17895697;
            result[1] += 5965232;
            result[2] += 894784;
            result[3] += 4772185;
            result[4] += 10737418;
            result[5] += 2684354;
          } else {
            result[0] += 39508724;
            result[1] += 165828;
            result[2] += 290200;
            result[3] += 829144;
            result[4] += 1326630;
            result[5] += 829144;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 412977;
            result[1] += 412977;
            result[2] += 11976351;
            result[3] += 15899638;
            result[4] += 1651910;
            result[5] += 12595817;
          } else {
            result[0] += 29183752;
            result[1] += 550636;
            result[2] += 4955731;
            result[3] += 0;
            result[4] += 8259552;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d80000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4772185;
            result[3] += 31669960;
            result[4] += 0;
            result[5] += 6507526;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 0;
            result[4] += 0;
            result[5] += 14316557;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
            result[0] += 28633115;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 580400;
            result[1] += 0;
            result[2] += 39467267;
            result[3] += 2902004;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 8589934;
            result[1] += 0;
            result[2] += 30064771;
            result[3] += 0;
            result[4] += 0;
            result[5] += 4294967;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 32212254;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34359738;
            result[3] += 8589934;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 25264513;
            result[3] += 12000643;
            result[4] += 0;
            result[5] += 5684515;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39114880;
            result[3] += 3834792;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 521655;
            result[1] += 0;
            result[2] += 37906998;
            result[3] += 4173247;
            result[4] += 0;
            result[5] += 347770;
          } else {
            result[0] += 79242;
            result[1] += 0;
            result[2] += 41998757;
            result[3] += 871672;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42e60000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42224783;
            result[5] += 724888;
          } else {
            result[0] += 2863311;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 28633115;
            result[5] += 11453246;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
            result[0] += 28633115;
            result[1] += 1908874;
            result[2] += 0;
            result[3] += 0;
            result[4] += 6681060;
            result[5] += 5726623;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 95869;
            result[3] += 1773591;
            result[4] += 2684354;
            result[5] += 38395857;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 604924;
            result[2] += 302462;
            result[3] += 11191111;
            result[4] += 1814774;
            result[5] += 29036398;
          } else {
            result[0] += 2515070;
            result[1] += 193466;
            result[2] += 967334;
            result[3] += 25731110;
            result[4] += 773867;
            result[5] += 12768821;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 3626861;
            result[1] += 16798094;
            result[2] += 0;
            result[3] += 0;
            result[4] += 22142942;
            result[5] += 381774;
          } else {
            result[0] += 38436572;
            result[1] += 338482;
            result[2] += 0;
            result[3] += 1165884;
            result[4] += 2294159;
            result[5] += 714574;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 425244;
            result[1] += 0;
            result[2] += 10772855;
            result[3] += 19844733;
            result[4] += 425244;
            result[5] += 11481595;
          } else {
            result[0] += 24898361;
            result[1] += 1867377;
            result[2] += 12449180;
            result[3] += 1244918;
            result[4] += 2178606;
            result[5] += 311229;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425c0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x41fc0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c60000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42cd0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2741468;
            result[3] += 25587039;
            result[4] += 913822;
            result[5] += 13707342;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4294967;
            result[3] += 4294967;
            result[4] += 0;
            result[5] += 34359738;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12884901;
            result[3] += 17179869;
            result[4] += 0;
            result[5] += 12884901;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39045157;
            result[3] += 3904515;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ca0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 34359738;
            result[2] += 8589934;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 22738062;
            result[3] += 15663998;
            result[4] += 2021161;
            result[5] += 2526451;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 1160801;
            result[1] += 580400;
            result[2] += 39467267;
            result[3] += 1741202;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 25769803;
            result[1] += 17179869;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 29283867;
            result[3] += 9761289;
            result[4] += 0;
            result[5] += 3904515;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36565262;
            result[3] += 5804009;
            result[4] += 0;
            result[5] += 580400;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7158278;
            result[5] += 35791394;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37896770;
            result[3] += 5052902;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41910567;
            result[3] += 1039104;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41304791;
            result[5] += 1644881;
          } else {
            result[0] += 0;
            result[1] += 38654705;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4294967;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 12884901;
            result[2] += 0;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 8589934;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42680000))) ) ) {
            result[0] += 21733569;
            result[1] += 517465;
            result[2] += 0;
            result[3] += 1034931;
            result[4] += 15006512;
            result[5] += 4657193;
          } else {
            result[0] += 431414;
            result[1] += 0;
            result[2] += 95869;
            result[3] += 1965331;
            result[4] += 2828159;
            result[5] += 37628898;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5237764;
            result[4] += 1047552;
            result[5] += 36664354;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 25576771;
            result[4] += 482580;
            result[5] += 16890320;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 38654705;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4294967;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 42744662;
            result[2] += 0;
            result[3] += 0;
            result[4] += 205010;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 19088743;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14316557;
            result[5] += 9544371;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 4772185;
            result[1] += 954437;
            result[2] += 1272582;
            result[3] += 954437;
            result[4] += 33405301;
            result[5] += 1590728;
          } else {
            result[0] += 1385473;
            result[1] += 41564199;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
            result[0] += 38024080;
            result[1] += 1044822;
            result[2] += 0;
            result[3] += 1007507;
            result[4] += 2276220;
            result[5] += 597041;
          } else {
            result[0] += 7545212;
            result[1] += 386933;
            result[2] += 12768821;
            result[3] += 11221085;
            result[4] += 1160801;
            result[5] += 9866816;
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 34359738;
            result[4] += 0;
            result[5] += 8589934;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cd0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42d00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 41415756;
            result[4] += 0;
            result[5] += 1533916;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 0;
            result[4] += 0;
            result[5] += 28633115;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5368709;
            result[3] += 0;
            result[4] += 0;
            result[5] += 37580963;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32212254;
            result[3] += 2684354;
            result[4] += 0;
            result[5] += 8053063;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6135667;
            result[3] += 0;
            result[4] += 36814005;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 16332974;
            result[3] += 19962524;
            result[4] += 0;
            result[5] += 6654174;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ea0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36686178;
            result[3] += 1789569;
            result[4] += 0;
            result[5] += 4473924;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 27531841;
            result[3] += 14867194;
            result[4] += 550636;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41026553;
            result[3] += 1923119;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 9203501;
            result[1] += 0;
            result[2] += 27610504;
            result[3] += 0;
            result[4] += 0;
            result[5] += 6135667;
          } else {
            result[0] += 126508;
            result[1] += 0;
            result[2] += 41178552;
            result[3] += 1581357;
            result[4] += 0;
            result[5] += 63254;
          }
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x423e0000))) ) ) {
            result[0] += 0;
            result[1] += 14316557;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 28633115;
          } else {
            result[0] += 0;
            result[1] += 171798;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42777874;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42930000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428c0000))) ) ) {
            result[0] += 2962046;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 34063533;
            result[5] += 5924092;
          } else {
            result[0] += 0;
            result[1] += 2863311;
            result[2] += 0;
            result[3] += 1431655;
            result[4] += 14316557;
            result[5] += 24338148;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42740000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 34768782;
            result[5] += 8180890;
          } else {
            result[0] += 125217;
            result[1] += 0;
            result[2] += 125217;
            result[3] += 1502612;
            result[4] += 500870;
            result[5] += 40695754;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 750868;
            result[1] += 150173;
            result[2] += 600694;
            result[3] += 6457468;
            result[4] += 3754342;
            result[5] += 31236125;
          } else {
            result[0] += 3882456;
            result[1] += 849287;
            result[2] += 121326;
            result[3] += 17471053;
            result[4] += 5459704;
            result[5] += 15165844;
          }
        }
      }
    }
  } else {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426c0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42980000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x420a0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42460000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 21474836;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42850000))) ) ) {
            result[0] += 4521018;
            result[1] += 20344581;
            result[2] += 753503;
            result[3] += 0;
            result[4] += 16577066;
            result[5] += 753503;
          } else {
            result[0] += 39332376;
            result[1] += 412097;
            result[2] += 274731;
            result[3] += 778405;
            result[4] += 1694176;
            result[5] += 457885;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 2120971;
            result[2] += 6628035;
            result[3] += 15907286;
            result[4] += 2386092;
            result[5] += 15907286;
          } else {
            result[0] += 26564248;
            result[1] += 4220488;
            result[2] += 7696184;
            result[3] += 1737848;
            result[4] += 2730904;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10290025;
            result[3] += 21474836;
            result[4] += 1565873;
            result[5] += 9618937;
          } else {
            result[0] += 1520342;
            result[1] += 0;
            result[2] += 26225906;
            result[3] += 8741968;
            result[4] += 1140256;
            result[5] += 5321198;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42f20000))) ) ) {
            result[0] += 648485;
            result[1] += 0;
            result[2] += 38260626;
            result[3] += 3342192;
            result[4] += 0;
            result[5] += 698368;
          } else {
            result[0] += 13215283;
            result[1] += 0;
            result[2] += 29734388;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42f00000))) ) ) {
            result[0] += 0;
            result[1] += 474582;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42475090;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 7809031;
            result[4] += 19522578;
            result[5] += 15618062;
          } else {
            result[0] += 0;
            result[1] += 36814005;
            result[2] += 0;
            result[3] += 6135667;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 242311;
            result[1] += 0;
            result[2] += 0;
            result[3] += 787511;
            result[4] += 2120223;
            result[5] += 39799626;
          } else {
            result[0] += 5917510;
            result[1] += 190887;
            result[2] += 0;
            result[3] += 5153960;
            result[4] += 3054198;
            result[5] += 28633115;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 1124336;
            result[1] += 2923276;
            result[2] += 899469;
            result[3] += 9219563;
            result[4] += 3373010;
            result[5] += 25410015;
          } else {
            result[0] += 1291719;
            result[1] += 0;
            result[2] += 322929;
            result[3] += 32292987;
            result[4] += 322929;
            result[5] += 8719106;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 26843545;
            result[2] += 0;
            result[3] += 0;
            result[4] += 16106127;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42746119;
            result[2] += 0;
            result[3] += 0;
            result[4] += 203552;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
            result[0] += 5710072;
            result[1] += 9682296;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26564248;
            result[5] += 993056;
          } else {
            result[0] += 37968396;
            result[1] += 442780;
            result[2] += 110695;
            result[3] += 1328340;
            result[4] += 1918713;
            result[5] += 1180747;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 1215556;
            result[1] += 2160989;
            result[2] += 4186917;
            result[3] += 14991866;
            result[4] += 4186917;
            result[5] += 16207423;
          } else {
            result[0] += 13550966;
            result[1] += 0;
            result[2] += 24116126;
            result[3] += 3904515;
            result[4] += 459354;
            result[5] += 918709;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5895053;
            result[3] += 33686018;
            result[4] += 0;
            result[5] += 3368601;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 23427094;
            result[3] += 7809031;
            result[4] += 0;
            result[5] += 11713547;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39370533;
            result[3] += 3579139;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4772185;
            result[3] += 38177487;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c40000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4772185;
            result[3] += 0;
            result[4] += 0;
            result[5] += 38177487;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 1385473;
            result[1] += 0;
            result[2] += 33251359;
            result[3] += 0;
            result[4] += 2770946;
            result[5] += 5541893;
          } else {
            result[0] += 8589934;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 34359738;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35068999;
            result[3] += 6107522;
            result[4] += 0;
            result[5] += 1773151;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 433835;
            result[1] += 0;
            result[2] += 36008311;
            result[3] += 6073691;
            result[4] += 433835;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41893533;
            result[3] += 1056139;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 711873;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41288635;
            result[5] += 949164;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 2651214;
            result[1] += 0;
            result[2] += 1060485;
            result[3] += 3181457;
            result[4] += 27572629;
            result[5] += 8483886;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9544371;
            result[3] += 33405301;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42620000))) ) ) {
            result[0] += 27076967;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14939016;
            result[5] += 933688;
          } else {
            result[0] += 0;
            result[1] += 87119;
            result[2] += 87119;
            result[3] += 2439332;
            result[4] += 2570010;
            result[5] += 37766091;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
            result[0] += 19903506;
            result[1] += 12570635;
            result[2] += 7332870;
            result[3] += 0;
            result[4] += 0;
            result[5] += 3142658;
          } else {
            result[0] += 0;
            result[1] += 373475;
            result[2] += 3174541;
            result[3] += 21848311;
            result[4] += 1120426;
            result[5] += 16432918;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b60000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 36984440;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5965232;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 32212254;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10737418;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d70000))) ) ) {
            result[0] += 35231373;
            result[1] += 765176;
            result[2] += 731907;
            result[3] += 798444;
            result[4] += 3958955;
            result[5] += 1463815;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 1867377;
            result[1] += 848807;
            result[2] += 1697615;
            result[3] += 17824963;
            result[4] += 5771892;
            result[5] += 14939016;
          } else {
            result[0] += 16152013;
            result[1] += 0;
            result[2] += 19088743;
            result[3] += 5139277;
            result[4] += 1101273;
            result[5] += 1468364;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b90000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 21474836;
            result[4] += 21474836;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1651910;
            result[3] += 0;
            result[4] += 0;
            result[5] += 41297762;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42d20000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9698313;
            result[3] += 31865886;
            result[4] += 0;
            result[5] += 1385473;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8312839;
            result[3] += 12469259;
            result[4] += 0;
            result[5] += 22167573;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ca0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5602131;
            result[3] += 22408525;
            result[4] += 0;
            result[5] += 14939016;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32856499;
            result[3] += 9663676;
            result[4] += 0;
            result[5] += 429496;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ee0000))) ) ) {
            result[0] += 622459;
            result[1] += 0;
            result[2] += 36102623;
            result[3] += 6224590;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42980000))) ) ) {
            result[0] += 5541893;
            result[1] += 0;
            result[2] += 31865886;
            result[3] += 0;
            result[4] += 0;
            result[5] += 5541893;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41364050;
            result[3] += 1585621;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42340000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 394033;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41964588;
            result[5] += 591050;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42620000))) ) ) {
            result[0] += 40952013;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1997659;
            result[5] += 0;
          } else {
            result[0] += 1997659;
            result[1] += 0;
            result[2] += 3995318;
            result[3] += 10987125;
            result[4] += 14982444;
            result[5] += 10987125;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 3734754;
            result[2] += 0;
            result[3] += 1867377;
            result[4] += 23342213;
            result[5] += 14005328;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 96191;
            result[3] += 2308605;
            result[4] += 2500988;
            result[5] += 38043887;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 1130254;
            result[2] += 0;
            result[3] += 6781527;
            result[4] += 1507006;
            result[5] += 33530885;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 882527;
            result[3] += 28829232;
            result[4] += 1176703;
            result[5] += 12061209;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x423e0000))) ) ) {
            result[0] += 4908534;
            result[1] += 38041138;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 33628539;
            result[1] += 856358;
            result[2] += 296431;
            result[3] += 1646843;
            result[4] += 5566330;
            result[5] += 955169;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 734182;
            result[1] += 367091;
            result[2] += 3670912;
            result[3] += 16152013;
            result[4] += 367091;
            result[5] += 21658382;
          } else {
            result[0] += 13937311;
            result[1] += 1137739;
            result[2] += 19626009;
            result[3] += 3982088;
            result[4] += 3128784;
            result[5] += 1137739;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 11563373;
            result[1] += 24778657;
            result[2] += 6607641;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4772185;
            result[5] += 38177487;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1282079;
            result[3] += 36539274;
            result[4] += 0;
            result[5] += 5128319;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 11969580;
            result[3] += 11969580;
            result[4] += 0;
            result[5] += 19010510;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39045157;
            result[3] += 3904515;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3303820;
            result[3] += 6607641;
            result[4] += 1651910;
            result[5] += 31386299;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12271335;
            result[3] += 22497447;
            result[4] += 0;
            result[5] += 8180890;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 4539396;
            result[1] += 1396737;
            result[2] += 29331483;
            result[3] += 3142658;
            result[4] += 1047552;
            result[5] += 3491843;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 29118422;
            result[3] += 13103290;
            result[4] += 0;
            result[5] += 727960;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38941036;
            result[3] += 3722304;
            result[4] += 0;
            result[5] += 286331;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40051228;
            result[3] += 2898444;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42432207;
            result[3] += 517465;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40592678;
            result[5] += 2356994;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 16919568;
            result[5] += 26030104;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42890000))) ) ) {
            result[0] += 2431113;
            result[1] += 5672598;
            result[2] += 0;
            result[3] += 0;
            result[4] += 31604476;
            result[5] += 3241484;
          } else {
            result[0] += 30811721;
            result[1] += 4668442;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4668442;
            result[5] += 2801065;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 29878033;
            result[5] += 13071639;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 106442;
            result[3] += 2288520;
            result[4] += 1170870;
            result[5] += 39383838;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 2898444;
            result[2] += 526989;
            result[3] += 11593776;
            result[4] += 790484;
            result[5] += 27139977;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 40298458;
            result[4] += 0;
            result[5] += 2651214;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 21474836;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42300000))) ) ) {
            result[0] += 0;
            result[1] += 40952013;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1997659;
            result[5] += 0;
          } else {
            result[0] += 1544952;
            result[1] += 2471923;
            result[2] += 926971;
            result[3] += 926971;
            result[4] += 35842892;
            result[5] += 1235961;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 37407779;
            result[1] += 145839;
            result[2] += 72919;
            result[3] += 1203174;
            result[4] += 3281384;
            result[5] += 838575;
          } else {
            result[0] += 4443069;
            result[1] += 38506603;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 648786;
            result[1] += 1297573;
            result[2] += 11029372;
            result[3] += 11937673;
            result[4] += 4152234;
            result[5] += 13884033;
          } else {
            result[0] += 31426589;
            result[1] += 1571329;
            result[2] += 4713988;
            result[3] += 0;
            result[4] += 5237764;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 660764;
            result[3] += 3303820;
            result[4] += 2643056;
            result[5] += 36342030;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 6927366;
            result[1] += 15240206;
            result[2] += 9698313;
            result[3] += 0;
            result[4] += 6927366;
            result[5] += 4156419;
          } else {
            result[0] += 277094;
            result[1] += 0;
            result[2] += 7204461;
            result[3] += 28540750;
            result[4] += 0;
            result[5] += 6927366;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 2454267;
            result[1] += 0;
            result[2] += 23929103;
            result[3] += 14725602;
            result[4] += 613566;
            result[5] += 1227133;
          } else {
            result[0] += 550636;
            result[1] += 0;
            result[2] += 39645851;
            result[3] += 1101273;
            result[4] += 0;
            result[5] += 1651910;
          }
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 19822925;
            result[3] += 23126746;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 4156419;
            result[1] += 0;
            result[2] += 34636833;
            result[3] += 0;
            result[4] += 0;
            result[5] += 4156419;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38311914;
            result[3] += 4637758;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42f30000))) ) ) {
            result[0] += 37580963;
            result[1] += 0;
            result[2] += 5368709;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 28633115;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 322323;
            result[1] += 0;
            result[2] += 41740957;
            result[3] += 886390;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42240000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 25769803;
            result[5] += 17179869;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5368709;
            result[4] += 37580963;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 34107093;
            result[5] += 8842579;
          } else {
            result[0] += 234954;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1409726;
            result[4] += 1550699;
            result[5] += 39754292;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1717986;
            result[3] += 5153960;
            result[4] += 6012954;
            result[5] += 30064771;
          } else {
            result[0] += 561433;
            result[1] += 0;
            result[2] += 0;
            result[3] += 28071681;
            result[4] += 1403584;
            result[5] += 12912973;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 1201389;
            result[1] += 4805557;
            result[2] += 0;
            result[3] += 2102431;
            result[4] += 33038209;
            result[5] += 1802084;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42900000))) ) ) {
            result[0] += 0;
            result[1] += 16106127;
            result[2] += 0;
            result[3] += 21474836;
            result[4] += 5368709;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42739135;
            result[2] += 0;
            result[3] += 0;
            result[4] += 210537;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
            result[0] += 36814005;
            result[1] += 1234186;
            result[2] += 246837;
            result[3] += 952086;
            result[4] += 2856259;
            result[5] += 846298;
          } else {
            result[0] += 8351325;
            result[1] += 4175662;
            result[2] += 5070447;
            result[3] += 11333941;
            result[4] += 2982616;
            result[5] += 11035679;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 2109808;
            result[1] += 452101;
            result[2] += 2561910;
            result[3] += 19138977;
            result[4] += 4370317;
            result[5] += 14316557;
          } else {
            result[0] += 12164936;
            result[1] += 0;
            result[2] += 24081608;
            result[3] += 4965280;
            result[4] += 248264;
            result[5] += 1489584;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ac0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 31236125;
            result[2] += 0;
            result[3] += 0;
            result[4] += 11713547;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41082295;
            result[3] += 0;
            result[4] += 1867377;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 1789569;
            result[2] += 0;
            result[3] += 3579139;
            result[4] += 2684354;
            result[5] += 34896609;
          } else {
            result[0] += 14316557;
            result[1] += 0;
            result[2] += 23860929;
            result[3] += 0;
            result[4] += 0;
            result[5] += 4772185;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 9544371;
            result[4] += 0;
            result[5] += 4772185;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6135667;
            result[3] += 26076587;
            result[4] += 0;
            result[5] += 10737418;
          } else {
            result[0] += 2078209;
            result[1] += 0;
            result[2] += 28402203;
            result[3] += 4849156;
            result[4] += 692736;
            result[5] += 6927366;
          }
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 15618062;
            result[3] += 27331610;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 195225;
            result[1] += 0;
            result[2] += 36311996;
            result[3] += 6247225;
            result[4] += 0;
            result[5] += 195225;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4294967;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 17179869;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 144611;
            result[1] += 0;
            result[2] += 41648167;
            result[3] += 1084587;
            result[4] += 0;
            result[5] += 72305;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 425244;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42099184;
            result[5] += 425244;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 21474836;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2147483;
            result[3] += 0;
            result[4] += 19327352;
            result[5] += 21474836;
          } else {
            result[0] += 0;
            result[1] += 11453246;
            result[2] += 0;
            result[3] += 31496426;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 33405301;
            result[5] += 9544371;
          } else {
            result[0] += 42107522;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 842150;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
            result[0] += 45545;
            result[1] += 136637;
            result[2] += 0;
            result[3] += 2550563;
            result[4] += 2459472;
            result[5] += 37757453;
          } else {
            result[0] += 0;
            result[1] += 171114;
            result[2] += 1882256;
            result[3] += 19335908;
            result[4] += 1368913;
            result[5] += 20191479;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ae0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 3435973;
            result[2] += 0;
            result[3] += 0;
            result[4] += 39513699;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428e0000))) ) ) {
            result[0] += 195225;
            result[1] += 41875931;
            result[2] += 97612;
            result[3] += 195225;
            result[4] += 585677;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42850000))) ) ) {
            result[0] += 3932012;
            result[1] += 19962524;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17240361;
            result[5] += 1814774;
          } else {
            result[0] += 37736578;
            result[1] += 466844;
            result[2] += 350133;
            result[3] += 894784;
            result[4] += 2528739;
            result[5] += 972592;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 2221534;
            result[1] += 185127;
            result[2] += 10737418;
            result[3] += 15365615;
            result[4] += 2591790;
            result[5] += 11848185;
          } else {
            result[0] += 31474569;
            result[1] += 0;
            result[2] += 6885062;
            result[3] += 655720;
            result[4] += 3606461;
            result[5] += 327860;
          }
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 34107093;
            result[4] += 2526451;
            result[5] += 6316128;
          } else {
            result[0] += 0;
            result[1] += 1717986;
            result[2] += 2576980;
            result[3] += 13743895;
            result[4] += 3435973;
            result[5] += 21474836;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2684354;
            result[3] += 0;
            result[4] += 40265318;
            result[5] += 0;
          } else {
            result[0] += 2526451;
            result[1] += 631612;
            result[2] += 0;
            result[3] += 631612;
            result[4] += 5052902;
            result[5] += 34107093;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17685159;
            result[3] += 10105805;
            result[4] += 0;
            result[5] += 15158708;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37580963;
            result[3] += 1789569;
            result[4] += 3579139;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5368709;
            result[4] += 0;
            result[5] += 37580963;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1867377;
            result[3] += 39214918;
            result[4] += 0;
            result[5] += 1867377;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 19181407;
            result[3] += 17096471;
            result[4] += 0;
            result[5] += 6671793;
          } else {
            result[0] += 223696;
            result[1] += 0;
            result[2] += 36686178;
            result[3] += 5816101;
            result[4] += 0;
            result[5] += 223696;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 5368709;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37580963;
            result[3] += 4473924;
            result[4] += 0;
            result[5] += 894784;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 7158278;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 141982;
            result[1] += 0;
            result[2] += 42239761;
            result[3] += 567929;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
            result[0] += 599297;
            result[1] += 199765;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41950843;
            result[5] += 199765;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 30317416;
            result[5] += 12632256;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 622459;
            result[1] += 622459;
            result[2] += 0;
            result[3] += 4357213;
            result[4] += 16806393;
            result[5] += 20541147;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6710886;
            result[3] += 0;
            result[4] += 34896609;
            result[5] += 1342177;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1248537;
            result[4] += 998829;
            result[5] += 40702306;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 205500;
            result[1] += 0;
            result[2] += 616502;
            result[3] += 6576026;
            result[4] += 7603530;
            result[5] += 27948112;
          } else {
            result[0] += 367091;
            result[1] += 1284819;
            result[2] += 367091;
            result[3] += 24228020;
            result[4] += 734182;
            result[5] += 15968468;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42480000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 21474836;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42842298;
            result[2] += 0;
            result[3] += 0;
            result[4] += 107374;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 913822;
            result[1] += 456911;
            result[2] += 1370734;
            result[3] += 1370734;
            result[4] += 38837470;
            result[5] += 0;
          } else {
            result[0] += 1952257;
            result[1] += 39045157;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1952257;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 2342709;
            result[1] += 0;
            result[2] += 4685418;
            result[3] += 3123612;
            result[4] += 11713547;
            result[5] += 21084384;
          } else {
            result[0] += 38173172;
            result[1] += 970833;
            result[2] += 271833;
            result[3] += 776666;
            result[4] += 2563000;
            result[5] += 194166;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 1662567;
            result[1] += 1939662;
            result[2] += 8035745;
            result[3] += 16625679;
            result[4] += 2493851;
            result[5] += 12192165;
          } else {
            result[0] += 35204649;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7745022;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42940000))) ) ) {
            result[0] += 0;
            result[1] += 6607641;
            result[2] += 0;
            result[3] += 3303820;
            result[4] += 19822925;
            result[5] += 13215283;
          } else {
            result[0] += 0;
            result[1] += 1047552;
            result[2] += 0;
            result[3] += 3142658;
            result[4] += 0;
            result[5] += 38759460;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 14316557;
            result[4] += 0;
            result[5] += 28633115;
          } else {
            result[0] += 0;
            result[1] += 526989;
            result[2] += 8431837;
            result[3] += 30301916;
            result[4] += 0;
            result[5] += 3688928;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 16106127;
            result[2] += 16106127;
            result[3] += 5368709;
            result[4] += 5368709;
            result[5] += 0;
          } else {
            result[0] += 40265318;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2684354;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2863311;
            result[3] += 20043180;
            result[4] += 0;
            result[5] += 20043180;
          } else {
            result[0] += 3383913;
            result[1] += 0;
            result[2] += 32277329;
            result[3] += 6767827;
            result[4] += 0;
            result[5] += 520602;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9544371;
            result[3] += 28633115;
            result[4] += 0;
            result[5] += 4772185;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 29386618;
            result[3] += 6781527;
            result[4] += 0;
            result[5] += 6781527;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 3681400;
            result[2] += 26996937;
            result[3] += 1227133;
            result[4] += 0;
            result[5] += 11044201;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37452114;
            result[3] += 4466765;
            result[4] += 0;
            result[5] += 1030792;
          } else {
            result[0] += 157613;
            result[1] += 0;
            result[2] += 42082798;
            result[3] += 709260;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 197016;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42752656;
            result[5] += 0;
          } else {
            result[0] += 4090445;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 30678337;
            result[5] += 8180890;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42890000))) ) ) {
            result[0] += 987348;
            result[1] += 1481023;
            result[2] += 0;
            result[3] += 2468372;
            result[4] += 20734324;
            result[5] += 17278604;
          } else {
            result[0] += 36814005;
            result[1] += 0;
            result[2] += 0;
            result[3] += 876523;
            result[4] += 3067833;
            result[5] += 2191309;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 976128;
            result[2] += 976128;
            result[3] += 2928386;
            result[4] += 33188383;
            result[5] += 4880644;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 163306;
            result[2] += 0;
            result[3] += 2177423;
            result[4] += 1197582;
            result[5] += 39411360;
          } else {
            result[0] += 1376592;
            result[1] += 0;
            result[2] += 275318;
            result[3] += 8534870;
            result[4] += 7708915;
            result[5] += 25053975;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 1952257;
            result[1] += 1952257;
            result[2] += 0;
            result[3] += 0;
            result[4] += 38069028;
            result[5] += 976128;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 102261;
            result[1] += 42233845;
            result[2] += 0;
            result[3] += 204522;
            result[4] += 409044;
            result[5] += 0;
          } else {
            result[0] += 32212254;
            result[1] += 10737418;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 34896609;
            result[1] += 4026531;
            result[2] += 2013265;
            result[3] += 0;
            result[4] += 2013265;
            result[5] += 0;
          } else {
            result[0] += 374561;
            result[1] += 1872805;
            result[2] += 6117831;
            result[3] += 18478347;
            result[4] += 873975;
            result[5] += 15232151;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 4697620;
            result[1] += 17448304;
            result[2] += 1342177;
            result[3] += 1342177;
            result[4] += 16106127;
            result[5] += 2013265;
          } else {
            result[0] += 35679546;
            result[1] += 111848;
            result[2] += 1789569;
            result[3] += 2236962;
            result[4] += 1938700;
            result[5] += 1193046;
          }
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3303820;
            result[4] += 16519104;
            result[5] += 23126746;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 34359738;
            result[4] += 0;
            result[5] += 8589934;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5541893;
            result[3] += 7966471;
            result[4] += 2078209;
            result[5] += 27363098;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 19522578;
            result[3] += 23427094;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4772185;
            result[3] += 24815366;
            result[4] += 1908874;
            result[5] += 11453246;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 27662501;
            result[3] += 10919408;
            result[4] += 0;
            result[5] += 4367763;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 16702650;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 0;
            result[4] += 11930464;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35257194;
            result[3] += 0;
            result[4] += 1282079;
            result[5] += 6410398;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7809031;
            result[3] += 35140641;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 29234651;
            result[3] += 12993178;
            result[4] += 0;
            result[5] += 721843;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41231686;
            result[3] += 1717986;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 14316557;
            result[1] += 0;
            result[2] += 23860929;
            result[3] += 4772185;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 60322;
            result[1] += 0;
            result[2] += 41320963;
            result[3] += 1568386;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 19088743;
            result[5] += 23860929;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42990000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 28633115;
            result[2] += 0;
            result[3] += 5206020;
            result[4] += 7809031;
            result[5] += 1301505;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 20104102;
            result[5] += 22845570;
          } else {
            result[0] += 208831;
            result[1] += 0;
            result[2] += 69610;
            result[3] += 765715;
            result[4] += 69610;
            result[5] += 41835905;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 36342030;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3303820;
            result[5] += 3303820;
          } else {
            result[0] += 738919;
            result[1] += 738919;
            result[2] += 923648;
            result[3] += 13577638;
            result[4] += 3694595;
            result[5] += 23275951;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 3067833;
            result[2] += 0;
            result[3] += 6135667;
            result[4] += 33746171;
            result[5] += 0;
          } else {
            result[0] += 3681400;
            result[1] += 36814005;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2454267;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 32212254;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10737418;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 24341500;
            result[1] += 1307601;
            result[2] += 0;
            result[3] += 2916956;
            result[4] += 12573089;
            result[5] += 1810524;
          } else {
            result[0] += 39100409;
            result[1] += 861019;
            result[2] += 0;
            result[3] += 506481;
            result[4] += 2228520;
            result[5] += 253240;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 1651910;
            result[1] += 3166161;
            result[2] += 7708915;
            result[3] += 11012736;
            result[4] += 6057005;
            result[5] += 13352943;
          } else {
            result[0] += 28785419;
            result[1] += 0;
            result[2] += 11879696;
            result[3] += 456911;
            result[4] += 1827645;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42840000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 39045157;
            result[5] += 3904515;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3841027;
            result[3] += 22347797;
            result[4] += 0;
            result[5] += 16760847;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c40000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42740000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3904515;
            result[4] += 39045157;
            result[5] += 0;
          } else {
            result[0] += 2260509;
            result[1] += 0;
            result[2] += 4521018;
            result[3] += 2260509;
            result[4] += 2260509;
            result[5] += 31647127;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37223049;
            result[3] += 2863311;
            result[4] += 0;
            result[5] += 2863311;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 0;
            result[4] += 0;
            result[5] += 28633115;
          }
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 16106127;
            result[4] += 0;
            result[5] += 26843545;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6442450;
            result[3] += 34359738;
            result[4] += 0;
            result[5] += 2147483;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21069650;
            result[3] += 17017794;
            result[4] += 0;
            result[5] += 4862227;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42256936;
            result[3] += 692736;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37223049;
            result[3] += 0;
            result[4] += 5726623;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 271833;
            result[1] += 0;
            result[2] += 35746088;
            result[3] += 6524000;
            result[4] += 0;
            result[5] += 407750;
          } else {
            result[0] += 87296;
            result[1] += 0;
            result[2] += 41552935;
            result[3] += 1309441;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 202592;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41734116;
            result[5] += 1012963;
          } else {
            result[0] += 21474836;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 21474836;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42580000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 3805667;
            result[1] += 1087333;
            result[2] += 0;
            result[3] += 6524000;
            result[4] += 16853669;
            result[5] += 14679002;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 37896770;
            result[5] += 5052902;
          } else {
            result[0] += 0;
            result[1] += 226050;
            result[2] += 169538;
            result[3] += 904203;
            result[4] += 1186767;
            result[5] += 40463112;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 311229;
            result[1] += 778073;
            result[2] += 0;
            result[3] += 8870041;
            result[4] += 4045983;
            result[5] += 28944344;
          } else {
            result[0] += 654055;
            result[1] += 0;
            result[2] += 0;
            result[3] += 28124405;
            result[4] += 0;
            result[5] += 14171211;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
            result[0] += 1160801;
            result[1] += 3482405;
            result[2] += 0;
            result[3] += 0;
            result[4] += 37726064;
            result[5] += 580400;
          } else {
            result[0] += 0;
            result[1] += 28633115;
            result[2] += 0;
            result[3] += 9544371;
            result[4] += 4772185;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 0;
            result[1] += 42753555;
            result[2] += 0;
            result[3] += 0;
            result[4] += 196117;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 17179869;
            result[2] += 2863311;
            result[3] += 0;
            result[4] += 22906492;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42890000))) ) ) {
            result[0] += 7745022;
            result[1] += 14785952;
            result[2] += 1408185;
            result[3] += 704092;
            result[4] += 16898231;
            result[5] += 1408185;
          } else {
            result[0] += 37792827;
            result[1] += 1009732;
            result[2] += 216371;
            result[3] += 1226103;
            result[4] += 1586721;
            result[5] += 1117917;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 1124336;
            result[1] += 224867;
            result[2] += 3822745;
            result[3] += 20462933;
            result[4] += 3597878;
            result[5] += 13716911;
          } else {
            result[0] += 10195124;
            result[1] += 0;
            result[2] += 20607166;
            result[3] += 3470680;
            result[4] += 5206020;
            result[5] += 3470680;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1651910;
            result[4] += 6607641;
            result[5] += 34690120;
          } else {
            result[0] += 0;
            result[1] += 14316557;
            result[2] += 28633115;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 40086361;
            result[4] += 0;
            result[5] += 2863311;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4772185;
            result[3] += 9544371;
            result[4] += 0;
            result[5] += 28633115;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 1717986;
            result[2] += 1717986;
            result[3] += 37795712;
            result[4] += 0;
            result[5] += 1717986;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c80000))) ) ) {
            result[0] += 2260509;
            result[1] += 0;
            result[2] += 25995854;
            result[3] += 11302545;
            result[4] += 1130254;
            result[5] += 2260509;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 23860929;
            result[3] += 4772185;
            result[4] += 0;
            result[5] += 14316557;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7809031;
            result[3] += 35140641;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 3067833;
            result[2] += 39881839;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 37580963;
            result[1] += 5368709;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32928082;
            result[3] += 8828543;
            result[4] += 0;
            result[5] += 1193046;
          } else {
            result[0] += 309882;
            result[1] += 0;
            result[2] += 40842473;
            result[3] += 1797316;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42420000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42500000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42240000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 163306;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41479912;
            result[5] += 1306453;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42600000))) ) ) {
            result[0] += 35140641;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7809031;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 94084;
            result[2] += 47042;
            result[3] += 1834651;
            result[4] += 1646482;
            result[5] += 39327411;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 14060904;
            result[1] += 1789569;
            result[2] += 0;
            result[3] += 3323486;
            result[4] += 5368709;
            result[5] += 18407002;
          } else {
            result[0] += 1821187;
            result[1] += 303531;
            result[2] += 3035312;
            result[3] += 22764844;
            result[4] += 151765;
            result[5] += 14873031;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x424a0000))) ) ) {
            result[0] += 0;
            result[1] += 16106127;
            result[2] += 0;
            result[3] += 0;
            result[4] += 18790481;
            result[5] += 8053063;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42377010;
            result[5] += 572662;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425c0000))) ) ) {
            result[0] += 0;
            result[1] += 42765734;
            result[2] += 0;
            result[3] += 0;
            result[4] += 183938;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 25379352;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17570320;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 38903689;
            result[1] += 622459;
            result[2] += 933688;
            result[3] += 0;
            result[4] += 2489836;
            result[5] += 0;
          } else {
            result[0] += 3596770;
            result[1] += 2962046;
            result[2] += 634724;
            result[3] += 14810232;
            result[4] += 8462989;
            result[5] += 12482909;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
            result[0] += 39642054;
            result[1] += 691144;
            result[2] += 49367;
            result[3] += 296204;
            result[4] += 2270902;
            result[5] += 0;
          } else {
            result[0] += 12211181;
            result[1] += 0;
            result[2] += 25264513;
            result[3] += 2105376;
            result[4] += 842150;
            result[5] += 2526451;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ac0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42380000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 34001824;
            result[5] += 8947848;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42800000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 18407002;
            result[3] += 0;
            result[4] += 0;
            result[5] += 24542670;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5329521;
            result[3] += 29782619;
            result[4] += 0;
            result[5] += 7837531;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 2045222;
            result[1] += 0;
            result[2] += 6135667;
            result[3] += 0;
            result[4] += 0;
            result[5] += 34768782;
          } else {
            result[0] += 858993;
            result[1] += 1717986;
            result[2] += 27487790;
            result[3] += 6871947;
            result[4] += 2576980;
            result[5] += 3435973;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8589934;
            result[3] += 34359738;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 352046;
            result[1] += 0;
            result[2] += 29923952;
            result[3] += 10209348;
            result[4] += 0;
            result[5] += 2464325;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 25379352;
            result[1] += 0;
            result[2] += 17570320;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38269259;
            result[3] += 4267435;
            result[4] += 0;
            result[5] += 412977;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 21474836;
          } else {
            result[0] += 10737418;
            result[1] += 0;
            result[2] += 32212254;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39613776;
            result[3] += 2918909;
            result[4] += 0;
            result[5] += 416987;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42840939;
            result[3] += 108733;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
            result[0] += 0;
            result[1] += 31647127;
            result[2] += 0;
            result[3] += 0;
            result[4] += 11302545;
            result[5] += 0;
          } else {
            result[0] += 819650;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40982512;
            result[5] += 1147510;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
            result[0] += 39089028;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1930322;
            result[5] += 1930322;
          } else {
            result[0] += 5368709;
            result[1] += 2013265;
            result[2] += 0;
            result[3] += 1342177;
            result[4] += 11408506;
            result[5] += 22817013;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42820000))) ) ) {
            result[0] += 842150;
            result[1] += 842150;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40423221;
            result[5] += 842150;
          } else {
            result[0] += 0;
            result[1] += 3579139;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17895697;
            result[5] += 21474836;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 69836;
            result[2] += 0;
            result[3] += 907879;
            result[4] += 838042;
            result[5] += 41133914;
          } else {
            result[0] += 450915;
            result[1] += 112728;
            result[2] += 0;
            result[3] += 9581948;
            result[4] += 4283694;
            result[5] += 28520386;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42940000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 7104457;
            result[1] += 8719106;
            result[2] += 0;
            result[3] += 645859;
            result[4] += 26480249;
            result[5] += 0;
          } else {
            result[0] += 36687851;
            result[1] += 280979;
            result[2] += 401398;
            result[3] += 1846434;
            result[4] += 1806294;
            result[5] += 1926714;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 378411;
            result[1] += 1135233;
            result[2] += 7000607;
            result[3] += 21001822;
            result[4] += 2081261;
            result[5] += 11352336;
          } else {
            result[0] += 25820934;
            result[1] += 0;
            result[2] += 10226112;
            result[3] += 1789569;
            result[4] += 3067833;
            result[5] += 2045222;
          }
        }
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4772185;
            result[5] += 38177487;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 40423221;
            result[4] += 0;
            result[5] += 2526451;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 20043180;
            result[3] += 18611524;
            result[4] += 0;
            result[5] += 4294967;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38128791;
            result[3] += 3506095;
            result[4] += 0;
            result[5] += 1314785;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42b40000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 18407002;
            result[3] += 24542670;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 18407002;
            result[3] += 24542670;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 109147;
            result[1] += 0;
            result[2] += 40439272;
            result[3] += 2073808;
            result[4] += 0;
            result[5] += 327443;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x422e0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42757933;
            result[5] += 191739;
          } else {
            result[0] += 5368709;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26843545;
            result[5] += 10737418;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 29331483;
            result[5] += 13618188;
          } else {
            result[0] += 123241;
            result[1] += 61620;
            result[2] += 369724;
            result[3] += 1478898;
            result[4] += 1170794;
            result[5] += 39745393;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
            result[0] += 41160103;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1789569;
            result[5] += 0;
          } else {
            result[0] += 262421;
            result[1] += 87473;
            result[2] += 87473;
            result[3] += 15220454;
            result[4] += 3848850;
            result[5] += 23442998;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428c0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42240000))) ) ) {
            result[0] += 0;
            result[1] += 42308633;
            result[2] += 0;
            result[3] += 0;
            result[4] += 641039;
            result[5] += 0;
          } else {
            result[0] += 5614336;
            result[1] += 6456486;
            result[2] += 0;
            result[3] += 280716;
            result[4] += 30317416;
            result[5] += 280716;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
            result[0] += 36518122;
            result[1] += 654055;
            result[2] += 1526130;
            result[3] += 1271775;
            result[4] += 1744149;
            result[5] += 1235438;
          } else {
            result[0] += 8479334;
            result[1] += 553000;
            result[2] += 8848001;
            result[3] += 13825002;
            result[4] += 2949333;
            result[5] += 8295001;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42fd0000))) ) ) {
            result[0] += 0;
            result[1] += 41564199;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1385473;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 1193046;
            result[2] += 0;
            result[3] += 1193046;
            result[4] += 32212254;
            result[5] += 8351325;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42dd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5006403;
            result[3] += 25822502;
            result[4] += 263494;
            result[5] += 11857271;
          } else {
            result[0] += 6135667;
            result[1] += 0;
            result[2] += 13805252;
            result[3] += 0;
            result[4] += 0;
            result[5] += 23008753;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c40000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 0;
            result[4] += 5368709;
            result[5] += 10737418;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41468649;
            result[3] += 1481023;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 14316557;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5368709;
            result[3] += 5368709;
            result[4] += 0;
            result[5] += 32212254;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 20648881;
            result[3] += 14867194;
            result[4] += 0;
            result[5] += 7433597;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34819282;
            result[3] += 8130390;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 36814005;
            result[1] += 0;
            result[2] += 6135667;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
            result[0] += 9911462;
            result[1] += 0;
            result[2] += 26430567;
            result[3] += 0;
            result[4] += 0;
            result[5] += 6607641;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41283834;
            result[3] += 1665838;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42743184;
            result[5] += 206488;
          } else {
            result[0] += 0;
            result[1] += 2045222;
            result[2] += 4090445;
            result[3] += 0;
            result[4] += 28633115;
            result[5] += 8180890;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3904515;
            result[4] += 39045157;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7158278;
            result[5] += 35791394;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 642409;
            result[4] += 642409;
            result[5] += 41664853;
          } else {
            result[0] += 0;
            result[1] += 301401;
            result[2] += 0;
            result[3] += 4370317;
            result[4] += 3616814;
            result[5] += 34661139;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 38281230;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3734754;
            result[5] += 933688;
          } else {
            result[0] += 95021;
            result[1] += 380085;
            result[2] += 0;
            result[3] += 16533723;
            result[4] += 4370984;
            result[5] += 21569857;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42960000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 7158278;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35791394;
            result[5] += 0;
          } else {
            result[0] += 275907;
            result[1] += 42305887;
            result[2] += 0;
            result[3] += 0;
            result[4] += 367877;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x424a0000))) ) ) {
            result[0] += 0;
            result[1] += 14316557;
            result[2] += 28633115;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 7842983;
            result[1] += 10830787;
            result[2] += 560213;
            result[3] += 560213;
            result[4] += 22595262;
            result[5] += 560213;
          } else {
            result[0] += 38344932;
            result[1] += 502335;
            result[2] += 167445;
            result[3] += 1046531;
            result[4] += 2218647;
            result[5] += 669780;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42df0000))) ) ) {
            result[0] += 2863311;
            result[1] += 220254;
            result[2] += 14977321;
            result[3] += 12995029;
            result[4] += 1651910;
            result[5] += 10241845;
          } else {
            result[0] += 33811444;
            result[1] += 1370734;
            result[2] += 4569114;
            result[3] += 0;
            result[4] += 2284557;
            result[5] += 913822;
          }
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 11302545;
            result[2] += 6781527;
            result[3] += 0;
            result[4] += 24865600;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5965232;
            result[3] += 0;
            result[4] += 5965232;
            result[5] += 31019208;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3579139;
            result[3] += 0;
            result[4] += 0;
            result[5] += 39370533;
          } else {
            result[0] += 499414;
            result[1] += 0;
            result[2] += 9988296;
            result[3] += 27967228;
            result[4] += 998829;
            result[5] += 3495903;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 19522578;
            result[3] += 0;
            result[4] += 0;
            result[5] += 23427094;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10270573;
            result[3] += 29878033;
            result[4] += 0;
            result[5] += 2801065;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 7158278;
            result[1] += 14316557;
            result[2] += 0;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1827645;
            result[1] += 456911;
            result[2] += 34268356;
            result[3] += 4569114;
            result[4] += 0;
            result[5] += 1827645;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 28633115;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36052645;
            result[3] += 6583526;
            result[4] += 0;
            result[5] += 313501;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 8589934;
            result[1] += 0;
            result[2] += 34359738;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42311806;
            result[3] += 637866;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 671088;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41104179;
            result[5] += 1174405;
          } else {
            result[0] += 2260509;
            result[1] += 29386618;
            result[2] += 0;
            result[3] += 0;
            result[4] += 11302545;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10737418;
            result[5] += 32212254;
          } else {
            result[0] += 0;
            result[1] += 4026531;
            result[2] += 0;
            result[3] += 0;
            result[4] += 30870077;
            result[5] += 8053063;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 40110025;
            result[1] += 709911;
            result[2] += 0;
            result[3] += 709911;
            result[4] += 709911;
            result[5] += 709911;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
            result[0] += 57728;
            result[1] += 0;
            result[2] += 230912;
            result[3] += 1500929;
            result[4] += 1558657;
            result[5] += 39601445;
          } else {
            result[0] += 3316905;
            result[1] += 510293;
            result[2] += 85048;
            result[3] += 10971302;
            result[4] += 5443126;
            result[5] += 22622996;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42910000))) ) ) {
            result[0] += 332943;
            result[1] += 19643648;
            result[2] += 1331772;
            result[3] += 332943;
            result[4] += 20975421;
            result[5] += 332943;
          } else {
            result[0] += 37464021;
            result[1] += 680390;
            result[2] += 1105635;
            result[3] += 1658452;
            result[4] += 1318257;
            result[5] += 722915;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 320519;
            result[1] += 801299;
            result[2] += 3685979;
            result[3] += 22596656;
            result[4] += 1923119;
            result[5] += 13622097;
          } else {
            result[0] += 14515398;
            result[1] += 1590728;
            result[2] += 19287584;
            result[3] += 2783775;
            result[4] += 2386092;
            result[5] += 2386092;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425a0000))) ) ) {
            result[0] += 0;
            result[1] += 42841759;
            result[2] += 0;
            result[3] += 0;
            result[4] += 107913;
            result[5] += 0;
          } else {
            result[0] += 42949672;
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
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12884901;
            result[3] += 0;
            result[4] += 30064771;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2770946;
            result[4] += 0;
            result[5] += 40178726;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
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
            result[5] += 42949672;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4473924;
            result[3] += 33107039;
            result[4] += 0;
            result[5] += 5368709;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21974251;
            result[3] += 12984784;
            result[4] += 0;
            result[5] += 7990636;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33960206;
            result[3] += 6991807;
            result[4] += 0;
            result[5] += 1997659;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d90000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 31775774;
            result[3] += 10126345;
            result[4] += 0;
            result[5] += 1047552;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x43028000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37358591;
            result[3] += 5591081;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39768215;
            result[3] += 3181457;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42678981;
            result[3] += 270691;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 177477;
            result[1] += 354955;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41707327;
            result[5] += 709911;
          } else {
            result[0] += 0;
            result[1] += 38654705;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4294967;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42620000))) ) ) {
            result[0] += 35433480;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7516192;
            result[5] += 0;
          } else {
            result[0] += 1101273;
            result[1] += 12114010;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8810189;
            result[5] += 20924199;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 109565;
            result[2] += 0;
            result[3] += 1588699;
            result[4] += 1643482;
            result[5] += 39607925;
          } else {
            result[0] += 0;
            result[1] += 24159191;
            result[2] += 0;
            result[3] += 16106127;
            result[4] += 2684354;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 425244;
            result[1] += 0;
            result[2] += 425244;
            result[3] += 7229152;
            result[4] += 3189332;
            result[5] += 31680699;
          } else {
            result[0] += 241290;
            result[1] += 482580;
            result[2] += 241290;
            result[3] += 29919996;
            result[4] += 482580;
            result[5] += 11581934;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
            result[0] += 908987;
            result[1] += 17270767;
            result[2] += 0;
            result[3] += 454493;
            result[4] += 24088176;
            result[5] += 227246;
          } else {
            result[0] += 35569883;
            result[1] += 524629;
            result[2] += 139901;
            result[3] += 1119209;
            result[4] += 3707382;
            result[5] += 1888666;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 713449;
            result[1] += 428069;
            result[2] += 10130985;
            result[3] += 19691212;
            result[4] += 1712279;
            result[5] += 10273675;
          } else {
            result[0] += 19634136;
            result[1] += 306783;
            result[2] += 14418818;
            result[3] += 3681400;
            result[4] += 3988183;
            result[5] += 920350;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426a0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e00000))) ) ) {
            result[0] += 0;
            result[1] += 12884901;
            result[2] += 0;
            result[3] += 12884901;
            result[4] += 17179869;
            result[5] += 0;
          } else {
            result[0] += 42949672;
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
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b20000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 24542670;
            result[4] += 0;
            result[5] += 18407002;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1867377;
            result[5] += 41082295;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cf0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 0;
            result[4] += 14316557;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5052902;
            result[3] += 36633544;
            result[4] += 0;
            result[5] += 1263225;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 13123511;
            result[4] += 0;
            result[5] += 1193046;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36077725;
            result[3] += 0;
            result[4] += 0;
            result[5] += 6871947;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42e20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30912821;
            result[3] += 11216156;
            result[4] += 0;
            result[5] += 820694;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 23126746;
            result[3] += 19822925;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41082295;
            result[3] += 1867377;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 139446;
            result[1] += 0;
            result[2] += 41903820;
            result[3] += 766958;
            result[4] += 0;
            result[5] += 139446;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
            result[0] += 170435;
            result[1] += 852176;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41245320;
            result[5] += 681740;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1867377;
            result[3] += 0;
            result[4] += 21163606;
            result[5] += 19918688;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42940000))) ) ) {
            result[0] += 0;
            result[1] += 37795712;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5153960;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
            result[0] += 29801813;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 13147859;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 51934;
            result[3] += 2129306;
            result[4] += 2544781;
            result[5] += 38223650;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42820000))) ) ) {
            result[0] += 27440068;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 13720034;
            result[5] += 1789569;
          } else {
            result[0] += 134638;
            result[1] += 269276;
            result[2] += 1750300;
            result[3] += 22753901;
            result[4] += 1481023;
            result[5] += 16560532;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 21474836;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42834216;
            result[2] += 0;
            result[3] += 0;
            result[4] += 115456;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42870000))) ) ) {
            result[0] += 3854457;
            result[1] += 11563373;
            result[2] += 275318;
            result[3] += 0;
            result[4] += 26981204;
            result[5] += 275318;
          } else {
            result[0] += 37939515;
            result[1] += 726664;
            result[2] += 191227;
            result[3] += 1070873;
            result[4] += 2103501;
            result[5] += 917891;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 505290;
            result[1] += 252645;
            result[2] += 11242708;
            result[3] += 15916643;
            result[4] += 1136903;
            result[5] += 13895482;
          } else {
            result[0] += 33169054;
            result[1] += 425244;
            result[2] += 4252442;
            result[3] += 0;
            result[4] += 5102931;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 14316557;
            result[4] += 1301505;
            result[5] += 27331610;
          } else {
            result[0] += 18407002;
            result[1] += 0;
            result[2] += 18407002;
            result[3] += 6135667;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6927366;
            result[3] += 34636833;
            result[4] += 0;
            result[5] += 1385473;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30064771;
            result[3] += 12884901;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 6135667;
            result[4] += 0;
            result[5] += 36814005;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32212254;
            result[3] += 0;
            result[4] += 0;
            result[5] += 10737418;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17179869;
            result[3] += 21474836;
            result[4] += 4294967;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 2770946;
            result[2] += 36715043;
            result[3] += 1385473;
            result[4] += 692736;
            result[5] += 1385473;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c40000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9042036;
            result[3] += 31647127;
            result[4] += 0;
            result[5] += 2260509;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40563580;
            result[3] += 2386092;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 16106127;
            result[3] += 5368709;
            result[4] += 0;
            result[5] += 21474836;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 2836299;
            result[1] += 0;
            result[2] += 29578548;
            result[3] += 8914083;
            result[4] += 0;
            result[5] += 1620742;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39324051;
            result[3] += 3625621;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 0;
            result[4] += 0;
            result[5] += 14316557;
          } else {
            result[0] += 70179;
            result[1] += 0;
            result[2] += 42037343;
            result[3] += 771971;
            result[4] += 0;
            result[5] += 70179;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42340000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 200699;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40942678;
            result[5] += 1806294;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 38859227;
            result[5] += 4090445;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1983246;
            result[4] += 1177552;
            result[5] += 39788874;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 31647127;
            result[1] += 0;
            result[2] += 753503;
            result[3] += 0;
            result[4] += 10549042;
            result[5] += 0;
          } else {
            result[0] += 189205;
            result[1] += 94602;
            result[2] += 567616;
            result[3] += 15798668;
            result[4] += 2743481;
            result[5] += 23556098;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42d80000))) ) ) {
            result[0] += 0;
            result[1] += 6781527;
            result[2] += 0;
            result[3] += 0;
            result[4] += 36168145;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 38654705;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4294967;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 33038209;
            result[2] += 0;
            result[3] += 0;
            result[4] += 9911462;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
            result[0] += 5139277;
            result[1] += 3303820;
            result[2] += 0;
            result[3] += 0;
            result[4] += 33772392;
            result[5] += 734182;
          } else {
            result[0] += 35779261;
            result[1] += 764358;
            result[2] += 545970;
            result[3] += 1528717;
            result[4] += 2256677;
            result[5] += 2074687;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42df0000))) ) ) {
            result[0] += 802797;
            result[1] += 1873194;
            result[2] += 13513760;
            result[3] += 14450357;
            result[4] += 1070396;
            result[5] += 11239166;
          } else {
            result[0] += 30240075;
            result[1] += 0;
            result[2] += 8765239;
            result[3] += 876523;
            result[4] += 3067833;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 0;
            result[4] += 0;
            result[5] += 28633115;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4772185;
            result[3] += 1908874;
            result[4] += 1908874;
            result[5] += 34359738;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 1385473;
            result[2] += 2770946;
            result[3] += 32558623;
            result[4] += 692736;
            result[5] += 5541893;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 31019208;
            result[3] += 4772185;
            result[4] += 0;
            result[5] += 7158278;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30574343;
            result[3] += 10919408;
            result[4] += 0;
            result[5] += 1455921;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42e80000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42830000))) ) ) {
            result[0] += 28633115;
            result[1] += 14316557;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33073544;
            result[3] += 8268386;
            result[4] += 0;
            result[5] += 1607741;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41569763;
            result[3] += 1207420;
            result[4] += 0;
            result[5] += 172488;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42420000))) ) ) {
            result[0] += 0;
            result[1] += 28633115;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14316557;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 277094;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41425652;
            result[5] += 1246925;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42400000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 41231686;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1717986;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42620000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 14316557;
            result[2] += 0;
            result[3] += 0;
            result[4] += 28633115;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42632310;
            result[2] += 0;
            result[3] += 0;
            result[4] += 317362;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42da0000))) ) ) {
            result[0] += 0;
            result[1] += 13215283;
            result[2] += 0;
            result[3] += 0;
            result[4] += 29734388;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42620000))) ) ) {
            result[0] += 41819418;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1130254;
            result[5] += 0;
          } else {
            result[0] += 83641;
            result[1] += 710948;
            result[2] += 0;
            result[3] += 3220179;
            result[4] += 2007384;
            result[5] += 36927518;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 795364;
            result[3] += 10339736;
            result[4] += 3181457;
            result[5] += 28633115;
          } else {
            result[0] += 2684354;
            result[1] += 0;
            result[2] += 0;
            result[3] += 32979213;
            result[4] += 1150437;
            result[5] += 6135667;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 2321603;
            result[1] += 2902004;
            result[2] += 0;
            result[3] += 5804009;
            result[4] += 14510024;
            result[5] += 17412029;
          } else {
            result[0] += 36939419;
            result[1] += 405185;
            result[2] += 742840;
            result[3] += 979198;
            result[4] += 2870064;
            result[5] += 1012963;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 210537;
            result[1] += 2526451;
            result[2] += 2736988;
            result[3] += 12211181;
            result[4] += 6316128;
            result[5] += 18948385;
          } else {
            result[0] += 24086640;
            result[1] += 0;
            result[2] += 13639423;
            result[3] += 1451002;
            result[4] += 1451002;
            result[5] += 2321603;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42360000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 2386092;
            result[1] += 0;
            result[2] += 1193046;
            result[3] += 2386092;
            result[4] += 0;
            result[5] += 36984440;
          } else {
            result[0] += 0;
            result[1] += 1047552;
            result[2] += 3142658;
            result[3] += 28807707;
            result[4] += 1571329;
            result[5] += 8380423;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1952257;
            result[3] += 39045157;
            result[4] += 0;
            result[5] += 1952257;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28082478;
            result[3] += 13215283;
            result[4] += 0;
            result[5] += 1651910;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 25995854;
            result[3] += 13563054;
            result[4] += 0;
            result[5] += 3390763;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41297762;
            result[3] += 1651910;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42e50000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42df0000))) ) ) {
            result[0] += 1952257;
            result[1] += 0;
            result[2] += 34164512;
            result[3] += 6832902;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 18790481;
            result[1] += 0;
            result[2] += 24159191;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42700000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34539946;
            result[3] += 6307294;
            result[4] += 0;
            result[5] += 2102431;
          } else {
            result[0] += 131344;
            result[1] += 0;
            result[2] += 41898916;
            result[3] += 919411;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cc0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 39563599;
            result[5] += 3386073;
          } else {
            result[0] += 0;
            result[1] += 34359738;
            result[2] += 0;
            result[3] += 5726623;
            result[4] += 2863311;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x425c0000))) ) ) {
            result[0] += 0;
            result[1] += 39645851;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3303820;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14316557;
            result[5] += 28633115;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 29386618;
            result[5] += 13563054;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 375340;
            result[1] += 0;
            result[2] += 160860;
            result[3] += 1501361;
            result[4] += 1394121;
            result[5] += 39517988;
          } else {
            result[0] += 1651910;
            result[1] += 0;
            result[2] += 825955;
            result[3] += 15486660;
            result[4] += 1651910;
            result[5] += 23333235;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3579139;
            result[4] += 39370533;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 30064771;
            result[2] += 0;
            result[3] += 4294967;
            result[4] += 8589934;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 0;
            result[1] += 42840663;
            result[2] += 0;
            result[3] += 0;
            result[4] += 109009;
            result[5] += 0;
          } else {
            result[0] += 5895053;
            result[1] += 32843867;
            result[2] += 0;
            result[3] += 1684300;
            result[4] += 2526451;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 22055237;
            result[1] += 625047;
            result[2] += 446462;
            result[3] += 3928868;
            result[4] += 9911462;
            result[5] += 5982594;
          } else {
            result[0] += 37877609;
            result[1] += 1768242;
            result[2] += 232663;
            result[3] += 418794;
            result[4] += 2652363;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 382625;
            result[1] += 1434844;
            result[2] += 6695940;
            result[3] += 15783287;
            result[4] += 1626156;
            result[5] += 17026819;
          } else {
            result[0] += 29911379;
            result[1] += 3067833;
            result[2] += 4601750;
            result[3] += 383479;
            result[4] += 4985229;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 7158278;
            result[4] += 0;
            result[5] += 35791394;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5567550;
            result[3] += 30223843;
            result[4] += 0;
            result[5] += 7158278;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42df0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39513699;
            result[3] += 0;
            result[4] += 0;
            result[5] += 3435973;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 21474836;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9544371;
            result[3] += 9544371;
            result[4] += 0;
            result[5] += 23860929;
          } else {
            result[0] += 1202590;
            result[1] += 0;
            result[2] += 31782757;
            result[3] += 9620726;
            result[4] += 0;
            result[5] += 343597;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40171833;
            result[3] += 2350479;
            result[4] += 0;
            result[5] += 427359;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37347541;
            result[3] += 5602131;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423c0000))) ) ) {
            result[0] += 0;
            result[1] += 36814005;
            result[2] += 0;
            result[3] += 3506095;
            result[4] += 2629571;
            result[5] += 0;
          } else {
            result[0] += 805306;
            result[1] += 1342177;
            result[2] += 0;
            result[3] += 805306;
            result[4] += 38386270;
            result[5] += 1610612;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8259552;
            result[3] += 0;
            result[4] += 9085507;
            result[5] += 25604612;
          } else {
            result[0] += 39843586;
            result[1] += 535532;
            result[2] += 214212;
            result[3] += 749744;
            result[4] += 856851;
            result[5] += 749744;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 47510;
            result[1] += 47510;
            result[2] += 142532;
            result[3] += 3183216;
            result[4] += 2137981;
            result[5] += 37390921;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 806222;
            result[1] += 1832323;
            result[2] += 366464;
            result[3] += 18909582;
            result[4] += 4177698;
            result[5] += 16857380;
          } else {
            result[0] += 19464876;
            result[1] += 1269448;
            result[2] += 3173621;
            result[3] += 4231494;
            result[4] += 6558817;
            result[5] += 8251415;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x425a0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 21474836;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42645783;
            result[2] += 0;
            result[3] += 0;
            result[4] += 303889;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 40265318;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2684354;
            result[5] += 0;
          } else {
            result[0] += 21474836;
            result[1] += 16106127;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5368709;
            result[5] += 0;
          }
        }
      } else {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 21474836;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 42143106;
            result[1] += 0;
            result[2] += 0;
            result[3] += 67213;
            result[4] += 739352;
            result[5] += 0;
          } else {
            result[0] += 19822925;
            result[1] += 0;
            result[2] += 6607641;
            result[3] += 13215283;
            result[4] += 3303820;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e80000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 2526451;
            result[1] += 0;
            result[2] += 40423221;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8589934;
            result[3] += 30678337;
            result[4] += 0;
            result[5] += 3681400;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 20734324;
            result[3] += 7405116;
            result[4] += 0;
            result[5] += 14810232;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26508001;
            result[3] += 13421772;
            result[4] += 0;
            result[5] += 3019898;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40148607;
            result[3] += 2801065;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 34896609;
            result[1] += 0;
            result[2] += 2684354;
            result[3] += 0;
            result[4] += 5368709;
            result[5] += 0;
          } else {
            result[0] += 3390763;
            result[1] += 0;
            result[2] += 22605091;
            result[3] += 7911781;
            result[4] += 0;
            result[5] += 9042036;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 27126109;
            result[3] += 2260509;
            result[4] += 0;
            result[5] += 13563054;
          } else {
            result[0] += 320121;
            result[1] += 0;
            result[2] += 40602113;
            result[3] += 1867377;
            result[4] += 0;
            result[5] += 160060;
          }
        }
      }
    }
  }
  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x423e0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x421e0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 21474836;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
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
          result[4] += 42949672;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42080000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35791394;
            result[5] += 7158278;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 37580963;
            result[5] += 5368709;
          } else {
            result[0] += 40563580;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2386092;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 39370533;
            result[5] += 3579139;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 161870;
            result[3] += 1348921;
            result[4] += 1942447;
            result[5] += 39496432;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x425a0000))) ) ) {
            result[0] += 37025580;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5924092;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1726620;
            result[1] += 1510792;
            result[2] += 3021585;
            result[3] += 6258997;
            result[4] += 6906480;
            result[5] += 23525197;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2962046;
            result[3] += 0;
            result[4] += 0;
            result[5] += 39987626;
          } else {
            result[0] += 1782816;
            result[1] += 0;
            result[2] += 4862227;
            result[3] += 29173362;
            result[4] += 324148;
            result[5] += 6807117;
          }
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42300000))) ) ) {
            result[0] += 0;
            result[1] += 38177487;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4772185;
            result[5] += 0;
          } else {
            result[0] += 3205199;
            result[1] += 4487279;
            result[2] += 1923119;
            result[3] += 0;
            result[4] += 31410954;
            result[5] += 1923119;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 33038209;
            result[2] += 0;
            result[3] += 0;
            result[4] += 9911462;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 5816101;
            result[1] += 1789569;
            result[2] += 1342177;
            result[3] += 6710886;
            result[4] += 2236962;
            result[5] += 25053975;
          } else {
            result[0] += 38654705;
            result[1] += 383479;
            result[2] += 38347;
            result[3] += 498522;
            result[4] += 3029485;
            result[5] += 345131;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 499414;
            result[1] += 249707;
            result[2] += 9239173;
            result[3] += 16980103;
            result[4] += 998829;
            result[5] += 14982444;
          } else {
            result[0] += 33405301;
            result[1] += 0;
            result[2] += 4772185;
            result[3] += 0;
            result[4] += 4772185;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 17179869;
            result[4] += 8589934;
            result[5] += 17179869;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 3734754;
            result[1] += 1867377;
            result[2] += 5602131;
            result[3] += 3734754;
            result[4] += 7469508;
            result[5] += 20541147;
          } else {
            result[0] += 2643056;
            result[1] += 0;
            result[2] += 7268406;
            result[3] += 31716681;
            result[4] += 0;
            result[5] += 1321528;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 24275902;
            result[2] += 3734754;
            result[3] += 0;
            result[4] += 14939016;
            result[5] += 0;
          } else {
            result[0] += 2231151;
            result[1] += 278893;
            result[2] += 24542670;
            result[3] += 8645713;
            result[4] += 557787;
            result[5] += 6693455;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 21474836;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 3579139;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 147762;
            result[1] += 0;
            result[2] += 39698894;
            result[3] += 3004506;
            result[4] += 0;
            result[5] += 98508;
          }
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b00000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x422a0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 215827;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42302190;
            result[5] += 431655;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 30923764;
            result[5] += 12025908;
          } else {
            result[0] += 0;
            result[1] += 28633115;
            result[2] += 0;
            result[3] += 14316557;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42780000))) ) ) {
            result[0] += 858993;
            result[1] += 0;
            result[2] += 1717986;
            result[3] += 0;
            result[4] += 36936718;
            result[5] += 3435973;
          } else {
            result[0] += 26295718;
            result[1] += 0;
            result[2] += 876523;
            result[3] += 0;
            result[4] += 5259143;
            result[5] += 10518287;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1016560;
            result[4] += 635350;
            result[5] += 41297762;
          } else {
            result[0] += 0;
            result[1] += 229677;
            result[2] += 1722580;
            result[3] += 10565160;
            result[4] += 3559999;
            result[5] += 26872255;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1789569;
            result[4] += 0;
            result[5] += 41160103;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 36964882;
            result[4] += 0;
            result[5] += 5984790;
          } else {
            result[0] += 3734754;
            result[1] += 0;
            result[2] += 13071639;
            result[3] += 14939016;
            result[4] += 0;
            result[5] += 11204262;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x423c0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 5141862;
            result[1] += 6049249;
            result[2] += 302462;
            result[3] += 907387;
            result[4] += 26616698;
            result[5] += 3932012;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
            result[0] += 9954001;
            result[1] += 368666;
            result[2] += 1290333;
            result[3] += 9954001;
            result[4] += 2396333;
            result[5] += 18986336;
          } else {
            result[0] += 35861230;
            result[1] += 593613;
            result[2] += 698368;
            result[3] += 1396737;
            result[4] += 3526761;
            result[5] += 872960;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0;
            result[1] += 21474836;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 0;
          } else {
            result[0] += 111268;
            result[1] += 42838404;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2147483;
            result[3] += 32749125;
            result[4] += 0;
            result[5] += 8053063;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14939016;
            result[3] += 12137951;
            result[4] += 0;
            result[5] += 15872705;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9336885;
            result[3] += 31745410;
            result[4] += 0;
            result[5] += 1867377;
          } else {
            result[0] += 943948;
            result[1] += 0;
            result[2] += 33982158;
            result[3] += 4719744;
            result[4] += 1887897;
            result[5] += 1415923;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5368709;
            result[3] += 37580963;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 1991868;
            result[1] += 0;
            result[2] += 34857705;
            result[3] += 5477639;
            result[4] += 0;
            result[5] += 622459;
          } else {
            result[0] += 140588;
            result[1] += 0;
            result[2] += 41473497;
            result[3] += 913822;
            result[4] += 0;
            result[5] += 421764;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 38428654;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4521018;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5052902;
            result[4] += 17685159;
            result[5] += 20211610;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1464193;
            result[4] += 27819674;
            result[5] += 13665805;
          } else {
            result[0] += 52377;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1623707;
            result[4] += 942797;
            result[5] += 40330790;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 2061584;
            result[2] += 343597;
            result[3] += 5153960;
            result[4] += 6871947;
            result[5] += 28518582;
          } else {
            result[0] += 195225;
            result[1] += 0;
            result[2] += 585677;
            result[3] += 20108255;
            result[4] += 2537935;
            result[5] += 19522578;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c20000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42425896;
            result[2] += 0;
            result[3] += 0;
            result[4] += 523776;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 30678337;
            result[2] += 12271335;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
            result[0] += 0;
            result[1] += 38454939;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4494733;
            result[5] += 0;
          } else {
            result[0] += 3043677;
            result[1] += 2029118;
            result[2] += 0;
            result[3] += 1352745;
            result[4] += 34833199;
            result[5] += 1690932;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
            result[0] += 36949600;
            result[1] += 440683;
            result[2] += 237291;
            result[3] += 1389847;
            result[4] += 2169517;
            result[5] += 1762733;
          } else {
            result[0] += 5798205;
            result[1] += 107374;
            result[2] += 8053063;
            result[3] += 14495514;
            result[4] += 2684354;
            result[5] += 11811160;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5632743;
            result[3] += 35204649;
            result[4] += 0;
            result[5] += 2112278;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4772185;
            result[3] += 0;
            result[4] += 0;
            result[5] += 38177487;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38177487;
            result[3] += 4772185;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 24542670;
            result[3] += 15339168;
            result[4] += 0;
            result[5] += 3067833;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a50000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39159995;
            result[3] += 3789677;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42f50000))) ) ) {
            result[0] += 261092;
            result[1] += 0;
            result[2] += 36814005;
            result[3] += 4308021;
            result[4] += 0;
            result[5] += 1566553;
          } else {
            result[0] += 21474836;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 81498;
            result[1] += 0;
            result[2] += 41808694;
            result[3] += 1059479;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42168769;
            result[5] += 780903;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42360000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 17009771;
            result[1] += 425244;
            result[2] += 0;
            result[3] += 0;
            result[4] += 15734038;
            result[5] += 9780618;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 33746171;
            result[5] += 9203501;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1828697;
            result[4] += 1779272;
            result[5] += 39341702;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
            result[0] += 2202547;
            result[1] += 2936729;
            result[2] += 0;
            result[3] += 13215283;
            result[4] += 2569638;
            result[5] += 22025473;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 32625232;
            result[4] += 0;
            result[5] += 10324440;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x423e0000))) ) ) {
            result[0] += 0;
            result[1] += 26843545;
            result[2] += 0;
            result[3] += 0;
            result[4] += 16106127;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 780903;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42168769;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42540000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 28048766;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14900906;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
            result[0] += 9842633;
            result[1] += 2386092;
            result[2] += 0;
            result[3] += 2386092;
            result[4] += 9246110;
            result[5] += 19088743;
          } else {
            result[0] += 38791950;
            result[1] += 565127;
            result[2] += 0;
            result[3] += 524761;
            result[4] += 2704537;
            result[5] += 363296;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 543666;
            result[1] += 0;
            result[2] += 9967223;
            result[3] += 13772890;
            result[4] += 543666;
            result[5] += 18122224;
          } else {
            result[0] += 32450864;
            result[1] += 0;
            result[2] += 3817748;
            result[3] += 0;
            result[4] += 6203841;
            result[5] += 477218;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42880000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34359738;
            result[3] += 2863311;
            result[4] += 0;
            result[5] += 5726623;
          } else {
            result[0] += 0;
            result[1] += 19327352;
            result[2] += 0;
            result[3] += 4294967;
            result[4] += 10737418;
            result[5] += 8589934;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 32212254;
            result[2] += 10737418;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 9544371;
            result[4] += 1590728;
            result[5] += 31814572;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4955731;
            result[3] += 31110981;
            result[4] += 0;
            result[5] += 6882960;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10105805;
            result[3] += 25264513;
            result[4] += 0;
            result[5] += 7579354;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 8589934;
            result[4] += 0;
            result[5] += 5726623;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42820000))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 15158708;
            result[3] += 21474836;
            result[4] += 2526451;
            result[5] += 3789677;
          } else {
            result[0] += 2120971;
            result[1] += 0;
            result[2] += 33405301;
            result[3] += 7423400;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 1172687;
            result[1] += 586343;
            result[2] += 36353306;
            result[3] += 4690749;
            result[4] += 0;
            result[5] += 146585;
          } else {
            result[0] += 32582510;
            result[1] += 0;
            result[2] += 10367162;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429b0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 82436;
            result[1] += 0;
            result[2] += 42207740;
            result[3] += 659495;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 804300;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41019350;
            result[5] += 1126021;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17620378;
            result[5] += 25329294;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 37993941;
            result[2] += 0;
            result[3] += 4955731;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42660000))) ) ) {
            result[0] += 26372606;
            result[1] += 0;
            result[2] += 0;
            result[3] += 753503;
            result[4] += 12809551;
            result[5] += 3014012;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2175307;
            result[4] += 1770599;
            result[5] += 39003766;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 12407683;
            result[4] += 0;
            result[5] += 30541989;
          } else {
            result[0] += 622459;
            result[1] += 0;
            result[2] += 1244918;
            result[3] += 32679098;
            result[4] += 0;
            result[5] += 8403196;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42f50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 38654705;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4294967;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 3604168;
            result[1] += 8109378;
            result[2] += 0;
            result[3] += 1501736;
            result[4] += 26730915;
            result[5] += 3003473;
          } else {
            result[0] += 35548328;
            result[1] += 364598;
            result[2] += 401058;
            result[3] += 1458392;
            result[4] += 2296968;
            result[5] += 2880326;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 750212;
            result[1] += 1312872;
            result[2] += 6751913;
            result[3] += 17254890;
            result[4] += 3000850;
            result[5] += 13878933;
          } else {
            result[0] += 19547607;
            result[1] += 550636;
            result[2] += 17069741;
            result[3] += 1376592;
            result[4] += 3303820;
            result[5] += 1101273;
          }
        }
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39645851;
            result[3] += 0;
            result[4] += 3303820;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2045222;
            result[4] += 0;
            result[5] += 40904450;
          } else {
            result[0] += 0;
            result[1] += 904203;
            result[2] += 4521018;
            result[3] += 17179869;
            result[4] += 904203;
            result[5] += 19440378;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 7158278;
            result[4] += 0;
            result[5] += 21474836;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42f20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36686178;
            result[3] += 6263493;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 28633115;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12114010;
            result[3] += 20924199;
            result[4] += 1101273;
            result[5] += 8810189;
          } else {
            result[0] += 4668442;
            result[1] += 933688;
            result[2] += 32679098;
            result[3] += 1867377;
            result[4] += 0;
            result[5] += 2801065;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35551643;
            result[3] += 6165024;
            result[4] += 0;
            result[5] += 1233004;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 122888;
            result[1] += 0;
            result[2] += 41536450;
            result[3] += 1290333;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 145100;
            result[1] += 0;
            result[2] += 0;
            result[3] += 580400;
            result[4] += 40482968;
            result[5] += 1741202;
          } else {
            result[0] += 0;
            result[1] += 32212254;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10737418;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6135667;
            result[3] += 0;
            result[4] += 28633115;
            result[5] += 8180890;
          } else {
            result[0] += 46132;
            result[1] += 0;
            result[2] += 46132;
            result[3] += 2952501;
            result[4] += 1430118;
            result[5] += 38474787;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42850000))) ) ) {
            result[0] += 28124405;
            result[1] += 2398205;
            result[2] += 436037;
            result[3] += 218018;
            result[4] += 11118950;
            result[5] += 654055;
          } else {
            result[0] += 746950;
            result[1] += 0;
            result[2] += 3174541;
            result[3] += 14939016;
            result[4] += 3174541;
            result[5] += 20914623;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 14316557;
            result[4] += 28633115;
            result[5] += 0;
          } else {
            result[0] += 2300875;
            result[1] += 28377462;
            result[2] += 0;
            result[3] += 6135667;
            result[4] += 6135667;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 7405116;
            result[1] += 35544556;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 17570320;
            result[4] += 1952257;
            result[5] += 23427094;
          } else {
            result[0] += 38393126;
            result[1] += 1307897;
            result[2] += 0;
            result[3] += 759424;
            result[4] += 2193892;
            result[5] += 295331;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 1012963;
            result[1] += 1012963;
            result[2] += 6888155;
            result[3] += 21677429;
            result[4] += 1620742;
            result[5] += 10737418;
          } else {
            result[0] += 35140641;
            result[1] += 0;
            result[2] += 1301505;
            result[3] += 1952257;
            result[4] += 3253763;
            result[5] += 1301505;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2095105;
            result[3] += 2095105;
            result[4] += 1047552;
            result[5] += 37711907;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 1507006;
            result[2] += 2260509;
            result[3] += 15070060;
            result[4] += 0;
            result[5] += 24112097;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7423400;
            result[3] += 28102872;
            result[4] += 0;
            result[5] += 7423400;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 41415756;
            result[4] += 0;
            result[5] += 1533916;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 24207997;
            result[3] += 7809031;
            result[4] += 3123612;
            result[5] += 7809031;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 6781527;
            result[2] += 4521018;
            result[3] += 15823563;
            result[4] += 13563054;
            result[5] += 2260509;
          } else {
            result[0] += 1160801;
            result[1] += 580400;
            result[2] += 37726064;
            result[3] += 1741202;
            result[4] += 0;
            result[5] += 1741202;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42df0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 41415756;
            result[1] += 0;
            result[2] += 1533916;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 0;
            result[1] += 3067833;
            result[2] += 8180890;
            result[3] += 2045222;
            result[4] += 0;
            result[5] += 29655726;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37092899;
            result[3] += 5856773;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34056053;
            result[3] += 8459784;
            result[4] += 216917;
            result[5] += 216917;
          } else {
            result[0] += 200699;
            result[1] += 0;
            result[2] += 41611676;
            result[3] += 1137296;
            result[4] += 0;
            result[5] += 0;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_2/test_data.csv", "r");
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
