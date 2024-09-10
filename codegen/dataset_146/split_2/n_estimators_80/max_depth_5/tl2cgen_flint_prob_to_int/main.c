
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53144797;
            result[5] += 542293;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 49213166;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4473924;
            result[5] += 0;
          } else {
            result[0] += 2684354;
            result[1] += 0;
            result[2] += 0;
            result[3] += 894784;
            result[4] += 19685266;
            result[5] += 30422685;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 338506;
            result[2] += 0;
            result[3] += 1760232;
            result[4] += 677012;
            result[5] += 50911339;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 3536275;
            result[2] += 0;
            result[3] += 11894744;
            result[4] += 4500714;
            result[5] += 33755356;
          } else {
            result[0] += 0;
            result[1] += 872960;
            result[2] += 436480;
            result[3] += 38410276;
            result[4] += 436480;
            result[5] += 13530892;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 35791394;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17895697;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 34164512;
            result[4] += 19522578;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 53298054;
            result[2] += 0;
            result[3] += 129678;
            result[4] += 259357;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42820000))) ) ) {
            result[0] += 36682994;
            result[1] += 573171;
            result[2] += 573171;
            result[3] += 764229;
            result[4] += 12800836;
            result[5] += 2292687;
          } else {
            result[0] += 2770946;
            result[1] += 577280;
            result[2] += 9467401;
            result[3] += 17549328;
            result[4] += 6580998;
            result[5] += 16741135;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 2105376;
            result[1] += 26317201;
            result[2] += 0;
            result[3] += 526344;
            result[4] += 23685481;
            result[5] += 1052688;
          } else {
            result[0] += 45542941;
            result[1] += 375059;
            result[2] += 2839736;
            result[3] += 535799;
            result[4] += 3429115;
            result[5] += 964438;
          }
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6710886;
            result[3] += 0;
            result[4] += 1677721;
            result[5] += 45298483;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 7895160;
            result[2] += 0;
            result[3] += 14211288;
            result[4] += 1579032;
            result[5] += 30001609;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 40802189;
            result[4] += 0;
            result[5] += 2147483;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47883081;
            result[3] += 5804009;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42960000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 9474192;
            result[2] += 22106449;
            result[3] += 22106449;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42df0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5965232;
            result[3] += 47721858;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 426088;
            result[1] += 0;
            result[2] += 40265318;
            result[3] += 10865244;
            result[4] += 0;
            result[5] += 2130440;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42f20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 48716064;
            result[3] += 4971026;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 17895697;
            result[1] += 0;
            result[2] += 0;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52851494;
            result[3] += 835596;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 49018648;
            result[5] += 4668442;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5263440;
            result[4] += 22106449;
            result[5] += 26317201;
          } else {
            result[0] += 46684427;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2334221;
            result[4] += 2334221;
            result[5] += 2334221;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 2191309;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42730541;
            result[5] += 8765239;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2494311;
            result[4] += 2375535;
            result[5] += 48817244;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 745654;
            result[2] += 0;
            result[3] += 8947848;
            result[4] += 0;
            result[5] += 43993588;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 39817925;
            result[4] += 1789569;
            result[5] += 12079595;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42260000))) ) ) {
            result[0] += 0;
            result[1] += 52408827;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1278264;
            result[5] += 0;
          } else {
            result[0] += 967334;
            result[1] += 3385672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 48850416;
            result[5] += 483667;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 53563388;
            result[2] += 0;
            result[3] += 0;
            result[4] += 123702;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 47172143;
            result[1] += 1322583;
            result[2] += 97969;
            result[3] += 1371568;
            result[4] += 2694151;
            result[5] += 1028676;
          } else {
            result[0] += 14201101;
            result[1] += 1385473;
            result[2] += 4849156;
            result[3] += 9698313;
            result[4] += 6927366;
            result[5] += 16625679;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 1069463;
            result[1] += 1711142;
            result[2] += 9625175;
            result[3] += 25025456;
            result[4] += 1283356;
            result[5] += 14972495;
          } else {
            result[0] += 30227185;
            result[1] += 4060368;
            result[2] += 13083408;
            result[3] += 1353456;
            result[4] += 3609216;
            result[5] += 1353456;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 48806446;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4880644;
            result[5] += 0;
          } else {
            result[0] += 12389328;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4129776;
            result[4] += 20648881;
            result[5] += 16519104;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7002664;
            result[3] += 9336885;
            result[4] += 0;
            result[5] += 37347541;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4165377;
            result[3] += 41653777;
            result[4] += 0;
            result[5] += 7867935;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33907636;
            result[3] += 12715363;
            result[4] += 1412818;
            result[5] += 5651272;
          }
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 31317469;
            result[3] += 19522578;
            result[4] += 0;
            result[5] += 2847042;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 51352869;
            result[3] += 2334221;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 35791394;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47068134;
            result[3] += 6251236;
            result[4] += 0;
            result[5] += 367719;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42460000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 21474836;
            result[1] += 0;
            result[2] += 32212254;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 312588;
            result[1] += 0;
            result[2] += 51342676;
            result[3] += 1797384;
            result[4] += 0;
            result[5] += 234441;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 468882;
            result[1] += 0;
            result[2] += 0;
            result[3] += 234441;
            result[4] += 51342676;
            result[5] += 1641090;
          } else {
            result[0] += 0;
            result[1] += 32212254;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 19813093;
            result[1] += 5113056;
            result[2] += 0;
            result[3] += 639132;
            result[4] += 20452225;
            result[5] += 7669584;
          } else {
            result[0] += 0;
            result[1] += 124275;
            result[2] += 0;
            result[3] += 1988410;
            result[4] += 2671926;
            result[5] += 48902477;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 577280;
            result[1] += 0;
            result[2] += 0;
            result[3] += 20204819;
            result[4] += 0;
            result[5] += 32904991;
          } else {
            result[0] += 1118481;
            result[1] += 838860;
            result[2] += 838860;
            result[3] += 36909875;
            result[4] += 559240;
            result[5] += 13421772;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 2684354;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51002736;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 28908433;
            result[2] += 0;
            result[3] += 20648881;
            result[4] += 4129776;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 26843545;
            result[2] += 0;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cc0000))) ) ) {
            result[0] += 12684312;
            result[1] += 294984;
            result[2] += 0;
            result[3] += 294984;
            result[4] += 37757954;
            result[5] += 2654856;
          } else {
            result[0] += 0;
            result[1] += 44739242;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8947848;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
            result[0] += 4175662;
            result[1] += 0;
            result[2] += 12526987;
            result[3] += 11035679;
            result[4] += 3280877;
            result[5] += 22667882;
          } else {
            result[0] += 44068882;
            result[1] += 480910;
            result[2] += 1705046;
            result[3] += 2972900;
            result[4] += 2579428;
            result[5] += 1879922;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cc0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 925639;
            result[3] += 925639;
            result[4] += 0;
            result[5] += 51835812;
          } else {
            result[0] += 0;
            result[1] += 26843545;
            result[2] += 17895697;
            result[3] += 8947848;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4238454;
            result[3] += 19779454;
            result[4] += 2825636;
            result[5] += 26843545;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8739759;
            result[3] += 38080378;
            result[4] += 0;
            result[5] += 6866953;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 1789569;
            result[2] += 14316557;
            result[3] += 25053975;
            result[4] += 0;
            result[5] += 12526987;
          } else {
            result[0] += 0;
            result[1] += 1154561;
            result[2] += 40986919;
            result[3] += 10391049;
            result[4] += 0;
            result[5] += 1154561;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426c0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 2147483;
            result[1] += 0;
            result[2] += 30064771;
            result[3] += 15032385;
            result[4] += 4294967;
            result[5] += 2147483;
          } else {
            result[0] += 42579417;
            result[1] += 0;
            result[2] += 7405116;
            result[3] += 0;
            result[4] += 3702558;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13421772;
            result[3] += 40265318;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 2191309;
            result[1] += 0;
            result[2] += 39443577;
            result[3] += 9860894;
            result[4] += 0;
            result[5] += 2191309;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 22369621;
            result[3] += 0;
            result[4] += 0;
            result[5] += 31317469;
          } else {
            result[0] += 448460;
            result[1] += 0;
            result[2] += 50163475;
            result[3] += 2882958;
            result[4] += 0;
            result[5] += 192197;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 1104672;
            result[1] += 441869;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51477745;
            result[5] += 662803;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42620000))) ) ) {
            result[0] += 53175785;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 511305;
            result[5] += 0;
          } else {
            result[0] += 7609194;
            result[1] += 5918262;
            result[2] += 2113665;
            result[3] += 1268199;
            result[4] += 16909320;
            result[5] += 19868451;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1731841;
            result[4] += 32904991;
            result[5] += 19050258;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 819081;
            result[4] += 1265853;
            result[5] += 51602155;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42910000))) ) ) {
            result[0] += 1032444;
            result[1] += 4129776;
            result[2] += 0;
            result[3] += 12389328;
            result[4] += 30973321;
            result[5] += 5162220;
          } else {
            result[0] += 2158998;
            result[1] += 0;
            result[2] += 1151465;
            result[3] += 14249388;
            result[4] += 3022597;
            result[5] += 33104640;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 35791394;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17895697;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 11563373;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41297762;
            result[5] += 825955;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
            result[0] += 45135165;
            result[1] += 475107;
            result[2] += 0;
            result[3] += 475107;
            result[4] += 7126605;
            result[5] += 475107;
          } else {
            result[0] += 1423521;
            result[1] += 1626881;
            result[2] += 2236962;
            result[3] += 28063706;
            result[4] += 2236962;
            result[5] += 18099057;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 48323799;
            result[1] += 812619;
            result[2] += 325047;
            result[3] += 650095;
            result[4] += 3304654;
            result[5] += 270873;
          } else {
            result[0] += 7238708;
            result[1] += 1206451;
            result[2] += 37399996;
            result[3] += 3619354;
            result[4] += 603225;
            result[5] += 3619354;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 45298483;
            result[4] += 1677721;
            result[5] += 6710886;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2147483;
            result[3] += 8589934;
            result[4] += 1610612;
            result[5] += 41339060;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6442450;
            result[3] += 34359738;
            result[4] += 0;
            result[5] += 12884901;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 25455086;
            result[3] += 24529446;
            result[4] += 0;
            result[5] += 3702558;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 7669584;
            result[1] += 0;
            result[2] += 7669584;
            result[3] += 3834792;
            result[4] += 11504376;
            result[5] += 23008753;
          } else {
            result[0] += 1851279;
            result[1] += 0;
            result[2] += 46281975;
            result[3] += 0;
            result[4] += 1851279;
            result[5] += 3702558;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ca0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 13421772;
            result[2] += 0;
            result[3] += 13421772;
            result[4] += 0;
            result[5] += 26843545;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42182714;
            result[3] += 10226112;
            result[4] += 0;
            result[5] += 1278264;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 46366124;
            result[3] += 7320966;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 91149;
            result[1] += 0;
            result[2] += 52319847;
            result[3] += 1276093;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
            result[0] += 434713;
            result[1] += 217356;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52600307;
            result[5] += 434713;
          } else {
            result[0] += 3579139;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 33405301;
            result[5] += 16702650;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42800000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 20132659;
            result[3] += 0;
            result[4] += 33554431;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2604764;
            result[4] += 940609;
            result[5] += 50141717;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 2699350;
            result[1] += 0;
            result[2] += 0;
            result[3] += 8098052;
            result[4] += 6898341;
            result[5] += 35991346;
          } else {
            result[0] += 4859607;
            result[1] += 1388459;
            result[2] += 925639;
            result[3] += 28926234;
            result[4] += 1851279;
            result[5] += 15735871;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42420000))) ) ) {
            result[0] += 0;
            result[1] += 48318382;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5368709;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1851279;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51218719;
            result[5] += 617093;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 216480;
            result[1] += 52279969;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1190641;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
            result[0] += 12105912;
            result[1] += 0;
            result[2] += 1052688;
            result[3] += 4210752;
            result[4] += 12105912;
            result[5] += 24211825;
          } else {
            result[0] += 48285787;
            result[1] += 1117511;
            result[2] += 186251;
            result[3] += 465629;
            result[4] += 3352533;
            result[5] += 279377;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 494052;
            result[1] += 0;
            result[2] += 14986273;
            result[3] += 21244278;
            result[4] += 0;
            result[5] += 16962485;
          } else {
            result[0] += 35294291;
            result[1] += 5468129;
            result[2] += 1491308;
            result[3] += 1491308;
            result[4] += 8947848;
            result[5] += 994205;
          }
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b40000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4880644;
            result[3] += 2440322;
            result[4] += 0;
            result[5] += 46366124;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 32212254;
            result[4] += 21474836;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5711392;
            result[3] += 39979748;
            result[4] += 0;
            result[5] += 7995949;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 24778657;
            result[3] += 14454216;
            result[4] += 0;
            result[5] += 14454216;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42e40000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 12389328;
            result[2] += 6194664;
            result[3] += 8259552;
            result[4] += 0;
            result[5] += 26843545;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30001609;
            result[3] += 23685481;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 5368709;
            result[1] += 1789569;
            result[2] += 46528812;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 33234865;
            result[1] += 0;
            result[2] += 20452225;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 29826161;
            result[3] += 23860929;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47284043;
            result[3] += 5417963;
            result[4] += 0;
            result[5] += 985084;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 683911;
            result[1] += 0;
            result[2] += 48899707;
            result[3] += 4103471;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53319371;
            result[3] += 367719;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 273913;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51769695;
            result[5] += 1643482;
          } else {
            result[0] += 2902004;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 24667041;
            result[5] += 26118044;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1819901;
            result[4] += 227487;
            result[5] += 51639702;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 3456250;
            result[1] += 2304167;
            result[2] += 460833;
            result[3] += 7373334;
            result[4] += 5990834;
            result[5] += 34101671;
          } else {
            result[0] += 1385473;
            result[1] += 1039104;
            result[2] += 3117314;
            result[3] += 29441308;
            result[4] += 0;
            result[5] += 18703889;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42420000))) ) ) {
            result[0] += 0;
            result[1] += 49117977;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4569114;
            result[5] += 0;
          } else {
            result[0] += 6927366;
            result[1] += 4906884;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41275559;
            result[5] += 577280;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
            result[0] += 43994829;
            result[1] += 446648;
            result[2] += 44664;
            result[3] += 3126536;
            result[4] += 3349860;
            result[5] += 2724552;
          } else {
            result[0] += 12561402;
            result[1] += 1720740;
            result[2] += 8431626;
            result[3] += 11701032;
            result[4] += 2925258;
            result[5] += 16347030;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3834792;
            result[3] += 7669584;
            result[4] += 42182714;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4006499;
            result[3] += 6410398;
            result[4] += 1602599;
            result[5] += 41667593;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 2421974;
            result[2] += 6458597;
            result[3] += 35925948;
            result[4] += 403662;
            result[5] += 8476909;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 2753184;
            result[4] += 6882960;
            result[5] += 26155249;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 46152060;
            result[3] += 1883757;
            result[4] += 0;
            result[5] += 5651272;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 42182714;
            result[1] += 0;
            result[2] += 11504376;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b60000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4880644;
            result[3] += 19522578;
            result[4] += 0;
            result[5] += 29283867;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42e30000))) ) ) {
            result[0] += 26843545;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26843545;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 44123398;
            result[3] += 8694265;
            result[4] += 0;
            result[5] += 869426;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 20648881;
            result[3] += 33038209;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 48709480;
            result[3] += 4977611;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52930934;
            result[3] += 756156;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ca0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
            result[0] += 1066630;
            result[1] += 2311033;
            result[2] += 0;
            result[3] += 0;
            result[4] += 49242795;
            result[5] += 1066630;
          } else {
            result[0] += 0;
            result[1] += 2516582;
            result[2] += 0;
            result[3] += 0;
            result[4] += 32715571;
            result[5] += 18454937;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42890000))) ) ) {
            result[0] += 925639;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1851279;
            result[4] += 11107674;
            result[5] += 39802498;
          } else {
            result[0] += 47055906;
            result[1] += 892659;
            result[2] += 0;
            result[3] += 892659;
            result[4] += 4335774;
            result[5] += 510091;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 606633;
            result[2] += 242653;
            result[3] += 4003783;
            result[4] += 1152604;
            result[5] += 47681416;
          } else {
            result[0] += 6881295;
            result[1] += 1493111;
            result[2] += 1947536;
            result[3] += 15190785;
            result[4] += 6881295;
            result[5] += 21293066;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 48318382;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5368709;
            result[5] += 0;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 45427538;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4129776;
            result[4] += 4129776;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 2440322;
            result[1] += 0;
            result[2] += 4880644;
            result[3] += 34164512;
            result[4] += 0;
            result[5] += 12201611;
          } else {
            result[0] += 7064090;
            result[1] += 0;
            result[2] += 36733272;
            result[3] += 1412818;
            result[4] += 0;
            result[5] += 8476909;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 49941480;
            result[1] += 0;
            result[2] += 1248537;
            result[3] += 1248537;
            result[4] += 1248537;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42e50000))) ) ) {
            result[0] += 13765920;
            result[1] += 0;
            result[2] += 24778657;
            result[3] += 11012736;
            result[4] += 0;
            result[5] += 4129776;
          } else {
            result[0] += 45097156;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8589934;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 22156577;
            result[3] += 25991369;
            result[4] += 426088;
            result[5] += 5113056;
          } else {
            result[0] += 894784;
            result[1] += 0;
            result[2] += 41831191;
            result[3] += 9842633;
            result[4] += 0;
            result[5] += 1118481;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 17895697;
            result[4] += 0;
            result[5] += 17895697;
          } else {
            result[0] += 76477;
            result[1] += 0;
            result[2] += 51392771;
            result[3] += 2217842;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x421a0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 238609;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52971263;
            result[5] += 477218;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 10737418;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x426a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 10737418;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2518831;
            result[4] += 1295398;
            result[5] += 49872860;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
            result[0] += 47609307;
            result[1] += 1012963;
            result[2] += 0;
            result[3] += 3038891;
            result[4] += 1012963;
            result[5] += 1012963;
          } else {
            result[0] += 785185;
            result[1] += 98148;
            result[2] += 588889;
            result[3] += 18059277;
            result[4] += 5300005;
            result[5] += 28855584;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x422e0000))) ) ) {
            result[0] += 0;
            result[1] += 49274453;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4412637;
            result[5] += 0;
          } else {
            result[0] += 4684108;
            result[1] += 7926953;
            result[2] += 360316;
            result[3] += 0;
            result[4] += 39274449;
            result[5] += 1441264;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
            result[0] += 46366124;
            result[1] += 610080;
            result[2] += 797797;
            result[3] += 1877171;
            result[4] += 2487251;
            result[5] += 1548666;
          } else {
            result[0] += 8947848;
            result[1] += 921102;
            result[2] += 15527148;
            result[3] += 13816530;
            result[4] += 4079166;
            result[5] += 10395294;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 138726;
            result[1] += 53548364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 53687091;
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
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13421772;
            result[3] += 0;
            result[4] += 20132659;
            result[5] += 20132659;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2064888;
            result[3] += 45427538;
            result[4] += 0;
            result[5] += 6194664;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 11744051;
            result[3] += 39426457;
            result[4] += 0;
            result[5] += 2516582;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36733272;
            result[3] += 5651272;
            result[4] += 0;
            result[5] += 11302545;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 22369621;
            result[3] += 8947848;
            result[4] += 0;
            result[5] += 22369621;
          } else {
            result[0] += 1359166;
            result[1] += 0;
            result[2] += 43493339;
            result[3] += 8834584;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42e20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428e0000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 694229;
            result[1] += 0;
            result[2] += 46513385;
            result[3] += 5785246;
            result[4] += 0;
            result[5] += 694229;
          } else {
            result[0] += 95358;
            result[1] += 0;
            result[2] += 51779912;
            result[3] += 1811820;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 247405;
            result[1] += 1237029;
            result[2] += 0;
            result[3] += 0;
            result[4] += 50965625;
            result[5] += 1237029;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40875398;
            result[5] += 12811692;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 20132659;
            result[2] += 0;
            result[3] += 0;
            result[4] += 33554431;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 10324440;
            result[4] += 26843545;
            result[5] += 16519104;
          } else {
            result[0] += 80369;
            result[1] += 0;
            result[2] += 160739;
            result[3] += 1366288;
            result[4] += 803698;
            result[5] += 51275994;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 47370962;
            result[1] += 0;
            result[2] += 0;
            result[3] += 789516;
            result[4] += 4737096;
            result[5] += 789516;
          } else {
            result[0] += 943718;
            result[1] += 734003;
            result[2] += 1363148;
            result[3] += 17930649;
            result[4] += 3565158;
            result[5] += 29150412;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 5694085;
            result[2] += 0;
            result[3] += 0;
            result[4] += 46366124;
            result[5] += 1626881;
          } else {
            result[0] += 0;
            result[1] += 50861454;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2825636;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 0;
            result[1] += 46281975;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7405116;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
            result[0] += 11930464;
            result[1] += 11184810;
            result[2] += 0;
            result[3] += 10439156;
            result[4] += 17150043;
            result[5] += 2982616;
          } else {
            result[0] += 49338281;
            result[1] += 414172;
            result[2] += 0;
            result[3] += 569486;
            result[4] += 2381491;
            result[5] += 983659;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 639132;
            result[2] += 4793490;
            result[3] += 18215263;
            result[4] += 2236962;
            result[5] += 27802243;
          } else {
            result[0] += 39802498;
            result[1] += 4165377;
            result[2] += 2776918;
            result[3] += 1851279;
            result[4] += 4165377;
            result[5] += 925639;
          }
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2119227;
            result[3] += 41678136;
            result[4] += 0;
            result[5] += 9889727;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14092861;
            result[3] += 26172456;
            result[4] += 0;
            result[5] += 13421772;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 20132659;
            result[4] += 0;
            result[5] += 33554431;
          } else {
            result[0] += 3702558;
            result[1] += 0;
            result[2] += 37025580;
            result[3] += 9256395;
            result[4] += 1851279;
            result[5] += 1851279;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14641933;
            result[3] += 29283867;
            result[4] += 0;
            result[5] += 9761289;
          } else {
            result[0] += 526344;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 16316664;
            result[4] += 526344;
            result[5] += 526344;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 50009893;
            result[3] += 2941758;
            result[4] += 0;
            result[5] += 735439;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 48806446;
            result[3] += 0;
            result[4] += 4880644;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 22369621;
            result[3] += 13421772;
            result[4] += 0;
            result[5] += 17895697;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 6959437;
            result[1] += 0;
            result[2] += 43745037;
            result[3] += 1988410;
            result[4] += 0;
            result[5] += 994205;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 810371;
            result[1] += 0;
            result[2] += 47811900;
            result[3] += 5064819;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52572830;
            result[3] += 1114260;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42900000))) ) ) {
            result[0] += 287096;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51964510;
            result[5] += 1435483;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12201611;
            result[3] += 0;
            result[4] += 17082256;
            result[5] += 24403223;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x425a0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
            result[0] += 19387005;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 25352237;
            result[5] += 8947848;
          } else {
            result[0] += 0;
            result[1] += 916748;
            result[2] += 0;
            result[3] += 4010775;
            result[4] += 1145935;
            result[5] += 47613631;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 7754802;
            result[1] += 2386092;
            result[2] += 0;
            result[3] += 8947848;
            result[4] += 4772185;
            result[5] += 29826161;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 426088;
            result[3] += 43887066;
            result[4] += 0;
            result[5] += 9373936;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a50000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 32212254;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53564797;
            result[2] += 0;
            result[3] += 0;
            result[4] += 122294;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 11245269;
            result[1] += 4715758;
            result[2] += 0;
            result[3] += 362750;
            result[4] += 34824059;
            result[5] += 2539254;
          } else {
            result[0] += 46030926;
            result[1] += 986377;
            result[2] += 187881;
            result[3] += 2113665;
            result[4] += 3428834;
            result[5] += 939406;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 3091926;
            result[1] += 983794;
            result[2] += 5200058;
            result[3] += 21643487;
            result[4] += 6746021;
            result[5] += 16021802;
          } else {
            result[0] += 16496033;
            result[1] += 0;
            result[2] += 28193221;
            result[3] += 4198990;
            result[4] += 299927;
            result[5] += 4498918;
          }
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 0;
            result[4] += 37580963;
            result[5] += 5368709;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3355443;
            result[3] += 0;
            result[4] += 0;
            result[5] += 50331647;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d90000))) ) ) {
            result[0] += 0;
            result[1] += 756156;
            result[2] += 12854655;
            result[3] += 30246248;
            result[4] += 0;
            result[5] += 9830030;
          } else {
            result[0] += 0;
            result[1] += 16106127;
            result[2] += 37580963;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 49557314;
            result[2] += 4129776;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 31724190;
            result[1] += 0;
            result[2] += 12201611;
            result[3] += 2440322;
            result[4] += 0;
            result[5] += 7320966;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 6710886;
            result[2] += 0;
            result[3] += 20132659;
            result[4] += 0;
            result[5] += 26843545;
          } else {
            result[0] += 889841;
            result[1] += 0;
            result[2] += 43305609;
            result[3] += 9195026;
            result[4] += 0;
            result[5] += 296613;
          }
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40265318;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 2684354;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30841520;
            result[3] += 22845570;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41297762;
            result[3] += 0;
            result[4] += 0;
            result[5] += 12389328;
          } else {
            result[0] += 23008753;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 30678337;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42e10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 51292128;
            result[3] += 2394963;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53360725;
            result[3] += 326365;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 265777;
            result[1] += 531555;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51826647;
            result[5] += 1063110;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 5804009;
            result[2] += 1451002;
            result[3] += 0;
            result[4] += 33373056;
            result[5] += 13059022;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x426a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 37167986;
            result[5] += 16519104;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1356455;
            result[4] += 1142278;
            result[5] += 51188356;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 247405;
            result[2] += 2721465;
            result[3] += 5442930;
            result[4] += 9896238;
            result[5] += 35379050;
          } else {
            result[0] += 2772572;
            result[1] += 0;
            result[2] += 6049249;
            result[3] += 26717519;
            result[4] += 4032833;
            result[5] += 14114915;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b60000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 894784;
            result[1] += 3579139;
            result[2] += 0;
            result[3] += 0;
            result[4] += 49213166;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425c0000))) ) ) {
            result[0] += 0;
            result[1] += 53559568;
            result[2] += 0;
            result[3] += 0;
            result[4] += 127522;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 28908433;
            result[2] += 0;
            result[3] += 0;
            result[4] += 24778657;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42820000))) ) ) {
            result[0] += 48291403;
            result[1] += 539568;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4316550;
            result[5] += 539568;
          } else {
            result[0] += 2477865;
            result[1] += 0;
            result[2] += 4336265;
            result[3] += 17964526;
            result[4] += 7020619;
            result[5] += 21887814;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 10956549;
            result[1] += 15339168;
            result[2] += 0;
            result[3] += 0;
            result[4] += 27391373;
            result[5] += 0;
          } else {
            result[0] += 46672697;
            result[1] += 755396;
            result[2] += 1456835;
            result[3] += 1942447;
            result[4] += 1942447;
            result[5] += 917266;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 10303583;
            result[4] += 4880644;
            result[5] += 38502863;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4473924;
            result[3] += 49213166;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 23008753;
            result[4] += 0;
            result[5] += 30678337;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1579032;
            result[3] += 52108059;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7669584;
            result[3] += 30678337;
            result[4] += 0;
            result[5] += 15339168;
          } else {
            result[0] += 4473924;
            result[1] += 0;
            result[2] += 33554431;
            result[3] += 6710886;
            result[4] += 0;
            result[5] += 8947848;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cc0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5965232;
            result[3] += 7456540;
            result[4] += 0;
            result[5] += 40265318;
          } else {
            result[0] += 0;
            result[1] += 40265318;
            result[2] += 0;
            result[3] += 13421772;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c80000))) ) ) {
            result[0] += 2105376;
            result[1] += 1052688;
            result[2] += 26317201;
            result[3] += 18948385;
            result[4] += 4210752;
            result[5] += 1052688;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 712030;
            result[1] += 0;
            result[2] += 42864229;
            result[3] += 8544364;
            result[4] += 0;
            result[5] += 1566466;
          } else {
            result[0] += 29441308;
            result[1] += 0;
            result[2] += 24245783;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 40265318;
            result[1] += 0;
            result[2] += 13421772;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 51291138;
            result[3] += 2218474;
            result[4] += 0;
            result[5] += 177477;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x41ec0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 732096;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52954994;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5804009;
            result[5] += 47883081;
          } else {
            result[0] += 39558909;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 13186303;
            result[5] += 941878;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1560671;
            result[4] += 624268;
            result[5] += 51502151;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 14810232;
            result[4] += 16661511;
            result[5] += 22215348;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 473709;
            result[2] += 315806;
            result[3] += 9000482;
            result[4] += 6158225;
            result[5] += 37738867;
          } else {
            result[0] += 0;
            result[1] += 325376;
            result[2] += 1952257;
            result[3] += 30259996;
            result[4] += 1301505;
            result[5] += 19847954;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 2334221;
            result[1] += 7002664;
            result[2] += 0;
            result[3] += 1167110;
            result[4] += 43183095;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 50957239;
            result[2] += 2729852;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 45200778;
            result[1] += 1518603;
            result[2] += 223324;
            result[3] += 893296;
            result[4] += 4421815;
            result[5] += 1429273;
          } else {
            result[0] += 13834750;
            result[1] += 2477865;
            result[2] += 8879018;
            result[3] += 14247728;
            result[4] += 2684354;
            result[5] += 11563373;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42480000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42900000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53550134;
            result[2] += 0;
            result[3] += 0;
            result[4] += 136956;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 53687091;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42e50000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 9761289;
            result[2] += 0;
            result[3] += 0;
            result[4] += 34164512;
            result[5] += 9761289;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2556528;
            result[3] += 14827863;
            result[4] += 1022611;
            result[5] += 35280088;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 559240;
            result[2] += 5033164;
            result[3] += 38028356;
            result[4] += 0;
            result[5] += 10066329;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32494818;
            result[3] += 8476909;
            result[4] += 0;
            result[5] += 12715363;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e10000))) ) ) {
            result[0] += 0;
            result[1] += 2147483;
            result[2] += 51539607;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 17895697;
            result[4] += 0;
            result[5] += 35791394;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33554431;
            result[3] += 13421772;
            result[4] += 0;
            result[5] += 6710886;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37689422;
            result[3] += 14641933;
            result[4] += 0;
            result[5] += 1355734;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 39045157;
            result[1] += 0;
            result[2] += 14641933;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 153831;
            result[1] += 0;
            result[2] += 51148876;
            result[3] += 2230552;
            result[4] += 0;
            result[5] += 153831;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d20000))) ) ) {
            result[0] += 303316;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53080457;
            result[5] += 303316;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 1376592;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 30285025;
            result[5] += 22025473;
          } else {
            result[0] += 42705640;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10981450;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x425c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 46976204;
            result[5] += 6710886;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1755001;
            result[4] += 1356137;
            result[5] += 50575952;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 1929928;
            result[2] += 0;
            result[3] += 7017920;
            result[4] += 6316128;
            result[5] += 38423114;
          } else {
            result[0] += 422733;
            result[1] += 0;
            result[2] += 845466;
            result[3] += 39314169;
            result[4] += 1690932;
            result[5] += 11413791;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4129776;
            result[4] += 49557314;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53164589;
            result[2] += 0;
            result[3] += 522502;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
            result[0] += 4216263;
            result[1] += 13773128;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35697699;
            result[5] += 0;
          } else {
            result[0] += 46970493;
            result[1] += 411220;
            result[2] += 319837;
            result[3] += 1690572;
            result[4] += 2741468;
            result[5] += 1553498;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 1460873;
            result[1] += 0;
            result[2] += 11869594;
            result[3] += 16252214;
            result[4] += 2556528;
            result[5] += 21547880;
          } else {
            result[0] += 32521987;
            result[1] += 8259552;
            result[2] += 1548666;
            result[3] += 2064888;
            result[4] += 9291996;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 13421772;
            result[4] += 26843545;
            result[5] += 13421772;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 865920;
            result[3] += 45027882;
            result[4] += 0;
            result[5] += 7793287;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 1491308;
            result[2] += 13421772;
            result[3] += 1491308;
            result[4] += 0;
            result[5] += 37282702;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 16106127;
            result[3] += 30870077;
            result[4] += 0;
            result[5] += 6710886;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42eb0000))) ) ) {
            result[0] += 0;
            result[1] += 1579032;
            result[2] += 39475802;
            result[3] += 3158064;
            result[4] += 1579032;
            result[5] += 7895160;
          } else {
            result[0] += 30678337;
            result[1] += 0;
            result[2] += 7669584;
            result[3] += 0;
            result[4] += 0;
            result[5] += 15339168;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 26843545;
            result[1] += 0;
            result[2] += 20878313;
            result[3] += 0;
            result[4] += 0;
            result[5] += 5965232;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 32212254;
            result[4] += 0;
            result[5] += 3579139;
          } else {
            result[0] += 629145;
            result[1] += 0;
            result[2] += 42781900;
            result[3] += 8598323;
            result[4] += 0;
            result[5] += 1677721;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 294579;
            result[1] += 73644;
            result[2] += 51919614;
            result[3] += 1399252;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52941437;
            result[5] += 745654;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51698680;
            result[5] += 1988410;
          } else {
            result[0] += 4473924;
            result[1] += 0;
            result[2] += 6710886;
            result[3] += 0;
            result[4] += 17895697;
            result[5] += 24606583;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42db0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 34513130;
            result[5] += 19173961;
          } else {
            result[0] += 49557314;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4129776;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3834792;
            result[4] += 34513130;
            result[5] += 15339168;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 131909;
            result[3] += 2572231;
            result[4] += 1451002;
            result[5] += 49531947;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 7158278;
            result[4] += 0;
            result[5] += 3579139;
          } else {
            result[0] += 730436;
            result[1] += 365218;
            result[2] += 365218;
            result[3] += 7669584;
            result[4] += 1460873;
            result[5] += 43095760;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 745654;
            result[1] += 497102;
            result[2] += 3479718;
            result[3] += 34051534;
            result[4] += 745654;
            result[5] += 14167426;
          }
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b80000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42260000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 40265318;
            result[2] += 0;
            result[3] += 2236962;
            result[4] += 11184810;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53406740;
            result[2] += 0;
            result[3] += 0;
            result[4] += 280350;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
            result[0] += 5280697;
            result[1] += 20682731;
            result[2] += 0;
            result[3] += 3520464;
            result[4] += 22883022;
            result[5] += 1320174;
          } else {
            result[0] += 48601450;
            result[1] += 239888;
            result[2] += 191910;
            result[3] += 719666;
            result[4] += 2638775;
            result[5] += 1295398;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 2296773;
            result[1] += 1435483;
            result[2] += 8899999;
            result[3] += 21819352;
            result[4] += 5741934;
            result[5] += 13493546;
          } else {
            result[0] += 44212898;
            result[1] += 789516;
            result[2] += 3947580;
            result[3] += 0;
            result[4] += 4737096;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 3660483;
            result[2] += 610080;
            result[3] += 7320966;
            result[4] += 4880644;
            result[5] += 37214915;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4183409;
            result[3] += 28586632;
            result[4] += 0;
            result[5] += 20917048;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 18454937;
            result[3] += 28940697;
            result[4] += 0;
            result[5] += 6291455;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47551423;
            result[3] += 0;
            result[4] += 0;
            result[5] += 6135667;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 15032385;
            result[1] += 1073741;
            result[2] += 12884901;
            result[3] += 4294967;
            result[4] += 13958643;
            result[5] += 6442450;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
            result[0] += 21474836;
            result[1] += 0;
            result[2] += 18790481;
            result[3] += 0;
            result[4] += 0;
            result[5] += 13421772;
          } else {
            result[0] += 1046985;
            result[1] += 0;
            result[2] += 47754173;
            result[3] += 4304273;
            result[4] += 116331;
            result[5] += 465326;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42420000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x426a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x427c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x423c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35791394;
            result[5] += 17895697;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53185342;
            result[5] += 501748;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x424a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 49852298;
            result[5] += 3834792;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1322342;
            result[4] += 1851279;
            result[5] += 50513470;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42600000))) ) ) {
            result[0] += 50529027;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3158064;
            result[5] += 0;
          } else {
            result[0] += 778073;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3890368;
            result[4] += 20229918;
            result[5] += 28788730;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42620000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 921666;
            result[2] += 460833;
            result[3] += 12442501;
            result[4] += 4838750;
            result[5] += 35023338;
          } else {
            result[0] += 0;
            result[1] += 282563;
            result[2] += 1130254;
            result[3] += 35037891;
            result[4] += 0;
            result[5] += 17236381;
          }
        }
      }
    }
  } else {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x425e0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42420000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 35791394;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17895697;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 53299924;
            result[2] += 0;
            result[3] += 0;
            result[4] += 387166;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 17895697;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 35791394;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428a0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 8476909;
            result[1] += 15697979;
            result[2] += 0;
            result[3] += 0;
            result[4] += 28884282;
            result[5] += 627919;
          } else {
            result[0] += 45252176;
            result[1] += 1823765;
            result[2] += 797897;
            result[3] += 1253838;
            result[4] += 3533545;
            result[5] += 1025867;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 4055499;
            result[1] += 2124309;
            result[2] += 3476142;
            result[3] += 16415117;
            result[4] += 7531642;
            result[5] += 20084379;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40728138;
            result[3] += 7405116;
            result[4] += 0;
            result[5] += 5553837;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 27917287;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 15032385;
          } else {
            result[0] += 51265744;
            result[1] += 0;
            result[2] += 500968;
            result[3] += 250484;
            result[4] += 1669893;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 3843944;
            result[1] += 896920;
            result[2] += 29085846;
            result[3] += 14863251;
            result[4] += 640657;
            result[5] += 4356470;
          } else {
            result[0] += 367719;
            result[1] += 0;
            result[2] += 51039508;
            result[3] += 2059230;
            result[4] += 0;
            result[5] += 220631;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x423c0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 1451002;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 43530073;
            result[5] += 8706014;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
            result[0] += 32039070;
            result[1] += 0;
            result[2] += 0;
            result[3] += 865920;
            result[4] += 14720654;
            result[5] += 6061445;
          } else {
            result[0] += 57358;
            result[1] += 286790;
            result[2] += 57358;
            result[3] += 1892814;
            result[4] += 3039974;
            result[5] += 48352796;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 8765239;
            result[4] += 1095654;
            result[5] += 43826196;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 848807;
            result[3] += 33740108;
            result[4] += 0;
            result[5] += 19098174;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42520000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b80000))) ) ) {
            result[0] += 0;
            result[1] += 28633115;
            result[2] += 0;
            result[3] += 0;
            result[4] += 25053975;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53558035;
            result[2] += 0;
            result[3] += 0;
            result[4] += 129055;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 1220161;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52466930;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d60000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 41359606;
            result[1] += 1607932;
            result[2] += 0;
            result[3] += 1429273;
            result[4] += 7593016;
            result[5] += 1697262;
          } else {
            result[0] += 3652183;
            result[1] += 0;
            result[2] += 13878295;
            result[3] += 20269616;
            result[4] += 2008700;
            result[5] += 13878295;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 49683031;
            result[1] += 1552594;
            result[2] += 408577;
            result[3] += 81715;
            result[4] += 1961172;
            result[5] += 0;
          } else {
            result[0] += 16339549;
            result[1] += 0;
            result[2] += 37347541;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428e0000))) ) ) {
            result[0] += 0;
            result[1] += 21474836;
            result[2] += 0;
            result[3] += 21474836;
            result[4] += 10737418;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1988410;
            result[4] += 0;
            result[5] += 51698680;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3834792;
            result[3] += 3834792;
            result[4] += 7669584;
            result[5] += 38347922;
          } else {
            result[0] += 0;
            result[1] += 1106950;
            result[2] += 8855602;
            result[3] += 37082836;
            result[4] += 0;
            result[5] += 6641702;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42960000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 33554431;
            result[1] += 2236962;
            result[2] += 4473924;
            result[3] += 13421772;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30910749;
            result[3] += 21149460;
            result[4] += 0;
            result[5] += 1626881;
          } else {
            result[0] += 1789569;
            result[1] += 0;
            result[2] += 47423597;
            result[3] += 2684354;
            result[4] += 0;
            result[5] += 1789569;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a00000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40265318;
            result[3] += 0;
            result[4] += 13421772;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 46017506;
            result[2] += 7669584;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 7669584;
            result[1] += 0;
            result[2] += 46017506;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 872960;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 12657932;
            result[4] += 0;
            result[5] += 4364804;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 49852298;
            result[3] += 3137557;
            result[4] += 0;
            result[5] += 697234;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42015984;
            result[3] += 11671106;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52802139;
            result[3] += 884952;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c20000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 183232;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52221232;
            result[5] += 1282626;
          } else {
            result[0] += 2876094;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 32595733;
            result[5] += 18215263;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 35791394;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17895697;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42620000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42850000))) ) ) {
            result[0] += 4473924;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 44739242;
            result[5] += 4473924;
          } else {
            result[0] += 51792252;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1263225;
            result[5] += 631612;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 363980;
            result[2] += 60663;
            result[3] += 3215159;
            result[4] += 1516584;
            result[5] += 48530703;
          } else {
            result[0] += 3555436;
            result[1] += 1777718;
            result[2] += 1777718;
            result[3] += 19199357;
            result[4] += 6044242;
            result[5] += 21332619;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a30000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42320000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4880644;
            result[4] += 48806446;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 253839;
            result[1] += 52925572;
            result[2] += 0;
            result[3] += 126919;
            result[4] += 380759;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
            result[0] += 2334221;
            result[1] += 15405860;
            result[2] += 0;
            result[3] += 0;
            result[4] += 34546476;
            result[5] += 1400532;
          } else {
            result[0] += 46574909;
            result[1] += 246950;
            result[2] += 395121;
            result[3] += 1679265;
            result[4] += 2815238;
            result[5] += 1975605;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 1383039;
            result[1] += 1634501;
            result[2] += 7292391;
            result[3] += 22128637;
            result[4] += 2011694;
            result[5] += 19236826;
          } else {
            result[0] += 31946037;
            result[1] += 443694;
            result[2] += 12423459;
            result[3] += 1331084;
            result[4] += 7542814;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 20648881;
            result[4] += 0;
            result[5] += 33038209;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9227468;
            result[3] += 41104179;
            result[4] += 0;
            result[5] += 3355443;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43010000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40775005;
            result[3] += 9514168;
            result[4] += 0;
            result[5] += 3397917;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 5965232;
            result[4] += 0;
            result[5] += 29826161;
          } else {
            result[0] += 1533916;
            result[1] += 0;
            result[2] += 45506201;
            result[3] += 6135667;
            result[4] += 0;
            result[5] += 511305;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 46976204;
            result[4] += 0;
            result[5] += 6710886;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42f70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52822719;
            result[3] += 864371;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47883081;
            result[3] += 5804009;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42460000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42940000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53427733;
            result[5] += 259357;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 43925801;
            result[5] += 9761289;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 0;
            result[4] += 39370533;
            result[5] += 3579139;
          } else {
            result[0] += 45845156;
            result[1] += 1206451;
            result[2] += 0;
            result[3] += 1206451;
            result[4] += 3016128;
            result[5] += 2412902;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 159308;
            result[3] += 1115162;
            result[4] += 1274471;
            result[5] += 51138149;
          } else {
            result[0] += 1120276;
            result[1] += 947926;
            result[2] += 1120276;
            result[3] += 17407371;
            result[4] += 5170506;
            result[5] += 27920734;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 4169871;
            result[1] += 7818508;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41698711;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 51089328;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2597762;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42950000))) ) ) {
            result[0] += 48299139;
            result[1] += 577280;
            result[2] += 432960;
            result[3] += 962134;
            result[4] += 2790189;
            result[5] += 625387;
          } else {
            result[0] += 13483059;
            result[1] += 245146;
            result[2] += 15444231;
            result[3] += 13237912;
            result[4] += 3677198;
            result[5] += 7599542;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c40000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42cf0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3579139;
            result[3] += 33643910;
            result[4] += 0;
            result[5] += 16464041;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 6316128;
            result[4] += 47370962;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2982616;
            result[3] += 4971026;
            result[4] += 7953643;
            result[5] += 37779804;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 9761289;
            result[4] += 24403223;
            result[5] += 19522578;
          } else {
            result[0] += 5965232;
            result[1] += 0;
            result[2] += 0;
            result[3] += 44739242;
            result[4] += 0;
            result[5] += 2982616;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 4382619;
            result[1] += 0;
            result[2] += 17530478;
            result[3] += 19721788;
            result[4] += 3286964;
            result[5] += 8765239;
          } else {
            result[0] += 1342177;
            result[1] += 0;
            result[2] += 48318382;
            result[3] += 4026531;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42e90000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 18626133;
            result[3] += 25200063;
            result[4] += 0;
            result[5] += 9860894;
          } else {
            result[0] += 0;
            result[1] += 360316;
            result[2] += 43778399;
            result[3] += 9007901;
            result[4] += 0;
            result[5] += 540474;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42e60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 0;
            result[4] += 0;
            result[5] += 35791394;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38876859;
            result[3] += 14810232;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 397682;
            result[1] += 0;
            result[2] += 49710269;
            result[3] += 3579139;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53444711;
            result[3] += 242379;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 44212898;
            result[2] += 0;
            result[3] += 0;
            result[4] += 9474192;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 17895697;
            result[4] += 35791394;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
            result[0] += 483667;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52719756;
            result[5] += 483667;
          } else {
            result[0] += 12997927;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 16388690;
            result[5] += 24300472;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
            result[0] += 2949840;
            result[1] += 16519104;
            result[2] += 0;
            result[3] += 0;
            result[4] += 34218146;
            result[5] += 0;
          } else {
            result[0] += 42229480;
            result[1] += 4910404;
            result[2] += 436480;
            result[3] += 1091201;
            result[4] += 4910404;
            result[5] += 109120;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 90534;
            result[3] += 905347;
            result[4] += 905347;
            result[5] += 51785861;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 468201;
            result[3] += 12641437;
            result[4] += 6554819;
            result[5] += 34022633;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 1897070;
            result[1] += 189707;
            result[2] += 2181630;
            result[3] += 23428818;
            result[4] += 6070625;
            result[5] += 19919238;
          } else {
            result[0] += 21824020;
            result[1] += 4146563;
            result[2] += 5456005;
            result[3] += 4364804;
            result[4] += 10693770;
            result[5] += 7201926;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42870000))) ) ) {
            result[0] += 13421772;
            result[1] += 0;
            result[2] += 0;
            result[3] += 40265318;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 48318382;
            result[3] += 5368709;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 53047959;
            result[1] += 0;
            result[2] += 182609;
            result[3] += 0;
            result[4] += 456522;
            result[5] += 0;
          } else {
            result[0] += 30198988;
            result[1] += 0;
            result[2] += 23488102;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 28422577;
            result[4] += 0;
            result[5] += 25264513;
          } else {
            result[0] += 2064888;
            result[1] += 0;
            result[2] += 30973321;
            result[3] += 20648881;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1491308;
            result[1] += 0;
            result[2] += 49213166;
            result[3] += 1491308;
            result[4] += 0;
            result[5] += 1491308;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 47721858;
            result[4] += 0;
            result[5] += 5965232;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 30344877;
            result[1] += 0;
            result[2] += 23342213;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 493548;
            result[1] += 0;
            result[2] += 49245156;
            result[3] += 3783870;
            result[4] += 0;
            result[5] += 164516;
          }
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d20000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53052991;
            result[5] += 634099;
          } else {
            result[0] += 20364069;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 29620464;
            result[5] += 3702558;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x423a0000))) ) ) {
            result[0] += 0;
            result[1] += 47370962;
            result[2] += 0;
            result[3] += 0;
            result[4] += 6316128;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 51486800;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2200290;
            result[5] += 0;
          } else {
            result[0] += 4473924;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40265318;
            result[5] += 8947848;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 6316128;
            result[2] += 0;
            result[3] += 7368816;
            result[4] += 32633329;
            result[5] += 7368816;
          } else {
            result[0] += 9636144;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4129776;
            result[5] += 39921170;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1843333;
            result[4] += 998472;
            result[5] += 50845285;
          } else {
            result[0] += 8947848;
            result[1] += 0;
            result[2] += 8947848;
            result[3] += 0;
            result[4] += 20132659;
            result[5] += 15658734;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 1040447;
            result[2] += 0;
            result[3] += 7907401;
            result[4] += 5826506;
            result[5] += 38912736;
          } else {
            result[0] += 12472758;
            result[1] += 1084587;
            result[2] += 0;
            result[3] += 6507526;
            result[4] += 18980284;
            result[5] += 14641933;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 10157017;
            result[4] += 0;
            result[5] += 43530073;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1348921;
            result[3] += 33183478;
            result[4] += 0;
            result[5] += 19154690;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42620000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 48806446;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4880644;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 7090747;
            result[1] += 14181495;
            result[2] += 0;
            result[3] += 0;
            result[4] += 31401883;
            result[5] += 1012963;
          } else {
            result[0] += 0;
            result[1] += 43925801;
            result[2] += 0;
            result[3] += 0;
            result[4] += 9761289;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 14810232;
            result[1] += 1851279;
            result[2] += 2468372;
            result[3] += 18512790;
            result[4] += 2776918;
            result[5] += 13267499;
          } else {
            result[0] += 47745436;
            result[1] += 583555;
            result[2] += 1167110;
            result[3] += 1114060;
            result[4] += 2493372;
            result[5] += 583555;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2064888;
            result[3] += 39232874;
            result[4] += 0;
            result[5] += 12389328;
          } else {
            result[0] += 920350;
            result[1] += 0;
            result[2] += 24542670;
            result[3] += 17793435;
            result[4] += 920350;
            result[5] += 9510284;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 6151645;
            result[1] += 279620;
            result[2] += 35511773;
            result[3] += 8108987;
            result[4] += 279620;
            result[5] += 3355443;
          } else {
            result[0] += 1053979;
            result[1] += 0;
            result[2] += 49668793;
            result[3] += 2898444;
            result[4] += 0;
            result[5] += 65873;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42340000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x423e0000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 872960;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51941169;
            result[5] += 872960;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
            result[0] += 16404388;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 29826161;
            result[5] += 7456540;
          } else {
            result[0] += 0;
            result[1] += 491977;
            result[2] += 184491;
            result[3] += 1967911;
            result[4] += 2090906;
            result[5] += 48951803;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 6000321;
            result[1] += 2210644;
            result[2] += 0;
            result[3] += 4737096;
            result[4] += 7895160;
            result[5] += 32843867;
          } else {
            result[0] += 272523;
            result[1] += 0;
            result[2] += 1362616;
            result[3] += 35428029;
            result[4] += 0;
            result[5] += 16623921;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 536870;
            result[1] += 6979321;
            result[2] += 0;
            result[3] += 0;
            result[4] += 46170898;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 48574034;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5113056;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 35722165;
            result[1] += 1869183;
            result[2] += 0;
            result[3] += 2699931;
            result[4] += 10695880;
            result[5] += 2699931;
          } else {
            result[0] += 51030088;
            result[1] += 390735;
            result[2] += 234441;
            result[3] += 156294;
            result[4] += 1875531;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 1363481;
            result[1] += 511305;
            result[2] += 6135667;
            result[3] += 20281790;
            result[4] += 1533916;
            result[5] += 23860929;
          } else {
            result[0] += 14432013;
            result[1] += 1154561;
            result[2] += 29152667;
            result[3] += 4329604;
            result[4] += 1731841;
            result[5] += 2886402;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42780000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 1470879;
            result[2] += 6618956;
            result[3] += 38242859;
            result[4] += 1470879;
            result[5] += 5883516;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34738706;
            result[3] += 12632256;
            result[4] += 0;
            result[5] += 6316128;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 6710886;
            result[4] += 0;
            result[5] += 46976204;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 44739242;
            result[4] += 0;
            result[5] += 8947848;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 49557314;
            result[3] += 2064888;
            result[4] += 0;
            result[5] += 2064888;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42840000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 4880644;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4880644;
            result[5] += 43925801;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 44350205;
            result[3] += 0;
            result[4] += 4668442;
            result[5] += 4668442;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 45818061;
            result[3] += 7869029;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 126620;
            result[1] += 0;
            result[2] += 52674127;
            result[3] += 886343;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42920000))) ) ) {
            result[0] += 250874;
            result[1] += 250874;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53185342;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42940000))) ) ) {
            result[0] += 5553837;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 48133254;
          } else {
            result[0] += 4473924;
            result[1] += 0;
            result[2] += 0;
            result[3] += 6710886;
            result[4] += 35791394;
            result[5] += 6710886;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1731841;
            result[3] += 0;
            result[4] += 50223407;
            result[5] += 1731841;
          } else {
            result[0] += 35791394;
            result[1] += 5965232;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8947848;
            result[5] += 2982616;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 48731359;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4955731;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 38347922;
            result[2] += 0;
            result[3] += 0;
            result[4] += 15339168;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42780000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 1731841;
            result[2] += 0;
            result[3] += 3463683;
            result[4] += 41564199;
            result[5] += 6927366;
          } else {
            result[0] += 0;
            result[1] += 47721858;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 5965232;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 60938;
            result[1] += 121877;
            result[2] += 60938;
            result[3] += 3168818;
            result[4] += 2193797;
            result[5] += 48080720;
          } else {
            result[0] += 34164512;
            result[1] += 0;
            result[2] += 2440322;
            result[3] += 7320966;
            result[4] += 4880644;
            result[5] += 4880644;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 941878;
            result[3] += 22134151;
            result[4] += 0;
            result[5] += 30611060;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 391876;
            result[3] += 41930793;
            result[4] += 0;
            result[5] += 11364420;
          } else {
            result[0] += 0;
            result[1] += 4006499;
            result[2] += 10416898;
            result[3] += 15224697;
            result[4] += 0;
            result[5] += 24038996;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 17109073;
            result[2] += 0;
            result[3] += 0;
            result[4] += 30088369;
            result[5] += 6489648;
          } else {
            result[0] += 11504376;
            result[1] += 0;
            result[2] += 5512513;
            result[3] += 10785353;
            result[4] += 8148933;
            result[5] += 17735914;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42890000))) ) ) {
            result[0] += 10009457;
            result[1] += 11829359;
            result[2] += 454975;
            result[3] += 3184827;
            result[4] += 26388570;
            result[5] += 1819901;
          } else {
            result[0] += 47307921;
            result[1] += 816533;
            result[2] += 816533;
            result[3] += 1173767;
            result[4] += 2806834;
            result[5] += 765500;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 3355443;
            result[2] += 3355443;
            result[3] += 13421772;
            result[4] += 6710886;
            result[5] += 26843545;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2236962;
            result[3] += 46976204;
            result[4] += 0;
            result[5] += 4473924;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 7669584;
            result[2] += 3067833;
            result[3] += 6135667;
            result[4] += 0;
            result[5] += 36814005;
          } else {
            result[0] += 0;
            result[1] += 1288490;
            result[2] += 29205777;
            result[3] += 18897856;
            result[4] += 0;
            result[5] += 4294967;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b80000))) ) ) {
            result[0] += 0;
            result[1] += 23008753;
            result[2] += 15339168;
            result[3] += 0;
            result[4] += 15339168;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 441869;
            result[1] += 0;
            result[2] += 41314757;
            result[3] += 10604857;
            result[4] += 0;
            result[5] += 1325607;
          } else {
            result[0] += 1212059;
            result[1] += 0;
            result[2] += 50763889;
            result[3] += 1354654;
            result[4] += 0;
            result[5] += 356487;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 449264;
            result[1] += 224632;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52339298;
            result[5] += 673896;
          } else {
            result[0] += 0;
            result[1] += 46976204;
            result[2] += 0;
            result[3] += 0;
            result[4] += 6710886;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
            result[0] += 2556528;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 31317469;
            result[5] += 19813093;
          } else {
            result[0] += 46770349;
            result[1] += 0;
            result[2] += 0;
            result[3] += 329368;
            result[4] += 2305580;
            result[5] += 4281792;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 44739242;
            result[5] += 8947848;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1451002;
            result[4] += 644889;
            result[5] += 51591198;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 41564199;
            result[2] += 0;
            result[3] += 0;
            result[4] += 12122891;
            result[5] += 0;
          } else {
            result[0] += 756156;
            result[1] += 864178;
            result[2] += 864178;
            result[3] += 12638611;
            result[4] += 4320892;
            result[5] += 34243074;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x425a0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 37824996;
            result[2] += 0;
            result[3] += 7320966;
            result[4] += 8541128;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53420654;
            result[2] += 0;
            result[3] += 266437;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 2684354;
            result[1] += 2684354;
            result[2] += 0;
            result[3] += 1342177;
            result[4] += 45634027;
            result[5] += 1342177;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42890000))) ) ) {
            result[0] += 11579568;
            result[1] += 13684944;
            result[2] += 0;
            result[3] += 2105376;
            result[4] += 26317201;
            result[5] += 0;
          } else {
            result[0] += 48694140;
            result[1] += 0;
            result[2] += 926526;
            result[3] += 1750106;
            result[4] += 1853053;
            result[5] += 463263;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 1789569;
            result[1] += 715827;
            result[2] += 715827;
            result[3] += 27201459;
            result[4] += 4652881;
            result[5] += 18611524;
          } else {
            result[0] += 21474836;
            result[1] += 3758096;
            result[2] += 16642998;
            result[3] += 3221225;
            result[4] += 4831838;
            result[5] += 3758096;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42da0000))) ) ) {
            result[0] += 0;
            result[1] += 26843545;
            result[2] += 26843545;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 5965232;
            result[2] += 11930464;
            result[3] += 17895697;
            result[4] += 0;
            result[5] += 17895697;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b90000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4880644;
            result[4] += 0;
            result[5] += 48806446;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6442450;
            result[3] += 41339060;
            result[4] += 0;
            result[5] += 5905580;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13421772;
            result[3] += 0;
            result[4] += 0;
            result[5] += 40265318;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ee0000))) ) ) {
            result[0] += 1412818;
            result[1] += 0;
            result[2] += 12715363;
            result[3] += 12715363;
            result[4] += 1412818;
            result[5] += 25430727;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34678264;
            result[3] += 16696942;
            result[4] += 0;
            result[5] += 2311884;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47576365;
            result[3] += 5674245;
            result[4] += 0;
            result[5] += 436480;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42e10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 50313312;
            result[3] += 2787034;
            result[4] += 0;
            result[5] += 586744;
          } else {
            result[0] += 153391;
            result[1] += 0;
            result[2] += 53380307;
            result[3] += 153391;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42520000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 9860894;
            result[1] += 2191309;
            result[2] += 0;
            result[3] += 1095654;
            result[4] += 33965302;
            result[5] += 6573929;
          } else {
            result[0] += 0;
            result[1] += 40592678;
            result[2] += 0;
            result[3] += 0;
            result[4] += 13094412;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42340000))) ) ) {
            result[0] += 0;
            result[1] += 44739242;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8947848;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 626697;
            result[2] += 0;
            result[3] += 417798;
            result[4] += 51389200;
            result[5] += 1253395;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428a0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42760000))) ) ) {
            result[0] += 8541128;
            result[1] += 1220161;
            result[2] += 0;
            result[3] += 0;
            result[4] += 36604834;
            result[5] += 7320966;
          } else {
            result[0] += 0;
            result[1] += 3702558;
            result[2] += 0;
            result[3] += 9256395;
            result[4] += 1851279;
            result[5] += 38876859;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 5651272;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 48035818;
            result[5] += 0;
          } else {
            result[0] += 49557314;
            result[1] += 0;
            result[2] += 0;
            result[3] += 869426;
            result[4] += 2173566;
            result[5] += 1086783;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51539607;
            result[5] += 2147483;
          } else {
            result[0] += 0;
            result[1] += 17895697;
            result[2] += 0;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 36909875;
            result[5] += 16777215;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 475808;
            result[3] += 1744632;
            result[4] += 1110220;
            result[5] += 50356429;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42940000))) ) ) {
            result[0] += 1248537;
            result[1] += 7491222;
            result[2] += 624268;
            result[3] += 4369879;
            result[4] += 27467814;
            result[5] += 12485370;
          } else {
            result[0] += 2535223;
            result[1] += 1640438;
            result[2] += 447392;
            result[3] += 12377857;
            result[4] += 4324793;
            result[5] += 32361385;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 846799;
            result[1] += 0;
            result[2] += 1693599;
            result[3] += 36243020;
            result[4] += 846799;
            result[5] += 14056872;
          } else {
            result[0] += 8684676;
            result[1] += 789516;
            result[2] += 11053224;
            result[3] += 7105644;
            result[4] += 1579032;
            result[5] += 24474997;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42660000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 2440322;
            result[1] += 51246768;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42640000))) ) ) {
            result[0] += 0;
            result[1] += 46017506;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7669584;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x429c0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 6832902;
            result[1] += 1952257;
            result[2] += 2928386;
            result[3] += 4880644;
            result[4] += 33188383;
            result[5] += 3904515;
          } else {
            result[0] += 1988410;
            result[1] += 51698680;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 50912397;
            result[1] += 64527;
            result[2] += 258111;
            result[3] += 258111;
            result[4] += 2064888;
            result[5] += 129055;
          } else {
            result[0] += 8259552;
            result[1] += 0;
            result[2] += 14454216;
            result[3] += 16519104;
            result[4] += 0;
            result[5] += 14454216;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 9474192;
            result[4] += 0;
            result[5] += 44212898;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 23402065;
            result[3] += 22713769;
            result[4] += 0;
            result[5] += 7571256;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47830317;
            result[3] += 976128;
            result[4] += 0;
            result[5] += 4880644;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 8947848;
            result[2] += 26843545;
            result[3] += 0;
            result[4] += 17895697;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6710886;
            result[3] += 46976204;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 612400;
            result[1] += 0;
            result[2] += 48838922;
            result[3] += 3266134;
            result[4] += 255166;
            result[5] += 714466;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42bc0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
            result[0] += 976128;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51490801;
            result[5] += 1220161;
          } else {
            result[0] += 0;
            result[1] += 1095654;
            result[2] += 0;
            result[3] += 0;
            result[4] += 33965302;
            result[5] += 18626133;
          }
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x424e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 46528812;
            result[5] += 7158278;
          } else {
            result[0] += 670326;
            result[1] += 243755;
            result[2] += 121877;
            result[3] += 3656328;
            result[4] += 1157837;
            result[5] += 47836965;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42760000))) ) ) {
            result[0] += 41485479;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 12201611;
            result[5] += 0;
          } else {
            result[0] += 1035763;
            result[1] += 1035763;
            result[2] += 2244154;
            result[3] += 26411977;
            result[4] += 1726273;
            result[5] += 21233158;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x424a0000))) ) ) {
            result[0] += 0;
            result[1] += 40265318;
            result[2] += 0;
            result[3] += 0;
            result[4] += 13421772;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 3314017;
            result[2] += 0;
            result[3] += 662803;
            result[4] += 47721858;
            result[5] += 1988410;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
            result[0] += 16302886;
            result[1] += 3091926;
            result[2] += 281084;
            result[3] += 11524454;
            result[4] += 9556864;
            result[5] += 12929875;
          } else {
            result[0] += 46122761;
            result[1] += 1080618;
            result[2] += 245595;
            result[3] += 1522689;
            result[4] += 4027759;
            result[5] += 687666;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 2505397;
            result[2] += 7516192;
            result[3] += 26485631;
            result[4] += 5010795;
            result[5] += 12169074;
          } else {
            result[0] += 23946760;
            result[1] += 772476;
            result[2] += 24719236;
            result[3] += 1158714;
            result[4] += 1544952;
            result[5] += 1544952;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42aa0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2440322;
            result[5] += 51246768;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 14641933;
            result[4] += 24403223;
            result[5] += 14641933;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42900000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6061445;
            result[3] += 36368674;
            result[4] += 0;
            result[5] += 11256970;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13059022;
            result[3] += 31922054;
            result[4] += 0;
            result[5] += 8706014;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 46017506;
            result[3] += 0;
            result[4] += 0;
            result[5] += 7669584;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34614045;
            result[3] += 18366636;
            result[4] += 0;
            result[5] += 706409;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42780000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42800000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42e50000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 3112295;
            result[1] += 0;
            result[2] += 36569467;
            result[3] += 2334221;
            result[4] += 0;
            result[5] += 11671106;
          } else {
            result[0] += 305735;
            result[1] += 0;
            result[2] += 50935474;
            result[3] += 2445881;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d00000))) ) ) {
            result[0] += 504104;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52426830;
            result[5] += 756156;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 46017506;
            result[5] += 7669584;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4129776;
            result[4] += 12389328;
            result[5] += 37167986;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
            result[0] += 39370533;
            result[1] += 3579139;
            result[2] += 0;
            result[3] += 1789569;
            result[4] += 7158278;
            result[5] += 1789569;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2116695;
            result[4] += 2629833;
            result[5] += 48940562;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 2670999;
            result[1] += 4273599;
            result[2] += 0;
            result[3] += 18696996;
            result[4] += 2136799;
            result[5] += 25908695;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 48094685;
            result[4] += 559240;
            result[5] += 5033164;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42500000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 7953643;
            result[2] += 0;
            result[3] += 1988410;
            result[4] += 43745037;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
            result[0] += 117220;
            result[1] += 53569870;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42850000))) ) ) {
            result[0] += 28776280;
            result[1] += 429496;
            result[2] += 0;
            result[3] += 644245;
            result[4] += 20401094;
            result[5] += 3435973;
          } else {
            result[0] += 1412818;
            result[1] += 176602;
            result[2] += 8653511;
            result[3] += 21722079;
            result[4] += 4061852;
            result[5] += 17660227;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42900000))) ) ) {
            result[0] += 3158064;
            result[1] += 21316933;
            result[2] += 3552822;
            result[3] += 2368548;
            result[4] += 22895965;
            result[5] += 394758;
          } else {
            result[0] += 46225166;
            result[1] += 290724;
            result[2] += 3440237;
            result[3] += 1017535;
            result[4] += 1502075;
            result[5] += 1211351;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428c0000))) ) ) {
            result[0] += 0;
            result[1] += 10066329;
            result[2] += 0;
            result[3] += 6710886;
            result[4] += 36909875;
            result[5] += 0;
          } else {
            result[0] += 1342177;
            result[1] += 0;
            result[2] += 4026531;
            result[3] += 10737418;
            result[4] += 4026531;
            result[5] += 33554431;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 19173961;
            result[1] += 7669584;
            result[2] += 26843545;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 49392123;
            result[4] += 0;
            result[5] += 4294967;
          } else {
            result[0] += 5113056;
            result[1] += 0;
            result[2] += 33234865;
            result[3] += 12782640;
            result[4] += 0;
            result[5] += 2556528;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 15790320;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 11053224;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 44623036;
            result[3] += 8366819;
            result[4] += 0;
            result[5] += 697234;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 0;
            result[4] += 0;
            result[5] += 26843545;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 46459982;
            result[3] += 6814130;
            result[4] += 0;
            result[5] += 412977;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42e10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 51021774;
            result[3] += 2665316;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42be0000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 2541400;
            result[1] += 317675;
            result[2] += 953025;
            result[3] += 0;
            result[4] += 48604289;
            result[5] += 1270700;
          } else {
            result[0] += 0;
            result[1] += 631612;
            result[2] += 0;
            result[3] += 1894838;
            result[4] += 24632900;
            result[5] += 26527739;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
            result[0] += 1804608;
            result[1] += 8120736;
            result[2] += 0;
            result[3] += 0;
            result[4] += 43761746;
            result[5] += 0;
          } else {
            result[0] += 48774546;
            result[1] += 350896;
            result[2] += 0;
            result[3] += 1403584;
            result[4] += 3158064;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 69633;
            result[3] += 1323028;
            result[4] += 905229;
            result[5] += 51389200;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42940000))) ) ) {
            result[0] += 5733572;
            result[1] += 7297274;
            result[2] += 0;
            result[3] += 1042467;
            result[4] += 32837735;
            result[5] += 6776040;
          } else {
            result[0] += 2219348;
            result[1] += 1056832;
            result[2] += 1056832;
            result[3] += 19974134;
            result[4] += 1585248;
            result[5] += 27794694;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42580000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 50704475;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2982616;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 50529027;
            result[2] += 0;
            result[3] += 3158064;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 5368709;
            result[1] += 7158278;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41160103;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 10129639;
            result[2] += 0;
            result[3] += 0;
            result[4] += 43557451;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
            result[0] += 47482050;
            result[1] += 161870;
            result[2] += 269784;
            result[3] += 1672663;
            result[4] += 2805757;
            result[5] += 1294965;
          } else {
            result[0] += 12313553;
            result[1] += 492542;
            result[2] += 16089709;
            result[3] += 14776263;
            result[4] += 1477626;
            result[5] += 8537396;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1376592;
            result[3] += 8259552;
            result[4] += 0;
            result[5] += 44050946;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42990000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 11504376;
            result[3] += 42182714;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33770912;
            result[3] += 15586574;
            result[4] += 0;
            result[5] += 4329604;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 2334221;
            result[2] += 37347541;
            result[3] += 0;
            result[4] += 0;
            result[5] += 14005328;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 0;
            result[4] += 26843545;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 8947848;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 44739242;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8947848;
            result[3] += 44739242;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 3976821;
            result[1] += 0;
            result[2] += 39768215;
            result[3] += 9942053;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 48190119;
            result[3] += 5130507;
            result[4] += 0;
            result[5] += 366464;
          } else {
            result[0] += 197016;
            result[1] += 0;
            result[2] += 52307973;
            result[3] += 1182101;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42240000))) ) ) {
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 490293;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 50990479;
            result[5] += 2206318;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 1677721;
            result[2] += 0;
            result[3] += 0;
            result[4] += 45298483;
            result[5] += 6710886;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42680000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 4129776;
            result[2] += 0;
            result[3] += 8259552;
            result[4] += 33038209;
            result[5] += 8259552;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1097377;
            result[4] += 928550;
            result[5] += 51661163;
          } else {
            result[0] += 1102081;
            result[1] += 1259521;
            result[2] += 1102081;
            result[3] += 8501768;
            result[4] += 4408324;
            result[5] += 37313315;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 865920;
            result[1] += 0;
            result[2] += 865920;
            result[3] += 13854733;
            result[4] += 865920;
            result[5] += 37234595;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 45027882;
            result[4] += 0;
            result[5] += 8659208;
          } else {
            result[0] += 7064090;
            result[1] += 2825636;
            result[2] += 15541000;
            result[3] += 12715363;
            result[4] += 0;
            result[5] += 15541000;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42240000))) ) ) {
            result[0] += 0;
            result[1] += 52108059;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1579032;
            result[5] += 0;
          } else {
            result[0] += 2628039;
            result[1] += 3754342;
            result[2] += 750868;
            result[3] += 3378907;
            result[4] += 42048630;
            result[5] += 1126302;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 53549078;
            result[2] += 0;
            result[3] += 0;
            result[4] += 138013;
            result[5] += 0;
          } else {
            result[0] += 12782640;
            result[1] += 33234865;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7669584;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
            result[0] += 4880644;
            result[1] += 21149460;
            result[2] += 0;
            result[3] += 2440322;
            result[4] += 22776341;
            result[5] += 2440322;
          } else {
            result[0] += 48916983;
            result[1] += 93531;
            result[2] += 280594;
            result[3] += 1028846;
            result[4] += 2525350;
            result[5] += 841783;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 1639300;
            result[1] += 0;
            result[2] += 2458950;
            result[3] += 24179682;
            result[4] += 9016152;
            result[5] += 16393004;
          } else {
            result[0] += 38606447;
            result[1] += 0;
            result[2] += 11461289;
            result[3] += 1809677;
            result[4] += 1809677;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 4238454;
            result[2] += 1412818;
            result[3] += 0;
            result[4] += 4238454;
            result[5] += 43797363;
          } else {
            result[0] += 365218;
            result[1] += 0;
            result[2] += 8400021;
            result[3] += 35791394;
            result[4] += 1095654;
            result[5] += 8034802;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 2684354;
            result[1] += 0;
            result[2] += 2684354;
            result[3] += 1789569;
            result[4] += 13421772;
            result[5] += 33107039;
          } else {
            result[0] += 941878;
            result[1] += 1883757;
            result[2] += 24488848;
            result[3] += 8476909;
            result[4] += 0;
            result[5] += 17895697;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c80000))) ) ) {
            result[0] += 10737418;
            result[1] += 0;
            result[2] += 40265318;
            result[3] += 0;
            result[4] += 0;
            result[5] += 2684354;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 573171;
            result[1] += 0;
            result[2] += 44898457;
            result[3] += 7833347;
            result[4] += 0;
            result[5] += 382114;
          } else {
            result[0] += 327360;
            result[1] += 0;
            result[2] += 50904528;
            result[3] += 2291522;
            result[4] += 0;
            result[5] += 163680;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42810000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52719756;
            result[5] += 967334;
          } else {
            result[0] += 0;
            result[1] += 35791394;
            result[2] += 17895697;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 29527900;
            result[5] += 24159191;
          } else {
            result[0] += 13421772;
            result[1] += 8947848;
            result[2] += 0;
            result[3] += 31317469;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42620000))) ) ) {
            result[0] += 37580963;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1789569;
            result[4] += 12526987;
            result[5] += 1789569;
          } else {
            result[0] += 59126;
            result[1] += 236507;
            result[2] += 236507;
            result[3] += 2542450;
            result[4] += 1832929;
            result[5] += 48779570;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 5602131;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1867377;
            result[4] += 14005328;
            result[5] += 32212254;
          } else {
            result[0] += 470939;
            result[1] += 706409;
            result[2] += 706409;
            result[3] += 32730288;
            result[4] += 1648287;
            result[5] += 17424757;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x424e0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 42182714;
            result[2] += 0;
            result[3] += 0;
            result[4] += 11504376;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42360000))) ) ) {
            result[0] += 0;
            result[1] += 51734833;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1952257;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 4129776;
            result[2] += 0;
            result[3] += 0;
            result[4] += 48967346;
            result[5] += 589968;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 14415978;
            result[1] += 6462335;
            result[2] += 0;
            result[3] += 1988410;
            result[4] += 28831956;
            result[5] += 1988410;
          } else {
            result[0] += 48385852;
            result[1] += 963861;
            result[2] += 0;
            result[3] += 722896;
            result[4] += 2602426;
            result[5] += 1012054;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 815913;
            result[1] += 163182;
            result[2] += 13217794;
            result[3] += 21050561;
            result[4] += 489547;
            result[5] += 17950091;
          } else {
            result[0] += 33686018;
            result[1] += 3684408;
            result[2] += 8421504;
            result[3] += 1579032;
            result[4] += 4210752;
            result[5] += 2105376;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ca0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42cf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6077783;
            result[3] += 37479667;
            result[4] += 0;
            result[5] += 10129639;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5368709;
            result[4] += 0;
            result[5] += 48318382;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 23427094;
            result[3] += 26355481;
            result[4] += 0;
            result[5] += 3904515;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 49557314;
            result[3] += 0;
            result[4] += 0;
            result[5] += 4129776;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43038000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 29283867;
            result[3] += 17895697;
            result[4] += 0;
            result[5] += 6507526;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47329409;
            result[3] += 6357681;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42f90000))) ) ) {
            result[0] += 287481;
            result[1] += 0;
            result[2] += 51387242;
            result[3] += 1868627;
            result[4] += 0;
            result[5] += 143740;
          } else {
            result[0] += 10737418;
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
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c80000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 246271;
            result[1] += 985084;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52455735;
            result[5] += 0;
          } else {
            result[0] += 2982616;
            result[1] += 0;
            result[2] += 2982616;
            result[3] += 1491308;
            result[4] += 29826161;
            result[5] += 16404388;
          }
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
            result[0] += 27589199;
            result[1] += 745654;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21623967;
            result[5] += 3728270;
          } else {
            result[0] += 0;
            result[1] += 1031342;
            result[2] += 0;
            result[3] += 3838884;
            result[4] += 1661606;
            result[5] += 47155257;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 40265318;
            result[4] += 610080;
            result[5] += 12811692;
          } else {
            result[0] += 5752188;
            result[1] += 0;
            result[2] += 8628282;
            result[3] += 5752188;
            result[4] += 0;
            result[5] += 33554431;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42420000))) ) ) {
            result[0] += 6077783;
            result[1] += 45583379;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2025927;
            result[5] += 0;
          } else {
            result[0] += 8259552;
            result[1] += 1270700;
            result[2] += 0;
            result[3] += 317675;
            result[4] += 42250787;
            result[5] += 1588375;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 48060912;
            result[1] += 429115;
            result[2] += 47679;
            result[3] += 1668781;
            result[4] += 2479332;
            result[5] += 1001269;
          } else {
            result[0] += 12765985;
            result[1] += 0;
            result[2] += 5945801;
            result[3] += 13815244;
            result[4] += 3672406;
            result[5] += 17487651;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42cd0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5609099;
            result[3] += 39263693;
            result[4] += 0;
            result[5] += 8814298;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9474192;
            result[3] += 0;
            result[4] += 6316128;
            result[5] += 37896770;
          } else {
            result[0] += 0;
            result[1] += 10066329;
            result[2] += 33554431;
            result[3] += 6710886;
            result[4] += 0;
            result[5] += 3355443;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429e0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3702558;
            result[3] += 7405116;
            result[4] += 1851279;
            result[5] += 40728138;
          } else {
            result[0] += 0;
            result[1] += 16106127;
            result[2] += 0;
            result[3] += 16106127;
            result[4] += 16106127;
            result[5] += 5368709;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13421772;
            result[3] += 0;
            result[4] += 0;
            result[5] += 40265318;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52153174;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1533916;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 0;
            result[1] += 25264513;
            result[2] += 0;
            result[3] += 22106449;
            result[4] += 0;
            result[5] += 6316128;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12884901;
            result[3] += 4294967;
            result[4] += 10737418;
            result[5] += 25769803;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ca0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 902304;
            result[1] += 0;
            result[2] += 34287554;
            result[3] += 15339168;
            result[4] += 1353456;
            result[5] += 1804608;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 45733448;
            result[3] += 7953643;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 625177;
            result[1] += 0;
            result[2] += 50639352;
            result[3] += 1953678;
            result[4] += 0;
            result[5] += 468882;
          }
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42240000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42580000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42620000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 18482441;
            result[5] += 35204649;
          } else {
            result[0] += 10391049;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1731841;
            result[4] += 34636833;
            result[5] += 6927366;
          }
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 46017506;
            result[5] += 7669584;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 353786;
            result[4] += 1326699;
            result[5] += 52006605;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 2556528;
            result[2] += 0;
            result[3] += 0;
            result[4] += 48574034;
            result[5] += 2556528;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2776918;
            result[3] += 2776918;
            result[4] += 1851279;
            result[5] += 46281975;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c00000))) ) ) {
            result[0] += 0;
            result[1] += 485856;
            result[2] += 0;
            result[3] += 5830272;
            result[4] += 4615632;
            result[5] += 42755330;
          } else {
            result[0] += 0;
            result[1] += 49392123;
            result[2] += 0;
            result[3] += 2147483;
            result[4] += 0;
            result[5] += 2147483;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 697234;
            result[3] += 34861747;
            result[4] += 0;
            result[5] += 18128108;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12565063;
            result[3] += 5711392;
            result[4] += 0;
            result[5] += 35410634;
          }
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42520000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 8947848;
            result[2] += 0;
            result[3] += 0;
            result[4] += 44739242;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 5892485;
            result[2] += 0;
            result[3] += 0;
            result[4] += 46485164;
            result[5] += 1309441;
          } else {
            result[0] += 2825636;
            result[1] += 50861454;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 44861815;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8825275;
            result[5] += 0;
          } else {
            result[0] += 988105;
            result[1] += 1317474;
            result[2] += 0;
            result[3] += 12516008;
            result[4] += 16468432;
            result[5] += 22397068;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
            result[0] += 6882960;
            result[1] += 17207401;
            result[2] += 2064888;
            result[3] += 2753184;
            result[4] += 22713769;
            result[5] += 2064888;
          } else {
            result[0] += 46270992;
            result[1] += 318482;
            result[2] += 773458;
            result[3] += 1865398;
            result[4] += 2320374;
            result[5] += 2138384;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 894784;
            result[1] += 5816101;
            result[2] += 5816101;
            result[3] += 17895697;
            result[4] += 4921316;
            result[5] += 18343089;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 19066443;
            result[3] += 32111905;
            result[4] += 0;
            result[5] += 2508742;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8259552;
            result[3] += 4129776;
            result[4] += 0;
            result[5] += 41297762;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47721858;
            result[3] += 4971026;
            result[4] += 0;
            result[5] += 994205;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 8259552;
            result[1] += 0;
            result[2] += 37167986;
            result[3] += 4129776;
            result[4] += 4129776;
            result[5] += 0;
          } else {
            result[0] += 44430696;
            result[1] += 1851279;
            result[2] += 7405116;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 181990;
            result[1] += 0;
            result[2] += 44041613;
            result[3] += 8189556;
            result[4] += 0;
            result[5] += 1273930;
          } else {
            result[0] += 896142;
            result[1] += 0;
            result[2] += 51568935;
            result[3] += 1059077;
            result[4] += 0;
            result[5] += 162935;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 238609;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51539607;
            result[5] += 1908874;
          } else {
            result[0] += 0;
            result[1] += 40265318;
            result[2] += 0;
            result[3] += 0;
            result[4] += 13421772;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42580000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 34738706;
            result[5] += 18948385;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1708225;
            result[4] += 1057473;
            result[5] += 50921392;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 7247757;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1073741;
            result[4] += 11542724;
            result[5] += 33822867;
          } else {
            result[0] += 397682;
            result[1] += 1193046;
            result[2] += 0;
            result[3] += 34200665;
            result[4] += 0;
            result[5] += 17895697;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x421a0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1988410;
            result[2] += 0;
            result[3] += 1988410;
            result[4] += 47721858;
            result[5] += 1988410;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 250289;
            result[1] += 52811078;
            result[2] += 0;
            result[3] += 125144;
            result[4] += 500578;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
            result[0] += 21810380;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26843545;
            result[5] += 5033164;
          } else {
            result[0] += 0;
            result[1] += 1048575;
            result[2] += 4613734;
            result[3] += 14680063;
            result[4] += 3355443;
            result[5] += 29989273;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 6424096;
            result[1] += 9177280;
            result[2] += 917728;
            result[3] += 5047504;
            result[4] += 30743889;
            result[5] += 1376592;
          } else {
            result[0] += 42533372;
            result[1] += 1099662;
            result[2] += 1845861;
            result[3] += 3298987;
            result[4] += 2670608;
            result[5] += 2238598;
          }
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9761289;
            result[3] += 9761289;
            result[4] += 34164512;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2982616;
            result[3] += 1988410;
            result[4] += 1988410;
            result[5] += 46727653;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13421772;
            result[3] += 33554431;
            result[4] += 0;
            result[5] += 6710886;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 46528812;
            result[3] += 0;
            result[4] += 0;
            result[5] += 7158278;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 577280;
            result[1] += 0;
            result[2] += 4040963;
            result[3] += 45027882;
            result[4] += 577280;
            result[5] += 3463683;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 24778657;
            result[3] += 0;
            result[4] += 0;
            result[5] += 28908433;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40265318;
            result[3] += 11184810;
            result[4] += 0;
            result[5] += 2236962;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 2236962;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26843545;
            result[5] += 24606583;
          } else {
            result[0] += 10157017;
            result[1] += 0;
            result[2] += 29020049;
            result[3] += 1451002;
            result[4] += 0;
            result[5] += 13059022;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 5965232;
            result[2] += 8947848;
            result[3] += 5965232;
            result[4] += 5965232;
            result[5] += 26843545;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39749096;
            result[3] += 10324440;
            result[4] += 0;
            result[5] += 3613554;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47449586;
            result[3] += 5791968;
            result[4] += 0;
            result[5] += 445536;
          } else {
            result[0] += 252052;
            result[1] += 0;
            result[2] += 52258796;
            result[3] += 1176242;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 201831;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 50861454;
            result[5] += 2623805;
          } else {
            result[0] += 0;
            result[1] += 35791394;
            result[2] += 0;
            result[3] += 17895697;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 0;
            result[4] += 17895697;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 50331647;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3355443;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2284557;
            result[4] += 43406584;
            result[5] += 7995949;
          } else {
            result[0] += 1037136;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2501330;
            result[4] += 1220161;
            result[5] += 48928462;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42820000))) ) ) {
            result[0] += 26219277;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1248537;
            result[4] += 24970740;
            result[5] += 1248537;
          } else {
            result[0] += 370255;
            result[1] += 370255;
            result[2] += 4257941;
            result[3] += 23140987;
            result[4] += 2036406;
            result[5] += 23511243;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 31580641;
            result[2] += 0;
            result[3] += 0;
            result[4] += 18948385;
            result[5] += 3158064;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 47721858;
            result[4] += 5965232;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 21589470;
            result[1] += 4203259;
            result[2] += 0;
            result[3] += 0;
            result[4] += 20443127;
            result[5] += 7451233;
          } else {
            result[0] += 47740558;
            result[1] += 168298;
            result[2] += 56099;
            result[3] += 2692769;
            result[4] += 1739080;
            result[5] += 1290285;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 186413;
            result[1] += 372827;
            result[2] += 12303291;
            result[3] += 24606583;
            result[4] += 2982616;
            result[5] += 13235359;
          } else {
            result[0] += 42851164;
            result[1] += 1970168;
            result[2] += 6403047;
            result[3] += 492542;
            result[4] += 492542;
            result[5] += 1477626;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 5965232;
            result[2] += 0;
            result[3] += 41756626;
            result[4] += 5965232;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 46017506;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7669584;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 41756626;
            result[4] += 0;
            result[5] += 11930464;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3520464;
            result[3] += 7921046;
            result[4] += 0;
            result[5] += 42245579;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6573929;
            result[3] += 37252267;
            result[4] += 0;
            result[5] += 9860894;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37167986;
            result[3] += 14454216;
            result[4] += 0;
            result[5] += 2064888;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21872518;
            result[3] += 5965232;
            result[4] += 3976821;
            result[5] += 21872518;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 8589934;
            result[4] += 0;
            result[5] += 2147483;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42740000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 6710886;
            result[4] += 3355443;
            result[5] += 43620761;
          } else {
            result[0] += 8947848;
            result[1] += 1491308;
            result[2] += 25352237;
            result[3] += 10439156;
            result[4] += 1491308;
            result[5] += 5965232;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 6316128;
            result[1] += 0;
            result[2] += 9474192;
            result[3] += 31580641;
            result[4] += 0;
            result[5] += 6316128;
          } else {
            result[0] += 8947848;
            result[1] += 0;
            result[2] += 40904450;
            result[3] += 3195660;
            result[4] += 0;
            result[5] += 639132;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 432960;
            result[1] += 0;
            result[2] += 45893803;
            result[3] += 7143846;
            result[4] += 0;
            result[5] += 216480;
          } else {
            result[0] += 98689;
            result[1] += 0;
            result[2] += 52108059;
            result[3] += 1480342;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 242928;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52715379;
            result[5] += 728784;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 34738706;
            result[5] += 18948385;
          } else {
            result[0] += 0;
            result[1] += 29826161;
            result[2] += 0;
            result[3] += 23860929;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 6316128;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41054834;
            result[5] += 6316128;
          } else {
            result[0] += 50662466;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3024624;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1599485;
            result[4] += 1112685;
            result[5] += 50974919;
          } else {
            result[0] += 426088;
            result[1] += 1065220;
            result[2] += 0;
            result[3] += 20558747;
            result[4] += 4793490;
            result[5] += 26843545;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42300000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 35791394;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17895697;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 1022611;
            result[1] += 9203501;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40393144;
            result[5] += 3067833;
          } else {
            result[0] += 0;
            result[1] += 46230550;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7456540;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
            result[0] += 19418735;
            result[1] += 6282531;
            result[2] += 571139;
            result[3] += 14849620;
            result[4] += 4569114;
            result[5] += 7995949;
          } else {
            result[0] += 47922370;
            result[1] += 401024;
            result[2] += 401024;
            result[3] += 601536;
            result[4] += 3709472;
            result[5] += 651664;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 3924494;
            result[1] += 1098858;
            result[2] += 15384020;
            result[3] += 18209656;
            result[4] += 1726777;
            result[5] += 13343282;
          } else {
            result[0] += 42835445;
            result[1] += 571139;
            result[2] += 5140253;
            result[3] += 1142278;
            result[4] += 3426835;
            result[5] += 571139;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 735439;
            result[2] += 13237912;
            result[3] += 30888463;
            result[4] += 0;
            result[5] += 8825275;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 19884107;
            result[4] += 1988410;
            result[5] += 31814572;
          } else {
            result[0] += 0;
            result[1] += 22106449;
            result[2] += 31580641;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 19522578;
            result[3] += 0;
            result[4] += 0;
            result[5] += 34164512;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42750831;
            result[3] += 8947848;
            result[4] += 0;
            result[5] += 1988410;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42980000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42960000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 599855;
            result[1] += 0;
            result[2] += 46188894;
            result[3] += 6898341;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 85217;
            result[1] += 0;
            result[2] += 52323609;
            result[3] += 1107828;
            result[4] += 0;
            result[5] += 170435;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 260616;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53165857;
            result[5] += 260616;
          } else {
            result[0] += 0;
            result[1] += 26843545;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26843545;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42890000))) ) ) {
            result[0] += 715827;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1431655;
            result[4] += 25053975;
            result[5] += 26485631;
          } else {
            result[0] += 38571308;
            result[1] += 521233;
            result[2] += 0;
            result[3] += 521233;
            result[4] += 13552081;
            result[5] += 521233;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x423c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 0;
            result[4] += 26843545;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1424060;
            result[4] += 996842;
            result[5] += 51266187;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 1677721;
            result[1] += 1677721;
            result[2] += 0;
            result[3] += 8388607;
            result[4] += 28521267;
            result[5] += 13421772;
          } else {
            result[0] += 540474;
            result[1] += 540474;
            result[2] += 0;
            result[3] += 12430903;
            result[4] += 4503950;
            result[5] += 35671288;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x425a0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 26843545;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26843545;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cc0000))) ) ) {
            result[0] += 1412818;
            result[1] += 10596136;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41678136;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 48318382;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5368709;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
            result[0] += 5478274;
            result[1] += 13147859;
            result[2] += 0;
            result[3] += 12052204;
            result[4] += 7669584;
            result[5] += 15339168;
          } else {
            result[0] += 49597644;
            result[1] += 681574;
            result[2] += 104857;
            result[3] += 629145;
            result[4] += 2254438;
            result[5] += 419430;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42de0000))) ) ) {
            result[0] += 2816371;
            result[1] += 880116;
            result[2] += 8801162;
            result[3] += 25347347;
            result[4] += 176023;
            result[5] += 15666069;
          } else {
            result[0] += 48806446;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4880644;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x425a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1220161;
            result[3] += 4880644;
            result[4] += 0;
            result[5] += 47586285;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 1533916;
            result[2] += 1022611;
            result[3] += 41927061;
            result[4] += 511305;
            result[5] += 8692195;
          } else {
            result[0] += 0;
            result[1] += 3067833;
            result[2] += 9203501;
            result[3] += 19940919;
            result[4] += 0;
            result[5] += 21474836;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 1248537;
            result[1] += 0;
            result[2] += 22473666;
            result[3] += 24970740;
            result[4] += 0;
            result[5] += 4994148;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 51955249;
            result[3] += 1731841;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d50000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 13421772;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 0;
            result[4] += 13421772;
            result[5] += 0;
          } else {
            result[0] += 51955249;
            result[1] += 0;
            result[2] += 1731841;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3834792;
            result[3] += 13421772;
            result[4] += 0;
            result[5] += 36430526;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 1865574;
            result[1] += 829144;
            result[2] += 40006210;
            result[3] += 7462298;
            result[4] += 207286;
            result[5] += 3316577;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 51648340;
            result[3] += 2038750;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ca0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42f00000))) ) ) {
            result[0] += 177771;
            result[1] += 177771;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52798232;
            result[5] += 533315;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x421a0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42740000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 52047790;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1639300;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 85899;
            result[3] += 1889785;
            result[4] += 1889785;
            result[5] += 49821620;
          } else {
            result[0] += 2175327;
            result[1] += 957144;
            result[2] += 261039;
            result[3] += 11572744;
            result[4] += 8527285;
            result[5] += 30193550;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428c0000))) ) ) {
            result[0] += 4353007;
            result[1] += 24183374;
            result[2] += 0;
            result[3] += 967334;
            result[4] += 23699706;
            result[5] += 483667;
          } else {
            result[0] += 46950880;
            result[1] += 1063612;
            result[2] += 202592;
            result[3] += 1924631;
            result[4] += 2025927;
            result[5] += 1519445;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 2581110;
            result[1] += 688296;
            result[2] += 7743330;
            result[3] += 21165103;
            result[4] += 4818072;
            result[5] += 16691178;
          } else {
            result[0] += 49557314;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4129776;
            result[5] += 0;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7049820;
            result[3] += 39587451;
            result[4] += 0;
            result[5] += 7049820;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 11302545;
            result[3] += 14128181;
            result[4] += 0;
            result[5] += 28256363;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37347541;
            result[3] += 7002664;
            result[4] += 0;
            result[5] += 9336885;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429e0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 51246768;
            result[3] += 0;
            result[4] += 0;
            result[5] += 2440322;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40265318;
            result[3] += 13421772;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 16777215;
            result[3] += 31876710;
            result[4] += 0;
            result[5] += 5033164;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35013320;
            result[3] += 14783401;
            result[4] += 0;
            result[5] += 3890368;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 25769803;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 6442450;
          } else {
            result[0] += 2064888;
            result[1] += 0;
            result[2] += 44653205;
            result[3] += 6194664;
            result[4] += 774333;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 15339168;
            result[3] += 0;
            result[4] += 0;
            result[5] += 38347922;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 48824130;
            result[3] += 4862961;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 48806446;
            result[3] += 0;
            result[4] += 0;
            result[5] += 4880644;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53425202;
            result[3] += 261888;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x420e0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53427733;
            result[5] += 259357;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 32212254;
            result[5] += 21474836;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 32212254;
            result[5] += 21474836;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3834792;
            result[5] += 49852298;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 6316128;
            result[4] += 34738706;
            result[5] += 12632256;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 64065;
            result[1] += 512525;
            result[2] += 64065;
            result[3] += 1473512;
            result[4] += 2882958;
            result[5] += 48689963;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3486174;
            result[3] += 14293316;
            result[4] += 697234;
            result[5] += 35210364;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 2876094;
            result[1] += 0;
            result[2] += 0;
            result[3] += 9586980;
            result[4] += 6710886;
            result[5] += 34513130;
          } else {
            result[0] += 988105;
            result[1] += 1976211;
            result[2] += 2964317;
            result[3] += 37548026;
            result[4] += 0;
            result[5] += 10210428;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 35791394;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17895697;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53545809;
            result[2] += 0;
            result[3] += 0;
            result[4] += 141281;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
            result[0] += 0;
            result[1] += 50529027;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3158064;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 6927366;
            result[2] += 432960;
            result[3] += 1731841;
            result[4] += 44161962;
            result[5] += 432960;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
            result[0] += 50704475;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2982616;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1388459;
            result[2] += 925639;
            result[3] += 16198691;
            result[4] += 11570493;
            result[5] += 23603807;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
            result[0] += 48963020;
            result[1] += 984181;
            result[2] += 49209;
            result[3] += 590508;
            result[4] += 2657289;
            result[5] += 442881;
          } else {
            result[0] += 21474836;
            result[1] += 0;
            result[2] += 7034860;
            result[3] += 11848185;
            result[4] += 3702558;
            result[5] += 9626650;
          }
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2025927;
            result[3] += 6077783;
            result[4] += 7090747;
            result[5] += 38492631;
          } else {
            result[0] += 0;
            result[1] += 440058;
            result[2] += 7040929;
            result[3] += 32564301;
            result[4] += 0;
            result[5] += 13641801;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 2236962;
            result[1] += 0;
            result[2] += 8947848;
            result[3] += 11184810;
            result[4] += 0;
            result[5] += 31317469;
          } else {
            result[0] += 1579032;
            result[1] += 0;
            result[2] += 41054834;
            result[3] += 7368816;
            result[4] += 1052688;
            result[5] += 2631720;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42f90000))) ) ) {
            result[0] += 1431655;
            result[1] += 1288490;
            result[2] += 38941036;
            result[3] += 8876265;
            result[4] += 572662;
            result[5] += 2576980;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 51586657;
            result[3] += 2100433;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52513602;
            result[5] += 1173488;
          } else {
            result[0] += 19840881;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21007992;
            result[5] += 12838217;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 17570320;
            result[2] += 0;
            result[3] += 0;
            result[4] += 36116770;
            result[5] += 0;
          } else {
            result[0] += 50861454;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2825636;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 8259552;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 45427538;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2302606;
            result[4] += 3150935;
            result[5] += 48233549;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 409825;
            result[1] += 0;
            result[2] += 1229475;
            result[3] += 14753704;
            result[4] += 4917901;
            result[5] += 32376184;
          } else {
            result[0] += 11930464;
            result[1] += 15509604;
            result[2] += 7158278;
            result[3] += 11930464;
            result[4] += 4772185;
            result[5] += 2386092;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53435039;
            result[2] += 0;
            result[3] += 0;
            result[4] += 252052;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 4382619;
            result[1] += 4382619;
            result[2] += 1095654;
            result[3] += 0;
            result[4] += 41634887;
            result[5] += 2191309;
          } else {
            result[0] += 1309441;
            result[1] += 30117148;
            result[2] += 1309441;
            result[3] += 17022736;
            result[4] += 3928323;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
            result[0] += 52195783;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1491308;
            result[5] += 0;
          } else {
            result[0] += 561189;
            result[1] += 187063;
            result[2] += 935315;
            result[3] += 24692320;
            result[4] += 4863638;
            result[5] += 22447564;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
            result[0] += 46665346;
            result[1] += 2243057;
            result[2] += 0;
            result[3] += 1072766;
            result[4] += 3267061;
            result[5] += 438859;
          } else {
            result[0] += 14250277;
            result[1] += 0;
            result[2] += 17564295;
            result[3] += 10936259;
            result[4] += 1325607;
            result[5] += 9610652;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 0;
            result[4] += 26843545;
            result[5] += 5368709;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6573929;
            result[3] += 39443577;
            result[4] += 365218;
            result[5] += 7304366;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 14454216;
            result[4] += 0;
            result[5] += 12389328;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 43620761;
            result[5] += 10066329;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2556528;
            result[3] += 0;
            result[4] += 0;
            result[5] += 51130563;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 11302545;
            result[3] += 31082000;
            result[4] += 0;
            result[5] += 11302545;
          } else {
            result[0] += 1851279;
            result[1] += 1851279;
            result[2] += 39802498;
            result[3] += 2776918;
            result[4] += 1851279;
            result[5] += 5553837;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 10737418;
          } else {
            result[0] += 1309441;
            result[1] += 0;
            result[2] += 39283237;
            result[3] += 13094412;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41415756;
            result[3] += 12271335;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 51130563;
            result[3] += 2556528;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42d00000))) ) ) {
            result[0] += 9474192;
            result[1] += 0;
            result[2] += 44212898;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 310330;
            result[1] += 0;
            result[2] += 49342471;
            result[3] += 3723960;
            result[4] += 0;
            result[5] += 310330;
          } else {
            result[0] += 213044;
            result[1] += 0;
            result[2] += 52941437;
            result[3] += 426088;
            result[4] += 0;
            result[5] += 106522;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x423a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53170869;
            result[5] += 516222;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 45733448;
            result[5] += 7953643;
          }
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 8947848;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 44739242;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1083857;
            result[4] += 2890287;
            result[5] += 49712945;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 10814665;
            result[4] += 3089904;
            result[5] += 39782520;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 14641933;
            result[1] += 0;
            result[2] += 0;
            result[3] += 17082256;
            result[4] += 12201611;
            result[5] += 9761289;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 936402;
            result[1] += 312134;
            result[2] += 312134;
            result[3] += 8427624;
            result[4] += 1872805;
            result[5] += 41825989;
          } else {
            result[0] += 386238;
            result[1] += 386238;
            result[2] += 772476;
            result[3] += 36692616;
            result[4] += 0;
            result[5] += 15449522;
          }
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42500000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428e0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 276737;
            result[1] += 53410353;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x423c0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 17229810;
            result[1] += 4494733;
            result[2] += 249707;
            result[3] += 249707;
            result[4] += 26968399;
            result[5] += 4494733;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 13298637;
            result[1] += 14283721;
            result[2] += 985084;
            result[3] += 2955252;
            result[4] += 20194226;
            result[5] += 1970168;
          } else {
            result[0] += 47679813;
            result[1] += 378411;
            result[2] += 378411;
            result[3] += 1892056;
            result[4] += 1892056;
            result[5] += 1466343;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 201831;
            result[1] += 201831;
            result[2] += 10495220;
            result[3] += 26439883;
            result[4] += 1210987;
            result[5] += 15137337;
          } else {
            result[0] += 7131864;
            result[1] += 0;
            result[2] += 35461215;
            result[3] += 8518615;
            result[4] += 594322;
            result[5] += 1981073;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28208471;
            result[3] += 12739309;
            result[4] += 0;
            result[5] += 12739309;
          } else {
            result[0] += 259045;
            result[1] += 194283;
            result[2] += 49801415;
            result[3] += 3173302;
            result[4] += 0;
            result[5] += 259045;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 276737;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52856878;
            result[5] += 553475;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 37580963;
            result[5] += 16106127;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x429e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 15339168;
            result[2] += 0;
            result[3] += 38347922;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 2556528;
            result[2] += 0;
            result[3] += 2556528;
            result[4] += 34513130;
            result[5] += 14060904;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 898528;
            result[4] += 374386;
            result[5] += 52414175;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
            result[0] += 21474836;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4601750;
            result[4] += 27610504;
            result[5] += 0;
          } else {
            result[0] += 355543;
            result[1] += 0;
            result[2] += 474058;
            result[3] += 16117978;
            result[4] += 3318407;
            result[5] += 33421103;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42d70000))) ) ) {
            result[0] += 2334221;
            result[1] += 10114959;
            result[2] += 0;
            result[3] += 1945184;
            result[4] += 38125615;
            result[5] += 1167110;
          } else {
            result[0] += 0;
            result[1] += 52009369;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1677721;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
            result[0] += 46855855;
            result[1] += 320930;
            result[2] += 504319;
            result[3] += 1008638;
            result[4] += 3759471;
            result[5] += 1237874;
          } else {
            result[0] += 8287269;
            result[1] += 720632;
            result[2] += 7926953;
            result[3] += 17475328;
            result[4] += 3242844;
            result[5] += 16034064;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 53396890;
            result[2] += 0;
            result[3] += 0;
            result[4] += 290200;
            result[5] += 0;
          } else {
            result[0] += 9336885;
            result[1] += 35013320;
            result[2] += 2334221;
            result[3] += 2334221;
            result[4] += 4668442;
            result[5] += 0;
          }
        } else {
          result[0] += 53687091;
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
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d90000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 0;
            result[4] += 0;
            result[5] += 35791394;
          } else {
            result[0] += 692736;
            result[1] += 0;
            result[2] += 12469259;
            result[3] += 32212254;
            result[4] += 0;
            result[5] += 8312839;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 50861454;
            result[3] += 2825636;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ee0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10066329;
            result[3] += 30198988;
            result[4] += 0;
            result[5] += 13421772;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 46237686;
            result[3] += 7192528;
            result[4] += 0;
            result[5] += 256876;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 13421772;
            result[1] += 0;
            result[2] += 40265318;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36604834;
            result[3] += 14641933;
            result[4] += 0;
            result[5] += 2440322;
          } else {
            result[0] += 71582;
            result[1] += 0;
            result[2] += 52398600;
            result[3] += 1145324;
            result[4] += 0;
            result[5] += 71582;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 269784;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53417306;
            result[5] += 0;
          } else {
            result[0] += 3463683;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41564199;
            result[5] += 8659208;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26843545;
            result[5] += 26843545;
          } else {
            result[0] += 48035818;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5651272;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 958698;
            result[2] += 0;
            result[3] += 2876094;
            result[4] += 29719639;
            result[5] += 20132659;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 295308;
            result[3] += 4075257;
            result[4] += 3189332;
            result[5] += 46127192;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 1519445;
            result[2] += 506481;
            result[3] += 9116675;
            result[4] += 6077783;
            result[5] += 36466703;
          } else {
            result[0] += 0;
            result[1] += 719023;
            result[2] += 1198372;
            result[3] += 31876710;
            result[4] += 2396745;
            result[5] += 17496239;
          }
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 3016128;
            result[1] += 6032257;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42225802;
            result[5] += 2412902;
          } else {
            result[0] += 0;
            result[1] += 50002682;
            result[2] += 1579032;
            result[3] += 1052688;
            result[4] += 1052688;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
            result[0] += 45535648;
            result[1] += 468473;
            result[2] += 609015;
            result[3] += 1499115;
            result[4] += 4403653;
            result[5] += 1171184;
          } else {
            result[0] += 9231907;
            result[1] += 426088;
            result[2] += 8805819;
            result[3] += 14486992;
            result[4] += 5823203;
            result[5] += 14913080;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 53413177;
            result[2] += 0;
            result[3] += 136956;
            result[4] += 136956;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c80000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 53687091;
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
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 610080;
            result[1] += 0;
            result[2] += 9761289;
            result[3] += 38435076;
            result[4] += 0;
            result[5] += 4880644;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30973321;
            result[3] += 18583993;
            result[4] += 0;
            result[5] += 4129776;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8947848;
            result[3] += 17895697;
            result[4] += 0;
            result[5] += 26843545;
          } else {
            result[0] += 752622;
            result[1] += 0;
            result[2] += 43401246;
            result[3] += 7777101;
            result[4] += 0;
            result[5] += 1756119;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42df0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47934902;
            result[3] += 5368709;
            result[4] += 0;
            result[5] += 383479;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 46684427;
            result[3] += 6224590;
            result[4] += 0;
            result[5] += 778073;
          } else {
            result[0] += 23860929;
            result[1] += 0;
            result[2] += 29826161;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 0;
            result[4] += 0;
            result[5] += 26843545;
          } else {
            result[0] += 208089;
            result[1] += 0;
            result[2] += 53166867;
            result[3] += 312134;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x421a0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26843545;
            result[5] += 26843545;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42900000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 50704475;
            result[5] += 2982616;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 8947848;
            result[2] += 0;
            result[3] += 0;
            result[4] += 44739242;
            result[5] += 0;
          } else {
            result[0] += 3976821;
            result[1] += 0;
            result[2] += 0;
            result[3] += 7953643;
            result[4] += 5965232;
            result[5] += 35791394;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 34738706;
            result[5] += 18948385;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 91149;
            result[3] += 1002645;
            result[4] += 546897;
            result[5] += 52046399;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42620000))) ) ) {
            result[0] += 52009369;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1677721;
            result[5] += 0;
          } else {
            result[0] += 706409;
            result[1] += 21192272;
            result[2] += 0;
            result[3] += 6357681;
            result[4] += 16953818;
            result[5] += 8476909;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 441869;
            result[3] += 4860559;
            result[4] += 3755887;
            result[5] += 44628775;
          } else {
            result[0] += 1125178;
            result[1] += 642959;
            result[2] += 3375535;
            result[3] += 24914668;
            result[4] += 1607397;
            result[5] += 22021351;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x429c0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 13421772;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40265318;
            result[5] += 0;
          } else {
            result[0] += 253839;
            result[1] += 53052492;
            result[2] += 0;
            result[3] += 0;
            result[4] += 380759;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42850000))) ) ) {
            result[0] += 20963530;
            result[1] += 3579139;
            result[2] += 2045222;
            result[3] += 1022611;
            result[4] += 23520058;
            result[5] += 2556528;
          } else {
            result[0] += 1003497;
            result[1] += 1003497;
            result[2] += 0;
            result[3] += 11540215;
            result[4] += 3010491;
            result[5] += 37129390;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 29283867;
            result[2] += 0;
            result[3] += 443694;
            result[4] += 23959528;
            result[5] += 0;
          } else {
            result[0] += 45515406;
            result[1] += 131801;
            result[2] += 966543;
            result[3] += 1845219;
            result[4] += 3910107;
            result[5] += 1318013;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2556528;
            result[3] += 5113056;
            result[4] += 0;
            result[5] += 46017506;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5694085;
            result[3] += 33351071;
            result[4] += 0;
            result[5] += 14641933;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6710886;
            result[3] += 20132659;
            result[4] += 0;
            result[5] += 26843545;
          } else {
            result[0] += 0;
            result[1] += 958698;
            result[2] += 36909875;
            result[3] += 11025027;
            result[4] += 0;
            result[5] += 4793490;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32316501;
            result[3] += 20328121;
            result[4] += 0;
            result[5] += 1042467;
          } else {
            result[0] += 305040;
            result[1] += 0;
            result[2] += 47586285;
            result[3] += 5490725;
            result[4] += 0;
            result[5] += 305040;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 17895697;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35791394;
            result[5] += 0;
          } else {
            result[0] += 449891;
            result[1] += 0;
            result[2] += 51437632;
            result[3] += 1574621;
            result[4] += 0;
            result[5] += 224945;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
            result[0] += 475107;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52736877;
            result[5] += 475107;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2825636;
            result[3] += 5651272;
            result[4] += 25430727;
            result[5] += 19779454;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 10737418;
          } else {
            result[0] += 158135;
            result[1] += 0;
            result[2] += 237203;
            result[3] += 869746;
            result[4] += 790678;
            result[5] += 51631326;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
            result[0] += 32883343;
            result[1] += 671088;
            result[2] += 0;
            result[3] += 1342177;
            result[4] += 17448304;
            result[5] += 1342177;
          } else {
            result[0] += 396947;
            result[1] += 198473;
            result[2] += 99236;
            result[3] += 18656512;
            result[4] += 3473286;
            result[5] += 30862634;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x429e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53191136;
            result[2] += 0;
            result[3] += 0;
            result[4] += 495954;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 3286964;
            result[1] += 9860894;
            result[2] += 0;
            result[3] += 365218;
            result[4] += 39808795;
            result[5] += 365218;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 14486992;
            result[1] += 9373936;
            result[2] += 0;
            result[3] += 4260880;
            result[4] += 21304401;
            result[5] += 4260880;
          } else {
            result[0] += 49771848;
            result[1] += 482701;
            result[2] += 0;
            result[3] += 697234;
            result[4] += 2091704;
            result[5] += 643601;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 1376592;
            result[1] += 0;
            result[2] += 12045180;
            result[3] += 24950731;
            result[4] += 1032444;
            result[5] += 14282142;
          } else {
            result[0] += 30771869;
            result[1] += 1636801;
            result[2] += 14731214;
            result[3] += 654720;
            result[4] += 5237764;
            result[5] += 654720;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ca0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 16777215;
            result[4] += 0;
            result[5] += 36909875;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 49852298;
            result[4] += 0;
            result[5] += 3834792;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 13421772;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 40265318;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 24245783;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 2597762;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37167986;
            result[3] += 16519104;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a00000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42700000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2556528;
            result[3] += 7669584;
            result[4] += 0;
            result[5] += 43460978;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 26843545;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26843545;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 37580963;
            result[4] += 0;
            result[5] += 16106127;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 45304057;
            result[3] += 6421047;
            result[4] += 0;
            result[5] += 1961986;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 852176;
            result[1] += 0;
            result[2] += 51045345;
            result[3] += 1363481;
            result[4] += 0;
            result[5] += 426088;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x422a0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 244032;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52954994;
            result[5] += 488064;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42870000))) ) ) {
            result[0] += 7669584;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7669584;
            result[5] += 38347922;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7405116;
            result[3] += 0;
            result[4] += 42579417;
            result[5] += 3702558;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 19173961;
            result[1] += 7669584;
            result[2] += 0;
            result[3] += 0;
            result[4] += 18215263;
            result[5] += 8628282;
          } else {
            result[0] += 0;
            result[1] += 474582;
            result[2] += 237291;
            result[3] += 3500042;
            result[4] += 1601714;
            result[5] += 47873461;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 9409077;
            result[1] += 6088226;
            result[2] += 1106950;
            result[3] += 4981276;
            result[4] += 2767375;
            result[5] += 29334183;
          } else {
            result[0] += 1477626;
            result[1] += 492542;
            result[2] += 7388131;
            result[3] += 31276424;
            result[4] += 246271;
            result[5] += 12806095;
          }
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 4549753;
            result[1] += 8189556;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40644464;
            result[5] += 303316;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
            result[0] += 44636730;
            result[1] += 351470;
            result[2] += 746874;
            result[3] += 2240623;
            result[4] += 2460292;
            result[5] += 3251100;
          } else {
            result[0] += 13622097;
            result[1] += 534199;
            result[2] += 15491797;
            result[3] += 13354997;
            result[4] += 2670999;
            result[5] += 8012998;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 23008753;
            result[2] += 0;
            result[3] += 0;
            result[4] += 30678337;
            result[5] += 0;
          } else {
            result[0] += 139446;
            result[1] += 53547644;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0;
            result[1] += 16106127;
            result[2] += 0;
            result[3] += 37580963;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 53687091;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 35791394;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 17895697;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2064888;
            result[4] += 1032444;
            result[5] += 50589759;
          } else {
            result[0] += 8947848;
            result[1] += 0;
            result[2] += 6710886;
            result[3] += 2236962;
            result[4] += 24606583;
            result[5] += 11184810;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4511520;
            result[3] += 39701378;
            result[4] += 0;
            result[5] += 9474192;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 12526987;
            result[4] += 0;
            result[5] += 14316557;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42990000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 17895697;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36342030;
            result[3] += 4955731;
            result[4] += 0;
            result[5] += 12389328;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 8947848;
            result[1] += 0;
            result[2] += 4473924;
            result[3] += 26843545;
            result[4] += 4473924;
            result[5] += 8947848;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 43319928;
            result[3] += 9996906;
            result[4] += 0;
            result[5] += 370255;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42970000))) ) ) {
            result[0] += 17895697;
            result[1] += 0;
            result[2] += 33234865;
            result[3] += 0;
            result[4] += 0;
            result[5] += 2556528;
          } else {
            result[0] += 222768;
            result[1] += 0;
            result[2] += 51310899;
            result[3] += 1930656;
            result[4] += 0;
            result[5] += 222768;
          }
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428f0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42e70000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42900000))) ) ) {
            result[0] += 0;
            result[1] += 273913;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53139263;
            result[5] += 273913;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 45210182;
            result[5] += 8476909;
          }
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a30000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10737418;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2556528;
            result[3] += 0;
            result[4] += 43460978;
            result[5] += 7669584;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42660000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 16106127;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 5368709;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 10737418;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42740000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1427426;
            result[4] += 634411;
            result[5] += 51625253;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 11930464;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35791394;
            result[5] += 5965232;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2584934;
            result[3] += 9544371;
            result[4] += 5169868;
            result[5] += 36387917;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 1179936;
            result[2] += 0;
            result[3] += 46017506;
            result[4] += 0;
            result[5] += 6489648;
          } else {
            result[0] += 3355443;
            result[1] += 1118481;
            result[2] += 5592405;
            result[3] += 15658734;
            result[4] += 4473924;
            result[5] += 23488102;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428a0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42420000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 41485479;
            result[2] += 0;
            result[3] += 0;
            result[4] += 12201611;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42dc0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 35791394;
            result[1] += 17895697;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 28121809;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 24713105;
            result[5] += 852176;
          } else {
            result[0] += 0;
            result[1] += 947419;
            result[2] += 1263225;
            result[3] += 13895482;
            result[4] += 2526451;
            result[5] += 35054512;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 7405116;
            result[1] += 5553837;
            result[2] += 1110767;
            result[3] += 1481023;
            result[4] += 37025580;
            result[5] += 1110767;
          } else {
            result[0] += 44400675;
            result[1] += 1285173;
            result[2] += 1077887;
            result[3] += 3109290;
            result[4] += 2860547;
            result[5] += 953515;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 19272289;
            result[4] += 4129776;
            result[5] += 30285025;
          } else {
            result[0] += 0;
            result[1] += 1003497;
            result[2] += 4515736;
            result[3] += 39136384;
            result[4] += 1003497;
            result[5] += 8027976;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 1095654;
            result[2] += 5478274;
            result[3] += 20817443;
            result[4] += 0;
            result[5] += 26295718;
          } else {
            result[0] += 2606169;
            result[1] += 2084935;
            result[2] += 29189098;
            result[3] += 10424677;
            result[4] += 3127403;
            result[5] += 6254806;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 962134;
            result[1] += 0;
            result[2] += 42333907;
            result[3] += 9044061;
            result[4] += 0;
            result[5] += 1346987;
          } else {
            result[0] += 46976204;
            result[1] += 0;
            result[2] += 6710886;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 0;
            result[4] += 0;
            result[5] += 35791394;
          } else {
            result[0] += 151231;
            result[1] += 0;
            result[2] += 52023547;
            result[3] += 1512312;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 284058;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53403032;
            result[5] += 0;
          } else {
            result[0] += 16106127;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 32212254;
            result[5] += 5368709;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 47586285;
            result[5] += 6100805;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 42949672;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 33907636;
            result[5] += 19779454;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 73847;
            result[3] += 1624643;
            result[4] += 1255406;
            result[5] += 50733193;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 49919576;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3767515;
            result[5] += 0;
          } else {
            result[0] += 111384;
            result[1] += 222768;
            result[2] += 1002456;
            result[3] += 19269433;
            result[4] += 4789512;
            result[5] += 28291537;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42260000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 15339168;
            result[2] += 0;
            result[3] += 0;
            result[4] += 38347922;
            result[5] += 0;
          } else {
            result[0] += 124853;
            result[1] += 53437383;
            result[2] += 0;
            result[3] += 124853;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x423a0000))) ) ) {
            result[0] += 0;
            result[1] += 44430696;
            result[2] += 0;
            result[3] += 0;
            result[4] += 9256395;
            result[5] += 0;
          } else {
            result[0] += 6573929;
            result[1] += 0;
            result[2] += 547827;
            result[3] += 0;
            result[4] += 46017506;
            result[5] += 547827;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 46711617;
            result[1] += 1443201;
            result[2] += 240533;
            result[3] += 1298881;
            result[4] += 2838296;
            result[5] += 1154561;
          } else {
            result[0] += 17274710;
            result[1] += 0;
            result[2] += 13379432;
            result[3] += 13718152;
            result[4] += 1862959;
            result[5] += 7451836;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a00000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 1451002;
            result[1] += 2902004;
            result[2] += 11608019;
            result[3] += 0;
            result[4] += 18863032;
            result[5] += 18863032;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2440322;
            result[4] += 2440322;
            result[5] += 48806446;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 25430727;
            result[4] += 0;
            result[5] += 28256363;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6805405;
            result[3] += 41588591;
            result[4] += 0;
            result[5] += 5293093;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 32212254;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41634887;
            result[3] += 12052204;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 6710886;
            result[1] += 0;
            result[2] += 6710886;
            result[3] += 16777215;
            result[4] += 0;
            result[5] += 23488102;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 25430727;
            result[3] += 22605091;
            result[4] += 0;
            result[5] += 5651272;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37661093;
            result[3] += 15224697;
            result[4] += 0;
            result[5] += 801299;
          } else {
            result[0] += 466844;
            result[1] += 0;
            result[2] += 47151271;
            result[3] += 6068975;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ae0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 32212254;
            result[1] += 0;
            result[2] += 0;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 334707;
            result[1] += 0;
            result[2] += 50808606;
            result[3] += 2209069;
            result[4] += 0;
            result[5] += 334707;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 454975;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53232115;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 50107951;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3579139;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 1052688;
            result[1] += 1052688;
            result[2] += 0;
            result[3] += 3158064;
            result[4] += 40002146;
            result[5] += 8421504;
          } else {
            result[0] += 33955938;
            result[1] += 0;
            result[2] += 1835456;
            result[3] += 458864;
            result[4] += 5965232;
            result[5] += 11471600;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40628069;
            result[5] += 13059022;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2469866;
            result[4] += 1689908;
            result[5] += 49527316;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x425c0000))) ) ) {
            result[0] += 0;
            result[1] += 49213166;
            result[2] += 0;
            result[3] += 4473924;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 312134;
            result[1] += 0;
            result[2] += 2497074;
            result[3] += 13733907;
            result[4] += 13421772;
            result[5] += 23722203;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42850000))) ) ) {
            result[0] += 37925743;
            result[1] += 3201523;
            result[2] += 985084;
            result[3] += 738813;
            result[4] += 7880673;
            result[5] += 2955252;
          } else {
            result[0] += 104044;
            result[1] += 1144492;
            result[2] += 4473924;
            result[3] += 27571858;
            result[4] += 728313;
            result[5] += 19664457;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42940000))) ) ) {
            result[0] += 1342177;
            result[1] += 26396153;
            result[2] += 0;
            result[3] += 0;
            result[4] += 25948760;
            result[5] += 0;
          } else {
            result[0] += 46280213;
            result[1] += 204327;
            result[2] += 3269242;
            result[3] += 715146;
            result[4] += 2707341;
            result[5] += 510819;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 17895697;
            result[2] += 17895697;
            result[3] += 0;
            result[4] += 17895697;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3579139;
            result[4] += 0;
            result[5] += 50107951;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12463074;
            result[3] += 28760941;
            result[4] += 4793490;
            result[5] += 7669584;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5965232;
            result[3] += 0;
            result[4] += 0;
            result[5] += 47721858;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 15339168;
            result[3] += 38347922;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 48653926;
            result[3] += 4194303;
            result[4] += 0;
            result[5] += 838860;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 20364069;
            result[3] += 22215348;
            result[4] += 0;
            result[5] += 11107674;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41549140;
            result[3] += 7469508;
            result[4] += 0;
            result[5] += 4668442;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 35791394;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x43028000))) ) ) {
            result[0] += 70271;
            result[1] += 0;
            result[2] += 50665435;
            result[3] += 2951384;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 32212254;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42240000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 929646;
            result[1] += 0;
            result[2] += 0;
            result[3] += 232411;
            result[4] += 49503681;
            result[5] += 3021351;
          }
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 40563580;
            result[1] += 1193046;
            result[2] += 0;
            result[3] += 0;
            result[4] += 11930464;
            result[5] += 0;
          } else {
            result[0] += 177968;
            result[1] += 593227;
            result[2] += 0;
            result[3] += 1898328;
            result[4] += 4033947;
            result[5] += 46983620;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 1677721;
            result[1] += 0;
            result[2] += 0;
            result[3] += 12582911;
            result[4] += 0;
            result[5] += 39426457;
          } else {
            result[0] += 1231355;
            result[1] += 0;
            result[2] += 738813;
            result[3] += 37679472;
            result[4] += 0;
            result[5] += 14037450;
          }
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x423c0000))) ) ) {
            result[0] += 0;
            result[1] += 48240574;
            result[2] += 0;
            result[3] += 2334221;
            result[4] += 3112295;
            result[5] += 0;
          } else {
            result[0] += 8237701;
            result[1] += 3124645;
            result[2] += 2556528;
            result[3] += 2556528;
            result[4] += 33802983;
            result[5] += 3408704;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
            result[0] += 47041015;
            result[1] += 94270;
            result[2] += 0;
            result[3] += 1084111;
            result[4] += 3959364;
            result[5] += 1508329;
          } else {
            result[0] += 12348030;
            result[1] += 178956;
            result[2] += 11990117;
            result[3] += 13063858;
            result[4] += 2863311;
            result[5] += 13242815;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 17895697;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35791394;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 53381181;
            result[2] += 0;
            result[3] += 152954;
            result[4] += 152954;
            result[5] += 0;
          } else {
            result[0] += 35791394;
            result[1] += 0;
            result[2] += 0;
            result[3] += 17895697;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42840000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1789569;
            result[4] += 0;
            result[5] += 51897521;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 1917396;
            result[2] += 0;
            result[3] += 12463074;
            result[4] += 3834792;
            result[5] += 35471828;
          } else {
            result[0] += 0;
            result[1] += 6194664;
            result[2] += 2064888;
            result[3] += 30973321;
            result[4] += 2064888;
            result[5] += 12389328;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8947848;
            result[5] += 44739242;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 40021286;
            result[4] += 0;
            result[5] += 2928386;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42990000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5368709;
            result[3] += 48318382;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 715827;
            result[1] += 0;
            result[2] += 38654705;
            result[3] += 9305762;
            result[4] += 0;
            result[5] += 5010795;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 20648881;
            result[3] += 10324440;
            result[4] += 14454216;
            result[5] += 8259552;
          } else {
            result[0] += 39232874;
            result[1] += 0;
            result[2] += 14454216;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 2440322;
            result[1] += 0;
            result[2] += 2440322;
            result[3] += 4880644;
            result[4] += 2440322;
            result[5] += 41485479;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 22369621;
            result[4] += 0;
            result[5] += 4473924;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 189039;
            result[1] += 756156;
            result[2] += 43289943;
            result[3] += 8317718;
            result[4] += 0;
            result[5] += 1134234;
          } else {
            result[0] += 169093;
            result[1] += 0;
            result[2] += 51488879;
            result[3] += 1860025;
            result[4] += 0;
            result[5] += 169093;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 1082401;
            result[1] += 216480;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51738769;
            result[5] += 649440;
          } else {
            result[0] += 0;
            result[1] += 49852298;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3834792;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 1789569;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 34001824;
            result[5] += 17895697;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 49557314;
            result[5] += 4129776;
          } else {
            result[0] += 0;
            result[1] += 321865;
            result[2] += 128746;
            result[3] += 1287460;
            result[4] += 2188682;
            result[5] += 49760337;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 3355443;
            result[1] += 12303291;
            result[2] += 0;
            result[3] += 10066329;
            result[4] += 23488102;
            result[5] += 4473924;
          } else {
            result[0] += 1837200;
            result[1] += 204133;
            result[2] += 2245467;
            result[3] += 14289339;
            result[4] += 2449601;
            result[5] += 32661348;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42640000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x425a0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 17895697;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35791394;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53554202;
            result[2] += 0;
            result[3] += 0;
            result[4] += 132888;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42cf0000))) ) ) {
            result[0] += 8053063;
            result[1] += 28185722;
            result[2] += 1342177;
            result[3] += 2684354;
            result[4] += 10737418;
            result[5] += 2684354;
          } else {
            result[0] += 0;
            result[1] += 10737418;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42820000))) ) ) {
            result[0] += 25309628;
            result[1] += 1533916;
            result[2] += 0;
            result[3] += 766958;
            result[4] += 21474836;
            result[5] += 4601750;
          } else {
            result[0] += 1248537;
            result[1] += 499414;
            result[2] += 249707;
            result[3] += 26219277;
            result[4] += 2247366;
            result[5] += 23222788;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42890000))) ) ) {
            result[0] += 2516582;
            result[1] += 20132659;
            result[2] += 0;
            result[3] += 1677721;
            result[4] += 29360127;
            result[5] += 0;
          } else {
            result[0] += 43917501;
            result[1] += 1186959;
            result[2] += 2556528;
            result[3] += 2373918;
            result[4] += 2328266;
            result[5] += 1323916;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
            result[0] += 2497074;
            result[1] += 2497074;
            result[2] += 1248537;
            result[3] += 1248537;
            result[4] += 23722203;
            result[5] += 22473666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7535030;
            result[3] += 16953818;
            result[4] += 0;
            result[5] += 29198242;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5711392;
            result[3] += 42835445;
            result[4] += 571139;
            result[5] += 4569114;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 23402065;
            result[3] += 16519104;
            result[4] += 0;
            result[5] += 13765920;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 46017506;
            result[3] += 7669584;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 24403223;
            result[3] += 29283867;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 26843545;
          } else {
            result[0] += 1677721;
            result[1] += 0;
            result[2] += 48653926;
            result[3] += 3355443;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 0;
            result[4] += 0;
            result[5] += 17895697;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42e70000))) ) ) {
            result[0] += 1198967;
            result[1] += 266437;
            result[2] += 44095352;
            result[3] += 5861617;
            result[4] += 399655;
            result[5] += 1865060;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 40265318;
            result[1] += 0;
            result[2] += 13421772;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52347306;
            result[3] += 1244085;
            result[4] += 0;
            result[5] += 95698;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 962997;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52483344;
            result[5] += 240749;
          } else {
            result[0] += 2064888;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26843545;
            result[5] += 24778657;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
            result[0] += 20132659;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 29080507;
            result[5] += 4473924;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 145100;
            result[3] += 2176503;
            result[4] += 2394154;
            result[5] += 48971333;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 2095105;
            result[1] += 2618882;
            result[2] += 0;
            result[3] += 6547206;
            result[4] += 4975876;
            result[5] += 37450019;
          } else {
            result[0] += 2158275;
            result[1] += 1888490;
            result[2] += 2428059;
            result[3] += 32913694;
            result[4] += 2428059;
            result[5] += 11870512;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42660000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42360000))) ) ) {
            result[0] += 0;
            result[1] += 47721858;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5965232;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 7953643;
            result[2] += 0;
            result[3] += 0;
            result[4] += 45733448;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42580000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 30344877;
            result[2] += 4668442;
            result[3] += 0;
            result[4] += 18673770;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 20132659;
            result[1] += 2135282;
            result[2] += 610080;
            result[3] += 8541128;
            result[4] += 5795765;
            result[5] += 16472175;
          } else {
            result[0] += 45681121;
            result[1] += 1742475;
            result[2] += 565127;
            result[3] += 1318630;
            result[4] += 4050078;
            result[5] += 329657;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 3093832;
            result[1] += 1819901;
            result[2] += 6915625;
            result[3] += 16379112;
            result[4] += 6369654;
            result[5] += 19108964;
          } else {
            result[0] += 50107951;
            result[1] += 1193046;
            result[2] += 2386092;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 47492426;
            result[4] += 0;
            result[5] += 6194664;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14913080;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 11930464;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13421772;
            result[3] += 2684354;
            result[4] += 0;
            result[5] += 37580963;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34513130;
            result[3] += 15339168;
            result[4] += 0;
            result[5] += 3834792;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 15339168;
            result[3] += 23008753;
            result[4] += 0;
            result[5] += 15339168;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 843252;
            result[1] += 0;
            result[2] += 40757215;
            result[3] += 10681201;
            result[4] += 0;
            result[5] += 1405421;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 45427538;
            result[4] += 0;
            result[5] += 8259552;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 30678337;
            result[1] += 0;
            result[2] += 23008753;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1394469;
            result[1] += 0;
            result[2] += 45494580;
            result[3] += 6100805;
            result[4] += 0;
            result[5] += 697234;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 13421772;
            result[1] += 0;
            result[2] += 13421772;
            result[3] += 0;
            result[4] += 0;
            result[5] += 26843545;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 101296;
            result[1] += 0;
            result[2] += 52978016;
            result[3] += 607778;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42960000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53010363;
            result[5] += 676728;
          } else {
            result[0] += 0;
            result[1] += 17895697;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 35791394;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 30001609;
            result[5] += 23685481;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1714246;
            result[4] += 1168804;
            result[5] += 50804039;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 31580641;
            result[1] += 10105805;
            result[2] += 0;
            result[3] += 1263225;
            result[4] += 10737418;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1420293;
            result[2] += 284058;
            result[3] += 22156577;
            result[4] += 1420293;
            result[5] += 28405868;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 36733272;
            result[2] += 0;
            result[3] += 0;
            result[4] += 16953818;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 11261194;
            result[1] += 5237764;
            result[2] += 0;
            result[3] += 261888;
            result[4] += 34307360;
            result[5] += 2618882;
          } else {
            result[0] += 47659558;
            result[1] += 560700;
            result[2] += 140175;
            result[3] += 981226;
            result[4] += 2289527;
            result[5] += 2055902;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 481498;
            result[1] += 481498;
            result[2] += 8185475;
            result[3] += 24315678;
            result[4] += 1685245;
            result[5] += 18537695;
          } else {
            result[0] += 36677319;
            result[1] += 0;
            result[2] += 11162662;
            result[3] += 531555;
            result[4] += 4783998;
            result[5] += 531555;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1412818;
            result[5] += 52274272;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 24403223;
            result[4] += 4880644;
            result[5] += 24403223;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42182714;
            result[4] += 0;
            result[5] += 11504376;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 865920;
            result[1] += 1731841;
            result[2] += 6061445;
            result[3] += 17318416;
            result[4] += 2597762;
            result[5] += 25111703;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0;
            result[1] += 706409;
            result[2] += 38146091;
            result[3] += 14834590;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 43460978;
            result[1] += 0;
            result[2] += 5113056;
            result[3] += 0;
            result[4] += 5113056;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2684354;
            result[3] += 51002736;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33554431;
            result[3] += 13421772;
            result[4] += 0;
            result[5] += 6710886;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 16106127;
            result[3] += 29527900;
            result[4] += 0;
            result[5] += 8053063;
          } else {
            result[0] += 1032444;
            result[1] += 0;
            result[2] += 44100110;
            result[3] += 7964568;
            result[4] += 0;
            result[5] += 589968;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 90995;
            result[1] += 0;
            result[2] += 52140175;
            result[3] += 1455921;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42420000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x424e0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17895697;
            result[5] += 35791394;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 654720;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52377649;
            result[5] += 654720;
          } else {
            result[0] += 1167110;
            result[1] += 2334221;
            result[2] += 0;
            result[3] += 0;
            result[4] += 29177766;
            result[5] += 21007992;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 76695;
            result[2] += 76695;
            result[3] += 1687308;
            result[4] += 1533916;
            result[5] += 50312474;
          } else {
            result[0] += 6173080;
            result[1] += 374126;
            result[2] += 0;
            result[3] += 9540214;
            result[4] += 4676575;
            result[5] += 32923094;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42910000))) ) ) {
            result[0] += 10737418;
            result[1] += 0;
            result[2] += 16106127;
            result[3] += 4026531;
            result[4] += 12079595;
            result[5] += 10737418;
          } else {
            result[0] += 0;
            result[1] += 783753;
            result[2] += 1567506;
            result[3] += 32133879;
            result[4] += 783753;
            result[5] += 18418199;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428c0000))) ) ) {
            result[0] += 0;
            result[1] += 53421313;
            result[2] += 0;
            result[3] += 265777;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 3652183;
            result[1] += 10956549;
            result[2] += 0;
            result[3] += 4017401;
            result[4] += 30313119;
            result[5] += 4747837;
          } else {
            result[0] += 2556528;
            result[1] += 51130563;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42950000))) ) ) {
            result[0] += 47318196;
            result[1] += 269108;
            result[2] += 0;
            result[3] += 1480095;
            result[4] += 2601379;
            result[5] += 2018311;
          } else {
            result[0] += 8488077;
            result[1] += 212201;
            result[2] += 10822299;
            result[3] += 19098174;
            result[4] += 2546423;
            result[5] += 12519914;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 589968;
            result[3] += 9439488;
            result[4] += 1769904;
            result[5] += 41887730;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4427801;
            result[3] += 38189786;
            result[4] += 0;
            result[5] += 11069503;
          } else {
            result[0] += 0;
            result[1] += 1917396;
            result[2] += 15339168;
            result[3] += 19173961;
            result[4] += 3834792;
            result[5] += 13421772;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 789516;
            result[1] += 0;
            result[2] += 25264513;
            result[3] += 24474997;
            result[4] += 789516;
            result[5] += 2368548;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 50933907;
            result[3] += 0;
            result[4] += 0;
            result[5] += 2753184;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 24403223;
            result[3] += 29283867;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 6710886;
            result[1] += 0;
            result[2] += 36909875;
            result[3] += 3355443;
            result[4] += 0;
            result[5] += 6710886;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 45733448;
            result[1] += 0;
            result[2] += 7953643;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36909875;
            result[3] += 16777215;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42900000))) ) ) {
            result[0] += 0;
            result[1] += 40265318;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 13421772;
          } else {
            result[0] += 369406;
            result[1] += 0;
            result[2] += 50054593;
            result[3] += 2585846;
            result[4] += 61567;
            result[5] += 615677;
          }
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x422e0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 550636;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52585817;
            result[5] += 550636;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 3660483;
            result[2] += 0;
            result[3] += 10981450;
            result[4] += 15862095;
            result[5] += 23183062;
          } else {
            result[0] += 0;
            result[1] += 51955249;
            result[2] += 0;
            result[3] += 1731841;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42840000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42300000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2684354;
            result[5] += 51002736;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26843545;
            result[5] += 26843545;
          } else {
            result[0] += 52920132;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 766958;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426c0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26843545;
            result[5] += 26843545;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
            result[0] += 6316128;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 47370962;
            result[5] += 0;
          } else {
            result[0] += 62282;
            result[1] += 0;
            result[2] += 249128;
            result[3] += 2802690;
            result[4] += 871948;
            result[5] += 49701042;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 2949840;
            result[2] += 589968;
            result[3] += 11209392;
            result[4] += 3539808;
            result[5] += 35398082;
          } else {
            result[0] += 41297762;
            result[1] += 0;
            result[2] += 8259552;
            result[3] += 0;
            result[4] += 4129776;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 15099494;
            result[4] += 0;
            result[5] += 38587596;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3516621;
            result[3] += 36103982;
            result[4] += 234441;
            result[5] += 13832045;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429e0000))) ) ) {
            result[0] += 0;
            result[1] += 45097156;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8589934;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42240000))) ) ) {
            result[0] += 0;
            result[1] += 52236088;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1451002;
            result[5] += 0;
          } else {
            result[0] += 4334982;
            result[1] += 5335363;
            result[2] += 0;
            result[3] += 333460;
            result[4] += 42349444;
            result[5] += 1333840;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
            result[0] += 45027882;
            result[1] += 1731841;
            result[2] += 0;
            result[3] += 6927366;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 429496;
            result[1] += 1717986;
            result[2] += 2576980;
            result[3] += 18038862;
            result[4] += 6442450;
            result[5] += 24481313;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
            result[0] += 49565241;
            result[1] += 566754;
            result[2] += 103046;
            result[3] += 206092;
            result[4] += 2988340;
            result[5] += 257615;
          } else {
            result[0] += 23008753;
            result[1] += 0;
            result[2] += 12338027;
            result[3] += 8336504;
            result[4] += 5001902;
            result[5] += 5001902;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 1073741;
            result[2] += 15032385;
            result[3] += 34001824;
            result[4] += 0;
            result[5] += 3579139;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 51769695;
            result[3] += 1917396;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 8110999;
            result[1] += 772476;
            result[2] += 32057759;
            result[3] += 7338523;
            result[4] += 2317428;
            result[5] += 3089904;
          } else {
            result[0] += 123560;
            result[1] += 308901;
            result[2] += 50165613;
            result[3] += 2409432;
            result[4] += 0;
            result[5] += 679583;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42e50000))) ) ) {
            result[0] += 785664;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52377649;
            result[5] += 523776;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
            result[0] += 49758767;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3928323;
            result[5] += 0;
          } else {
            result[0] += 1412818;
            result[1] += 0;
            result[2] += 5651272;
            result[3] += 0;
            result[4] += 32494818;
            result[5] += 14128181;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 33285996;
            result[5] += 20401094;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1839083;
            result[4] += 848807;
            result[5] += 50999199;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 9418787;
            result[2] += 0;
            result[3] += 941878;
            result[4] += 35791394;
            result[5] += 7535030;
          } else {
            result[0] += 0;
            result[1] += 146686;
            result[2] += 880116;
            result[3] += 18482441;
            result[4] += 1320174;
            result[5] += 32857673;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x422c0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 2064888;
            result[1] += 33038209;
            result[2] += 0;
            result[3] += 0;
            result[4] += 18583993;
            result[5] += 0;
          } else {
            result[0] += 140542;
            result[1] += 53124922;
            result[2] += 0;
            result[3] += 281084;
            result[4] += 140542;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42890000))) ) ) {
            result[0] += 9241220;
            result[1] += 6600871;
            result[2] += 0;
            result[3] += 1320174;
            result[4] += 36524824;
            result[5] += 0;
          } else {
            result[0] += 45325612;
            result[1] += 1462116;
            result[2] += 502602;
            result[3] += 1553498;
            result[4] += 2878541;
            result[5] += 1964719;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 1112685;
            result[1] += 834514;
            result[2] += 834514;
            result[3] += 21141030;
            result[4] += 6676114;
            result[5] += 23088230;
          } else {
            result[0] += 24224663;
            result[1] += 1964161;
            result[2] += 7201926;
            result[3] += 5237764;
            result[4] += 11784971;
            result[5] += 3273603;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 9761289;
            result[4] += 0;
            result[5] += 43925801;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 26843545;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3834792;
            result[3] += 44100110;
            result[4] += 0;
            result[5] += 5752188;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7669584;
            result[3] += 0;
            result[4] += 0;
            result[5] += 46017506;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4210752;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 13684944;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8947848;
            result[3] += 44739242;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37319075;
            result[3] += 7856647;
            result[4] += 654720;
            result[5] += 7856647;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 46976204;
            result[4] += 0;
            result[5] += 6710886;
          } else {
            result[0] += 1241320;
            result[1] += 0;
            result[2] += 44273747;
            result[3] += 6827260;
            result[4] += 310330;
            result[5] += 1034433;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42f80000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42dd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 51698680;
            result[3] += 662803;
            result[4] += 0;
            result[5] += 1325607;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 46833419;
            result[3] += 6853671;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 49213166;
            result[3] += 4473924;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53538373;
            result[3] += 148717;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52954994;
            result[5] += 732096;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 12389328;
            result[5] += 41297762;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42700000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 52568610;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1118481;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42620000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x424e0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12884901;
            result[3] += 0;
            result[4] += 34359738;
            result[5] += 6442450;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 2902004;
            result[2] += 1451002;
            result[3] += 0;
            result[4] += 36275061;
            result[5] += 13059022;
          } else {
            result[0] += 0;
            result[1] += 410720;
            result[2] += 176023;
            result[3] += 2699023;
            result[4] += 2170953;
            result[5] += 48230370;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 8947848;
            result[4] += 44739242;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 7049820;
            result[4] += 2711469;
            result[5] += 43925801;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1988410;
            result[3] += 9942053;
            result[4] += 3976821;
            result[5] += 37779804;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2770946;
            result[3] += 41910567;
            result[4] += 346368;
            result[5] += 8659208;
          }
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 1789569;
            result[2] += 596523;
            result[3] += 1193046;
            result[4] += 50107951;
            result[5] += 0;
          } else {
            result[0] += 1142278;
            result[1] += 25130127;
            result[2] += 0;
            result[3] += 4569114;
            result[4] += 22845570;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 53307229;
            result[2] += 0;
            result[3] += 0;
            result[4] += 379861;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
            result[0] += 49213166;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4473924;
            result[5] += 0;
          } else {
            result[0] += 483667;
            result[1] += 2418337;
            result[2] += 1451002;
            result[3] += 21281369;
            result[4] += 5804009;
            result[5] += 22248704;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
            result[0] += 47558210;
            result[1] += 1662874;
            result[2] += 190042;
            result[3] += 712660;
            result[4] += 3468281;
            result[5] += 95021;
          } else {
            result[0] += 14031853;
            result[1] += 0;
            result[2] += 6100805;
            result[3] += 12811692;
            result[4] += 6405846;
            result[5] += 14336893;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428e0000))) ) ) {
            result[0] += 0;
            result[1] += 26843545;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26843545;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1052688;
            result[3] += 5263440;
            result[4] += 1052688;
            result[5] += 46318274;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 1095654;
            result[1] += 3013051;
            result[2] += 15065255;
            result[3] += 26021804;
            result[4] += 1917396;
            result[5] += 6573929;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 155614;
            result[1] += 0;
            result[2] += 43105287;
            result[3] += 9648114;
            result[4] += 0;
            result[5] += 778073;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
            result[0] += 40265318;
            result[1] += 0;
            result[2] += 6710886;
            result[3] += 0;
            result[4] += 6710886;
            result[5] += 0;
          } else {
            result[0] += 174592;
            result[1] += 0;
            result[2] += 51679281;
            result[3] += 1571329;
            result[4] += 0;
            result[5] += 261888;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42da0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 267099;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53152891;
            result[5] += 267099;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 47370962;
            result[5] += 6316128;
          }
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 4880644;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 48806446;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 45427538;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8259552;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42520000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 33802983;
            result[5] += 19884107;
          } else {
            result[0] += 0;
            result[1] += 117864;
            result[2] += 176796;
            result[3] += 2357281;
            result[4] += 2121553;
            result[5] += 48913595;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4129776;
            result[3] += 41297762;
            result[4] += 0;
            result[5] += 8259552;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 501748;
            result[3] += 12543712;
            result[4] += 0;
            result[5] += 40641629;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 43444159;
            result[4] += 0;
            result[5] += 10242931;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6316128;
            result[3] += 23159137;
            result[4] += 0;
            result[5] += 24211825;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42e20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 0;
            result[1] += 52976003;
            result[2] += 0;
            result[3] += 0;
            result[4] += 711087;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
            result[0] += 766958;
            result[1] += 47551423;
            result[2] += 0;
            result[3] += 766958;
            result[4] += 4601750;
            result[5] += 0;
          } else {
            result[0] += 6507526;
            result[1] += 4338350;
            result[2] += 0;
            result[3] += 1626881;
            result[4] += 39587451;
            result[5] += 1626881;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
            result[0] += 47315848;
            result[1] += 327931;
            result[2] += 281084;
            result[3] += 1686505;
            result[4] += 2623452;
            result[5] += 1452268;
          } else {
            result[0] += 15883754;
            result[1] += 317675;
            result[2] += 2859075;
            result[3] += 13342354;
            result[4] += 5718151;
            result[5] += 15566079;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 2334221;
            result[2] += 4668442;
            result[3] += 10503996;
            result[4] += 1167110;
            result[5] += 35013320;
          } else {
            result[0] += 0;
            result[1] += 1045852;
            result[2] += 11155759;
            result[3] += 30678337;
            result[4] += 0;
            result[5] += 10807141;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6194664;
            result[3] += 6194664;
            result[4] += 2064888;
            result[5] += 39232874;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41756626;
            result[3] += 7953643;
            result[4] += 0;
            result[5] += 3976821;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ef0000))) ) ) {
            result[0] += 4473924;
            result[1] += 0;
            result[2] += 34896609;
            result[3] += 6263493;
            result[4] += 2684354;
            result[5] += 5368709;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 15339168;
            result[3] += 15339168;
            result[4] += 0;
            result[5] += 23008753;
          } else {
            result[0] += 747250;
            result[1] += 0;
            result[2] += 49203586;
            result[3] += 3621292;
            result[4] += 57480;
            result[5] += 57480;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 187063;
            result[1] += 748252;
            result[2] += 0;
            result[3] += 561189;
            result[4] += 49945830;
            result[5] += 2244756;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 48318382;
            result[3] += 5368709;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
            result[0] += 2206318;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3677198;
            result[4] += 24269506;
            result[5] += 23534067;
          } else {
            result[0] += 213609;
            result[1] += 0;
            result[2] += 142406;
            result[3] += 2634512;
            result[4] += 1139248;
            result[5] += 49557314;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
            result[0] += 37214915;
            result[1] += 0;
            result[2] += 0;
            result[3] += 610080;
            result[4] += 14031853;
            result[5] += 1830241;
          } else {
            result[0] += 251461;
            result[1] += 1634501;
            result[2] += 2766079;
            result[3] += 20745597;
            result[4] += 5783621;
            result[5] += 22505829;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 26843545;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 26843545;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b80000))) ) ) {
            result[0] += 0;
            result[1] += 12389328;
            result[2] += 0;
            result[3] += 20648881;
            result[4] += 20648881;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53409638;
            result[2] += 0;
            result[3] += 0;
            result[4] += 277452;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
            result[0] += 4294967;
            result[1] += 17179869;
            result[2] += 0;
            result[3] += 0;
            result[4] += 30064771;
            result[5] += 2147483;
          } else {
            result[0] += 47384493;
            result[1] += 138013;
            result[2] += 46004;
            result[3] += 598056;
            result[4] += 3726353;
            result[5] += 1794170;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 877240;
            result[1] += 701792;
            result[2] += 15965768;
            result[3] += 22632793;
            result[4] += 526344;
            result[5] += 12983152;
          } else {
            result[0] += 40875398;
            result[1] += 610080;
            result[2] += 9761289;
            result[3] += 0;
            result[4] += 2440322;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 1052688;
            result[1] += 0;
            result[2] += 5263440;
            result[3] += 10526880;
            result[4] += 0;
            result[5] += 36844082;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2825636;
            result[3] += 42384545;
            result[4] += 0;
            result[5] += 8476909;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 51002736;
            result[3] += 0;
            result[4] += 0;
            result[5] += 2684354;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42520000))) ) ) {
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 11930464;
            result[3] += 29826161;
            result[4] += 0;
            result[5] += 11930464;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38212576;
            result[3] += 12316450;
            result[4] += 0;
            result[5] += 3158064;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 16106127;
            result[3] += 16106127;
            result[4] += 0;
            result[5] += 21474836;
          } else {
            result[0] += 820694;
            result[1] += 136782;
            result[2] += 50883052;
            result[3] += 1709779;
            result[4] += 0;
            result[5] += 136782;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 1779682;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51314181;
            result[5] += 593227;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 958698;
            result[4] += 20132659;
            result[5] += 32595733;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 48574034;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2556528;
            result[5] += 2556528;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
            result[0] += 32715571;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 15938355;
            result[5] += 5033164;
          } else {
            result[0] += 267432;
            result[1] += 0;
            result[2] += 66858;
            result[3] += 1938886;
            result[4] += 1337162;
            result[5] += 50076751;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 8351325;
            result[4] += 1193046;
            result[5] += 44142719;
          } else {
            result[0] += 0;
            result[1] += 843252;
            result[2] += 0;
            result[3] += 35978783;
            result[4] += 281084;
            result[5] += 16583970;
          }
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 6514333;
            result[1] += 2470953;
            result[2] += 2246321;
            result[3] += 2246321;
            result[4] += 35941148;
            result[5] += 4268011;
          } else {
            result[0] += 697234;
            result[1] += 47411976;
            result[2] += 0;
            result[3] += 697234;
            result[4] += 4880644;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
            result[0] += 2684354;
            result[1] += 0;
            result[2] += 7381975;
            result[3] += 15435038;
            result[4] += 5368709;
            result[5] += 22817013;
          } else {
            result[0] += 43307327;
            result[1] += 660883;
            result[2] += 2604659;
            result[3] += 2721286;
            result[4] += 2526908;
            result[5] += 1866024;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 15339168;
            result[2] += 0;
            result[3] += 0;
            result[4] += 38347922;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42182714;
            result[5] += 11504376;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4994148;
            result[4] += 0;
            result[5] += 48692943;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 1412818;
            result[1] += 8476909;
            result[2] += 1412818;
            result[3] += 7064090;
            result[4] += 2825636;
            result[5] += 32494818;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7424810;
            result[3] += 41693166;
            result[4] += 0;
            result[5] += 4569114;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 18948385;
            result[3] += 25264513;
            result[4] += 0;
            result[5] += 9474192;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47721858;
            result[3] += 0;
            result[4] += 0;
            result[5] += 5965232;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42db0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42850000))) ) ) {
            result[0] += 53687091;
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
            result[4] += 53687091;
            result[5] += 0;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 16617432;
            result[3] += 15339168;
            result[4] += 1278264;
            result[5] += 20452225;
          } else {
            result[0] += 350896;
            result[1] += 0;
            result[2] += 41054834;
            result[3] += 10877776;
            result[4] += 0;
            result[5] += 1403584;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13421772;
            result[3] += 40265318;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 493836;
            result[1] += 0;
            result[2] += 51288456;
            result[3] += 1904798;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42340000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10737418;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 234441;
            result[3] += 937765;
            result[4] += 51108235;
            result[5] += 1406648;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 32212254;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 2147483;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 39728447;
            result[5] += 11811160;
          } else {
            result[0] += 972592;
            result[1] += 64839;
            result[2] += 0;
            result[3] += 2982616;
            result[4] += 1037431;
            result[5] += 48629611;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 6927366;
            result[1] += 0;
            result[2] += 692736;
            result[3] += 11083786;
            result[4] += 7620103;
            result[5] += 27363098;
          } else {
            result[0] += 321479;
            result[1] += 0;
            result[2] += 1607397;
            result[3] += 40827907;
            result[4] += 0;
            result[5] += 10930305;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425a0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53435629;
            result[2] += 0;
            result[3] += 0;
            result[4] += 251461;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 43822633;
            result[1] += 261888;
            result[2] += 349184;
            result[3] += 1702273;
            result[4] += 5805189;
            result[5] += 1745921;
          } else {
            result[0] += 1220161;
            result[1] += 46366124;
            result[2] += 0;
            result[3] += 3660483;
            result[4] += 2440322;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 209715;
            result[2] += 3984588;
            result[3] += 19084083;
            result[4] += 1048575;
            result[5] += 29360127;
          } else {
            result[0] += 17091396;
            result[1] += 201075;
            result[2] += 21515051;
            result[3] += 6032257;
            result[4] += 5227956;
            result[5] += 3619354;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 0;
            result[1] += 5752188;
            result[2] += 19173961;
            result[3] += 1917396;
            result[4] += 15339168;
            result[5] += 11504376;
          } else {
            result[0] += 1917396;
            result[1] += 1917396;
            result[2] += 0;
            result[3] += 1917396;
            result[4] += 0;
            result[5] += 47934902;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3660483;
            result[3] += 36604834;
            result[4] += 1220161;
            result[5] += 12201611;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 6710886;
            result[5] += 46976204;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8947848;
            result[3] += 44739242;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 13421772;
            result[5] += 40265318;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 43587539;
            result[3] += 8504885;
            result[4] += 0;
            result[5] += 1594666;
          }
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ee0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 1544952;
            result[1] += 0;
            result[2] += 44031139;
            result[3] += 8110999;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 73443;
            result[1] += 0;
            result[2] += 51263460;
            result[3] += 2203300;
            result[4] += 0;
            result[5] += 146886;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42140000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 224632;
            result[4] += 51665401;
            result[5] += 1797057;
          }
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x425a0000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1940497;
            result[1] += 1293664;
            result[2] += 0;
            result[3] += 3234162;
            result[4] += 31694788;
            result[5] += 15523978;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3579139;
            result[4] += 39370533;
            result[5] += 10737418;
          } else {
            result[0] += 64527;
            result[1] += 64527;
            result[2] += 64527;
            result[3] += 1871304;
            result[4] += 2581110;
            result[5] += 49041092;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 872960;
            result[3] += 22260501;
            result[4] += 436480;
            result[5] += 30117148;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 593227;
            result[3] += 41525926;
            result[4] += 1483068;
            result[5] += 10084867;
          } else {
            result[0] += 1952257;
            result[1] += 0;
            result[2] += 19522578;
            result[3] += 16594191;
            result[4] += 0;
            result[5] += 15618062;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d70000))) ) ) {
            result[0] += 5965232;
            result[1] += 5506368;
            result[2] += 0;
            result[3] += 917728;
            result[4] += 39462306;
            result[5] += 1835456;
          } else {
            result[0] += 0;
            result[1] += 52108059;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1579032;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 9073874;
            result[1] += 7561562;
            result[2] += 756156;
            result[3] += 1512312;
            result[4] += 31002404;
            result[5] += 3780781;
          } else {
            result[0] += 2147483;
            result[1] += 40802189;
            result[2] += 0;
            result[3] += 1073741;
            result[4] += 9663676;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 49234738;
            result[1] += 258857;
            result[2] += 155314;
            result[3] += 828344;
            result[4] += 2381491;
            result[5] += 828344;
          } else {
            result[0] += 22306608;
            result[1] += 0;
            result[2] += 4536937;
            result[3] += 10964265;
            result[4] += 7939640;
            result[5] += 7939640;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 967334;
            result[3] += 11608019;
            result[4] += 3385672;
            result[5] += 37726064;
          } else {
            result[0] += 0;
            result[1] += 783753;
            result[2] += 9013161;
            result[3] += 31350126;
            result[4] += 0;
            result[5] += 12540050;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 17179869;
            result[2] += 8589934;
            result[3] += 25769803;
            result[4] += 0;
            result[5] += 2147483;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40848873;
            result[3] += 9920440;
            result[4] += 0;
            result[5] += 2917776;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 2825636;
            result[1] += 4238454;
            result[2] += 1412818;
            result[3] += 12715363;
            result[4] += 8476909;
            result[5] += 24017909;
          } else {
            result[0] += 2941758;
            result[1] += 0;
            result[2] += 31623903;
            result[3] += 15444231;
            result[4] += 0;
            result[5] += 3677198;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 5023353;
            result[1] += 0;
            result[2] += 36419313;
            result[3] += 10360666;
            result[4] += 627919;
            result[5] += 1255838;
          } else {
            result[0] += 72845;
            result[1] += 0;
            result[2] += 50481891;
            result[3] += 2986663;
            result[4] += 0;
            result[5] += 145690;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 562168;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52843838;
            result[5] += 281084;
          } else {
            result[0] += 0;
            result[1] += 26843545;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26843545;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14641933;
            result[5] += 39045157;
          } else {
            result[0] += 48318382;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5368709;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2516582;
            result[4] += 39426457;
            result[5] += 11744051;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1824318;
            result[4] += 1889472;
            result[5] += 49973299;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 2346976;
            result[2] += 1466860;
            result[3] += 8214418;
            result[4] += 2346976;
            result[5] += 39311859;
          } else {
            result[0] += 683911;
            result[1] += 341955;
            result[2] += 0;
            result[3] += 33511687;
            result[4] += 0;
            result[5] += 19149535;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 2684354;
            result[2] += 2684354;
            result[3] += 0;
            result[4] += 48318382;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42620000))) ) ) {
            result[0] += 248551;
            result[1] += 53314264;
            result[2] += 0;
            result[3] += 0;
            result[4] += 124275;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 36733272;
            result[2] += 0;
            result[3] += 0;
            result[4] += 16953818;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42870000))) ) ) {
            result[0] += 9636144;
            result[1] += 4818072;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35103098;
            result[5] += 4129776;
          } else {
            result[0] += 44325595;
            result[1] += 2133550;
            result[2] += 348334;
            result[3] += 1436880;
            result[4] += 3352721;
            result[5] += 2090008;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 1883757;
            result[1] += 1318630;
            result[2] += 7346654;
            result[3] += 20721333;
            result[4] += 4521018;
            result[5] += 17895697;
          } else {
            result[0] += 38654705;
            result[1] += 0;
            result[2] += 9663676;
            result[3] += 536870;
            result[4] += 3221225;
            result[5] += 1610612;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4628197;
            result[3] += 34248661;
            result[4] += 0;
            result[5] += 14810232;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 20132659;
            result[3] += 0;
            result[4] += 0;
            result[5] += 33554431;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 15339168;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 2556528;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42910000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42544487;
            result[3] += 9116675;
            result[4] += 0;
            result[5] += 2025927;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ed0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39887999;
            result[3] += 11427372;
            result[4] += 0;
            result[5] += 2371718;
          } else {
            result[0] += 2516582;
            result[1] += 0;
            result[2] += 49492787;
            result[3] += 1258291;
            result[4] += 0;
            result[5] += 419430;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 9761289;
            result[1] += 0;
            result[2] += 14641933;
            result[3] += 29283867;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 200699;
            result[1] += 0;
            result[2] += 52583244;
            result[3] += 602098;
            result[4] += 0;
            result[5] += 301049;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a50000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53418655;
            result[5] += 268435;
          } else {
            result[0] += 0;
            result[1] += 8947848;
            result[2] += 0;
            result[3] += 0;
            result[4] += 44739242;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 19884107;
            result[5] += 33802983;
          } else {
            result[0] += 0;
            result[1] += 42674354;
            result[2] += 0;
            result[3] += 8259552;
            result[4] += 0;
            result[5] += 2753184;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42680000))) ) ) {
            result[0] += 30678337;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 20452225;
            result[5] += 2556528;
          } else {
            result[0] += 678152;
            result[1] += 339076;
            result[2] += 282563;
            result[3] += 2995174;
            result[4] += 2882149;
            result[5] += 46509974;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1760232;
            result[3] += 11001453;
            result[4] += 1320174;
            result[5] += 39605231;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2064888;
            result[3] += 37462970;
            result[4] += 0;
            result[5] += 14159232;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0;
            result[1] += 13421772;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40265318;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 32212254;
            result[1] += 0;
            result[2] += 0;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
            result[0] += 1481023;
            result[1] += 17772278;
            result[2] += 0;
            result[3] += 0;
            result[4] += 32212254;
            result[5] += 2221534;
          } else {
            result[0] += 44497816;
            result[1] += 271604;
            result[2] += 633743;
            result[3] += 1720159;
            result[4] += 5069944;
            result[5] += 1493822;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 9659961;
            result[1] += 743073;
            result[2] += 4086906;
            result[3] += 16904931;
            result[4] += 7059202;
            result[5] += 15233015;
          } else {
            result[0] += 2021689;
            result[1] += 0;
            result[2] += 34368723;
            result[3] += 11006976;
            result[4] += 224632;
            result[5] += 6065068;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42990000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 2684354;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 51002736;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 14641933;
            result[2] += 14641933;
            result[3] += 0;
            result[4] += 0;
            result[5] += 24403223;
          } else {
            result[0] += 925639;
            result[1] += 925639;
            result[2] += 25917906;
            result[3] += 24066627;
            result[4] += 925639;
            result[5] += 925639;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1851279;
            result[1] += 0;
            result[2] += 49984533;
            result[3] += 1851279;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 941878;
            result[1] += 0;
            result[2] += 34849515;
            result[3] += 15070060;
            result[4] += 0;
            result[5] += 2825636;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 48519349;
            result[3] += 5167741;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33554431;
            result[3] += 20132659;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 96213;
            result[1] += 0;
            result[2] += 52628743;
            result[3] += 962134;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
            result[0] += 769707;
            result[1] += 1154561;
            result[2] += 769707;
            result[3] += 0;
            result[4] += 49646127;
            result[5] += 1346987;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3355443;
            result[4] += 29080507;
            result[5] += 21251140;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x425a0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 17895697;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35791394;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42620000))) ) ) {
            result[0] += 29144420;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 3067833;
          } else {
            result[0] += 67615;
            result[1] += 0;
            result[2] += 67615;
            result[3] += 1825631;
            result[4] += 2163711;
            result[5] += 49562516;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42620000))) ) ) {
            result[0] += 51068208;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2618882;
            result[5] += 0;
          } else {
            result[0] += 743931;
            result[1] += 0;
            result[2] += 1859829;
            result[3] += 21574027;
            result[4] += 5455501;
            result[5] += 24053800;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53413874;
            result[2] += 0;
            result[3] += 0;
            result[4] += 273216;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42890000))) ) ) {
            result[0] += 2697843;
            result[1] += 19154690;
            result[2] += 269784;
            result[3] += 2158275;
            result[4] += 26438869;
            result[5] += 2967628;
          } else {
            result[0] += 48748076;
            result[1] += 889022;
            result[2] += 98780;
            result[3] += 889022;
            result[4] += 2370727;
            result[5] += 691462;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d60000))) ) ) {
            result[0] += 547827;
            result[1] += 1095654;
            result[2] += 8400021;
            result[3] += 17895697;
            result[4] += 2373918;
            result[5] += 23373971;
          } else {
            result[0] += 38209731;
            result[1] += 0;
            result[2] += 7255012;
            result[3] += 1934669;
            result[4] += 5804009;
            result[5] += 483667;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42aa0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3780781;
            result[3] += 44613216;
            result[4] += 0;
            result[5] += 5293093;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 50107951;
            result[3] += 0;
            result[4] += 0;
            result[5] += 3579139;
          }
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42900000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 231409;
            result[1] += 0;
            result[2] += 40728138;
            result[3] += 11339083;
            result[4] += 0;
            result[5] += 1388459;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52361483;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1325607;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cc0000))) ) ) {
            result[0] += 84149;
            result[1] += 0;
            result[2] += 52509004;
            result[3] += 1009788;
            result[4] += 0;
            result[5] += 84149;
          } else {
            result[0] += 15339168;
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
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c20000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 749819;
            result[1] += 449891;
            result[2] += 0;
            result[3] += 0;
            result[4] += 49188172;
            result[5] += 3299206;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42620000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42560000))) ) ) {
            result[0] += 0;
            result[1] += 52153174;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1533916;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 2236962;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51450129;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428d0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 22513941;
            result[1] += 0;
            result[2] += 5195524;
            result[3] += 0;
            result[4] += 22513941;
            result[5] += 3463683;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3826251;
            result[4] += 1554414;
            result[5] += 48306425;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 0;
            result[4] += 0;
            result[5] += 35791394;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 46170898;
            result[4] += 0;
            result[5] += 7516192;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
            result[0] += 25591774;
            result[1] += 2225371;
            result[2] += 0;
            result[3] += 9457829;
            result[4] += 5007086;
            result[5] += 11405029;
          } else {
            result[0] += 48429325;
            result[1] += 916491;
            result[2] += 337654;
            result[3] += 916491;
            result[4] += 2653000;
            result[5] += 434127;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 276737;
            result[1] += 1106950;
            result[2] += 830212;
            result[3] += 23245957;
            result[4] += 3597588;
            result[5] += 24629644;
          } else {
            result[0] += 16077417;
            result[1] += 1435483;
            result[2] += 16077417;
            result[3] += 4019354;
            result[4] += 7464515;
            result[5] += 8612902;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 671088;
            result[1] += 0;
            result[2] += 5368709;
            result[3] += 4026531;
            result[4] += 4026531;
            result[5] += 39594229;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 16519104;
            result[3] += 37167986;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 654720;
            result[3] += 41902119;
            result[4] += 654720;
            result[5] += 10475529;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42990000))) ) ) {
            result[0] += 13421772;
            result[1] += 0;
            result[2] += 0;
            result[3] += 26843545;
            result[4] += 13421772;
            result[5] += 0;
          } else {
            result[0] += 1533916;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 9203501;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30488965;
            result[3] += 19884107;
            result[4] += 0;
            result[5] += 3314017;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 24778657;
            result[3] += 8259552;
            result[4] += 0;
            result[5] += 20648881;
          } else {
            result[0] += 0;
            result[1] += 416179;
            result[2] += 44114974;
            result[3] += 7907401;
            result[4] += 0;
            result[5] += 1248537;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ca0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1512312;
            result[1] += 0;
            result[2] += 48393997;
            result[3] += 3780781;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 32212254;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52062800;
            result[3] += 1624290;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 521233;
            result[1] += 173744;
            result[2] += 0;
            result[3] += 173744;
            result[4] += 51428410;
            result[5] += 1389957;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42620000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 17895697;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35791394;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1315101;
            result[4] += 2011331;
            result[5] += 50360657;
          } else {
            result[0] += 948116;
            result[1] += 237029;
            result[2] += 0;
            result[3] += 12206998;
            result[4] += 8770076;
            result[5] += 31524870;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x425e0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 53439113;
            result[2] += 0;
            result[3] += 0;
            result[4] += 247977;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10737418;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424a0000))) ) ) {
            result[0] += 0;
            result[1] += 50331647;
            result[2] += 0;
            result[3] += 3355443;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 6710886;
            result[2] += 3355443;
            result[3] += 2236962;
            result[4] += 39146837;
            result[5] += 2236962;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
            result[0] += 49114373;
            result[1] += 677439;
            result[2] += 112906;
            result[3] += 1016159;
            result[4] += 2258132;
            result[5] += 508079;
          } else {
            result[0] += 19404972;
            result[1] += 1940497;
            result[2] += 7438572;
            result[3] += 5821491;
            result[4] += 6791740;
            result[5] += 12289816;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 189707;
            result[1] += 189707;
            result[2] += 3983847;
            result[3] += 35664922;
            result[4] += 569121;
            result[5] += 13089785;
          } else {
            result[0] += 16083474;
            result[1] += 5210139;
            result[2] += 16536530;
            result[3] += 5663195;
            result[4] += 3397917;
            result[5] += 6795834;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4880644;
            result[3] += 0;
            result[4] += 43925801;
            result[5] += 4880644;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 909950;
            result[3] += 0;
            result[4] += 2729852;
            result[5] += 50047288;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0;
            result[1] += 3158064;
            result[2] += 0;
            result[3] += 12632256;
            result[4] += 0;
            result[5] += 37896770;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2556528;
            result[3] += 46017506;
            result[4] += 0;
            result[5] += 5113056;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 50704475;
            result[4] += 0;
            result[5] += 2982616;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ef0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 5113056;
            result[4] += 8947848;
            result[5] += 3834792;
          } else {
            result[0] += 48806446;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4880644;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 31173149;
            result[3] += 19050258;
            result[4] += 0;
            result[5] += 3463683;
          } else {
            result[0] += 7002664;
            result[1] += 0;
            result[2] += 46684427;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 34896609;
            result[1] += 0;
            result[2] += 16106127;
            result[3] += 2684354;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 132724;
            result[1] += 0;
            result[2] += 50899875;
            result[3] += 2322680;
            result[4] += 0;
            result[5] += 331811;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 453055;
            result[1] += 453055;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51421813;
            result[5] += 1359166;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
            result[0] += 53047959;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 639132;
            result[5] += 0;
          } else {
            result[0] += 2147483;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 36507222;
            result[5] += 15032385;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 5835553;
            result[2] += 0;
            result[3] += 0;
            result[4] += 31511988;
            result[5] += 16339549;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 129366;
            result[3] += 1423031;
            result[4] += 1746447;
            result[5] += 50388245;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 692736;
            result[2] += 2078209;
            result[3] += 15240206;
            result[4] += 4849156;
            result[5] += 30826781;
          } else {
            result[0] += 0;
            result[1] += 1248537;
            result[2] += 0;
            result[3] += 13733907;
            result[4] += 36207573;
            result[5] += 2497074;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x422a0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 789516;
            result[1] += 9474192;
            result[2] += 0;
            result[3] += 6316128;
            result[4] += 37107254;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 53552198;
            result[2] += 0;
            result[3] += 0;
            result[4] += 134892;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 2606169;
            result[1] += 3127403;
            result[2] += 0;
            result[3] += 9382210;
            result[4] += 9903444;
            result[5] += 28667864;
          } else {
            result[0] += 46897395;
            result[1] += 1212445;
            result[2] += 0;
            result[3] += 1163947;
            result[4] += 3394847;
            result[5] += 1018454;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 498641;
            result[1] += 3656705;
            result[2] += 1662139;
            result[3] += 26261796;
            result[4] += 1828352;
            result[5] += 19779454;
          } else {
            result[0] += 21709534;
            result[1] += 0;
            result[2] += 23763138;
            result[3] += 4107209;
            result[4] += 1466860;
            result[5] += 2640348;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 26843545;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26843545;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 3158064;
            result[2] += 8421504;
            result[3] += 0;
            result[4] += 8421504;
            result[5] += 33686018;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5237764;
            result[3] += 43211561;
            result[4] += 0;
            result[5] += 5237764;
          } else {
            result[0] += 5856773;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 15618062;
            result[4] += 976128;
            result[5] += 20498707;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32212254;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 10737418;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 49557314;
            result[3] += 2753184;
            result[4] += 0;
            result[5] += 1376592;
          } else {
            result[0] += 35791394;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 17895697;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d60000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42990000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40409638;
            result[3] += 12700172;
            result[4] += 0;
            result[5] += 577280;
          } else {
            result[0] += 1485413;
            result[1] += 0;
            result[2] += 48382042;
            result[3] += 3395231;
            result[4] += 0;
            result[5] += 424403;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42960000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52582418;
            result[3] += 1104672;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42240000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
            result[0] += 781850;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51080921;
            result[5] += 1824318;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5651272;
            result[4] += 25430727;
            result[5] += 22605091;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 22473666;
            result[1] += 1872805;
            result[2] += 624268;
            result[3] += 0;
            result[4] += 22473666;
            result[5] += 6242685;
          } else {
            result[0] += 0;
            result[1] += 186629;
            result[2] += 62209;
            result[3] += 2239554;
            result[4] += 2737232;
            result[5] += 48461464;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
            result[0] += 1883757;
            result[1] += 627919;
            result[2] += 627919;
            result[3] += 15384020;
            result[4] += 0;
            result[5] += 35163474;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 40563580;
            result[4] += 0;
            result[5] += 13123511;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42420000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 3158064;
            result[2] += 0;
            result[3] += 0;
            result[4] += 50529027;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 50107951;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3579139;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 19721788;
            result[1] += 1643482;
            result[2] += 136956;
            result[3] += 2876094;
            result[4] += 19310918;
            result[5] += 9997851;
          } else {
            result[0] += 48358489;
            result[1] += 1776200;
            result[2] += 0;
            result[3] += 458374;
            result[4] += 2979433;
            result[5] += 114593;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42df0000))) ) ) {
            result[0] += 2939638;
            result[1] += 773589;
            result[2] += 12686863;
            result[3] += 18720858;
            result[4] += 1547178;
            result[5] += 17018962;
          } else {
            result[0] += 45335765;
            result[1] += 0;
            result[2] += 4175662;
            result[3] += 0;
            result[4] += 4175662;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4129776;
            result[3] += 49557314;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8476909;
            result[3] += 14128181;
            result[4] += 0;
            result[5] += 31082000;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4737096;
            result[3] += 48949994;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7158278;
            result[3] += 46528812;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 2013265;
            result[1] += 0;
            result[2] += 37580963;
            result[3] += 12750684;
            result[4] += 0;
            result[5] += 1342177;
          }
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42aa0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 53687091;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30678337;
            result[3] += 23008753;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 45273442;
            result[3] += 8413648;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 542293;
            result[1] += 0;
            result[2] += 50840048;
            result[3] += 2101388;
            result[4] += 0;
            result[5] += 203360;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42460000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 47721858;
            result[5] += 5965232;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 10066329;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 16777215;
            result[5] += 26843545;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5064819;
            result[4] += 18233351;
            result[5] += 30388919;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 155614;
            result[3] += 1322725;
            result[4] += 311229;
            result[5] += 51897521;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 1355734;
            result[1] += 542293;
            result[2] += 0;
            result[3] += 8676701;
            result[4] += 9761289;
            result[5] += 33351071;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2334221;
            result[3] += 30928432;
            result[4] += 1167110;
            result[5] += 19257326;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x420e0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1126302;
            result[1] += 2252605;
            result[2] += 0;
            result[3] += 0;
            result[4] += 48806446;
            result[5] += 1501736;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 28908433;
            result[2] += 0;
            result[3] += 0;
            result[4] += 24778657;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
            result[0] += 22050055;
            result[1] += 1438047;
            result[2] += 0;
            result[3] += 11025027;
            result[4] += 1917396;
            result[5] += 17256565;
          } else {
            result[0] += 47257230;
            result[1] += 989209;
            result[2] += 44964;
            result[3] += 1888490;
            result[4] += 2877700;
            result[5] += 629496;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 2892233;
            result[1] += 2711469;
            result[2] += 1446116;
            result[3] += 18799520;
            result[4] += 7411349;
            result[5] += 20426401;
          } else {
            result[0] += 16031561;
            result[1] += 0;
            result[2] += 29453334;
            result[3] += 3728270;
            result[4] += 372827;
            result[5] += 4101097;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5280697;
            result[3] += 4400581;
            result[4] += 2640348;
            result[5] += 41365463;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 1851279;
            result[1] += 0;
            result[2] += 8330755;
            result[3] += 23140987;
            result[4] += 3239738;
            result[5] += 17124330;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21327748;
            result[3] += 30153023;
            result[4] += 0;
            result[5] += 2206318;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e50000))) ) ) {
            result[0] += 13421772;
            result[1] += 13421772;
            result[2] += 21810380;
            result[3] += 3355443;
            result[4] += 0;
            result[5] += 1677721;
          } else {
            result[0] += 50223407;
            result[1] += 0;
            result[2] += 1731841;
            result[3] += 0;
            result[4] += 1731841;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 46017506;
            result[3] += 7669584;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 22605091;
            result[3] += 28256363;
            result[4] += 0;
            result[5] += 2825636;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37107254;
            result[3] += 15000804;
            result[4] += 0;
            result[5] += 1579032;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 50296327;
            result[3] += 3108200;
            result[4] += 0;
            result[5] += 282563;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47830317;
            result[3] += 5856773;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53571635;
            result[3] += 115456;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ca0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x423c0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42850000))) ) ) {
            result[0] += 206488;
            result[1] += 206488;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51622203;
            result[5] += 1651910;
          } else {
            result[0] += 0;
            result[1] += 11930464;
            result[2] += 0;
            result[3] += 11930464;
            result[4] += 5965232;
            result[5] += 23860929;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42780000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 7669584;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 46017506;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 32212254;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42780000))) ) ) {
            result[0] += 53687091;
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
            result[5] += 53687091;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 48692943;
            result[5] += 4994148;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 262849;
            result[1] += 131424;
            result[2] += 65712;
            result[3] += 1577099;
            result[4] += 2234224;
            result[5] += 49415780;
          } else {
            result[0] += 1700496;
            result[1] += 0;
            result[2] += 1700496;
            result[3] += 15547392;
            result[4] += 971712;
            result[5] += 33766994;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42890000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425a0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42840000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 4936744;
            result[1] += 3702558;
            result[2] += 1851279;
            result[3] += 7405116;
            result[4] += 35791394;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 2334221;
            result[1] += 0;
            result[2] += 0;
            result[3] += 9336885;
            result[4] += 0;
            result[5] += 42015984;
          } else {
            result[0] += 7995949;
            result[1] += 3426835;
            result[2] += 1142278;
            result[3] += 27414684;
            result[4] += 7995949;
            result[5] += 5711392;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42890000))) ) ) {
            result[0] += 12463074;
            result[1] += 19173961;
            result[2] += 0;
            result[3] += 0;
            result[4] += 20132659;
            result[5] += 1917396;
          } else {
            result[0] += 49175987;
            result[1] += 49572;
            result[2] += 941878;
            result[3] += 1140169;
            result[4] += 1784612;
            result[5] += 594870;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 1477626;
            result[1] += 492542;
            result[2] += 2955252;
            result[3] += 7388131;
            result[4] += 7880673;
            result[5] += 33492864;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7375542;
            result[3] += 38249908;
            result[4] += 686097;
            result[5] += 7375542;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 4473924;
            result[2] += 4473924;
            result[3] += 4473924;
            result[4] += 2236962;
            result[5] += 38028356;
          } else {
            result[0] += 331401;
            result[1] += 1657008;
            result[2] += 34797188;
            result[3] += 11930464;
            result[4] += 0;
            result[5] += 4971026;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d90000))) ) ) {
            result[0] += 1851279;
            result[1] += 18512790;
            result[2] += 20364069;
            result[3] += 5553837;
            result[4] += 1851279;
            result[5] += 5553837;
          } else {
            result[0] += 41442666;
            result[1] += 0;
            result[2] += 5651272;
            result[3] += 0;
            result[4] += 4709393;
            result[5] += 1883757;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 646832;
            result[1] += 0;
            result[2] += 36869448;
            result[3] += 13583480;
            result[4] += 646832;
            result[5] += 1940497;
          } else {
            result[0] += 530242;
            result[1] += 66280;
            result[2] += 49577708;
            result[3] += 3314017;
            result[4] += 0;
            result[5] += 198841;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 335544;
            result[1] += 838860;
            result[2] += 0;
            result[3] += 671088;
            result[4] += 50499420;
            result[5] += 1342177;
          } else {
            result[0] += 0;
            result[1] += 49557314;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4129776;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 28633115;
            result[5] += 25053975;
          } else {
            result[0] += 45335765;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7754802;
            result[5] += 596523;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42800000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 48318382;
            result[5] += 5368709;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1241742;
            result[4] += 2556528;
            result[5] += 49888820;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 2662169;
            result[2] += 0;
            result[3] += 3993254;
            result[4] += 10648679;
            result[5] += 36382987;
          } else {
            result[0] += 2105376;
            result[1] += 526344;
            result[2] += 5789784;
            result[3] += 18685213;
            result[4] += 8421504;
            result[5] += 18158869;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 23860929;
            result[2] += 0;
            result[3] += 8947848;
            result[4] += 5965232;
            result[5] += 14913080;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42580000))) ) ) {
            result[0] += 0;
            result[1] += 53547281;
            result[2] += 0;
            result[3] += 0;
            result[4] += 139810;
            result[5] += 0;
          } else {
            result[0] += 5162220;
            result[1] += 37167986;
            result[2] += 0;
            result[3] += 2064888;
            result[4] += 9291996;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
            result[0] += 40997415;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 11713547;
            result[5] += 976128;
          } else {
            result[0] += 820903;
            result[1] += 820903;
            result[2] += 1313445;
            result[3] += 20686769;
            result[4] += 1970168;
            result[5] += 28074900;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 45949694;
            result[1] += 1281654;
            result[2] += 189874;
            result[3] += 1139248;
            result[4] += 3702558;
            result[5] += 1424060;
          } else {
            result[0] += 6090552;
            result[1] += 1353456;
            result[2] += 25490089;
            result[3] += 15113592;
            result[4] += 225576;
            result[5] += 5413824;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a50000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 26843545;
            result[4] += 3355443;
            result[5] += 23488102;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8259552;
            result[3] += 20648881;
            result[4] += 0;
            result[5] += 24778657;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6710886;
            result[3] += 46976204;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37684208;
            result[3] += 5678442;
            result[4] += 2064888;
            result[5] += 8259552;
          }
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 40265318;
            result[4] += 0;
            result[5] += 13421772;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 44058428;
            result[3] += 9628663;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 389601;
            result[1] += 0;
            result[2] += 51037800;
            result[3] += 2025927;
            result[4] += 0;
            result[5] += 233760;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x423c0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 486589;
            result[1] += 1621966;
            result[2] += 0;
            result[3] += 0;
            result[4] += 48172405;
            result[5] += 3406129;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42870000))) ) ) {
            result[0] += 5368709;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7158278;
            result[5] += 41160103;
          } else {
            result[0] += 49696834;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2902004;
            result[5] += 1088251;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 10737418;
            result[4] += 32212254;
            result[5] += 10737418;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1756476;
            result[4] += 916422;
            result[5] += 51014191;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42910000))) ) ) {
            result[0] += 2556528;
            result[1] += 639132;
            result[2] += 0;
            result[3] += 3195660;
            result[4] += 30678337;
            result[5] += 16617432;
          } else {
            result[0] += 1925486;
            result[1] += 1132639;
            result[2] += 679583;
            result[3] += 19707919;
            result[4] += 2491805;
            result[5] += 27749656;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42580000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 13421772;
            result[1] += 17895697;
            result[2] += 0;
            result[3] += 0;
            result[4] += 22369621;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53555826;
            result[2] += 0;
            result[3] += 0;
            result[4] += 131264;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423e0000))) ) ) {
            result[0] += 0;
            result[1] += 49984533;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3702558;
            result[5] += 0;
          } else {
            result[0] += 2147483;
            result[1] += 16106127;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35433480;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42900000))) ) ) {
            result[0] += 1988410;
            result[1] += 17895697;
            result[2] += 7953643;
            result[3] += 0;
            result[4] += 23860929;
            result[5] += 1988410;
          } else {
            result[0] += 48780812;
            result[1] += 394758;
            result[2] += 676728;
            result[3] += 1409850;
            result[4] += 1748214;
            result[5] += 676728;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 3117314;
            result[1] += 346368;
            result[2] += 14201101;
            result[3] += 19742994;
            result[4] += 3117314;
            result[5] += 13161996;
          } else {
            result[0] += 43665500;
            result[1] += 2863311;
            result[2] += 4294967;
            result[3] += 0;
            result[4] += 2147483;
            result[5] += 715827;
          }
        }
      }
    }
  } else {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5368709;
            result[4] += 1789569;
            result[5] += 46528812;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 23008753;
            result[3] += 30678337;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2556528;
            result[3] += 51130563;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
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
            result[5] += 53687091;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 43362650;
            result[3] += 0;
            result[4] += 0;
            result[5] += 10324440;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 2440322;
            result[1] += 0;
            result[2] += 2440322;
            result[3] += 17082256;
            result[4] += 0;
            result[5] += 31724190;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28846795;
            result[3] += 22436396;
            result[4] += 0;
            result[5] += 2403899;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 26843545;
            result[1] += 0;
            result[2] += 0;
            result[3] += 13421772;
            result[4] += 0;
            result[5] += 13421772;
          } else {
            result[0] += 389036;
            result[1] += 0;
            result[2] += 42405021;
            result[3] += 10114959;
            result[4] += 0;
            result[5] += 778073;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 26843545;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 5368709;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 259985;
            result[1] += 0;
            result[2] += 50827246;
            result[3] += 2274876;
            result[4] += 0;
            result[5] += 324982;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
            result[0] += 265777;
            result[1] += 265777;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52889758;
            result[5] += 265777;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 33038209;
            result[5] += 20648881;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x426a0000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 2213900;
            result[1] += 0;
            result[2] += 553475;
            result[3] += 6088226;
            result[4] += 24352907;
            result[5] += 20478581;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 48318382;
            result[5] += 5368709;
          } else {
            result[0] += 0;
            result[1] += 59126;
            result[2] += 0;
            result[3] += 3251971;
            result[4] += 2010309;
            result[5] += 48365683;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 542293;
            result[2] += 0;
            result[3] += 9218995;
            result[4] += 2169175;
            result[5] += 41756626;
          } else {
            result[0] += 0;
            result[1] += 583555;
            result[2] += 1167110;
            result[3] += 32387321;
            result[4] += 583555;
            result[5] += 18965548;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42260000))) ) ) {
            result[0] += 0;
            result[1] += 48318382;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5368709;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 4971026;
            result[2] += 0;
            result[3] += 1988410;
            result[4] += 46727653;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 35791394;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17895697;
            result[5] += 0;
          } else {
            result[0] += 127826;
            result[1] += 53431438;
            result[2] += 0;
            result[3] += 0;
            result[4] += 127826;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
            result[0] += 725501;
            result[1] += 21039535;
            result[2] += 0;
            result[3] += 0;
            result[4] += 31922054;
            result[5] += 0;
          } else {
            result[0] += 46459982;
            result[1] += 493777;
            result[2] += 852888;
            result[3] += 1211999;
            result[4] += 3860443;
            result[5] += 807999;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 2263913;
            result[1] += 323416;
            result[2] += 2587329;
            result[3] += 24903048;
            result[4] += 4527826;
            result[5] += 19081556;
          } else {
            result[0] += 15693149;
            result[1] += 0;
            result[2] += 28908433;
            result[3] += 6607641;
            result[4] += 0;
            result[5] += 2477865;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b90000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42dc0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x428e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 10737418;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1988410;
            result[3] += 5965232;
            result[4] += 0;
            result[5] += 45733448;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30678337;
            result[3] += 0;
            result[4] += 0;
            result[5] += 23008753;
          } else {
            result[0] += 0;
            result[1] += 624268;
            result[2] += 14982444;
            result[3] += 37456110;
            result[4] += 0;
            result[5] += 624268;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 5752188;
            result[2] += 11504376;
            result[3] += 7669584;
            result[4] += 0;
            result[5] += 28760941;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38634635;
            result[3] += 11540215;
            result[4] += 0;
            result[5] += 3512239;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42cf0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 46976204;
            result[2] += 0;
            result[3] += 6710886;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 13421772;
            result[1] += 0;
            result[2] += 22369621;
            result[3] += 8947848;
            result[4] += 8947848;
            result[5] += 0;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 5368709;
            result[1] += 5368709;
            result[2] += 8053063;
            result[3] += 29527900;
            result[4] += 0;
            result[5] += 5368709;
          } else {
            result[0] += 0;
            result[1] += 2825636;
            result[2] += 45210182;
            result[3] += 5651272;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34598347;
            result[3] += 16702650;
            result[4] += 0;
            result[5] += 2386092;
          } else {
            result[0] += 352277;
            result[1] += 0;
            result[2] += 50657504;
            result[3] += 2325031;
            result[4] += 0;
            result[5] += 352277;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 954437;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 50346561;
            result[5] += 2386092;
          } else {
            result[0] += 21838816;
            result[1] += 2729852;
            result[2] += 0;
            result[3] += 0;
            result[4] += 29118422;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 277094;
            result[2] += 0;
            result[3] += 1593294;
            result[4] += 3325135;
            result[5] += 48491566;
          } else {
            result[0] += 454975;
            result[1] += 2274876;
            result[2] += 0;
            result[3] += 12284334;
            result[4] += 10464433;
            result[5] += 28208471;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4067203;
            result[3] += 10981450;
            result[4] += 5287365;
            result[5] += 33351071;
          } else {
            result[0] += 1525201;
            result[1] += 0;
            result[2] += 4880644;
            result[3] += 35689714;
            result[4] += 610080;
            result[5] += 10981450;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 5519233;
            result[2] += 1505245;
            result[3] += 4515736;
            result[4] += 39638132;
            result[5] += 2508742;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42900000))) ) ) {
            result[0] += 0;
            result[1] += 53033963;
            result[2] += 0;
            result[3] += 0;
            result[4] += 653127;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 13421772;
            result[2] += 0;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 13421772;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
            result[0] += 8259552;
            result[1] += 18583993;
            result[2] += 0;
            result[3] += 1032444;
            result[4] += 23746213;
            result[5] += 2064888;
          } else {
            result[0] += 45935987;
            result[1] += 237763;
            result[2] += 190211;
            result[3] += 2330086;
            result[4] += 2472744;
            result[5] += 2520297;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 2296773;
            result[1] += 574193;
            result[2] += 4019354;
            result[3] += 22967739;
            result[4] += 3158064;
            result[5] += 20670965;
          } else {
            result[0] += 36009634;
            result[1] += 0;
            result[2] += 10475529;
            result[3] += 654720;
            result[4] += 5892485;
            result[5] += 654720;
          }
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 13059022;
            result[4] += 1451002;
            result[5] += 39177066;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5135286;
            result[3] += 39681763;
            result[4] += 0;
            result[5] += 8870041;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 1451002;
            result[2] += 4353007;
            result[3] += 5804009;
            result[4] += 7255012;
            result[5] += 34824059;
          } else {
            result[0] += 1263225;
            result[1] += 0;
            result[2] += 29685803;
            result[3] += 13263869;
            result[4] += 0;
            result[5] += 9474192;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 16268815;
            result[1] += 0;
            result[2] += 21149460;
            result[3] += 6507526;
            result[4] += 3253763;
            result[5] += 6507526;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 26843545;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 26843545;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47370962;
            result[3] += 5526612;
            result[4] += 0;
            result[5] += 789516;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 23860929;
            result[3] += 0;
            result[4] += 0;
            result[5] += 29826161;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 15339168;
            result[3] += 38347922;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 243203;
            result[1] += 0;
            result[2] += 49735040;
            result[3] += 3100839;
            result[4] += 121601;
            result[5] += 486406;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 3089904;
            result[2] += 0;
            result[3] += 386238;
            result[4] += 50210948;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 23342213;
            result[2] += 0;
            result[3] += 4668442;
            result[4] += 9336885;
            result[5] += 16339549;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 2334221;
            result[1] += 7002664;
            result[2] += 0;
            result[3] += 0;
            result[4] += 18673770;
            result[5] += 25676434;
          } else {
            result[0] += 47551423;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 6135667;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 47721858;
            result[5] += 5965232;
          } else {
            result[0] += 0;
            result[1] += 185127;
            result[2] += 61709;
            result[3] += 2344953;
            result[4] += 3085465;
            result[5] += 48009835;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 865920;
            result[1] += 0;
            result[2] += 0;
            result[3] += 9525129;
            result[4] += 5195524;
            result[5] += 38100516;
          } else {
            result[0] += 0;
            result[1] += 1118481;
            result[2] += 1118481;
            result[3] += 36071014;
            result[4] += 1398101;
            result[5] += 13981013;
          }
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
            result[0] += 0;
            result[1] += 48676296;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5010795;
            result[5] += 0;
          } else {
            result[0] += 3834792;
            result[1] += 2788939;
            result[2] += 0;
            result[3] += 348617;
            result[4] += 44971654;
            result[5] += 1743087;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 44886734;
            result[1] += 639132;
            result[2] += 884952;
            result[3] += 934116;
            result[4] += 4375596;
            result[5] += 1966560;
          } else {
            result[0] += 14614819;
            result[1] += 0;
            result[2] += 10240315;
            result[3] += 14913080;
            result[4] += 1789569;
            result[5] += 12129305;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b20000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 5965232;
            result[2] += 0;
            result[3] += 0;
            result[4] += 47721858;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426a0000))) ) ) {
            result[0] += 139085;
            result[1] += 53269834;
            result[2] += 0;
            result[3] += 278171;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 33554431;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 20132659;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 0;
            result[4] += 26843545;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1917396;
            result[3] += 1917396;
            result[4] += 3834792;
            result[5] += 46017506;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2440322;
            result[3] += 48806446;
            result[4] += 0;
            result[5] += 2440322;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 11930464;
            result[4] += 0;
            result[5] += 41756626;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 26843545;
          } else {
            result[0] += 2064888;
            result[1] += 0;
            result[2] += 45427538;
            result[3] += 6194664;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7953643;
            result[3] += 43745037;
            result[4] += 0;
            result[5] += 1988410;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32212254;
            result[3] += 0;
            result[4] += 0;
            result[5] += 21474836;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40103610;
            result[3] += 11966399;
            result[4] += 0;
            result[5] += 1617081;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 51130563;
            result[3] += 1278264;
            result[4] += 0;
            result[5] += 1278264;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 2556528;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 5113056;
            result[4] += 0;
            result[5] += 10226112;
          } else {
            result[0] += 285569;
            result[1] += 0;
            result[2] += 51973673;
            result[3] += 1427848;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 533315;
            result[1] += 0;
            result[2] += 711087;
            result[3] += 0;
            result[4] += 50309426;
            result[5] += 2133261;
          } else {
            result[0] += 0;
            result[1] += 28334853;
            result[2] += 0;
            result[3] += 1491308;
            result[4] += 23860929;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42640000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x422a0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
            result[0] += 23488102;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 20132659;
            result[5] += 10066329;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2451465;
            result[4] += 1225732;
            result[5] += 50009893;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 6176391;
            result[1] += 6651498;
            result[2] += 0;
            result[3] += 3325749;
            result[4] += 2375535;
            result[5] += 35157918;
          } else {
            result[0] += 0;
            result[1] += 226527;
            result[2] += 4530556;
            result[3] += 29222087;
            result[4] += 1132639;
            result[5] += 18575280;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42850000))) ) ) {
            result[0] += 6468324;
            result[1] += 14877145;
            result[2] += 3880994;
            result[3] += 646832;
            result[4] += 24579632;
            result[5] += 3234162;
          } else {
            result[0] += 47031666;
            result[1] += 133108;
            result[2] += 266216;
            result[3] += 1641671;
            result[4] += 3194603;
            result[5] += 1419823;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 447392;
            result[1] += 894784;
            result[2] += 4697620;
            result[3] += 26843545;
            result[4] += 4250228;
            result[5] += 16553519;
          } else {
            result[0] += 17369353;
            result[1] += 263172;
            result[2] += 21580105;
            result[3] += 4210752;
            result[4] += 2631720;
            result[5] += 7631988;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b00000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42900000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35791394;
            result[5] += 17895697;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5368709;
            result[3] += 5368709;
            result[4] += 5368709;
            result[5] += 37580963;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9761289;
            result[3] += 41973544;
            result[4] += 0;
            result[5] += 1952257;
          } else {
            result[0] += 2403899;
            result[1] += 0;
            result[2] += 33654594;
            result[3] += 16025997;
            result[4] += 0;
            result[5] += 1602599;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34513130;
            result[3] += 17256565;
            result[4] += 0;
            result[5] += 1917396;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42e60000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4473924;
            result[3] += 0;
            result[4] += 0;
            result[5] += 49213166;
          }
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d60000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 26843545;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26843545;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 44089398;
            result[3] += 8397980;
            result[4] += 0;
            result[5] += 1199711;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 0;
            result[4] += 0;
            result[5] += 17895697;
          } else {
            result[0] += 428126;
            result[1] += 0;
            result[2] += 51375206;
            result[3] += 1883757;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51130563;
            result[5] += 2556528;
          } else {
            result[0] += 0;
            result[1] += 40265318;
            result[2] += 0;
            result[3] += 0;
            result[4] += 13421772;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17256565;
            result[5] += 36430526;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 5033164;
            result[2] += 0;
            result[3] += 1677721;
            result[4] += 28521267;
            result[5] += 18454937;
          } else {
            result[0] += 0;
            result[1] += 190605;
            result[2] += 0;
            result[3] += 2604935;
            result[4] += 2604935;
            result[5] += 48286614;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 16221998;
            result[4] += 0;
            result[5] += 37465092;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 40350807;
            result[4] += 341955;
            result[5] += 12994327;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cc0000))) ) ) {
            result[0] += 0;
            result[1] += 8076819;
            result[2] += 475107;
            result[3] += 475107;
            result[4] += 44660058;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0;
            result[1] += 53411065;
            result[2] += 0;
            result[3] += 0;
            result[4] += 138013;
            result[5] += 138013;
          } else {
            result[0] += 0;
            result[1] += 26843545;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26843545;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 16397042;
            result[1] += 793405;
            result[2] += 3967026;
            result[3] += 7405116;
            result[4] += 15074700;
            result[5] += 10049800;
          } else {
            result[0] += 47637841;
            result[1] += 1663543;
            result[2] += 705745;
            result[3] += 655335;
            result[4] += 2822983;
            result[5] += 201641;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 1223637;
            result[1] += 1223637;
            result[2] += 16213195;
            result[3] += 20954790;
            result[4] += 1529546;
            result[5] += 12542283;
          } else {
            result[0] += 38080378;
            result[1] += 0;
            result[2] += 8115490;
            result[3] += 3121342;
            result[4] += 4369879;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b90000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42740000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 7669584;
            result[4] += 3067833;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cd0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3355443;
            result[3] += 50331647;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40265318;
            result[3] += 13421772;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40265318;
            result[3] += 13421772;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 521233;
            result[2] += 30752799;
            result[3] += 17200718;
            result[4] += 0;
            result[5] += 5212338;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 44973479;
            result[3] += 7870358;
            result[4] += 0;
            result[5] += 843252;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 1333840;
            result[1] += 0;
            result[2] += 46017506;
            result[3] += 5335363;
            result[4] += 0;
            result[5] += 1000380;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52728393;
            result[3] += 958698;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42240000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 51130563;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2556528;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 294984;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53097123;
            result[5] += 294984;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1095654;
            result[4] += 38347922;
            result[5] += 14243513;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x424e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 134217;
            result[1] += 0;
            result[2] += 67108;
            result[3] += 3019898;
            result[4] += 1207959;
            result[5] += 49257906;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 5778818;
            result[1] += 932067;
            result[2] += 3914683;
            result[3] += 6710886;
            result[4] += 8202194;
            result[5] += 28148440;
          } else {
            result[0] += 355543;
            result[1] += 1777718;
            result[2] += 2488805;
            result[3] += 35554365;
            result[4] += 0;
            result[5] += 13510658;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 4129776;
            result[1] += 18813425;
            result[2] += 0;
            result[3] += 0;
            result[4] += 27531841;
            result[5] += 3212048;
          } else {
            result[0] += 42352240;
            result[1] += 2127842;
            result[2] += 777480;
            result[3] += 1677721;
            result[4] += 4051083;
            result[5] += 2700722;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 367719;
            result[1] += 2022458;
            result[2] += 11767033;
            result[3] += 20224589;
            result[4] += 2390178;
            result[5] += 16915110;
          } else {
            result[0] += 36831841;
            result[1] += 624268;
            result[2] += 8115490;
            result[3] += 1248537;
            result[4] += 6866953;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428c0000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 1193046;
            result[2] += 0;
            result[3] += 4772185;
            result[4] += 3579139;
            result[5] += 44142719;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 8947848;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ed0000))) ) ) {
            result[0] += 3158064;
            result[1] += 12632256;
            result[2] += 28422577;
            result[3] += 3158064;
            result[4] += 0;
            result[5] += 6316128;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 44739242;
            result[4] += 0;
            result[5] += 8947848;
          } else {
            result[0] += 0;
            result[1] += 4668442;
            result[2] += 4668442;
            result[3] += 7002664;
            result[4] += 0;
            result[5] += 37347541;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14060904;
            result[3] += 33234865;
            result[4] += 0;
            result[5] += 6391320;
          } else {
            result[0] += 4353007;
            result[1] += 0;
            result[2] += 36758729;
            result[3] += 12575354;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 1626881;
            result[1] += 0;
            result[2] += 21962900;
            result[3] += 29283867;
            result[4] += 0;
            result[5] += 813440;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14641933;
            result[3] += 34164512;
            result[4] += 0;
            result[5] += 4880644;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47399413;
            result[3] += 5320342;
            result[4] += 0;
            result[5] += 967334;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 50606684;
            result[3] += 3080406;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 23860929;
            result[1] += 0;
            result[2] += 29826161;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 398666;
            result[1] += 0;
            result[2] += 53022646;
            result[3] += 265777;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 282563;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53404527;
            result[5] += 0;
          } else {
            result[0] += 3097332;
            result[1] += 2064888;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35103098;
            result[5] += 13421772;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424c0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 17895697;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35791394;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x424e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1480485;
            result[4] += 2181768;
            result[5] += 50024836;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 47934902;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5752188;
            result[5] += 0;
          } else {
            result[0] += 234441;
            result[1] += 1758310;
            result[2] += 117220;
            result[3] += 18051991;
            result[4] += 5392153;
            result[5] += 28132973;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 4628197;
            result[2] += 0;
            result[3] += 0;
            result[4] += 49058893;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 16661511;
            result[4] += 3702558;
            result[5] += 33323022;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 32869647;
            result[2] += 0;
            result[3] += 0;
            result[4] += 20817443;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 9474192;
            result[1] += 5526612;
            result[2] += 0;
            result[3] += 5526612;
            result[4] += 30791125;
            result[5] += 2368548;
          } else {
            result[0] += 46512543;
            result[1] += 878516;
            result[2] += 244032;
            result[3] += 1268967;
            result[4] += 2977193;
            result[5] += 1805838;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 483667;
            result[1] += 2176503;
            result[2] += 6287677;
            result[3] += 17170195;
            result[4] += 3627506;
            result[5] += 23941540;
          } else {
            result[0] += 37736578;
            result[1] += 1945184;
            result[2] += 11282069;
            result[3] += 1167110;
            result[4] += 1556147;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5651272;
            result[3] += 4238454;
            result[4] += 0;
            result[5] += 43797363;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 26843545;
            result[4] += 12389328;
            result[5] += 14454216;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4270564;
            result[3] += 46366124;
            result[4] += 0;
            result[5] += 3050402;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14641933;
            result[3] += 0;
            result[4] += 4880644;
            result[5] += 34164512;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 21474836;
            result[2] += 0;
            result[3] += 0;
            result[4] += 32212254;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12271335;
            result[3] += 0;
            result[4] += 0;
            result[5] += 41415756;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ee0000))) ) ) {
            result[0] += 766958;
            result[1] += 0;
            result[2] += 41415756;
            result[3] += 9203501;
            result[4] += 766958;
            result[5] += 1533916;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 46976204;
            result[4] += 1677721;
            result[5] += 5033164;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34164512;
            result[3] += 0;
            result[4] += 0;
            result[5] += 19522578;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38654705;
            result[3] += 12884901;
            result[4] += 0;
            result[5] += 2147483;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42e30000))) ) ) {
            result[0] += 10066329;
            result[1] += 0;
            result[2] += 33554431;
            result[3] += 0;
            result[4] += 10066329;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 43589977;
            result[3] += 9112029;
            result[4] += 0;
            result[5] += 985084;
          } else {
            result[0] += 163182;
            result[1] += 0;
            result[2] += 51728899;
            result[3] += 1631826;
            result[4] += 0;
            result[5] += 163182;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 504104;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52678882;
            result[5] += 504104;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 13421772;
            result[4] += 17895697;
            result[5] += 22369621;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
            result[0] += 15184227;
            result[1] += 1626881;
            result[2] += 0;
            result[3] += 1626881;
            result[4] += 23860929;
            result[5] += 11388170;
          } else {
            result[0] += 200076;
            result[1] += 0;
            result[2] += 133384;
            result[3] += 2134145;
            result[4] += 2200837;
            result[5] += 49018648;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 2936012;
            result[1] += 209715;
            result[2] += 629145;
            result[3] += 12373196;
            result[4] += 3565158;
            result[5] += 33973862;
          } else {
            result[0] += 1025867;
            result[1] += 341955;
            result[2] += 0;
            result[3] += 39324939;
            result[4] += 1025867;
            result[5] += 11968459;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b80000))) ) ) {
            result[0] += 0;
            result[1] += 23342213;
            result[2] += 0;
            result[3] += 0;
            result[4] += 30344877;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 53550482;
            result[2] += 0;
            result[3] += 0;
            result[4] += 136608;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 3515226;
            result[1] += 10865244;
            result[2] += 0;
            result[3] += 639132;
            result[4] += 37708790;
            result[5] += 958698;
          } else {
            result[0] += 1309441;
            result[1] += 47139884;
            result[2] += 3928323;
            result[3] += 0;
            result[4] += 1309441;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
            result[0] += 47501942;
            result[1] += 346368;
            result[2] += 296887;
            result[3] += 1533916;
            result[4] += 3562645;
            result[5] += 445330;
          } else {
            result[0] += 11308810;
            result[1] += 1190401;
            result[2] += 9880329;
            result[3] += 15118094;
            result[4] += 3333123;
            result[5] += 12856332;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 38528383;
            result[4] += 0;
            result[5] += 4421289;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 7669584;
            result[1] += 0;
            result[2] += 15339168;
            result[3] += 7669584;
            result[4] += 0;
            result[5] += 23008753;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42dd0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37675151;
            result[3] += 13186303;
            result[4] += 0;
            result[5] += 2825636;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42e20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 15339168;
            result[3] += 38347922;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42f70000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36771980;
            result[3] += 13973352;
            result[4] += 0;
            result[5] += 2941758;
          } else {
            result[0] += 627919;
            result[1] += 0;
            result[2] += 47721858;
            result[3] += 4395434;
            result[4] += 0;
            result[5] += 941878;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42df0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 23008753;
            result[3] += 30678337;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32212254;
            result[3] += 0;
            result[4] += 0;
            result[5] += 21474836;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52308289;
            result[3] += 1378801;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x41fc0000))) ) ) {
            result[0] += 0;
            result[1] += 40265318;
            result[2] += 0;
            result[3] += 0;
            result[4] += 13421772;
            result[5] += 0;
          } else {
            result[0] += 152088;
            result[1] += 760440;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52014122;
            result[5] += 760440;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42520000))) ) ) {
            result[0] += 42949672;
            result[1] += 10737418;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 5965232;
            result[2] += 0;
            result[3] += 0;
            result[4] += 30678337;
            result[5] += 17043521;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426c0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 46976204;
            result[2] += 0;
            result[3] += 0;
            result[4] += 6710886;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 6710886;
            result[2] += 0;
            result[3] += 0;
            result[4] += 46976204;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42620000))) ) ) {
            result[0] += 38347922;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 9586980;
            result[5] += 5752188;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2919156;
            result[4] += 1840337;
            result[5] += 48927597;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 4418690;
            result[1] += 662803;
            result[2] += 883738;
            result[3] += 16570089;
            result[4] += 2209345;
            result[5] += 28942423;
          } else {
            result[0] += 1022611;
            result[1] += 2045222;
            result[2] += 0;
            result[3] += 38859227;
            result[4] += 2045222;
            result[5] += 9714806;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
            result[0] += 8115490;
            result[1] += 0;
            result[2] += 0;
            result[3] += 8115490;
            result[4] += 8115490;
            result[5] += 29340619;
          } else {
            result[0] += 46565334;
            result[1] += 867393;
            result[2] += 228261;
            result[3] += 1050002;
            result[4] += 3971749;
            result[5] += 1004350;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e30000))) ) ) {
            result[0] += 2816371;
            result[1] += 3520464;
            result[2] += 11265487;
            result[3] += 18834487;
            result[4] += 2992395;
            result[5] += 14257883;
          } else {
            result[0] += 45278269;
            result[1] += 0;
            result[2] += 5174659;
            result[3] += 0;
            result[4] += 3234162;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12632256;
            result[3] += 32843867;
            result[4] += 0;
            result[5] += 8210966;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40265318;
            result[3] += 0;
            result[4] += 0;
            result[5] += 13421772;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 17895697;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34598347;
            result[3] += 19088743;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 735439;
            result[1] += 0;
            result[2] += 47803574;
            result[3] += 1470879;
            result[4] += 0;
            result[5] += 3677198;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 7669584;
            result[1] += 0;
            result[2] += 19173961;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 2703666;
            result[1] += 0;
            result[2] += 47121044;
            result[3] += 3089904;
            result[4] += 0;
            result[5] += 772476;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52134496;
            result[3] += 1552594;
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
