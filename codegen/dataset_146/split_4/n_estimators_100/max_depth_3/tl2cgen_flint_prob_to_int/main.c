
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
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42920000))) ) ) {
        result[0] += 0;
        result[1] += 10737418;
        result[2] += 0;
        result[3] += 0;
        result[4] += 32212254;
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
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
        result[0] += 1484962;
        result[1] += 228455;
        result[2] += 142784;
        result[3] += 5540050;
        result[4] += 9109671;
        result[5] += 26443748;
      } else {
        result[0] += 26717293;
        result[1] += 1923837;
        result[2] += 2789564;
        result[3] += 3823627;
        result[4] += 4617210;
        result[5] += 3078140;
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d60000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 3067833;
        result[4] += 3834792;
        result[5] += 36047046;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 25769803;
        result[3] += 0;
        result[4] += 0;
        result[5] += 17179869;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 692736;
        result[2] += 13161996;
        result[3] += 22860309;
        result[4] += 0;
        result[5] += 6234629;
      } else {
        result[0] += 1295895;
        result[1] += 231409;
        result[2] += 37719809;
        result[3] += 3147174;
        result[4] += 138845;
        result[5] += 416537;
      }
    }
  }
  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 481228;
        result[1] += 3368601;
        result[2] += 0;
        result[3] += 0;
        result[4] += 36814005;
        result[5] += 2285836;
      } else {
        result[0] += 36191857;
        result[1] += 600694;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3303820;
        result[5] += 2853299;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 262288;
        result[3] += 1311440;
        result[4] += 1377012;
        result[5] += 39998932;
      } else {
        result[0] += 820041;
        result[1] += 1076304;
        result[2] += 1383820;
        result[3] += 16400829;
        result[4] += 5484027;
        result[5] += 17784649;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428c0000))) ) ) {
        result[0] += 342228;
        result[1] += 39955173;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2566713;
        result[5] += 85557;
      } else {
        result[0] += 38512723;
        result[1] += 1286715;
        result[2] += 133108;
        result[3] += 621172;
        result[4] += 1774779;
        result[5] += 621172;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 1391887;
        result[1] += 198841;
        result[2] += 22469041;
        result[3] += 8947848;
        result[4] += 1391887;
        result[5] += 8550166;
      } else {
        result[0] += 1283356;
        result[1] += 0;
        result[2] += 37816245;
        result[3] += 3465063;
        result[4] += 42778;
        result[5] += 342228;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 378411;
        result[1] += 1135233;
        result[2] += 0;
        result[3] += 0;
        result[4] += 39733177;
        result[5] += 1702850;
      } else {
        result[0] += 22206933;
        result[1] += 244032;
        result[2] += 0;
        result[3] += 0;
        result[4] += 14397901;
        result[5] += 6100805;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 855047;
        result[4] += 1775867;
        result[5] += 40318758;
      } else {
        result[0] += 666355;
        result[1] += 1453867;
        result[2] += 969245;
        result[3] += 15023298;
        result[4] += 4240447;
        result[5] += 20596458;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        result[0] += 398419;
        result[1] += 37132741;
        result[2] += 159367;
        result[3] += 318735;
        result[4] += 4701355;
        result[5] += 239051;
      } else {
        result[0] += 34994737;
        result[1] += 1674723;
        result[2] += 697801;
        result[3] += 1325822;
        result[4] += 2965655;
        result[5] += 1290932;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 141748;
        result[1] += 0;
        result[2] += 18285504;
        result[3] += 15592290;
        result[4] += 2267969;
        result[5] += 6662160;
      } else {
        result[0] += 1825795;
        result[1] += 478184;
        result[2] += 36950629;
        result[3] += 2521337;
        result[4] += 391241;
        result[5] += 782483;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 6723750;
        result[1] += 1372194;
        result[2] += 137219;
        result[3] += 0;
        result[4] += 30325487;
        result[5] += 4391020;
      } else {
        result[0] += 0;
        result[1] += 668188;
        result[2] += 74243;
        result[3] += 6422034;
        result[4] += 1930322;
        result[5] += 33854884;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 41619373;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1330299;
        result[5] += 0;
      } else {
        result[0] += 25501368;
        result[1] += 1390112;
        result[2] += 2037233;
        result[3] += 3954629;
        result[4] += 5824090;
        result[5] += 4242238;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 275318;
        result[1] += 0;
        result[2] += 15417831;
        result[3] += 18721652;
        result[4] += 550636;
        result[5] += 7984234;
      } else {
        result[0] += 3327087;
        result[1] += 0;
        result[2] += 35993035;
        result[3] += 3327087;
        result[4] += 0;
        result[5] += 302462;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 26996937;
        result[3] += 13498468;
        result[4] += 0;
        result[5] += 2454267;
      } else {
        result[0] += 385940;
        result[1] += 0;
        result[2] += 41681582;
        result[3] += 716746;
        result[4] += 0;
        result[5] += 165403;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 5892012;
        result[1] += 310105;
        result[2] += 0;
        result[3] += 155052;
        result[4] += 33491441;
        result[5] += 3101059;
      } else {
        result[0] += 0;
        result[1] += 878017;
        result[2] += 182920;
        result[3] += 6731464;
        result[4] += 2743803;
        result[5] += 32413466;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42480000))) ) ) {
        result[0] += 94811;
        result[1] += 42285991;
        result[2] += 0;
        result[3] += 0;
        result[4] += 568869;
        result[5] += 0;
      } else {
        result[0] += 26913434;
        result[1] += 965732;
        result[2] += 1982292;
        result[3] += 3303820;
        result[4] += 5819807;
        result[5] += 3964585;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42890000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1342177;
        result[3] += 4026531;
        result[4] += 2684354;
        result[5] += 34896609;
      } else {
        result[0] += 1118481;
        result[1] += 1789569;
        result[2] += 12079595;
        result[3] += 20580051;
        result[4] += 1342177;
        result[5] += 6039797;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 1385473;
        result[1] += 0;
        result[2] += 33251359;
        result[3] += 6927366;
        result[4] += 0;
        result[5] += 1385473;
      } else {
        result[0] += 977362;
        result[1] += 0;
        result[2] += 40343371;
        result[3] += 1574640;
        result[4] += 0;
        result[5] += 54297;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 7958725;
        result[1] += 137219;
        result[2] += 274438;
        result[3] += 0;
        result[4] += 31560462;
        result[5] += 3018826;
      } else {
        result[0] += 102099;
        result[1] += 1599552;
        result[2] += 1157122;
        result[3] += 6364174;
        result[4] += 2382311;
        result[5] += 31344412;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        result[0] += 277542;
        result[1] += 35247873;
        result[2] += 0;
        result[3] += 693855;
        result[4] += 6175316;
        result[5] += 555084;
      } else {
        result[0] += 31280213;
        result[1] += 606205;
        result[2] += 1454893;
        result[3] += 2546063;
        result[4] += 4000957;
        result[5] += 3061338;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bd0000))) ) ) {
        result[0] += 255652;
        result[1] += 511305;
        result[2] += 3067833;
        result[3] += 16361780;
        result[4] += 4346097;
        result[5] += 18407002;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 26127717;
        result[3] += 12526987;
        result[4] += 357913;
        result[5] += 3937053;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 1550529;
        result[1] += 465158;
        result[2] += 27289322;
        result[3] += 8993072;
        result[4] += 620211;
        result[5] += 4031377;
      } else {
        result[0] += 396458;
        result[1] += 0;
        result[2] += 40967380;
        result[3] += 1585834;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 254894;
        result[1] += 2803836;
        result[2] += 0;
        result[3] += 0;
        result[4] += 38871365;
        result[5] += 1019576;
      } else {
        result[0] += 29069595;
        result[1] += 1964161;
        result[2] += 1047552;
        result[3] += 1047552;
        result[4] += 4321156;
        result[5] += 5499653;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 61620;
        result[3] += 1294036;
        result[4] += 2403209;
        result[5] += 39190806;
      } else {
        result[0] += 2229033;
        result[1] += 869866;
        result[2] += 978600;
        result[3] += 16527469;
        result[4] += 4947367;
        result[5] += 17397335;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42940000))) ) ) {
        result[0] += 0;
        result[1] += 40684748;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2264924;
        result[5] += 0;
      } else {
        result[0] += 37374475;
        result[1] += 289084;
        result[2] += 1610612;
        result[3] += 991146;
        result[4] += 1528017;
        result[5] += 1156337;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 1662567;
        result[1] += 3879325;
        result[2] += 14963111;
        result[3] += 11915070;
        result[4] += 1662567;
        result[5] += 8867029;
      } else {
        result[0] += 1510122;
        result[1] += 0;
        result[2] += 38463719;
        result[3] += 2664922;
        result[4] += 0;
        result[5] += 310907;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 430933;
        result[2] += 287288;
        result[3] += 143644;
        result[4] += 40651362;
        result[5] += 1436443;
      } else {
        result[0] += 1393338;
        result[1] += 174167;
        result[2] += 0;
        result[3] += 6722860;
        result[4] += 2403509;
        result[5] += 32255796;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 291184;
        result[1] += 36834804;
        result[2] += 145592;
        result[3] += 145592;
        result[4] += 5095723;
        result[5] += 436776;
      } else {
        result[0] += 28438572;
        result[1] += 1591711;
        result[2] += 3103836;
        result[3] += 3740521;
        result[4] += 3103836;
        result[5] += 2971194;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ac0000))) ) ) {
        result[0] += 325376;
        result[1] += 0;
        result[2] += 8134407;
        result[3] += 18221073;
        result[4] += 3253763;
        result[5] += 13015052;
      } else {
        result[0] += 9641763;
        result[1] += 0;
        result[2] += 27172242;
        result[3] += 0;
        result[4] += 5259143;
        result[5] += 876523;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 1455921;
        result[1] += 2183881;
        result[2] += 23294737;
        result[3] += 3639802;
        result[4] += 0;
        result[5] += 12375329;
      } else {
        result[0] += 50828;
        result[1] += 0;
        result[2] += 40408272;
        result[3] += 2134776;
        result[4] += 0;
        result[5] += 355796;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 141281;
        result[1] += 2543072;
        result[2] += 0;
        result[3] += 0;
        result[4] += 37439682;
        result[5] += 2825636;
      } else {
        result[0] += 2387961;
        result[1] += 302699;
        result[2] += 336332;
        result[3] += 7029351;
        result[4] += 3026993;
        result[5] += 29866334;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 27126109;
        result[1] += 2050229;
        result[2] += 1629669;
        result[3] += 3233053;
        result[4] += 4442163;
        result[5] += 4468448;
      } else {
        result[0] += 311983;
        result[1] += 42637689;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42640000))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 1250961;
        result[1] += 1250961;
        result[2] += 11675639;
        result[3] += 15428523;
        result[4] += 1042467;
        result[5] += 12301119;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 769707;
        result[1] += 0;
        result[2] += 33867125;
        result[3] += 7389191;
        result[4] += 0;
        result[5] += 923648;
      } else {
        result[0] += 1525201;
        result[1] += 0;
        result[2] += 40204310;
        result[3] += 1220161;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 509284;
        result[1] += 169761;
        result[2] += 0;
        result[3] += 1527853;
        result[4] += 37687064;
        result[5] += 3055707;
      } else {
        result[0] += 1686325;
        result[1] += 481807;
        result[2] += 103244;
        result[3] += 6435567;
        result[4] += 3131746;
        result[5] += 31110981;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 27706999;
        result[1] += 2625410;
        result[2] += 1656812;
        result[3] += 3364603;
        result[4] += 5352778;
        result[5] += 2243068;
      } else {
        result[0] += 492542;
        result[1] += 41472046;
        result[2] += 0;
        result[3] += 197016;
        result[4] += 394033;
        result[5] += 394033;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 1314785;
        result[1] += 5259143;
        result[2] += 3067833;
        result[3] += 9203501;
        result[4] += 4382619;
        result[5] += 19721788;
      } else {
        result[0] += 676372;
        result[1] += 338186;
        result[2] += 16571133;
        result[3] += 19276624;
        result[4] += 676372;
        result[5] += 5410982;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 32582510;
        result[1] += 0;
        result[2] += 10367162;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 632942;
        result[1] += 0;
        result[2] += 38519075;
        result[3] += 3571604;
        result[4] += 0;
        result[5] += 226050;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 894784;
        result[1] += 894784;
        result[2] += 0;
        result[3] += 1252698;
        result[4] += 35970351;
        result[5] += 3937053;
      } else {
        result[0] += 1375731;
        result[1] += 234881;
        result[2] += 335544;
        result[3] += 6777995;
        result[4] += 2919235;
        result[5] += 31306285;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 26300642;
        result[1] += 2050967;
        result[2] += 3040257;
        result[3] += 3933031;
        result[4] += 4584515;
        result[5] += 3040257;
      } else {
        result[0] += 510091;
        result[1] += 42235545;
        result[2] += 0;
        result[3] += 0;
        result[4] += 204036;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 858993;
        result[3] += 5153960;
        result[4] += 9448928;
        result[5] += 27487790;
      } else {
        result[0] += 0;
        result[1] += 19522578;
        result[2] += 9761289;
        result[3] += 9761289;
        result[4] += 0;
        result[5] += 3904515;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 4521018;
        result[1] += 0;
        result[2] += 12432800;
        result[3] += 18084072;
        result[4] += 0;
        result[5] += 7911781;
      } else {
        result[0] += 1035972;
        result[1] += 0;
        result[2] += 37856143;
        result[3] += 3539571;
        result[4] += 0;
        result[5] += 517986;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 578446;
        result[1] += 2747622;
        result[2] += 0;
        result[3] += 0;
        result[4] += 36442146;
        result[5] += 3181457;
      } else {
        result[0] += 784468;
        result[1] += 0;
        result[2] += 509904;
        result[3] += 5765846;
        result[4] += 2078842;
        result[5] += 33810610;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 273564;
        result[1] += 40578778;
        result[2] += 0;
        result[3] += 729506;
        result[4] += 1367823;
        result[5] += 0;
      } else {
        result[0] += 24726581;
        result[1] += 1331772;
        result[2] += 3063077;
        result[3] += 4195084;
        result[4] += 5127325;
        result[5] += 4505831;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 0;
        result[1] += 2045222;
        result[2] += 0;
        result[3] += 5113056;
        result[4] += 8180890;
        result[5] += 27610504;
      } else {
        result[0] += 1541783;
        result[1] += 0;
        result[2] += 25109039;
        result[3] += 12334265;
        result[4] += 0;
        result[5] += 3964585;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 1047552;
        result[1] += 0;
        result[2] += 31426589;
        result[3] += 9166088;
        result[4] += 0;
        result[5] += 1309441;
      } else {
        result[0] += 137000;
        result[1] += 68500;
        result[2] += 41374166;
        result[3] += 1370005;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 145100;
        result[1] += 1305902;
        result[2] += 0;
        result[3] += 1741202;
        result[4] += 36565262;
        result[5] += 3192205;
      } else {
        result[0] += 2178113;
        result[1] += 68066;
        result[2] += 0;
        result[3] += 6023844;
        result[4] += 2382311;
        result[5] += 32297337;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 41882600;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1067072;
        result[5] += 0;
      } else {
        result[0] += 26703933;
        result[1] += 1548422;
        result[2] += 3147611;
        result[3] += 3909130;
        result[4] += 5432169;
        result[5] += 2208405;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 704092;
        result[2] += 9505255;
        result[3] += 14081859;
        result[4] += 3872511;
        result[5] += 14785952;
      } else {
        result[0] += 4835393;
        result[1] += 2559914;
        result[2] += 29012361;
        result[3] += 2844349;
        result[4] += 284434;
        result[5] += 3413219;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 32723560;
        result[3] += 7596540;
        result[4] += 0;
        result[5] += 2629571;
      } else {
        result[0] += 191454;
        result[1] += 0;
        result[2] += 41162762;
        result[3] += 1595455;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 658232;
        result[1] += 987348;
        result[2] += 0;
        result[3] += 0;
        result[4] += 39000277;
        result[5] += 2303813;
      } else {
        result[0] += 1892814;
        result[1] += 791540;
        result[2] += 172074;
        result[3] += 6710886;
        result[4] += 2340206;
        result[5] += 31042151;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425a0000))) ) ) {
        result[0] += 0;
        result[1] += 40169448;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2780224;
        result[5] += 0;
      } else {
        result[0] += 26395401;
        result[1] += 1275256;
        result[2] += 1948976;
        result[3] += 3464847;
        result[4] += 5510070;
        result[5] += 4355120;
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 6847049;
        result[3] += 23653443;
        result[4] += 0;
        result[5] += 12449180;
      } else {
        result[0] += 1342177;
        result[1] += 0;
        result[2] += 37580963;
        result[3] += 1342177;
        result[4] += 2684354;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 2118066;
        result[1] += 0;
        result[2] += 33300705;
        result[3] += 6471868;
        result[4] += 0;
        result[5] += 1059033;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 41351222;
        result[3] += 1528952;
        result[4] += 0;
        result[5] += 69497;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        result[0] += 161464;
        result[1] += 161464;
        result[2] += 0;
        result[3] += 0;
        result[4] += 41819418;
        result[5] += 807324;
      } else {
        result[0] += 1392962;
        result[1] += 198994;
        result[2] += 431155;
        result[3] += 6566822;
        result[4] += 3548737;
        result[5] += 30811000;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 737045;
        result[1] += 35646218;
        result[2] += 0;
        result[3] += 0;
        result[4] += 6566408;
        result[5] += 0;
      } else {
        result[0] += 31938496;
        result[1] += 608352;
        result[2] += 2190068;
        result[3] += 3467608;
        result[4] += 2281321;
        result[5] += 2463826;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42970000))) ) ) {
        result[0] += 1263225;
        result[1] += 2105376;
        result[2] += 1684300;
        result[3] += 5473977;
        result[4] += 8421504;
        result[5] += 24001287;
      } else {
        result[0] += 0;
        result[1] += 790484;
        result[2] += 12647756;
        result[3] += 20289109;
        result[4] += 263494;
        result[5] += 8958827;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 26843545;
        result[3] += 13869165;
        result[4] += 0;
        result[5] += 2236962;
      } else {
        result[0] += 807514;
        result[1] += 0;
        result[2] += 39568206;
        result[3] += 2372073;
        result[4] += 0;
        result[5] += 201878;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 724888;
        result[2] += 0;
        result[3] += 0;
        result[4] += 41318672;
        result[5] += 906111;
      } else {
        result[0] += 2037138;
        result[1] += 135809;
        result[2] += 33952;
        result[3] += 5873749;
        result[4] += 2580375;
        result[5] += 32288647;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 0;
        result[1] += 39431890;
        result[2] += 81808;
        result[3] += 0;
        result[4] += 3354164;
        result[5] += 81808;
      } else {
        result[0] += 29640943;
        result[1] += 1025824;
        result[2] += 1727705;
        result[3] += 3860341;
        result[4] += 4400249;
        result[5] += 2294608;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42970000))) ) ) {
        result[0] += 0;
        result[1] += 1160801;
        result[2] += 2321603;
        result[3] += 18959765;
        result[4] += 3869339;
        result[5] += 16638161;
      } else {
        result[0] += 1804608;
        result[1] += 3248294;
        result[2] += 17685159;
        result[3] += 9383962;
        result[4] += 2526451;
        result[5] += 8301197;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 282563;
        result[1] += 0;
        result[2] += 39511815;
        result[3] += 2778542;
        result[4] += 0;
        result[5] += 376751;
      } else {
        result[0] += 10412041;
        result[1] += 0;
        result[2] += 30585373;
        result[3] += 1952257;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
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
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        result[0] += 18557202;
        result[1] += 3311908;
        result[2] += 578269;
        result[3] += 1209109;
        result[4] += 16874963;
        result[5] += 2418219;
      } else {
        result[0] += 2729066;
        result[1] += 1033335;
        result[2] += 370941;
        result[3] += 7392324;
        result[4] += 4398300;
        result[5] += 27025704;
      }
    }
  } else {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
        result[0] += 40158719;
        result[1] += 0;
        result[2] += 1240423;
        result[3] += 465158;
        result[4] += 620211;
        result[5] += 465158;
      } else {
        result[0] += 815758;
        result[1] += 0;
        result[2] += 33690816;
        result[3] += 6118187;
        result[4] += 81575;
        result[5] += 2243335;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 41508408;
        result[1] += 0;
        result[2] += 768674;
        result[3] += 96084;
        result[4] += 576505;
        result[5] += 0;
      } else {
        result[0] += 1028734;
        result[1] += 0;
        result[2] += 41149387;
        result[3] += 257183;
        result[4] += 0;
        result[5] += 514367;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 6877562;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 32142075;
        result[5] += 3930035;
      } else {
        result[0] += 0;
        result[1] += 224475;
        result[2] += 187063;
        result[3] += 6434968;
        result[4] += 3180071;
        result[5] += 32923094;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 27194769;
        result[1] += 2483655;
        result[2] += 2257868;
        result[3] += 3612589;
        result[4] += 4565911;
        result[5] += 2834879;
      } else {
        result[0] += 284434;
        result[1] += 42665238;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 1979247;
        result[1] += 3364720;
        result[2] += 6135667;
        result[3] += 13656808;
        result[4] += 4354344;
        result[5] += 13458883;
      } else {
        result[0] += 2330602;
        result[1] += 0;
        result[2] += 33627263;
        result[3] += 6325920;
        result[4] += 0;
        result[5] += 665886;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 273564;
        result[1] += 0;
        result[2] += 35016293;
        result[3] += 6839119;
        result[4] += 0;
        result[5] += 820694;
      } else {
        result[0] += 235555;
        result[1] += 0;
        result[2] += 41850412;
        result[3] += 863704;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 131344;
        result[1] += 2364202;
        result[2] += 0;
        result[3] += 0;
        result[4] += 38221268;
        result[5] += 2232857;
      } else {
        result[0] += 0;
        result[1] += 41427834;
        result[2] += 253639;
        result[3] += 0;
        result[4] += 1268199;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 1115039;
        result[1] += 289084;
        result[2] += 330382;
        result[3] += 5822984;
        result[4] += 3262523;
        result[5] += 32129659;
      } else {
        result[0] += 26066796;
        result[1] += 982359;
        result[2] += 2741468;
        result[3] += 4112202;
        result[4] += 3221225;
        result[5] += 5825620;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ac0000))) ) ) {
        result[0] += 1533916;
        result[1] += 8436542;
        result[2] += 6902626;
        result[3] += 3067833;
        result[4] += 3067833;
        result[5] += 19940919;
      } else {
        result[0] += 0;
        result[1] += 275318;
        result[2] += 16243786;
        result[3] += 19272289;
        result[4] += 550636;
        result[5] += 6607641;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42890000))) ) ) {
        result[0] += 23860929;
        result[1] += 9544371;
        result[2] += 2386092;
        result[3] += 0;
        result[4] += 7158278;
        result[5] += 0;
      } else {
        result[0] += 306418;
        result[1] += 0;
        result[2] += 39936556;
        result[3] += 2553488;
        result[4] += 0;
        result[5] += 153209;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 311229;
        result[1] += 3267909;
        result[2] += 0;
        result[3] += 311229;
        result[4] += 35635779;
        result[5] += 3423524;
      } else {
        result[0] += 1624740;
        result[1] += 176602;
        result[2] += 565127;
        result[3] += 5969156;
        result[4] += 2331150;
        result[5] += 32282895;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 435595;
        result[1] += 40510340;
        result[2] += 435595;
        result[3] += 87119;
        result[4] += 1219666;
        result[5] += 261357;
      } else {
        result[0] += 26269055;
        result[1] += 1656396;
        result[2] += 2776214;
        result[3] += 4012679;
        result[4] += 4689236;
        result[5] += 3546089;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 825955;
        result[3] += 5781686;
        result[4] += 1651910;
        result[5] += 34690120;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 16519104;
        result[3] += 23126746;
        result[4] += 0;
        result[5] += 3303820;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 383479;
        result[1] += 383479;
        result[2] += 24159191;
        result[3] += 13421772;
        result[4] += 766958;
        result[5] += 3834792;
      } else {
        result[0] += 477218;
        result[1] += 0;
        result[2] += 39344021;
        result[3] += 2651214;
        result[4] += 265121;
        result[5] += 212097;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        result[0] += 315806;
        result[1] += 947419;
        result[2] += 0;
        result[3] += 947419;
        result[4] += 37896770;
        result[5] += 2842257;
      } else {
        result[0] += 2178606;
        result[1] += 103743;
        result[2] += 69162;
        result[3] += 6432076;
        result[4] += 1971120;
        result[5] += 32194964;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        result[0] += 247310;
        result[1] += 34376225;
        result[2] += 247310;
        result[3] += 577058;
        result[4] += 7089581;
        result[5] += 412184;
      } else {
        result[0] += 27343182;
        result[1] += 1680307;
        result[2] += 3436992;
        result[3] += 4378982;
        result[4] += 3131481;
        result[5] += 2978726;
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42be0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2260509;
        result[3] += 7911781;
        result[4] += 3390763;
        result[5] += 29386618;
      } else {
        result[0] += 1101273;
        result[1] += 550636;
        result[2] += 17620378;
        result[3] += 20373562;
        result[4] += 550636;
        result[5] += 2753184;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 1060485;
        result[1] += 1060485;
        result[2] += 20679472;
        result[3] += 7423400;
        result[4] += 1060485;
        result[5] += 11665343;
      } else {
        result[0] += 615596;
        result[1] += 189414;
        result[2] += 39256095;
        result[3] += 2793859;
        result[4] += 0;
        result[5] += 94707;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x423a0000))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 386933;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 40628069;
        result[5] += 1934669;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 249344;
        result[3] += 1371397;
        result[4] += 1620742;
        result[5] += 39708188;
      } else {
        result[0] += 3703786;
        result[1] += 1566986;
        result[2] += 1780666;
        result[3] += 13248157;
        result[4] += 2564159;
        result[5] += 20085916;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 331657;
        result[1] += 38223550;
        result[2] += 82914;
        result[3] += 0;
        result[4] += 3814063;
        result[5] += 497486;
      } else {
        result[0] += 30319097;
        result[1] += 1685981;
        result[2] += 114303;
        result[3] += 2571836;
        result[4] += 6029528;
        result[5] += 2228925;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 3456924;
        result[1] += 419021;
        result[2] += 18122666;
        result[3] += 13827699;
        result[4] += 733287;
        result[5] += 6390073;
      } else {
        result[0] += 489176;
        result[1] += 48917;
        result[2] += 39427604;
        result[3] += 2445881;
        result[4] += 0;
        result[5] += 538093;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
      } else {
        result[0] += 96733;
        result[1] += 42852939;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
        result[0] += 1943707;
        result[1] += 940503;
        result[2] += 31350;
        result[3] += 5360871;
        result[4] += 8715335;
        result[5] += 25957904;
      } else {
        result[0] += 27388560;
        result[1] += 1303023;
        result[2] += 1002326;
        result[3] += 3032036;
        result[4] += 5863607;
        result[5] += 4360118;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 181990;
        result[1] += 727960;
        result[2] += 9099506;
        result[3] += 20928866;
        result[4] += 1819901;
        result[5] += 10191447;
      } else {
        result[0] += 5368709;
        result[1] += 4294967;
        result[2] += 23085449;
        result[3] += 5905580;
        result[4] += 1610612;
        result[5] += 2684354;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 7158278;
        result[1] += 0;
        result[2] += 21474836;
        result[3] += 10737418;
        result[4] += 0;
        result[5] += 3579139;
      } else {
        result[0] += 1193046;
        result[1] += 0;
        result[2] += 38911669;
        result[3] += 2477865;
        result[4] += 0;
        result[5] += 367091;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 6503807;
        result[1] += 1963413;
        result[2] += 122713;
        result[3] += 0;
        result[4] += 29451204;
        result[5] += 4908534;
      } else {
        result[0] += 141982;
        result[1] += 461442;
        result[2] += 461442;
        result[3] += 7170110;
        result[4] += 1597301;
        result[5] += 33117392;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42480000))) ) ) {
        result[0] += 252645;
        result[1] += 41939092;
        result[2] += 0;
        result[3] += 0;
        result[4] += 757935;
        result[5] += 0;
      } else {
        result[0] += 26862427;
        result[1] += 1208431;
        result[2] += 2442038;
        result[3] += 3524592;
        result[4] += 5387590;
        result[5] += 3524592;
      }
    }
  } else {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 858993;
        result[1] += 2576980;
        result[2] += 3435973;
        result[3] += 4294967;
        result[4] += 0;
        result[5] += 31782757;
      } else {
        result[0] += 681740;
        result[1] += 0;
        result[2] += 29314856;
        result[3] += 4772185;
        result[4] += 681740;
        result[5] += 7499149;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 1481023;
        result[2] += 22215348;
        result[3] += 14069720;
        result[4] += 0;
        result[5] += 5183581;
      } else {
        result[0] += 195447;
        result[1] += 48861;
        result[2] += 40164540;
        result[3] += 2198788;
        result[4] += 0;
        result[5] += 342033;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        result[0] += 5821491;
        result[1] += 517465;
        result[2] += 517465;
        result[3] += 1164298;
        result[4] += 29883657;
        result[5] += 5045292;
      } else {
        result[0] += 36771;
        result[1] += 294175;
        result[2] += 73543;
        result[3] += 7354396;
        result[4] += 3235934;
        result[5] += 31954850;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 288252;
        result[1] += 41220155;
        result[2] += 0;
        result[3] += 480421;
        result[4] += 960842;
        result[5] += 0;
      } else {
        result[0] += 26343097;
        result[1] += 1942566;
        result[2] += 3600855;
        result[3] += 3292887;
        result[4] += 4809036;
        result[5] += 2961229;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 42949672;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 12884901;
        result[3] += 15748213;
        result[4] += 2386092;
        result[5] += 11930464;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 371858;
        result[1] += 371858;
        result[2] += 32165772;
        result[3] += 8180890;
        result[4] += 557787;
        result[5] += 1301505;
      } else {
        result[0] += 176747;
        result[1] += 0;
        result[2] += 41005449;
        result[3] += 1531812;
        result[4] += 0;
        result[5] += 235663;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 904203;
        result[2] += 0;
        result[3] += 1808407;
        result[4] += 38277954;
        result[5] += 1959107;
      } else {
        result[0] += 1528952;
        result[1] += 138995;
        result[2] += 69497;
        result[3] += 5872568;
        result[4] += 3683386;
        result[5] += 31656271;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 92964;
        result[1] += 41555203;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1301505;
        result[5] += 0;
      } else {
        result[0] += 28760713;
        result[1] += 1582222;
        result[2] += 1607741;
        result[3] += 3572759;
        result[4] += 4950823;
        result[5] += 2475411;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42be0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3181457;
        result[3] += 3181457;
        result[4] += 0;
        result[5] += 36586758;
      } else {
        result[0] += 302462;
        result[1] += 0;
        result[2] += 17240361;
        result[3] += 19055136;
        result[4] += 907387;
        result[5] += 5444324;
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 295186;
        result[1] += 0;
        result[2] += 32913323;
        result[3] += 8265229;
        result[4] += 0;
        result[5] += 1475933;
      } else {
        result[0] += 490853;
        result[1] += 0;
        result[2] += 40863545;
        result[3] += 1472560;
        result[4] += 0;
        result[5] += 122713;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 167119;
        result[1] += 0;
        result[2] += 668477;
        result[3] += 0;
        result[4] += 40275763;
        result[5] += 1838312;
      } else {
        result[0] += 1801343;
        result[1] += 247243;
        result[2] += 70640;
        result[3] += 6534284;
        result[4] += 2260509;
        result[5] += 32035652;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 72184;
        result[1] += 36092162;
        result[2] += 0;
        result[3] += 0;
        result[4] += 6713142;
        result[5] += 72184;
      } else {
        result[0] += 29546366;
        result[1] += 671508;
        result[2] += 2632312;
        result[3] += 3733586;
        result[4] += 3303820;
        result[5] += 3062077;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 338186;
        result[2] += 4734609;
        result[3] += 17585692;
        result[4] += 2367304;
        result[5] += 17923879;
      } else {
        result[0] += 0;
        result[1] += 9395240;
        result[2] += 28856811;
        result[3] += 1342177;
        result[4] += 671088;
        result[5] += 2684354;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
        result[0] += 30678337;
        result[1] += 0;
        result[2] += 10737418;
        result[3] += 1533916;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 319837;
        result[1] += 0;
        result[2] += 38928852;
        result[3] += 3381144;
        result[4] += 0;
        result[5] += 319837;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        result[0] += 5920090;
        result[1] += 116080;
        result[2] += 116080;
        result[3] += 812561;
        result[4] += 30180851;
        result[5] += 5804009;
      } else {
        result[0] += 0;
        result[1] += 260301;
        result[2] += 111557;
        result[3] += 6990942;
        result[4] += 2156780;
        result[5] += 33430091;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 25670525;
        result[1] += 2151029;
        result[2] += 3025623;
        result[3] += 3876580;
        result[4] += 5011189;
        result[5] += 3214725;
      } else {
        result[0] += 293505;
        result[1] += 42460496;
        result[2] += 0;
        result[3] += 0;
        result[4] += 195670;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 671088;
        result[2] += 2684354;
        result[3] += 17448304;
        result[4] += 671088;
        result[5] += 21474836;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 29911379;
        result[3] += 9203501;
        result[4] += 0;
        result[5] += 3834792;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 11083786;
        result[1] += 4849156;
        result[2] += 18011153;
        result[3] += 1385473;
        result[4] += 1385473;
        result[5] += 6234629;
      } else {
        result[0] += 497678;
        result[1] += 0;
        result[2] += 39067778;
        result[3] += 2936304;
        result[4] += 0;
        result[5] += 447910;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 173184;
        result[1] += 173184;
        result[2] += 173184;
        result[3] += 173184;
        result[4] += 40178726;
        result[5] += 2078209;
      } else {
        result[0] += 1634521;
        result[1] += 243439;
        result[2] += 69554;
        result[3] += 5564330;
        result[4] += 2469171;
        result[5] += 32968655;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 27989674;
        result[1] += 2133514;
        result[2] += 1879524;
        result[3] += 3047877;
        result[4] += 4775007;
        result[5] += 3124074;
      } else {
        result[0] += 93776;
        result[1] += 42668343;
        result[2] += 0;
        result[3] += 0;
        result[4] += 187553;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 482580;
        result[1] += 2895483;
        result[2] += 6756128;
        result[3] += 19061933;
        result[4] += 1206451;
        result[5] += 12547095;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 32928082;
        result[3] += 3579139;
        result[4] += 715827;
        result[5] += 5726623;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 14135335;
        result[1] += 0;
        result[2] += 25008670;
        result[3] += 1087333;
        result[4] += 0;
        result[5] += 2718333;
      } else {
        result[0] += 195893;
        result[1] += 0;
        result[2] += 39962295;
        result[3] += 2546616;
        result[4] += 0;
        result[5] += 244867;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x423e0000))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 381774;
        result[3] += 381774;
        result[4] += 40659023;
        result[5] += 1527099;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 843422;
        result[4] += 1621966;
        result[5] += 40484283;
      } else {
        result[0] += 2985443;
        result[1] += 1153466;
        result[2] += 1764125;
        result[3] += 14655812;
        result[4] += 2239082;
        result[5] += 20151742;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 361529;
        result[1] += 34923723;
        result[2] += 0;
        result[3] += 144611;
        result[4] += 7302890;
        result[5] += 216917;
      } else {
        result[0] += 31574605;
        result[1] += 1612445;
        result[2] += 1348590;
        result[3] += 2169471;
        result[4] += 4280308;
        result[5] += 1964251;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 344977;
        result[1] += 1379909;
        result[2] += 11039273;
        result[3] += 17248864;
        result[4] += 172488;
        result[5] += 12764159;
      } else {
        result[0] += 953474;
        result[1] += 216698;
        result[2] += 37922264;
        result[3] += 2730403;
        result[4] += 390057;
        result[5] += 736775;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 10985031;
        result[1] += 810371;
        result[2] += 270123;
        result[3] += 0;
        result[4] += 27012372;
        result[5] += 3871773;
      } else {
        result[0] += 210243;
        result[1] += 600694;
        result[2] += 991146;
        result[3] += 9460941;
        result[4] += 2703126;
        result[5] += 28983520;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 144855;
        result[1] += 36431172;
        result[2] += 0;
        result[3] += 0;
        result[4] += 6156361;
        result[5] += 217283;
      } else {
        result[0] += 32991786;
        result[1] += 871734;
        result[2] += 2581674;
        result[3] += 2313448;
        result[4] += 2447561;
        result[5] += 1743468;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3408704;
        result[3] += 16361780;
        result[4] += 0;
        result[5] += 23179188;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 29934620;
        result[3] += 5206020;
        result[4] += 0;
        result[5] += 7809031;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 1481023;
        result[1] += 296204;
        result[2] += 33915431;
        result[3] += 5035478;
        result[4] += 296204;
        result[5] += 1925330;
      } else {
        result[0] += 130348;
        result[1] += 0;
        result[2] += 41320322;
        result[3] += 1499002;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 1533916;
        result[2] += 278893;
        result[3] += 557787;
        result[4] += 38487369;
        result[5] += 2091704;
      } else {
        result[0] += 3988964;
        result[1] += 765006;
        result[2] += 819650;
        result[3] += 7895964;
        result[4] += 3005384;
        result[5] += 26474702;
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 29822884;
        result[1] += 2625357;
        result[2] += 2772849;
        result[3] += 1799402;
        result[4] += 4188773;
        result[5] += 1740405;
      } else {
        result[0] += 1068883;
        result[1] += 41589276;
        result[2] += 0;
        result[3] += 0;
        result[4] += 291513;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 15618062;
        result[3] += 23984882;
        result[4] += 0;
        result[5] += 3346727;
      } else {
        result[0] += 673720;
        result[1] += 842150;
        result[2] += 30991136;
        result[3] += 6737203;
        result[4] += 336860;
        result[5] += 3368601;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b00000))) ) ) {
        result[0] += 1263225;
        result[1] += 3789677;
        result[2] += 29054190;
        result[3] += 1263225;
        result[4] += 0;
        result[5] += 7579354;
      } else {
        result[0] += 188928;
        result[1] += 0;
        result[2] += 41312295;
        result[3] += 1259521;
        result[4] += 0;
        result[5] += 188928;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 6628888;
        result[1] += 1104814;
        result[2] += 0;
        result[3] += 276203;
        result[4] += 30382405;
        result[5] += 4557360;
      } else {
        result[0] += 111268;
        result[1] += 74179;
        result[2] += 37089;
        result[3] += 5340891;
        result[4] += 2744625;
        result[5] += 34641618;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 448170;
        result[1] += 34359738;
        result[2] += 149390;
        result[3] += 672255;
        result[4] += 6573167;
        result[5] += 746950;
      } else {
        result[0] += 29886385;
        result[1] += 987979;
        result[2] += 1756408;
        result[3] += 4281245;
        result[4] += 3238377;
        result[5] += 2799275;
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d20000))) ) ) {
        result[0] += 572662;
        result[1] += 1717986;
        result[2] += 11453246;
        result[3] += 18516081;
        result[4] += 1908874;
        result[5] += 8780822;
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
        result[0] += 2863311;
        result[1] += 0;
        result[2] += 2863311;
        result[3] += 0;
        result[4] += 5726623;
        result[5] += 31496426;
      } else {
        result[0] += 1108378;
        result[1] += 0;
        result[2] += 38654705;
        result[3] += 2724764;
        result[4] += 0;
        result[5] += 461824;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 262689;
        result[1] += 2626891;
        result[2] += 0;
        result[3] += 788067;
        result[4] += 37170512;
        result[5] += 2101513;
      } else {
        result[0] += 32897621;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 5117407;
        result[5] += 4934643;
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 227970;
        result[1] += 182376;
        result[2] += 45594;
        result[3] += 2006141;
        result[4] += 4331442;
        result[5] += 36156147;
      } else {
        result[0] += 1832519;
        result[1] += 1030792;
        result[2] += 229064;
        result[3] += 17637999;
        result[4] += 3665038;
        result[5] += 18554258;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 0;
        result[1] += 41599054;
        result[2] += 90041;
        result[3] += 0;
        result[4] += 1260577;
        result[5] += 0;
      } else {
        result[0] += 32229713;
        result[1] += 942797;
        result[2] += 1641166;
        result[3] += 3002985;
        result[4] += 2933148;
        result[5] += 2199861;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 2521507;
        result[1] += 1428854;
        result[2] += 19751806;
        result[3] += 11598933;
        result[4] += 2101256;
        result[5] += 5547315;
      } else {
        result[0] += 353495;
        result[1] += 0;
        result[2] += 40416290;
        result[3] += 2179887;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42760000))) ) ) {
        result[0] += 14847836;
        result[1] += 2181038;
        result[2] += 0;
        result[3] += 167772;
        result[4] += 20887633;
        result[5] += 4865392;
      } else {
        result[0] += 919156;
        result[1] += 250679;
        result[2] += 1921872;
        result[3] += 9024444;
        result[4] += 4484369;
        result[5] += 26349150;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42870000))) ) ) {
        result[0] += 606144;
        result[1] += 38620068;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3463683;
        result[5] += 259776;
      } else {
        result[0] += 33472348;
        result[1] += 2023249;
        result[2] += 2662169;
        result[3] += 1597301;
        result[4] += 2307213;
        result[5] += 887389;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
        result[0] += 0;
        result[1] += 9866816;
        result[2] += 1160801;
        result[3] += 8125613;
        result[4] += 3482405;
        result[5] += 20314034;
      } else {
        result[0] += 3520464;
        result[1] += 0;
        result[2] += 23235068;
        result[3] += 8449115;
        result[4] += 0;
        result[5] += 7745022;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 610080;
        result[1] += 0;
        result[2] += 32334270;
        result[3] += 8297095;
        result[4] += 0;
        result[5] += 1708225;
      } else {
        result[0] += 148358;
        result[1] += 0;
        result[2] += 41317733;
        result[3] += 1335222;
        result[4] += 0;
        result[5] += 148358;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 132560;
        result[1] += 927925;
        result[2] += 0;
        result[3] += 0;
        result[4] += 40165897;
        result[5] += 1723289;
      } else {
        result[0] += 92166;
        result[1] += 39539505;
        result[2] += 92166;
        result[3] += 829500;
        result[4] += 2304167;
        result[5] += 92166;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 3306778;
        result[1] += 0;
        result[2] += 653665;
        result[3] += 3575935;
        result[4] += 4191149;
        result[5] += 31222143;
      } else {
        result[0] += 25067540;
        result[1] += 1767284;
        result[2] += 1604508;
        result[3] += 6325019;
        result[4] += 2232359;
        result[5] += 5952959;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3681400;
        result[3] += 31905471;
        result[4] += 0;
        result[5] += 7362801;
      } else {
        result[0] += 901042;
        result[1] += 0;
        result[2] += 27031262;
        result[3] += 12314241;
        result[4] += 0;
        result[5] += 2703126;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 1084587;
        result[1] += 0;
        result[2] += 33405301;
        result[3] += 6507526;
        result[4] += 0;
        result[5] += 1952257;
      } else {
        result[0] += 185127;
        result[1] += 0;
        result[2] += 41468649;
        result[3] += 1234186;
        result[4] += 0;
        result[5] += 61709;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 4294967;
        result[2] += 858993;
        result[3] += 0;
        result[4] += 36650387;
        result[5] += 1145324;
      } else {
        result[0] += 1176183;
        result[1] += 113824;
        result[2] += 417355;
        result[3] += 5994742;
        result[4] += 2959429;
        result[5] += 32288137;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 28763029;
        result[1] += 2182560;
        result[2] += 987348;
        result[3] += 3014012;
        result[4] += 4521018;
        result[5] += 3481703;
      } else {
        result[0] += 202592;
        result[1] += 42645783;
        result[2] += 0;
        result[3] += 0;
        result[4] += 101296;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 6135667;
        result[3] += 14480175;
        result[4] += 736280;
        result[5] += 21597549;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 28633115;
        result[3] += 0;
        result[4] += 0;
        result[5] += 14316557;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 650752;
        result[1] += 2603010;
        result[2] += 24511682;
        result[3] += 11713547;
        result[4] += 433835;
        result[5] += 3036845;
      } else {
        result[0] += 614918;
        result[1] += 94602;
        result[2] += 39733177;
        result[3] += 2270467;
        result[4] += 0;
        result[5] += 236507;
      }
    }
  }
  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ba0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c50000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 20376836;
        result[1] += 2757767;
        result[2] += 0;
        result[3] += 0;
        result[4] += 18027627;
        result[5] += 1787441;
      } else {
        result[0] += 2544594;
        result[1] += 951010;
        result[2] += 1387960;
        result[3] += 7993625;
        result[4] += 4343802;
        result[5] += 25728679;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 0;
        result[1] += 42455998;
        result[2] += 0;
        result[3] += 0;
        result[4] += 493674;
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
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 2095105;
        result[1] += 0;
        result[2] += 5237764;
        result[3] += 16760847;
        result[4] += 3142658;
        result[5] += 15713294;
      } else {
        result[0] += 41493751;
        result[1] += 132356;
        result[2] += 397069;
        result[3] += 132356;
        result[4] += 727960;
        result[5] += 66178;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 244032;
        result[1] += 0;
        result[2] += 15129998;
        result[3] += 14153869;
        result[4] += 2684354;
        result[5] += 10737418;
      } else {
        result[0] += 1444400;
        result[1] += 0;
        result[2] += 38361577;
        result[3] += 2591424;
        result[4] += 84964;
        result[5] += 467306;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 11060001;
        result[1] += 460833;
        result[2] += 0;
        result[3] += 0;
        result[4] += 27650004;
        result[5] += 3778833;
      } else {
        result[0] += 77526;
        result[1] += 193816;
        result[2] += 193816;
        result[3] += 4341483;
        result[4] += 3721271;
        result[5] += 34421759;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        result[0] += 325993;
        result[1] += 39608237;
        result[2] += 244495;
        result[3] += 81498;
        result[4] += 2444952;
        result[5] += 244495;
      } else {
        result[0] += 29382011;
        result[1] += 1779843;
        result[2] += 2071621;
        result[3] += 4901864;
        result[4] += 2013265;
        result[5] += 2801065;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
        result[0] += 1605595;
        result[1] += 802797;
        result[2] += 1204196;
        result[3] += 3612589;
        result[4] += 8830773;
        result[5] += 26893720;
      } else {
        result[0] += 2328596;
        result[1] += 517465;
        result[2] += 14747779;
        result[3] += 15523978;
        result[4] += 2587329;
        result[5] += 7244523;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 18837575;
        result[3] += 19591078;
        result[4] += 0;
        result[5] += 4521018;
      } else {
        result[0] += 139598;
        result[1] += 0;
        result[2] += 39971580;
        result[3] += 2652363;
        result[4] += 0;
        result[5] += 186130;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 5415941;
        result[1] += 125952;
        result[2] += 0;
        result[3] += 0;
        result[4] += 32117790;
        result[5] += 5289989;
      } else {
        result[0] += 0;
        result[1] += 275318;
        result[2] += 235987;
        result[3] += 7630253;
        result[4] += 2163216;
        result[5] += 32644897;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 27396300;
        result[1] += 2719298;
        result[2] += 1880636;
        result[3] += 3278406;
        result[4] += 5235285;
        result[5] += 2439744;
      } else {
        result[0] += 90802;
        result[1] += 42404856;
        result[2] += 181605;
        result[3] += 0;
        result[4] += 272408;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4118461;
        result[3] += 4706813;
        result[4] += 10590330;
        result[5] += 23534067;
      } else {
        result[0] += 204522;
        result[1] += 1840700;
        result[2] += 13498468;
        result[3] += 21474836;
        result[4] += 0;
        result[5] += 5931145;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 2648371;
        result[1] += 0;
        result[2] += 31665308;
        result[3] += 5757328;
        result[4] += 460586;
        result[5] += 2418078;
      } else {
        result[0] += 149650;
        result[1] += 0;
        result[2] += 41827294;
        result[3] += 972727;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 1333840;
        result[2] += 0;
        result[3] += 1067072;
        result[4] += 39081534;
        result[5] += 1467224;
      } else {
        result[0] += 5196055;
        result[1] += 164432;
        result[2] += 164432;
        result[3] += 4373894;
        result[4] += 4439667;
        result[5] += 28611191;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 0;
        result[1] += 39197563;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3752108;
        result[5] += 0;
      } else {
        result[0] += 29471742;
        result[1] += 868577;
        result[2] += 2665635;
        result[3] += 5570878;
        result[4] += 1797057;
        result[5] += 2575782;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 554189;
        result[1] += 554189;
        result[2] += 8312839;
        result[3] += 15240206;
        result[4] += 1939662;
        result[5] += 16348585;
      } else {
        result[0] += 7730941;
        result[1] += 0;
        result[2] += 24051816;
        result[3] += 7158278;
        result[4] += 0;
        result[5] += 4008636;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 665886;
        result[1] += 1997659;
        result[2] += 27301342;
        result[3] += 5327091;
        result[4] += 0;
        result[5] += 7657693;
      } else {
        result[0] += 216917;
        result[1] += 0;
        result[2] += 40238203;
        result[3] += 2277634;
        result[4] += 0;
        result[5] += 216917;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        result[0] += 517465;
        result[1] += 517465;
        result[2] += 0;
        result[3] += 258732;
        result[4] += 35963882;
        result[5] += 5692125;
      } else {
        result[0] += 1666915;
        result[1] += 248264;
        result[2] += 212797;
        result[3] += 6348465;
        result[4] += 2021578;
        result[5] += 32451652;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 0;
        result[1] += 41018317;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1931355;
        result[5] += 0;
      } else {
        result[0] += 28752114;
        result[1] += 1537839;
        result[2] += 2636297;
        result[3] += 3020757;
        result[4] += 4833211;
        result[5] += 2169452;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 700266;
        result[1] += 700266;
        result[2] += 2334221;
        result[3] += 16806393;
        result[4] += 6068975;
        result[5] += 16339549;
      } else {
        result[0] += 1451819;
        result[1] += 0;
        result[2] += 27584578;
        result[3] += 10767664;
        result[4] += 241969;
        result[5] += 2903639;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 1209849;
        result[1] += 0;
        result[2] += 30851173;
        result[3] += 5444324;
        result[4] += 0;
        result[5] += 5444324;
      } else {
        result[0] += 133799;
        result[1] += 133799;
        result[2] += 41477877;
        result[3] += 1137296;
        result[4] += 0;
        result[5] += 66899;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42850000))) ) ) {
        result[0] += 0;
        result[1] += 1022611;
        result[2] += 0;
        result[3] += 0;
        result[4] += 40734015;
        result[5] += 1193046;
      } else {
        result[0] += 0;
        result[1] += 4026531;
        result[2] += 0;
        result[3] += 16106127;
        result[4] += 9395240;
        result[5] += 13421772;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
        result[0] += 58674;
        result[1] += 0;
        result[2] += 58674;
        result[3] += 880116;
        result[4] += 1818906;
        result[5] += 40133300;
      } else {
        result[0] += 4355036;
        result[1] += 300347;
        result[2] += 150173;
        result[3] += 11788634;
        result[4] += 3904515;
        result[5] += 22450965;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 648296;
        result[1] += 34521812;
        result[2] += 0;
        result[3] += 405185;
        result[4] += 6726080;
        result[5] += 648296;
      } else {
        result[0] += 31811332;
        result[1] += 1428739;
        result[2] += 1457897;
        result[3] += 3003269;
        result[4] += 3644744;
        result[5] += 1603687;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 12494450;
        result[3] += 17375094;
        result[4] += 2928386;
        result[5] += 10151740;
      } else {
        result[0] += 1354078;
        result[1] += 634724;
        result[2] += 36221596;
        result[3] += 3427510;
        result[4] += 296204;
        result[5] += 1015558;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 320519;
        result[1] += 641039;
        result[2] += 0;
        result[3] += 0;
        result[4] += 37981613;
        result[5] += 4006499;
      } else {
        result[0] += 2741468;
        result[1] += 635702;
        result[2] += 437045;
        result[3] += 3257977;
        result[4] += 2701737;
        result[5] += 33175741;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 180460;
        result[1] += 41686447;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1082764;
        result[5] += 0;
      } else {
        result[0] += 26205389;
        result[1] += 796231;
        result[2] += 1732974;
        result[3] += 6041993;
        result[4] += 3559623;
        result[5] += 4613459;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0;
        result[1] += 1835456;
        result[2] += 7708915;
        result[3] += 12481101;
        result[4] += 1101273;
        result[5] += 19822925;
      } else {
        result[0] += 0;
        result[1] += 4643207;
        result[2] += 29020049;
        result[3] += 4643207;
        result[4] += 0;
        result[5] += 4643207;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 28633115;
        result[3] += 9698313;
        result[4] += 0;
        result[5] += 4618244;
      } else {
        result[0] += 933688;
        result[1] += 0;
        result[2] += 39354972;
        result[3] += 2567643;
        result[4] += 0;
        result[5] += 93368;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 25769803;
        result[2] += 0;
        result[3] += 0;
        result[4] += 17179869;
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
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
        result[0] += 2902004;
        result[1] += 454226;
        result[2] += 328052;
        result[3] += 5980653;
        result[4] += 8226553;
        result[5] += 25058181;
      } else {
        result[0] += 30085098;
        result[1] += 1945657;
        result[2] += 1713340;
        result[3] += 2439332;
        result[4] += 4994823;
        result[5] += 1771419;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 5052902;
        result[4] += 5052902;
        result[5] += 32843867;
      } else {
        result[0] += 2225371;
        result[1] += 2892983;
        result[2] += 13574767;
        result[3] += 16022675;
        result[4] += 1335222;
        result[5] += 6898652;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 746950;
        result[1] += 0;
        result[2] += 28384131;
        result[3] += 10830787;
        result[4] += 0;
        result[5] += 2987803;
      } else {
        result[0] += 1590728;
        result[1] += 0;
        result[2] += 39022561;
        result[3] += 2286672;
        result[4] += 0;
        result[5] += 49710;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42890000))) ) ) {
        result[0] += 0;
        result[1] += 6135667;
        result[2] += 0;
        result[3] += 0;
        result[4] += 36814005;
        result[5] += 0;
      } else {
        result[0] += 97391;
        result[1] += 42560106;
        result[2] += 0;
        result[3] += 0;
        result[4] += 292174;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
        result[0] += 1596954;
        result[1] += 532318;
        result[2] += 756452;
        result[3] += 6135667;
        result[4] += 8657174;
        result[5] += 25271105;
      } else {
        result[0] += 26458550;
        result[1] += 1527853;
        result[2] += 2691933;
        result[3] += 3492237;
        result[4] += 5553627;
        result[5] += 3225469;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 7251243;
        result[3] += 15618062;
        result[4] += 0;
        result[5] += 20080366;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 37223049;
        result[3] += 5726623;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 23622320;
        result[3] += 17895697;
        result[4] += 0;
        result[5] += 1431655;
      } else {
        result[0] += 473535;
        result[1] += 284121;
        result[2] += 40108459;
        result[3] += 1894142;
        result[4] += 94707;
        result[5] += 94707;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 3357629;
        result[1] += 2798024;
        result[2] += 139901;
        result[3] += 0;
        result[4] += 31337872;
        result[5] += 5316246;
      } else {
        result[0] += 245660;
        result[1] += 81886;
        result[2] += 40943;
        result[3] += 5036043;
        result[4] += 2088115;
        result[5] += 35457022;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 42316730;
        result[2] += 0;
        result[3] += 0;
        result[4] += 632942;
        result[5] += 0;
      } else {
        result[0] += 23942063;
        result[1] += 1239145;
        result[2] += 3075736;
        result[3] += 4735306;
        result[4] += 4823816;
        result[5] += 5133603;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 12000643;
        result[3] += 4421289;
        result[4] += 1894838;
        result[5] += 24632900;
      } else {
        result[0] += 4908534;
        result[1] += 4294967;
        result[2] += 15952735;
        result[3] += 14725602;
        result[4] += 0;
        result[5] += 3067833;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 33285996;
        result[3] += 8187281;
        result[4] += 0;
        result[5] += 1476395;
      } else {
        result[0] += 72063;
        result[1] += 0;
        result[2] += 41436345;
        result[3] += 1297137;
        result[4] += 0;
        result[5] += 144126;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        result[0] += 6659917;
        result[1] += 815500;
        result[2] += 0;
        result[3] += 543666;
        result[4] += 28542504;
        result[5] += 6388084;
      } else {
        result[0] += 254140;
        result[1] += 798725;
        result[2] += 290445;
        result[3] += 6535030;
        result[4] += 1778980;
        result[5] += 33292350;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42520000))) ) ) {
        result[0] += 0;
        result[1] += 41351982;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1597690;
        result[5] += 0;
      } else {
        result[0] += 27654645;
        result[1] += 978469;
        result[2] += 2059936;
        result[3] += 3141402;
        result[4] += 5922317;
        result[5] += 3192901;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0;
        result[1] += 2178606;
        result[2] += 7780737;
        result[3] += 22719754;
        result[4] += 1244918;
        result[5] += 9025655;
      } else {
        result[0] += 2741468;
        result[1] += 913822;
        result[2] += 20561013;
        result[3] += 6853671;
        result[4] += 913822;
        result[5] += 10965873;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 482580;
        result[1] += 0;
        result[2] += 30885158;
        result[3] += 8686450;
        result[4] += 0;
        result[5] += 2895483;
      } else {
        result[0] += 828767;
        result[1] += 0;
        result[2] += 40317116;
        result[3] += 1755037;
        result[4] += 0;
        result[5] += 48751;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 653226;
        result[1] += 489920;
        result[2] += 0;
        result[3] += 0;
        result[4] += 39193617;
        result[5] += 2612907;
      } else {
        result[0] += 1630103;
        result[1] += 1063110;
        result[2] += 70874;
        result[3] += 7051967;
        result[4] += 1736414;
        result[5] += 31397203;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 27143999;
        result[1] += 2573581;
        result[2] += 1359627;
        result[3] += 2743534;
        result[4] += 6118325;
        result[5] += 3010604;
      } else {
        result[0] += 301049;
        result[1] += 42347574;
        result[2] += 0;
        result[3] += 0;
        result[4] += 301049;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3976821;
        result[3] += 30223843;
        result[4] += 0;
        result[5] += 8749007;
      } else {
        result[0] += 734182;
        result[1] += 0;
        result[2] += 31569845;
        result[3] += 5139277;
        result[4] += 1468364;
        result[5] += 4038003;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 2119227;
        result[1] += 0;
        result[2] += 32777381;
        result[3] += 6357681;
        result[4] += 0;
        result[5] += 1695381;
      } else {
        result[0] += 68719;
        result[1] += 0;
        result[2] += 41781441;
        result[3] += 893353;
        result[4] += 0;
        result[5] += 206158;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        result[0] += 1028734;
        result[1] += 642959;
        result[2] += 0;
        result[3] += 128591;
        result[4] += 37420224;
        result[5] += 3729163;
      } else {
        result[0] += 2740635;
        result[1] += 0;
        result[2] += 117455;
        result[3] += 2858091;
        result[4] += 3876041;
        result[5] += 33357448;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 24754920;
        result[1] += 2811500;
        result[2] += 2422919;
        result[3] += 5600143;
        result[4] += 2902931;
        result[5] += 4457257;
      } else {
        result[0] += 570128;
        result[1] += 41049244;
        result[2] += 95021;
        result[3] += 475107;
        result[4] += 760171;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1130254;
        result[3] += 0;
        result[4] += 3390763;
        result[5] += 38428654;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 5506368;
        result[3] += 18721652;
        result[4] += 0;
        result[5] += 18721652;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 1385473;
        result[2] += 9698313;
        result[3] += 22167573;
        result[4] += 0;
        result[5] += 9698313;
      } else {
        result[0] += 1257940;
        result[1] += 314485;
        result[2] += 37513574;
        result[3] += 3054997;
        result[4] += 44926;
        result[5] += 763749;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 7183753;
        result[1] += 152845;
        result[2] += 152845;
        result[3] += 0;
        result[4] += 31944774;
        result[5] += 3515453;
      } else {
        result[0] += 0;
        result[1] += 945873;
        result[2] += 875808;
        result[3] += 7812216;
        result[4] += 2382200;
        result[5] += 30933573;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42420000))) ) ) {
        result[0] += 0;
        result[1] += 41950843;
        result[2] += 0;
        result[3] += 0;
        result[4] += 998829;
        result[5] += 0;
      } else {
        result[0] += 26581153;
        result[1] += 1651003;
        result[2] += 2382161;
        result[3] += 3585035;
        result[4] += 5070938;
        result[5] += 3679378;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 7074063;
        result[3] += 15158708;
        result[4] += 0;
        result[5] += 20716901;
      } else {
        result[0] += 0;
        result[1] += 8589934;
        result[2] += 24542670;
        result[3] += 6135667;
        result[4] += 0;
        result[5] += 3681400;
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 10105805;
        result[3] += 17685159;
        result[4] += 0;
        result[5] += 15158708;
      } else {
        result[0] += 507461;
        result[1] += 0;
        result[2] += 39674241;
        result[3] += 2629571;
        result[4] += 0;
        result[5] += 138398;
      }
    }
  }
  if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c00000))) ) ) {
        result[0] += 178214;
        result[1] += 1247500;
        result[2] += 0;
        result[3] += 0;
        result[4] += 39920027;
        result[5] += 1603929;
      } else {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 856139;
        result[1] += 237816;
        result[2] += 285379;
        result[3] += 2806235;
        result[4] += 1854969;
        result[5] += 36909132;
      } else {
        result[0] += 4880644;
        result[1] += 867670;
        result[2] += 3362221;
        result[3] += 16919568;
        result[4] += 3362221;
        result[5] += 13557346;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42780000))) ) ) {
        result[0] += 0;
        result[1] += 36071326;
        result[2] += 0;
        result[3] += 479884;
        result[4] += 5998557;
        result[5] += 399903;
      } else {
        result[0] += 30639082;
        result[1] += 879327;
        result[2] += 632016;
        result[3] += 2583025;
        result[4] += 4534034;
        result[5] += 3682185;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 517465;
        result[1] += 0;
        result[2] += 18283796;
        result[3] += 18111307;
        result[4] += 344977;
        result[5] += 5692125;
      } else {
        result[0] += 982508;
        result[1] += 93572;
        result[2] += 38411417;
        result[3] += 2479665;
        result[4] += 140358;
        result[5] += 842150;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 1874787;
        result[2] += 0;
        result[3] += 340870;
        result[4] += 38688792;
        result[5] += 2045222;
      } else {
        result[0] += 1823841;
        result[1] += 965563;
        result[2] += 0;
        result[3] += 5900662;
        result[4] += 2217218;
        result[5] += 32042387;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 41029159;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1920513;
        result[5] += 0;
      } else {
        result[0] += 26598034;
        result[1] += 1254177;
        result[2] += 2366373;
        result[3] += 3573223;
        result[4] += 5206020;
        result[5] += 3951843;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 6781527;
        result[3] += 23735345;
        result[4] += 565127;
        result[5] += 11867672;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 29674319;
        result[3] += 8589934;
        result[4] += 0;
        result[5] += 4685418;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 33364338;
        result[3] += 7004667;
        result[4] += 0;
        result[5] += 2580667;
      } else {
        result[0] += 734182;
        result[1] += 0;
        result[2] += 40685943;
        result[3] += 1529546;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 403915;
        result[1] += 403915;
        result[2] += 538553;
        result[3] += 0;
        result[4] += 40930095;
        result[5] += 673192;
      } else {
        result[0] += 315806;
        result[1] += 41212737;
        result[2] += 0;
        result[3] += 78951;
        result[4] += 1342177;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
        result[0] += 1711142;
        result[1] += 171114;
        result[2] += 102668;
        result[3] += 6160112;
        result[4] += 2943164;
        result[5] += 31861470;
      } else {
        result[0] += 30658429;
        result[1] += 752525;
        result[2] += 1449307;
        result[3] += 3372427;
        result[4] += 3623268;
        result[5] += 3093714;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 8180890;
        result[3] += 15850474;
        result[4] += 0;
        result[5] += 18918308;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 33251359;
        result[3] += 4156419;
        result[4] += 0;
        result[5] += 5541893;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 461824;
        result[1] += 0;
        result[2] += 21243924;
        result[3] += 15702030;
        result[4] += 0;
        result[5] += 5541893;
      } else {
        result[0] += 806146;
        result[1] += 0;
        result[2] += 39053300;
        result[3] += 2597581;
        result[4] += 89571;
        result[5] += 403073;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 239942;
        result[1] += 1679596;
        result[2] += 0;
        result[3] += 0;
        result[4] += 38150826;
        result[5] += 2879307;
      } else {
        result[0] += 3881431;
        result[1] += 253925;
        result[2] += 72550;
        result[3] += 3917706;
        result[4] += 2357879;
        result[5] += 32466180;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 0;
        result[1] += 41502947;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1446725;
        result[5] += 0;
      } else {
        result[0] += 26680064;
        result[1] += 993963;
        result[2] += 2014083;
        result[3] += 5492954;
        result[4] += 3557341;
        result[5] += 4211265;
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0;
        result[1] += 511305;
        result[2] += 9970459;
        result[3] += 21986142;
        result[4] += 2045222;
        result[5] += 8436542;
      } else {
        result[0] += 2551465;
        result[1] += 3827198;
        result[2] += 29767100;
        result[3] += 1275732;
        result[4] += 850488;
        result[5] += 4677687;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 3696488;
        result[1] += 0;
        result[2] += 30804068;
        result[3] += 7392976;
        result[4] += 0;
        result[5] += 1056139;
      } else {
        result[0] += 459705;
        result[1] += 0;
        result[2] += 40782487;
        result[3] += 1576134;
        result[4] += 0;
        result[5] += 131344;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        result[0] += 6135667;
        result[1] += 1697099;
        result[2] += 0;
        result[3] += 261092;
        result[4] += 29372876;
        result[5] += 5482936;
      } else {
        result[0] += 35791;
        result[1] += 143165;
        result[2] += 1145324;
        result[3] += 8017272;
        result[4] += 3435973;
        result[5] += 30172145;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 26633852;
        result[1] += 2642703;
        result[2] += 2091182;
        result[3] += 3515944;
        result[4] += 4963686;
        result[5] += 3102303;
      } else {
        result[0] += 109565;
        result[1] += 41854018;
        result[2] += 109565;
        result[3] += 0;
        result[4] += 876523;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 7158278;
        result[3] += 11713547;
        result[4] += 0;
        result[5] += 24077846;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 33405301;
        result[3] += 2863311;
        result[4] += 0;
        result[5] += 6681060;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 20580051;
        result[3] += 18790481;
        result[4] += 894784;
        result[5] += 2684354;
      } else {
        result[0] += 342813;
        result[1] += 293840;
        result[2] += 40158189;
        result[3] += 1909962;
        result[4] += 0;
        result[5] += 244867;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        result[0] += 165191;
        result[1] += 1817101;
        result[2] += 0;
        result[3] += 825955;
        result[4] += 37002795;
        result[5] += 3138629;
      } else {
        result[0] += 1730969;
        result[1] += 180309;
        result[2] += 0;
        result[3] += 6419010;
        result[4] += 2307958;
        result[5] += 32311424;
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 25063654;
        result[1] += 3019717;
        result[2] += 3159088;
        result[3] += 3972089;
        result[4] += 5087062;
        result[5] += 2648059;
      } else {
        result[0] += 112433;
        result[1] += 42162637;
        result[2] += 0;
        result[3] += 0;
        result[4] += 562168;
        result[5] += 112433;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 7669584;
        result[3] += 1533916;
        result[4] += 5368709;
        result[5] += 28377462;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 11713547;
        result[3] += 22869306;
        result[4] += 1115575;
        result[5] += 7251243;
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 6607641;
        result[4] += 0;
        result[5] += 36342030;
      } else {
        result[0] += 860714;
        result[1] += 258214;
        result[2] += 38603062;
        result[3] += 2711251;
        result[4] += 43035;
        result[5] += 473393;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 2251394;
        result[2] += 0;
        result[3] += 173184;
        result[4] += 38100516;
        result[5] += 2424578;
      } else {
        result[0] += 1638502;
        result[1] += 244032;
        result[2] += 941267;
        result[3] += 6972349;
        result[4] += 3625621;
        result[5] += 29527900;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        result[0] += 94602;
        result[1] += 40584602;
        result[2] += 0;
        result[3] += 378411;
        result[4] += 1608247;
        result[5] += 283808;
      } else {
        result[0] += 27764647;
        result[1] += 1394811;
        result[2] += 2210644;
        result[3] += 3105429;
        result[4] += 4263386;
        result[5] += 4210752;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 636291;
        result[1] += 636291;
        result[2] += 12248610;
        result[3] += 14475630;
        result[4] += 2704238;
        result[5] += 12248610;
      } else {
        result[0] += 27917287;
        result[1] += 4294967;
        result[2] += 10737418;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 129757;
        result[1] += 0;
        result[2] += 34645204;
        result[3] += 6877137;
        result[4] += 0;
        result[5] += 1297573;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 41802436;
        result[3] += 1075534;
        result[4] += 0;
        result[5] += 71702;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 1054904;
        result[2] += 452101;
        result[3] += 904203;
        result[4] += 37675151;
        result[5] += 2863311;
      } else {
        result[0] += 2125916;
        result[1] += 616207;
        result[2] += 616207;
        result[3] += 7640974;
        result[4] += 2403209;
        result[5] += 29547156;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42890000))) ) ) {
        result[0] += 1177652;
        result[1] += 35468117;
        result[2] += 0;
        result[3] += 692736;
        result[4] += 5611166;
        result[5] += 0;
      } else {
        result[0] += 30795766;
        result[1] += 1321076;
        result[2] += 2407295;
        result[3] += 3199941;
        result[4] += 2671510;
        result[5] += 2554081;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3734754;
        result[3] += 11204262;
        result[4] += 0;
        result[5] += 28010656;
      } else {
        result[0] += 0;
        result[1] += 1789569;
        result[2] += 23980234;
        result[3] += 11095332;
        result[4] += 0;
        result[5] += 6084537;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 1717986;
        result[2] += 13743895;
        result[3] += 6871947;
        result[4] += 0;
        result[5] += 20615843;
      } else {
        result[0] += 245988;
        result[1] += 0;
        result[2] += 40883365;
        result[3] += 1771120;
        result[4] += 0;
        result[5] += 49197;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 0;
        result[1] += 21474836;
        result[2] += 0;
        result[3] += 0;
        result[4] += 21474836;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 42580213;
        result[2] += 0;
        result[3] += 0;
        result[4] += 369459;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 3729840;
        result[1] += 536870;
        result[2] += 197794;
        result[3] += 3871121;
        result[4] += 10680905;
        result[5] += 23933140;
      } else {
        result[0] += 26986960;
        result[1] += 1546387;
        result[2] += 2319581;
        result[3] += 5237764;
        result[4] += 2868299;
        result[5] += 3990678;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 1561806;
        result[1] += 5466322;
        result[2] += 7028128;
        result[3] += 1561806;
        result[4] += 1561806;
        result[5] += 25769803;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 14069720;
        result[3] += 21474836;
        result[4] += 0;
        result[5] += 7405116;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 1318148;
        result[1] += 219691;
        result[2] += 33063558;
        result[3] += 5821822;
        result[4] += 439382;
        result[5] += 2087068;
      } else {
        result[0] += 632646;
        result[1] += 0;
        result[2] += 41403203;
        result[3] += 913822;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 663315;
        result[1] += 497486;
        result[2] += 0;
        result[3] += 0;
        result[4] += 39301438;
        result[5] += 2487432;
      } else {
        result[0] += 2091587;
        result[1] += 1009732;
        result[2] += 0;
        result[3] += 6671443;
        result[4] += 1911278;
        result[5] += 31265630;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42780000))) ) ) {
        result[0] += 322323;
        result[1] += 35858544;
        result[2] += 402904;
        result[3] += 161161;
        result[4] += 5721250;
        result[5] += 483485;
      } else {
        result[0] += 29559638;
        result[1] += 1175971;
        result[2] += 1924316;
        result[3] += 3421006;
        result[4] += 4035719;
        result[5] += 2833021;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 550636;
        result[1] += 0;
        result[2] += 550636;
        result[3] += 2753184;
        result[4] += 7708915;
        result[5] += 31386299;
      } else {
        result[0] += 1524840;
        result[1] += 1524840;
        result[2] += 14231844;
        result[3] += 17027385;
        result[4] += 508280;
        result[5] += 8132482;
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 990453;
        result[1] += 0;
        result[2] += 38537652;
        result[3] += 3106422;
        result[4] += 0;
        result[5] += 315144;
      } else {
        result[0] += 20861269;
        result[1] += 0;
        result[2] += 22088403;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 1080494;
        result[2] += 0;
        result[3] += 1350618;
        result[4] += 37547198;
        result[5] += 2971361;
      } else {
        result[0] += 3089049;
        result[1] += 534643;
        result[2] += 59404;
        result[3] += 7336493;
        result[4] += 2910835;
        result[5] += 29019246;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 95232;
        result[1] += 41045031;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1809409;
        result[5] += 0;
      } else {
        result[0] += 28393276;
        result[1] += 1272992;
        result[2] += 3071787;
        result[3] += 3514567;
        result[4] += 4206411;
        result[5] += 2490638;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 8380423;
        result[2] += 6285317;
        result[3] += 2095105;
        result[4] += 0;
        result[5] += 26188824;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 18527309;
        result[3] += 14737632;
        result[4] += 421075;
        result[5] += 9263654;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 1449222;
        result[1] += 0;
        result[2] += 34517835;
        result[3] += 6192130;
        result[4] += 0;
        result[5] += 790484;
      } else {
        result[0] += 218388;
        result[1] += 0;
        result[2] += 41639343;
        result[3] += 800756;
        result[4] += 0;
        result[5] += 291184;
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        result[0] += 20278901;
        result[1] += 2963839;
        result[2] += 0;
        result[3] += 51997;
        result[4] += 17731039;
        result[5] += 1923895;
      } else {
        result[0] += 2720908;
        result[1] += 483152;
        result[2] += 712013;
        result[3] += 7552429;
        result[4] += 5162098;
        result[5] += 26319071;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 42480790;
        result[2] += 0;
        result[3] += 93776;
        result[4] += 375106;
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
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 41720588;
        result[1] += 0;
        result[2] += 0;
        result[3] += 341412;
        result[4] += 477977;
        result[5] += 409694;
      } else {
        result[0] += 7809031;
        result[1] += 0;
        result[2] += 20638154;
        result[3] += 7809031;
        result[4] += 0;
        result[5] += 6693455;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 1150437;
        result[1] += 0;
        result[2] += 18023523;
        result[3] += 18407002;
        result[4] += 1533916;
        result[5] += 3834792;
      } else {
        result[0] += 1829414;
        result[1] += 0;
        result[2] += 37877204;
        result[3] += 2868855;
        result[4] += 0;
        result[5] += 374198;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 4555268;
        result[1] += 3904515;
        result[2] += 0;
        result[3] += 911053;
        result[4] += 28242663;
        result[5] += 5336171;
      } else {
        result[0] += 346058;
        result[1] += 76901;
        result[2] += 346058;
        result[3] += 6882713;
        result[4] += 1845643;
        result[5] += 33452296;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 241742;
        result[1] += 37953650;
        result[2] += 161161;
        result[3] += 0;
        result[4] += 4593116;
        result[5] += 0;
      } else {
        result[0] += 29339435;
        result[1] += 977981;
        result[2] += 1955962;
        result[3] += 3504432;
        result[4] += 4428081;
        result[5] += 2743780;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2962046;
        result[3] += 740511;
        result[4] += 9626650;
        result[5] += 29620464;
      } else {
        result[0] += 1043311;
        result[1] += 1043311;
        result[2] += 11998086;
        result[3] += 18605728;
        result[4] += 2260509;
        result[5] += 7998724;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 4421289;
        result[1] += 0;
        result[2] += 26527739;
        result[3] += 5684515;
        result[4] += 0;
        result[5] += 6316128;
      } else {
        result[0] += 96299;
        result[1] += 0;
        result[2] += 39531033;
        result[3] += 3274190;
        result[4] += 0;
        result[5] += 48149;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 0;
        result[1] += 14316557;
        result[2] += 0;
        result[3] += 0;
        result[4] += 28633115;
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
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 363980;
        result[1] += 109194;
        result[2] += 0;
        result[3] += 2802648;
        result[4] += 9427089;
        result[5] += 30246761;
      } else {
        result[0] += 24964084;
        result[1] += 1893219;
        result[2] += 1651063;
        result[3] += 4755063;
        result[4] += 5635631;
        result[5] += 4050609;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1363481;
        result[3] += 3408704;
        result[4] += 8180890;
        result[5] += 29996596;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 13683081;
        result[3] += 20904708;
        result[4] += 0;
        result[5] += 8361883;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 825955;
        result[1] += 0;
        result[2] += 14041239;
        result[3] += 9911462;
        result[4] += 3303820;
        result[5] += 14867194;
      } else {
        result[0] += 728687;
        result[1] += 0;
        result[2] += 38063183;
        result[3] += 3729163;
        result[4] += 171455;
        result[5] += 257183;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 166471;
        result[1] += 2663545;
        result[2] += 0;
        result[3] += 0;
        result[4] += 37955524;
        result[5] += 2164130;
      } else {
        result[0] += 2279862;
        result[1] += 588351;
        result[2] += 0;
        result[3] += 6214464;
        result[4] += 2059230;
        result[5] += 31807762;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 28050862;
        result[1] += 2440322;
        result[2] += 719252;
        result[3] += 2697198;
        result[4] += 5933836;
        result[5] += 3108200;
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
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 7830603;
        result[3] += 25390138;
        result[4] += 0;
        result[5] += 9728931;
      } else {
        result[0] += 265121;
        result[1] += 0;
        result[2] += 29693601;
        result[3] += 6362914;
        result[4] += 2651214;
        result[5] += 3976821;
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 1590728;
        result[1] += 0;
        result[2] += 26247022;
        result[3] += 6362914;
        result[4] += 0;
        result[5] += 8749007;
      } else {
        result[0] += 1275732;
        result[1] += 0;
        result[2] += 38744479;
        result[3] += 2551465;
        result[4] += 0;
        result[5] += 377994;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
        result[0] += 159664;
        result[1] += 1436977;
        result[2] += 0;
        result[3] += 638656;
        result[4] += 38638739;
        result[5] += 2075634;
      } else {
        result[0] += 1970791;
        result[1] += 441729;
        result[2] += 543666;
        result[3] += 6557980;
        result[4] += 3262000;
        result[5] += 30173504;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42560000))) ) ) {
        result[0] += 931846;
        result[1] += 39984705;
        result[2] += 0;
        result[3] += 677706;
        result[4] += 1355413;
        result[5] += 0;
      } else {
        result[0] += 26846661;
        result[1] += 1346072;
        result[2] += 2243453;
        result[3] += 3739089;
        result[4] += 4412125;
        result[5] += 4362270;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4657193;
        result[3] += 22768501;
        result[4] += 0;
        result[5] += 15523978;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 35791394;
        result[3] += 5113056;
        result[4] += 0;
        result[5] += 2045222;
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 4494733;
        result[1] += 0;
        result[2] += 33960206;
        result[3] += 2996488;
        result[4] += 0;
        result[5] += 1498244;
      } else {
        result[0] += 100820;
        result[1] += 0;
        result[2] += 40529973;
        result[3] += 2117237;
        result[4] += 0;
        result[5] += 201641;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a50000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 3080778;
        result[1] += 0;
        result[2] += 0;
        result[3] += 724888;
        result[4] += 36788116;
        result[5] += 2355889;
      } else {
        result[0] += 0;
        result[1] += 40328;
        result[2] += 161313;
        result[3] += 4516773;
        result[4] += 3629549;
        result[5] += 34601708;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 257183;
        result[1] += 40377836;
        result[2] += 0;
        result[3] += 600095;
        result[4] += 1714557;
        result[5] += 0;
      } else {
        result[0] += 23517539;
        result[1] += 1714600;
        result[2] += 3683214;
        result[3] += 5037960;
        result[4] += 4932121;
        result[5] += 4064237;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 0;
        result[1] += 2526451;
        result[2] += 6737203;
        result[3] += 18527309;
        result[4] += 842150;
        result[5] += 14316557;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 31799277;
        result[3] += 7846574;
        result[4] += 0;
        result[5] += 3303820;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 3579139;
        result[1] += 5368709;
        result[2] += 12526987;
        result[3] += 0;
        result[4] += 10737418;
        result[5] += 10737418;
      } else {
        result[0] += 526989;
        result[1] += 0;
        result[2] += 39998529;
        result[3] += 2107959;
        result[4] += 263494;
        result[5] += 52698;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        result[0] += 856139;
        result[1] += 142689;
        result[2] += 428069;
        result[3] += 285379;
        result[4] += 38240904;
        result[5] += 2996488;
      } else {
        result[0] += 1850028;
        result[1] += 72550;
        result[2] += 108825;
        result[3] += 6203035;
        result[4] += 1850028;
        result[5] += 32865205;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 308990;
        result[1] += 36229130;
        result[2] += 0;
        result[3] += 154495;
        result[4] += 6179809;
        result[5] += 77247;
      } else {
        result[0] += 29029839;
        result[1] += 1526524;
        result[2] += 2354470;
        result[3] += 4294967;
        result[4] += 3156542;
        result[5] += 2587329;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 810371;
        result[1] += 2431113;
        result[2] += 4862227;
        result[3] += 14181495;
        result[4] += 4051855;
        result[5] += 16612609;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 31386299;
        result[3] += 1651910;
        result[4] += 0;
        result[5] += 9911462;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 1408185;
        result[1] += 4928650;
        result[2] += 16194138;
        result[3] += 11969580;
        result[4] += 0;
        result[5] += 8449115;
      } else {
        result[0] += 276500;
        result[1] += 46083;
        result[2] += 38802172;
        result[3] += 3640583;
        result[4] += 0;
        result[5] += 184333;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        result[0] += 1130254;
        result[1] += 988972;
        result[2] += 0;
        result[3] += 706409;
        result[4] += 36450709;
        result[5] += 3673327;
      } else {
        result[0] += 1715004;
        result[1] += 149130;
        result[2] += 149130;
        result[3] += 7344692;
        result[4] += 1975983;
        result[5] += 31615731;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 26456051;
        result[1] += 2342709;
        result[2] += 2413700;
        result[3] += 3691542;
        result[4] += 5206020;
        result[5] += 2839647;
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
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2045222;
        result[3] += 5624361;
        result[4] += 2556528;
        result[5] += 32723560;
      } else {
        result[0] += 1301505;
        result[1] += 3579139;
        result[2] += 15292686;
        result[3] += 14641933;
        result[4] += 325376;
        result[5] += 7809031;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
        result[0] += 13362120;
        result[1] += 0;
        result[2] += 20043180;
        result[3] += 8589934;
        result[4] += 0;
        result[5] += 954437;
      } else {
        result[0] += 454226;
        result[1] += 0;
        result[2] += 39013040;
        result[3] += 3078648;
        result[4] += 0;
        result[5] += 403757;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        result[0] += 160860;
        result[1] += 1447741;
        result[2] += 0;
        result[3] += 1447741;
        result[4] += 36997845;
        result[5] += 2895483;
      } else {
        result[0] += 1921610;
        result[1] += 67424;
        result[2] += 33712;
        result[3] += 6236804;
        result[4] += 1887897;
        result[5] += 32802222;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 157037;
        result[1] += 39808929;
        result[2] += 235555;
        result[3] += 0;
        result[4] += 2748150;
        result[5] += 0;
      } else {
        result[0] += 27608643;
        result[1] += 1328340;
        result[2] += 2448313;
        result[3] += 3750608;
        result[4] += 4479893;
        result[5] += 3333873;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 6362914;
        result[3] += 29693601;
        result[4] += 0;
        result[5] += 6893157;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 29205777;
        result[3] += 6871947;
        result[4] += 0;
        result[5] += 6871947;
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 35267617;
        result[3] += 5761541;
        result[4] += 0;
        result[5] += 1920513;
      } else {
        result[0] += 844516;
        result[1] += 0;
        result[2] += 40355802;
        result[3] += 1689032;
        result[4] += 0;
        result[5] += 60322;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 1897375;
        result[2] += 0;
        result[3] += 517465;
        result[4] += 39154922;
        result[5] += 1379909;
      } else {
        result[0] += 1488020;
        result[1] += 811647;
        result[2] += 1014559;
        result[3] += 5952080;
        result[4] += 3686231;
        result[5] += 29997133;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 76422;
        result[1] += 37370800;
        result[2] += 0;
        result[3] += 0;
        result[4] += 5349603;
        result[5] += 152845;
      } else {
        result[0] += 30001407;
        result[1] += 1074430;
        result[2] += 1845816;
        result[3] += 4270172;
        result[4] += 2286608;
        result[5] += 3471237;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 825955;
        result[3] += 825955;
        result[4] += 7433597;
        result[5] += 33864165;
      } else {
        result[0] += 0;
        result[1] += 207486;
        result[2] += 16806393;
        result[3] += 20126175;
        result[4] += 0;
        result[5] += 5809617;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 15523978;
        result[1] += 3622261;
        result[2] += 17593841;
        result[3] += 2587329;
        result[4] += 1034931;
        result[5] += 2587329;
      } else {
        result[0] += 559770;
        result[1] += 0;
        result[2] += 40099931;
        result[3] += 2239082;
        result[4] += 0;
        result[5] += 50888;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 797474;
        result[1] += 2620271;
        result[2] += 0;
        result[3] += 0;
        result[4] += 36228106;
        result[5] += 3303820;
      } else {
        result[0] += 0;
        result[1] += 41075209;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1874463;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
        result[0] += 1378263;
        result[1] += 74500;
        result[2] += 223502;
        result[3] += 6369812;
        result[4] += 1527265;
        result[5] += 33376328;
      } else {
        result[0] += 31210656;
        result[1] += 1260753;
        result[2] += 2045222;
        result[3] += 3474076;
        result[4] += 2661590;
        result[5] += 2297373;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 11713547;
        result[5] += 31236125;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 8053063;
        result[3] += 21474836;
        result[4] += 0;
        result[5] += 13421772;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 586343;
        result[2] += 28144495;
        result[3] += 10993943;
        result[4] += 732929;
        result[5] += 2491960;
      } else {
        result[0] += 801727;
        result[1] += 0;
        result[2] += 40086361;
        result[3] += 1546188;
        result[4] += 400863;
        result[5] += 114532;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        result[0] += 349184;
        result[1] += 698368;
        result[2] += 0;
        result[3] += 0;
        result[4] += 39981606;
        result[5] += 1920513;
      } else {
        result[0] += 23479154;
        result[1] += 2863311;
        result[2] += 0;
        result[3] += 0;
        result[4] += 9162596;
        result[5] += 7444609;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ac0000))) ) ) {
        result[0] += 130019;
        result[1] += 606756;
        result[2] += 130019;
        result[3] += 3467178;
        result[4] += 2990441;
        result[5] += 35625258;
      } else {
        result[0] += 447392;
        result[1] += 0;
        result[2] += 5592405;
        result[3] += 25053975;
        result[4] += 223696;
        result[5] += 11632203;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 165828;
        result[1] += 39716010;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3067833;
        result[5] += 0;
      } else {
        result[0] += 32205241;
        result[1] += 1262400;
        result[2] += 252480;
        result[3] += 2244267;
        result[4] += 4067735;
        result[5] += 2917547;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 195225;
        result[1] += 585677;
        result[2] += 13470579;
        result[3] += 19132127;
        result[4] += 390451;
        result[5] += 9175611;
      } else {
        result[0] += 1386789;
        result[1] += 0;
        result[2] += 38381426;
        result[3] += 2610426;
        result[4] += 122363;
        result[5] += 448667;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 1093264;
        result[1] += 937083;
        result[2] += 780903;
        result[3] += 0;
        result[4] += 37639531;
        result[5] += 2498890;
      } else {
        result[0] += 1288490;
        result[1] += 396458;
        result[2] += 627725;
        result[3] += 7235367;
        result[4] += 2312674;
        result[5] += 31088955;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42500000))) ) ) {
        result[0] += 475107;
        result[1] += 40479116;
        result[2] += 0;
        result[3] += 190042;
        result[4] += 1805406;
        result[5] += 0;
      } else {
        result[0] += 26413300;
        result[1] += 1920513;
        result[2] += 3017950;
        result[3] += 3491843;
        result[4] += 4414687;
        result[5] += 3691377;
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 0;
        result[1] += 715827;
        result[2] += 8589934;
        result[3] += 10737418;
        result[4] += 1073741;
        result[5] += 21832750;
      } else {
        result[0] += 1481023;
        result[1] += 0;
        result[2] += 31101487;
        result[3] += 2221534;
        result[4] += 0;
        result[5] += 8145627;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 2386092;
        result[1] += 7158278;
        result[2] += 15509604;
        result[3] += 2386092;
        result[4] += 1193046;
        result[5] += 14316557;
      } else {
        result[0] += 597214;
        result[1] += 248839;
        result[2] += 39266850;
        result[3] += 2787000;
        result[4] += 0;
        result[5] += 49767;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 6561755;
        result[1] += 2535223;
        result[2] += 0;
        result[3] += 745654;
        result[4] += 28931376;
        result[5] += 4175662;
      } else {
        result[0] += 326751;
        result[1] += 181528;
        result[2] += 835031;
        result[3] += 6317196;
        result[4] += 2759235;
        result[5] += 32529929;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42d40000))) ) ) {
        result[0] += 25688038;
        result[1] += 2907222;
        result[2] += 2566532;
        result[3] += 3406901;
        result[4] += 5973434;
        result[5] += 2407543;
      } else {
        result[0] += 816977;
        result[1] += 41665851;
        result[2] += 0;
        result[3] += 0;
        result[4] += 466844;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 810371;
        result[1] += 4051855;
        result[2] += 8103711;
        result[3] += 12965939;
        result[4] += 2836299;
        result[5] += 14181495;
      } else {
        result[0] += 1684300;
        result[1] += 842150;
        result[2] += 32001717;
        result[3] += 0;
        result[4] += 4210752;
        result[5] += 4210752;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 162074;
        result[1] += 0;
        result[2] += 30956179;
        result[3] += 10210676;
        result[4] += 0;
        result[5] += 1620742;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 41420307;
        result[3] += 1529365;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 2718333;
        result[2] += 407750;
        result[3] += 407750;
        result[4] += 37513005;
        result[5] += 1902833;
      } else {
        result[0] += 2025321;
        result[1] += 257183;
        result[2] += 1510954;
        result[3] += 8165581;
        result[4] += 2346800;
        result[5] += 28643831;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42620000))) ) ) {
        result[0] += 588351;
        result[1] += 40680316;
        result[2] += 84050;
        result[3] += 756452;
        result[4] += 840502;
        result[5] += 0;
      } else {
        result[0] += 28686535;
        result[1] += 1148529;
        result[2] += 2831259;
        result[3] += 3071649;
        result[4] += 3605849;
        result[5] += 3605849;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0;
        result[1] += 4555268;
        result[2] += 2603010;
        result[3] += 8459784;
        result[4] += 3904515;
        result[5] += 23427094;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 24051816;
        result[3] += 9162596;
        result[4] += 0;
        result[5] += 9735259;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 1862316;
        result[1] += 0;
        result[2] += 34918433;
        result[3] += 5586949;
        result[4] += 0;
        result[5] += 581973;
      } else {
        result[0] += 78806;
        result[1] += 0;
        result[2] += 41925185;
        result[3] += 945680;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x423c0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 0;
        result[1] += 7579354;
        result[2] += 0;
        result[3] += 0;
        result[4] += 30317416;
        result[5] += 5052902;
      } else {
        result[0] += 94811;
        result[1] += 42380803;
        result[2] += 94811;
        result[3] += 94811;
        result[4] += 284434;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
        result[0] += 1269448;
        result[1] += 90674;
        result[2] += 120899;
        result[3] += 5349818;
        result[4] += 9097713;
        result[5] += 27021117;
      } else {
        result[0] += 26046444;
        result[1] += 1992752;
        result[2] += 2391302;
        result[3] += 3915172;
        result[4] += 5040491;
        result[5] += 3563509;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 1827645;
        result[1] += 4112202;
        result[2] += 7767494;
        result[3] += 8224405;
        result[4] += 3198379;
        result[5] += 17819545;
      } else {
        result[0] += 2260509;
        result[1] += 376751;
        result[2] += 22605091;
        result[3] += 14693309;
        result[4] += 0;
        result[5] += 3014012;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 298261;
        result[1] += 0;
        result[2] += 35194870;
        result[3] += 6860017;
        result[4] += 0;
        result[5] += 596523;
      } else {
        result[0] += 743469;
        result[1] += 0;
        result[2] += 40490503;
        result[3] += 1715699;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 3681400;
        result[2] += 0;
        result[3] += 175304;
        result[4] += 35586871;
        result[5] += 3506095;
      } else {
        result[0] += 2152608;
        result[1] += 34168;
        result[2] += 102505;
        result[3] += 5808627;
        result[4] += 3656018;
        result[5] += 31195744;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 27433026;
        result[1] += 1926903;
        result[2] += 1419823;
        result[3] += 3422789;
        result[4] += 4867967;
        result[5] += 3879161;
      } else {
        result[0] += 518715;
        result[1] += 42327213;
        result[2] += 0;
        result[3] += 0;
        result[4] += 103743;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 1443686;
        result[2] += 6135667;
        result[3] += 21294375;
        result[4] += 3248294;
        result[5] += 10827648;
      } else {
        result[0] += 2863311;
        result[1] += 5010795;
        result[2] += 21474836;
        result[3] += 7158278;
        result[4] += 715827;
        result[5] += 5726623;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 24542670;
        result[1] += 6135667;
        result[2] += 10226112;
        result[3] += 2045222;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 465006;
        result[1] += 0;
        result[2] += 38299609;
        result[3] += 3424137;
        result[4] += 42273;
        result[5] += 718646;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 10348215;
        result[1] += 641039;
        result[2] += 274731;
        result[3] += 0;
        result[4] += 28663641;
        result[5] += 3022045;
      } else {
        result[0] += 41337;
        result[1] += 206687;
        result[2] += 0;
        result[3] += 3885725;
        result[4] += 3431013;
        result[5] += 35384908;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 42629153;
        result[2] += 0;
        result[3] += 213679;
        result[4] += 106839;
        result[5] += 0;
      } else {
        result[0] += 26438300;
        result[1] += 1985385;
        result[2] += 1859728;
        result[3] += 5101687;
        result[4] += 3116301;
        result[5] += 4448269;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 588351;
        result[1] += 3530110;
        result[2] += 2353406;
        result[3] += 16768023;
        result[4] += 2059230;
        result[5] += 17650550;
      } else {
        result[0] += 9911462;
        result[1] += 0;
        result[2] += 26430567;
        result[3] += 0;
        result[4] += 1651910;
        result[5] += 4955731;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 958698;
        result[1] += 0;
        result[2] += 30294858;
        result[3] += 9970459;
        result[4] += 0;
        result[5] += 1725656;
      } else {
        result[0] += 1059178;
        result[1] += 0;
        result[2] += 39719179;
        result[3] += 2171315;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 6115811;
        result[1] += 694978;
        result[2] += 0;
        result[3] += 694978;
        result[4] += 30440059;
        result[5] += 5003845;
      } else {
        result[0] += 38868;
        result[1] += 349816;
        result[2] += 0;
        result[3] += 6491036;
        result[4] += 2409845;
        result[5] += 33660105;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
        result[0] += 359110;
        result[1] += 35623809;
        result[2] += 71822;
        result[3] += 359110;
        result[4] += 6320353;
        result[5] += 215466;
      } else {
        result[0] += 31957421;
        result[1] += 1349925;
        result[2] += 1294826;
        result[3] += 2672301;
        result[4] += 2947796;
        result[5] += 2727400;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 5052902;
        result[3] += 18246593;
        result[4] += 842150;
        result[5] += 18808026;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 38654705;
        result[3] += 0;
        result[4] += 0;
        result[5] += 4294967;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 188375;
        result[1] += 753503;
        result[2] += 25430727;
        result[3] += 12621175;
        result[4] += 0;
        result[5] += 3955890;
      } else {
        result[0] += 603508;
        result[1] += 150877;
        result[2] += 40083008;
        result[3] += 1760232;
        result[4] += 150877;
        result[5] += 201169;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x423c0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 42614782;
        result[2] += 0;
        result[3] += 0;
        result[4] += 334890;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
        result[0] += 1546664;
        result[1] += 594870;
        result[2] += 267691;
        result[3] += 5443067;
        result[4] += 8238960;
        result[5] += 26858417;
      } else {
        result[0] += 26810863;
        result[1] += 1640026;
        result[2] += 1901479;
        result[3] += 3707885;
        result[4] += 5680670;
        result[5] += 3208747;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42cd0000))) ) ) {
        result[0] += 352046;
        result[1] += 0;
        result[2] += 17250278;
        result[3] += 17602324;
        result[4] += 704092;
        result[5] += 7040929;
      } else {
        result[0] += 1481023;
        result[1] += 0;
        result[2] += 36285068;
        result[3] += 4443069;
        result[4] += 0;
        result[5] += 740511;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 9544371;
        result[3] += 14316557;
        result[4] += 0;
        result[5] += 19088743;
      } else {
        result[0] += 446875;
        result[1] += 0;
        result[2] += 40020157;
        result[3] += 2135070;
        result[4] += 0;
        result[5] += 347569;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 505290;
        result[1] += 673720;
        result[2] += 842150;
        result[3] += 0;
        result[4] += 37896770;
        result[5] += 3031741;
      } else {
        result[0] += 1281533;
        result[1] += 549228;
        result[2] += 366152;
        result[3] += 6151359;
        result[4] += 2343375;
        result[5] += 32258023;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 70991;
        result[1] += 36844430;
        result[2] += 0;
        result[3] += 0;
        result[4] += 5821277;
        result[5] += 212973;
      } else {
        result[0] += 31862273;
        result[1] += 839954;
        result[2] += 2043889;
        result[3] += 2855845;
        result[4] += 2295875;
        result[5] += 3051834;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
        result[0] += 1908874;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1908874;
        result[4] += 17179869;
        result[5] += 21952055;
      } else {
        result[0] += 0;
        result[1] += 788067;
        result[2] += 13791179;
        result[3] += 19701684;
        result[4] += 0;
        result[5] += 8668741;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 23939161;
        result[3] += 5632743;
        result[4] += 1408185;
        result[5] += 11969580;
      } else {
        result[0] += 505290;
        result[1] += 0;
        result[2] += 39688253;
        result[3] += 2526451;
        result[4] += 45935;
        result[5] += 183741;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        result[0] += 611383;
        result[1] += 764229;
        result[2] += 0;
        result[3] += 152845;
        result[4] += 36224457;
        result[5] += 5196757;
      } else {
        result[0] += 1298399;
        result[1] += 205010;
        result[2] += 444189;
        result[3] += 6560331;
        result[4] += 2733471;
        result[5] += 31708270;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42480000))) ) ) {
        result[0] += 98508;
        result[1] += 42358622;
        result[2] += 0;
        result[3] += 197016;
        result[4] += 295525;
        result[5] += 0;
      } else {
        result[0] += 27073425;
        result[1] += 1699363;
        result[2] += 2933148;
        result[3] += 4329885;
        result[4] += 4260048;
        result[5] += 2653800;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 10001978;
        result[3] += 11767033;
        result[4] += 0;
        result[5] += 21180660;
      } else {
        result[0] += 0;
        result[1] += 3262000;
        result[2] += 25552337;
        result[3] += 9786001;
        result[4] += 0;
        result[5] += 4349333;
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428e0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 13563054;
        result[3] += 15823563;
        result[4] += 0;
        result[5] += 13563054;
      } else {
        result[0] += 513752;
        result[1] += 0;
        result[2] += 39610284;
        result[3] += 2517385;
        result[4] += 0;
        result[5] += 308251;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 5776856;
        result[1] += 2009341;
        result[2] += 0;
        result[3] += 0;
        result[4] += 29763369;
        result[5] += 5400105;
      } else {
        result[0] += 158632;
        result[1] += 118974;
        result[2] += 158632;
        result[3] += 7654004;
        result[4] += 2379483;
        result[5] += 32479946;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 0;
        result[1] += 38373068;
        result[2] += 0;
        result[3] += 528069;
        result[4] += 3080406;
        result[5] += 968127;
      } else {
        result[0] += 28291252;
        result[1] += 1275732;
        result[2] += 2426393;
        result[3] += 3326911;
        result[4] += 3677112;
        result[5] += 3952270;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 6607641;
        result[2] += 825955;
        result[3] += 825955;
        result[4] += 6607641;
        result[5] += 28082478;
      } else {
        result[0] += 1651910;
        result[1] += 1101273;
        result[2] += 12664647;
        result[3] += 17069741;
        result[4] += 825955;
        result[5] += 9636144;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 2174666;
        result[1] += 0;
        result[2] += 23921336;
        result[3] += 9786001;
        result[4] += 0;
        result[5] += 7067667;
      } else {
        result[0] += 377994;
        result[1] += 0;
        result[2] += 39831214;
        result[3] += 2598715;
        result[4] += 0;
        result[5] += 141748;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 1054904;
        result[1] += 904203;
        result[2] += 452101;
        result[3] += 0;
        result[4] += 39031457;
        result[5] += 1507006;
      } else {
        result[0] += 1918347;
        result[1] += 426299;
        result[2] += 426299;
        result[3] += 7104991;
        result[4] += 2380172;
        result[5] += 30693562;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 40674796;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2274876;
        result[5] += 0;
      } else {
        result[0] += 27052554;
        result[1] += 1098074;
        result[2] += 2420754;
        result[3] += 3818303;
        result[4] += 4766640;
        result[5] += 3793347;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2489836;
        result[3] += 16183934;
        result[4] += 2489836;
        result[5] += 21786065;
      } else {
        result[0] += 1145324;
        result[1] += 0;
        result[2] += 24910810;
        result[3] += 10307921;
        result[4] += 286331;
        result[5] += 6299285;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
        result[0] += 10151740;
        result[1] += 7028128;
        result[2] += 15618062;
        result[3] += 7028128;
        result[4] += 0;
        result[5] += 3123612;
      } else {
        result[0] += 446875;
        result[1] += 198611;
        result[2] += 39523629;
        result[3] += 2532292;
        result[4] += 0;
        result[5] += 248264;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 2427590;
        result[2] += 0;
        result[3] += 0;
        result[4] += 38654705;
        result[5] += 1867377;
      } else {
        result[0] += 1876276;
        result[1] += 341141;
        result[2] += 409369;
        result[3] += 6856937;
        result[4] += 3002042;
        result[5] += 30463906;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 431655;
        result[1] += 34892112;
        result[2] += 143885;
        result[3] += 935252;
        result[4] += 6258997;
        result[5] += 287770;
      } else {
        result[0] += 31014483;
        result[1] += 1474180;
        result[2] += 1927774;
        result[3] += 2636514;
        result[4] += 3118458;
        result[5] += 2778262;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bd0000))) ) ) {
        result[0] += 836681;
        result[1] += 278893;
        result[2] += 3625621;
        result[3] += 13108017;
        result[4] += 5298985;
        result[5] += 19801472;
      } else {
        result[0] += 0;
        result[1] += 1150437;
        result[2] += 23775711;
        result[3] += 14188731;
        result[4] += 0;
        result[5] += 3834792;
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 17895697;
        result[3] += 7158278;
        result[4] += 0;
        result[5] += 17895697;
      } else {
        result[0] += 697990;
        result[1] += 0;
        result[2] += 39227057;
        result[3] += 2466232;
        result[4] += 232663;
        result[5] += 325728;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 10111937;
        result[1] += 1876442;
        result[2] += 104246;
        result[3] += 0;
        result[4] += 27416902;
        result[5] += 3440143;
      } else {
        result[0] += 122016;
        result[1] += 528736;
        result[2] += 406720;
        result[3] += 3131746;
        result[4] += 4839972;
        result[5] += 33920480;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42620000))) ) ) {
        result[0] += 187144;
        result[1] += 41826805;
        result[2] += 0;
        result[3] += 93572;
        result[4] += 842150;
        result[5] += 0;
      } else {
        result[0] += 27835342;
        result[1] += 1248688;
        result[2] += 1925061;
        result[3] += 4162294;
        result[4] += 2861577;
        result[5] += 4916709;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1923119;
        result[3] += 3846239;
        result[4] += 5128319;
        result[5] += 32051994;
      } else {
        result[0] += 181222;
        result[1] += 906111;
        result[2] += 11779446;
        result[3] += 15222668;
        result[4] += 1812222;
        result[5] += 13048001;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 6482969;
        result[1] += 0;
        result[2] += 23500764;
        result[3] += 4051855;
        result[4] += 0;
        result[5] += 8914083;
      } else {
        result[0] += 241019;
        result[1] += 0;
        result[2] += 39864623;
        result[3] += 2795826;
        result[4] += 0;
        result[5] += 48203;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        result[0] += 6152250;
        result[1] += 1392962;
        result[2] += 0;
        result[3] += 696481;
        result[4] += 29600450;
        result[5] += 5107528;
      } else {
        result[0] += 184175;
        result[1] += 36835;
        result[2] += 73670;
        result[3] += 5930443;
        result[4] += 2467948;
        result[5] += 34256600;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 154217;
        result[1] += 35470106;
        result[2] += 77108;
        result[3] += 154217;
        result[4] += 6862694;
        result[5] += 231326;
      } else {
        result[0] += 30964373;
        result[1] += 1353633;
        result[2] += 1240830;
        result[3] += 3102077;
        result[4] += 3496887;
        result[5] += 2791869;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 1096587;
        result[1] += 0;
        result[2] += 15534988;
        result[3] += 17545398;
        result[4] += 0;
        result[5] += 8772699;
      } else {
        result[0] += 740511;
        result[1] += 0;
        result[2] += 39247114;
        result[3] += 2962046;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 6417767;
        result[1] += 0;
        result[2] += 28633115;
        result[3] += 3949395;
        result[4] += 0;
        result[5] += 3949395;
      } else {
        result[0] += 362226;
        result[1] += 0;
        result[2] += 40517583;
        result[3] += 2069863;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        result[0] += 0;
        result[1] += 1267367;
        result[2] += 0;
        result[3] += 281637;
        result[4] += 35627105;
        result[5] += 5773562;
      } else {
        result[0] += 1895910;
        result[1] += 36459;
        result[2] += 36459;
        result[3] += 7474263;
        result[4] += 1895910;
        result[5] += 31610667;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 25713135;
        result[1] += 2455616;
        result[2] += 3400084;
        result[3] += 3754259;
        result[4] += 5265407;
        result[5] += 2361169;
      } else {
        result[0] += 543666;
        result[1] += 42406006;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 433835;
        result[2] += 6507526;
        result[3] += 12147382;
        result[4] += 2169175;
        result[5] += 21691754;
      } else {
        result[0] += 780903;
        result[1] += 1171354;
        result[2] += 27331610;
        result[3] += 12884901;
        result[4] += 0;
        result[5] += 780903;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 19685266;
        result[1] += 5368709;
        result[2] += 12526987;
        result[3] += 1789569;
        result[4] += 3579139;
        result[5] += 0;
      } else {
        result[0] += 473129;
        result[1] += 157709;
        result[2] += 39532624;
        result[3] += 2365649;
        result[4] += 0;
        result[5] += 420559;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 7522259;
        result[1] += 1819901;
        result[2] += 0;
        result[3] += 0;
        result[4] += 29846382;
        result[5] += 3761129;
      } else {
        result[0] += 0;
        result[1] += 671088;
        result[2] += 710564;
        result[3] += 6947741;
        result[4] += 2250120;
        result[5] += 32370157;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 28060115;
        result[1] += 1794836;
        result[2] += 1289248;
        result[3] += 3134643;
        result[4] += 6218728;
        result[5] += 2452100;
      } else {
        result[0] += 315034;
        result[1] += 42634638;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
        result[0] += 0;
        result[1] += 8180890;
        result[2] += 2045222;
        result[3] += 5113056;
        result[4] += 0;
        result[5] += 27610504;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 10656685;
        result[3] += 23896810;
        result[4] += 0;
        result[5] += 8396176;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 5761541;
        result[1] += 1047552;
        result[2] += 19903506;
        result[3] += 2095105;
        result[4] += 6285317;
        result[5] += 7856647;
      } else {
        result[0] += 337190;
        result[1] += 0;
        result[2] += 38018258;
        result[3] += 3877693;
        result[4] += 84297;
        result[5] += 632232;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
        result[0] += 8810189;
        result[1] += 1431655;
        result[2] += 0;
        result[3] += 110127;
        result[4] += 28743242;
        result[5] += 3854457;
      } else {
        result[0] += 322122;
        result[1] += 536870;
        result[2] += 429496;
        result[3] += 6442450;
        result[4] += 3972844;
        result[5] += 31245887;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 28162003;
        result[1] += 2277039;
        result[2] += 1805927;
        result[3] += 3271608;
        result[4] += 4187658;
        result[5] += 3245435;
      } else {
        result[0] += 304607;
        result[1] += 41426634;
        result[2] += 0;
        result[3] += 507679;
        result[4] += 406143;
        result[5] += 304607;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 631612;
        result[1] += 0;
        result[2] += 5052902;
        result[3] += 23369674;
        result[4] += 1263225;
        result[5] += 12632256;
      } else {
        result[0] += 0;
        result[1] += 2367304;
        result[2] += 23673048;
        result[3] += 7778287;
        result[4] += 3043677;
        result[5] += 6087355;
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 583027;
        result[1] += 0;
        result[2] += 33232552;
        result[3] += 6024614;
        result[4] += 0;
        result[5] += 3109478;
      } else {
        result[0] += 1872805;
        result[1] += 0;
        result[2] += 39828330;
        result[3] += 1123683;
        result[4] += 62426;
        result[5] += 62426;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 7673674;
        result[1] += 572662;
        result[2] += 0;
        result[3] += 0;
        result[4] += 31038296;
        result[5] += 3665038;
      } else {
        result[0] += 179330;
        result[1] += 89665;
        result[2] += 0;
        result[3] += 3586611;
        result[4] += 3183117;
        result[5] += 35910947;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 433835;
        result[1] += 40867264;
        result[2] += 173534;
        result[3] += 780903;
        result[4] += 694136;
        result[5] += 0;
      } else {
        result[0] += 23621196;
        result[1] += 1573248;
        result[2] += 3101546;
        result[3] += 6517742;
        result[4] += 3438670;
        result[5] += 4697269;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 438261;
        result[2] += 9203501;
        result[3] += 14024383;
        result[4] += 876523;
        result[5] += 18407002;
      } else {
        result[0] += 4345103;
        result[1] += 1336954;
        result[2] += 26404857;
        result[3] += 7854609;
        result[4] += 501358;
        result[5] += 2506790;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42920000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 42949672;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 294579;
        result[1] += 0;
        result[2] += 40121710;
        result[3] += 2474466;
        result[4] += 0;
        result[5] += 58915;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 1859293;
        result[2] += 0;
        result[3] += 0;
        result[4] += 39417015;
        result[5] += 1673363;
      } else {
        result[0] += 949164;
        result[1] += 395485;
        result[2] += 435033;
        result[3] += 4666723;
        result[4] += 1779682;
        result[5] += 34723584;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42620000))) ) ) {
        result[0] += 86767;
        result[1] += 38871623;
        result[2] += 260301;
        result[3] += 86767;
        result[4] += 3470680;
        result[5] += 173534;
      } else {
        result[0] += 26018459;
        result[1] += 1085044;
        result[2] += 2870846;
        result[3] += 4656648;
        result[4] += 4385387;
        result[5] += 3933285;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1590728;
        result[3] += 0;
        result[4] += 9544371;
        result[5] += 31814572;
      } else {
        result[0] += 0;
        result[1] += 416987;
        result[2] += 16262497;
        result[3] += 20015381;
        result[4] += 416987;
        result[5] += 5837819;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 4772185;
        result[1] += 8749007;
        result[2] += 14316557;
        result[3] += 1590728;
        result[4] += 4772185;
        result[5] += 8749007;
      } else {
        result[0] += 323277;
        result[1] += 46182;
        result[2] += 39855449;
        result[3] += 2355304;
        result[4] += 0;
        result[5] += 369459;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
        result[0] += 222537;
        result[1] += 1335222;
        result[2] += 0;
        result[3] += 445074;
        result[4] += 38944003;
        result[5] += 2002834;
      } else {
        result[0] += 21318085;
        result[1] += 0;
        result[2] += 0;
        result[3] += 2194508;
        result[4] += 7210529;
        result[5] += 12226549;
      }
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 0;
        result[1] += 109845;
        result[2] += 0;
        result[3] += 1647685;
        result[4] += 3515062;
        result[5] += 37677078;
      } else {
        result[0] += 614821;
        result[1] += 966148;
        result[2] += 439158;
        result[3] += 17127170;
        result[4] += 2283622;
        result[5] += 21518752;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x424a0000))) ) ) {
        result[0] += 4062806;
        result[1] += 38306465;
        result[2] += 0;
        result[3] += 0;
        result[4] += 580400;
        result[5] += 0;
      } else {
        result[0] += 29807073;
        result[1] += 2233382;
        result[2] += 1861152;
        result[3] += 2777412;
        result[4] += 4466765;
        result[5] += 1803886;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 17598890;
        result[3] += 16551337;
        result[4] += 628531;
        result[5] += 8170913;
      } else {
        result[0] += 1285918;
        result[1] += 42863;
        result[2] += 37763135;
        result[3] += 2228925;
        result[4] += 557231;
        result[5] += 1071598;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 182764;
        result[2] += 182764;
        result[3] += 0;
        result[4] += 40939262;
        result[5] += 1644881;
      } else {
        result[0] += 2149216;
        result[1] += 831954;
        result[2] += 311983;
        result[3] += 6932957;
        result[4] += 2738518;
        result[5] += 29985042;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 41110286;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1839386;
        result[5] += 0;
      } else {
        result[0] += 26452766;
        result[1] += 1322638;
        result[2] += 1779549;
        result[3] += 3486955;
        result[4] += 5915800;
        result[5] += 3991962;
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 7692478;
        result[3] += 25000555;
        result[4] += 0;
        result[5] += 10256638;
      } else {
        result[0] += 1580969;
        result[1] += 0;
        result[2] += 27666967;
        result[3] += 11066786;
        result[4] += 263494;
        result[5] += 2371454;
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bd0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 21474836;
        result[3] += 10737418;
        result[4] += 0;
        result[5] += 10737418;
      } else {
        result[0] += 404708;
        result[1] += 0;
        result[2] += 39762594;
        result[3] += 2681192;
        result[4] += 0;
        result[5] += 101177;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 5390444;
        result[2] += 0;
        result[3] += 173885;
        result[4] += 35124833;
        result[5] += 2260509;
      } else {
        result[0] += 1716613;
        result[1] += 205993;
        result[2] += 720977;
        result[3] += 6282805;
        result[4] += 2815246;
        result[5] += 31208035;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 165191;
        result[1] += 36672413;
        result[2] += 0;
        result[3] += 495573;
        result[4] += 5533900;
        result[5] += 82595;
      } else {
        result[0] += 28012813;
        result[1] += 942858;
        result[2] += 2456393;
        result[3] += 3746620;
        result[4] += 4019553;
        result[5] += 3771432;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 2863311;
        result[1] += 4294967;
        result[2] += 7158278;
        result[3] += 1431655;
        result[4] += 0;
        result[5] += 27201459;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 9842633;
        result[3] += 27738330;
        result[4] += 0;
        result[5] += 5368709;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 405185;
        result[1] += 101296;
        result[2] += 32921329;
        result[3] += 7495933;
        result[4] += 101296;
        result[5] += 1924631;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 41754551;
        result[3] += 971036;
        result[4] += 0;
        result[5] += 224085;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 338186;
        result[1] += 169093;
        result[2] += 338186;
        result[3] += 169093;
        result[4] += 40751461;
        result[5] += 1183652;
      } else {
        result[0] += 1730200;
        result[1] += 237478;
        result[2] += 203552;
        result[3] += 6072663;
        result[4] += 2747964;
        result[5] += 31957813;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 243570;
        result[1] += 38240635;
        result[2] += 162380;
        result[3] += 893093;
        result[4] += 3328802;
        result[5] += 81190;
      } else {
        result[0] += 31155054;
        result[1] += 1697274;
        result[2] += 1121927;
        result[3] += 2934271;
        result[4] += 3969896;
        result[5] += 2071250;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bd0000))) ) ) {
        result[0] += 0;
        result[1] += 1571329;
        result[2] += 3928323;
        result[3] += 15713294;
        result[4] += 1047552;
        result[5] += 20689171;
      } else {
        result[0] += 429496;
        result[1] += 0;
        result[2] += 22763326;
        result[3] += 17609365;
        result[4] += 0;
        result[5] += 2147483;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 12375329;
        result[1] += 0;
        result[2] += 24750658;
        result[3] += 2183881;
        result[4] += 0;
        result[5] += 3639802;
      } else {
        result[0] += 491619;
        result[1] += 0;
        result[2] += 38972023;
        result[3] += 3217873;
        result[4] += 0;
        result[5] += 268156;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        result[0] += 313501;
        result[1] += 3918765;
        result[2] += 0;
        result[3] += 313501;
        result[4] += 33858136;
        result[5] += 4545768;
      } else {
        result[0] += 1918347;
        result[1] += 177624;
        result[2] += 710499;
        result[3] += 6252392;
        result[4] += 2557796;
        result[5] += 31333012;
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 27917287;
        result[1] += 2276850;
        result[2] += 1034931;
        result[3] += 2587329;
        result[4] += 6649437;
        result[5] += 2483836;
      } else {
        result[0] += 609215;
        result[1] += 41122027;
        result[2] += 203071;
        result[3] += 710751;
        result[4] += 203071;
        result[5] += 101535;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 0;
        result[1] += 704092;
        result[2] += 3520464;
        result[3] += 15490045;
        result[4] += 2464325;
        result[5] += 20770743;
      } else {
        result[0] += 1238932;
        result[1] += 1651910;
        result[2] += 21268347;
        result[3] += 12182839;
        result[4] += 825955;
        result[5] += 5781686;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 24542670;
        result[1] += 0;
        result[2] += 12271335;
        result[3] += 0;
        result[4] += 0;
        result[5] += 6135667;
      } else {
        result[0] += 234441;
        result[1] += 0;
        result[2] += 39620604;
        result[3] += 2719520;
        result[4] += 0;
        result[5] += 375106;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 160259;
        result[2] += 0;
        result[3] += 0;
        result[4] += 39263693;
        result[5] += 3525719;
      } else {
        result[0] += 1588114;
        result[1] += 176457;
        result[2] += 105874;
        result[3] += 6846537;
        result[4] += 2470400;
        result[5] += 31762288;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 0;
        result[1] += 41526909;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1422763;
        result[5] += 0;
      } else {
        result[0] += 28022985;
        result[1] += 1289005;
        result[2] += 2165529;
        result[3] += 3918577;
        result[4] += 4382619;
        result[5] += 3170954;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
        result[0] += 0;
        result[1] += 1034931;
        result[2] += 1552397;
        result[3] += 7761989;
        result[4] += 4139727;
        result[5] += 28460626;
      } else {
        result[0] += 245426;
        result[1] += 736280;
        result[2] += 14725602;
        result[3] += 17179869;
        result[4] += 490853;
        result[5] += 9571641;
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 21826882;
        result[1] += 2112278;
        result[2] += 14081859;
        result[3] += 2112278;
        result[4] += 2112278;
        result[5] += 704092;
      } else {
        result[0] += 688769;
        result[1] += 49197;
        result[2] += 38472673;
        result[3] += 3394647;
        result[4] += 0;
        result[5] += 344384;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_4/test_data.csv", "r");
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
