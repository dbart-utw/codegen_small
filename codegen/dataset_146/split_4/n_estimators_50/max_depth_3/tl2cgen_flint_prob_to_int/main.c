
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
  if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 10297874;
        result[1] += 251167;
        result[2] += 1004670;
        result[3] += 0;
        result[4] += 67312937;
        result[5] += 7032694;
      } else {
        result[0] += 0;
        result[1] += 363364;
        result[2] += 290691;
        result[3] += 14534576;
        result[4] += 4505718;
        result[5] += 66204995;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 643440;
        result[1] += 78178056;
        result[2] += 0;
        result[3] += 321720;
        result[4] += 6756128;
        result[5] += 0;
      } else {
        result[0] += 56609739;
        result[1] += 2575465;
        result[2] += 3888447;
        result[3] += 7726396;
        result[4] += 8685883;
        result[5] += 6413413;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 5259143;
        result[3] += 61356675;
        result[4] += 0;
        result[5] += 19283526;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 49731200;
        result[3] += 15070060;
        result[4] += 1507006;
        result[5] += 19591078;
      }
    } else {
      if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 71940702;
        result[3] += 12616466;
        result[4] += 0;
        result[5] += 1342177;
      } else {
        result[0] += 938058;
        result[1] += 0;
        result[2] += 83085170;
        result[3] += 1608100;
        result[4] += 0;
        result[5] += 268016;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 2267969;
        result[1] += 1417480;
        result[2] += 0;
        result[3] += 0;
        result[4] += 73425513;
        result[5] += 8788381;
      } else {
        result[0] += 3007876;
        result[1] += 559604;
        result[2] += 489654;
        result[3] += 13850220;
        result[4] += 3427579;
        result[5] += 64564410;
      }
    } else {
      if ( LIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 53315180;
        result[1] += 5086776;
        result[2] += 4654880;
        result[3] += 7054303;
        result[4] += 10221542;
        result[5] += 5566661;
      } else {
        result[0] += 921666;
        result[1] += 83871678;
        result[2] += 368666;
        result[3] += 184333;
        result[4] += 553000;
        result[5] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
      if ( LIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 2526451;
        result[1] += 3789677;
        result[2] += 15158708;
        result[3] += 29054190;
        result[4] += 0;
        result[5] += 35370318;
      } else {
        result[0] += 0;
        result[1] += 27331610;
        result[2] += 42949672;
        result[3] += 0;
        result[4] += 3904515;
        result[5] += 11713547;
      }
    } else {
      if ( UNLIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 926971;
        result[1] += 0;
        result[2] += 65814966;
        result[3] += 13595579;
        result[4] += 0;
        result[5] += 5561828;
      } else {
        result[0] += 512067;
        result[1] += 0;
        result[2] += 83082973;
        result[3] += 2304304;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
      if ( UNLIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        result[0] += 17409444;
        result[1] += 6122002;
        result[2] += 0;
        result[3] += 573937;
        result[4] += 52802270;
        result[5] += 8991690;
      } else {
        result[0] += 911584;
        result[1] += 70121;
        result[2] += 1472560;
        result[3] += 17249991;
        result[4] += 7292679;
        result[5] += 58902408;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 76298830;
        result[2] += 505290;
        result[3] += 673720;
        result[4] += 7074063;
        result[5] += 1347440;
      } else {
        result[0] += 58009947;
        result[1] += 3346727;
        result[2] += 3681400;
        result[3] += 5577879;
        result[4] += 7028128;
        result[5] += 8255261;
      }
    }
  } else {
    if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( LIKELY( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 1684300;
        result[1] += 0;
        result[2] += 20211610;
        result[3] += 48002575;
        result[4] += 1684300;
        result[5] += 14316557;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 67678272;
        result[3] += 15618062;
        result[4] += 0;
        result[5] += 2603010;
      }
    } else {
      if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 3014012;
        result[1] += 0;
        result[2] += 69322279;
        result[3] += 12056048;
        result[4] += 0;
        result[5] += 1507006;
      } else {
        result[0] += 730022;
        result[1] += 0;
        result[2] += 81154197;
        result[3] += 3406772;
        result[4] += 0;
        result[5] += 608352;
      }
    }
  }
  if ( LIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428f0000))) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 286331;
        result[1] += 4581298;
        result[2] += 0;
        result[3] += 0;
        result[4] += 71869119;
        result[5] += 9162596;
      } else {
        result[0] += 3190787;
        result[1] += 335872;
        result[2] += 83968;
        result[3] += 9152520;
        result[4] += 3022850;
        result[5] += 70113346;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 69728311;
        result[2] += 0;
        result[3] += 1038506;
        result[4] += 12758797;
        result[5] += 2373729;
      } else {
        result[0] += 55543937;
        result[1] += 2732483;
        result[2] += 2434394;
        result[3] += 9588533;
        result[4] += 5961782;
        result[5] += 9638214;
      }
    }
  } else {
    if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0;
        result[1] += 1342177;
        result[2] += 5368709;
        result[3] += 6710886;
        result[4] += 12079595;
        result[5] += 60397977;
      } else {
        result[0] += 0;
        result[1] += 7469508;
        result[2] += 15872705;
        result[3] += 46684427;
        result[4] += 0;
        result[5] += 15872705;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 1547735;
        result[1] += 773867;
        result[2] += 43336606;
        result[3] += 23989907;
        result[4] += 1547735;
        result[5] += 14703491;
      } else {
        result[0] += 1666151;
        result[1] += 0;
        result[2] += 78123974;
        result[3] += 5738964;
        result[4] += 0;
        result[5] += 370255;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
      if ( LIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x423a0000))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 67043391;
        result[2] += 0;
        result[3] += 0;
        result[4] += 18855953;
        result[5] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
        result[0] += 2324745;
        result[1] += 697423;
        result[2] += 871779;
        result[3] += 11449371;
        result[4] += 16854404;
        result[5] += 53701620;
      } else {
        result[0] += 55044695;
        result[1] += 2320269;
        result[2] += 5973460;
        result[3] += 6565869;
        result[4] += 9676018;
        result[5] += 6319032;
      }
    }
  } else {
    if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42be0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 2684354;
        result[4] += 0;
        result[5] += 83214991;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 38177487;
        result[4] += 6362914;
        result[5] += 41358944;
      }
    } else {
      if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 2877011;
        result[1] += 6987028;
        result[2] += 47265190;
        result[3] += 16029064;
        result[4] += 1233004;
        result[5] += 11508046;
      } else {
        result[0] += 895821;
        result[1] += 298607;
        result[2] += 78732772;
        result[3] += 5673537;
        result[4] += 0;
        result[5] += 298607;
      }
    }
  }
  if ( LIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
      if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 4238454;
        result[2] += 0;
        result[3] += 2825636;
        result[4] += 74031673;
        result[5] += 4803581;
      } else {
        result[0] += 6828818;
        result[1] += 419313;
        result[2] += 718822;
        result[3] += 13477930;
        result[4] += 6169897;
        result[5] += 58284563;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42560000))) ) ) {
        result[0] += 172488;
        result[1] += 84519436;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1207420;
        result[5] += 0;
      } else {
        result[0] += 58318511;
        result[1] += 2547627;
        result[2] += 6479834;
        result[3] += 4596805;
        result[4] += 9248994;
        result[5] += 4707572;
      }
    }
  } else {
    if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
      if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4294967;
        result[3] += 19327352;
        result[4] += 0;
        result[5] += 62277025;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 53396890;
        result[3] += 25537643;
        result[4] += 0;
        result[5] += 6964811;
      }
    } else {
      if ( LIKELY( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42db0000))) ) ) {
        result[0] += 746950;
        result[1] += 0;
        result[2] += 81204226;
        result[3] += 2987803;
        result[4] += 426829;
        result[5] += 533536;
      } else {
        result[0] += 0;
        result[1] += 57266230;
        result[2] += 0;
        result[3] += 28633115;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( LIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( UNLIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 706990;
        result[1] += 4241943;
        result[2] += 0;
        result[3] += 353495;
        result[4] += 77061964;
        result[5] += 3534952;
      } else {
        result[0] += 4281375;
        result[1] += 951416;
        result[2] += 679583;
        result[3] += 11077209;
        result[4] += 4485250;
        result[5] += 64424509;
      }
    } else {
      if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 307332;
        result[1] += 68996075;
        result[2] += 921996;
        result[3] += 307332;
        result[4] += 14444612;
        result[5] += 921996;
      } else {
        result[0] += 62872451;
        result[1] += 2426854;
        result[2] += 2426854;
        result[3] += 4966585;
        result[4] += 9086593;
        result[5] += 4120008;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ac0000))) ) ) {
        result[0] += 2684354;
        result[1] += 5368709;
        result[2] += 8947848;
        result[3] += 12526987;
        result[4] += 9842633;
        result[5] += 46528812;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 31675383;
        result[3] += 39728447;
        result[4] += 1073741;
        result[5] += 13421772;
      }
    } else {
      if ( UNLIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 1491308;
        result[1] += 0;
        result[2] += 70091480;
        result[3] += 13720034;
        result[4] += 0;
        result[5] += 596523;
      } else {
        result[0] += 2599259;
        result[1] += 0;
        result[2] += 80948374;
        result[3] += 2227936;
        result[4] += 0;
        result[5] += 123774;
      }
    }
  }
  if ( LIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423c0000))) ) ) {
      if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42680000))) ) ) {
        result[0] += 215286;
        result[1] += 85684059;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 59822758;
        result[2] += 0;
        result[3] += 9203501;
        result[4] += 15339168;
        result[5] += 1533916;
      }
    } else {
      if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        result[0] += 1268555;
        result[1] += 14135335;
        result[2] += 181222;
        result[3] += 2355889;
        result[4] += 61253120;
        result[5] += 6705223;
      } else {
        result[0] += 21779985;
        result[1] += 991733;
        result[2] += 2975199;
        result[3] += 13464684;
        result[4] += 7056562;
        result[5] += 39631181;
      }
    }
  } else {
    if ( UNLIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42970000))) ) ) {
      if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 9544371;
        result[1] += 0;
        result[2] += 50903316;
        result[3] += 25451658;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 83987436;
        result[1] += 0;
        result[2] += 1502214;
        result[3] += 273129;
        result[4] += 0;
        result[5] += 136564;
      }
    } else {
      if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 39807013;
        result[1] += 0;
        result[2] += 37711907;
        result[3] += 8380423;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 271833;
        result[1] += 0;
        result[2] += 78378622;
        result[3] += 6161556;
        result[4] += 0;
        result[5] += 1087333;
      }
    }
  }
  if ( UNLIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
    if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42760000))) ) ) {
      if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 831283;
        result[1] += 6650271;
        result[2] += 0;
        result[3] += 554189;
        result[4] += 69827855;
        result[5] += 8035745;
      } else {
        result[0] += 71929556;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 9214116;
        result[5] += 4755673;
      }
    } else {
      if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 470681;
        result[3] += 2353406;
        result[4] += 4589143;
        result[5] += 78486114;
      } else {
        result[0] += 2999977;
        result[1] += 2599980;
        result[2] += 2999977;
        result[3] += 32299754;
        result[4] += 11599911;
        result[5] += 33399745;
      }
    }
  } else {
    if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42870000))) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426c0000))) ) ) {
        result[0] += 0;
        result[1] += 85707177;
        result[2] += 0;
        result[3] += 0;
        result[4] += 192168;
        result[5] += 0;
      } else {
        result[0] += 5259143;
        result[1] += 40320101;
        result[2] += 0;
        result[3] += 3506095;
        result[4] += 36814005;
        result[5] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 70813376;
        result[1] += 1896050;
        result[2] += 4369160;
        result[3] += 2473109;
        result[4] += 4451597;
        result[5] += 1896050;
      } else {
        result[0] += 2342709;
        result[1] += 234270;
        result[2] += 71921179;
        result[3] += 8121392;
        result[4] += 312361;
        result[5] += 2967431;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 0;
        result[1] += 14316557;
        result[2] += 0;
        result[3] += 0;
        result[4] += 71582788;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 85013785;
        result[2] += 0;
        result[3] += 177112;
        result[4] += 708448;
        result[5] += 0;
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 7754157;
        result[1] += 1346530;
        result[2] += 464320;
        result[3] += 12768821;
        result[4] += 15694042;
        result[5] += 47871473;
      } else {
        result[0] += 55867090;
        result[1] += 3428879;
        result[2] += 6503047;
        result[3] += 4847726;
        result[4] += 9991045;
        result[5] += 5261556;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 0;
        result[1] += 4462303;
        result[2] += 11155759;
        result[3] += 18964790;
        result[4] += 0;
        result[5] += 51316492;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 58567735;
        result[3] += 17570320;
        result[4] += 0;
        result[5] += 9761289;
      }
    } else {
      if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 421075;
        result[1] += 0;
        result[2] += 65687735;
        result[3] += 17264084;
        result[4] += 0;
        result[5] += 2526451;
      } else {
        result[0] += 1024135;
        result[1] += 0;
        result[2] += 81546770;
        result[3] += 3200422;
        result[4] += 0;
        result[5] += 128016;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 1115575;
        result[1] += 2603010;
        result[2] += 0;
        result[3] += 0;
        result[4] += 74743586;
        result[5] += 7437172;
      } else {
        result[0] += 3212495;
        result[1] += 349184;
        result[2] += 139673;
        result[3] += 11313572;
        result[4] += 5796459;
        result[5] += 65087959;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 0;
        result[1] += 79370995;
        result[2] += 0;
        result[3] += 515396;
        result[4] += 6012954;
        result[5] += 0;
      } else {
        result[0] += 56196309;
        result[1] += 2700275;
        result[2] += 3311659;
        result[3] += 6419524;
        result[4] += 10750155;
        result[5] += 6521421;
      }
    }
  } else {
    if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 10105805;
        result[3] += 48002575;
        result[4] += 0;
        result[5] += 27790964;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 55834574;
        result[3] += 4294967;
        result[4] += 0;
        result[5] += 25769803;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bd0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 47354767;
        result[3] += 23126746;
        result[4] += 0;
        result[5] += 15417831;
      } else {
        result[0] += 1579354;
        result[1] += 0;
        result[2] += 77388379;
        result[3] += 6141934;
        result[4] += 87741;
        result[5] += 701935;
      }
    }
  }
  if ( LIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
      if ( LIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 0;
        result[1] += 85501663;
        result[2] += 0;
        result[3] += 0;
        result[4] += 397682;
        result[5] += 0;
      } else {
        result[0] += 14316557;
        result[1] += 14316557;
        result[2] += 0;
        result[3] += 57266230;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
        result[0] += 3269717;
        result[1] += 886702;
        result[2] += 498770;
        result[3] += 12912611;
        result[4] += 19895396;
        result[5] += 48436147;
      } else {
        result[0] += 53296966;
        result[1] += 3601146;
        result[2] += 6386032;
        result[3] += 6193971;
        result[4] += 7634430;
        result[5] += 8786797;
      }
    }
  } else {
    if ( UNLIKELY( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
      if ( LIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 0;
        result[1] += 2887372;
        result[2] += 23098983;
        result[3] += 42588751;
        result[4] += 5052902;
        result[5] += 12271335;
      } else {
        result[0] += 1997659;
        result[1] += 0;
        result[2] += 60928605;
        result[3] += 3995318;
        result[4] += 2996488;
        result[5] += 15981273;
      }
    } else {
      if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 68139565;
        result[3] += 13772890;
        result[4] += 0;
        result[5] += 3986889;
      } else {
        result[0] += 283029;
        result[1] += 0;
        result[2] += 82786025;
        result[3] += 2830291;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( UNLIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
      if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 15807143;
        result[1] += 831954;
        result[2] += 0;
        result[3] += 0;
        result[4] += 62396619;
        result[5] += 6863628;
      } else {
        result[0] += 0;
        result[1] += 346368;
        result[2] += 86592;
        result[3] += 6148037;
        result[4] += 7706695;
        result[5] += 71611652;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 165191;
        result[1] += 79291703;
        result[2] += 660764;
        result[3] += 165191;
        result[4] += 5286113;
        result[5] += 330382;
      } else {
        result[0] += 53668610;
        result[1] += 3154078;
        result[2] += 2513405;
        result[3] += 13109137;
        result[4] += 4731117;
        result[5] += 8722997;
      }
    }
  } else {
    if ( UNLIKELY( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
      if ( LIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 1115575;
        result[1] += 0;
        result[2] += 20080366;
        result[3] += 46296400;
        result[4] += 0;
        result[5] += 18407002;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 69450534;
        result[3] += 5482936;
        result[4] += 913822;
        result[5] += 10052051;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 44335146;
        result[1] += 0;
        result[2] += 36022306;
        result[3] += 0;
        result[4] += 0;
        result[5] += 5541893;
      } else {
        result[0] += 879515;
        result[1] += 0;
        result[2] += 79351841;
        result[3] += 4788473;
        result[4] += 0;
        result[5] += 879515;
      }
    }
  }
  if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
      if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
        result[0] += 0;
        result[1] += 2863311;
        result[2] += 0;
        result[3] += 2863311;
        result[4] += 80172722;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 84993234;
        result[2] += 0;
        result[3] += 0;
        result[4] += 906111;
        result[5] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
        result[0] += 2499101;
        result[1] += 0;
        result[2] += 116237;
        result[3] += 11914320;
        result[4] += 15866387;
        result[5] += 55503298;
      } else {
        result[0] += 52558100;
        result[1] += 4179666;
        result[2] += 7062194;
        result[3] += 7110236;
        result[4] += 9320175;
        result[5] += 5668972;
      }
    }
  } else {
    if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
      if ( LIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 588351;
        result[1] += 5295165;
        result[2] += 13532088;
        result[3] += 31770990;
        result[4] += 8236923;
        result[5] += 26475825;
      } else {
        result[0] += 5883516;
        result[1] += 8236923;
        result[2] += 65895388;
        result[3] += 0;
        result[4] += 3530110;
        result[5] += 2353406;
      }
    } else {
      if ( UNLIKELY( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42be0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 15618062;
        result[3] += 54663220;
        result[4] += 0;
        result[5] += 15618062;
      } else {
        result[0] += 1143938;
        result[1] += 0;
        result[2] += 78515745;
        result[3] += 6031673;
        result[4] += 0;
        result[5] += 207988;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 6528350;
        result[2] += 0;
        result[3] += 0;
        result[4] += 73529840;
        result[5] += 5841155;
      } else {
        result[0] += 2932450;
        result[1] += 1215894;
        result[2] += 286092;
        result[3] += 13589405;
        result[4] += 3719205;
        result[5] += 64156297;
      }
    } else {
      if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42480000))) ) ) {
        result[0] += 534643;
        result[1] += 81265771;
        result[2] += 178214;
        result[3] += 0;
        result[4] += 3207859;
        result[5] += 712857;
      } else {
        result[0] += 50548461;
        result[1] += 3964585;
        result[2] += 3539808;
        result[3] += 7976367;
        result[4] += 11138596;
        result[5] += 8731526;
      }
    }
  } else {
    if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
      if ( UNLIKELY( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 709911;
        result[1] += 0;
        result[2] += 23427094;
        result[3] += 46854188;
        result[4] += 0;
        result[5] += 14908150;
      } else {
        result[0] += 5458486;
        result[1] += 0;
        result[2] += 67512863;
        result[3] += 8905952;
        result[4] += 0;
        result[5] += 4022042;
      }
    } else {
      if ( UNLIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 75743758;
        result[3] += 9309288;
        result[4] += 0;
        result[5] += 846298;
      } else {
        result[0] += 190887;
        result[1] += 0;
        result[2] += 84944908;
        result[3] += 763549;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428d0000))) ) ) {
      if ( UNLIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        result[0] += 3374617;
        result[1] += 1840700;
        result[2] += 1227133;
        result[3] += 1840700;
        result[4] += 66571993;
        result[5] += 11044201;
      } else {
        result[0] += 0;
        result[1] += 1187157;
        result[2] += 339187;
        result[3] += 8649292;
        result[4] += 6953352;
        result[5] += 68770354;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 84969699;
        result[2] += 0;
        result[3] += 0;
        result[4] += 929646;
        result[5] += 0;
      } else {
        result[0] += 49303929;
        result[1] += 2635210;
        result[2] += 3655291;
        result[3] += 9435751;
        result[4] += 10115806;
        result[5] += 10753357;
      }
    }
  } else {
    if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( UNLIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 29036398;
        result[3] += 38715198;
        result[4] += 0;
        result[5] += 18147749;
      } else {
        result[0] += 1120426;
        result[1] += 0;
        result[2] += 64237771;
        result[3] += 19047246;
        result[4] += 0;
        result[5] += 1493901;
      }
    } else {
      if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 85899345;
      } else {
        result[0] += 574962;
        result[1] += 0;
        result[2] += 82909542;
        result[3] += 1839878;
        result[4] += 0;
        result[5] += 574962;
      }
    }
  }
  if ( LIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( UNLIKELY( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        result[0] += 1805691;
        result[1] += 5932987;
        result[2] += 773867;
        result[3] += 1031823;
        result[4] += 67326514;
        result[5] += 9028459;
      } else {
        result[0] += 2712610;
        result[1] += 411001;
        result[2] += 493201;
        result[3] += 12658850;
        result[4] += 4521018;
        result[5] += 65102662;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42480000))) ) ) {
        result[0] += 361681;
        result[1] += 81016646;
        result[2] += 0;
        result[3] += 542522;
        result[4] += 2712610;
        result[5] += 1265885;
      } else {
        result[0] += 55440010;
        result[1] += 3468142;
        result[2] += 3066038;
        result[3] += 6333129;
        result[4] += 8695486;
        result[5] += 8896538;
      }
    }
  } else {
    if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bd0000))) ) ) {
      if ( LIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 523776;
        result[1] += 3142658;
        result[2] += 7856647;
        result[3] += 31950366;
        result[4] += 7332870;
        result[5] += 35093025;
      } else {
        result[0] += 8380423;
        result[1] += 0;
        result[2] += 64948285;
        result[3] += 6285317;
        result[4] += 0;
        result[5] += 6285317;
      }
    } else {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 11776523;
        result[1] += 1385473;
        result[2] += 42949672;
        result[3] += 18703889;
        result[4] += 692736;
        result[5] += 10391049;
      } else {
        result[0] += 183741;
        result[1] += 275612;
        result[2] += 78733411;
        result[3] += 5787870;
        result[4] += 0;
        result[5] += 918709;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 961559;
        result[1] += 6410398;
        result[2] += 0;
        result[3] += 0;
        result[4] += 75001667;
        result[5] += 3525719;
      } else {
        result[0] += 3767515;
        result[1] += 959003;
        result[2] += 1027504;
        result[3] += 13905555;
        result[4] += 4041516;
        result[5] += 62198250;
      }
    } else {
      if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        result[0] += 878017;
        result[1] += 69363355;
        result[2] += 0;
        result[3] += 2195042;
        result[4] += 12438576;
        result[5] += 1024353;
      } else {
        result[0] += 56322281;
        result[1] += 1940339;
        result[2] += 5296601;
        result[3] += 8443098;
        result[4] += 7604032;
        result[5] += 6292992;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a50000))) ) ) {
      if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 3181457;
        result[1] += 6362914;
        result[2] += 14316557;
        result[3] += 20679472;
        result[4] += 0;
        result[5] += 41358944;
      } else {
        result[0] += 3817748;
        result[1] += 0;
        result[2] += 58538813;
        result[3] += 17179869;
        result[4] += 0;
        result[5] += 6362914;
      }
    } else {
      if ( UNLIKELY( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 34359738;
        result[3] += 40086361;
        result[4] += 0;
        result[5] += 11453246;
      } else {
        result[0] += 392682;
        result[1] += 392682;
        result[2] += 80107275;
        result[3] += 3926827;
        result[4] += 0;
        result[5] += 1079877;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 378411;
        result[1] += 2270467;
        result[2] += 0;
        result[3] += 0;
        result[4] += 79844766;
        result[5] += 3405700;
      } else {
        result[0] += 3617561;
        result[1] += 1418651;
        result[2] += 354662;
        result[3] += 13689986;
        result[4] += 4043156;
        result[5] += 62775327;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 82058318;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3841027;
        result[5] += 0;
      } else {
        result[0] += 52609133;
        result[1] += 2746081;
        result[2] += 4335917;
        result[3] += 8527304;
        result[4] += 9587195;
        result[5] += 8093712;
      }
    }
  } else {
    if ( UNLIKELY( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
      if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 1533916;
        result[1] += 0;
        result[2] += 28377462;
        result[3] += 42949672;
        result[4] += 1533916;
        result[5] += 11504376;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 66810602;
        result[3] += 13786314;
        result[4] += 0;
        result[5] += 5302428;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 31814572;
        result[1] += 0;
        result[2] += 50903316;
        result[3] += 0;
        result[4] += 0;
        result[5] += 3181457;
      } else {
        result[0] += 673343;
        result[1] += 0;
        result[2] += 79839257;
        result[3] += 4521018;
        result[4] += 0;
        result[5] += 865726;
      }
    }
  }
  if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
      if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 1003497;
        result[1] += 7225178;
        result[2] += 1003497;
        result[3] += 200699;
        result[4] += 70445491;
        result[5] += 6020982;
      } else {
        result[0] += 0;
        result[1] += 84927633;
        result[2] += 0;
        result[3] += 0;
        result[4] += 971712;
        result[5] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 6208566;
        result[1] += 0;
        result[2] += 0;
        result[3] += 6208566;
        result[4] += 9270325;
        result[5] += 64211887;
      } else {
        result[0] += 50440621;
        result[1] += 2207364;
        result[2] += 5400997;
        result[3] += 13338116;
        result[4] += 4602589;
        result[5] += 9909656;
      }
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( LIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42d20000))) ) ) {
        result[0] += 1753047;
        result[1] += 7012191;
        result[2] += 24980932;
        result[3] += 30240075;
        result[4] += 1753047;
        result[5] += 20160050;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 76354974;
        result[3] += 0;
        result[4] += 9544371;
        result[5] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b20000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 85899345;
      } else {
        result[0] += 1071307;
        result[1] += 0;
        result[2] += 79179329;
        result[3] += 5259143;
        result[4] += 0;
        result[5] += 389566;
      }
    }
  }
  if ( LIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
      if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 2100228;
        result[1] += 7770845;
        result[2] += 1260137;
        result[3] += 420045;
        result[4] += 69307540;
        result[5] += 5040548;
      } else {
        result[0] += 0;
        result[1] += 84040052;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1859293;
        result[5] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
        result[0] += 4125874;
        result[1] += 676372;
        result[2] += 1420382;
        result[3] += 13189269;
        result[4] += 4261148;
        result[5] += 62226297;
      } else {
        result[0] += 56902470;
        result[1] += 1974697;
        result[2] += 6079990;
        result[3] += 8314516;
        result[4] += 6963407;
        result[5] += 5664264;
      }
    }
  } else {
    if ( UNLIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( UNLIKELY( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 10737418;
        result[4] += 0;
        result[5] += 75161927;
      } else {
        result[0] += 867670;
        result[1] += 0;
        result[2] += 33839136;
        result[3] += 33839136;
        result[4] += 3470680;
        result[5] += 13882722;
      }
    } else {
      if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 397682;
        result[1] += 397682;
        result[2] += 68401330;
        result[3] += 12725829;
        result[4] += 795364;
        result[5] += 3181457;
      } else {
        result[0] += 490153;
        result[1] += 0;
        result[2] += 81610505;
        result[3] += 3798687;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 976128;
        result[1] += 2603010;
        result[2] += 976128;
        result[3] += 650752;
        result[4] += 75812680;
        result[5] += 4880644;
      } else {
        result[0] += 3478568;
        result[1] += 1135859;
        result[2] += 1277841;
        result[3] += 11997511;
        result[4] += 5182357;
        result[5] += 62827207;
      }
    } else {
      if ( LIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 58469302;
        result[1] += 4846661;
        result[2] += 4021698;
        result[3] += 4640420;
        result[4] += 9074600;
        result[5] += 4846661;
      } else {
        result[0] += 1042467;
        result[1] += 84856878;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 1771120;
        result[1] += 1771120;
        result[2] += 9741162;
        result[3] += 5313361;
        result[4] += 13283404;
        result[5] += 54019176;
      } else {
        result[0] += 5368709;
        result[1] += 0;
        result[2] += 19173961;
        result[3] += 48318382;
        result[4] += 3834792;
        result[5] += 9203501;
      }
    } else {
      if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d60000))) ) ) {
        result[0] += 205993;
        result[1] += 0;
        result[2] += 61592096;
        result[3] += 19569395;
        result[4] += 411987;
        result[5] += 4119872;
      } else {
        result[0] += 662803;
        result[1] += 0;
        result[2] += 81259720;
        result[3] += 3048896;
        result[4] += 0;
        result[5] += 927925;
      }
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( UNLIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 14359293;
        result[1] += 1025663;
        result[2] += 0;
        result[3] += 1538495;
        result[4] += 62821909;
        result[5] += 6153982;
      } else {
        result[0] += 136891;
        result[1] += 136891;
        result[2] += 136891;
        result[3] += 13004681;
        result[4] += 6707678;
        result[5] += 65776311;
      }
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 948116;
        result[1] += 83244619;
        result[2] += 0;
        result[3] += 189623;
        result[4] += 1516986;
        result[5] += 0;
      } else {
        result[0] += 57766372;
        result[1] += 3911822;
        result[2] += 4876382;
        result[3] += 5948114;
        result[4] += 9056138;
        result[5] += 4340515;
      }
    }
  } else {
    if ( UNLIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
      if ( UNLIKELY( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 3579139;
        result[1] += 1789569;
        result[2] += 24159191;
        result[3] += 35344001;
        result[4] += 5816101;
        result[5] += 15211342;
      } else {
        result[0] += 4622386;
        result[1] += 3851988;
        result[2] += 63557811;
        result[3] += 7703977;
        result[4] += 0;
        result[5] += 6163181;
      }
    } else {
      if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 7516192;
        result[1] += 1073741;
        result[2] += 52613349;
        result[3] += 13958643;
        result[4] += 2147483;
        result[5] += 8589934;
      } else {
        result[0] += 376201;
        result[1] += 0;
        result[2] += 81886529;
        result[3] += 3636614;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429f0000))) ) ) {
    if ( UNLIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 1335222;
        result[2] += 445074;
        result[3] += 0;
        result[4] += 77442933;
        result[5] += 6676114;
      } else {
        result[0] += 2637853;
        result[1] += 2299667;
        result[2] += 2232030;
        result[3] += 12512896;
        result[4] += 4802246;
        result[5] += 61414650;
      }
    } else {
      if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 52423519;
        result[1] += 4983760;
        result[2] += 3902378;
        result[3] += 6864425;
        result[4] += 10813820;
        result[5] += 6911441;
      } else {
        result[0] += 0;
        result[1] += 85458836;
        result[2] += 220254;
        result[3] += 0;
        result[4] += 220254;
        result[5] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
      if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42bd0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 35480164;
        result[4] += 6535819;
        result[5] += 43883361;
      } else {
        result[0] += 709911;
        result[1] += 0;
        result[2] += 49693836;
        result[3] += 15618062;
        result[4] += 4969383;
        result[5] += 14908150;
      }
    } else {
      if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 613566;
        result[1] += 0;
        result[2] += 57675275;
        result[3] += 19634136;
        result[4] += 613566;
        result[5] += 7362801;
      } else {
        result[0] += 541609;
        result[1] += 0;
        result[2] += 80158279;
        result[3] += 4549523;
        result[4] += 0;
        result[5] += 649931;
      }
    }
  }
  if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( UNLIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        result[0] += 11107674;
        result[1] += 1727860;
        result[2] += 0;
        result[3] += 2468372;
        result[4] += 59981439;
        result[5] += 10613999;
      } else {
        result[0] += 546135;
        result[1] += 780193;
        result[2] += 0;
        result[3] += 11858946;
        result[4] += 4603143;
        result[5] += 68110925;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 460175;
        result[1] += 71787310;
        result[2] += 0;
        result[3] += 1380525;
        result[4] += 11657768;
        result[5] += 613566;
      } else {
        result[0] += 59415490;
        result[1] += 2131497;
        result[2] += 4369569;
        result[3] += 7406953;
        result[4] += 6767504;
        result[5] += 5808330;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
        result[0] += 2831846;
        result[1] += 943948;
        result[2] += 2831846;
        result[3] += 8495539;
        result[4] += 16047130;
        result[5] += 54749033;
      } else {
        result[0] += 0;
        result[1] += 1472560;
        result[2] += 26506083;
        result[3] += 37795712;
        result[4] += 1963413;
        result[5] += 18161575;
      }
    } else {
      if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 565127;
        result[1] += 0;
        result[2] += 59903491;
        result[3] += 22039963;
        result[4] += 1695381;
        result[5] += 1695381;
      } else {
        result[0] += 873182;
        result[1] += 0;
        result[2] += 81424284;
        result[3] += 3383582;
        result[4] += 0;
        result[5] += 218295;
      }
    }
  }
  if ( LIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
    if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c10000))) ) ) {
      if ( UNLIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        result[0] += 39957901;
        result[1] += 6693455;
        result[2] += 1014159;
        result[3] += 1419823;
        result[4] += 31844621;
        result[5] += 4969383;
      } else {
        result[0] += 6909884;
        result[1] += 1038740;
        result[2] += 2935571;
        result[3] += 17071478;
        result[4] += 7993787;
        result[5] += 49949882;
      }
    } else {
      if ( LIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
        result[0] += 0;
        result[1] += 85521766;
        result[2] += 0;
        result[3] += 0;
        result[4] += 377579;
        result[5] += 0;
      } else {
        result[0] += 8312839;
        result[1] += 47106092;
        result[2] += 2770946;
        result[3] += 0;
        result[4] += 27709466;
        result[5] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429b0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 85899345;
      } else {
        result[0] += 85133754;
        result[1] += 0;
        result[2] += 0;
        result[3] += 306236;
        result[4] += 459354;
        result[5] += 0;
      }
    } else {
      if ( LIKELY( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 1487055;
        result[1] += 0;
        result[2] += 76277219;
        result[3] += 6560540;
        result[4] += 0;
        result[5] += 1574529;
      } else {
        result[0] += 37347541;
        result[1] += 0;
        result[2] += 48551804;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 21829792;
        result[1] += 2662169;
        result[2] += 0;
        result[3] += 1952257;
        result[4] += 53953308;
        result[5] += 5501817;
      } else {
        result[0] += 1369520;
        result[1] += 456506;
        result[2] += 152168;
        result[3] += 10956161;
        result[4] += 7988867;
        result[5] += 64976121;
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 54466146;
        result[1] += 5311126;
        result[2] += 5148541;
        result[3] += 8454446;
        result[4] += 6828591;
        result[5] += 5690492;
      } else {
        result[0] += 1632291;
        result[1] += 83654944;
        result[2] += 0;
        result[3] += 0;
        result[4] += 408072;
        result[5] += 204036;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 3329432;
        result[1] += 665886;
        result[2] += 9988296;
        result[3] += 29299001;
        result[4] += 6658864;
        result[5] += 35957865;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 49579488;
        result[3] += 29978295;
        result[4] += 0;
        result[5] += 6341562;
      }
    } else {
      if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 5206020;
        result[2] += 26030104;
        result[3] += 26030104;
        result[4] += 0;
        result[5] += 28633115;
      } else {
        result[0] += 2588484;
        result[1] += 383479;
        result[2] += 78517370;
        result[3] += 3930662;
        result[4] += 95869;
        result[5] += 383479;
      }
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b70000))) ) ) {
      if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 2982616;
        result[2] += 0;
        result[3] += 1491308;
        result[4] += 78144543;
        result[5] += 3280877;
      } else {
        result[0] += 8091967;
        result[1] += 311229;
        result[2] += 248983;
        result[3] += 9025655;
        result[4] += 8652180;
        result[5] += 59569329;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 167772;
        result[1] += 79356231;
        result[2] += 0;
        result[3] += 0;
        result[4] += 6375342;
        result[5] += 0;
      } else {
        result[0] += 59276928;
        result[1] += 1856029;
        result[2] += 3422053;
        result[3] += 9222144;
        result[4] += 5684089;
        result[5] += 6438100;
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( LIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 2064888;
        result[1] += 6194664;
        result[2] += 13215283;
        result[3] += 36342030;
        result[4] += 4542753;
        result[5] += 23539724;
      } else {
        result[0] += 11083786;
        result[1] += 0;
        result[2] += 63177583;
        result[3] += 10529597;
        result[4] += 0;
        result[5] += 1108378;
      }
    } else {
      if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 71811853;
        result[3] += 11682311;
        result[4] += 0;
        result[5] += 2405181;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 83253895;
        result[3] += 2645450;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 496528;
        result[1] += 6951392;
        result[2] += 0;
        result[3] += 0;
        result[4] += 74975729;
        result[5] += 3475696;
      } else {
        result[0] += 7570153;
        result[1] += 437942;
        result[2] += 312816;
        result[3] += 14452111;
        result[4] += 5568129;
        result[5] += 57558192;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 338186;
        result[1] += 76599219;
        result[2] += 0;
        result[3] += 845466;
        result[4] += 7609194;
        result[5] += 507279;
      } else {
        result[0] += 62731472;
        result[1] += 1960358;
        result[2] += 2554406;
        result[3] += 5405837;
        result[4] += 5999885;
        result[5] += 7247386;
      }
    }
  } else {
    if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c10000))) ) ) {
      if ( LIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 20894435;
        result[3] += 45658210;
        result[4] += 0;
        result[5] += 19346699;
      } else {
        result[0] += 3303820;
        result[1] += 0;
        result[2] += 62111834;
        result[3] += 15858340;
        result[4] += 0;
        result[5] += 4625349;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 9286415;
        result[1] += 0;
        result[2] += 55718494;
        result[3] += 9286415;
        result[4] += 2321603;
        result[5] += 9286415;
      } else {
        result[0] += 512525;
        result[1] += 0;
        result[2] += 81081602;
        result[3] += 4305217;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 2474466;
        result[2] += 0;
        result[3] += 706990;
        result[4] += 79182936;
        result[5] += 3534952;
      } else {
        result[0] += 3606461;
        result[1] += 1639300;
        result[2] += 131144;
        result[3] += 14097984;
        result[4] += 3868749;
        result[5] += 62555706;
      }
    } else {
      if ( LIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 53066707;
        result[1] += 4676742;
        result[2] += 4485854;
        result[3] += 6156119;
        result[4] += 10928305;
        result[5] += 6585616;
      } else {
        result[0] += 816145;
        result[1] += 84063017;
        result[2] += 0;
        result[3] += 816145;
        result[4] += 204036;
        result[5] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 5052902;
        result[3] += 53055478;
        result[4] += 0;
        result[5] += 27790964;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 75161927;
        result[3] += 0;
        result[4] += 0;
        result[5] += 10737418;
      }
    } else {
      if ( UNLIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 24542670;
        result[3] += 49085340;
        result[4] += 0;
        result[5] += 12271335;
      } else {
        result[0] += 1576134;
        result[1] += 0;
        result[2] += 78981865;
        result[3] += 4640841;
        result[4] += 87563;
        result[5] += 612941;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 1294582;
        result[1] += 76151;
        result[2] += 0;
        result[3] += 3731443;
        result[4] += 20789469;
        result[5] += 60007699;
      } else {
        result[0] += 8361883;
        result[1] += 3547465;
        result[2] += 1266952;
        result[3] += 41556025;
        result[4] += 8361883;
        result[5] += 22805136;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 363210;
        result[1] += 81540816;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3995318;
        result[5] += 0;
      } else {
        result[0] += 52655953;
        result[1] += 1975833;
        result[2] += 6174478;
        result[3] += 7261186;
        result[4] += 9434603;
        result[5] += 8397290;
      }
    }
  } else {
    if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( LIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 1288490;
        result[1] += 1288490;
        result[2] += 24910810;
        result[3] += 25769803;
        result[4] += 5153960;
        result[5] += 27487790;
      } else {
        result[0] += 74446099;
        result[1] += 1908874;
        result[2] += 9544371;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( LIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d50000))) ) ) {
        result[0] += 859948;
        result[1] += 0;
        result[2] += 79593053;
        result[3] += 4777494;
        result[4] += 0;
        result[5] += 668849;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 85899345;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 576505;
        result[2] += 0;
        result[3] += 0;
        result[4] += 82728564;
        result[5] += 2594275;
      } else {
        result[0] += 7472662;
        result[1] += 145100;
        result[2] += 290200;
        result[3] += 8923665;
        result[4] += 5441259;
        result[5] += 63626458;
      }
    } else {
      if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42640000))) ) ) {
        result[0] += 360921;
        result[1] += 83733816;
        result[2] += 541382;
        result[3] += 0;
        result[4] += 1263225;
        result[5] += 0;
      } else {
        result[0] += 51530126;
        result[1] += 3365813;
        result[2] += 3934683;
        result[3] += 13321035;
        result[4] += 5262046;
        result[5] += 8485641;
      }
    }
  } else {
    if ( UNLIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c60000))) ) ) {
      if ( LIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42dd0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 28224070;
        result[3] += 42949672;
        result[4] += 1227133;
        result[5] += 13498468;
      } else {
        result[0] += 4090445;
        result[1] += 0;
        result[2] += 81808900;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 53580780;
        result[3] += 22112702;
        result[4] += 0;
        result[5] += 10205862;
      } else {
        result[0] += 1391887;
        result[1] += 0;
        result[2] += 79635851;
        result[3] += 4175662;
        result[4] += 0;
        result[5] += 695943;
      }
    }
  }
  if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
    if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
      if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42df0000))) ) ) {
        result[0] += 864758;
        result[1] += 576505;
        result[2] += 288252;
        result[3] += 0;
        result[4] += 80422541;
        result[5] += 3747286;
      } else {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 42949672;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 233422;
        result[3] += 2801065;
        result[4] += 2801065;
        result[5] += 80063792;
      } else {
        result[0] += 11094855;
        result[1] += 1029419;
        result[2] += 1715699;
        result[3] += 30081928;
        result[4] += 6405277;
        result[5] += 35572165;
      }
    }
  } else {
    if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
        result[0] += 1392209;
        result[1] += 73369457;
        result[2] += 0;
        result[3] += 0;
        result[4] += 11137678;
        result[5] += 0;
      } else {
        result[0] += 68891705;
        result[1] += 1291719;
        result[2] += 2009341;
        result[3] += 4305731;
        result[4] += 5525688;
        result[5] += 3875158;
      }
    } else {
      if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 4374503;
        result[1] += 3976821;
        result[2] += 31416890;
        result[3] += 24258611;
        result[4] += 6760596;
        result[5] += 15111921;
      } else {
        result[0] += 3667995;
        result[1] += 426511;
        result[2] += 74554149;
        result[3] += 5459342;
        result[4] += 170604;
        result[5] += 1620742;
      }
    }
  }
  if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
      if ( LIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 2021161;
        result[1] += 1347440;
        result[2] += 0;
        result[3] += 0;
        result[4] += 79499002;
        result[5] += 3031741;
      } else {
        result[0] += 39412641;
        result[1] += 2021161;
        result[2] += 2021161;
        result[3] += 7074063;
        result[4] += 8084644;
        result[5] += 27285674;
      }
    } else {
      if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 4885691;
        result[4] += 5507507;
        result[5] += 75506146;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2386092;
        result[3] += 48020120;
        result[4] += 4175662;
        result[5] += 31317469;
      }
    }
  } else {
    if ( LIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 328486;
        result[1] += 73252597;
        result[2] += 0;
        result[3] += 164243;
        result[4] += 11825531;
        result[5] += 328486;
      } else {
        result[0] += 65755062;
        result[1] += 3033088;
        result[2] += 2632491;
        result[3] += 4463790;
        result[4] += 6180632;
        result[5] += 3834281;
      }
    } else {
      if ( UNLIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 1326630;
        result[1] += 0;
        result[2] += 33829086;
        result[3] += 28854220;
        result[4] += 6301496;
        result[5] += 15587912;
      } else {
        result[0] += 2355889;
        result[1] += 815500;
        result[2] += 75297844;
        result[3] += 5799111;
        result[4] += 90611;
        result[5] += 1540389;
      }
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x423c0000))) ) ) {
      if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 14316557;
        result[2] += 0;
        result[3] += 0;
        result[4] += 71582788;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 85899345;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42be0000))) ) ) {
        result[0] += 9928065;
        result[1] += 863310;
        result[2] += 239808;
        result[3] += 9736218;
        result[4] += 19472436;
        result[5] += 45659507;
      } else {
        result[0] += 57167291;
        result[1] += 4274189;
        result[2] += 5817647;
        result[3] += 7420468;
        result[4] += 6886194;
        result[5] += 4333553;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( UNLIKELY( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 11608019;
        result[3] += 2321603;
        result[4] += 2321603;
        result[5] += 69648118;
      } else {
        result[0] += 4772185;
        result[1] += 4175662;
        result[2] += 29229638;
        result[3] += 36984440;
        result[4] += 1789569;
        result[5] += 8947848;
      }
    } else {
      if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 2399423;
        result[1] += 0;
        result[2] += 70303095;
        result[3] += 10557461;
        result[4] += 0;
        result[5] += 2639365;
      } else {
        result[0] += 620211;
        result[1] += 0;
        result[2] += 83263445;
        result[3] += 1860635;
        result[4] += 0;
        result[5] += 155052;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 14775689;
        result[1] += 4006966;
        result[2] += 0;
        result[3] += 0;
        result[4] += 56848838;
        result[5] += 10267851;
      } else {
        result[0] += 143284;
        result[1] += 71642;
        result[2] += 71642;
        result[3] += 14829995;
        result[4] += 4370191;
        result[5] += 66412588;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 446617;
        result[1] += 70714366;
        result[2] += 0;
        result[3] += 446617;
        result[4] += 13994000;
        result[5] += 297744;
      } else {
        result[0] += 58268476;
        result[1] += 2488333;
        result[2] += 4147222;
        result[3] += 7205799;
        result[4] += 7672361;
        result[5] += 6117153;
      }
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 16967772;
        result[3] += 56205744;
        result[4] += 0;
        result[5] += 12725829;
      } else {
        result[0] += 1908874;
        result[1] += 0;
        result[2] += 60129542;
        result[3] += 17179869;
        result[4] += 0;
        result[5] += 6681060;
      }
    } else {
      if ( UNLIKELY( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 69918072;
        result[3] += 13983614;
        result[4] += 0;
        result[5] += 1997659;
      } else {
        result[0] += 1093485;
        result[1] += 0;
        result[2] += 81646903;
        result[3] += 2551465;
        result[4] += 0;
        result[5] += 607491;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42970000))) ) ) {
      if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 16352398;
        result[1] += 4137353;
        result[2] += 0;
        result[3] += 0;
        result[4] += 57922953;
        result[5] += 7486640;
      } else {
        result[0] += 595604;
        result[1] += 198534;
        result[2] += 1919168;
        result[3] += 17404875;
        result[4] += 6088397;
        result[5] += 59692765;
      }
    } else {
      if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        result[0] += 164873;
        result[1] += 78974638;
        result[2] += 0;
        result[3] += 659495;
        result[4] += 5935463;
        result[5] += 164873;
      } else {
        result[0] += 60659935;
        result[1] += 4450427;
        result[2] += 3718850;
        result[3] += 5547793;
        result[4] += 5547793;
        result[5] += 5974546;
      }
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2863311;
        result[3] += 22906492;
        result[4] += 2863311;
        result[5] += 57266230;
      } else {
        result[0] += 2321603;
        result[1] += 0;
        result[2] += 48753682;
        result[3] += 18572831;
        result[4] += 4643207;
        result[5] += 11608019;
      }
    } else {
      if ( UNLIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 790484;
        result[1] += 1317474;
        result[2] += 62975287;
        result[3] += 19498624;
        result[4] += 0;
        result[5] += 1317474;
      } else {
        result[0] += 2024137;
        result[1] += 506034;
        result[2] += 78561846;
        result[3] += 3668749;
        result[4] += 253017;
        result[5] += 885560;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
      if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42950000))) ) ) {
        result[0] += 0;
        result[1] += 78741067;
        result[2] += 0;
        result[3] += 0;
        result[4] += 7158278;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 85899345;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c60000))) ) ) {
        result[0] += 11659585;
        result[1] += 1399150;
        result[2] += 1059962;
        result[3] += 12380359;
        result[4] += 19121720;
        result[5] += 40278567;
      } else {
        result[0] += 61474953;
        result[1] += 3725754;
        result[2] += 4967673;
        result[3] += 4139727;
        result[4] += 6278586;
        result[5] += 5312650;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 21195942;
        result[3] += 44623036;
        result[4] += 0;
        result[5] += 20080366;
      } else {
        result[0] += 9544371;
        result[1] += 0;
        result[2] += 53175785;
        result[3] += 9544371;
        result[4] += 1363481;
        result[5] += 12271335;
      }
    } else {
      if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 6285317;
        result[1] += 0;
        result[2] += 56567861;
        result[3] += 8380423;
        result[4] += 0;
        result[5] += 14665741;
      } else {
        result[0] += 929646;
        result[1] += 0;
        result[2] += 79019961;
        result[3] += 5298985;
        result[4] += 0;
        result[5] += 650752;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 598601;
        result[1] += 3890911;
        result[2] += 0;
        result[3] += 0;
        result[4] += 75124515;
        result[5] += 6285317;
      } else {
        result[0] += 3055146;
        result[1] += 710499;
        result[2] += 2060447;
        result[3] += 15488881;
        result[4] += 4191944;
        result[5] += 60392426;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 170435;
        result[1] += 79422807;
        result[2] += 170435;
        result[3] += 0;
        result[4] += 6135667;
        result[5] += 0;
      } else {
        result[0] += 54020175;
        result[1] += 3052261;
        result[2] += 3391401;
        result[3] += 7800222;
        result[4] += 7557979;
        result[5] += 10077306;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( LIKELY( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 18572831;
        result[3] += 42949672;
        result[4] += 2321603;
        result[5] += 22055237;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 56657015;
        result[3] += 10965873;
        result[4] += 0;
        result[5] += 18276456;
      }
    } else {
      if ( UNLIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 1822107;
        result[1] += 0;
        result[2] += 71322487;
        result[3] += 11713547;
        result[4] += 0;
        result[5] += 1041204;
      } else {
        result[0] += 998829;
        result[1] += 0;
        result[2] += 82902857;
        result[3] += 1997659;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
        result[0] += 30623309;
        result[1] += 1925994;
        result[2] += 385198;
        result[3] += 385198;
        result[4] += 46223863;
        result[5] += 6355781;
      } else {
        result[0] += 875333;
        result[1] += 1575599;
        result[2] += 1342177;
        result[3] += 16864749;
        result[4] += 7352797;
        result[5] += 57888689;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 0;
        result[1] += 82647032;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3252313;
        result[5] += 0;
      } else {
        result[0] += 60816984;
        result[1] += 2043747;
        result[2] += 4706813;
        result[3] += 3901700;
        result[4] += 8546582;
        result[5] += 5883516;
      }
    }
  } else {
    if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c30000))) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 2603010;
        result[1] += 3253763;
        result[2] += 18871825;
        result[3] += 36442146;
        result[4] += 7158278;
        result[5] += 17570320;
      } else {
        result[0] += 4943847;
        result[1] += 0;
        result[2] += 63652033;
        result[3] += 14213560;
        result[4] += 0;
        result[5] += 3089904;
      }
    } else {
      if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 2632930;
        result[1] += 0;
        result[2] += 69114416;
        result[3] += 11848185;
        result[4] += 0;
        result[5] += 2303813;
      } else {
        result[0] += 318145;
        result[1] += 0;
        result[2] += 83831398;
        result[3] += 1749801;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
      if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 0;
        result[1] += 698368;
        result[2] += 0;
        result[3] += 0;
        result[4] += 82756686;
        result[5] += 2444290;
      } else {
        result[0] += 0;
        result[1] += 66810602;
        result[2] += 0;
        result[3] += 0;
        result[4] += 19088743;
        result[5] += 0;
      }
    } else {
      if ( LIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 2856962;
        result[1] += 95232;
        result[2] += 95232;
        result[3] += 4094979;
        result[4] += 5809157;
        result[5] += 72947781;
      } else {
        result[0] += 4857403;
        result[1] += 1022611;
        result[2] += 766958;
        result[3] += 37836616;
        result[4] += 2045222;
        result[5] += 39370533;
      }
    }
  } else {
    if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 159072;
        result[1] += 76354974;
        result[2] += 159072;
        result[3] += 0;
        result[4] += 9226226;
        result[5] += 0;
      } else {
        result[0] += 60955497;
        result[1] += 2092419;
        result[2] += 4074712;
        result[3] += 5341177;
        result[4] += 8314616;
        result[5] += 5120922;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 1753047;
        result[1] += 2804876;
        result[2] += 17881088;
        result[3] += 35060957;
        result[4] += 5609753;
        result[5] += 22789622;
      } else {
        result[0] += 1217197;
        result[1] += 0;
        result[2] += 77900621;
        result[3] += 5999043;
        result[4] += 0;
        result[5] += 782483;
      }
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 933688;
        result[2] += 622459;
        result[3] += 2178606;
        result[4] += 75006312;
        result[5] += 7158278;
      } else {
        result[0] += 3309355;
        result[1] += 215827;
        result[2] += 143885;
        result[3] += 12374110;
        result[4] += 4892090;
        result[5] += 64964078;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 0;
        result[1] += 82657861;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3241484;
        result[5] += 0;
      } else {
        result[0] += 56960282;
        result[1] += 2537567;
        result[2] += 3455410;
        result[3] += 7126784;
        result[4] += 9448388;
        result[5] += 6370913;
      }
    }
  } else {
    if ( UNLIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( UNLIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 0;
        result[1] += 1827645;
        result[2] += 10965873;
        result[3] += 9138228;
        result[4] += 1827645;
        result[5] += 62139952;
      } else {
        result[0] += 1659890;
        result[1] += 3319781;
        result[2] += 24898361;
        result[3] += 41082295;
        result[4] += 2489836;
        result[5] += 12449180;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 6551645;
        result[1] += 0;
        result[2] += 63332568;
        result[3] += 6551645;
        result[4] += 727960;
        result[5] += 8735526;
      } else {
        result[0] += 1990714;
        result[1] += 0;
        result[2] += 79031379;
        result[3] += 4578644;
        result[4] += 0;
        result[5] += 298607;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 2782165;
        result[2] += 2086623;
        result[3] += 2434394;
        result[4] += 75813997;
        result[5] += 2782165;
      } else {
        result[0] += 3030083;
        result[1] += 1268407;
        result[2] += 493269;
        result[3] += 14093411;
        result[4] += 4087089;
        result[5] += 62927084;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42480000))) ) ) {
        result[0] += 0;
        result[1] += 84793345;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1106000;
        result[5] += 0;
      } else {
        result[0] += 52512592;
        result[1] += 1573946;
        result[2] += 5961920;
        result[3] += 8108211;
        result[4] += 11494582;
        result[5] += 6248092;
      }
    }
  } else {
    if ( UNLIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a70000))) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 1814774;
        result[1] += 7864024;
        result[2] += 15123124;
        result[3] += 22382223;
        result[4] += 6049249;
        result[5] += 32665948;
      } else {
        result[0] += 6832902;
        result[1] += 0;
        result[2] += 63936444;
        result[3] += 11225482;
        result[4] += 0;
        result[5] += 3904515;
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 31236125;
        result[3] += 39045157;
        result[4] += 0;
        result[5] += 15618062;
      } else {
        result[0] += 112433;
        result[1] += 0;
        result[2] += 80614962;
        result[3] += 4834649;
        result[4] += 0;
        result[5] += 337301;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 335544;
        result[1] += 671088;
        result[2] += 1006632;
        result[3] += 671088;
        result[4] += 81537269;
        result[5] += 1677721;
      } else {
        result[0] += 3983940;
        result[1] += 279574;
        result[2] += 209681;
        result[3] += 15097037;
        result[4] += 5661388;
        result[5] += 60667723;
      }
    } else {
      if ( LIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 54358179;
        result[1] += 4745555;
        result[2] += 3595117;
        result[3] += 8100998;
        result[4] += 9299371;
        result[5] += 5800123;
      } else {
        result[0] += 788067;
        result[1] += 85111278;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 22300791;
        result[3] += 49557314;
        result[4] += 0;
        result[5] += 14041239;
      } else {
        result[0] += 9959344;
        result[1] += 0;
        result[2] += 53531476;
        result[3] += 8714426;
        result[4] += 0;
        result[5] += 13694098;
      }
    } else {
      if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 2147483;
        result[1] += 0;
        result[2] += 66265209;
        result[3] += 14112035;
        result[4] += 0;
        result[5] += 3374617;
      } else {
        result[0] += 390451;
        result[1] += 0;
        result[2] += 81994830;
        result[3] += 3514064;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 1930322;
        result[1] += 3217203;
        result[2] += 643440;
        result[3] += 321720;
        result[4] += 75926013;
        result[5] += 3860644;
      } else {
        result[0] += 3964585;
        result[1] += 1460636;
        result[2] += 417324;
        result[3] += 15162799;
        result[4] += 3060381;
        result[5] += 61833618;
      }
    } else {
      if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        result[0] += 736701;
        result[1] += 66745117;
        result[2] += 0;
        result[3] += 1768082;
        result[4] += 15176042;
        result[5] += 1473402;
      } else {
        result[0] += 55286825;
        result[1] += 1791702;
        result[2] += 7013236;
        result[3] += 9112087;
        result[4] += 6398938;
        result[5] += 6296555;
      }
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 5153960;
        result[3] += 25769803;
        result[4] += 1717986;
        result[5] += 53257594;
      } else {
        result[0] += 0;
        result[1] += 12588697;
        result[2] += 39987626;
        result[3] += 15550743;
        result[4] += 1481023;
        result[5] += 16291255;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 0;
        result[1] += 11713547;
        result[2] += 0;
        result[3] += 19522578;
        result[4] += 3904515;
        result[5] += 50758704;
      } else {
        result[0] += 1178048;
        result[1] += 0;
        result[2] += 77358496;
        result[3] += 7068289;
        result[4] += 0;
        result[5] += 294512;
      }
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
        result[0] += 1389957;
        result[1] += 833974;
        result[2] += 0;
        result[3] += 3057905;
        result[4] += 71999775;
        result[5] += 8617733;
      } else {
        result[0] += 2214716;
        result[1] += 0;
        result[2] += 158194;
        result[3] += 11469065;
        result[4] += 5457693;
        result[5] += 66599677;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 0;
        result[1] += 82520282;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3379063;
        result[5] += 0;
      } else {
        result[0] += 56790106;
        result[1] += 2758235;
        result[2] += 3201523;
        result[3] += 6649318;
        result[4] += 9703079;
        result[5] += 6797081;
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c60000))) ) ) {
      if ( LIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 858993;
        result[1] += 1717986;
        result[2] += 11166914;
        result[3] += 45526653;
        result[4] += 4294967;
        result[5] += 22333829;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 52861135;
        result[3] += 13215283;
        result[4] += 0;
        result[5] += 19822925;
      }
    } else {
      if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 11608019;
        result[1] += 5417075;
        result[2] += 43336606;
        result[3] += 9286415;
        result[4] += 3095471;
        result[5] += 13155755;
      } else {
        result[0] += 1369277;
        result[1] += 0;
        result[2] += 78322676;
        result[3] += 5659680;
        result[4] += 91285;
        result[5] += 456425;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 3142658;
        result[2] += 349184;
        result[3] += 1745921;
        result[4] += 79963212;
        result[5] += 698368;
      } else {
        result[0] += 4389510;
        result[1] += 1148025;
        result[2] += 135061;
        result[3] += 12020505;
        result[4] += 5199881;
        result[5] += 63006359;
      }
    } else {
      if ( LIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 52903566;
        result[1] += 5867030;
        result[2] += 2657714;
        result[3] += 6067612;
        result[4] += 11834352;
        result[5] += 6569068;
      } else {
        result[0] += 405185;
        result[1] += 83265639;
        result[2] += 0;
        result[3] += 1823335;
        result[4] += 405185;
        result[5] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c10000))) ) ) {
      if ( LIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 1443686;
        result[1] += 0;
        result[2] += 19489767;
        result[3] += 46919810;
        result[4] += 1443686;
        result[5] += 16602394;
      } else {
        result[0] += 3067833;
        result[1] += 0;
        result[2] += 60589717;
        result[3] += 11504376;
        result[4] += 766958;
        result[5] += 9970459;
      }
    } else {
      if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 3817748;
        result[1] += 0;
        result[2] += 61083979;
        result[3] += 16798094;
        result[4] += 381774;
        result[5] += 3817748;
      } else {
        result[0] += 480555;
        result[1] += 0;
        result[2] += 83256289;
        result[3] += 2042362;
        result[4] += 0;
        result[5] += 120138;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( UNLIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 2051327;
        result[2] += 0;
        result[3] += 256415;
        result[4] += 80771026;
        result[5] += 2820575;
      } else {
        result[0] += 7354640;
        result[1] += 357021;
        result[2] += 71404;
        result[3] += 6140767;
        result[4] += 7283236;
        result[5] += 64692275;
      }
    } else {
      if ( LIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 52443811;
        result[1] += 5927557;
        result[2] += 3014012;
        result[3] += 10247641;
        result[4] += 7283862;
        result[5] += 6982461;
      } else {
        result[0] += 0;
        result[1] += 85899345;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( LIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 1493901;
        result[1] += 0;
        result[2] += 16432918;
        result[3] += 44070099;
        result[4] += 746950;
        result[5] += 23155475;
      } else {
        result[0] += 4569114;
        result[1] += 0;
        result[2] += 59398483;
        result[3] += 13707342;
        result[4] += 0;
        result[5] += 8224405;
      }
    } else {
      if ( UNLIKELY( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 1867377;
        result[1] += 0;
        result[2] += 43883361;
        result[3] += 32679098;
        result[4] += 0;
        result[5] += 7469508;
      } else {
        result[0] += 885560;
        result[1] += 0;
        result[2] += 79011654;
        result[3] += 4919779;
        result[4] += 0;
        result[5] += 1082351;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bb0000))) ) ) {
      if ( UNLIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        result[0] += 28129011;
        result[1] += 3932012;
        result[2] += 604924;
        result[3] += 1209849;
        result[4] += 45974297;
        result[5] += 6049249;
      } else {
        result[0] += 1940094;
        result[1] += 735897;
        result[2] += 1003497;
        result[3] += 14584156;
        result[4] += 8161775;
        result[5] += 59473924;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42660000))) ) ) {
        result[0] += 362444;
        result[1] += 84449567;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1087333;
        result[5] += 0;
      } else {
        result[0] += 57566368;
        result[1] += 1560714;
        result[2] += 6122804;
        result[3] += 7683519;
        result[4] += 6062777;
        result[5] += 6903161;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 7158278;
        result[3] += 50107951;
        result[4] += 3579139;
        result[5] += 25053975;
      } else {
        result[0] += 0;
        result[1] += 8947848;
        result[2] += 10737418;
        result[3] += 8947848;
        result[4] += 0;
        result[5] += 57266230;
      }
    } else {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 3926827;
        result[1] += 0;
        result[2] += 67001489;
        result[3] += 12762188;
        result[4] += 0;
        result[5] += 2208840;
      } else {
        result[0] += 265531;
        result[1] += 0;
        result[2] += 83244033;
        result[3] += 2124249;
        result[4] += 0;
        result[5] += 265531;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 1053979;
        result[1] += 1317474;
        result[2] += 0;
        result[3] += 0;
        result[4] += 79575467;
        result[5] += 3952423;
      } else {
        result[0] += 8256344;
        result[1] += 166794;
        result[2] += 0;
        result[3] += 5337435;
        result[4] += 4753653;
        result[5] += 67385117;
      }
    } else {
      if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 162074;
        result[1] += 74878297;
        result[2] += 324148;
        result[3] += 1620742;
        result[4] += 8427860;
        result[5] += 486222;
      } else {
        result[0] += 55970151;
        result[1] += 2711533;
        result[2] += 2660372;
        result[3] += 11153101;
        result[4] += 5320745;
        result[5] += 8083440;
      }
    }
  } else {
    if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ba0000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0;
        result[1] += 3278600;
        result[2] += 6557201;
        result[3] += 28851688;
        result[4] += 5901481;
        result[5] += 41310372;
      } else {
        result[0] += 6524000;
        result[1] += 6524000;
        result[2] += 54366674;
        result[3] += 8698667;
        result[4] += 0;
        result[5] += 9786001;
      }
    } else {
      if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 1620742;
        result[1] += 0;
        result[2] += 60237591;
        result[3] += 17017794;
        result[4] += 540247;
        result[5] += 6482969;
      } else {
        result[0] += 820321;
        result[1] += 0;
        result[2] += 80977418;
        result[3] += 4101605;
        result[4] += 0;
        result[5] += 0;
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
    

    FILE* file = fopen("./codegen_small/dataset_146/split_4/test_data.csv", "r");
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
