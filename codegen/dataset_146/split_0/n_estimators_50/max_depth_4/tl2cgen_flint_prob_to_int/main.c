
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
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 343597;
          result[4] += 81432579;
          result[5] += 4123168;
        } else {
          result[0] += 0;
          result[1] += 29878033;
          result[2] += 0;
          result[3] += 26143279;
          result[4] += 29878033;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 5905087;
          result[1] += 472407;
          result[2] += 78734;
          result[3] += 4487866;
          result[4] += 6692432;
          result[5] += 68262816;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1753047;
          result[3] += 50254039;
          result[4] += 0;
          result[5] += 33892258;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
          result[0] += 62715224;
          result[1] += 5718335;
          result[2] += 621558;
          result[3] += 3605037;
          result[4] += 11498827;
          result[5] += 1740363;
        } else {
          result[0] += 8589934;
          result[1] += 920350;
          result[2] += 28224070;
          result[3] += 21781619;
          result[4] += 8896717;
          result[5] += 17486652;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42580000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 7579354;
          result[1] += 50529027;
          result[2] += 0;
          result[3] += 0;
          result[4] += 22738062;
          result[5] += 5052902;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 4026531;
          result[1] += 2013265;
          result[2] += 17448304;
          result[3] += 32212254;
          result[4] += 4697620;
          result[5] += 25501368;
        } else {
          result[0] += 9544371;
          result[1] += 0;
          result[2] += 61508173;
          result[3] += 11665343;
          result[4] += 0;
          result[5] += 3181457;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 2120971;
          result[1] += 0;
          result[2] += 79536431;
          result[3] += 4241943;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0;
          result[1] += 12271335;
          result[2] += 0;
          result[3] += 0;
          result[4] += 12271335;
          result[5] += 61356675;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 63731772;
          result[3] += 18011153;
          result[4] += 0;
          result[5] += 4156419;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 70137998;
          result[3] += 15761347;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 406463;
          result[1] += 0;
          result[2] += 83460563;
          result[3] += 2032318;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 325376;
          result[1] += 976128;
          result[2] += 0;
          result[3] += 0;
          result[4] += 82645582;
          result[5] += 1952257;
        } else {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 725909;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2298714;
          result[4] += 6291219;
          result[5] += 76583501;
        } else {
          result[0] += 4212547;
          result[1] += 2197851;
          result[2] += 732617;
          result[3] += 31502531;
          result[4] += 5128319;
          result[5] += 42125478;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 833974;
          result[1] += 13343587;
          result[2] += 0;
          result[3] += 5003845;
          result[4] += 66717938;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 84471090;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1428255;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 72009812;
          result[1] += 2494721;
          result[2] += 471974;
          result[3] += 1753047;
          result[4] += 6742491;
          result[5] += 2427297;
        } else {
          result[0] += 17930445;
          result[1] += 4169871;
          result[2] += 14594549;
          result[3] += 22725797;
          result[4] += 4169871;
          result[5] += 22308810;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 0;
          result[4] += 57266230;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 2240852;
          result[2] += 11951213;
          result[3] += 50045705;
          result[4] += 746950;
          result[5] += 20914623;
        } else {
          result[0] += 0;
          result[1] += 2045222;
          result[2] += 47040117;
          result[3] += 20452225;
          result[4] += 4090445;
          result[5] += 12271335;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 21474836;
          result[2] += 0;
          result[3] += 0;
          result[4] += 64424509;
          result[5] += 0;
        } else {
          result[0] += 8589934;
          result[1] += 0;
          result[2] += 12884901;
          result[3] += 12884901;
          result[4] += 0;
          result[5] += 51539607;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 2863311;
          result[1] += 0;
          result[2] += 69196695;
          result[3] += 12169074;
          result[4] += 0;
          result[5] += 1670265;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 81987718;
          result[3] += 3129302;
          result[4] += 0;
          result[5] += 782325;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 327860;
          result[1] += 0;
          result[2] += 2295020;
          result[3] += 327860;
          result[4] += 78030703;
          result[5] += 4917901;
        } else {
          result[0] += 0;
          result[1] += 67492343;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 18407002;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1375122;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3483644;
          result[4] += 6600590;
          result[5] += 74439988;
        } else {
          result[0] += 3817748;
          result[1] += 1590728;
          result[2] += 4772185;
          result[3] += 40404507;
          result[4] += 2545165;
          result[5] += 32769009;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 40689163;
          result[2] += 0;
          result[3] += 1808407;
          result[4] += 43401774;
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
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 68520482;
          result[1] += 1658288;
          result[2] += 198994;
          result[3] += 1525625;
          result[4] += 10679378;
          result[5] += 3316577;
        } else {
          result[0] += 17895697;
          result[1] += 223696;
          result[2] += 21698532;
          result[3] += 22593317;
          result[4] += 4921316;
          result[5] += 18566785;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c20000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 5602131;
          result[4] += 9336885;
          result[5] += 70960329;
        } else {
          result[0] += 1108378;
          result[1] += 0;
          result[2] += 28817845;
          result[3] += 32142981;
          result[4] += 2770946;
          result[5] += 21059194;
        }
      } else {
        result[0] += 0;
        result[1] += 85899345;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 80530636;
          result[1] += 0;
          result[2] += 0;
          result[3] += 5368709;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 64424509;
          result[3] += 21474836;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 876523;
          result[1] += 0;
          result[2] += 68661041;
          result[3] += 14608732;
          result[4] += 0;
          result[5] += 1753047;
        } else {
          result[0] += 1538913;
          result[1] += 0;
          result[2] += 81282605;
          result[3] += 3077826;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 376751;
          result[3] += 0;
          result[4] += 84769091;
          result[5] += 753503;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6135667;
          result[3] += 0;
          result[4] += 46017506;
          result[5] += 33746171;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42660000))) ) ) {
          result[0] += 77134106;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 7012191;
          result[5] += 1753047;
        } else {
          result[0] += 221200;
          result[1] += 1327200;
          result[2] += 1400933;
          result[3] += 10912534;
          result[4] += 3686667;
          result[5] += 68350809;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
          result[0] += 0;
          result[1] += 85689323;
          result[2] += 0;
          result[3] += 0;
          result[4] += 210022;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 46854188;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39045157;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42890000))) ) ) {
          result[0] += 6850868;
          result[1] += 13701736;
          result[2] += 526989;
          result[3] += 7904847;
          result[4] += 54806944;
          result[5] += 2107959;
        } else {
          result[0] += 62820152;
          result[1] += 1177509;
          result[2] += 4651164;
          result[3] += 4827790;
          result[4] += 6476304;
          result[5] += 5946424;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 12884901;
          result[5] += 73014444;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6710886;
          result[3] += 47647293;
          result[4] += 0;
          result[5] += 31541166;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 50107951;
          result[3] += 16702650;
          result[4] += 0;
          result[5] += 19088743;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 2603010;
          result[1] += 1301505;
          result[2] += 37743651;
          result[3] += 5206020;
          result[4] += 16919568;
          result[5] += 22125589;
        } else {
          result[0] += 76857309;
          result[1] += 0;
          result[2] += 4521018;
          result[3] += 0;
          result[4] += 4521018;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 557787;
          result[1] += 836681;
          result[2] += 62751145;
          result[3] += 17291426;
          result[4] += 1115575;
          result[5] += 3346727;
        } else {
          result[0] += 245076;
          result[1] += 0;
          result[2] += 81610505;
          result[3] += 4043763;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42240000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
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
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d60000))) ) ) {
          result[0] += 0;
          result[1] += 304607;
          result[2] += 0;
          result[3] += 609215;
          result[4] += 81939446;
          result[5] += 3046076;
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
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42620000))) ) ) {
          result[0] += 56278881;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 20734324;
          result[5] += 8886139;
        } else {
          result[0] += 92864;
          result[1] += 185728;
          result[2] += 92864;
          result[3] += 5293256;
          result[4] += 5386121;
          result[5] += 74848511;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 8631034;
          result[1] += 2466009;
          result[2] += 6165024;
          result[3] += 19728079;
          result[4] += 5754023;
          result[5] += 43155173;
        } else {
          result[0] += 5080068;
          result[1] += 5080068;
          result[2] += 2770946;
          result[3] += 60037177;
          result[4] += 923648;
          result[5] += 12007435;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
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
        result[0] += 0;
        result[1] += 85899345;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42910000))) ) ) {
          result[0] += 17867063;
          result[1] += 17867063;
          result[2] += 0;
          result[3] += 1374389;
          result[4] += 37108517;
          result[5] += 11682311;
        } else {
          result[0] += 67647431;
          result[1] += 814211;
          result[2] += 1764125;
          result[3] += 5903035;
          result[4] += 4885270;
          result[5] += 4885270;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33005660;
          result[3] += 38506603;
          result[4] += 0;
          result[5] += 14387082;
        } else {
          result[0] += 2816371;
          result[1] += 0;
          result[2] += 76042043;
          result[3] += 5720755;
          result[4] += 352046;
          result[5] += 968127;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428b0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 82734633;
          result[5] += 3164712;
        } else {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1954871;
          result[4] += 3334780;
          result[5] += 80609694;
        } else {
          result[0] += 1651910;
          result[1] += 3634203;
          result[2] += 2973438;
          result[3] += 30395153;
          result[4] += 6938024;
          result[5] += 40306616;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 5541893;
          result[2] += 0;
          result[3] += 0;
          result[4] += 80357452;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85711792;
          result[2] += 0;
          result[3] += 0;
          result[4] += 187553;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 60380176;
          result[1] += 2848121;
          result[2] += 512661;
          result[3] += 4215219;
          result[4] += 12702622;
          result[5] += 5240543;
        } else {
          result[0] += 10598998;
          result[1] += 158194;
          result[2] += 15186624;
          result[3] += 27209369;
          result[4] += 8542476;
          result[5] += 24203683;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42820000))) ) ) {
          result[0] += 6135667;
          result[1] += 18407002;
          result[2] += 18407002;
          result[3] += 0;
          result[4] += 21474836;
          result[5] += 21474836;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2526451;
          result[3] += 5052902;
          result[4] += 2526451;
          result[5] += 75793540;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 25769803;
          result[3] += 50465865;
          result[4] += 2147483;
          result[5] += 7516192;
        } else {
          result[0] += 6316128;
          result[1] += 3789677;
          result[2] += 46739349;
          result[3] += 12632256;
          result[4] += 0;
          result[5] += 16421933;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 71312664;
          result[3] += 13776310;
          result[4] += 0;
          result[5] += 810371;
        } else {
          result[0] += 51539607;
          result[1] += 0;
          result[2] += 34359738;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 59468777;
          result[1] += 0;
          result[2] += 26430567;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 985460;
          result[1] += 0;
          result[2] += 82614476;
          result[3] += 1806678;
          result[4] += 0;
          result[5] += 492730;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42300000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85158834;
          result[5] += 740511;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x425e0000))) ) ) {
          result[0] += 0;
          result[1] += 4772185;
          result[2] += 0;
          result[3] += 9544371;
          result[4] += 71582788;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 10105805;
          result[4] += 25264513;
          result[5] += 50529027;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 56164956;
          result[5] += 29734388;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1243116;
          result[4] += 1491739;
          result[5] += 83164489;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 45309545;
          result[1] += 1887897;
          result[2] += 0;
          result[3] += 0;
          result[4] += 32094261;
          result[5] += 6607641;
        } else {
          result[0] += 0;
          result[1] += 542522;
          result[2] += 1446725;
          result[3] += 34721419;
          result[4] += 3435973;
          result[5] += 45752704;
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b00000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 8180890;
          result[4] += 77718455;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 78741067;
          result[2] += 7158278;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 6135667;
          result[1] += 61356675;
          result[2] += 0;
          result[3] += 0;
          result[4] += 18407002;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
          result[0] += 5541893;
          result[1] += 27709466;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52647986;
          result[5] += 0;
        } else {
          result[0] += 69892860;
          result[1] += 1275417;
          result[2] += 1020333;
          result[3] += 5675606;
          result[4] += 4527730;
          result[5] += 3507397;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 1571329;
          result[1] += 0;
          result[2] += 35878690;
          result[3] += 32736031;
          result[4] += 523776;
          result[5] += 15189518;
        } else {
          result[0] += 2333733;
          result[1] += 0;
          result[2] += 76295134;
          result[3] += 5116261;
          result[4] += 179517;
          result[5] += 1974697;
        }
      }
    }
  }
  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 297229;
          result[1] += 297229;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85007657;
          result[5] += 297229;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 81297595;
          result[5] += 4601750;
        } else {
          result[0] += 8312839;
          result[1] += 5541893;
          result[2] += 0;
          result[3] += 0;
          result[4] += 24938519;
          result[5] += 47106092;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
          result[0] += 83545939;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2353406;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 34359738;
          result[5] += 51539607;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42620000))) ) ) {
          result[0] += 17179869;
          result[1] += 3435973;
          result[2] += 3435973;
          result[3] += 17179869;
          result[4] += 41231686;
          result[5] += 3435973;
        } else {
          result[0] += 348829;
          result[1] += 261622;
          result[2] += 348829;
          result[3] += 6104522;
          result[4] += 3749920;
          result[5] += 75085621;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85507111;
          result[2] += 0;
          result[3] += 392234;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
          result[0] += 10454854;
          result[1] += 1695381;
          result[2] += 4238454;
          result[3] += 40971727;
          result[4] += 3108200;
          result[5] += 25430727;
        } else {
          result[0] += 65307036;
          result[1] += 3203248;
          result[2] += 2680268;
          result[3] += 3007130;
          result[4] += 9936606;
          result[5] += 1765055;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 709911;
          result[1] += 709911;
          result[2] += 9228855;
          result[3] += 21297358;
          result[4] += 2129735;
          result[5] += 51823572;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26658417;
          result[3] += 45911719;
          result[4] += 0;
          result[5] += 13329208;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 867670;
          result[1] += 1735340;
          result[2] += 39912827;
          result[3] += 36442146;
          result[4] += 0;
          result[5] += 6941361;
        } else {
          result[0] += 1894142;
          result[1] += 1041778;
          result[2] += 74250371;
          result[3] += 6724204;
          result[4] += 1136485;
          result[5] += 852363;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42780000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
          result[0] += 0;
          result[1] += 71582788;
          result[2] += 0;
          result[3] += 0;
          result[4] += 14316557;
          result[5] += 0;
        } else {
          result[0] += 319328;
          result[1] += 2873955;
          result[2] += 0;
          result[3] += 638656;
          result[4] += 76638821;
          result[5] += 5428583;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
          result[0] += 84109776;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1789569;
          result[5] += 0;
        } else {
          result[0] += 632193;
          result[1] += 474145;
          result[2] += 474145;
          result[3] += 8534617;
          result[4] += 7665351;
          result[5] += 68118892;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
          result[0] += 6945053;
          result[1] += 0;
          result[2] += 731058;
          result[3] += 33994209;
          result[4] += 6945053;
          result[5] += 37283971;
        } else {
          result[0] += 63539429;
          result[1] += 5962644;
          result[2] += 1304328;
          result[3] += 2857100;
          result[4] += 8881855;
          result[5] += 3353987;
        }
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
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1684300;
          result[3] += 64845584;
          result[4] += 0;
          result[5] += 19369460;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14810232;
          result[3] += 20734324;
          result[4] += 0;
          result[5] += 50354788;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10307921;
          result[3] += 44667659;
          result[4] += 0;
          result[5] += 30923764;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 57266230;
          result[3] += 21053761;
          result[4] += 0;
          result[5] += 7579354;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42e80000))) ) ) {
          result[0] += 16106127;
          result[1] += 0;
          result[2] += 57266230;
          result[3] += 3579139;
          result[4] += 3579139;
          result[5] += 5368709;
        } else {
          result[0] += 75161927;
          result[1] += 0;
          result[2] += 7158278;
          result[3] += 0;
          result[4] += 0;
          result[5] += 3579139;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
          result[0] += 9544371;
          result[1] += 0;
          result[2] += 38177487;
          result[3] += 19088743;
          result[4] += 7635497;
          result[5] += 11453246;
        } else {
          result[0] += 183545;
          result[1] += 0;
          result[2] += 78649294;
          result[3] += 6148777;
          result[4] += 0;
          result[5] += 917728;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 327860;
          result[2] += 0;
          result[3] += 2295020;
          result[4] += 79997864;
          result[5] += 3278600;
        } else {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 6112068;
          result[1] += 578168;
          result[2] += 82595;
          result[3] += 4707944;
          result[4] += 6029473;
          result[5] += 68389094;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1126548;
          result[3] += 52947793;
          result[4] += 844911;
          result[5] += 30980091;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42480000))) ) ) {
          result[0] += 0;
          result[1] += 85320249;
          result[2] += 0;
          result[3] += 0;
          result[4] += 579096;
          result[5] += 0;
        } else {
          result[0] += 2726963;
          result[1] += 18407002;
          result[2] += 3408704;
          result[3] += 681740;
          result[4] += 59311453;
          result[5] += 1363481;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 73154417;
          result[1] += 2431113;
          result[2] += 442020;
          result[3] += 1031381;
          result[4] += 8103711;
          result[5] += 736701;
        } else {
          result[0] += 17787238;
          result[1] += 650752;
          result[2] += 21041001;
          result[3] += 19088743;
          result[4] += 6073691;
          result[5] += 21257918;
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9203501;
          result[3] += 65958426;
          result[4] += 0;
          result[5] += 10737418;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 47721858;
          result[3] += 19088743;
          result[4] += 0;
          result[5] += 19088743;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 47721858;
          result[4] += 0;
          result[5] += 9544371;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 71707280;
          result[3] += 8216459;
          result[4] += 0;
          result[5] += 5975606;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 51539607;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 34359738;
          result[5] += 0;
        } else {
          result[0] += 2571836;
          result[1] += 0;
          result[2] += 69953958;
          result[3] += 13116367;
          result[4] += 0;
          result[5] += 257183;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 84116529;
          result[3] += 1782816;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bb0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42420000))) ) ) {
          result[0] += 0;
          result[1] += 77309411;
          result[2] += 0;
          result[3] += 0;
          result[4] += 8589934;
          result[5] += 0;
        } else {
          result[0] += 258732;
          result[1] += 1293664;
          result[2] += 0;
          result[3] += 0;
          result[4] += 80465953;
          result[5] += 3880994;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 524576;
          result[4] += 2098304;
          result[5] += 83276465;
        } else {
          result[0] += 17764524;
          result[1] += 787035;
          result[2] += 562168;
          result[3] += 24847847;
          result[4] += 10006599;
          result[5] += 31931170;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x425a0000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 60519993;
          result[2] += 0;
          result[3] += 7809031;
          result[4] += 17570320;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 29684748;
          result[1] += 3728519;
          result[2] += 9608107;
          result[3] += 21080473;
          result[4] += 5449374;
          result[5] += 16348122;
        } else {
          result[0] += 72291528;
          result[1] += 1133984;
          result[2] += 2929460;
          result[3] += 755989;
          result[4] += 7748895;
          result[5] += 1039486;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 6781527;
          result[1] += 6781527;
          result[2] += 11302545;
          result[3] += 13563054;
          result[4] += 9042036;
          result[5] += 38428654;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 18147749;
          result[3] += 61702347;
          result[4] += 0;
          result[5] += 6049249;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 64424509;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 77134106;
          result[3] += 5259143;
          result[4] += 0;
          result[5] += 3506095;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 3067833;
          result[1] += 1533916;
          result[2] += 26076587;
          result[3] += 30678337;
          result[4] += 6135667;
          result[5] += 18407002;
        } else {
          result[0] += 3232771;
          result[1] += 0;
          result[2] += 70659139;
          result[3] += 10621962;
          result[4] += 0;
          result[5] += 1385473;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 654055;
          result[1] += 0;
          result[2] += 77832656;
          result[3] += 7412633;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1222766;
          result[1] += 0;
          result[2] += 84370887;
          result[3] += 305691;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 2311193;
          result[2] += 0;
          result[3] += 0;
          result[4] += 82817755;
          result[5] += 770397;
        } else {
          result[0] += 31287841;
          result[1] += 2275479;
          result[2] += 0;
          result[3] += 5688698;
          result[4] += 23892533;
          result[5] += 22754793;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 93879;
          result[1] += 657153;
          result[2] += 0;
          result[3] += 4693953;
          result[4] += 5163348;
          result[5] += 75291011;
        } else {
          result[0] += 376751;
          result[1] += 0;
          result[2] += 376751;
          result[3] += 55759224;
          result[4] += 0;
          result[5] += 29386618;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42300000))) ) ) {
          result[0] += 0;
          result[1] += 85459963;
          result[2] += 0;
          result[3] += 0;
          result[4] += 439382;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 44050946;
          result[2] += 0;
          result[3] += 11012736;
          result[4] += 30835662;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 65975923;
          result[1] += 3200812;
          result[2] += 0;
          result[3] += 2220971;
          result[4] += 13064539;
          result[5] += 1437099;
        } else {
          result[0] += 16305746;
          result[1] += 1681004;
          result[2] += 25383172;
          result[3] += 21684962;
          result[4] += 4202512;
          result[5] += 16641947;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1561806;
          result[3] += 15618062;
          result[4] += 4685418;
          result[5] += 64034057;
        } else {
          result[0] += 2863311;
          result[1] += 11453246;
          result[2] += 32928082;
          result[3] += 17179869;
          result[4] += 0;
          result[5] += 21474836;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32212254;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 10737418;
        } else {
          result[0] += 5368709;
          result[1] += 0;
          result[2] += 75161927;
          result[3] += 4026531;
          result[4] += 0;
          result[5] += 1342177;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 29878033;
          result[3] += 52286558;
          result[4] += 0;
          result[5] += 3734754;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 65554763;
          result[3] += 20344581;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17179869;
          result[3] += 0;
          result[4] += 0;
          result[5] += 68719476;
        } else {
          result[0] += 876523;
          result[1] += 0;
          result[2] += 79106285;
          result[3] += 5916536;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 1952257;
          result[1] += 0;
          result[2] += 325376;
          result[3] += 0;
          result[4] += 74511175;
          result[5] += 9110536;
        } else {
          result[0] += 35463032;
          result[1] += 12609078;
          result[2] += 0;
          result[3] += 2364202;
          result[4] += 27582358;
          result[5] += 7880673;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 595145;
          result[2] += 892718;
          result[3] += 4959546;
          result[4] += 5157928;
          result[5] += 74294007;
        } else {
          result[0] += 1097755;
          result[1] += 274438;
          result[2] += 1921071;
          result[3] += 42812453;
          result[4] += 1921071;
          result[5] += 37872555;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 31770990;
          result[2] += 0;
          result[3] += 1176703;
          result[4] += 52951651;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85700964;
          result[2] += 0;
          result[3] += 198381;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 14316557;
          result[1] += 3579139;
          result[2] += 1533916;
          result[3] += 10226112;
          result[4] += 48062729;
          result[5] += 8180890;
        } else {
          result[0] += 67727137;
          result[1] += 1364466;
          result[2] += 2108720;
          result[3] += 4899673;
          result[4] += 5457864;
          result[5] += 4341483;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 40423221;
          result[2] += 0;
          result[3] += 5052902;
          result[4] += 30317416;
          result[5] += 10105805;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4816785;
          result[3] += 33717500;
          result[4] += 1605595;
          result[5] += 45759464;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5259143;
          result[3] += 75381058;
          result[4] += 0;
          result[5] += 5259143;
        } else {
          result[0] += 1321528;
          result[1] += 0;
          result[2] += 55504192;
          result[3] += 19822925;
          result[4] += 2643056;
          result[5] += 6607641;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 7809031;
          result[1] += 0;
          result[2] += 0;
          result[3] += 46854188;
          result[4] += 0;
          result[5] += 31236125;
        } else {
          result[0] += 21931747;
          result[1] += 0;
          result[2] += 53001724;
          result[3] += 9138228;
          result[4] += 1827645;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 64637131;
          result[3] += 18710748;
          result[4] += 0;
          result[5] += 2551465;
        } else {
          result[0] += 1216704;
          result[1] += 0;
          result[2] += 81154197;
          result[3] += 3285102;
          result[4] += 0;
          result[5] += 243340;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 59055800;
          result[2] += 0;
          result[3] += 0;
          result[4] += 26843545;
          result[5] += 0;
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
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
          result[0] += 19554322;
          result[1] += 465579;
          result[2] += 0;
          result[3] += 0;
          result[4] += 59594126;
          result[5] += 6285317;
        } else {
          result[0] += 136348;
          result[1] += 954437;
          result[2] += 340870;
          result[3] += 16702650;
          result[4] += 3954096;
          result[5] += 63810942;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42950000))) ) ) {
          result[0] += 68850066;
          result[1] += 2249053;
          result[2] += 870601;
          result[3] += 2394154;
          result[4] += 9866816;
          result[5] += 1668652;
        } else {
          result[0] += 15081564;
          result[1] += 1311440;
          result[2] += 25573087;
          result[3] += 19890179;
          result[4] += 5027188;
          result[5] += 19015885;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 28633115;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51539607;
          result[5] += 5726623;
        } else {
          result[0] += 1385473;
          result[1] += 0;
          result[2] += 5541893;
          result[3] += 24938519;
          result[4] += 1385473;
          result[5] += 52647986;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 59652323;
          result[3] += 19088743;
          result[4] += 2386092;
          result[5] += 4772185;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 29173362;
          result[3] += 55105240;
          result[4] += 0;
          result[5] += 1620742;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 60129542;
          result[3] += 8589934;
          result[4] += 0;
          result[5] += 17179869;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1959680;
          result[1] += 653226;
          result[2] += 70221898;
          result[3] += 12084698;
          result[4] += 0;
          result[5] += 979840;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 83498432;
          result[3] += 2400913;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 1056139;
          result[2] += 0;
          result[3] += 0;
          result[4] += 84843206;
          result[5] += 0;
        } else {
          result[0] += 1282079;
          result[1] += 7692478;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51283191;
          result[5] += 25641595;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 356428;
          result[1] += 118809;
          result[2] += 0;
          result[3] += 2257382;
          result[4] += 3564288;
          result[5] += 79602436;
        } else {
          result[0] += 9314386;
          result[1] += 1182779;
          result[2] += 147847;
          result[3] += 33561362;
          result[4] += 2365558;
          result[5] += 39327411;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 5153960;
          result[1] += 30923764;
          result[2] += 3435973;
          result[3] += 3435973;
          result[4] += 42949672;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42df0000))) ) ) {
          result[0] += 39586377;
          result[1] += 4097808;
          result[2] += 10979034;
          result[3] += 11133668;
          result[4] += 12834645;
          result[5] += 7267811;
        } else {
          result[0] += 80593376;
          result[1] += 1434045;
          result[2] += 1864259;
          result[3] += 0;
          result[4] += 2007664;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9162596;
          result[3] += 17179869;
          result[4] += 2290649;
          result[5] += 57266230;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 44817050;
          result[3] += 26143279;
          result[4] += 0;
          result[5] += 14939016;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 69537565;
          result[1] += 0;
          result[2] += 4090445;
          result[3] += 0;
          result[4] += 12271335;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 85899345;
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 65966900;
          result[3] += 16135788;
          result[4] += 0;
          result[5] += 3796656;
        } else {
          result[0] += 866419;
          result[1] += 0;
          result[2] += 81814794;
          result[3] += 3094356;
          result[4] += 0;
          result[5] += 123774;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 371858;
          result[1] += 371858;
          result[2] += 0;
          result[3] += 0;
          result[4] += 82180759;
          result[5] += 2974869;
        } else {
          result[0] += 0;
          result[1] += 61356675;
          result[2] += 0;
          result[3] += 0;
          result[4] += 20452225;
          result[5] += 4090445;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4095716;
          result[4] += 2324595;
          result[5] += 79479033;
        } else {
          result[0] += 9708525;
          result[1] += 1899494;
          result[2] += 3376878;
          result[3] += 24904478;
          result[4] += 8653251;
          result[5] += 37356717;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a60000))) ) ) {
          result[0] += 0;
          result[1] += 29878033;
          result[2] += 0;
          result[3] += 0;
          result[4] += 56021312;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85094668;
          result[2] += 0;
          result[3] += 0;
          result[4] += 804677;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 66061459;
          result[1] += 3176655;
          result[2] += 388978;
          result[3] += 1815231;
          result[4] += 10761729;
          result[5] += 3695292;
        } else {
          result[0] += 12025908;
          result[1] += 429496;
          result[2] += 12670153;
          result[3] += 26628797;
          result[4] += 7516192;
          result[5] += 26628797;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 9042036;
          result[2] += 22605091;
          result[3] += 0;
          result[4] += 4521018;
          result[5] += 49731200;
        } else {
          result[0] += 753503;
          result[1] += 1507006;
          result[2] += 5274521;
          result[3] += 51991709;
          result[4] += 2260509;
          result[5] += 24112097;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42d70000))) ) ) {
          result[0] += 1651910;
          result[1] += 3303820;
          result[2] += 46253493;
          result[3] += 16519104;
          result[4] += 1651910;
          result[5] += 16519104;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42970000))) ) ) {
          result[0] += 63294254;
          result[1] += 0;
          result[2] += 18084072;
          result[3] += 4521018;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 2673909;
          result[1] += 0;
          result[2] += 63839591;
          result[3] += 17046173;
          result[4] += 0;
          result[5] += 2339670;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 33038209;
          result[1] += 0;
          result[2] += 46253493;
          result[3] += 0;
          result[4] += 0;
          result[5] += 6607641;
        } else {
          result[0] += 581186;
          result[1] += 0;
          result[2] += 80203719;
          result[3] += 5114440;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 60129542;
          result[5] += 25769803;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85246118;
          result[5] += 653226;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        } else {
          result[0] += 15158708;
          result[1] += 10105805;
          result[2] += 0;
          result[3] += 10105805;
          result[4] += 35370318;
          result[5] += 15158708;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4521018;
          result[3] += 0;
          result[4] += 81378327;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 365529;
          result[3] += 1340273;
          result[4] += 1583959;
          result[5] += 82609583;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
          result[0] += 35984861;
          result[1] += 1160801;
          result[2] += 0;
          result[3] += 8125613;
          result[4] += 34824059;
          result[5] += 5804009;
        } else {
          result[0] += 0;
          result[1] += 510293;
          result[2] += 1360781;
          result[3] += 28406318;
          result[4] += 4762736;
          result[5] += 50859216;
        }
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42480000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 24542670;
          result[3] += 0;
          result[4] += 61356675;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x425a0000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 6871947;
          result[1] += 65283502;
          result[2] += 0;
          result[3] += 0;
          result[4] += 13743895;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 3600571;
          result[1] += 33948244;
          result[2] += 0;
          result[3] += 1543102;
          result[4] += 44749958;
          result[5] += 2057469;
        } else {
          result[0] += 66390842;
          result[1] += 867044;
          result[2] += 2415338;
          result[3] += 4521018;
          result[4] += 6626697;
          result[5] += 5078404;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 2006994;
          result[1] += 4415386;
          result[2] += 15654553;
          result[3] += 40541280;
          result[4] += 6020982;
          result[5] += 17260148;
        } else {
          result[0] += 2473764;
          result[1] += 682417;
          result[2] += 73786429;
          result[3] += 6738876;
          result[4] += 170604;
          result[5] += 2047253;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 469395;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85429950;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 5726623;
          result[2] += 14316557;
          result[3] += 2863311;
          result[4] += 34359738;
          result[5] += 28633115;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 4286394;
          result[1] += 257183;
          result[2] += 0;
          result[3] += 3943482;
          result[4] += 7029686;
          result[5] += 70382597;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 968789;
          result[3] += 47147761;
          result[4] += 0;
          result[5] += 37782795;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 11647368;
          result[2] += 0;
          result[3] += 0;
          result[4] += 71340134;
          result[5] += 2911842;
        } else {
          result[0] += 0;
          result[1] += 84535864;
          result[2] += 0;
          result[3] += 681740;
          result[4] += 681740;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 71248289;
          result[1] += 2073893;
          result[2] += 735897;
          result[3] += 2475292;
          result[4] += 8161775;
          result[5] += 1204196;
        } else {
          result[0] += 10275041;
          result[1] += 411001;
          result[2] += 23427094;
          result[3] += 23221593;
          result[4] += 10891543;
          result[5] += 17673071;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3734754;
          result[3] += 5602131;
          result[4] += 14939016;
          result[5] += 61623443;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7158278;
          result[3] += 54880137;
          result[4] += 2386092;
          result[5] += 21474836;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 6482969;
          result[1] += 4051855;
          result[2] += 40518559;
          result[3] += 22690393;
          result[4] += 0;
          result[5] += 12155567;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 82164591;
          result[3] += 3734754;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 499414;
          result[1] += 0;
          result[2] += 63925094;
          result[3] += 19477177;
          result[4] += 0;
          result[5] += 1997659;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 80613232;
          result[3] += 5286113;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 848807;
          result[1] += 0;
          result[2] += 83183161;
          result[3] += 1867377;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 18084072;
          result[1] += 0;
          result[2] += 67815273;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42c20000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 10105805;
          result[4] += 20211610;
          result[5] += 55581929;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 58773236;
          result[4] += 22605091;
          result[5] += 4521018;
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
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1676713;
          result[4] += 2837515;
          result[5] += 81385116;
        } else {
          result[0] += 3579139;
          result[1] += 0;
          result[2] += 7158278;
          result[3] += 0;
          result[4] += 46528812;
          result[5] += 28633115;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
          result[0] += 55014187;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 30885158;
          result[5] += 0;
        } else {
          result[0] += 346368;
          result[1] += 519552;
          result[2] += 0;
          result[3] += 33424543;
          result[4] += 2424578;
          result[5] += 49184302;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 5655924;
          result[1] += 28633115;
          result[2] += 1767476;
          result[3] += 1767476;
          result[4] += 45247392;
          result[5] += 2827962;
        } else {
          result[0] += 71052545;
          result[1] += 463962;
          result[2] += 1193046;
          result[3] += 4573344;
          result[4] += 4904746;
          result[5] += 3711700;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 198841;
          result[1] += 85501663;
          result[2] += 0;
          result[3] += 0;
          result[4] += 198841;
          result[5] += 0;
        } else {
          result[0] += 71582788;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 923648;
          result[2] += 24938519;
          result[3] += 9236488;
          result[4] += 6465542;
          result[5] += 44335146;
        } else {
          result[0] += 2221534;
          result[1] += 0;
          result[2] += 31841998;
          result[3] += 39617370;
          result[4] += 2221534;
          result[5] += 9996906;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 40689163;
          result[1] += 12056048;
          result[2] += 15070060;
          result[3] += 3014012;
          result[4] += 3014012;
          result[5] += 12056048;
        } else {
          result[0] += 2309122;
          result[1] += 92364;
          result[2] += 75646843;
          result[3] += 6557907;
          result[4] += 0;
          result[5] += 1293108;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 1997659;
          result[2] += 0;
          result[3] += 0;
          result[4] += 81104963;
          result[5] += 2796722;
        } else {
          result[0] += 0;
          result[1] += 11453246;
          result[2] += 0;
          result[3] += 40086361;
          result[4] += 11453246;
          result[5] += 22906492;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 3575592;
          result[1] += 85133;
          result[2] += 170266;
          result[3] += 4597189;
          result[4] += 5278255;
          result[5] += 72192909;
        } else {
          result[0] += 0;
          result[1] += 1155596;
          result[2] += 1155596;
          result[3] += 48535056;
          result[4] += 1155596;
          result[5] += 33897499;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 1408185;
          result[1] += 30980091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53511067;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 82898495;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2625744;
          result[5] += 375106;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 69157942;
          result[1] += 1461551;
          result[2] += 1262248;
          result[3] += 3188838;
          result[4] += 7307755;
          result[5] += 3521009;
        } else {
          result[0] += 17281525;
          result[1] += 2287260;
          result[2] += 19568785;
          result[3] += 21856046;
          result[4] += 7115922;
          result[5] += 17789805;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42810000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 2712610;
          result[2] += 6329425;
          result[3] += 19892480;
          result[4] += 2712610;
          result[5] += 54252218;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 63294254;
          result[3] += 18084072;
          result[4] += 0;
          result[5] += 4521018;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 4772185;
          result[1] += 19088743;
          result[2] += 4772185;
          result[3] += 0;
          result[4] += 9544371;
          result[5] += 47721858;
        } else {
          result[0] += 12884901;
          result[1] += 0;
          result[2] += 25769803;
          result[3] += 47244640;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 65727731;
          result[3] += 15638667;
          result[4] += 0;
          result[5] += 4532947;
        } else {
          result[0] += 843528;
          result[1] += 0;
          result[2] += 80697585;
          result[3] += 4358231;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 84255339;
          result[5] += 1644006;
        } else {
          result[0] += 14316557;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 23860929;
          result[5] += 47721858;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 2333068;
          result[1] += 0;
          result[2] += 424194;
          result[3] += 2439117;
          result[4] += 5302428;
          result[5] += 75400536;
        } else {
          result[0] += 6037102;
          result[1] += 5002170;
          result[2] += 2587329;
          result[3] += 32255376;
          result[4] += 2242352;
          result[5] += 37775013;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 63050490;
          result[1] += 4199249;
          result[2] += 61753;
          result[3] += 1543841;
          result[4] += 14018081;
          result[5] += 3025929;
        } else {
          result[0] += 16419392;
          result[1] += 691342;
          result[2] += 20913120;
          result[3] += 26443863;
          result[4] += 4493728;
          result[5] += 16937899;
        }
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
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 14316557;
          result[2] += 4772185;
          result[3] += 0;
          result[4] += 9544371;
          result[5] += 57266230;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14102877;
          result[3] += 47436952;
          result[4] += 0;
          result[5] += 24359516;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 7809031;
          result[2] += 11713547;
          result[3] += 23427094;
          result[4] += 3904515;
          result[5] += 39045157;
        } else {
          result[0] += 1073741;
          result[1] += 2147483;
          result[2] += 64424509;
          result[3] += 8589934;
          result[4] += 1073741;
          result[5] += 8589934;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 70345554;
          result[3] += 14139810;
          result[4] += 0;
          result[5] += 1413981;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 578446;
          result[1] += 0;
          result[2] += 81994830;
          result[3] += 3326068;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 34359738;
          result[1] += 0;
          result[2] += 51539607;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x420a0000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1130254;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 84392339;
          result[5] += 376751;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 352528;
          result[1] += 235018;
          result[2] += 940074;
          result[3] += 1057584;
          result[4] += 1997659;
          result[5] += 81316480;
        } else {
          result[0] += 7158278;
          result[1] += 4601750;
          result[2] += 511305;
          result[3] += 11760029;
          result[4] += 14316557;
          result[5] += 47551423;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 719826;
          result[3] += 35511461;
          result[4] += 6238499;
          result[5] += 43429557;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 15618062;
          result[2] += 0;
          result[3] += 0;
          result[4] += 70281283;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 83508509;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2390836;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42890000))) ) ) {
          result[0] += 9710360;
          result[1] += 19420721;
          result[2] += 2240852;
          result[3] += 3734754;
          result[4] += 46310951;
          result[5] += 4481705;
        } else {
          result[0] += 69097199;
          result[1] += 325622;
          result[2] += 2409610;
          result[3] += 5340217;
          result[4] += 4688971;
          result[5] += 4037725;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 7324750;
          result[2] += 11320068;
          result[3] += 50607366;
          result[4] += 0;
          result[5] += 16647160;
        } else {
          result[0] += 5688698;
          result[1] += 2844349;
          result[2] += 49491676;
          result[3] += 12515136;
          result[4] += 1706609;
          result[5] += 13652876;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
          result[0] += 53448481;
          result[1] += 0;
          result[2] += 22906492;
          result[3] += 0;
          result[4] += 0;
          result[5] += 9544371;
        } else {
          result[0] += 1208540;
          result[1] += 0;
          result[2] += 77346597;
          result[3] += 6879384;
          result[4] += 0;
          result[5] += 464823;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 405185;
          result[1] += 405185;
          result[2] += 0;
          result[3] += 0;
          result[4] += 83468232;
          result[5] += 1620742;
        } else {
          result[0] += 30029852;
          result[1] += 13967373;
          result[2] += 0;
          result[3] += 698368;
          result[4] += 19554322;
          result[5] += 21649428;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2077224;
          result[4] += 3176931;
          result[5] += 80645189;
        } else {
          result[0] += 218573;
          result[1] += 437146;
          result[2] += 218573;
          result[3] += 32130289;
          result[4] += 6775775;
          result[5] += 46118987;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42480000))) ) ) {
          result[0] += 0;
          result[1] += 85270814;
          result[2] += 0;
          result[3] += 0;
          result[4] += 628531;
          result[5] += 0;
        } else {
          result[0] += 5153960;
          result[1] += 32641751;
          result[2] += 12025908;
          result[3] += 1717986;
          result[4] += 30923764;
          result[5] += 3435973;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 10027161;
          result[1] += 15709218;
          result[2] += 1002716;
          result[3] += 2005432;
          result[4] += 52475475;
          result[5] += 4679341;
        } else {
          result[0] += 63161283;
          result[1] += 401935;
          result[2] += 3502580;
          result[3] += 5110322;
          result[4] += 4995483;
          result[5] += 8727741;
        }
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 6737203;
          result[1] += 5052902;
          result[2] += 8421504;
          result[3] += 21895911;
          result[4] += 3368601;
          result[5] += 40423221;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9817068;
          result[3] += 60129542;
          result[4] += 0;
          result[5] += 15952735;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 47470691;
          result[3] += 32777381;
          result[4] += 0;
          result[5] += 5651272;
        } else {
          result[0] += 1952257;
          result[1] += 0;
          result[2] += 80042572;
          result[3] += 3904515;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 6442450;
          result[1] += 15032385;
          result[2] += 32212254;
          result[3] += 12884901;
          result[4] += 0;
          result[5] += 19327352;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 57570838;
          result[3] += 20104102;
          result[4] += 0;
          result[5] += 8224405;
        } else {
          result[0] += 1079137;
          result[1] += 0;
          result[2] += 80827399;
          result[3] += 3884895;
          result[4] += 0;
          result[5] += 107913;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 766958;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1150437;
          result[4] += 80147157;
          result[5] += 3834792;
        } else {
          result[0] += 0;
          result[1] += 78090314;
          result[2] += 0;
          result[3] += 0;
          result[4] += 7809031;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 119470;
          result[1] += 0;
          result[2] += 238941;
          result[3] += 1433646;
          result[4] += 2628352;
          result[5] += 81478934;
        } else {
          result[0] += 8208811;
          result[1] += 2052202;
          result[2] += 2052202;
          result[3] += 27558151;
          result[4] += 4250991;
          result[5] += 41776985;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
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
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
          result[0] += 8727741;
          result[1] += 20670965;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53744510;
          result[5] += 2756128;
        } else {
          result[0] += 60222024;
          result[1] += 272005;
          result[2] += 6528132;
          result[3] += 7616154;
          result[4] += 4896099;
          result[5] += 6364929;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 15618062;
          result[3] += 1952257;
          result[4] += 11713547;
          result[5] += 56615477;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 18147749;
          result[3] += 53233397;
          result[4] += 2419699;
          result[5] += 12098499;
        } else {
          result[0] += 14586681;
          result[1] += 8103711;
          result[2] += 43760044;
          result[3] += 9724454;
          result[4] += 0;
          result[5] += 9724454;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 11204262;
          result[1] += 0;
          result[2] += 14939016;
          result[3] += 37347541;
          result[4] += 0;
          result[5] += 22408525;
        } else {
          result[0] += 2115747;
          result[1] += 0;
          result[2] += 67703917;
          result[3] += 15656531;
          result[4] += 0;
          result[5] += 423149;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 4772185;
          result[1] += 0;
          result[2] += 59652323;
          result[3] += 21474836;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 275760;
          result[1] += 0;
          result[2] += 83003862;
          result[3] += 2619723;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          result[0] += 9314386;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 75895004;
          result[5] += 689954;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1193046;
          result[4] += 38177487;
          result[5] += 46528812;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 1867377;
          result[1] += 14939016;
          result[2] += 0;
          result[3] += 4668442;
          result[4] += 63490820;
          result[5] += 933688;
        } else {
          result[0] += 74966701;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9370837;
          result[5] += 1561806;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4772185;
          result[4] += 81127160;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3348227;
          result[4] += 2655490;
          result[5] += 79895628;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 888613;
          result[1] += 0;
          result[2] += 2962046;
          result[3] += 12440594;
          result[4] += 18364687;
          result[5] += 51243402;
        } else {
          result[0] += 6135667;
          result[1] += 4462303;
          result[2] += 2417081;
          result[3] += 43879319;
          result[4] += 3718586;
          result[5] += 25286387;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42660000))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 21974251;
          result[1] += 7990636;
          result[2] += 3995318;
          result[3] += 3995318;
          result[4] += 39953184;
          result[5] += 7990636;
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
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42900000))) ) ) {
          result[0] += 2147483;
          result[1] += 45097156;
          result[2] += 12884901;
          result[3] += 2147483;
          result[4] += 17179869;
          result[5] += 6442450;
        } else {
          result[0] += 76748259;
          result[1] += 86331;
          result[2] += 2330937;
          result[3] += 2158275;
          result[4] += 3884895;
          result[5] += 690648;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 10160137;
          result[1] += 2770946;
          result[2] += 25862168;
          result[3] += 8312839;
          result[4] += 10160137;
          result[5] += 28633115;
        } else {
          result[0] += 994013;
          result[1] += 248503;
          result[2] += 74385354;
          result[3] += 8200612;
          result[4] += 0;
          result[5] += 2070861;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42860000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x41ec0000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 983580;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 83932185;
          result[5] += 983580;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 68719476;
          result[5] += 17179869;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 127636;
          result[3] += 1786910;
          result[4] += 1659274;
          result[5] += 82325524;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 7420624;
          result[1] += 899469;
          result[2] += 224867;
          result[3] += 9894165;
          result[4] += 11917972;
          result[5] += 55542247;
        } else {
          result[0] += 356428;
          result[1] += 356428;
          result[2] += 1069286;
          result[3] += 57741469;
          result[4] += 1782144;
          result[5] += 24593588;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 933688;
          result[1] += 16806393;
          result[2] += 933688;
          result[3] += 4668442;
          result[4] += 56021312;
          result[5] += 6535819;
        } else {
          result[0] += 0;
          result[1] += 85067390;
          result[2] += 0;
          result[3] += 207988;
          result[4] += 623966;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 70312222;
          result[1] += 4152028;
          result[2] += 0;
          result[3] += 1157122;
          result[4] += 9461179;
          result[5] += 816792;
        } else {
          result[0] += 18138108;
          result[1] += 3422284;
          result[2] += 5475655;
          result[3] += 26693820;
          result[4] += 10951311;
          result[5] += 21218165;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4862227;
          result[3] += 34035589;
          result[4] += 0;
          result[5] += 47001528;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35240757;
          result[3] += 39645851;
          result[4] += 0;
          result[5] += 11012736;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 25769803;
          result[1] += 0;
          result[2] += 17179869;
          result[3] += 4294967;
          result[4] += 34359738;
          result[5] += 4294967;
        } else {
          result[0] += 1696556;
          result[1] += 0;
          result[2] += 76434345;
          result[3] += 6250472;
          result[4] += 178584;
          result[5] += 1339386;
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428f0000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42aa0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42980000))) ) ) {
          result[0] += 838042;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 84223261;
          result[5] += 838042;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 42949672;
        }
      } else {
        result[0] += 0;
        result[1] += 85899345;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
          result[0] += 528286;
          result[1] += 528286;
          result[2] += 0;
          result[3] += 1796173;
          result[4] += 4226290;
          result[5] += 78820310;
        } else {
          result[0] += 21122789;
          result[1] += 5632743;
          result[2] += 0;
          result[3] += 7040929;
          result[4] += 28163719;
          result[5] += 23939161;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1753047;
          result[3] += 49786559;
          result[4] += 0;
          result[5] += 34359738;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 29173362;
          result[3] += 6482969;
          result[4] += 1620742;
          result[5] += 48622271;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 11204262;
          result[2] += 0;
          result[3] += 0;
          result[4] += 74695083;
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 66905534;
          result[1] += 1643063;
          result[2] += 197167;
          result[3] += 3023236;
          result[4] += 12421558;
          result[5] += 1708785;
        } else {
          result[0] += 17179869;
          result[1] += 2147483;
          result[2] += 3817748;
          result[3] += 18134306;
          result[4] += 12884901;
          result[5] += 31735036;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 1385473;
          result[2] += 9236488;
          result[3] += 51724337;
          result[4] += 3694595;
          result[5] += 19858450;
        } else {
          result[0] += 1431655;
          result[1] += 0;
          result[2] += 52255435;
          result[3] += 20759008;
          result[4] += 715827;
          result[5] += 10737418;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 36969338;
          result[1] += 4349333;
          result[2] += 32620004;
          result[3] += 2174666;
          result[4] += 2174666;
          result[5] += 7611334;
        } else {
          result[0] += 1565154;
          result[1] += 0;
          result[2] += 76876692;
          result[3] += 6260616;
          result[4] += 0;
          result[5] += 1196882;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42aa0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x423c0000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 85899345;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          result[0] += 8947848;
          result[1] += 511305;
          result[2] += 1022611;
          result[3] += 0;
          result[4] += 65191467;
          result[5] += 10226112;
        } else {
          result[0] += 0;
          result[1] += 592409;
          result[2] += 962665;
          result[3] += 14439976;
          result[4] += 5035478;
          result[5] += 64868816;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 64873773;
          result[1] += 3773820;
          result[2] += 778724;
          result[3] += 2336174;
          result[4] += 10842246;
          result[5] += 3294605;
        } else {
          result[0] += 15005202;
          result[1] += 1522266;
          result[2] += 13700402;
          result[3] += 24791203;
          result[4] += 9568534;
          result[5] += 21311736;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3734754;
          result[3] += 72827706;
          result[4] += 0;
          result[5] += 9336885;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39881839;
          result[3] += 35280088;
          result[4] += 0;
          result[5] += 10737418;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 46631073;
          result[3] += 12271335;
          result[4] += 0;
          result[5] += 26996937;
        } else {
          result[0] += 3506095;
          result[1] += 0;
          result[2] += 75381058;
          result[3] += 5259143;
          result[4] += 1753047;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 71254211;
          result[3] += 12955311;
          result[4] += 0;
          result[5] += 1689823;
        } else {
          result[0] += 57266230;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 57266230;
          result[3] += 28633115;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 470251;
          result[1] += 0;
          result[2] += 83548086;
          result[3] += 1881007;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 979840;
          result[1] += 979840;
          result[2] += 2612907;
          result[3] += 326613;
          result[4] += 77080781;
          result[5] += 3919361;
        } else {
          result[0] += 0;
          result[1] += 71582788;
          result[2] += 0;
          result[3] += 14316557;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          result[0] += 49731200;
          result[1] += 2260509;
          result[2] += 0;
          result[3] += 0;
          result[4] += 33907636;
          result[5] += 0;
        } else {
          result[0] += 71108;
          result[1] += 142217;
          result[2] += 853304;
          result[3] += 12799571;
          result[4] += 4337632;
          result[5] += 67695511;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 30480413;
          result[2] += 5541893;
          result[3] += 5541893;
          result[4] += 44335146;
          result[5] += 0;
        } else {
          result[0] += 354955;
          result[1] += 84124566;
          result[2] += 0;
          result[3] += 354955;
          result[4] += 1064867;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 68031742;
          result[1] += 4180344;
          result[2] += 1483348;
          result[3] += 1618198;
          result[4] += 8967514;
          result[5] += 1618198;
        } else {
          result[0] += 16659267;
          result[1] += 260301;
          result[2] += 12234149;
          result[3] += 26030104;
          result[4] += 11973848;
          result[5] += 18741675;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9544371;
          result[3] += 0;
          result[4] += 66810602;
          result[5] += 9544371;
        } else {
          result[0] += 0;
          result[1] += 1455921;
          result[2] += 7279605;
          result[3] += 26206580;
          result[4] += 0;
          result[5] += 50957239;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5052902;
          result[3] += 55581929;
          result[4] += 0;
          result[5] += 25264513;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 51113660;
          result[3] += 29106389;
          result[4] += 0;
          result[5] += 5679295;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 2863311;
          result[1] += 0;
          result[2] += 62420191;
          result[3] += 15461882;
          result[4] += 1145324;
          result[5] += 4008636;
        } else {
          result[0] += 70740637;
          result[1] += 10105805;
          result[2] += 5052902;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1135233;
          result[1] += 0;
          result[2] += 73790187;
          result[3] += 10595514;
          result[4] += 0;
          result[5] += 378411;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 83281461;
          result[3] += 2617884;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 673720;
          result[1] += 1010580;
          result[2] += 1010580;
          result[3] += 336860;
          result[4] += 80172722;
          result[5] += 2694881;
        } else {
          result[0] += 2684354;
          result[1] += 69793218;
          result[2] += 5368709;
          result[3] += 0;
          result[4] += 5368709;
          result[5] += 2684354;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 5321198;
          result[1] += 337853;
          result[2] += 0;
          result[3] += 4476563;
          result[4] += 7179394;
          result[5] += 68584335;
        } else {
          result[0] += 2445532;
          result[1] += 0;
          result[2] += 8253673;
          result[3] += 44630976;
          result[4] += 0;
          result[5] += 30569162;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
          result[0] += 4629306;
          result[1] += 35491346;
          result[2] += 0;
          result[3] += 0;
          result[4] += 44749958;
          result[5] += 1028734;
        } else {
          result[0] += 61648850;
          result[1] += 525914;
          result[2] += 5025403;
          result[3] += 7654975;
          result[4] += 5142273;
          result[5] += 5901927;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          result[0] += 216371;
          result[1] += 85682974;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8259552;
          result[3] += 14867194;
          result[4] += 3303820;
          result[5] += 59468777;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 52494044;
          result[4] += 0;
          result[5] += 19088743;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42940000))) ) ) {
          result[0] += 0;
          result[1] += 68719476;
          result[2] += 0;
          result[3] += 5726623;
          result[4] += 5726623;
          result[5] += 5726623;
        } else {
          result[0] += 11951213;
          result[1] += 1493901;
          result[2] += 46310951;
          result[3] += 20167672;
          result[4] += 2987803;
          result[5] += 2987803;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52979836;
          result[3] += 26747101;
          result[4] += 0;
          result[5] += 6172408;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 81456276;
          result[3] += 4443069;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 380085;
          result[1] += 0;
          result[2] += 81338318;
          result[3] += 3927551;
          result[4] += 0;
          result[5] += 253390;
        } else {
          result[0] += 16106127;
          result[1] += 0;
          result[2] += 64424509;
          result[3] += 5368709;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 76354974;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9544371;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 49085340;
          result[2] += 0;
          result[3] += 0;
          result[4] += 36814005;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85698176;
          result[2] += 0;
          result[3] += 201169;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 14939016;
          result[1] += 3734754;
          result[2] += 0;
          result[3] += 0;
          result[4] += 62557132;
          result[5] += 4668442;
        } else {
          result[0] += 147593;
          result[1] += 1033153;
          result[2] += 147593;
          result[3] += 14980727;
          result[4] += 5460954;
          result[5] += 64129322;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 35302233;
          result[1] += 5704576;
          result[2] += 4381776;
          result[3] += 8267502;
          result[4] += 20668755;
          result[5] += 11574502;
        } else {
          result[0] += 80685425;
          result[1] += 0;
          result[2] += 3780092;
          result[3] += 651740;
          result[4] += 521392;
          result[5] += 260696;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 2112278;
          result[1] += 2816371;
          result[2] += 8449115;
          result[3] += 49990602;
          result[4] += 2816371;
          result[5] += 19714603;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 60634832;
          result[3] += 0;
          result[4] += 0;
          result[5] += 25264513;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
          result[0] += 15158708;
          result[1] += 5052902;
          result[2] += 20211610;
          result[3] += 7579354;
          result[4] += 2526451;
          result[5] += 35370318;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 78429837;
          result[3] += 7469508;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e50000))) ) ) {
          result[0] += 4481705;
          result[1] += 0;
          result[2] += 54527410;
          result[3] += 25396328;
          result[4] += 0;
          result[5] += 1493901;
        } else {
          result[0] += 75793540;
          result[1] += 0;
          result[2] += 10105805;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42960000))) ) ) {
          result[0] += 25769803;
          result[1] += 0;
          result[2] += 47244640;
          result[3] += 0;
          result[4] += 0;
          result[5] += 12884901;
        } else {
          result[0] += 195670;
          result[1] += 0;
          result[2] += 79442219;
          result[3] += 5870114;
          result[4] += 0;
          result[5] += 391340;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1468364;
          result[3] += 0;
          result[4] += 82962616;
          result[5] += 1468364;
        } else {
          result[0] += 0;
          result[1] += 18673770;
          result[2] += 0;
          result[3] += 18673770;
          result[4] += 22408525;
          result[5] += 26143279;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 868645;
          result[1] += 0;
          result[2] += 289548;
          result[3] += 2895483;
          result[4] += 6177031;
          result[5] += 75668637;
        } else {
          result[0] += 2167806;
          result[1] += 3793661;
          result[2] += 4335613;
          result[3] += 40375402;
          result[4] += 1625855;
          result[5] += 33601005;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 84270922;
          result[2] += 0;
          result[3] += 203552;
          result[4] += 1424870;
          result[5] += 0;
        } else {
          result[0] += 15158708;
          result[1] += 10105805;
          result[2] += 15158708;
          result[3] += 45476124;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 64973581;
          result[1] += 3294435;
          result[2] += 1037136;
          result[3] += 2257298;
          result[4] += 12140603;
          result[5] += 2196290;
        } else {
          result[0] += 13944699;
          result[1] += 3346727;
          result[2] += 18964790;
          result[3] += 22497447;
          result[4] += 4462303;
          result[5] += 22683377;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 13215283;
          result[4] += 3303820;
          result[5] += 69380240;
        } else {
          result[0] += 0;
          result[1] += 47721858;
          result[2] += 9544371;
          result[3] += 0;
          result[4] += 19088743;
          result[5] += 9544371;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 19253301;
          result[3] += 62202974;
          result[4] += 0;
          result[5] += 4443069;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 55759224;
          result[3] += 21098084;
          result[4] += 0;
          result[5] += 9042036;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 6607641;
          result[1] += 0;
          result[2] += 33038209;
          result[3] += 26430567;
          result[4] += 0;
          result[5] += 19822925;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 74966701;
          result[3] += 8589934;
          result[4] += 0;
          result[5] += 2342709;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 30317416;
          result[1] += 0;
          result[2] += 40423221;
          result[3] += 10105805;
          result[4] += 5052902;
          result[5] += 0;
        } else {
          result[0] += 114532;
          result[1] += 0;
          result[2] += 82234307;
          result[3] += 3206908;
          result[4] += 0;
          result[5] += 343597;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 454493;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85444852;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2147483;
          result[4] += 45097156;
          result[5] += 38654705;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 3664800;
          result[1] += 1608936;
          result[2] += 268156;
          result[3] += 4022341;
          result[4] += 4648039;
          result[5] += 71687071;
        } else {
          result[0] += 1952257;
          result[1] += 650752;
          result[2] += 325376;
          result[3] += 58893112;
          result[4] += 1626881;
          result[5] += 22450965;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 56278881;
          result[2] += 0;
          result[3] += 0;
          result[4] += 29620464;
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
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
          result[0] += 66095111;
          result[1] += 3705700;
          result[2] += 60749;
          result[3] += 2794462;
          result[4] += 11481595;
          result[5] += 1761726;
        } else {
          result[0] += 9269713;
          result[1] += 411987;
          result[2] += 28839108;
          result[3] += 19981382;
          result[4] += 8033751;
          result[5] += 19363401;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11453246;
          result[3] += 0;
          result[4] += 57266230;
          result[5] += 17179869;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1908874;
          result[3] += 9544371;
          result[4] += 0;
          result[5] += 74446099;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20211610;
          result[3] += 49265801;
          result[4] += 3789677;
          result[5] += 12632256;
        } else {
          result[0] += 6737203;
          result[1] += 5052902;
          result[2] += 60634832;
          result[3] += 13474407;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 81127160;
          result[3] += 4772185;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 65075262;
          result[1] += 0;
          result[2] += 20824083;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 68100382;
          result[3] += 16251227;
          result[4] += 0;
          result[5] += 1547735;
        } else {
          result[0] += 695541;
          result[1] += 0;
          result[2] += 80450939;
          result[3] += 4752865;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b60000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 84648384;
          result[5] += 1250961;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1908874;
          result[3] += 9544371;
          result[4] += 45812984;
          result[5] += 28633115;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42940000))) ) ) {
          result[0] += 0;
          result[1] += 20211610;
          result[2] += 0;
          result[3] += 20211610;
          result[4] += 30317416;
          result[5] += 15158708;
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
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 59468777;
          result[5] += 26430567;
        } else {
          result[0] += 126508;
          result[1] += 0;
          result[2] += 126508;
          result[3] += 1771120;
          result[4] += 1012068;
          result[5] += 82863139;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 13263869;
          result[1] += 0;
          result[2] += 0;
          result[3] += 8842579;
          result[4] += 18948385;
          result[5] += 44844511;
        } else {
          result[0] += 1254005;
          result[1] += 0;
          result[2] += 5643022;
          result[3] += 49533199;
          result[4] += 3448513;
          result[5] += 26020604;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 19756849;
          result[2] += 0;
          result[3] += 0;
          result[4] += 66142496;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 84761606;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1137739;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 73194430;
          result[1] += 2188068;
          result[2] += 352914;
          result[3] += 2611565;
          result[4] += 6211292;
          result[5] += 1341074;
        } else {
          result[0] += 21069650;
          result[1] += 3241484;
          result[2] += 2431113;
          result[3] += 18233351;
          result[4] += 9319268;
          result[5] += 31604476;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12041964;
          result[3] += 52181845;
          result[4] += 802797;
          result[5] += 20872738;
        } else {
          result[0] += 1187548;
          result[1] += 395849;
          result[2] += 44730995;
          result[3] += 22959272;
          result[4] += 395849;
          result[5] += 16229830;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 29073624;
          result[1] += 0;
          result[2] += 34359738;
          result[3] += 11893755;
          result[4] += 3964585;
          result[5] += 6607641;
        } else {
          result[0] += 465326;
          result[1] += 0;
          result[2] += 78081853;
          result[3] += 5304726;
          result[4] += 0;
          result[5] += 2047438;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          result[0] += 433835;
          result[1] += 867670;
          result[2] += 0;
          result[3] += 0;
          result[4] += 84164005;
          result[5] += 433835;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1997659;
          result[3] += 3995318;
          result[4] += 59929776;
          result[5] += 19976592;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          result[0] += 71582788;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 14316557;
          result[5] += 0;
        } else {
          result[0] += 521957;
          result[1] += 1416742;
          result[2] += 820219;
          result[3] += 11781333;
          result[4] += 3728270;
          result[5] += 67630821;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42870000))) ) ) {
          result[0] += 3506095;
          result[1] += 31905471;
          result[2] += 2454267;
          result[3] += 3856705;
          result[4] += 39618881;
          result[5] += 4557924;
        } else {
          result[0] += 62695975;
          result[1] += 1171887;
          result[2] += 4921927;
          result[3] += 5449276;
          result[4] += 6796946;
          result[5] += 4863332;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 85246945;
          result[2] += 0;
          result[3] += 0;
          result[4] += 652400;
          result[5] += 0;
        } else {
          result[0] += 57266230;
          result[1] += 0;
          result[2] += 0;
          result[3] += 28633115;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4772185;
          result[3] += 0;
          result[4] += 0;
          result[5] += 81127160;
        } else {
          result[0] += 0;
          result[1] += 1533916;
          result[2] += 3067833;
          result[3] += 36047046;
          result[4] += 10737418;
          result[5] += 34513130;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17570320;
          result[3] += 60519993;
          result[4] += 0;
          result[5] += 7809031;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 58930946;
          result[3] += 12984784;
          result[4] += 998829;
          result[5] += 12984784;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 60280242;
          result[3] += 22605091;
          result[4] += 0;
          result[5] += 3014012;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42830000))) ) ) {
          result[0] += 46253493;
          result[1] += 0;
          result[2] += 26430567;
          result[3] += 0;
          result[4] += 13215283;
          result[5] += 0;
        } else {
          result[0] += 675612;
          result[1] += 0;
          result[2] += 79722314;
          result[3] += 4343225;
          result[4] += 96516;
          result[5] += 1061677;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42300000))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 84769091;
          result[5] += 1130254;
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42620000))) ) ) {
          result[0] += 58567735;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 22125589;
          result[5] += 5206020;
        } else {
          result[0] += 93572;
          result[1] += 1029294;
          result[2] += 187144;
          result[3] += 3368601;
          result[4] += 2900740;
          result[5] += 78319991;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11044201;
          result[3] += 28837637;
          result[4] += 4294967;
          result[5] += 41722539;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 773867;
          result[3] += 65778778;
          result[4] += 0;
          result[5] += 19346699;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
          result[0] += 18360165;
          result[1] += 2841454;
          result[2] += 5027188;
          result[3] += 15518711;
          result[4] += 20983046;
          result[5] += 23168780;
        } else {
          result[0] += 68808425;
          result[1] += 3176750;
          result[2] += 1461305;
          result[3] += 3113215;
          result[4] += 7624202;
          result[5] += 1715445;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c80000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9544371;
          result[3] += 2386092;
          result[4] += 14316557;
          result[5] += 59652323;
        } else {
          result[0] += 918709;
          result[1] += 2296773;
          result[2] += 27101932;
          result[3] += 42260640;
          result[4] += 1378064;
          result[5] += 11943224;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 2495864;
          result[1] += 0;
          result[2] += 67596337;
          result[3] += 13935244;
          result[4] += 207988;
          result[5] += 1663909;
        } else {
          result[0] += 822790;
          result[1] += 0;
          result[2] += 82772741;
          result[3] += 2303813;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 750212;
          result[2] += 0;
          result[3] += 0;
          result[4] += 84023814;
          result[5] += 1125318;
        } else {
          result[0] += 52971263;
          result[1] += 4294967;
          result[2] += 0;
          result[3] += 0;
          result[4] += 17179869;
          result[5] += 11453246;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 306418;
          result[2] += 0;
          result[3] += 3677023;
          result[4] += 6434790;
          result[5] += 75481113;
        } else {
          result[0] += 0;
          result[1] += 1923119;
          result[2] += 320519;
          result[3] += 43270192;
          result[4] += 6730918;
          result[5] += 33654594;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42500000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 16106127;
          result[2] += 0;
          result[3] += 0;
          result[4] += 69793218;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85483368;
          result[2] += 0;
          result[3] += 0;
          result[4] += 415977;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 66440775;
          result[1] += 2752363;
          result[2] += 192025;
          result[3] += 1856245;
          result[4] += 11905572;
          result[5] += 2752363;
        } else {
          result[0] += 18624194;
          result[1] += 1520342;
          result[2] += 18814237;
          result[3] += 23185221;
          result[4] += 4370984;
          result[5] += 19384365;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42480000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1073741;
          result[1] += 0;
          result[2] += 8589934;
          result[3] += 13958643;
          result[4] += 21474836;
          result[5] += 40802189;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17772278;
          result[3] += 53316835;
          result[4] += 0;
          result[5] += 14810232;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 65447120;
          result[3] += 19088743;
          result[4] += 0;
          result[5] += 1363481;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 12271335;
          result[2] += 18407002;
          result[3] += 6135667;
          result[4] += 0;
          result[5] += 49085340;
        } else {
          result[0] += 2816371;
          result[1] += 0;
          result[2] += 54919253;
          result[3] += 22530975;
          result[4] += 1408185;
          result[5] += 4224557;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 48318382;
          result[1] += 0;
          result[2] += 32212254;
          result[3] += 0;
          result[4] += 0;
          result[5] += 5368709;
        } else {
          result[0] += 788067;
          result[1] += 0;
          result[2] += 79003756;
          result[3] += 5811997;
          result[4] += 0;
          result[5] += 295525;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85291567;
          result[2] += 0;
          result[3] += 202592;
          result[4] += 405185;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 340870;
          result[1] += 340870;
          result[2] += 0;
          result[3] += 1363481;
          result[4] += 78059326;
          result[5] += 5794797;
        } else {
          result[0] += 2630914;
          result[1] += 328864;
          result[2] += 657728;
          result[3] += 14075390;
          result[4] += 4932963;
          result[5] += 63273484;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 63712544;
          result[1] += 4304901;
          result[2] += 198687;
          result[3] += 2450482;
          result[4] += 13643226;
          result[5] += 1589502;
        } else {
          result[0] += 16664076;
          result[1] += 2777346;
          result[2] += 22218768;
          result[3] += 22615532;
          result[4] += 6943365;
          result[5] += 14680257;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 8810189;
          result[4] += 13215283;
          result[5] += 63873872;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 18407002;
          result[3] += 47040117;
          result[4] += 0;
          result[5] += 20452225;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42db0000))) ) ) {
          result[0] += 2748779;
          result[1] += 3435973;
          result[2] += 52913997;
          result[3] += 24051816;
          result[4] += 0;
          result[5] += 2748779;
        } else {
          result[0] += 61740154;
          result[1] += 0;
          result[2] += 16106127;
          result[3] += 8053063;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x429c0000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
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
          result[5] += 85899345;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 8886139;
          result[2] += 32582510;
          result[3] += 29620464;
          result[4] += 0;
          result[5] += 14810232;
        } else {
          result[0] += 206986;
          result[1] += 0;
          result[2] += 80724686;
          result[3] += 4450207;
          result[4] += 0;
          result[5] += 517465;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 61356675;
          result[2] += 0;
          result[3] += 0;
          result[4] += 24542670;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 47905404;
          result[5] += 37993941;
        } else {
          result[0] += 0;
          result[1] += 8589934;
          result[2] += 0;
          result[3] += 77309411;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42680000))) ) ) {
          result[0] += 33960206;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 43948502;
          result[5] += 7990636;
        } else {
          result[0] += 312361;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3123612;
          result[4] += 3331853;
          result[5] += 79131518;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 17634965;
          result[1] += 3128784;
          result[2] += 568869;
          result[3] += 11092961;
          result[4] += 5973133;
          result[5] += 47500631;
        } else {
          result[0] += 1018569;
          result[1] += 679046;
          result[2] += 2037138;
          result[3] += 60774636;
          result[4] += 339523;
          result[5] += 21050432;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 1160801;
          result[1] += 20894435;
          result[2] += 0;
          result[3] += 0;
          result[4] += 63844108;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 83166184;
          result[2] += 0;
          result[3] += 195225;
          result[4] += 1952257;
          result[5] += 585677;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 75923446;
          result[1] += 2056101;
          result[2] += 152303;
          result[3] += 1751493;
          result[4] += 5406785;
          result[5] += 609215;
        } else {
          result[0] += 37361425;
          result[1] += 4470597;
          result[2] += 12773136;
          result[3] += 12134480;
          result[4] += 5428583;
          result[5] += 13731122;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 2735647;
          result[1] += 3829907;
          result[2] += 10942591;
          result[3] += 30639257;
          result[4] += 10395462;
          result[5] += 27356479;
        } else {
          result[0] += 2643056;
          result[1] += 0;
          result[2] += 62111834;
          result[3] += 7929170;
          result[4] += 2643056;
          result[5] += 10572227;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 4338350;
          result[1] += 0;
          result[2] += 67895190;
          result[3] += 11713547;
          result[4] += 0;
          result[5] += 1952257;
        } else {
          result[0] += 1012281;
          result[1] += 0;
          result[2] += 81705606;
          result[3] += 2892233;
          result[4] += 0;
          result[5] += 289223;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42870000))) ) ) {
          result[0] += 620211;
          result[1] += 310105;
          result[2] += 0;
          result[3] += 0;
          result[4] += 84348816;
          result[5] += 620211;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 57266230;
          result[3] += 14316557;
          result[4] += 0;
          result[5] += 14316557;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2751650;
          result[4] += 3469472;
          result[5] += 79678223;
        } else {
          result[0] += 6835001;
          result[1] += 738919;
          result[2] += 369459;
          result[3] += 31588791;
          result[4] += 5726623;
          result[5] += 40640550;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 32212254;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85691357;
          result[2] += 0;
          result[3] += 0;
          result[4] += 207988;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 67690267;
          result[1] += 3694595;
          result[2] += 131949;
          result[3] += 2045222;
          result[4] += 11215736;
          result[5] += 1121573;
        } else {
          result[0] += 13492043;
          result[1] += 674602;
          result[2] += 18663994;
          result[3] += 22936474;
          result[4] += 8320093;
          result[5] += 21812137;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11012736;
          result[3] += 0;
          result[4] += 0;
          result[5] += 74886609;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 1301505;
          result[2] += 6507526;
          result[3] += 45552683;
          result[4] += 1301505;
          result[5] += 31236125;
        } else {
          result[0] += 0;
          result[1] += 627002;
          result[2] += 38874156;
          result[3] += 42009169;
          result[4] += 0;
          result[5] += 4389017;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42910000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
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
          result[5] += 85899345;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 9900263;
          result[1] += 0;
          result[2] += 60275134;
          result[3] += 13103290;
          result[4] += 1164736;
          result[5] += 1455921;
        } else {
          result[0] += 1375389;
          result[1] += 0;
          result[2] += 80397786;
          result[3] += 3876098;
          result[4] += 0;
          result[5] += 250070;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 1437645;
          result[2] += 0;
          result[3] += 1437645;
          result[4] += 78711116;
          result[5] += 4312937;
        } else {
          result[0] += 0;
          result[1] += 64424509;
          result[2] += 0;
          result[3] += 17895697;
          result[4] += 3579139;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 125217;
          result[2] += 0;
          result[3] += 3506095;
          result[4] += 3380878;
          result[5] += 78887154;
        } else {
          result[0] += 6595268;
          result[1] += 321720;
          result[2] += 2252042;
          result[3] += 23163868;
          result[4] += 12547095;
          result[5] += 41019350;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42580000))) ) ) {
          result[0] += 786264;
          result[1] += 83147421;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1965660;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 24185252;
          result[2] += 0;
          result[3] += 0;
          result[4] += 59212170;
          result[5] += 2501922;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 72821721;
          result[1] += 1720740;
          result[2] += 825955;
          result[3] += 2546695;
          result[4] += 6125834;
          result[5] += 1858399;
        } else {
          result[0] += 19058917;
          result[1] += 805306;
          result[2] += 8589934;
          result[3] += 18790481;
          result[4] += 7784628;
          result[5] += 30870077;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1087333;
          result[3] += 34794671;
          result[4] += 3262000;
          result[5] += 46755340;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2386092;
          result[3] += 81127160;
          result[4] += 0;
          result[5] += 2386092;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 13665805;
          result[2] += 5856773;
          result[3] += 37092899;
          result[4] += 7809031;
          result[5] += 21474836;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 51746593;
          result[3] += 17593841;
          result[4] += 6209591;
          result[5] += 10349318;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35544556;
          result[3] += 39987626;
          result[4] += 0;
          result[5] += 10367162;
        } else {
          result[0] += 6285317;
          result[1] += 0;
          result[2] += 73328709;
          result[3] += 0;
          result[4] += 4190211;
          result[5] += 2095105;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 1184818;
          result[1] += 0;
          result[2] += 77901820;
          result[3] += 6516502;
          result[4] += 0;
          result[5] += 296204;
        } else {
          result[0] += 32212254;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 82717888;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3181457;
          result[5] += 0;
        } else {
          result[0] += 910593;
          result[1] += 1214125;
          result[2] += 607062;
          result[3] += 0;
          result[4] += 81346377;
          result[5] += 1821187;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 2962046;
          result[1] += 0;
          result[2] += 98734;
          result[3] += 4443069;
          result[4] += 5726623;
          result[5] += 72668871;
        } else {
          result[0] += 6291990;
          result[1] += 0;
          result[2] += 1367823;
          result[3] += 39119765;
          result[4] += 8754073;
          result[5] += 30365692;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 28633115;
          result[2] += 0;
          result[3] += 0;
          result[4] += 57266230;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85036035;
          result[2] += 0;
          result[3] += 215827;
          result[4] += 647482;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 27160975;
          result[1] += 5630933;
          result[2] += 5630933;
          result[3] += 18328138;
          result[4] += 11924330;
          result[5] += 17224033;
        } else {
          result[0] += 69982943;
          result[1] += 2543342;
          result[2] += 3363775;
          result[3] += 1804952;
          result[4] += 7630027;
          result[5] += 574303;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 27709466;
          result[3] += 44335146;
          result[4] += 0;
          result[5] += 13854733;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37580963;
          result[3] += 45634027;
          result[4] += 0;
          result[5] += 2684354;
        } else {
          result[0] += 9122054;
          result[1] += 0;
          result[2] += 66134894;
          result[3] += 7601712;
          result[4] += 0;
          result[5] += 3040684;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 69311886;
          result[3] += 13625413;
          result[4] += 0;
          result[5] += 2962046;
        } else {
          result[0] += 618871;
          result[1] += 0;
          result[2] += 81814794;
          result[3] += 3341905;
          result[4] += 0;
          result[5] += 123774;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 547129;
          result[1] += 820694;
          result[2] += 820694;
          result[3] += 0;
          result[4] += 80154485;
          result[5] += 3556342;
        } else {
          result[0] += 55902748;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 12271335;
          result[5] += 17725261;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 243340;
          result[2] += 0;
          result[3] += 2190068;
          result[4] += 2920091;
          result[5] += 80545845;
        } else {
          result[0] += 512831;
          result[1] += 1282079;
          result[2] += 256415;
          result[3] += 18205533;
          result[4] += 14102877;
          result[5] += 51539607;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425c0000))) ) ) {
          result[0] += 0;
          result[1] += 85710140;
          result[2] += 0;
          result[3] += 0;
          result[4] += 189205;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42344747;
          result[2] += 0;
          result[3] += 0;
          result[4] += 43554597;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 70192036;
          result[1] += 2103657;
          result[2] += 1402438;
          result[3] += 4487802;
          result[4] += 4978655;
          result[5] += 2734754;
        } else {
          result[0] += 18318592;
          result[1] += 0;
          result[2] += 8416650;
          result[3] += 32181311;
          result[4] += 4208325;
          result[5] += 22774466;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42890000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4772185;
          result[3] += 2386092;
          result[4] += 4772185;
          result[5] += 73968881;
        } else {
          result[0] += 0;
          result[1] += 5052902;
          result[2] += 6063483;
          result[3] += 33349157;
          result[4] += 9095224;
          result[5] += 32338577;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 31905471;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 11044201;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 61740154;
          result[3] += 23488102;
          result[4] += 0;
          result[5] += 671088;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 28633115;
          result[1] += 7809031;
          result[2] += 13015052;
          result[3] += 20824083;
          result[4] += 15618062;
          result[5] += 0;
        } else {
          result[0] += 6362914;
          result[1] += 0;
          result[2] += 52494044;
          result[3] += 4772185;
          result[4] += 0;
          result[5] += 22270200;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 3644214;
          result[1] += 0;
          result[2] += 71322487;
          result[3] += 10932644;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 141514;
          result[1] += 0;
          result[2] += 82927539;
          result[3] += 2830291;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 979840;
          result[1] += 1959680;
          result[2] += 0;
          result[3] += 0;
          result[4] += 81326757;
          result[5] += 1633067;
        } else {
          result[0] += 43838286;
          result[1] += 592409;
          result[2] += 0;
          result[3] += 0;
          result[4] += 19549506;
          result[5] += 21919143;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 5825620;
          result[4] += 3084152;
          result[5] += 76989573;
        } else {
          result[0] += 428425;
          result[1] += 2142128;
          result[2] += 1285276;
          result[3] += 29989796;
          result[4] += 8354300;
          result[5] += 43699417;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 44176806;
          result[2] += 0;
          result[3] += 2454267;
          result[4] += 34359738;
          result[5] += 4908534;
        } else {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42950000))) ) ) {
          result[0] += 67564301;
          result[1] += 2753614;
          result[2] += 67161;
          result[3] += 2149162;
          result[4] += 12156201;
          result[5] += 1208904;
        } else {
          result[0] += 17350530;
          result[1] += 853304;
          result[2] += 25030272;
          result[3] += 19341574;
          result[4] += 5688698;
          result[5] += 17634965;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 17179869;
          result[2] += 8589934;
          result[3] += 0;
          result[4] += 47244640;
          result[5] += 12884901;
        } else {
          result[0] += 0;
          result[1] += 5052902;
          result[2] += 2526451;
          result[3] += 15158708;
          result[4] += 7579354;
          result[5] += 55581929;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17602324;
          result[3] += 47878323;
          result[4] += 0;
          result[5] += 20418696;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 60702204;
          result[3] += 20615843;
          result[4] += 0;
          result[5] += 4581298;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x429c0000))) ) ) {
          result[0] += 0;
          result[1] += 57266230;
          result[2] += 0;
          result[3] += 0;
          result[4] += 28633115;
          result[5] += 0;
        } else {
          result[0] += 75161927;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42950000))) ) ) {
          result[0] += 21474836;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 21474836;
        } else {
          result[0] += 1004136;
          result[1] += 0;
          result[2] += 78505247;
          result[3] += 5385825;
          result[4] += 0;
          result[5] += 1004136;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 1145324;
          result[2] += 0;
          result[3] += 0;
          result[4] += 82845146;
          result[5] += 1908874;
        } else {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 2678155;
          result[1] += 99190;
          result[2] += 0;
          result[3] += 3670064;
          result[4] += 5058737;
          result[5] += 74393197;
        } else {
          result[0] += 3404547;
          result[1] += 4713988;
          result[2] += 1571329;
          result[3] += 35616801;
          result[4] += 5499653;
          result[5] += 35093025;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 0;
          result[1] += 84666340;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1233004;
          result[5] += 0;
        } else {
          result[0] += 2643056;
          result[1] += 11893755;
          result[2] += 660764;
          result[3] += 2643056;
          result[4] += 64754891;
          result[5] += 3303820;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 71077497;
          result[1] += 2021161;
          result[2] += 67372;
          result[3] += 2560137;
          result[4] += 7680412;
          result[5] += 2492765;
        } else {
          result[0] += 13642837;
          result[1] += 1852730;
          result[2] += 20548470;
          result[3] += 24590793;
          result[4] += 5221332;
          result[5] += 20043180;
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42db0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 10737418;
          result[5] += 75161927;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20861269;
          result[3] += 40495405;
          result[4] += 0;
          result[5] += 24542670;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 82595524;
          result[3] += 3303820;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42de0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39159995;
          result[3] += 36633544;
          result[4] += 2526451;
          result[5] += 7579354;
        } else {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 68719476;
          result[1] += 0;
          result[2] += 17179869;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 883536;
          result[1] += 0;
          result[2] += 79518251;
          result[3] += 5203046;
          result[4] += 0;
          result[5] += 294512;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d70000))) ) ) {
          result[0] += 600694;
          result[1] += 600694;
          result[2] += 0;
          result[3] += 0;
          result[4] += 79892398;
          result[5] += 4805557;
        } else {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1533916;
          result[4] += 5427705;
          result[5] += 78937723;
        } else {
          result[0] += 9970459;
          result[1] += 1380525;
          result[2] += 306783;
          result[3] += 29297812;
          result[4] += 9663676;
          result[5] += 35280088;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 18407002;
          result[2] += 0;
          result[3] += 0;
          result[4] += 61356675;
          result[5] += 6135667;
        } else {
          result[0] += 0;
          result[1] += 85134095;
          result[2] += 0;
          result[3] += 0;
          result[4] += 765250;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 69102196;
          result[1] += 2764087;
          result[2] += 0;
          result[3] += 1275732;
          result[4] += 9922366;
          result[5] += 2834961;
        } else {
          result[0] += 21330710;
          result[1] += 864758;
          result[2] += 16142158;
          result[3] += 24789744;
          result[4] += 3747286;
          result[5] += 19024687;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42890000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7809031;
          result[3] += 11713547;
          result[4] += 5856773;
          result[5] += 60519993;
        } else {
          result[0] += 4999432;
          result[1] += 3635951;
          result[2] += 13180322;
          result[3] += 42267932;
          result[4] += 3635951;
          result[5] += 18179755;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42d20000))) ) ) {
          result[0] += 5663693;
          result[1] += 0;
          result[2] += 63244573;
          result[3] += 14159232;
          result[4] += 943948;
          result[5] += 1887897;
        } else {
          result[0] += 66502719;
          result[1] += 0;
          result[2] += 11083786;
          result[3] += 8312839;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39268272;
          result[3] += 35177827;
          result[4] += 0;
          result[5] += 11453246;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 75591424;
          result[3] += 10307921;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 814763;
          result[1] += 0;
          result[2] += 79381238;
          result[3] += 5586949;
          result[4] += 0;
          result[5] += 116394;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 701219;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 82393250;
          result[5] += 2804876;
        } else {
          result[0] += 0;
          result[1] += 61356675;
          result[2] += 0;
          result[3] += 6135667;
          result[4] += 0;
          result[5] += 18407002;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1064068;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2998738;
          result[4] += 4836674;
          result[5] += 76999864;
        } else {
          result[0] += 5198519;
          result[1] += 495097;
          result[2] += 2475485;
          result[3] += 40845510;
          result[4] += 7178907;
          result[5] += 29705825;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85120213;
          result[2] += 0;
          result[3] += 0;
          result[4] += 779132;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 65928523;
          result[1] += 1984678;
          result[2] += 124042;
          result[3] += 1550529;
          result[4] += 12776364;
          result[5] += 3535207;
        } else {
          result[0] += 17984436;
          result[1] += 2129735;
          result[2] += 13251689;
          result[3] += 25320192;
          result[4] += 4496109;
          result[5] += 22717182;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9544371;
          result[3] += 51698680;
          result[4] += 3181457;
          result[5] += 21474836;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 54663220;
          result[3] += 21474836;
          result[4] += 0;
          result[5] += 9761289;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 13743895;
          result[3] += 44667659;
          result[4] += 0;
          result[5] += 27487790;
        } else {
          result[0] += 1294965;
          result[1] += 0;
          result[2] += 69064800;
          result[3] += 14244615;
          result[4] += 0;
          result[5] += 1294965;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 122538;
          result[1] += 0;
          result[2] += 82100658;
          result[3] += 3676148;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 25769803;
          result[1] += 0;
          result[2] += 60129542;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cc0000))) ) ) {
          result[0] += 0;
          result[1] += 285379;
          result[2] += 0;
          result[3] += 0;
          result[4] += 80477128;
          result[5] += 5136837;
        } else {
          result[0] += 0;
          result[1] += 10105805;
          result[2] += 0;
          result[3] += 60634832;
          result[4] += 15158708;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1538765;
          result[1] += 362062;
          result[2] += 271546;
          result[3] += 5430938;
          result[4] += 4978360;
          result[5] += 73317671;
        } else {
          result[0] += 7974740;
          result[1] += 0;
          result[2] += 911398;
          result[3] += 38050903;
          result[4] += 5240543;
          result[5] += 33721759;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 20043180;
          result[2] += 0;
          result[3] += 0;
          result[4] += 65856165;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 84871841;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1027504;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 70794612;
          result[1] += 2823314;
          result[2] += 70582;
          result[3] += 1552823;
          result[4] += 10093349;
          result[5] += 564662;
        } else {
          result[0] += 17444854;
          result[1] += 2870672;
          result[2] += 20094705;
          result[3] += 22523735;
          result[4] += 3753955;
          result[5] += 19211421;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 8180890;
          result[2] += 0;
          result[3] += 4090445;
          result[4] += 2045222;
          result[5] += 71582788;
        } else {
          result[0] += 4090445;
          result[1] += 0;
          result[2] += 49085340;
          result[3] += 0;
          result[4] += 24542670;
          result[5] += 8180890;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 1997659;
          result[2] += 11985955;
          result[3] += 60928605;
          result[4] += 998829;
          result[5] += 9988296;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 56371445;
          result[3] += 5368709;
          result[4] += 0;
          result[5] += 24159191;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 5368709;
          result[1] += 3579139;
          result[2] += 23264406;
          result[3] += 26843545;
          result[4] += 1789569;
          result[5] += 25053975;
        } else {
          result[0] += 4685418;
          result[1] += 0;
          result[2] += 56225026;
          result[3] += 18741675;
          result[4] += 3123612;
          result[5] += 3123612;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 17179869;
          result[1] += 0;
          result[2] += 48676296;
          result[3] += 20043180;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1160801;
          result[1] += 0;
          result[2] += 78617951;
          result[3] += 5804009;
          result[4] += 0;
          result[5] += 316582;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x424a0000))) ) ) {
          result[0] += 11713547;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 66376767;
          result[5] += 7809031;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 83829482;
          result[5] += 2069863;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42870000))) ) ) {
          result[0] += 199765;
          result[1] += 199765;
          result[2] += 199765;
          result[3] += 5893094;
          result[4] += 3196254;
          result[5] += 76210698;
        } else {
          result[0] += 12587230;
          result[1] += 680390;
          result[2] += 1360781;
          result[3] += 28746513;
          result[4] += 8334788;
          result[5] += 34189640;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 25769803;
          result[2] += 0;
          result[3] += 1431655;
          result[4] += 58697886;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 84975697;
          result[2] += 0;
          result[3] += 0;
          result[4] += 923648;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 71211096;
          result[1] += 3614386;
          result[2] += 76901;
          result[3] += 922821;
          result[4] += 8997514;
          result[5] += 1076625;
        } else {
          result[0] += 18908661;
          result[1] += 720329;
          result[2] += 23050558;
          result[3] += 21970063;
          result[4] += 3241484;
          result[5] += 18008248;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 2147483;
          result[2] += 0;
          result[3] += 62277025;
          result[4] += 0;
          result[5] += 21474836;
        } else {
          result[0] += 0;
          result[1] += 1684300;
          result[2] += 25264513;
          result[3] += 20211610;
          result[4] += 8421504;
          result[5] += 30317416;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 0;
          result[4] += 0;
          result[5] += 57266230;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 75673233;
          result[3] += 8180890;
          result[4] += 0;
          result[5] += 2045222;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        } else {
          result[0] += 753503;
          result[1] += 0;
          result[2] += 59526739;
          result[3] += 21851587;
          result[4] += 0;
          result[5] += 3767515;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 607778;
          result[1] += 0;
          result[2] += 76782670;
          result[3] += 7495933;
          result[4] += 0;
          result[5] += 1012963;
        } else {
          result[0] += 657392;
          result[1] += 0;
          result[2] += 84584559;
          result[3] += 657392;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
          result[0] += 1967160;
          result[1] += 13770124;
          result[2] += 0;
          result[3] += 0;
          result[4] += 67539180;
          result[5] += 2622880;
        } else {
          result[0] += 69092952;
          result[1] += 2240852;
          result[2] += 0;
          result[3] += 746950;
          result[4] += 7282770;
          result[5] += 6535819;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 365529;
          result[2] += 1553498;
          result[3] += 7950258;
          result[4] += 5939848;
          result[5] += 70090210;
        } else {
          result[0] += 15766983;
          result[1] += 819064;
          result[2] += 5528682;
          result[3] += 23548092;
          result[4] += 16995579;
          result[5] += 23240943;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 73014444;
          result[2] += 0;
          result[3] += 4294967;
          result[4] += 0;
          result[5] += 8589934;
        } else {
          result[0] += 14316557;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 71582788;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 57266230;
          result[3] += 0;
          result[4] += 0;
          result[5] += 28633115;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 25769803;
          result[3] += 60129542;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 84540179;
          result[1] += 0;
          result[2] += 815500;
          result[3] += 135916;
          result[4] += 407750;
          result[5] += 0;
        } else {
          result[0] += 63773756;
          result[1] += 0;
          result[2] += 16919568;
          result[3] += 0;
          result[4] += 5206020;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41927061;
          result[3] += 37836616;
          result[4] += 0;
          result[5] += 6135667;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 78090314;
          result[3] += 0;
          result[4] += 0;
          result[5] += 7809031;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42700000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 57266230;
          result[4] += 0;
          result[5] += 28633115;
        } else {
          result[0] += 1910896;
          result[1] += 0;
          result[2] += 77527799;
          result[3] += 5641694;
          result[4] += 0;
          result[5] += 818955;
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
