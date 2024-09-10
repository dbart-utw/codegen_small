
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
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
          result[0] += 216917;
          result[1] += 433835;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41214332;
          result[5] += 1084587;
        } else {
          result[0] += 1022611;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1533916;
          result[4] += 21986142;
          result[5] += 18407002;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 198534;
          result[3] += 1455921;
          result[4] += 1323564;
          result[5] += 39971652;
        } else {
          result[0] += 3184827;
          result[1] += 818955;
          result[2] += 181990;
          result[3] += 13740255;
          result[4] += 2456866;
          result[5] += 22566777;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 332943;
          result[1] += 16314216;
          result[2] += 332943;
          result[3] += 332943;
          result[4] += 23638967;
          result[5] += 1997659;
        } else {
          result[0] += 300347;
          result[1] += 42449094;
          result[2] += 0;
          result[3] += 100115;
          result[4] += 100115;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 16227086;
          result[1] += 1860904;
          result[2] += 3498500;
          result[3] += 9378958;
          result[4] += 4317298;
          result[5] += 7666926;
        } else {
          result[0] += 36893620;
          result[1] += 445844;
          result[2] += 1560455;
          result[3] += 1114610;
          result[4] += 2414990;
          result[5] += 520151;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 1952257;
          result[2] += 0;
          result[3] += 4880644;
          result[4] += 1952257;
          result[5] += 34164512;
        } else {
          result[0] += 0;
          result[1] += 3904515;
          result[2] += 5856773;
          result[3] += 17570320;
          result[4] += 0;
          result[5] += 15618062;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 15032385;
          result[2] += 0;
          result[3] += 17179869;
          result[4] += 5368709;
          result[5] += 5368709;
        } else {
          result[0] += 8589934;
          result[1] += 0;
          result[2] += 23192823;
          result[3] += 4294967;
          result[4] += 0;
          result[5] += 6871947;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 13563054;
          result[3] += 2260509;
          result[4] += 0;
          result[5] += 27126109;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26272406;
          result[3] += 13935798;
          result[4] += 0;
          result[5] += 2741468;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 11369031;
          result[1] += 0;
          result[2] += 24001287;
          result[3] += 0;
          result[4] += 0;
          result[5] += 7579354;
        } else {
          result[0] += 116869;
          result[1] += 0;
          result[2] += 40787580;
          result[3] += 2045222;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 167772;
          result[1] += 0;
          result[2] += 0;
          result[3] += 167772;
          result[4] += 40936407;
          result[5] += 1677721;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1425177;
          result[4] += 647808;
          result[5] += 40876687;
        } else {
          result[0] += 3982606;
          result[1] += 312361;
          result[2] += 78090;
          result[3] += 11635456;
          result[4] += 3279793;
          result[5] += 23661365;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 32172981;
          result[1] += 2639189;
          result[2] += 125675;
          result[3] += 785473;
          result[4] += 6472298;
          result[5] += 754054;
        } else {
          result[0] += 7029879;
          result[1] += 385198;
          result[2] += 10689268;
          result[3] += 14252357;
          result[4] += 1540795;
          result[5] += 9052173;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42820000))) ) ) {
          result[0] += 100584;
          result[1] += 42849088;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 10737418;
          result[1] += 30064771;
          result[2] += 2147483;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 1193046;
          result[2] += 0;
          result[3] += 5965232;
          result[4] += 2386092;
          result[5] += 33405301;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 23696371;
          result[3] += 7405116;
          result[4] += 1481023;
          result[5] += 10367162;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3579139;
          result[3] += 32212254;
          result[4] += 3579139;
          result[5] += 3579139;
        } else {
          result[0] += 6737203;
          result[1] += 6737203;
          result[2] += 26948814;
          result[3] += 842150;
          result[4] += 0;
          result[5] += 1684300;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 1507006;
          result[1] += 0;
          result[2] += 11302545;
          result[3] += 24865600;
          result[4] += 0;
          result[5] += 5274521;
        } else {
          result[0] += 13421772;
          result[1] += 0;
          result[2] += 29527900;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 133384;
          result[1] += 0;
          result[2] += 34813244;
          result[3] += 7202740;
          result[4] += 0;
          result[5] += 800304;
        } else {
          result[0] += 235555;
          result[1] += 0;
          result[2] += 41771893;
          result[3] += 942223;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b20000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x423c0000))) ) ) {
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
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42855278;
          result[2] += 0;
          result[3] += 0;
          result[4] += 94394;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          result[0] += 8161775;
          result[1] += 535198;
          result[2] += 0;
          result[3] += 0;
          result[4] += 30372510;
          result[5] += 3880188;
        } else {
          result[0] += 173463;
          result[1] += 138771;
          result[2] += 69385;
          result[3] += 7563028;
          result[4] += 1977488;
          result[5] += 33027535;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 32612965;
          result[1] += 1635554;
          result[2] += 392533;
          result[3] += 1177599;
          result[4] += 6313242;
          result[5] += 817777;
        } else {
          result[0] += 8087215;
          result[1] += 1420727;
          result[2] += 11037956;
          result[3] += 11584390;
          result[4] += 1748587;
          result[5] += 9070796;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 954437;
          result[1] += 4772185;
          result[2] += 3817748;
          result[3] += 4772185;
          result[4] += 5726623;
          result[5] += 22906492;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3681400;
          result[3] += 28224070;
          result[4] += 0;
          result[5] += 11044201;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e50000))) ) ) {
          result[0] += 0;
          result[1] += 1789569;
          result[2] += 35791394;
          result[3] += 5368709;
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
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10021590;
          result[3] += 28633115;
          result[4] += 0;
          result[5] += 4294967;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32212254;
          result[3] += 3067833;
          result[4] += 0;
          result[5] += 7669584;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 539938;
          result[1] += 0;
          result[2] += 39268272;
          result[3] += 2945120;
          result[4] += 0;
          result[5] += 196341;
        } else {
          result[0] += 15952735;
          result[1] += 0;
          result[2] += 26996937;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          result[0] += 385198;
          result[1] += 1540795;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40638479;
          result[5] += 385198;
        } else {
          result[0] += 0;
          result[1] += 1684300;
          result[2] += 0;
          result[3] += 6737203;
          result[4] += 17685159;
          result[5] += 16843009;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1436007;
          result[4] += 587457;
          result[5] += 40926208;
        } else {
          result[0] += 4456316;
          result[1] += 230499;
          result[2] += 0;
          result[3] += 11678623;
          result[4] += 4533149;
          result[5] += 22051084;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 18084072;
          result[2] += 0;
          result[3] += 0;
          result[4] += 24865600;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42856708;
          result[2] += 0;
          result[3] += 0;
          result[4] += 92964;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 33033107;
          result[1] += 1326630;
          result[2] += 99497;
          result[3] += 1227133;
          result[4] += 5804009;
          result[5] += 1459293;
        } else {
          result[0] += 5450943;
          result[1] += 2349544;
          result[2] += 13721339;
          result[3] += 10619941;
          result[4] += 3101398;
          result[5] += 7706505;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42740000))) ) ) {
          result[0] += 0;
          result[1] += 39045157;
          result[2] += 3904515;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9730785;
          result[3] += 13757317;
          result[4] += 2013265;
          result[5] += 17448304;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42df0000))) ) ) {
          result[0] += 1561806;
          result[1] += 0;
          result[2] += 37483350;
          result[3] += 1561806;
          result[4] += 0;
          result[5] += 2342709;
        } else {
          result[0] += 22333829;
          result[1] += 6871947;
          result[2] += 12025908;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1717986;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4772185;
          result[3] += 26247022;
          result[4] += 0;
          result[5] += 11930464;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32212254;
          result[3] += 0;
          result[4] += 0;
          result[5] += 10737418;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 178214;
          result[1] += 0;
          result[2] += 35286453;
          result[3] += 6772147;
          result[4] += 0;
          result[5] += 712857;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41136862;
          result[3] += 1812810;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40337868;
          result[5] += 2611804;
        } else {
          result[0] += 0;
          result[1] += 173650;
          result[2] += 173650;
          result[3] += 1736509;
          result[4] += 1620742;
          result[5] += 39245118;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          result[0] += 14915576;
          result[1] += 179705;
          result[2] += 539117;
          result[3] += 1078234;
          result[4] += 25877627;
          result[5] += 359411;
        } else {
          result[0] += 0;
          result[1] += 252150;
          result[2] += 840502;
          result[3] += 14456641;
          result[4] += 3698210;
          result[5] += 23702167;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 0;
          result[1] += 42759630;
          result[2] += 0;
          result[3] += 0;
          result[4] += 190042;
          result[5] += 0;
        } else {
          result[0] += 7516192;
          result[1] += 28991029;
          result[2] += 0;
          result[3] += 2147483;
          result[4] += 4294967;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 33245014;
          result[1] += 2163876;
          result[2] += 295074;
          result[3] += 918008;
          result[4] += 5573621;
          result[5] += 754078;
        } else {
          result[0] += 9975407;
          result[1] += 2216757;
          result[2] += 6788819;
          result[3] += 11222333;
          result[4] += 1662567;
          result[5] += 11083786;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3303820;
          result[4] += 3303820;
          result[5] += 36342030;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7730941;
          result[3] += 28346784;
          result[4] += 0;
          result[5] += 6871947;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 25053975;
          result[3] += 0;
          result[4] += 0;
          result[5] += 17895697;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33554431;
          result[3] += 9395240;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 8589934;
          result[1] += 0;
          result[2] += 8589934;
          result[3] += 20615843;
          result[4] += 0;
          result[5] += 5153960;
        } else {
          result[0] += 2726963;
          result[1] += 0;
          result[2] += 33746171;
          result[3] += 5113056;
          result[4] += 0;
          result[5] += 1363481;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 28633115;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 212097;
          result[1] += 0;
          result[2] += 40245434;
          result[3] += 2280044;
          result[4] += 0;
          result[5] += 212097;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 319328;
          result[1] += 0;
          result[2] += 0;
          result[3] += 478992;
          result[4] += 40554709;
          result[5] += 1596642;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42870000))) ) ) {
          result[0] += 55996;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2071887;
          result[4] += 2631857;
          result[5] += 38189930;
        } else {
          result[0] += 4955731;
          result[1] += 991146;
          result[2] += 1404123;
          result[3] += 12389328;
          result[4] += 5451304;
          result[5] += 17758037;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0;
          result[1] += 9463487;
          result[2] += 0;
          result[3] += 4367763;
          result[4] += 26934540;
          result[5] += 2183881;
        } else {
          result[0] += 108185;
          result[1] += 42625116;
          result[2] += 0;
          result[3] += 0;
          result[4] += 216371;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 33649292;
          result[1] += 2002165;
          result[2] += 322929;
          result[3] += 1001082;
          result[4] += 3649107;
          result[5] += 2325095;
        } else {
          result[0] += 12312885;
          result[1] += 969518;
          result[2] += 7756148;
          result[3] += 10761656;
          result[4] += 1648181;
          result[5] += 9501282;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5506368;
          result[3] += 3303820;
          result[4] += 0;
          result[5] += 34139483;
        } else {
          result[0] += 968789;
          result[1] += 1614649;
          result[2] += 10333755;
          result[3] += 24542670;
          result[4] += 1937579;
          result[5] += 3552228;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 11302545;
          result[2] += 13563054;
          result[3] += 4521018;
          result[4] += 0;
          result[5] += 13563054;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39645851;
          result[3] += 1982292;
          result[4] += 0;
          result[5] += 1321528;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ef0000))) ) ) {
          result[0] += 6285317;
          result[1] += 0;
          result[2] += 34569248;
          result[3] += 2095105;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 37896770;
          result[1] += 0;
          result[2] += 2526451;
          result[3] += 0;
          result[4] += 0;
          result[5] += 2526451;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 3734754;
          result[1] += 0;
          result[2] += 31745410;
          result[3] += 7469508;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 63347;
          result[1] += 0;
          result[2] += 41302635;
          result[3] += 1583690;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 442780;
          result[1] += 1180747;
          result[2] += 0;
          result[3] += 0;
          result[4] += 37193531;
          result[5] += 4132614;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1826741;
          result[1] += 254894;
          result[2] += 42482;
          result[3] += 3228659;
          result[4] += 2039153;
          result[5] += 35557741;
        } else {
          result[0] += 1680639;
          result[1] += 0;
          result[2] += 1680639;
          result[3] += 25583066;
          result[4] += 746950;
          result[5] += 13258377;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 0;
          result[1] += 5206020;
          result[2] += 0;
          result[3] += 0;
          result[4] += 37743651;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42760049;
          result[2] += 0;
          result[3] += 0;
          result[4] += 189623;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 35826656;
          result[1] += 1375235;
          result[2] += 70524;
          result[3] += 811036;
          result[4] += 4196232;
          result[5] += 669986;
        } else {
          result[0] += 9266110;
          result[1] += 375653;
          result[2] += 7638280;
          result[3] += 8890457;
          result[4] += 4382619;
          result[5] += 12396552;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
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
          result[2] += 2078209;
          result[3] += 0;
          result[4] += 2078209;
          result[5] += 38793252;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 1867377;
          result[2] += 4481705;
          result[3] += 19794197;
          result[4] += 2987803;
          result[5] += 13818590;
        } else {
          result[0] += 16806393;
          result[1] += 7469508;
          result[2] += 14939016;
          result[3] += 0;
          result[4] += 3734754;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42e00000))) ) ) {
          result[0] += 15158708;
          result[1] += 0;
          result[2] += 25264513;
          result[3] += 0;
          result[4] += 0;
          result[5] += 2526451;
        } else {
          result[0] += 39214918;
          result[1] += 0;
          result[2] += 1867377;
          result[3] += 0;
          result[4] += 1867377;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 439382;
          result[1] += 0;
          result[2] += 32734021;
          result[3] += 8677811;
          result[4] += 0;
          result[5] += 1098457;
        } else {
          result[0] += 142927;
          result[1] += 0;
          result[2] += 42306499;
          result[3] += 500245;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x423c0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x421a0000))) ) ) {
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
          result[3] += 10737418;
          result[4] += 32212254;
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
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
          result[0] += 11588134;
          result[1] += 0;
          result[2] += 0;
          result[3] += 183938;
          result[4] += 27038980;
          result[5] += 4138619;
        } else {
          result[0] += 207888;
          result[1] += 665241;
          result[2] += 207888;
          result[3] += 4823002;
          result[4] += 3534096;
          result[5] += 33511555;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 31543810;
          result[1] += 2639932;
          result[2] += 0;
          result[3] += 1184585;
          result[4] += 5042948;
          result[5] += 2538396;
        } else {
          result[0] += 6098853;
          result[1] += 944892;
          result[2] += 8761733;
          result[3] += 15547781;
          result[4] += 944892;
          result[5] += 10651518;
        }
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 1741202;
          result[1] += 3482405;
          result[2] += 1741202;
          result[3] += 19733633;
          result[4] += 2321603;
          result[5] += 13929623;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33746171;
          result[3] += 6135667;
          result[4] += 0;
          result[5] += 3067833;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 7809031;
          result[1] += 0;
          result[2] += 7809031;
          result[3] += 0;
          result[4] += 3904515;
          result[5] += 23427094;
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
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 721843;
          result[1] += 1804608;
          result[2] += 24903591;
          result[3] += 12271335;
          result[4] += 0;
          result[5] += 3248294;
        } else {
          result[0] += 5228655;
          result[1] += 0;
          result[2] += 35480164;
          result[3] += 1867377;
          result[4] += 0;
          result[5] += 373475;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 657392;
          result[1] += 0;
          result[2] += 37471398;
          result[3] += 4820881;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42461608;
          result[3] += 488064;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 325376;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41648167;
          result[5] += 976128;
        } else {
          result[0] += 0;
          result[1] += 36814005;
          result[2] += 0;
          result[3] += 0;
          result[4] += 6135667;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1537348;
          result[1] += 48042;
          result[2] += 0;
          result[3] += 1681474;
          result[4] += 2594275;
          result[5] += 37088531;
        } else {
          result[0] += 4187836;
          result[1] += 292174;
          result[2] += 1850439;
          result[3] += 19186135;
          result[4] += 3700878;
          result[5] += 13732208;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 15684901;
          result[1] += 2879649;
          result[2] += 3676148;
          result[3] += 7413566;
          result[4] += 5452954;
          result[5] += 7842450;
        } else {
          result[0] += 34424082;
          result[1] += 1608601;
          result[2] += 2010752;
          result[3] += 844516;
          result[4] += 3739999;
          result[5] += 321720;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bf0000))) ) ) {
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
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4090445;
          result[3] += 10226112;
          result[4] += 0;
          result[5] += 28633115;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3904515;
          result[3] += 39045157;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42520000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1431655;
          result[1] += 0;
          result[2] += 24815366;
          result[3] += 9067153;
          result[4] += 477218;
          result[5] += 7158278;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 29734388;
          result[4] += 0;
          result[5] += 13215283;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 31841998;
          result[3] += 6664604;
          result[4] += 0;
          result[5] += 4443069;
        } else {
          result[0] += 266768;
          result[1] += 0;
          result[2] += 41028942;
          result[3] += 1547255;
          result[4] += 0;
          result[5] += 106707;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 380085;
          result[2] += 0;
          result[3] += 190042;
          result[4] += 40289073;
          result[5] += 2090470;
        } else {
          result[0] += 0;
          result[1] += 33132604;
          result[2] += 0;
          result[3] += 4908534;
          result[4] += 1227133;
          result[5] += 3681400;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 1716226;
          result[1] += 176023;
          result[2] += 0;
          result[3] += 1936255;
          result[4] += 3564470;
          result[5] += 35556696;
        } else {
          result[0] += 1138817;
          result[1] += 0;
          result[2] += 488064;
          result[3] += 24565911;
          result[4] += 650752;
          result[5] += 16106127;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
          result[0] += 1582356;
          result[1] += 17179869;
          result[2] += 904203;
          result[3] += 1582356;
          result[4] += 20796683;
          result[5] += 904203;
        } else {
          result[0] += 31790197;
          result[1] += 343368;
          result[2] += 1516544;
          result[3] += 3061702;
          result[4] += 3204772;
          result[5] += 3033088;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 42518017;
          result[2] += 0;
          result[3] += 107913;
          result[4] += 323741;
          result[5] += 0;
        } else {
          result[0] += 6135667;
          result[1] += 9203501;
          result[2] += 27610504;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 572662;
          result[2] += 1717986;
          result[3] += 14889219;
          result[4] += 1717986;
          result[5] += 24051816;
        } else {
          result[0] += 0;
          result[1] += 3435973;
          result[2] += 15118284;
          result[3] += 12025908;
          result[4] += 3779571;
          result[5] += 8589934;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42e30000))) ) ) {
          result[0] += 4880644;
          result[1] += 0;
          result[2] += 30748061;
          result[3] += 2440322;
          result[4] += 0;
          result[5] += 4880644;
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
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11713547;
          result[3] += 27331610;
          result[4] += 0;
          result[5] += 3904515;
        } else {
          result[0] += 3408704;
          result[1] += 0;
          result[2] += 32041819;
          result[3] += 6135667;
          result[4] += 0;
          result[5] += 1363481;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28454158;
          result[3] += 11811160;
          result[4] += 0;
          result[5] += 2684354;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40969121;
          result[3] += 1980551;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x423c0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42950000))) ) ) {
          result[0] += 88922;
          result[1] += 42327213;
          result[2] += 0;
          result[3] += 177845;
          result[4] += 355690;
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
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          result[0] += 16503496;
          result[1] += 946921;
          result[2] += 135274;
          result[3] += 473460;
          result[4] += 22049753;
          result[5] += 2840765;
        } else {
          result[0] += 1285918;
          result[1] += 542943;
          result[2] += 428639;
          result[3] += 8744244;
          result[4] += 4229242;
          result[5] += 27718684;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42950000))) ) ) {
          result[0] += 37068797;
          result[1] += 2844029;
          result[2] += 96407;
          result[3] += 482038;
          result[4] += 2361990;
          result[5] += 96407;
        } else {
          result[0] += 11612318;
          result[1] += 318145;
          result[2] += 16702650;
          result[3] += 8430861;
          result[4] += 1431655;
          result[5] += 4454040;
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4156419;
          result[4] += 0;
          result[5] += 38793252;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 28633115;
          result[4] += 0;
          result[5] += 14316557;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33038209;
          result[3] += 6607641;
          result[4] += 0;
          result[5] += 3303820;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42940000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 24338148;
          result[3] += 0;
          result[4] += 0;
          result[5] += 18611524;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26843545;
          result[3] += 15129998;
          result[4] += 0;
          result[5] += 976128;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 3506095;
          result[1] += 1314785;
          result[2] += 30678337;
          result[3] += 4820881;
          result[4] += 0;
          result[5] += 2629571;
        } else {
          result[0] += 226946;
          result[1] += 0;
          result[2] += 40566732;
          result[3] += 2099257;
          result[4] += 0;
          result[5] += 56736;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42c00000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 360921;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42227829;
          result[5] += 360921;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 23860929;
          result[5] += 19088743;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 40689163;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2260509;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 8589934;
          result[2] += 0;
          result[3] += 32212254;
          result[4] += 0;
          result[5] += 2147483;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
          result[0] += 2526451;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 32843867;
          result[5] += 7579354;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 940503;
          result[4] += 752403;
          result[5] += 41256766;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 27440068;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 14316557;
          result[5] += 1193046;
        } else {
          result[0] += 296204;
          result[1] += 0;
          result[2] += 1184818;
          result[3] += 15402641;
          result[4] += 3455720;
          result[5] += 22610287;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42950000))) ) ) {
          result[0] += 8308297;
          result[1] += 1971460;
          result[2] += 281637;
          result[3] += 8730753;
          result[4] += 7745022;
          result[5] += 15912501;
        } else {
          result[0] += 34372832;
          result[1] += 2389730;
          result[2] += 360096;
          result[3] += 1342177;
          result[4] += 3961059;
          result[5] += 523776;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x423c0000))) ) ) {
          result[0] += 109286;
          result[1] += 42621812;
          result[2] += 0;
          result[3] += 0;
          result[4] += 218573;
          result[5] += 0;
        } else {
          result[0] += 5506368;
          result[1] += 25329294;
          result[2] += 0;
          result[3] += 0;
          result[4] += 6607641;
          result[5] += 5506368;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 213679;
          result[2] += 7478798;
          result[3] += 22863756;
          result[4] += 0;
          result[5] += 12393437;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 9263654;
          result[4] += 0;
          result[5] += 5052902;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 7648571;
          result[1] += 0;
          result[2] += 26475825;
          result[3] += 4412637;
          result[4] += 882527;
          result[5] += 3530110;
        } else {
          result[0] += 247977;
          result[1] += 0;
          result[2] += 39626776;
          result[3] += 2777346;
          result[4] += 0;
          result[5] += 297572;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d20000))) ) ) {
          result[0] += 185929;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42763743;
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
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2321603;
          result[5] += 40628069;
        } else {
          result[0] += 20824083;
          result[1] += 1301505;
          result[2] += 433835;
          result[3] += 2169175;
          result[4] += 12581217;
          result[5] += 5639856;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 1867377;
          result[2] += 0;
          result[3] += 1867377;
          result[4] += 29878033;
          result[5] += 9336885;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 876523;
          result[4] += 741674;
          result[5] += 41331474;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0;
          result[1] += 163930;
          result[2] += 983580;
          result[3] += 8524362;
          result[4] += 6885062;
          result[5] += 26392737;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 766958;
          result[3] += 26076587;
          result[4] += 383479;
          result[5] += 15722648;
        }
      }
    }
  } else {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x425e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b80000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42500000))) ) ) {
          result[0] += 0;
          result[1] += 33405301;
          result[2] += 0;
          result[3] += 0;
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
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 27487790;
          result[2] += 0;
          result[3] += 0;
          result[4] += 15461882;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42890000))) ) ) {
          result[0] += 5741934;
          result[1] += 15847740;
          result[2] += 0;
          result[3] += 1378064;
          result[4] += 19752256;
          result[5] += 229677;
        } else {
          result[0] += 34157852;
          result[1] += 748932;
          result[2] += 227936;
          result[3] += 2604983;
          result[4] += 3028293;
          result[5] += 2181674;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 356428;
          result[1] += 534643;
          result[2] += 14435367;
          result[3] += 15148224;
          result[4] += 712857;
          result[5] += 11762151;
        } else {
          result[0] += 1262065;
          result[1] += 0;
          result[2] += 38216926;
          result[3] += 2800208;
          result[4] += 118318;
          result[5] += 552153;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42be0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42870000))) ) ) {
          result[0] += 844516;
          result[1] += 1568386;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39933544;
          result[5] += 603225;
        } else {
          result[0] += 0;
          result[1] += 13743895;
          result[2] += 8589934;
          result[3] += 5153960;
          result[4] += 12025908;
          result[5] += 3435973;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 8589934;
          result[2] += 0;
          result[3] += 0;
          result[4] += 34359738;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1113025;
          result[4] += 1178497;
          result[5] += 40658150;
        } else {
          result[0] += 4604204;
          result[1] += 1236950;
          result[2] += 1236950;
          result[3] += 12025908;
          result[4] += 2542620;
          result[5] += 21303037;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 36681542;
          result[1] += 519253;
          result[2] += 445074;
          result[3] += 1372312;
          result[4] += 3338057;
          result[5] += 593432;
        } else {
          result[0] += 12079595;
          result[1] += 671088;
          result[2] += 3858759;
          result[3] += 9563013;
          result[4] += 5704253;
          result[5] += 11072962;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 2863311;
          result[2] += 1908874;
          result[3] += 4772185;
          result[4] += 1908874;
          result[5] += 31496426;
        } else {
          result[0] += 300347;
          result[1] += 901042;
          result[2] += 6607641;
          result[3] += 24628483;
          result[4] += 300347;
          result[5] += 10211810;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 8053063;
          result[2] += 0;
          result[3] += 0;
          result[4] += 34896609;
          result[5] += 0;
        } else {
          result[0] += 5206020;
          result[1] += 0;
          result[2] += 29934620;
          result[3] += 2603010;
          result[4] += 0;
          result[5] += 5206020;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 10737418;
          result[4] += 0;
          result[5] += 32212254;
        } else {
          result[0] += 2816371;
          result[1] += 0;
          result[2] += 26755533;
          result[3] += 3520464;
          result[4] += 1408185;
          result[5] += 8449115;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32162313;
          result[3] += 9588764;
          result[4] += 0;
          result[5] += 1198595;
        } else {
          result[0] += 682643;
          result[1] += 0;
          result[2] += 40674193;
          result[3] += 1535948;
          result[4] += 0;
          result[5] += 56886;
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x422e0000))) ) ) {
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
          result[4] += 41098393;
          result[5] += 1851279;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 10737418;
          result[5] += 32212254;
        } else {
          result[0] += 37993941;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4955731;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 1244918;
          result[2] += 0;
          result[3] += 0;
          result[4] += 23653443;
          result[5] += 18051311;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2620839;
          result[4] += 1283676;
          result[5] += 39045157;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 12936648;
          result[2] += 0;
          result[3] += 2587329;
          result[4] += 4139727;
          result[5] += 23285967;
        } else {
          result[0] += 0;
          result[1] += 205500;
          result[2] += 3904515;
          result[3] += 25893104;
          result[4] += 411001;
          result[5] += 12535550;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 810371;
          result[1] += 6753093;
          result[2] += 1620742;
          result[3] += 2160989;
          result[4] += 29443486;
          result[5] += 2160989;
        } else {
          result[0] += 277094;
          result[1] += 41379469;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1293108;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 14076806;
          result[1] += 924753;
          result[2] += 3699014;
          result[3] += 8014532;
          result[4] += 5856773;
          result[5] += 10377791;
        } else {
          result[0] += 35701433;
          result[1] += 1002416;
          result[2] += 1079524;
          result[3] += 1927723;
          result[4] += 2313267;
          result[5] += 925307;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x426c0000))) ) ) {
          result[0] += 0;
          result[1] += 36022306;
          result[2] += 5541893;
          result[3] += 1385473;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 6068975;
          result[1] += 0;
          result[2] += 5135286;
          result[3] += 9336885;
          result[4] += 4668442;
          result[5] += 17740082;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 876523;
          result[1] += 876523;
          result[2] += 12709597;
          result[3] += 22351360;
          result[4] += 0;
          result[5] += 6135667;
        } else {
          result[0] += 695541;
          result[1] += 0;
          result[2] += 39080724;
          result[3] += 2738693;
          result[4] += 0;
          result[5] += 434713;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x423c0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
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
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 8589934;
          result[2] += 0;
          result[3] += 0;
          result[4] += 34359738;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42652100;
          result[2] += 0;
          result[3] += 198381;
          result[4] += 99190;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 4039154;
          result[1] += 0;
          result[2] += 269276;
          result[3] += 0;
          result[4] += 33524979;
          result[5] += 5116261;
        } else {
          result[0] += 29138405;
          result[1] += 3115956;
          result[2] += 0;
          result[3] += 1347440;
          result[4] += 8589934;
          result[5] += 757935;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 222768;
          result[1] += 534643;
          result[2] += 0;
          result[3] += 4633574;
          result[4] += 1514822;
          result[5] += 36043864;
        } else {
          result[0] += 6459322;
          result[1] += 2313787;
          result[2] += 3085049;
          result[3] += 11424323;
          result[4] += 6796749;
          result[5] += 12870440;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 28633115;
          result[4] += 0;
          result[5] += 14316557;
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 42182714;
          result[1] += 0;
          result[2] += 69723;
          result[3] += 278893;
          result[4] += 418340;
          result[5] += 0;
        } else {
          result[0] += 17895697;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 3579139;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 154495;
          result[1] += 0;
          result[2] += 32443997;
          result[3] += 7879256;
          result[4] += 154495;
          result[5] += 2317428;
        } else {
          result[0] += 36814005;
          result[1] += 0;
          result[2] += 4090445;
          result[3] += 2045222;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 458741;
          result[1] += 0;
          result[2] += 40541280;
          result[3] += 1892308;
          result[4] += 0;
          result[5] += 57342;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 191739;
          result[1] += 191739;
          result[2] += 0;
          result[3] += 1150437;
          result[4] += 39498359;
          result[5] += 1917396;
        } else {
          result[0] += 0;
          result[1] += 35370318;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2526451;
          result[5] += 5052902;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42620000))) ) ) {
          result[0] += 39987626;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2962046;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 1507006;
          result[2] += 0;
          result[3] += 3014012;
          result[4] += 9795539;
          result[5] += 28633115;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 35937481;
          result[5] += 7012191;
        } else {
          result[0] += 50057;
          result[1] += 100115;
          result[2] += 50057;
          result[3] += 2552952;
          result[4] += 1902199;
          result[5] += 38294288;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 570128;
          result[1] += 190042;
          result[2] += 2280513;
          result[3] += 7981797;
          result[4] += 6081369;
          result[5] += 25845820;
        } else {
          result[0] += 227246;
          result[1] += 0;
          result[2] += 3181457;
          result[3] += 31360078;
          result[4] += 0;
          result[5] += 8180890;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 10475529;
          result[2] += 0;
          result[3] += 1047552;
          result[4] += 31426589;
          result[5] += 0;
        } else {
          result[0] += 168100;
          result[1] += 42613471;
          result[2] += 0;
          result[3] += 0;
          result[4] += 168100;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 8232020;
          result[1] += 6442450;
          result[2] += 0;
          result[3] += 357913;
          result[4] += 25411889;
          result[5] += 2505397;
        } else {
          result[0] += 35826483;
          result[1] += 526344;
          result[2] += 701792;
          result[3] += 1684300;
          result[4] += 2421182;
          result[5] += 1789569;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42d70000))) ) ) {
          result[0] += 488064;
          result[1] += 2684354;
          result[2] += 7320966;
          result[3] += 10981450;
          result[4] += 3172419;
          result[5] += 18302417;
        } else {
          result[0] += 1952257;
          result[1] += 0;
          result[2] += 40997415;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1840700;
          result[1] += 0;
          result[2] += 31138512;
          result[3] += 8283151;
          result[4] += 0;
          result[5] += 1687308;
        } else {
          result[0] += 443924;
          result[1] += 0;
          result[2] += 40841032;
          result[3] += 1664716;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          result[0] += 543666;
          result[1] += 2355889;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39506450;
          result[5] += 543666;
        } else {
          result[0] += 38087445;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2431113;
          result[5] += 2431113;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1686505;
          result[4] += 2361107;
          result[5] += 38902059;
        } else {
          result[0] += 437369;
          result[1] += 1312108;
          result[2] += 1836951;
          result[3] += 13820872;
          result[4] += 3236533;
          result[5] += 22305838;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 315034;
          result[1] += 41374501;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1260137;
          result[5] += 0;
        } else {
          result[0] += 1468364;
          result[1] += 8076006;
          result[2] += 1101273;
          result[3] += 734182;
          result[4] += 29734388;
          result[5] += 1835456;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
          result[0] += 8947848;
          result[1] += 4026531;
          result[2] += 447392;
          result[3] += 11408506;
          result[4] += 8724152;
          result[5] += 9395240;
        } else {
          result[0] += 33076542;
          result[1] += 1432693;
          result[2] += 2242477;
          result[3] += 2086749;
          result[4] += 2834242;
          result[5] += 1276966;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 780903;
          result[3] += 9370837;
          result[4] += 5466322;
          result[5] += 27331610;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2300875;
          result[3] += 30678337;
          result[4] += 766958;
          result[5] += 9203501;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 2045222;
          result[2] += 2045222;
          result[3] += 0;
          result[4] += 4090445;
          result[5] += 34768782;
        } else {
          result[0] += 2454267;
          result[1] += 409044;
          result[2] += 22497447;
          result[3] += 4908534;
          result[4] += 4090445;
          result[5] += 8589934;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 913822;
          result[1] += 0;
          result[2] += 23150178;
          result[3] += 16144203;
          result[4] += 0;
          result[5] += 2741468;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42800000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 219972;
          result[1] += 0;
          result[2] += 41134898;
          result[3] += 1374829;
          result[4] += 0;
          result[5] += 219972;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d20000))) ) ) {
          result[0] += 0;
          result[1] += 182764;
          result[2] += 182764;
          result[3] += 0;
          result[4] += 40390969;
          result[5] += 2193174;
        } else {
          result[0] += 0;
          result[1] += 10737418;
          result[2] += 0;
          result[3] += 32212254;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 61887;
          result[3] += 990194;
          result[4] += 1918501;
          result[5] += 39979090;
        } else {
          result[0] += 3050630;
          result[1] += 240839;
          result[2] += 80279;
          result[3] += 13326440;
          result[4] += 3532309;
          result[5] += 22719172;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 32326078;
          result[1] += 2762134;
          result[2] += 364237;
          result[3] += 1426596;
          result[4] += 5008265;
          result[5] += 1062359;
        } else {
          result[0] += 6964811;
          result[1] += 1676713;
          result[2] += 7738679;
          result[3] += 10576195;
          result[4] += 3353427;
          result[5] += 12639843;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 42749441;
          result[2] += 0;
          result[3] += 200231;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 28633115;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 14316557;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 27790964;
          result[4] += 2526451;
          result[5] += 12632256;
        } else {
          result[0] += 0;
          result[1] += 6135667;
          result[2] += 7362801;
          result[3] += 6135667;
          result[4] += 4908534;
          result[5] += 18407002;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 6384410;
          result[1] += 1741202;
          result[2] += 8706014;
          result[3] += 8706014;
          result[4] += 2321603;
          result[5] += 15090425;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38793252;
          result[3] += 0;
          result[4] += 0;
          result[5] += 4156419;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42910000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 27531841;
          result[3] += 14867194;
          result[4] += 0;
          result[5] += 550636;
        } else {
          result[0] += 438759;
          result[1] += 0;
          result[2] += 39878356;
          result[3] += 2437552;
          result[4] += 0;
          result[5] += 195004;
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d00000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42180000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 139901;
          result[2] += 279802;
          result[3] += 279802;
          result[4] += 38892537;
          result[5] += 3357629;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42e90000))) ) ) {
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
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
          result[0] += 20452225;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1022611;
          result[4] += 15339168;
          result[5] += 6135667;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1638869;
          result[4] += 1864920;
          result[5] += 39445883;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42820000))) ) ) {
          result[0] += 30516872;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 10172290;
          result[5] += 2260509;
        } else {
          result[0] += 128207;
          result[1] += 0;
          result[2] += 2692367;
          result[3] += 21282524;
          result[4] += 1538495;
          result[5] += 17308077;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d40000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 32595733;
          result[1] += 3259573;
          result[2] += 223696;
          result[3] += 894784;
          result[4] += 5145012;
          result[5] += 830871;
        } else {
          result[0] += 9842633;
          result[1] += 766958;
          result[2] += 6263493;
          result[3] += 9970459;
          result[4] += 2300875;
          result[5] += 13805252;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 501358;
          result[1] += 1169835;
          result[2] += 11364115;
          result[3] += 18383128;
          result[4] += 1504074;
          result[5] += 10027161;
        } else {
          result[0] += 538553;
          result[1] += 44879;
          result[2] += 39090036;
          result[3] += 2288854;
          result[4] += 359035;
          result[5] += 628312;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c10000))) ) ) {
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
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          result[0] += 148614;
          result[1] += 2526451;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39085688;
          result[5] += 1188918;
        } else {
          result[0] += 22150145;
          result[1] += 2160989;
          result[2] += 270123;
          result[3] += 2160989;
          result[4] += 6753093;
          result[5] += 9454330;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 164558;
          result[2] += 0;
          result[3] += 2084403;
          result[4] += 2578077;
          result[5] += 38122634;
        } else {
          result[0] += 2323930;
          result[1] += 172142;
          result[2] += 3184645;
          result[3] += 17386440;
          result[4] += 4647860;
          result[5] += 15234653;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42950000))) ) ) {
          result[0] += 32824654;
          result[1] += 2612907;
          result[2] += 195968;
          result[3] += 1404437;
          result[4] += 4311297;
          result[5] += 1600406;
        } else {
          result[0] += 8453586;
          result[1] += 1908874;
          result[2] += 12680379;
          result[3] += 9135327;
          result[4] += 2999659;
          result[5] += 7771845;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 42538671;
          result[2] += 0;
          result[3] += 102750;
          result[4] += 308251;
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
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1385473;
          result[4] += 2770946;
          result[5] += 38793252;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5368709;
          result[3] += 21474836;
          result[4] += 2300875;
          result[5] += 13805252;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
          result[0] += 11083786;
          result[1] += 18011153;
          result[2] += 4156419;
          result[3] += 0;
          result[4] += 2770946;
          result[5] += 6927366;
        } else {
          result[0] += 0;
          result[1] += 692736;
          result[2] += 32558623;
          result[3] += 9005576;
          result[4] += 0;
          result[5] += 692736;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30409622;
          result[3] += 10659042;
          result[4] += 0;
          result[5] += 1881007;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39423953;
          result[3] += 3205199;
          result[4] += 0;
          result[5] += 320519;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42880000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 433105;
          result[1] += 0;
          result[2] += 41145064;
          result[3] += 1299317;
          result[4] += 0;
          result[5] += 72184;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 13338407;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 18673770;
          result[5] += 10937494;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 118974;
          result[3] += 1130254;
          result[4] += 1308715;
          result[5] += 40391728;
        } else {
          result[0] += 0;
          result[1] += 173885;
          result[2] += 521655;
          result[3] += 17997130;
          result[4] += 3477706;
          result[5] += 20779295;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 631612;
          result[1] += 15790320;
          result[2] += 631612;
          result[3] += 631612;
          result[4] += 24632900;
          result[5] += 631612;
        } else {
          result[0] += 198841;
          result[1] += 41955467;
          result[2] += 0;
          result[3] += 99420;
          result[4] += 695943;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 35745872;
          result[1] += 990095;
          result[2] += 477977;
          result[3] += 1433931;
          result[4] += 3140993;
          result[5] += 1160801;
        } else {
          result[0] += 8017272;
          result[1] += 1717986;
          result[2] += 11166914;
          result[3] += 10785140;
          result[4] += 1908874;
          result[5] += 9353484;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 18407002;
          result[3] += 0;
          result[4] += 24542670;
          result[5] += 0;
        } else {
          result[0] += 1408185;
          result[1] += 1408185;
          result[2] += 4928650;
          result[3] += 5632743;
          result[4] += 1408185;
          result[5] += 28163719;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9641763;
          result[3] += 26295718;
          result[4] += 0;
          result[5] += 7012191;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34959036;
          result[3] += 3995318;
          result[4] += 0;
          result[5] += 3995318;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 29110333;
          result[3] += 12884901;
          result[4] += 0;
          result[5] += 954437;
        } else {
          result[0] += 1130254;
          result[1] += 0;
          result[2] += 40689163;
          result[3] += 0;
          result[4] += 1130254;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x43028000))) ) ) {
          result[0] += 171114;
          result[1] += 0;
          result[2] += 41181492;
          result[3] += 1540028;
          result[4] += 0;
          result[5] += 57038;
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
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 378411;
          result[2] += 0;
          result[3] += 567616;
          result[4] += 39543972;
          result[5] += 2459672;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1156724;
          result[1] += 251461;
          result[2] += 0;
          result[3] += 1659647;
          result[4] += 3118126;
          result[5] += 36763713;
        } else {
          result[0] += 870601;
          result[1] += 580400;
          result[2] += 3192205;
          result[3] += 23216039;
          result[4] += 2031403;
          result[5] += 13059022;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 19940919;
          result[2] += 0;
          result[3] += 0;
          result[4] += 23008753;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42850021;
          result[2] += 0;
          result[3] += 0;
          result[4] += 99651;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 31471743;
          result[1] += 863930;
          result[2] += 0;
          result[3] += 1079912;
          result[4] += 6726313;
          result[5] += 2807773;
        } else {
          result[0] += 7469508;
          result[1] += 816977;
          result[2] += 5368709;
          result[3] += 14238750;
          result[4] += 1400532;
          result[5] += 13655194;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4392580;
          result[3] += 2440322;
          result[4] += 5856773;
          result[5] += 30259996;
        } else {
          result[0] += 1481023;
          result[1] += 14810232;
          result[2] += 7405116;
          result[3] += 7405116;
          result[4] += 7405116;
          result[5] += 4443069;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1887897;
          result[3] += 26430567;
          result[4] += 1415923;
          result[5] += 13215283;
        } else {
          result[0] += 4955731;
          result[1] += 3303820;
          result[2] += 24778657;
          result[3] += 4955731;
          result[4] += 0;
          result[5] += 4955731;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7953643;
          result[3] += 31814572;
          result[4] += 0;
          result[5] += 3181457;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 27331610;
          result[3] += 0;
          result[4] += 0;
          result[5] += 15618062;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 4294967;
          result[1] += 0;
          result[2] += 15032385;
          result[3] += 12884901;
          result[4] += 0;
          result[5] += 10737418;
        } else {
          result[0] += 1124773;
          result[1] += 0;
          result[2] += 38325605;
          result[3] += 3249344;
          result[4] += 0;
          result[5] += 249949;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 165828;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39964753;
          result[5] += 2819090;
        } else {
          result[0] += 0;
          result[1] += 12271335;
          result[2] += 0;
          result[3] += 28633115;
          result[4] += 2045222;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 1203746;
          result[1] += 48149;
          result[2] += 96299;
          result[3] += 2263043;
          result[4] += 1877844;
          result[5] += 37460589;
        } else {
          result[0] += 5581906;
          result[1] += 465158;
          result[2] += 0;
          result[3] += 15350244;
          result[4] += 3566218;
          result[5] += 17986144;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 1101273;
          result[1] += 11288055;
          result[2] += 825955;
          result[3] += 825955;
          result[4] += 28082478;
          result[5] += 825955;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42890000))) ) ) {
          result[0] += 3332302;
          result[1] += 21474836;
          result[2] += 1481023;
          result[3] += 4072813;
          result[4] += 10367162;
          result[5] += 2221534;
        } else {
          result[0] += 31932404;
          result[1] += 412411;
          result[2] += 2150429;
          result[3] += 3741158;
          result[4] += 1708560;
          result[5] += 3004709;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 14316557;
          result[4] += 0;
          result[5] += 28633115;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5684515;
          result[3] += 27790964;
          result[4] += 0;
          result[5] += 9474192;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3435973;
          result[3] += 7730941;
          result[4] += 2576980;
          result[5] += 29205777;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 23735345;
          result[3] += 4521018;
          result[4] += 6781527;
          result[5] += 7911781;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 380085;
          result[1] += 760171;
          result[2] += 23185221;
          result[3] += 11782653;
          result[4] += 3800856;
          result[5] += 3040684;
        } else {
          result[0] += 37223049;
          result[1] += 0;
          result[2] += 2863311;
          result[3] += 0;
          result[4] += 2863311;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 186737;
          result[2] += 32118885;
          result[3] += 9523623;
          result[4] += 0;
          result[5] += 1120426;
        } else {
          result[0] += 130150;
          result[1] += 130150;
          result[2] += 41908468;
          result[3] += 715827;
          result[4] += 0;
          result[5] += 65075;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 36168145;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4521018;
          result[5] += 2260509;
        } else {
          result[0] += 613566;
          result[1] += 153391;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38654705;
          result[5] += 3528008;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42830000))) ) ) {
          result[0] += 183284;
          result[1] += 244379;
          result[2] += 61094;
          result[3] += 1955034;
          result[4] += 2443793;
          result[5] += 38062085;
        } else {
          result[0] += 3668617;
          result[1] += 447392;
          result[2] += 447392;
          result[3] += 14942907;
          result[4] += 4652881;
          result[5] += 18790481;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 17895697;
          result[2] += 0;
          result[3] += 0;
          result[4] += 25053975;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 33558747;
          result[1] += 1001238;
          result[2] += 276203;
          result[3] += 1277442;
          result[4] += 4729988;
          result[5] += 2106053;
        } else {
          result[0] += 8239013;
          result[1] += 1525743;
          result[2] += 8620449;
          result[3] += 10146192;
          result[4] += 2364902;
          result[5] += 12053371;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 0;
          result[4] += 21474836;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1867377;
          result[3] += 3734754;
          result[4] += 0;
          result[5] += 37347541;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 15777430;
          result[3] += 20744399;
          result[4] += 0;
          result[5] += 6427842;
        } else {
          result[0] += 0;
          result[1] += 557787;
          result[2] += 32909489;
          result[3] += 7809031;
          result[4] += 557787;
          result[5] += 1115575;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42700000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 25264513;
          result[1] += 2526451;
          result[2] += 10105805;
          result[3] += 2526451;
          result[4] += 0;
          result[5] += 2526451;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 19088743;
          result[3] += 2386092;
          result[4] += 4772185;
          result[5] += 16702650;
        } else {
          result[0] += 382503;
          result[1] += 0;
          result[2] += 40600008;
          result[3] += 1967160;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x429b0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a30000))) ) ) {
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
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          result[0] += 761519;
          result[1] += 304607;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38837470;
          result[5] += 3046076;
        } else {
          result[0] += 1762999;
          result[1] += 75021;
          result[2] += 0;
          result[3] += 6526849;
          result[4] += 2025574;
          result[5] += 32559228;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 33437329;
          result[1] += 2241966;
          result[2] += 0;
          result[3] += 896786;
          result[4] += 5797084;
          result[5] += 576505;
        } else {
          result[0] += 7754802;
          result[1] += 835132;
          result[2] += 6203841;
          result[3] += 12169074;
          result[4] += 5607318;
          result[5] += 10379504;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3734754;
          result[3] += 11826721;
          result[4] += 622459;
          result[5] += 26765738;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 29734388;
          result[3] += 6607641;
          result[4] += 6607641;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 15583509;
          result[3] += 25085649;
          result[4] += 0;
          result[5] += 2280513;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35060957;
          result[3] += 876523;
          result[4] += 0;
          result[5] += 7012191;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42520000))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 1090093;
          result[1] += 0;
          result[2] += 33792889;
          result[3] += 6104522;
          result[4] += 981083;
          result[5] += 981083;
        } else {
          result[0] += 485307;
          result[1] += 0;
          result[2] += 41251098;
          result[3] += 1051498;
          result[4] += 0;
          result[5] += 161769;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 0;
          result[4] += 0;
          result[5] += 28633115;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1227133;
          result[4] += 34359738;
          result[5] += 7362801;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42680000))) ) ) {
          result[0] += 30678337;
          result[1] += 1022611;
          result[2] += 0;
          result[3] += 2045222;
          result[4] += 6135667;
          result[5] += 3067833;
        } else {
          result[0] += 88830;
          result[1] += 222076;
          result[2] += 0;
          result[3] += 1821030;
          result[4] += 3642061;
          result[5] += 37175673;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 671088;
          result[3] += 7381975;
          result[4] += 671088;
          result[5] += 34225520;
        } else {
          result[0] += 0;
          result[1] += 195225;
          result[2] += 976128;
          result[3] += 28112513;
          result[4] += 1561806;
          result[5] += 12103998;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b60000))) ) ) {
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
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 33896724;
          result[1] += 1554895;
          result[2] += 172766;
          result[3] += 794724;
          result[4] += 5943156;
          result[5] += 587405;
        } else {
          result[0] += 8740635;
          result[1] += 1657706;
          result[2] += 5877323;
          result[3] += 10549042;
          result[4] += 2561910;
          result[5] += 13563054;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 1342177;
          result[1] += 5368709;
          result[2] += 2684354;
          result[3] += 16106127;
          result[4] += 4026531;
          result[5] += 13421772;
        } else {
          result[0] += 3136773;
          result[1] += 723870;
          result[2] += 24370320;
          result[3] += 8927741;
          result[4] += 723870;
          result[5] += 5067096;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
          result[0] += 27790964;
          result[1] += 0;
          result[2] += 12632256;
          result[3] += 2526451;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 461824;
          result[1] += 0;
          result[2] += 38885617;
          result[3] += 3325135;
          result[4] += 0;
          result[5] += 277094;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 445074;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42059524;
          result[5] += 445074;
        } else {
          result[0] += 2120971;
          result[1] += 2120971;
          result[2] += 0;
          result[3] += 530242;
          result[4] += 28633115;
          result[5] += 9544371;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 2260509;
          result[1] += 44323;
          result[2] += 0;
          result[3] += 1374034;
          result[4] += 2881041;
          result[5] += 36389764;
        } else {
          result[0] += 525378;
          result[1] += 525378;
          result[2] += 131344;
          result[3] += 20489752;
          result[4] += 788067;
          result[5] += 20489752;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 32004625;
          result[1] += 2817830;
          result[2] += 237291;
          result[3] += 1156793;
          result[4] += 5457693;
          result[5] += 1275439;
        } else {
          result[0] += 6607641;
          result[1] += 2831846;
          result[2] += 8613533;
          result[3] += 10737418;
          result[4] += 3775795;
          result[5] += 10383437;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c80000))) ) ) {
          result[0] += 0;
          result[1] += 42629948;
          result[2] += 106574;
          result[3] += 106574;
          result[4] += 106574;
          result[5] += 0;
        } else {
          result[0] += 30678337;
          result[1] += 6135667;
          result[2] += 6135667;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7953643;
          result[3] += 30223843;
          result[4] += 0;
          result[5] += 4772185;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 23427094;
          result[3] += 3904515;
          result[4] += 0;
          result[5] += 15618062;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6781527;
          result[3] += 22605091;
          result[4] += 9042036;
          result[5] += 4521018;
        } else {
          result[0] += 3401954;
          result[1] += 0;
          result[2] += 33169054;
          result[3] += 5528175;
          result[4] += 0;
          result[5] += 850488;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 23008753;
          result[3] += 10737418;
          result[4] += 0;
          result[5] += 9203501;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37162128;
          result[3] += 5787544;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 443433;
          result[1] += 0;
          result[2] += 41049244;
          result[3] += 1330299;
          result[4] += 0;
          result[5] += 126695;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 159072;
          result[3] += 159072;
          result[4] += 41358944;
          result[5] += 1272582;
        } else {
          result[0] += 0;
          result[1] += 38506603;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4443069;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 697558;
          result[1] += 0;
          result[2] += 49825;
          result[3] += 946686;
          result[4] += 2889885;
          result[5] += 38365717;
        } else {
          result[0] += 3398894;
          result[1] += 411987;
          result[2] += 2883910;
          result[3] += 18642423;
          result[4] += 2265929;
          result[5] += 15346525;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 447392;
          result[1] += 11184810;
          result[2] += 0;
          result[3] += 0;
          result[4] += 31317469;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 41317381;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1632291;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 35300193;
          result[1] += 1125897;
          result[2] += 0;
          result[3] += 894094;
          result[4] += 3477035;
          result[5] += 2152450;
        } else {
          result[0] += 7513389;
          result[1] += 672840;
          result[2] += 9531911;
          result[3] += 14578217;
          result[4] += 784980;
          result[5] += 9868332;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 1160801;
          result[2] += 3482405;
          result[3] += 5804009;
          result[4] += 3482405;
          result[5] += 29020049;
        } else {
          result[0] += 12632256;
          result[1] += 5052902;
          result[2] += 7579354;
          result[3] += 5052902;
          result[4] += 7579354;
          result[5] += 5052902;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 1145324;
          result[1] += 0;
          result[2] += 13171233;
          result[3] += 24051816;
          result[4] += 0;
          result[5] += 4581298;
        } else {
          result[0] += 3655291;
          result[1] += 456911;
          result[2] += 30156153;
          result[3] += 6396759;
          result[4] += 0;
          result[5] += 2284557;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 8589934;
          result[4] += 0;
          result[5] += 34359738;
        } else {
          result[0] += 785664;
          result[1] += 785664;
          result[2] += 32212254;
          result[3] += 7594759;
          result[4] += 0;
          result[5] += 1571329;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 130546;
          result[1] += 0;
          result[2] += 41187300;
          result[3] += 1566553;
          result[4] += 0;
          result[5] += 65273;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
          result[0] += 770397;
          result[1] += 3659389;
          result[2] += 0;
          result[3] += 0;
          result[4] += 37556888;
          result[5] += 962997;
        } else {
          result[0] += 21474836;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9019431;
          result[5] += 12455405;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 105397;
          result[2] += 0;
          result[3] += 1897163;
          result[4] += 1949862;
          result[5] += 38997249;
        } else {
          result[0] += 254894;
          result[1] += 2421494;
          result[2] += 254894;
          result[3] += 19499406;
          result[4] += 1529365;
          result[5] += 18989618;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 6362914;
          result[2] += 0;
          result[3] += 0;
          result[4] += 36586758;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42058600;
          result[2] += 0;
          result[3] += 534643;
          result[4] += 356428;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 5343968;
          result[1] += 10094162;
          result[2] += 791699;
          result[3] += 1583398;
          result[4] += 23157196;
          result[5] += 1979247;
        } else {
          result[0] += 31119044;
          result[1] += 209656;
          result[2] += 2276272;
          result[3] += 3234703;
          result[4] += 2455978;
          result[5] += 3654016;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 36342030;
          result[4] += 3303820;
          result[5] += 3303820;
        } else {
          result[0] += 0;
          result[1] += 715827;
          result[2] += 7874106;
          result[3] += 14674471;
          result[4] += 3579139;
          result[5] += 16106127;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 25309628;
          result[3] += 16106127;
          result[4] += 0;
          result[5] += 1533916;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e90000))) ) ) {
          result[0] += 190887;
          result[1] += 1527099;
          result[2] += 32069089;
          result[3] += 6108397;
          result[4] += 572662;
          result[5] += 2481536;
        } else {
          result[0] += 37092899;
          result[1] += 0;
          result[2] += 5856773;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42900000))) ) ) {
          result[0] += 32212254;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 534643;
          result[1] += 59404;
          result[2] += 40929909;
          result[3] += 1425715;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42810000))) ) ) {
          result[0] += 0;
          result[1] += 1290333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40737672;
          result[5] += 921666;
        } else {
          result[0] += 2603010;
          result[1] += 0;
          result[2] += 10412041;
          result[3] += 3904515;
          result[4] += 10412041;
          result[5] += 15618062;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 2106185;
          result[1] += 247786;
          result[2] += 330382;
          result[3] += 2353972;
          result[4] += 4212371;
          result[5] += 33698974;
        } else {
          result[0] += 653226;
          result[1] += 489920;
          result[2] += 1633067;
          result[3] += 24496011;
          result[4] += 653226;
          result[5] += 15024220;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 11204262;
          result[2] += 0;
          result[3] += 0;
          result[4] += 31745410;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42589507;
          result[2] += 0;
          result[3] += 0;
          result[4] += 360164;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 18605354;
          result[1] += 1203331;
          result[2] += 3424866;
          result[3] += 7543961;
          result[4] += 5183581;
          result[5] += 6988578;
        } else {
          result[0] += 36774974;
          result[1] += 1256797;
          result[2] += 1530013;
          result[3] += 655720;
          result[4] += 2349664;
          result[5] += 382503;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 876523;
          result[3] += 876523;
          result[4] += 4382619;
          result[5] += 36814005;
        } else {
          result[0] += 692736;
          result[1] += 10391049;
          result[2] += 11776523;
          result[3] += 9005576;
          result[4] += 692736;
          result[5] += 10391049;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5856773;
          result[3] += 31236125;
          result[4] += 0;
          result[5] += 5856773;
        } else {
          result[0] += 2629571;
          result[1] += 0;
          result[2] += 35060957;
          result[3] += 3506095;
          result[4] += 0;
          result[5] += 1753047;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41082295;
          result[3] += 1867377;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21880022;
          result[3] += 19448908;
          result[4] += 0;
          result[5] += 1620742;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1633954;
          result[1] += 0;
          result[2] += 36180431;
          result[3] += 4435020;
          result[4] += 0;
          result[5] += 700266;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41626947;
          result[3] += 1244918;
          result[4] += 0;
          result[5] += 77807;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 925639;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40913266;
          result[5] += 1110767;
        } else {
          result[0] += 0;
          result[1] += 1227133;
          result[2] += 0;
          result[3] += 3067833;
          result[4] += 17179869;
          result[5] += 21474836;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 275318;
          result[1] += 0;
          result[2] += 660764;
          result[3] += 2037356;
          result[4] += 2753184;
          result[5] += 37223049;
        } else {
          result[0] += 3267909;
          result[1] += 0;
          result[2] += 3734754;
          result[3] += 20541147;
          result[4] += 466844;
          result[5] += 14939016;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42460000))) ) ) {
          result[0] += 0;
          result[1] += 42644343;
          result[2] += 0;
          result[3] += 0;
          result[4] += 305329;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 25085649;
          result[2] += 0;
          result[3] += 0;
          result[4] += 17864023;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 34836589;
          result[1] += 1059668;
          result[2] += 397375;
          result[3] += 1258355;
          result[4] += 4172443;
          result[5] += 1225241;
        } else {
          result[0] += 7206974;
          result[1] += 194783;
          result[2] += 5259143;
          result[3] += 11784377;
          result[4] += 3311312;
          result[5] += 15193081;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 1282079;
          result[2] += 1923119;
          result[3] += 3205199;
          result[4] += 5128319;
          result[5] += 31410954;
        } else {
          result[0] += 11713547;
          result[1] += 31236125;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 30422685;
          result[4] += 0;
          result[5] += 12526987;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4772185;
          result[3] += 4772185;
          result[4] += 0;
          result[5] += 33405301;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1997659;
          result[3] += 31962547;
          result[4] += 0;
          result[5] += 8989466;
        } else {
          result[0] += 1160801;
          result[1] += 0;
          result[2] += 29020049;
          result[3] += 3482405;
          result[4] += 0;
          result[5] += 9286415;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4772185;
          result[3] += 23860929;
          result[4] += 0;
          result[5] += 14316557;
        } else {
          result[0] += 1219666;
          result[1] += 0;
          result[2] += 38506603;
          result[3] += 2874927;
          result[4] += 43559;
          result[5] += 304916;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
          result[0] += 200699;
          result[1] += 1003497;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40340580;
          result[5] += 1404895;
        } else {
          result[0] += 0;
          result[1] += 1867377;
          result[2] += 0;
          result[3] += 622459;
          result[4] += 28010656;
          result[5] += 12449180;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 1361390;
          result[1] += 87831;
          result[2] += 87831;
          result[3] += 2942360;
          result[4] += 3293686;
          result[5] += 35176572;
        } else {
          result[0] += 2140793;
          result[1] += 267599;
          result[2] += 133799;
          result[3] += 20471339;
          result[4] += 2006994;
          result[5] += 17929146;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 15158708;
          result[2] += 0;
          result[3] += 0;
          result[4] += 27790964;
          result[5] += 0;
        } else {
          result[0] += 90230;
          result[1] += 41776677;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1082764;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 34332915;
          result[1] += 1609355;
          result[2] += 0;
          result[3] += 569980;
          result[4] += 5766856;
          result[5] += 670564;
        } else {
          result[0] += 7058858;
          result[1] += 695943;
          result[2] += 12228726;
          result[3] += 13123511;
          result[4] += 1491308;
          result[5] += 8351325;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6285317;
          result[3] += 12570635;
          result[4] += 523776;
          result[5] += 23569942;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37580963;
          result[3] += 0;
          result[4] += 0;
          result[5] += 5368709;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 18253611;
          result[3] += 23622320;
          result[4] += 0;
          result[5] += 1073741;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34359738;
          result[3] += 4908534;
          result[4] += 0;
          result[5] += 3681400;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 320519;
          result[1] += 0;
          result[2] += 37180313;
          result[3] += 5288579;
          result[4] += 0;
          result[5] += 160259;
        } else {
          result[0] += 151231;
          result[1] += 0;
          result[2] += 42193516;
          result[3] += 529309;
          result[4] += 0;
          result[5] += 75615;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cf0000))) ) ) {
          result[0] += 3098009;
          result[1] += 422455;
          result[2] += 0;
          result[3] += 0;
          result[4] += 35908742;
          result[5] += 3520464;
        } else {
          result[0] += 0;
          result[1] += 40802189;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2147483;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 111702;
          result[2] += 167553;
          result[3] += 1675539;
          result[4] += 2234053;
          result[5] += 38760823;
        } else {
          result[0] += 1610612;
          result[1] += 0;
          result[2] += 894784;
          result[3] += 15211342;
          result[4] += 3758096;
          result[5] += 21474836;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 185527;
          result[1] += 41836506;
          result[2] += 0;
          result[3] += 92763;
          result[4] += 742110;
          result[5] += 92763;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 11842740;
          result[1] += 736881;
          result[2] += 1947472;
          result[3] += 10684783;
          result[4] += 5737149;
          result[5] += 12000643;
        } else {
          result[0] += 34639270;
          result[1] += 1662080;
          result[2] += 1548756;
          result[3] += 1019913;
          result[4] += 3550808;
          result[5] += 528843;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9042036;
          result[3] += 13563054;
          result[4] += 0;
          result[5] += 20344581;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26430567;
          result[3] += 9911462;
          result[4] += 0;
          result[5] += 6607641;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 2342709;
          result[1] += 0;
          result[2] += 23427094;
          result[3] += 13275353;
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
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1257063;
          result[1] += 0;
          result[2] += 36454844;
          result[3] += 5237764;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 248264;
          result[1] += 0;
          result[2] += 41460088;
          result[3] += 1117188;
          result[4] += 0;
          result[5] += 124132;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42300000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 350609;
          result[1] += 0;
          result[2] += 175304;
          result[3] += 1051828;
          result[4] += 38742358;
          result[5] += 2629571;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 1301505;
          result[1] += 337427;
          result[2] += 0;
          result[3] += 1349709;
          result[4] += 4049127;
          result[5] += 35911903;
        } else {
          result[0] += 568869;
          result[1] += 568869;
          result[2] += 853304;
          result[3] += 23039228;
          result[4] += 0;
          result[5] += 17919399;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 2684354;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40265318;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42168769;
          result[2] += 0;
          result[3] += 585677;
          result[4] += 195225;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 29792554;
          result[1] += 2207976;
          result[2] += 332708;
          result[3] += 2026498;
          result[4] += 6170234;
          result[5] += 2419699;
        } else {
          result[0] += 6202969;
          result[1] += 628148;
          result[2] += 9814824;
          result[3] += 12484457;
          result[4] += 3062225;
          result[5] += 10757047;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c00000))) ) ) {
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
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 1717986;
          result[2] += 6012954;
          result[3] += 23192823;
          result[4] += 858993;
          result[5] += 11166914;
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
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42db0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 23463247;
          result[3] += 13123511;
          result[4] += 795364;
          result[5] += 5567550;
        } else {
          result[0] += 1894838;
          result[1] += 631612;
          result[2] += 36001931;
          result[3] += 1263225;
          result[4] += 1894838;
          result[5] += 1263225;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 203794;
          result[1] += 0;
          result[2] += 40096551;
          result[3] += 2394584;
          result[4] += 0;
          result[5] += 254743;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 385198;
          result[1] += 1155596;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40831079;
          result[5] += 577798;
        } else {
          result[0] += 18311876;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 12318898;
          result[5] += 12318898;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 917728;
          result[4] += 1407183;
          result[5] += 40624761;
        } else {
          result[0] += 272985;
          result[1] += 1091940;
          result[2] += 272985;
          result[3] += 15196176;
          result[4] += 3184827;
          result[5] += 22930757;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 2684354;
          result[2] += 0;
          result[3] += 1610612;
          result[4] += 38117834;
          result[5] += 536870;
        } else {
          result[0] += 0;
          result[1] += 41063659;
          result[2] += 171455;
          result[3] += 85727;
          result[4] += 1628829;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 35366090;
          result[1] += 934469;
          result[2] += 287529;
          result[3] += 1545469;
          result[4] += 3881644;
          result[5] += 934469;
        } else {
          result[0] += 9223166;
          result[1] += 1651910;
          result[2] += 7708915;
          result[3] += 13077624;
          result[4] += 3441480;
          result[5] += 7846574;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1533916;
          result[3] += 9203501;
          result[4] += 4601750;
          result[5] += 27610504;
        } else {
          result[0] += 1847297;
          result[1] += 3694595;
          result[2] += 6927366;
          result[3] += 19396626;
          result[4] += 2770946;
          result[5] += 8312839;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7809031;
          result[3] += 31236125;
          result[4] += 0;
          result[5] += 3904515;
        } else {
          result[0] += 2147483;
          result[1] += 536870;
          result[2] += 31138512;
          result[3] += 7516192;
          result[4] += 0;
          result[5] += 1610612;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a60000))) ) ) {
          result[0] += 5368709;
          result[1] += 0;
          result[2] += 37580963;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 30064771;
          result[1] += 8589934;
          result[2] += 4294967;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 144126;
          result[1] += 0;
          result[2] += 35455099;
          result[3] += 6485688;
          result[4] += 144126;
          result[5] += 720632;
        } else {
          result[0] += 664855;
          result[1] += 0;
          result[2] += 41154562;
          result[3] += 1063768;
          result[4] += 0;
          result[5] += 66485;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 967334;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41401936;
          result[5] += 580400;
        } else {
          result[0] += 16806393;
          result[1] += 2801065;
          result[2] += 0;
          result[3] += 0;
          result[4] += 7936352;
          result[5] += 15405860;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 476630;
          result[2] += 0;
          result[3] += 2012438;
          result[4] += 2224274;
          result[5] += 38236330;
        } else {
          result[0] += 227246;
          result[1] += 227246;
          result[2] += 1590728;
          result[3] += 18634249;
          result[4] += 1704352;
          result[5] += 20565848;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42774009;
          result[2] += 0;
          result[3] += 0;
          result[4] += 175663;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          result[0] += 33764459;
          result[1] += 1312173;
          result[2] += 384050;
          result[3] += 1376181;
          result[4] += 5472722;
          result[5] += 640084;
        } else {
          result[0] += 8300386;
          result[1] += 772128;
          result[2] += 9169031;
          result[3] += 9844644;
          result[4] += 5308386;
          result[5] += 9555095;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
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
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7669584;
          result[3] += 28377462;
          result[4] += 0;
          result[5] += 6902626;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37347541;
          result[3] += 1867377;
          result[4] += 0;
          result[5] += 3734754;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 2770946;
          result[2] += 2770946;
          result[3] += 9698313;
          result[4] += 12469259;
          result[5] += 15240206;
        } else {
          result[0] += 0;
          result[1] += 1160801;
          result[2] += 30761252;
          result[3] += 8125613;
          result[4] += 0;
          result[5] += 2902004;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 433835;
          result[1] += 216917;
          result[2] += 35791394;
          result[3] += 5856773;
          result[4] += 0;
          result[5] += 650752;
        } else {
          result[0] += 274438;
          result[1] += 0;
          result[2] += 41851917;
          result[3] += 754706;
          result[4] += 0;
          result[5] += 68609;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 550636;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42215490;
          result[5] += 183545;
        } else {
          result[0] += 0;
          result[1] += 11713547;
          result[2] += 0;
          result[3] += 2603010;
          result[4] += 15618062;
          result[5] += 13015052;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1199711;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1487642;
          result[4] += 1871549;
          result[5] += 38390769;
        } else {
          result[0] += 2401790;
          result[1] += 2119227;
          result[2] += 0;
          result[3] += 19496891;
          result[4] += 2401790;
          result[5] += 16529972;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 23427094;
          result[2] += 0;
          result[3] += 0;
          result[4] += 19522578;
          result[5] += 0;
        } else {
          result[0] += 196117;
          result[1] += 42655497;
          result[2] += 0;
          result[3] += 0;
          result[4] += 98058;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 32284317;
          result[1] += 1217067;
          result[2] += 32028;
          result[3] += 1377208;
          result[4] += 6533731;
          result[5] += 1505320;
        } else {
          result[0] += 7201142;
          result[1] += 385775;
          result[2] += 10415938;
          result[3] += 13244959;
          result[4] += 1671693;
          result[5] += 10030163;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 1047552;
          result[1] += 0;
          result[2] += 2095105;
          result[3] += 2095105;
          result[4] += 3142658;
          result[5] += 34569248;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1894838;
          result[3] += 36001931;
          result[4] += 0;
          result[5] += 5052902;
        } else {
          result[0] += 2386092;
          result[1] += 0;
          result[2] += 17895697;
          result[3] += 11930464;
          result[4] += 0;
          result[5] += 10737418;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1717986;
          result[3] += 5153960;
          result[4] += 0;
          result[5] += 36077725;
        } else {
          result[0] += 4668442;
          result[1] += 3267909;
          result[2] += 21007992;
          result[3] += 8870041;
          result[4] += 0;
          result[5] += 5135286;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 561433;
          result[1] += 0;
          result[2] += 31721000;
          result[3] += 9825088;
          result[4] += 0;
          result[5] += 842150;
        } else {
          result[0] += 586889;
          result[1] += 106707;
          result[2] += 40442052;
          result[3] += 1814023;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 202592;
          result[2] += 0;
          result[3] += 405185;
          result[4] += 40923744;
          result[5] += 1418149;
        } else {
          result[0] += 0;
          result[1] += 29527900;
          result[2] += 0;
          result[3] += 2684354;
          result[4] += 0;
          result[5] += 10737418;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          result[0] += 36102623;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 6847049;
          result[5] += 0;
        } else {
          result[0] += 355838;
          result[1] += 142335;
          result[2] += 177919;
          result[3] += 5978082;
          result[4] += 1779191;
          result[5] += 34516307;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 14316557;
          result[2] += 0;
          result[3] += 0;
          result[4] += 27042386;
          result[5] += 1590728;
        } else {
          result[0] += 0;
          result[1] += 42365323;
          result[2] += 0;
          result[3] += 0;
          result[4] += 584349;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42870000))) ) ) {
          result[0] += 4610416;
          result[1] += 8492873;
          result[2] += 242653;
          result[3] += 2183881;
          result[4] += 25478619;
          result[5] += 1941228;
        } else {
          result[0] += 32461238;
          result[1] += 342352;
          result[2] += 1338286;
          result[3] += 2707696;
          result[4] += 3516893;
          result[5] += 2583204;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 354955;
          result[1] += 0;
          result[2] += 7454075;
          result[3] += 20409968;
          result[4] += 1952257;
          result[5] += 12778415;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 29878033;
          result[3] += 12137951;
          result[4] += 0;
          result[5] += 933688;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 6442450;
          result[1] += 2147483;
          result[2] += 12884901;
          result[3] += 17179869;
          result[4] += 0;
          result[5] += 4294967;
        } else {
          result[0] += 2386092;
          result[1] += 795364;
          result[2] += 36586758;
          result[3] += 2386092;
          result[4] += 795364;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d60000))) ) ) {
          result[0] += 4294967;
          result[1] += 34359738;
          result[2] += 4294967;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 32212254;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 950214;
          result[1] += 0;
          result[2] += 35538003;
          result[3] += 5131155;
          result[4] += 0;
          result[5] += 1330299;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41989546;
          result[3] += 896118;
          result[4] += 0;
          result[5] += 64008;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 679046;
          result[2] += 0;
          result[3] += 679046;
          result[4] += 38535872;
          result[5] += 3055707;
        } else {
          result[0] += 0;
          result[1] += 41160103;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1789569;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1131549;
          result[1] += 0;
          result[2] += 98395;
          result[3] += 1426735;
          result[4] += 2558285;
          result[5] += 37734706;
        } else {
          result[0] += 3987370;
          result[1] += 569624;
          result[2] += 2278497;
          result[3] += 15607706;
          result[4] += 2050647;
          result[5] += 18455827;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 4961695;
          result[1] += 11008760;
          result[2] += 310105;
          result[3] += 465158;
          result[4] += 24808475;
          result[5] += 1395476;
        } else {
          result[0] += 32925967;
          result[1] += 444088;
          result[2] += 1554308;
          result[3] += 3013455;
          result[4] += 2918293;
          result[5] += 2093558;
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
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42740000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1507006;
          result[3] += 6028024;
          result[4] += 2260509;
          result[5] += 33154133;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7099119;
          result[3] += 22717182;
          result[4] += 709911;
          result[5] += 12423459;
        } else {
          result[0] += 517465;
          result[1] += 0;
          result[2] += 26390762;
          result[3] += 13712847;
          result[4] += 0;
          result[5] += 2328596;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42860000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 9286415;
          result[1] += 0;
          result[2] += 23216039;
          result[3] += 2321603;
          result[4] += 2321603;
          result[5] += 5804009;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 1085370;
          result[1] += 0;
          result[2] += 37057660;
          result[3] += 3876324;
          result[4] += 0;
          result[5] += 930317;
        } else {
          result[0] += 297229;
          result[1] += 0;
          result[2] += 42280906;
          result[3] += 371536;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 987348;
          result[1] += 987348;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39658510;
          result[5] += 1316465;
        } else {
          result[0] += 13634816;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 8862630;
          result[5] += 20452225;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          result[0] += 550636;
          result[1] += 8810189;
          result[2] += 0;
          result[3] += 0;
          result[4] += 33038209;
          result[5] += 550636;
        } else {
          result[0] += 37929581;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4462303;
          result[5] += 557787;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 31101487;
          result[5] += 11848185;
        } else {
          result[0] += 95762;
          result[1] += 287288;
          result[2] += 95762;
          result[3] += 2729243;
          result[4] += 1771614;
          result[5] += 37970000;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 998829;
          result[3] += 2996488;
          result[4] += 3495903;
          result[5] += 35458450;
        } else {
          result[0] += 2607658;
          result[1] += 2300875;
          result[2] += 0;
          result[3] += 17640044;
          result[4] += 7669584;
          result[5] += 12731510;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 0;
          result[1] += 42642157;
          result[2] += 0;
          result[3] += 0;
          result[4] += 307515;
          result[5] += 0;
        } else {
          result[0] += 1590728;
          result[1] += 18558500;
          result[2] += 0;
          result[3] += 0;
          result[4] += 22800443;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
          result[0] += 3164712;
          result[1] += 3616814;
          result[2] += 1356305;
          result[3] += 18988276;
          result[4] += 1356305;
          result[5] += 14467258;
        } else {
          result[0] += 35133938;
          result[1] += 368666;
          result[2] += 1732733;
          result[3] += 2064533;
          result[4] += 2322600;
          result[5] += 1327200;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 536870;
          result[2] += 5905580;
          result[3] += 25769803;
          result[4] += 0;
          result[5] += 10737418;
        } else {
          result[0] += 2545165;
          result[1] += 1908874;
          result[2] += 19406889;
          result[3] += 8271788;
          result[4] += 954437;
          result[5] += 9862517;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 4820881;
          result[1] += 0;
          result[2] += 26295718;
          result[3] += 6573929;
          result[4] += 0;
          result[5] += 5259143;
        } else {
          result[0] += 237291;
          result[1] += 0;
          result[2] += 40054722;
          result[3] += 2467826;
          result[4] += 0;
          result[5] += 189832;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 1193046;
          result[1] += 1193046;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38774010;
          result[5] += 1789569;
        } else {
          result[0] += 17661547;
          result[1] += 6422381;
          result[2] += 0;
          result[3] += 0;
          result[4] += 8027976;
          result[5] += 10837767;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 511859;
          result[2] += 0;
          result[3] += 2698896;
          result[4] += 2559297;
          result[5] += 37179619;
        } else {
          result[0] += 488064;
          result[1] += 0;
          result[2] += 976128;
          result[3] += 24891287;
          result[4] += 2684354;
          result[5] += 13909837;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 13343587;
          result[2] += 0;
          result[3] += 833974;
          result[4] += 28772111;
          result[5] += 0;
        } else {
          result[0] += 97391;
          result[1] += 41975757;
          result[2] += 0;
          result[3] += 0;
          result[4] += 876523;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 32720487;
          result[1] += 1452092;
          result[2] += 484030;
          result[3] += 1032599;
          result[4] += 4259471;
          result[5] += 3000991;
        } else {
          result[0] += 11501776;
          result[1] += 582368;
          result[2] += 7279605;
          result[3] += 8881118;
          result[4] += 2911842;
          result[5] += 11792961;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428c0000))) ) ) {
          result[0] += 0;
          result[1] += 19685266;
          result[2] += 5368709;
          result[3] += 14316557;
          result[4] += 1789569;
          result[5] += 1789569;
        } else {
          result[0] += 1651910;
          result[1] += 2477865;
          result[2] += 1651910;
          result[3] += 4129776;
          result[4] += 8259552;
          result[5] += 24778657;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6135667;
          result[3] += 29363551;
          result[4] += 0;
          result[5] += 7450453;
        } else {
          result[0] += 858993;
          result[1] += 0;
          result[2] += 24910810;
          result[3] += 12884901;
          result[4] += 0;
          result[5] += 4294967;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 1342177;
          result[1] += 1342177;
          result[2] += 30870077;
          result[3] += 0;
          result[4] += 1342177;
          result[5] += 8053063;
        } else {
          result[0] += 32212254;
          result[1] += 0;
          result[2] += 7669584;
          result[3] += 3067833;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 31607984;
          result[3] += 9296466;
          result[4] += 0;
          result[5] += 2045222;
        } else {
          result[0] += 537617;
          result[1] += 0;
          result[2] += 40739467;
          result[3] += 1553117;
          result[4] += 0;
          result[5] += 119470;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 1639300;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 35900680;
          result[5] += 5409691;
        } else {
          result[0] += 19822925;
          result[1] += 6607641;
          result[2] += 0;
          result[3] += 0;
          result[4] += 14536812;
          result[5] += 1982292;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 59652;
          result[3] += 775480;
          result[4] += 1789569;
          result[5] += 40324970;
        } else {
          result[0] += 344285;
          result[1] += 86071;
          result[2] += 86071;
          result[3] += 15665010;
          result[4] += 3442859;
          result[5] += 23325373;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 1441264;
          result[1] += 14412641;
          result[2] += 1153011;
          result[3] += 1153011;
          result[4] += 24501491;
          result[5] += 288252;
        } else {
          result[0] += 100349;
          result[1] += 42447924;
          result[2] += 0;
          result[3] += 0;
          result[4] += 401398;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 36209772;
          result[1] += 1444264;
          result[2] += 103161;
          result[3] += 962842;
          result[4] += 3610661;
          result[5] += 618970;
        } else {
          result[0] += 7665558;
          result[1] += 1465474;
          result[2] += 9581948;
          result[3] += 11611066;
          result[4] += 3156406;
          result[5] += 9469219;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2863311;
          result[3] += 32928082;
          result[4] += 715827;
          result[5] += 6442450;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 15032385;
          result[4] += 0;
          result[5] += 6442450;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42e80000))) ) ) {
          result[0] += 671088;
          result[1] += 0;
          result[2] += 31541166;
          result[3] += 7381975;
          result[4] += 0;
          result[5] += 3355443;
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
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34927944;
          result[3] += 7520370;
          result[4] += 0;
          result[5] += 501358;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41054834;
          result[3] += 1894838;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 21474836;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1150437;
          result[1] += 0;
          result[2] += 41032276;
          result[3] += 766958;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 334238;
          result[1] += 501358;
          result[2] += 0;
          result[3] += 167119;
          result[4] += 37936092;
          result[5] += 4010864;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1391327;
          result[4] += 1814774;
          result[5] += 39743570;
        } else {
          result[0] += 3448513;
          result[1] += 156750;
          result[2] += 78375;
          result[3] += 13872430;
          result[4] += 2821511;
          result[5] += 22572090;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42420000))) ) ) {
          result[0] += 0;
          result[1] += 42749441;
          result[2] += 0;
          result[3] += 0;
          result[4] += 200231;
          result[5] += 0;
        } else {
          result[0] += 3817748;
          result[1] += 26724240;
          result[2] += 0;
          result[3] += 954437;
          result[4] += 11453246;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 33435504;
          result[1] += 1868854;
          result[2] += 33979;
          result[3] += 1189271;
          result[4] += 5878396;
          result[5] += 543666;
        } else {
          result[0] += 9332945;
          result[1] += 2355889;
          result[2] += 11235779;
          result[3] += 9967223;
          result[4] += 996722;
          result[5] += 9061112;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42890000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42860000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26247022;
          result[3] += 0;
          result[4] += 4772185;
          result[5] += 11930464;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2147483;
          result[4] += 0;
          result[5] += 40802189;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6216400;
          result[3] += 30516872;
          result[4] += 565127;
          result[5] += 5651272;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 29655726;
          result[3] += 7158278;
          result[4] += 2045222;
          result[5] += 4090445;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 7809031;
          result[4] += 0;
          result[5] += 35140641;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 12984784;
          result[1] += 1997659;
          result[2] += 19976592;
          result[3] += 2996488;
          result[4] += 4994148;
          result[5] += 0;
        } else {
          result[0] += 149476;
          result[1] += 49825;
          result[2] += 39661182;
          result[3] += 2690582;
          result[4] += 0;
          result[5] += 398604;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42890000))) ) ) {
          result[0] += 1284209;
          result[1] += 285379;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38240904;
          result[5] += 3139178;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 23427094;
          result[3] += 0;
          result[4] += 0;
          result[5] += 19522578;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 60835;
          result[1] += 0;
          result[2] += 0;
          result[3] += 851693;
          result[4] += 1460045;
          result[5] += 40577098;
        } else {
          result[0] += 3370733;
          result[1] += 652400;
          result[2] += 0;
          result[3] += 14461535;
          result[4] += 3370733;
          result[5] += 21094269;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 734182;
          result[1] += 13949466;
          result[2] += 0;
          result[3] += 2202547;
          result[4] += 25696385;
          result[5] += 367091;
        } else {
          result[0] += 0;
          result[1] += 41904437;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1045235;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 35520727;
          result[1] += 1209363;
          result[2] += 103659;
          result[3] += 1174810;
          result[4] += 3973622;
          result[5] += 967490;
        } else {
          result[0] += 9177280;
          result[1] += 2569638;
          result[2] += 5506368;
          result[3] += 12970556;
          result[4] += 2202547;
          result[5] += 10523281;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 15032385;
          result[2] += 0;
          result[3] += 2147483;
          result[4] += 8589934;
          result[5] += 17179869;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6404775;
          result[3] += 30516872;
          result[4] += 376751;
          result[5] += 5651272;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 1363481;
          result[2] += 4772185;
          result[3] += 8862630;
          result[4] += 1363481;
          result[5] += 26587892;
        } else {
          result[0] += 2120971;
          result[1] += 530242;
          result[2] += 28633115;
          result[3] += 8483886;
          result[4] += 0;
          result[5] += 3181457;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42da0000))) ) ) {
          result[0] += 3817748;
          result[1] += 0;
          result[2] += 27678678;
          result[3] += 5726623;
          result[4] += 0;
          result[5] += 5726623;
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 9761289;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 3904515;
          result[4] += 0;
          result[5] += 7809031;
        } else {
          result[0] += 143324;
          result[1] += 0;
          result[2] += 40369826;
          result[3] += 2388747;
          result[4] += 0;
          result[5] += 47774;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 224867;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42050203;
          result[5] += 674602;
        } else {
          result[0] += 0;
          result[1] += 28633115;
          result[2] += 0;
          result[3] += 2386092;
          result[4] += 11930464;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 2099373;
          result[1] += 656054;
          result[2] += 0;
          result[3] += 1968162;
          result[4] += 2930374;
          result[5] += 35295708;
        } else {
          result[0] += 373475;
          result[1] += 0;
          result[2] += 933688;
          result[3] += 23342213;
          result[4] += 560213;
          result[5] += 17740082;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 31304867;
          result[1] += 2752408;
          result[2] += 60492;
          result[3] += 1149357;
          result[4] += 6533189;
          result[5] += 1149357;
        } else {
          result[0] += 5211870;
          result[1] += 1544257;
          result[2] += 12450579;
          result[3] += 10520256;
          result[4] += 2702451;
          result[5] += 10520256;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c00000))) ) ) {
          result[0] += 0;
          result[1] += 42654147;
          result[2] += 0;
          result[3] += 197016;
          result[4] += 98508;
          result[5] += 0;
        } else {
          result[0] += 34359738;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 8589934;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3904515;
          result[3] += 0;
          result[4] += 0;
          result[5] += 39045157;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2147483;
          result[3] += 26843545;
          result[4] += 0;
          result[5] += 13958643;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 7809031;
          result[4] += 6507526;
          result[5] += 28633115;
        } else {
          result[0] += 1422174;
          result[1] += 0;
          result[2] += 29296796;
          result[3] += 8533047;
          result[4] += 0;
          result[5] += 3697653;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 1753047;
          result[2] += 20160050;
          result[3] += 17530478;
          result[4] += 876523;
          result[5] += 2629571;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40265318;
          result[3] += 2684354;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
          result[0] += 17179869;
          result[1] += 1431655;
          result[2] += 22906492;
          result[3] += 1431655;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 228152;
          result[1] += 114076;
          result[2] += 40839264;
          result[3] += 1711142;
          result[4] += 0;
          result[5] += 57038;
        }
      }
    }
  }
  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42be0000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x429c0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 282563;
          result[1] += 423845;
          result[2] += 282563;
          result[3] += 0;
          result[4] += 40971727;
          result[5] += 988972;
        } else {
          result[0] += 0;
          result[1] += 28633115;
          result[2] += 0;
          result[3] += 0;
          result[4] += 14316557;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42420000))) ) ) {
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
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42870000))) ) ) {
          result[0] += 1481023;
          result[1] += 7405116;
          result[2] += 0;
          result[3] += 4443069;
          result[4] += 14810232;
          result[5] += 14810232;
        } else {
          result[0] += 34107093;
          result[1] += 842150;
          result[2] += 0;
          result[3] += 421075;
          result[4] += 7158278;
          result[5] += 421075;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 49310;
          result[1] += 98621;
          result[2] += 0;
          result[3] += 2120362;
          result[4] += 1824498;
          result[5] += 38856879;
        } else {
          result[0] += 3054198;
          result[1] += 286331;
          result[2] += 572662;
          result[3] += 18897856;
          result[4] += 3817748;
          result[5] += 16320875;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0;
          result[1] += 42354527;
          result[2] += 0;
          result[3] += 0;
          result[4] += 595145;
          result[5] += 0;
        } else {
          result[0] += 2084935;
          result[1] += 26270188;
          result[2] += 1250961;
          result[3] += 1250961;
          result[4] += 12092626;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 39207170;
          result[1] += 1024732;
          result[2] += 178214;
          result[3] += 846518;
          result[4] += 1202947;
          result[5] += 490089;
        } else {
          result[0] += 9612545;
          result[1] += 0;
          result[2] += 10226112;
          result[3] += 12884901;
          result[4] += 3885922;
          result[5] += 6340189;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 352046;
          result[1] += 0;
          result[2] += 8097069;
          result[3] += 20418696;
          result[4] += 352046;
          result[5] += 13729813;
        } else {
          result[0] += 4055333;
          result[1] += 3686667;
          result[2] += 25806670;
          result[3] += 5898667;
          result[4] += 737333;
          result[5] += 2765000;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 3164712;
          result[1] += 452101;
          result[2] += 25769803;
          result[3] += 8589934;
          result[4] += 0;
          result[5] += 4973120;
        } else {
          result[0] += 340870;
          result[1] += 0;
          result[2] += 40961262;
          result[3] += 1533916;
          result[4] += 0;
          result[5] += 113623;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42360000))) ) ) {
          result[0] += 0;
          result[1] += 40689163;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2260509;
          result[5] += 0;
        } else {
          result[0] += 1248537;
          result[1] += 124853;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38454939;
          result[5] += 3121342;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 72672;
          result[1] += 0;
          result[2] += 145345;
          result[3] += 508710;
          result[4] += 1017420;
          result[5] += 41205523;
        } else {
          result[0] += 8707146;
          result[1] += 837225;
          result[2] += 334890;
          result[3] += 7618752;
          result[4] += 4772185;
          result[5] += 20679472;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 32679098;
          result[2] += 0;
          result[3] += 0;
          result[4] += 10270573;
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
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 34014280;
          result[1] += 1826938;
          result[2] += 398604;
          result[3] += 1694070;
          result[4] += 3886397;
          result[5] += 1129380;
        } else {
          result[0] += 3904515;
          result[1] += 0;
          result[2] += 8075248;
          result[3] += 17304103;
          result[4] += 2484691;
          result[5] += 11181113;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42660000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17179869;
          result[3] += 0;
          result[4] += 25769803;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1073741;
          result[3] += 1073741;
          result[4] += 0;
          result[5] += 40802189;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 1115575;
          result[2] += 6693455;
          result[3] += 22311518;
          result[4] += 557787;
          result[5] += 12271335;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32843867;
          result[3] += 0;
          result[4] += 0;
          result[5] += 10105805;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 17179869;
          result[1] += 0;
          result[2] += 15032385;
          result[3] += 5726623;
          result[4] += 1431655;
          result[5] += 3579139;
        } else {
          result[0] += 0;
          result[1] += 40563580;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2386092;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 284434;
          result[1] += 142217;
          result[2] += 32852233;
          result[3] += 7679742;
          result[4] += 0;
          result[5] += 1991044;
        } else {
          result[0] += 764476;
          result[1] += 0;
          result[2] += 40517248;
          result[3] += 1667948;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a50000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 180460;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41686447;
          result[5] += 1082764;
        } else {
          result[0] += 0;
          result[1] += 21474836;
          result[2] += 0;
          result[3] += 14316557;
          result[4] += 0;
          result[5] += 7158278;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 123596;
          result[2] += 0;
          result[3] += 1050567;
          result[4] += 1297759;
          result[5] += 40477749;
        } else {
          result[0] += 3502987;
          result[1] += 152303;
          result[2] += 228455;
          result[3] += 13326582;
          result[4] += 3959898;
          result[5] += 21779444;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 23008753;
          result[2] += 0;
          result[3] += 6135667;
          result[4] += 13038293;
          result[5] += 766958;
        } else {
          result[0] += 404232;
          result[1] += 42444382;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 101058;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 34601984;
          result[1] += 1865953;
          result[2] += 32736;
          result[3] += 621984;
          result[4] += 5139556;
          result[5] += 687456;
        } else {
          result[0] += 5977531;
          result[1] += 295186;
          result[2] += 12840623;
          result[3] += 13873777;
          result[4] += 1844917;
          result[5] += 8117635;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11083786;
          result[3] += 1385473;
          result[4] += 0;
          result[5] += 30480413;
        } else {
          result[0] += 976128;
          result[1] += 2928386;
          result[2] += 11713547;
          result[3] += 26355481;
          result[4] += 0;
          result[5] += 976128;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42860000))) ) ) {
          result[0] += 0;
          result[1] += 17179869;
          result[2] += 0;
          result[3] += 0;
          result[4] += 25769803;
          result[5] += 0;
        } else {
          result[0] += 9698313;
          result[1] += 0;
          result[2] += 33251359;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ae0000))) ) ) {
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
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17179869;
          result[3] += 20043180;
          result[4] += 0;
          result[5] += 5726623;
        } else {
          result[0] += 105787;
          result[1] += 0;
          result[2] += 40463669;
          result[3] += 2221534;
          result[4] += 0;
          result[5] += 158681;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b70000))) ) ) {
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
          result[4] += 32212254;
          result[5] += 10737418;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 795364;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 27837750;
          result[5] += 14316557;
        } else {
          result[0] += 0;
          result[1] += 17179869;
          result[2] += 0;
          result[3] += 25769803;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 53024;
          result[2] += 0;
          result[3] += 1696777;
          result[4] += 1643752;
          result[5] += 39556118;
        } else {
          result[0] += 6968655;
          result[1] += 142217;
          result[2] += 284434;
          result[3] += 6684220;
          result[4] += 5830915;
          result[5] += 23039228;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 11608019;
          result[4] += 1160801;
          result[5] += 30180851;
        } else {
          result[0] += 0;
          result[1] += 727960;
          result[2] += 0;
          result[3] += 34214146;
          result[4] += 0;
          result[5] += 8007566;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 7158278;
          result[2] += 0;
          result[3] += 0;
          result[4] += 35791394;
          result[5] += 0;
        } else {
          result[0] += 188789;
          result[1] += 42666488;
          result[2] += 0;
          result[3] += 0;
          result[4] += 94394;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 6540559;
          result[1] += 10464894;
          result[2] += 0;
          result[3] += 872074;
          result[4] += 24418088;
          result[5] += 654055;
        } else {
          result[0] += 33762754;
          result[1] += 563818;
          result[2] += 762812;
          result[3] += 3416074;
          result[4] += 2586930;
          result[5] += 1857283;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 993056;
          result[1] += 496528;
          result[2] += 5213544;
          result[3] += 16137160;
          result[4] += 4220488;
          result[5] += 15888896;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32212254;
          result[3] += 1952257;
          result[4] += 976128;
          result[5] += 7809031;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 15663998;
          result[1] += 6063483;
          result[2] += 16169288;
          result[3] += 3031741;
          result[4] += 1010580;
          result[5] += 1010580;
        } else {
          result[0] += 737685;
          result[1] += 0;
          result[2] += 37703911;
          result[3] += 3483513;
          result[4] += 0;
          result[5] += 1024562;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 1012963;
          result[1] += 607778;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40113373;
          result[5] += 1215556;
        } else {
          result[0] += 15713294;
          result[1] += 1396737;
          result[2] += 0;
          result[3] += 1745921;
          result[4] += 12570635;
          result[5] += 11523082;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 95762;
          result[1] += 47881;
          result[2] += 0;
          result[3] += 2154665;
          result[4] += 3255939;
          result[5] += 37395423;
        } else {
          result[0] += 709911;
          result[1] += 0;
          result[2] += 887389;
          result[3] += 24137006;
          result[4] += 0;
          result[5] += 17215364;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 6807117;
          result[1] += 10210676;
          result[2] += 0;
          result[3] += 1296593;
          result[4] += 23014541;
          result[5] += 1620742;
        } else {
          result[0] += 31822497;
          result[1] += 1100489;
          result[2] += 1528458;
          result[3] += 3729437;
          result[4] += 2200979;
          result[5] += 2567809;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 42366645;
          result[2] += 0;
          result[3] += 0;
          result[4] += 583027;
          result[5] += 0;
        } else {
          result[0] += 21474836;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3579139;
          result[4] += 0;
          result[5] += 17895697;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 15339168;
          result[2] += 9203501;
          result[3] += 12271335;
          result[4] += 6135667;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 1160801;
          result[2] += 0;
          result[3] += 5804009;
          result[4] += 3482405;
          result[5] += 32502455;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8297095;
          result[3] += 30748061;
          result[4] += 0;
          result[5] += 3904515;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 19327352;
          result[3] += 0;
          result[4] += 0;
          result[5] += 23622320;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42eb0000))) ) ) {
          result[0] += 397682;
          result[1] += 1193046;
          result[2] += 31019208;
          result[3] += 5169868;
          result[4] += 397682;
          result[5] += 4772185;
        } else {
          result[0] += 26843545;
          result[1] += 0;
          result[2] += 13421772;
          result[3] += 0;
          result[4] += 1342177;
          result[5] += 1342177;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35950466;
          result[3] += 6521987;
          result[4] += 0;
          result[5] += 477218;
        } else {
          result[0] += 65174;
          result[1] += 0;
          result[2] += 41776540;
          result[3] += 1107958;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 1459454;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40864737;
          result[5] += 625480;
        } else {
          result[0] += 8380423;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 18855953;
          result[5] += 15713294;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 63629;
          result[1] += 0;
          result[2] += 254516;
          result[3] += 1145324;
          result[4] += 2417907;
          result[5] += 39068295;
        } else {
          result[0] += 4319301;
          result[1] += 2129233;
          result[2] += 1460045;
          result[3] += 11619529;
          result[4] += 3954290;
          result[5] += 19467273;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 4499489;
          result[1] += 7362801;
          result[2] += 613566;
          result[3] += 409044;
          result[4] += 28019548;
          result[5] += 2045222;
        } else {
          result[0] += 29326618;
          result[1] += 313501;
          result[2] += 3220512;
          result[3] += 4389017;
          result[4] += 2308509;
          result[5] += 3391513;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c00000))) ) ) {
          result[0] += 201169;
          result[1] += 42748503;
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
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42d70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2342709;
          result[3] += 14056256;
          result[4] += 0;
          result[5] += 26550706;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12271335;
          result[3] += 18407002;
          result[4] += 0;
          result[5] += 12271335;
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
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5726623;
          result[3] += 8589934;
          result[4] += 0;
          result[5] += 28633115;
        } else {
          result[0] += 0;
          result[1] += 1431655;
          result[2] += 31210095;
          result[3] += 7730941;
          result[4] += 0;
          result[5] += 2576980;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 572662;
          result[1] += 0;
          result[2] += 38177487;
          result[3] += 3913192;
          result[4] += 0;
          result[5] += 286331;
        } else {
          result[0] += 601536;
          result[1] += 0;
          result[2] += 42227829;
          result[3] += 120307;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 173885;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41906361;
          result[5] += 869426;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 875150;
          result[4] += 875150;
          result[5] += 41199372;
        } else {
          result[0] += 4214687;
          result[1] += 3344990;
          result[2] += 468298;
          result[3] += 12242663;
          result[4] += 3679489;
          result[5] += 18999543;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 0;
          result[1] += 42052812;
          result[2] += 0;
          result[3] += 0;
          result[4] += 896860;
          result[5] += 0;
        } else {
          result[0] += 1753047;
          result[1] += 7596540;
          result[2] += 0;
          result[3] += 3798270;
          result[4] += 24834844;
          result[5] += 4966968;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 36998382;
          result[1] += 358511;
          result[2] += 215106;
          result[3] += 860427;
          result[4] += 3764370;
          result[5] += 752874;
        } else {
          result[0] += 6564360;
          result[1] += 843989;
          result[2] += 6658137;
          result[3] += 10315423;
          result[4] += 3751063;
          result[5] += 14816699;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11248723;
          result[3] += 27610504;
          result[4] += 0;
          result[5] += 4090445;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21746669;
          result[3] += 10873334;
          result[4] += 0;
          result[5] += 10329668;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 0;
          result[4] += 0;
          result[5] += 21474836;
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
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42e10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 10737418;
          result[4] += 0;
          result[5] += 32212254;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34690120;
          result[3] += 7708915;
          result[4] += 0;
          result[5] += 550636;
        } else {
          result[0] += 397156;
          result[1] += 0;
          result[2] += 41474519;
          result[3] += 1077997;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b20000))) ) ) {
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42180000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 630068;
          result[1] += 2940319;
          result[2] += 0;
          result[3] += 0;
          result[4] += 36123930;
          result[5] += 3255354;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
          result[0] += 35921544;
          result[1] += 3123612;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3904515;
          result[5] += 0;
        } else {
          result[0] += 223308;
          result[1] += 148872;
          result[2] += 37218;
          result[3] += 5582713;
          result[4] += 1749250;
          result[5] += 35208310;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d60000))) ) ) {
          result[0] += 23826095;
          result[1] += 940503;
          result[2] += 3239513;
          result[3] += 6479026;
          result[4] += 4023266;
          result[5] += 4441267;
        } else {
          result[0] += 40131292;
          result[1] += 857768;
          result[2] += 183807;
          result[3] += 183807;
          result[4] += 1470459;
          result[5] += 122538;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 466844;
          result[3] += 28944344;
          result[4] += 1867377;
          result[5] += 11671106;
        } else {
          result[0] += 0;
          result[1] += 488064;
          result[2] += 15618062;
          result[3] += 6832902;
          result[4] += 1952257;
          result[5] += 18058385;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17000912;
          result[3] += 16106127;
          result[4] += 0;
          result[5] += 9842633;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33935544;
          result[3] += 9014128;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 4772185;
          result[1] += 17498014;
          result[2] += 7953643;
          result[3] += 0;
          result[4] += 1590728;
          result[5] += 11135100;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 12271335;
          result[1] += 0;
          result[2] += 27610504;
          result[3] += 3067833;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 103994;
          result[1] += 0;
          result[2] += 40297816;
          result[3] += 2287876;
          result[4] += 0;
          result[5] += 259985;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
          result[0] += 1227133;
          result[1] += 204522;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39677316;
          result[5] += 1840700;
        } else {
          result[0] += 0;
          result[1] += 543666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 28814337;
          result[5] += 13591668;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 2412418;
          result[1] += 215394;
          result[2] += 172315;
          result[3] += 2024708;
          result[4] += 2886286;
          result[5] += 35238548;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1222145;
          result[3] += 24617495;
          result[4] += 872960;
          result[5] += 16237071;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 32843867;
          result[1] += 2276925;
          result[2] += 405479;
          result[3] += 1122867;
          result[4] += 5333619;
          result[5] += 966913;
        } else {
          result[0] += 7521643;
          result[1] += 981083;
          result[2] += 6649568;
          result[3] += 13953193;
          result[4] += 4251363;
          result[5] += 9592820;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42d50000))) ) ) {
          result[0] += 258214;
          result[1] += 42605386;
          result[2] += 0;
          result[3] += 0;
          result[4] += 86071;
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
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 40423221;
          result[4] += 0;
          result[5] += 2526451;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 12884901;
          result[4] += 0;
          result[5] += 8589934;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ed0000))) ) ) {
          result[0] += 1455921;
          result[1] += 0;
          result[2] += 37671958;
          result[3] += 3457812;
          result[4] += 0;
          result[5] += 363980;
        } else {
          result[0] += 34359738;
          result[1] += 0;
          result[2] += 4294967;
          result[3] += 4294967;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 28633115;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36168145;
          result[3] += 6404775;
          result[4] += 0;
          result[5] += 376751;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 78090;
          result[1] += 0;
          result[2] += 42324950;
          result[3] += 468541;
          result[4] += 0;
          result[5] += 78090;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42870000))) ) ) {
          result[0] += 403283;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42344747;
          result[5] += 201641;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 32212254;
          result[5] += 10737418;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 1332461;
          result[1] += 44415;
          result[2] += 0;
          result[3] += 2220769;
          result[4] += 2354015;
          result[5] += 36998011;
        } else {
          result[0] += 2162933;
          result[1] += 308990;
          result[2] += 463485;
          result[3] += 19929884;
          result[4] += 1699447;
          result[5] += 18384931;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 3278600;
          result[1] += 12130823;
          result[2] += 0;
          result[3] += 983580;
          result[4] += 25245227;
          result[5] += 1311440;
        } else {
          result[0] += 286331;
          result[1] += 42090679;
          result[2] += 0;
          result[3] += 95443;
          result[4] += 477218;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 37040489;
          result[1] += 1153011;
          result[2] += 0;
          result[3] += 720632;
          result[4] += 3603160;
          result[5] += 432379;
        } else {
          result[0] += 8926794;
          result[1] += 1010580;
          result[2] += 11705891;
          result[3] += 8926794;
          result[4] += 2105376;
          result[5] += 10274235;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 35140641;
          result[4] += 3904515;
          result[5] += 3904515;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4955731;
          result[5] += 37993941;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 557787;
          result[2] += 11155759;
          result[3] += 23984882;
          result[4] += 1673363;
          result[5] += 5577879;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32212254;
          result[3] += 10290025;
          result[4] += 0;
          result[5] += 447392;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42bc0000))) ) ) {
          result[0] += 15461882;
          result[1] += 3435973;
          result[2] += 6871947;
          result[3] += 6871947;
          result[4] += 8589934;
          result[5] += 1717986;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 3303820;
          result[1] += 0;
          result[2] += 14867194;
          result[3] += 6607641;
          result[4] += 0;
          result[5] += 18171015;
        } else {
          result[0] += 597277;
          result[1] += 0;
          result[2] += 39963286;
          result[3] += 2334811;
          result[4] += 0;
          result[5] += 54297;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 127447;
          result[1] += 1274471;
          result[2] += 0;
          result[3] += 0;
          result[4] += 37342000;
          result[5] += 4205754;
        } else {
          result[0] += 0;
          result[1] += 40423221;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2526451;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1468364;
          result[1] += 0;
          result[2] += 52441;
          result[3] += 1573248;
          result[4] += 1573248;
          result[5] += 38282370;
        } else {
          result[0] += 3648234;
          result[1] += 414572;
          result[2] += 4477379;
          result[3] += 15587912;
          result[4] += 2653261;
          result[5] += 16168313;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 15339168;
          result[2] += 0;
          result[3] += 0;
          result[4] += 27610504;
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
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 33996106;
          result[1] += 1543718;
          result[2] += 171524;
          result[3] += 1029145;
          result[4] += 5145727;
          result[5] += 1063450;
        } else {
          result[0] += 7715510;
          result[1] += 128591;
          result[2] += 10030163;
          result[3] += 12087632;
          result[4] += 2186061;
          result[5] += 10801714;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1651910;
          result[3] += 6607641;
          result[4] += 825955;
          result[5] += 33864165;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 16843009;
          result[3] += 10947955;
          result[4] += 0;
          result[5] += 15158708;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x425a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 37896770;
          result[2] += 0;
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
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1500425;
          result[1] += 187553;
          result[2] += 31133824;
          result[3] += 8252338;
          result[4] += 187553;
          result[5] += 1687978;
        } else {
          result[0] += 558594;
          result[1] += 0;
          result[2] += 41335956;
          result[3] += 993056;
          result[4] += 0;
          result[5] += 62066;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cc0000))) ) ) {
          result[0] += 181990;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41311761;
          result[5] += 1455921;
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
          result[0] += 3734754;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 24275902;
          result[5] += 14939016;
        } else {
          result[0] += 40208204;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1827645;
          result[5] += 913822;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 1101273;
          result[2] += 0;
          result[3] += 4405094;
          result[4] += 23126746;
          result[5] += 14316557;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1452965;
          result[4] += 1336728;
          result[5] += 40159978;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 5781686;
          result[4] += 2477865;
          result[5] += 34690120;
        } else {
          result[0] += 775264;
          result[1] += 1085370;
          result[2] += 155052;
          result[3] += 24498369;
          result[4] += 620211;
          result[5] += 15815403;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 1493901;
          result[1] += 8963410;
          result[2] += 0;
          result[3] += 0;
          result[4] += 30998459;
          result[5] += 1493901;
        } else {
          result[0] += 0;
          result[1] += 41920377;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1029294;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
          result[0] += 6519146;
          result[1] += 2684354;
          result[2] += 6135667;
          result[3] += 7669584;
          result[4] += 1917396;
          result[5] += 18023523;
        } else {
          result[0] += 35670067;
          result[1] += 694871;
          result[2] += 794138;
          result[3] += 1522099;
          result[4] += 3375089;
          result[5] += 893406;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 2300875;
          result[2] += 9395240;
          result[3] += 19365700;
          result[4] += 1725656;
          result[5] += 10162199;
        } else {
          result[0] += 1455921;
          result[1] += 0;
          result[2] += 34214146;
          result[3] += 1455921;
          result[4] += 0;
          result[5] += 5823684;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 3463683;
          result[1] += 692736;
          result[2] += 11083786;
          result[3] += 6234629;
          result[4] += 3463683;
          result[5] += 18011153;
        } else {
          result[0] += 1311095;
          result[1] += 0;
          result[2] += 37976552;
          result[3] += 3209922;
          result[4] += 45210;
          result[5] += 406891;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 142217;
          result[1] += 0;
          result[2] += 284434;
          result[3] += 142217;
          result[4] += 40531976;
          result[5] += 1848826;
        } else {
          result[0] += 0;
          result[1] += 38544578;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4405094;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 3312922;
          result[1] += 315516;
          result[2] += 0;
          result[3] += 3036845;
          result[4] += 3865076;
          result[5] += 32419312;
        } else {
          result[0] += 2956680;
          result[1] += 0;
          result[2] += 2178606;
          result[3] += 27699426;
          result[4] += 155614;
          result[5] += 9959344;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 13215283;
          result[2] += 0;
          result[3] += 0;
          result[4] += 29734388;
          result[5] += 0;
        } else {
          result[0] += 190464;
          result[1] += 41711655;
          result[2] += 0;
          result[3] += 380928;
          result[4] += 285696;
          result[5] += 380928;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 12133282;
          result[1] += 429496;
          result[2] += 3113851;
          result[3] += 7408818;
          result[4] += 5261334;
          result[5] += 14602888;
        } else {
          result[0] += 31990336;
          result[1] += 1980191;
          result[2] += 3448264;
          result[3] += 1194943;
          result[4] += 3823818;
          result[5] += 512118;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 34359738;
          result[4] += 0;
          result[5] += 8589934;
        } else {
          result[0] += 0;
          result[1] += 4772185;
          result[2] += 0;
          result[3] += 9544371;
          result[4] += 0;
          result[5] += 28633115;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bf0000))) ) ) {
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
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 604924;
          result[2] += 13308349;
          result[3] += 18752674;
          result[4] += 4234474;
          result[5] += 6049249;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35204649;
          result[3] += 4224557;
          result[4] += 0;
          result[5] += 3520464;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33274197;
          result[3] += 7787578;
          result[4] += 235987;
          result[5] += 1651910;
        } else {
          result[0] += 606824;
          result[1] += 0;
          result[2] += 40859500;
          result[3] += 1415923;
          result[4] += 0;
          result[5] += 67424;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42830000))) ) ) {
          result[0] += 197016;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42161605;
          result[5] += 591050;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 14316557;
          result[5] += 28633115;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42840000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 39370533;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3579139;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 78518;
          result[1] += 0;
          result[2] += 0;
          result[3] += 314074;
          result[4] += 942223;
          result[5] += 41614856;
        } else {
          result[0] += 949164;
          result[1] += 0;
          result[2] += 0;
          result[3] += 9017058;
          result[4] += 3559365;
          result[5] += 29424085;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42760000))) ) ) {
          result[0] += 26981204;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 12114010;
          result[5] += 3854457;
        } else {
          result[0] += 382625;
          result[1] += 1052219;
          result[2] += 2104438;
          result[3] += 17313787;
          result[4] += 1339188;
          result[5] += 20757414;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 5368709;
          result[2] += 0;
          result[3] += 0;
          result[4] += 37580963;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42775080;
          result[2] += 0;
          result[3] += 0;
          result[4] += 174592;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 8897940;
          result[1] += 513342;
          result[2] += 684456;
          result[3] += 4962312;
          result[4] += 19164794;
          result[5] += 8726825;
        } else {
          result[0] += 34280017;
          result[1] += 1062946;
          result[2] += 930077;
          result[3] += 1561202;
          result[4] += 3321707;
          result[5] += 1793721;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 1148386;
          result[1] += 1607741;
          result[2] += 7349676;
          result[3] += 21130320;
          result[4] += 1837419;
          result[5] += 9876128;
        } else {
          result[0] += 572662;
          result[1] += 8017272;
          result[2] += 22333829;
          result[3] += 6871947;
          result[4] += 0;
          result[5] += 5153960;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42910000))) ) ) {
          result[0] += 19429613;
          result[1] += 3067833;
          result[2] += 14316557;
          result[3] += 0;
          result[4] += 6135667;
          result[5] += 0;
        } else {
          result[0] += 614193;
          result[1] += 0;
          result[2] += 39132899;
          result[3] += 2544515;
          result[4] += 43870;
          result[5] += 614193;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42c80000))) ) ) {
          result[0] += 127070;
          result[1] += 254140;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38629291;
          result[5] += 3939171;
        } else {
          result[0] += 0;
          result[1] += 41415756;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1533916;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 41593367;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 904203;
          result[5] += 452101;
        } else {
          result[0] += 1493656;
          result[1] += 422733;
          result[2] += 873648;
          result[3] += 9215579;
          result[4] += 2536398;
          result[5] += 28407657;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42580000))) ) ) {
          result[0] += 0;
          result[1] += 42742686;
          result[2] += 0;
          result[3] += 0;
          result[4] += 206986;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 14024383;
          result[2] += 0;
          result[3] += 0;
          result[4] += 27172242;
          result[5] += 1753047;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 15425586;
          result[1] += 2268468;
          result[2] += 4234474;
          result[3] += 6956637;
          result[4] += 4839399;
          result[5] += 9225105;
        } else {
          result[0] += 37393087;
          result[1] += 637640;
          result[2] += 1275281;
          result[3] += 409912;
          result[4] += 3097113;
          result[5] += 136637;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1263225;
          result[3] += 32843867;
          result[4] += 0;
          result[5] += 8842579;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 0;
          result[4] += 0;
          result[5] += 14316557;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1022611;
          result[1] += 0;
          result[2] += 18918308;
          result[3] += 16361780;
          result[4] += 0;
          result[5] += 6646973;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36466703;
          result[3] += 6482969;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9544371;
          result[3] += 4772185;
          result[4] += 0;
          result[5] += 28633115;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37347541;
          result[3] += 5602131;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 14763950;
          result[1] += 0;
          result[2] += 26843545;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1342177;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41772969;
          result[3] += 956071;
          result[4] += 0;
          result[5] += 220631;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
          result[0] += 412977;
          result[1] += 825955;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40058829;
          result[5] += 1651910;
        } else {
          result[0] += 13240124;
          result[1] += 11302545;
          result[2] += 0;
          result[3] += 1937579;
          result[4] += 6135667;
          result[5] += 10333755;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1952257;
          result[4] += 3271351;
          result[5] += 37726064;
        } else {
          result[0] += 856139;
          result[1] += 713449;
          result[2] += 856139;
          result[3] += 18977762;
          result[4] += 3567248;
          result[5] += 17978932;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x425a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 6362914;
          result[2] += 3181457;
          result[3] += 0;
          result[4] += 33405301;
          result[5] += 0;
        } else {
          result[0] += 274731;
          result[1] += 42125478;
          result[2] += 274731;
          result[3] += 183154;
          result[4] += 91577;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 16810976;
          result[1] += 1528270;
          result[2] += 1317474;
          result[3] += 6481975;
          result[4] += 6850868;
          result[5] += 9960108;
        } else {
          result[0] += 37101614;
          result[1] += 1629786;
          result[2] += 1342177;
          result[3] += 383479;
          result[4] += 2252940;
          result[5] += 239674;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 29826161;
          result[4] += 1193046;
          result[5] += 11930464;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3435973;
          result[3] += 6871947;
          result[4] += 0;
          result[5] += 32641751;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 25053975;
          result[4] += 0;
          result[5] += 7158278;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 27221623;
          result[3] += 7259099;
          result[4] += 1209849;
          result[5] += 7259099;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c80000))) ) ) {
          result[0] += 453693;
          result[1] += 0;
          result[2] += 34329492;
          result[3] += 6805405;
          result[4] += 0;
          result[5] += 1361081;
        } else {
          result[0] += 33746171;
          result[1] += 0;
          result[2] += 9203501;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 353495;
          result[1] += 0;
          result[2] += 38707729;
          result[3] += 3534952;
          result[4] += 0;
          result[5] += 353495;
        } else {
          result[0] += 97171;
          result[1] += 0;
          result[2] += 42560988;
          result[3] += 291513;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 2260509;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38880756;
          result[5] += 1808407;
        } else {
          result[0] += 18934802;
          result[1] += 4156419;
          result[2] += 2309122;
          result[3] += 1847297;
          result[4] += 6927366;
          result[5] += 8774664;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1895572;
          result[4] += 3292309;
          result[5] += 37761791;
        } else {
          result[0] += 205500;
          result[1] += 1233004;
          result[2] += 2774261;
          result[3] += 18084072;
          result[4] += 2260509;
          result[5] += 18392324;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 490853;
          result[1] += 19388709;
          result[2] += 245426;
          result[3] += 736280;
          result[4] += 22088403;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42754889;
          result[2] += 194783;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 36291079;
          result[1] += 1150437;
          result[2] += 174308;
          result[3] += 697234;
          result[4] += 4009100;
          result[5] += 627511;
        } else {
          result[0] += 6333061;
          result[1] += 575732;
          result[2] += 8520846;
          result[3] += 13472149;
          result[4] += 1612052;
          result[5] += 12435830;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1789569;
          result[3] += 26843545;
          result[4] += 0;
          result[5] += 14316557;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38177487;
          result[3] += 4772185;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4294967;
          result[3] += 38654705;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 7158278;
          result[2] += 21474836;
          result[3] += 9544371;
          result[4] += 0;
          result[5] += 4772185;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1273440;
          result[1] += 347301;
          result[2] += 33804055;
          result[3] += 6251434;
          result[4] += 0;
          result[5] += 1273440;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41998487;
          result[3] += 878017;
          result[4] += 0;
          result[5] += 73168;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
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
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 143165;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41518017;
          result[5] += 1288490;
        } else {
          result[0] += 4605510;
          result[1] += 421075;
          result[2] += 552661;
          result[3] += 7921477;
          result[4] += 3131746;
          result[5] += 26317201;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42df0000))) ) ) {
          result[0] += 22976962;
          result[1] += 3560594;
          result[2] += 3338057;
          result[3] += 3449326;
          result[4] += 7343726;
          result[5] += 2281005;
        } else {
          result[0] += 40704916;
          result[1] += 897902;
          result[2] += 673426;
          result[3] += 0;
          result[4] += 673426;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ad0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11302545;
          result[3] += 21851587;
          result[4] += 753503;
          result[5] += 9042036;
        } else {
          result[0] += 825955;
          result[1] += 0;
          result[2] += 27256523;
          result[3] += 14041239;
          result[4] += 0;
          result[5] += 825955;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 1855850;
          result[1] += 0;
          result[2] += 29428479;
          result[3] += 10604857;
          result[4] += 0;
          result[5] += 1060485;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40324970;
          result[3] += 2147483;
          result[4] += 0;
          result[5] += 477218;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42700000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
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
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35544556;
          result[3] += 4443069;
          result[4] += 0;
          result[5] += 2962046;
        } else {
          result[0] += 159367;
          result[1] += 0;
          result[2] += 42232517;
          result[3] += 557787;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 2863311;
          result[2] += 2863311;
          result[3] += 7158278;
          result[4] += 20043180;
          result[5] += 10021590;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 470423;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1458313;
          result[4] += 4092685;
          result[5] += 36928251;
        } else {
          result[0] += 1858399;
          result[1] += 0;
          result[2] += 0;
          result[3] += 20648881;
          result[4] += 2271376;
          result[5] += 18171015;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 523776;
          result[1] += 6285317;
          result[2] += 0;
          result[3] += 1571329;
          result[4] += 34569248;
          result[5] += 0;
        } else {
          result[0] += 163930;
          result[1] += 40490722;
          result[2] += 163930;
          result[3] += 0;
          result[4] += 2049125;
          result[5] += 81965;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 35049343;
          result[1] += 1472942;
          result[2] += 133903;
          result[3] += 1405990;
          result[4] += 3213693;
          result[5] += 1673798;
        } else {
          result[0] += 4948549;
          result[1] += 466844;
          result[2] += 12137951;
          result[3] += 12418057;
          result[4] += 1960745;
          result[5] += 11017524;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 2078209;
          result[2] += 4156419;
          result[3] += 4849156;
          result[4] += 2770946;
          result[5] += 29094939;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9336885;
          result[3] += 29878033;
          result[4] += 1867377;
          result[5] += 1867377;
        } else {
          result[0] += 0;
          result[1] += 8589934;
          result[2] += 30064771;
          result[3] += 0;
          result[4] += 0;
          result[5] += 4294967;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 9544371;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9544371;
          result[5] += 23860929;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42870000))) ) ) {
          result[0] += 37580963;
          result[1] += 0;
          result[2] += 3579139;
          result[3] += 1789569;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 518507;
          result[1] += 0;
          result[2] += 38888033;
          result[3] += 3024624;
          result[4] += 0;
          result[5] += 518507;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x423c0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c40000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0;
          result[1] += 15618062;
          result[2] += 0;
          result[3] += 0;
          result[4] += 27331610;
          result[5] += 0;
        } else {
          result[0] += 97391;
          result[1] += 42365323;
          result[2] += 0;
          result[3] += 292174;
          result[4] += 194783;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a70000))) ) ) {
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
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42760000))) ) ) {
          result[0] += 162688;
          result[1] += 1952257;
          result[2] += 0;
          result[3] += 0;
          result[4] += 36767523;
          result[5] += 4067203;
        } else {
          result[0] += 1620063;
          result[1] += 144005;
          result[2] += 1296050;
          result[3] += 6624258;
          result[4] += 4608179;
          result[5] += 28657116;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 31568309;
          result[1] += 2216370;
          result[2] += 0;
          result[3] += 1437645;
          result[4] += 4732251;
          result[5] += 2995095;
        } else {
          result[0] += 6648229;
          result[1] += 527637;
          result[2] += 11080382;
          result[3] += 12663294;
          result[4] += 3271351;
          result[5] += 8758778;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6135667;
          result[3] += 3834792;
          result[4] += 7669584;
          result[5] += 25309628;
        } else {
          result[0] += 4210752;
          result[1] += 1684300;
          result[2] += 1684300;
          result[3] += 22738062;
          result[4] += 2526451;
          result[5] += 10105805;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 35791394;
          result[1] += 0;
          result[2] += 3579139;
          result[3] += 0;
          result[4] += 0;
          result[5] += 3579139;
        } else {
          result[0] += 1717986;
          result[1] += 0;
          result[2] += 30923764;
          result[3] += 10307921;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3904515;
          result[3] += 11713547;
          result[4] += 0;
          result[5] += 27331610;
        } else {
          result[0] += 5856773;
          result[1] += 1952257;
          result[2] += 27331610;
          result[3] += 1952257;
          result[4] += 0;
          result[5] += 5856773;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 19088743;
          result[3] += 4772185;
          result[4] += 0;
          result[5] += 19088743;
        } else {
          result[0] += 158485;
          result[1] += 52828;
          result[2] += 40519556;
          result[3] += 2007487;
          result[4] += 0;
          result[5] += 211314;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 423845;
          result[1] += 2260509;
          result[2] += 565127;
          result[3] += 0;
          result[4] += 39135063;
          result[5] += 565127;
        } else {
          result[0] += 23565307;
          result[1] += 1520342;
          result[2] += 0;
          result[3] += 0;
          result[4] += 6461455;
          result[5] += 11402568;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1481023;
          result[4] += 493674;
          result[5] += 40974975;
        } else {
          result[0] += 810371;
          result[1] += 360164;
          result[2] += 360164;
          result[3] += 17558042;
          result[4] += 4952268;
          result[5] += 18908661;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 93981;
          result[1] += 42761709;
          result[2] += 0;
          result[3] += 0;
          result[4] += 93981;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 36242359;
          result[1] += 762194;
          result[2] += 76219;
          result[3] += 1181401;
          result[4] += 3887193;
          result[5] += 800304;
        } else {
          result[0] += 8706014;
          result[1] += 1857283;
          result[2] += 4875368;
          result[3] += 8357774;
          result[4] += 3946726;
          result[5] += 15206505;
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6607641;
          result[3] += 11012736;
          result[4] += 4405094;
          result[5] += 20924199;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4421289;
          result[3] += 31580641;
          result[4] += 0;
          result[5] += 6947741;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 28633115;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38923141;
          result[3] += 1342177;
          result[4] += 0;
          result[5] += 2684354;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 1107584;
          result[1] += 738389;
          result[2] += 29781721;
          result[3] += 7014703;
          result[4] += 492259;
          result[5] += 3815013;
        } else {
          result[0] += 38428654;
          result[1] += 0;
          result[2] += 2260509;
          result[3] += 0;
          result[4] += 2260509;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 12271335;
          result[2] += 0;
          result[3] += 0;
          result[4] += 12271335;
          result[5] += 18407002;
        } else {
          result[0] += 300768;
          result[1] += 0;
          result[2] += 40603682;
          result[3] += 1985068;
          result[4] += 0;
          result[5] += 60153;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 383479;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41990974;
          result[5] += 575218;
        } else {
          result[0] += 933688;
          result[1] += 933688;
          result[2] += 0;
          result[3] += 1400532;
          result[4] += 21007992;
          result[5] += 18673770;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 3116945;
          result[1] += 137512;
          result[2] += 0;
          result[3] += 1695984;
          result[4] += 3437807;
          result[5] += 34561423;
        } else {
          result[0] += 0;
          result[1] += 398913;
          result[2] += 930797;
          result[3] += 24998571;
          result[4] += 0;
          result[5] += 16621390;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          result[0] += 32334363;
          result[1] += 3614415;
          result[2] += 0;
          result[3] += 1237367;
          result[4] += 4461035;
          result[5] += 1302491;
        } else {
          result[0] += 7630652;
          result[1] += 1635139;
          result[2] += 12972109;
          result[3] += 10137866;
          result[4] += 3161270;
          result[5] += 7412633;
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
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42890000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1789569;
          result[4] += 7158278;
          result[5] += 34001824;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4382619;
          result[3] += 27172242;
          result[4] += 0;
          result[5] += 11394811;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42dc0000))) ) ) {
          result[0] += 2770946;
          result[1] += 0;
          result[2] += 29094939;
          result[3] += 9698313;
          result[4] += 692736;
          result[5] += 692736;
        } else {
          result[0] += 23008753;
          result[1] += 0;
          result[2] += 18407002;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1533916;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 7158278;
          result[4] += 0;
          result[5] += 21474836;
        } else {
          result[0] += 0;
          result[1] += 833974;
          result[2] += 32941982;
          result[3] += 7088780;
          result[4] += 0;
          result[5] += 2084935;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8589934;
          result[3] += 8589934;
          result[4] += 0;
          result[5] += 25769803;
        } else {
          result[0] += 277811;
          result[1] += 0;
          result[2] += 40782742;
          result[3] += 1889118;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 3008148;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39607285;
          result[5] += 334238;
        } else {
          result[0] += 1227133;
          result[1] += 613566;
          result[2] += 1227133;
          result[3] += 0;
          result[4] += 19020569;
          result[5] += 20861269;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 1960547;
          result[1] += 91188;
          result[2] += 0;
          result[3] += 1504606;
          result[4] += 2690053;
          result[5] += 36703276;
        } else {
          result[0] += 1314785;
          result[1] += 0;
          result[2] += 657392;
          result[3] += 25419194;
          result[4] += 0;
          result[5] += 15558299;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 3579139;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39370533;
          result[5] += 0;
        } else {
          result[0] += 376751;
          result[1] += 40971727;
          result[2] += 0;
          result[3] += 659315;
          result[4] += 941878;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 11926940;
          result[1] += 570970;
          result[2] += 4440881;
          result[3] += 8374234;
          result[4] += 6407558;
          result[5] += 11229087;
        } else {
          result[0] += 32774471;
          result[1] += 2433200;
          result[2] += 1917066;
          result[3] += 1364066;
          result[4] += 3834133;
          result[5] += 626733;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 1952257;
          result[2] += 7809031;
          result[3] += 0;
          result[4] += 0;
          result[5] += 33188383;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7158278;
          result[3] += 24656293;
          result[4] += 0;
          result[5] += 11135100;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 2147483;
          result[1] += 8589934;
          result[2] += 0;
          result[3] += 0;
          result[4] += 10737418;
          result[5] += 21474836;
        } else {
          result[0] += 887389;
          result[1] += 0;
          result[2] += 31591081;
          result[3] += 9228855;
          result[4] += 0;
          result[5] += 1242345;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 31236125;
          result[3] += 3904515;
          result[4] += 0;
          result[5] += 7809031;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41998055;
          result[3] += 951617;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 8589934;
          result[1] += 0;
          result[2] += 34359738;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 1244918;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41289782;
          result[5] += 414972;
        } else {
          result[0] += 16625679;
          result[1] += 1385473;
          result[2] += 0;
          result[3] += 0;
          result[4] += 8774664;
          result[5] += 16163855;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 140664;
          result[2] += 0;
          result[3] += 3188403;
          result[4] += 2391302;
          result[5] += 37229301;
        } else {
          result[0] += 280716;
          result[1] += 0;
          result[2] += 0;
          result[3] += 30317416;
          result[4] += 0;
          result[5] += 12351539;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42772925;
          result[2] += 0;
          result[3] += 0;
          result[4] += 176747;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 33006442;
          result[1] += 1620142;
          result[2] += 127070;
          result[3] += 921257;
          result[4] += 6099361;
          result[5] += 1175397;
        } else {
          result[0] += 9636677;
          result[1] += 664598;
          result[2] += 10052051;
          result[3] += 12045846;
          result[4] += 3239917;
          result[5] += 7310582;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4772185;
          result[3] += 25451658;
          result[4] += 0;
          result[5] += 12725829;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6135667;
          result[3] += 2454267;
          result[4] += 0;
          result[5] += 34359738;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 5726623;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 2863311;
          result[4] += 5726623;
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
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42be0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 37580963;
          result[4] += 0;
          result[5] += 5368709;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 5368709;
          result[4] += 0;
          result[5] += 8947848;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 198841;
          result[1] += 0;
          result[2] += 33802983;
          result[3] += 7754802;
          result[4] += 0;
          result[5] += 1193046;
        } else {
          result[0] += 169093;
          result[1] += 0;
          result[2] += 40582368;
          result[3] += 1860025;
          result[4] += 0;
          result[5] += 338186;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c40000))) ) ) {
          result[0] += 460175;
          result[1] += 153391;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39575055;
          result[5] += 2761050;
        } else {
          result[0] += 0;
          result[1] += 40689163;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2260509;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1771674;
          result[1] += 0;
          result[2] += 53687;
          result[3] += 1610612;
          result[4] += 1717986;
          result[5] += 37795712;
        } else {
          result[0] += 3919361;
          result[1] += 1469760;
          result[2] += 1061493;
          result[3] += 17473821;
          result[4] += 816533;
          result[5] += 18208701;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
          result[0] += 0;
          result[1] += 42760883;
          result[2] += 0;
          result[3] += 0;
          result[4] += 188789;
          result[5] += 0;
        } else {
          result[0] += 2059230;
          result[1] += 10884506;
          result[2] += 1176703;
          result[3] += 3235934;
          result[4] += 24122419;
          result[5] += 1470879;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 35137485;
          result[1] += 1111066;
          result[2] += 555533;
          result[3] += 1354112;
          result[4] += 3715129;
          result[5] += 1076345;
        } else {
          result[0] += 6836280;
          result[1] += 297229;
          result[2] += 15604552;
          result[3] += 9511346;
          result[4] += 2080606;
          result[5] += 8619657;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42da0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1385473;
          result[3] += 5541893;
          result[4] += 0;
          result[5] += 36022306;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1952257;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 13991181;
          result[4] += 1626881;
          result[5] += 3904515;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 24542670;
          result[4] += 0;
          result[5] += 18407002;
        } else {
          result[0] += 727960;
          result[1] += 0;
          result[2] += 34650922;
          result[3] += 7425197;
          result[4] += 0;
          result[5] += 145592;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 12884901;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 0;
          result[4] += 0;
          result[5] += 8589934;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41634887;
          result[3] += 1314785;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 436037;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42077598;
          result[5] += 436037;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 25769803;
          result[5] += 17179869;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1420228;
          result[1] += 97946;
          result[2] += 0;
          result[3] += 1909962;
          result[4] += 1958936;
          result[5] += 37562598;
        } else {
          result[0] += 1292799;
          result[1] += 861866;
          result[2] += 287288;
          result[3] += 20684792;
          result[4] += 2154665;
          result[5] += 17668260;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 1263225;
          result[1] += 21474836;
          result[2] += 1263225;
          result[3] += 3789677;
          result[4] += 15158708;
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
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 17524475;
          result[1] += 1428854;
          result[2] += 2815683;
          result[3] += 7564521;
          result[4] += 7438446;
          result[5] += 6177692;
        } else {
          result[0] += 38349832;
          result[1] += 1176703;
          result[2] += 1176703;
          result[3] += 267432;
          result[4] += 1925514;
          result[5] += 53486;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 943948;
          result[1] += 0;
          result[2] += 9911462;
          result[3] += 27846491;
          result[4] += 0;
          result[5] += 4247769;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36168145;
          result[3] += 0;
          result[4] += 0;
          result[5] += 6781527;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 933688;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 10270573;
          result[4] += 0;
          result[5] += 10270573;
        } else {
          result[0] += 1616385;
          result[1] += 0;
          result[2] += 36022306;
          result[3] += 5310981;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 29527900;
          result[3] += 10737418;
          result[4] += 0;
          result[5] += 2684354;
        } else {
          result[0] += 296204;
          result[1] += 0;
          result[2] += 38802807;
          result[3] += 3850660;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 346927;
          result[1] += 0;
          result[2] += 41770118;
          result[3] += 832626;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42be0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0;
          result[1] += 39045157;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3904515;
          result[5] += 0;
        } else {
          result[0] += 810371;
          result[1] += 1157673;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38318980;
          result[5] += 2662648;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 42752203;
          result[2] += 0;
          result[3] += 0;
          result[4] += 197469;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 9544371;
          result[2] += 0;
          result[3] += 0;
          result[4] += 33405301;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42870000))) ) ) {
          result[0] += 228152;
          result[1] += 0;
          result[2] += 228152;
          result[3] += 2395599;
          result[4] += 1311875;
          result[5] += 38785893;
        } else {
          result[0] += 6135667;
          result[1] += 565127;
          result[2] += 2099044;
          result[3] += 15016239;
          result[4] += 3713693;
          result[5] += 15419901;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 35248835;
          result[1] += 1295140;
          result[2] += 175019;
          result[3] += 1330144;
          result[4] += 3885422;
          result[5] += 1015110;
        } else {
          result[0] += 7401521;
          result[1] += 208493;
          result[2] += 8652482;
          result[3] += 9382210;
          result[4] += 2606169;
          result[5] += 14698795;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1533916;
          result[3] += 23008753;
          result[4] += 0;
          result[5] += 18407002;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 4668442;
          result[2] += 14005328;
          result[3] += 13071639;
          result[4] += 0;
          result[5] += 11204262;
        } else {
          result[0] += 2405181;
          result[1] += 687194;
          result[2] += 33672543;
          result[3] += 3435973;
          result[4] += 0;
          result[5] += 2748779;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4772185;
          result[3] += 38177487;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26430567;
          result[3] += 0;
          result[4] += 3303820;
          result[5] += 13215283;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 171114;
          result[1] += 0;
          result[2] += 36789560;
          result[3] += 5646769;
          result[4] += 0;
          result[5] += 342228;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42185443;
          result[3] += 764229;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          result[0] += 223696;
          result[1] += 447392;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41607495;
          result[5] += 671088;
        } else {
          result[0] += 3303820;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 13215283;
          result[5] += 26430567;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1610612;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1757032;
          result[4] += 2733161;
          result[5] += 36848867;
        } else {
          result[0] += 2749537;
          result[1] += 3033972;
          result[2] += 568869;
          result[3] += 16686848;
          result[4] += 2085856;
          result[5] += 17824588;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 10226112;
          result[2] += 0;
          result[3] += 0;
          result[4] += 32723560;
          result[5] += 0;
        } else {
          result[0] += 178956;
          result[1] += 42681237;
          result[2] += 0;
          result[3] += 0;
          result[4] += 89478;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 20918493;
          result[1] += 1335222;
          result[2] += 2596266;
          result[3] += 5526339;
          result[4] += 7343726;
          result[5] += 5229623;
        } else {
          result[0] += 41761028;
          result[1] += 0;
          result[2] += 950915;
          result[3] += 237728;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 34768782;
          result[4] += 0;
          result[5] += 8180890;
        } else {
          result[0] += 3789677;
          result[1] += 0;
          result[2] += 18948385;
          result[3] += 2526451;
          result[4] += 0;
          result[5] += 17685159;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34240983;
          result[3] += 7323216;
          result[4] += 0;
          result[5] += 1385473;
        } else {
          result[0] += 25053975;
          result[1] += 0;
          result[2] += 17895697;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42f40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38177487;
          result[3] += 0;
          result[4] += 0;
          result[5] += 4772185;
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1238932;
          result[1] += 0;
          result[2] += 37167986;
          result[3] += 3923287;
          result[4] += 0;
          result[5] += 619466;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42163048;
          result[3] += 786624;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 3120910;
          result[1] += 0;
          result[2] += 0;
          result[3] += 297229;
          result[4] += 34924474;
          result[5] += 4607058;
        } else {
          result[0] += 28201893;
          result[1] += 3622261;
          result[2] += 0;
          result[3] += 1811130;
          result[4] += 7503256;
          result[5] += 1811130;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 251535;
          result[3] += 1131909;
          result[4] += 2641121;
          result[5] += 38925106;
        } else {
          result[0] += 1700977;
          result[1] += 789739;
          result[2] += 1700977;
          result[3] += 16584527;
          result[4] += 4495439;
          result[5] += 17678012;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 16251227;
          result[2] += 0;
          result[3] += 0;
          result[4] += 26698445;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42851164;
          result[2] += 0;
          result[3] += 0;
          result[4] += 98508;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 36930211;
          result[1] += 1098145;
          result[2] += 122016;
          result[3] += 610080;
          result[4] += 2765698;
          result[5] += 1423521;
        } else {
          result[0] += 10628224;
          result[1] += 1455921;
          result[2] += 7716381;
          result[3] += 8735526;
          result[4] += 2183881;
          result[5] += 12229737;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7251243;
          result[3] += 24542670;
          result[4] += 557787;
          result[5] += 10597971;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 22333829;
          result[3] += 8589934;
          result[4] += 0;
          result[5] += 12025908;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42970000))) ) ) {
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
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42f50000))) ) ) {
          result[0] += 2564159;
          result[1] += 0;
          result[2] += 32693034;
          result[3] += 4487279;
          result[4] += 0;
          result[5] += 3205199;
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 284434;
          result[1] += 0;
          result[2] += 37403192;
          result[3] += 5262046;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41609821;
          result[3] += 1339851;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x428d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 38177487;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4772185;
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
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          result[0] += 519029;
          result[1] += 1427330;
          result[2] += 0;
          result[3] += 0;
          result[4] += 36980836;
          result[5] += 4022476;
        } else {
          result[0] += 2749614;
          result[1] += 174026;
          result[2] += 556883;
          result[3] += 6230138;
          result[4] += 2227535;
          result[5] += 31011473;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 32425129;
          result[1] += 2247960;
          result[2] += 136240;
          result[3] += 1123980;
          result[4] += 5483661;
          result[5] += 1532700;
        } else {
          result[0] += 7957680;
          result[1] += 763065;
          result[2] += 8066689;
          result[3] += 12209044;
          result[4] += 2725233;
          result[5] += 11227960;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 965161;
          result[2] += 6273547;
          result[3] += 27507093;
          result[4] += 1447741;
          result[5] += 6756128;
        } else {
          result[0] += 1101273;
          result[1] += 550636;
          result[2] += 21474836;
          result[3] += 6057005;
          result[4] += 0;
          result[5] += 13765920;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 0;
          result[4] += 4772185;
          result[5] += 23860929;
        } else {
          result[0] += 727960;
          result[1] += 0;
          result[2] += 36398027;
          result[3] += 2183881;
          result[4] += 0;
          result[5] += 3639802;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b10000))) ) ) {
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
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 2174666;
          result[1] += 0;
          result[2] += 35474255;
          result[3] += 5300750;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 74436;
          result[1] += 0;
          result[2] += 41833130;
          result[3] += 893234;
          result[4] += 0;
          result[5] += 148872;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
          result[0] += 316971;
          result[1] += 316971;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41523300;
          result[5] += 792429;
        } else {
          result[0] += 1209849;
          result[1] += 604924;
          result[2] += 0;
          result[3] += 1814774;
          result[4] += 20567449;
          result[5] += 18752674;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
          result[0] += 35720520;
          result[1] += 0;
          result[2] += 0;
          result[3] += 425244;
          result[4] += 5528175;
          result[5] += 1275732;
        } else {
          result[0] += 243570;
          result[1] += 40595;
          result[2] += 121785;
          result[3] += 3937729;
          result[4] += 3734754;
          result[5] += 34871237;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 34805876;
          result[1] += 2478546;
          result[2] += 0;
          result[3] += 814379;
          result[4] += 4001082;
          result[5] += 849787;
        } else {
          result[0] += 4952888;
          result[1] += 517465;
          result[2] += 10349318;
          result[3] += 16706757;
          result[4] += 1330626;
          result[5] += 9092615;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42cc0000))) ) ) {
          result[0] += 190887;
          result[1] += 42758785;
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
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42660000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6135667;
          result[3] += 0;
          result[4] += 36814005;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1342177;
          result[4] += 0;
          result[5] += 41607495;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x425a0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1082764;
          result[1] += 0;
          result[2] += 18767924;
          result[3] += 13715021;
          result[4] += 360921;
          result[5] += 9023040;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 13421772;
          result[3] += 21474836;
          result[4] += 0;
          result[5] += 8053063;
        } else {
          result[0] += 403283;
          result[1] += 0;
          result[2] += 40025868;
          result[3] += 2117237;
          result[4] += 0;
          result[5] += 403283;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42960000))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 6607641;
          result[1] += 0;
          result[2] += 36342030;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 3093832;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39673850;
          result[5] += 181990;
        } else {
          result[0] += 19733633;
          result[1] += 290200;
          result[2] += 1160801;
          result[3] += 0;
          result[4] += 11898220;
          result[5] += 9866816;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2012438;
          result[4] += 2753863;
          result[5] += 38183371;
        } else {
          result[0] += 572662;
          result[1] += 2176116;
          result[2] += 687194;
          result[3] += 20844907;
          result[4] += 2061584;
          result[5] += 16607206;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 32266289;
          result[1] += 2068747;
          result[2] += 61753;
          result[3] += 1358580;
          result[4] += 5773967;
          result[5] += 1420334;
        } else {
          result[0] += 7214643;
          result[1] += 676372;
          result[2] += 10709236;
          result[3] += 10371049;
          result[4] += 3494592;
          result[5] += 10483778;
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
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5113056;
          result[3] += 4090445;
          result[4] += 3067833;
          result[5] += 30678337;
        } else {
          result[0] += 8351325;
          result[1] += 5965232;
          result[2] += 8351325;
          result[3] += 5965232;
          result[4] += 8351325;
          result[5] += 5965232;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 16106127;
          result[3] += 24159191;
          result[4] += 0;
          result[5] += 2684354;
        } else {
          result[0] += 1215556;
          result[1] += 0;
          result[2] += 34440775;
          result[3] += 6077783;
          result[4] += 0;
          result[5] += 1215556;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 13665805;
          result[2] += 29283867;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 31745410;
          result[1] += 0;
          result[2] += 11204262;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20211610;
          result[3] += 12632256;
          result[4] += 0;
          result[5] += 10105805;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40044588;
          result[3] += 2563309;
          result[4] += 0;
          result[5] += 341774;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42200000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 312361;
          result[1] += 156180;
          result[2] += 0;
          result[3] += 937083;
          result[4] += 40294602;
          result[5] += 1249445;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
          result[0] += 29341855;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9780618;
          result[5] += 3827198;
        } else {
          result[0] += 259514;
          result[1] += 43252;
          result[2] += 86504;
          result[3] += 3114175;
          result[4] += 3330437;
          result[5] += 36115787;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 1263225;
          result[1] += 6947741;
          result[2] += 2526451;
          result[3] += 8210966;
          result[4] += 22738062;
          result[5] += 1263225;
        } else {
          result[0] += 674098;
          result[1] += 41119978;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1155596;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 10609760;
          result[1] += 1475153;
          result[2] += 2212730;
          result[3] += 16056482;
          result[4] += 1985784;
          result[5] += 10609760;
        } else {
          result[0] += 35478463;
          result[1] += 1955813;
          result[2] += 2151395;
          result[3] += 704092;
          result[4] += 2346976;
          result[5] += 312930;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5946877;
          result[3] += 29734388;
          result[4] += 0;
          result[5] += 7268406;
        } else {
          result[0] += 1651910;
          result[1] += 0;
          result[2] += 25329294;
          result[3] += 8810189;
          result[4] += 1651910;
          result[5] += 5506368;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17498014;
          result[3] += 22270200;
          result[4] += 0;
          result[5] += 3181457;
        } else {
          result[0] += 1030792;
          result[1] += 0;
          result[2] += 38139309;
          result[3] += 3435973;
          result[4] += 0;
          result[5] += 343597;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11713547;
          result[3] += 0;
          result[4] += 0;
          result[5] += 31236125;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38110273;
          result[3] += 4839399;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 538795;
          result[1] += 0;
          result[2] += 41410258;
          result[3] += 846678;
          result[4] += 0;
          result[5] += 153941;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42240000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 320519;
          result[1] += 160259;
          result[2] += 0;
          result[3] += 0;
          result[4] += 37821353;
          result[5] += 4647539;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 1290972;
          result[1] += 397222;
          result[2] += 248264;
          result[3] += 2234376;
          result[4] += 2135070;
          result[5] += 36643767;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3524075;
          result[3] += 19162161;
          result[4] += 660764;
          result[5] += 19602671;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42890000))) ) ) {
          result[0] += 5052902;
          result[1] += 7916214;
          result[2] += 505290;
          result[3] += 842150;
          result[4] += 26611954;
          result[5] += 2021161;
        } else {
          result[0] += 30817784;
          result[1] += 753013;
          result[2] += 1199244;
          result[3] += 4490193;
          result[4] += 2426377;
          result[5] += 3263059;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 10737418;
          result[1] += 32212254;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 196566;
          result[1] += 42753106;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 1840700;
          result[2] += 1227133;
          result[3] += 26383370;
          result[4] += 1840700;
          result[5] += 11657768;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4190211;
          result[3] += 6285317;
          result[4] += 2095105;
          result[5] += 30379036;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 876523;
          result[2] += 4382619;
          result[3] += 21036574;
          result[4] += 0;
          result[5] += 16653954;
        } else {
          result[0] += 0;
          result[1] += 313501;
          result[2] += 29782619;
          result[3] += 10345541;
          result[4] += 0;
          result[5] += 2508010;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39370533;
          result[5] += 3579139;
        } else {
          result[0] += 0;
          result[1] += 26843545;
          result[2] += 5368709;
          result[3] += 10737418;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 29943786;
          result[3] += 9073874;
          result[4] += 604924;
          result[5] += 3327087;
        } else {
          result[0] += 981083;
          result[1] += 0;
          result[2] += 40333449;
          result[3] += 1526130;
          result[4] += 0;
          result[5] += 109009;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 350609;
          result[4] += 39969491;
          result[5] += 2629571;
        } else {
          result[0] += 0;
          result[1] += 38177487;
          result[2] += 4772185;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1456772;
          result[1] += 0;
          result[2] += 100467;
          result[3] += 1255838;
          result[4] += 1959107;
          result[5] += 38177487;
        } else {
          result[0] += 1994930;
          result[1] += 1760232;
          result[2] += 1994930;
          result[3] += 18893162;
          result[4] += 704092;
          result[5] += 17602324;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b00000))) ) ) {
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 14188731;
          result[1] += 986089;
          result[2] += 2739137;
          result[3] += 9641763;
          result[4] += 7833932;
          result[5] += 7560018;
        } else {
          result[0] += 34262309;
          result[1] += 974283;
          result[2] += 3085231;
          result[3] += 365356;
          result[4] += 3937729;
          result[5] += 324761;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42e80000))) ) ) {
          result[0] += 0;
          result[1] += 5781686;
          result[2] += 1651910;
          result[3] += 9085507;
          result[4] += 2477865;
          result[5] += 23952702;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 5368709;
          result[2] += 1789569;
          result[3] += 14316557;
          result[4] += 0;
          result[5] += 21474836;
        } else {
          result[0] += 346368;
          result[1] += 346368;
          result[2] += 28055834;
          result[3] += 12469259;
          result[4] += 0;
          result[5] += 1731841;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7809031;
          result[3] += 3904515;
          result[4] += 0;
          result[5] += 31236125;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42960000))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 156941;
          result[1] += 0;
          result[2] += 40177038;
          result[3] += 2563378;
          result[4] += 0;
          result[5] += 52313;
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 153391;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42029322;
          result[5] += 766958;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32212254;
          result[3] += 0;
          result[4] += 10737418;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 18673770;
          result[5] += 24275902;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5368709;
          result[3] += 0;
          result[4] += 37580963;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42620000))) ) ) {
          result[0] += 20513276;
          result[1] += 9615598;
          result[2] += 0;
          result[3] += 3205199;
          result[4] += 2564159;
          result[5] += 7051438;
        } else {
          result[0] += 0;
          result[1] += 45545;
          result[2] += 227728;
          result[3] += 3142658;
          result[4] += 2049560;
          result[5] += 37484179;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 29054190;
          result[1] += 6316128;
          result[2] += 2526451;
          result[3] += 0;
          result[4] += 5052902;
          result[5] += 0;
        } else {
          result[0] += 159072;
          result[1] += 1590728;
          result[2] += 3022384;
          result[3] += 19725034;
          result[4] += 1749801;
          result[5] += 16702650;
        }
      }
    }
  } else {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d40000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 4908534;
          result[1] += 11248723;
          result[2] += 0;
          result[3] += 1227133;
          result[4] += 25156237;
          result[5] += 409044;
        } else {
          result[0] += 32610538;
          result[1] += 585233;
          result[2] += 552720;
          result[3] += 2340935;
          result[4] += 3316325;
          result[5] += 3543916;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 749122;
          result[1] += 249707;
          result[2] += 11985955;
          result[3] += 18977762;
          result[4] += 2497074;
          result[5] += 8490051;
        } else {
          result[0] += 2226420;
          result[1] += 485764;
          result[2] += 35582245;
          result[3] += 3319390;
          result[4] += 202401;
          result[5] += 1133450;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a60000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 42642889;
          result[2] += 0;
          result[3] += 0;
          result[4] += 204522;
          result[5] += 102261;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x424a0000))) ) ) {
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
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 367091;
          result[1] += 734182;
          result[2] += 0;
          result[3] += 183545;
          result[4] += 39278760;
          result[5] += 2386092;
        } else {
          result[0] += 21474836;
          result[1] += 421075;
          result[2] += 0;
          result[3] += 421075;
          result[4] += 8842579;
          result[5] += 11790106;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 444153;
          result[2] += 44415;
          result[3] += 2442845;
          result[4] += 2931415;
          result[5] += 37086842;
        } else {
          result[0] += 0;
          result[1] += 1263225;
          result[2] += 1804608;
          result[3] += 23279444;
          result[4] += 1082764;
          result[5] += 15519629;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 1651910;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41297762;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 41997352;
          result[2] += 190464;
          result[3] += 0;
          result[4] += 761856;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42950000))) ) ) {
          result[0] += 33608739;
          result[1] += 589627;
          result[2] += 0;
          result[3] += 1799914;
          result[4] += 4034290;
          result[5] += 2917102;
        } else {
          result[0] += 7119999;
          result[1] += 2296773;
          result[2] += 8383224;
          result[3] += 11024514;
          result[4] += 4134193;
          result[5] += 9990966;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5259143;
          result[3] += 27172242;
          result[4] += 0;
          result[5] += 10518287;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 14316557;
          result[4] += 0;
          result[5] += 28633115;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36001931;
          result[3] += 3789677;
          result[4] += 0;
          result[5] += 3158064;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 622459;
          result[1] += 0;
          result[2] += 25520820;
          result[3] += 9336885;
          result[4] += 0;
          result[5] += 7469508;
        } else {
          result[0] += 105011;
          result[1] += 0;
          result[2] += 40481904;
          result[3] += 2362757;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 34359738;
          result[1] += 0;
          result[2] += 4294967;
          result[3] += 0;
          result[4] += 4294967;
          result[5] += 0;
        } else {
          result[0] += 7469508;
          result[1] += 0;
          result[2] += 35480164;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 370255;
          result[1] += 185127;
          result[2] += 0;
          result[3] += 555383;
          result[4] += 39432242;
          result[5] += 2406662;
        } else {
          result[0] += 2309122;
          result[1] += 106574;
          result[2] += 106574;
          result[3] += 6643166;
          result[4] += 2984096;
          result[5] += 30800137;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 1342177;
          result[1] += 13869165;
          result[2] += 894784;
          result[3] += 1342177;
          result[4] += 25053975;
          result[5] += 447392;
        } else {
          result[0] += 29622359;
          result[1] += 961764;
          result[2] += 2802857;
          result[3] += 3654706;
          result[4] += 3297479;
          result[5] += 2610504;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ab0000))) ) ) {
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
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42420000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 833974;
          result[2] += 2501922;
          result[3] += 19181407;
          result[4] += 3335896;
          result[5] += 17096471;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 4156419;
          result[1] += 0;
          result[2] += 16625679;
          result[3] += 1385473;
          result[4] += 2770946;
          result[5] += 18011153;
        } else {
          result[0] += 1130254;
          result[1] += 2260509;
          result[2] += 33907636;
          result[3] += 4521018;
          result[4] += 0;
          result[5] += 1130254;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 20043180;
          result[4] += 0;
          result[5] += 22906492;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30678337;
          result[3] += 12271335;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 357063;
          result[1] += 102018;
          result[2] += 39685089;
          result[3] += 2397428;
          result[4] += 0;
          result[5] += 408072;
        } else {
          result[0] += 12407683;
          result[1] += 0;
          result[2] += 30541989;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
          result[0] += 654720;
          result[1] += 654720;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39676069;
          result[5] += 1964161;
        } else {
          result[0] += 29898667;
          result[1] += 0;
          result[2] += 237291;
          result[3] += 0;
          result[4] += 9017058;
          result[5] += 3796656;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 111993;
          result[2] += 0;
          result[3] += 1007945;
          result[4] += 895951;
          result[5] += 40933782;
        } else {
          result[0] += 571392;
          result[1] += 476160;
          result[2] += 0;
          result[3] += 12475403;
          result[4] += 6475782;
          result[5] += 22950933;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42660000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42540000))) ) ) {
          result[0] += 0;
          result[1] += 42850938;
          result[2] += 0;
          result[3] += 0;
          result[4] += 98734;
          result[5] += 0;
        } else {
          result[0] += 2386092;
          result[1] += 19088743;
          result[2] += 0;
          result[3] += 4772185;
          result[4] += 16702650;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 11630295;
          result[1] += 824194;
          result[2] += 2655736;
          result[3] += 15476534;
          result[4] += 1465234;
          result[5] += 10897678;
        } else {
          result[0] += 32202590;
          result[1] += 2590124;
          result[2] += 2822075;
          result[3] += 1043781;
          result[4] += 3401954;
          result[5] += 889147;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5259143;
          result[3] += 31554861;
          result[4] += 1753047;
          result[5] += 4382619;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 4601750;
          result[1] += 1533916;
          result[2] += 18407002;
          result[3] += 9203501;
          result[4] += 0;
          result[5] += 9203501;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 6964811;
          result[2] += 6964811;
          result[3] += 12768821;
          result[4] += 2321603;
          result[5] += 13929623;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 1342177;
          result[1] += 671088;
          result[2] += 25501368;
          result[3] += 11408506;
          result[4] += 2684354;
          result[5] += 1342177;
        } else {
          result[0] += 799993;
          result[1] += 0;
          result[2] += 39799696;
          result[3] += 2199983;
          result[4] += 0;
          result[5] += 149998;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          result[0] += 405185;
          result[1] += 202592;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42341894;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 26030104;
          result[5] += 16919568;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 62155;
          result[3] += 745869;
          result[4] += 1864674;
          result[5] += 40276972;
        } else {
          result[0] += 3352611;
          result[1] += 3352611;
          result[2] += 90611;
          result[3] += 14769613;
          result[4] += 3533833;
          result[5] += 17850391;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 1301505;
          result[1] += 8785160;
          result[2] += 325376;
          result[3] += 1952257;
          result[4] += 30259996;
          result[5] += 325376;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 16255258;
          result[1] += 1193046;
          result[2] += 2386092;
          result[3] += 7083713;
          result[4] += 4399358;
          result[5] += 11632203;
        } else {
          result[0] += 35610699;
          result[1] += 1334358;
          result[2] += 1667948;
          result[3] += 875672;
          result[4] += 2960608;
          result[5] += 500384;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b90000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42880000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12884901;
          result[3] += 4294967;
          result[4] += 25769803;
          result[5] += 0;
        } else {
          result[0] += 933688;
          result[1] += 933688;
          result[2] += 4668442;
          result[3] += 5602131;
          result[4] += 933688;
          result[5] += 29878033;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7761989;
          result[3] += 29495558;
          result[4] += 0;
          result[5] += 5692125;
        } else {
          result[0] += 885560;
          result[1] += 4870581;
          result[2] += 25681247;
          result[3] += 7970042;
          result[4] += 442780;
          result[5] += 3099460;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 18721652;
          result[3] += 12114010;
          result[4] += 2202547;
          result[5] += 9911462;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34001824;
          result[3] += 8947848;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42910000))) ) ) {
          result[0] += 26658417;
          result[1] += 0;
          result[2] += 16291255;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 644741;
          result[1] += 0;
          result[2] += 39527585;
          result[3] += 2678155;
          result[4] += 0;
          result[5] += 99190;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 423845;
          result[1] += 565127;
          result[2] += 0;
          result[3] += 0;
          result[4] += 37863527;
          result[5] += 4097172;
        } else {
          result[0] += 0;
          result[1] += 34768782;
          result[2] += 0;
          result[3] += 0;
          result[4] += 6135667;
          result[5] += 2045222;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 559770;
          result[1] += 101776;
          result[2] += 0;
          result[3] += 1933753;
          result[4] += 2137305;
          result[5] += 38217066;
        } else {
          result[0] += 3916383;
          result[1] += 913822;
          result[2] += 1566553;
          result[3] += 16970995;
          result[4] += 3655291;
          result[5] += 15926626;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 32188233;
          result[1] += 2818472;
          result[2] += 160140;
          result[3] += 992870;
          result[4] += 5701000;
          result[5] += 1088955;
        } else {
          result[0] += 7158278;
          result[1] += 1121176;
          result[2] += 6640812;
          result[3] += 11039273;
          result[4] += 2242352;
          result[5] += 14747779;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 208493;
          result[1] += 42741179;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 30678337;
          result[1] += 12271335;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9544371;
          result[5] += 33405301;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 13071639;
          result[3] += 23653443;
          result[4] += 0;
          result[5] += 6224590;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17570320;
          result[3] += 19522578;
          result[4] += 0;
          result[5] += 5856773;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37223049;
          result[3] += 5726623;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b20000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
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
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 7809031;
          result[1] += 0;
          result[2] += 29934620;
          result[3] += 1301505;
          result[4] += 0;
          result[5] += 3904515;
        } else {
          result[0] += 443796;
          result[1] += 0;
          result[2] += 40286891;
          result[3] += 2169673;
          result[4] += 0;
          result[5] += 49310;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 1212289;
          result[1] += 1212289;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40351910;
          result[5] += 173184;
        } else {
          result[0] += 25495239;
          result[1] += 980586;
          result[2] += 0;
          result[3] += 980586;
          result[4] += 7060220;
          result[5] += 8433040;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 65672;
          result[2] += 0;
          result[3] += 1773151;
          result[4] += 1641807;
          result[5] += 39469041;
        } else {
          result[0] += 712857;
          result[1] += 0;
          result[2] += 0;
          result[3] += 12742330;
          result[4] += 6237504;
          result[5] += 23256980;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 21727481;
          result[2] += 0;
          result[3] += 0;
          result[4] += 21222191;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42674941;
          result[2] += 0;
          result[3] += 0;
          result[4] += 274731;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 39708188;
          result[1] += 597115;
          result[2] += 42651;
          result[3] += 383860;
          result[4] += 1620742;
          result[5] += 597115;
        } else {
          result[0] += 7268406;
          result[1] += 1227133;
          result[2] += 9722673;
          result[3] += 14064837;
          result[4] += 1227133;
          result[5] += 9439488;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 452101;
          result[1] += 2712610;
          result[2] += 904203;
          result[3] += 4068916;
          result[4] += 7233629;
          result[5] += 27578211;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10278554;
          result[3] += 21291290;
          result[4] += 0;
          result[5] += 11379827;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 461824;
          result[1] += 3232771;
          result[2] += 27247641;
          result[3] += 11083786;
          result[4] += 0;
          result[5] += 923648;
        } else {
          result[0] += 23520058;
          result[1] += 0;
          result[2] += 14827863;
          result[3] += 1533916;
          result[4] += 3067833;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 16980103;
          result[3] += 18977762;
          result[4] += 0;
          result[5] += 6991807;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35480164;
          result[3] += 7158278;
          result[4] += 0;
          result[5] += 311229;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32212254;
          result[3] += 10737418;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42193758;
          result[3] += 755914;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 338186;
          result[4] += 41258740;
          result[5] += 1352745;
        } else {
          result[0] += 0;
          result[1] += 8180890;
          result[2] += 0;
          result[3] += 22497447;
          result[4] += 4090445;
          result[5] += 8180890;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x425e0000))) ) ) {
          result[0] += 34804045;
          result[1] += 0;
          result[2] += 0;
          result[3] += 740511;
          result[4] += 5924092;
          result[5] += 1481023;
        } else {
          result[0] += 37874;
          result[1] += 189372;
          result[2] += 340870;
          result[3] += 6135667;
          result[4] += 2537590;
          result[5] += 33708297;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
          result[0] += 0;
          result[1] += 42738618;
          result[2] += 0;
          result[3] += 0;
          result[4] += 211054;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 17471053;
          result[2] += 0;
          result[3] += 0;
          result[4] += 25478619;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42890000))) ) ) {
          result[0] += 5629326;
          result[1] += 10424677;
          result[2] += 1876442;
          result[3] += 2084935;
          result[4] += 20223875;
          result[5] += 2710416;
        } else {
          result[0] += 33326732;
          result[1] += 491907;
          result[2] += 1260512;
          result[3] += 3197398;
          result[4] += 2305816;
          result[5] += 2367304;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 940503;
          result[1] += 627002;
          result[2] += 1254005;
          result[3] += 11599546;
          result[4] += 1254005;
          result[5] += 27274609;
        } else {
          result[0] += 2603010;
          result[1] += 26030104;
          result[2] += 5206020;
          result[3] += 0;
          result[4] += 9110536;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e50000))) ) ) {
          result[0] += 1431655;
          result[1] += 0;
          result[2] += 24338148;
          result[3] += 11453246;
          result[4] += 0;
          result[5] += 5726623;
        } else {
          result[0] += 32212254;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 10737418;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4443069;
          result[3] += 29620464;
          result[4] += 0;
          result[5] += 8886139;
        } else {
          result[0] += 523776;
          result[1] += 0;
          result[2] += 31950366;
          result[3] += 7856647;
          result[4] += 0;
          result[5] += 2618882;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 816977;
          result[1] += 0;
          result[2] += 37814385;
          result[3] += 3851465;
          result[4] += 0;
          result[5] += 466844;
        } else {
          result[0] += 159367;
          result[1] += 0;
          result[2] += 41993465;
          result[3] += 796839;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 532433;
          result[1] += 354955;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40110025;
          result[5] += 1952257;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 2127537;
          result[1] += 531884;
          result[2] += 0;
          result[3] += 1684300;
          result[4] += 2171861;
          result[5] += 36434087;
        } else {
          result[0] += 792429;
          result[1] += 158485;
          result[2] += 633943;
          result[3] += 23297424;
          result[4] += 792429;
          result[5] += 17274960;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 10367162;
          result[2] += 0;
          result[3] += 0;
          result[4] += 32582510;
          result[5] += 0;
        } else {
          result[0] += 94187;
          result[1] += 42572921;
          result[2] += 0;
          result[3] += 188375;
          result[4] += 94187;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 33115858;
          result[1] += 1856051;
          result[2] += 162811;
          result[3] += 1074555;
          result[4] += 6056587;
          result[5] += 683808;
        } else {
          result[0] += 8820022;
          result[1] += 1533916;
          result[2] += 6806756;
          result[3] += 8915891;
          result[4] += 4697620;
          result[5] += 12175465;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2684354;
          result[3] += 35791394;
          result[4] += 0;
          result[5] += 4473924;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 22845570;
          result[3] += 15534988;
          result[4] += 0;
          result[5] += 4569114;
        } else {
          result[0] += 1840700;
          result[1] += 0;
          result[2] += 38041138;
          result[3] += 613566;
          result[4] += 0;
          result[5] += 2454267;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34240983;
          result[3] += 8114915;
          result[4] += 0;
          result[5] += 593774;
        } else {
          result[0] += 2084935;
          result[1] += 0;
          result[2] += 38362814;
          result[3] += 1667948;
          result[4] += 0;
          result[5] += 833974;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 224475;
          result[1] += 0;
          result[2] += 41453168;
          result[3] += 1047552;
          result[4] += 0;
          result[5] += 224475;
        } else {
          result[0] += 25769803;
          result[1] += 0;
          result[2] += 17179869;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
          result[0] += 585677;
          result[1] += 780903;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40802189;
          result[5] += 780903;
        } else {
          result[0] += 17471053;
          result[1] += 3639802;
          result[2] += 0;
          result[3] += 3639802;
          result[4] += 8735526;
          result[5] += 9463487;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 137953;
          result[2] += 0;
          result[3] += 1517493;
          result[4] += 4000665;
          result[5] += 37293559;
        } else {
          result[0] += 288252;
          result[1] += 0;
          result[2] += 1729517;
          result[3] += 22195468;
          result[4] += 720632;
          result[5] += 18015802;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 9873488;
          result[2] += 0;
          result[3] += 0;
          result[4] += 33076184;
          result[5] += 0;
        } else {
          result[0] += 577798;
          result[1] += 41601476;
          result[2] += 288899;
          result[3] += 0;
          result[4] += 481498;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 35253091;
          result[1] += 2267742;
          result[2] += 103079;
          result[3] += 721554;
          result[4] += 4054449;
          result[5] += 549755;
        } else {
          result[0] += 5753382;
          result[1] += 133799;
          result[2] += 4415386;
          result[3] += 13379960;
          result[4] += 2943591;
          result[5] += 16323551;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 1263225;
          result[1] += 0;
          result[2] += 0;
          result[3] += 12632256;
          result[4] += 0;
          result[5] += 29054190;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 13137547;
          result[3] += 20716901;
          result[4] += 0;
          result[5] += 9095224;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36686178;
          result[3] += 5368709;
          result[4] += 0;
          result[5] += 894784;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42f50000))) ) ) {
          result[0] += 1062359;
          result[1] += 0;
          result[2] += 33691969;
          result[3] += 5918859;
          result[4] += 607062;
          result[5] += 1669421;
        } else {
          result[0] += 32212254;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37700268;
          result[3] += 5249404;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 71942;
          result[1] += 0;
          result[2] += 42086362;
          result[3] += 719425;
          result[4] += 0;
          result[5] += 71942;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 474582;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42000508;
          result[5] += 474582;
        } else {
          result[0] += 0;
          result[1] += 2741468;
          result[2] += 0;
          result[3] += 1827645;
          result[4] += 21017925;
          result[5] += 17362633;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 896029;
          result[4] += 2210205;
          result[5] += 39843437;
        } else {
          result[0] += 3560202;
          result[1] += 530242;
          result[2] += 75748;
          result[3] += 13483318;
          result[4] += 4696436;
          result[5] += 20603723;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 19253301;
          result[2] += 0;
          result[3] += 0;
          result[4] += 22215348;
          result[5] += 1481023;
        } else {
          result[0] += 0;
          result[1] += 42653468;
          result[2] += 0;
          result[3] += 0;
          result[4] += 296204;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42870000))) ) ) {
          result[0] += 4966968;
          result[1] += 10518287;
          result[2] += 584349;
          result[3] += 1460873;
          result[4] += 24542670;
          result[5] += 876523;
        } else {
          result[0] += 32382455;
          result[1] += 355200;
          result[2] += 1716802;
          result[3] += 3552006;
          result[4] += 2930404;
          result[5] += 2012803;
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 3181457;
          result[1] += 0;
          result[2] += 4772185;
          result[3] += 12725829;
          result[4] += 6362914;
          result[5] += 15907286;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3702558;
          result[3] += 32582510;
          result[4] += 0;
          result[5] += 6664604;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26724240;
          result[3] += 16225432;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e50000))) ) ) {
          result[0] += 536870;
          result[1] += 4831838;
          result[2] += 26843545;
          result[3] += 1610612;
          result[4] += 536870;
          result[5] += 8589934;
        } else {
          result[0] += 34690120;
          result[1] += 0;
          result[2] += 6607641;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1651910;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 873975;
          result[1] += 624268;
          result[2] += 32836523;
          result[3] += 6742099;
          result[4] += 374561;
          result[5] += 1498244;
        } else {
          result[0] += 138101;
          result[1] += 0;
          result[2] += 41775807;
          result[3] += 897661;
          result[4] += 0;
          result[5] += 138101;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 4253801;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 34990947;
          result[5] += 3704923;
        } else {
          result[0] += 23148200;
          result[1] += 9203501;
          result[2] += 0;
          result[3] += 1673363;
          result[4] += 6414561;
          result[5] += 2510045;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 54435;
          result[1] += 217742;
          result[2] += 0;
          result[3] += 1959680;
          result[4] += 4028232;
          result[5] += 36689581;
        } else {
          result[0] += 1193046;
          result[1] += 298261;
          result[2] += 2087831;
          result[3] += 20182369;
          result[4] += 994205;
          result[5] += 18193958;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 16727767;
          result[2] += 2260509;
          result[3] += 0;
          result[4] += 23509294;
          result[5] += 452101;
        } else {
          result[0] += 0;
          result[1] += 42848852;
          result[2] += 0;
          result[3] += 0;
          result[4] += 100820;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 34976056;
          result[1] += 924477;
          result[2] += 308159;
          result[3] += 1540795;
          result[4] += 3582349;
          result[5] += 1617835;
        } else {
          result[0] += 12648609;
          result[1] += 1806944;
          result[2] += 11258652;
          result[3] += 9034720;
          result[4] += 2779914;
          result[5] += 5420832;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 14316557;
          result[4] += 28633115;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1533916;
          result[3] += 0;
          result[4] += 1533916;
          result[5] += 39881839;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8145627;
          result[3] += 26658417;
          result[4] += 0;
          result[5] += 8145627;
        } else {
          result[0] += 0;
          result[1] += 8589934;
          result[2] += 6871947;
          result[3] += 0;
          result[4] += 0;
          result[5] += 27487790;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 5368709;
          result[1] += 10737418;
          result[2] += 5368709;
          result[3] += 0;
          result[4] += 1789569;
          result[5] += 19685266;
        } else {
          result[0] += 1422174;
          result[1] += 0;
          result[2] += 25883577;
          result[3] += 11092961;
          result[4] += 568869;
          result[5] += 3982088;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 34359738;
          result[1] += 0;
          result[2] += 8589934;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 95549;
          result[1] += 0;
          result[2] += 40035401;
          result[3] += 2818721;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 380085;
          result[1] += 950214;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41619373;
          result[5] += 0;
        } else {
          result[0] += 12440594;
          result[1] += 888613;
          result[2] += 888613;
          result[3] += 2665841;
          result[4] += 13329208;
          result[5] += 12736799;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 104246;
          result[1] += 677604;
          result[2] += 0;
          result[3] += 2084935;
          result[4] += 2449799;
          result[5] += 37633087;
        } else {
          result[0] += 0;
          result[1] += 455296;
          result[2] += 1821187;
          result[3] += 22157781;
          result[4] += 1821187;
          result[5] += 16694219;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 4090445;
          result[1] += 10226112;
          result[2] += 0;
          result[3] += 10226112;
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
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 32243377;
          result[1] += 1867377;
          result[2] += 529090;
          result[3] += 1400532;
          result[4] += 5695500;
          result[5] += 1213795;
        } else {
          result[0] += 6955859;
          result[1] += 110410;
          result[2] += 7728732;
          result[3] += 12145151;
          result[4] += 2539440;
          result[5] += 13470077;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4294967;
          result[3] += 0;
          result[4] += 38654705;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2962046;
          result[4] += 1481023;
          result[5] += 38506603;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4668442;
          result[3] += 16806393;
          result[4] += 0;
          result[5] += 21474836;
        } else {
          result[0] += 0;
          result[1] += 1840700;
          result[2] += 31291904;
          result[3] += 8589934;
          result[4] += 0;
          result[5] += 1227133;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 1431655;
          result[1] += 0;
          result[2] += 11453246;
          result[3] += 22906492;
          result[4] += 5726623;
          result[5] += 1431655;
        } else {
          result[0] += 1799567;
          result[1] += 0;
          result[2] += 34911605;
          result[3] += 5398701;
          result[4] += 0;
          result[5] += 839798;
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
          result[0] += 154217;
          result[1] += 0;
          result[2] += 41947256;
          result[3] += 848198;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 208493;
          result[1] += 625480;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41281724;
          result[5] += 833974;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 5052902;
          result[4] += 21474836;
          result[5] += 16421933;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 820694;
          result[1] += 382990;
          result[2] += 54712;
          result[3] += 1039546;
          result[4] += 2024379;
          result[5] += 38627349;
        } else {
          result[0] += 2943018;
          result[1] += 2115294;
          result[2] += 2391202;
          result[3] += 13611459;
          result[4] += 2115294;
          result[5] += 19773404;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 8589934;
          result[2] += 0;
          result[3] += 0;
          result[4] += 34359738;
          result[5] += 0;
        } else {
          result[0] += 193032;
          result[1] += 42177543;
          result[2] += 0;
          result[3] += 96516;
          result[4] += 482580;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 31920776;
          result[1] += 1260445;
          result[2] += 94533;
          result[3] += 1733112;
          result[4] += 6428270;
          result[5] += 1512534;
        } else {
          result[0] += 9921123;
          result[1] += 2888428;
          result[2] += 9293204;
          result[3] += 9921123;
          result[4] += 3390763;
          result[5] += 7535030;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 18171015;
          result[2] += 9911462;
          result[3] += 1651910;
          result[4] += 13215283;
          result[5] += 0;
        } else {
          result[0] += 998829;
          result[1] += 2996488;
          result[2] += 4994148;
          result[3] += 5992977;
          result[4] += 1997659;
          result[5] += 25969569;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 13831250;
          result[3] += 25842599;
          result[4] += 0;
          result[5] += 3275822;
        } else {
          result[0] += 876523;
          result[1] += 0;
          result[2] += 33307909;
          result[3] += 1753047;
          result[4] += 2629571;
          result[5] += 4382619;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a40000))) ) ) {
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
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 15339168;
          result[1] += 0;
          result[2] += 12271335;
          result[3] += 3067833;
          result[4] += 0;
          result[5] += 12271335;
        } else {
          result[0] += 394486;
          result[1] += 0;
          result[2] += 40138959;
          result[3] += 2416227;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 187553;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42199460;
          result[5] += 562659;
        } else {
          result[0] += 24298221;
          result[1] += 684456;
          result[2] += 0;
          result[3] += 171114;
          result[4] += 9924625;
          result[5] += 7871254;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 2064888;
          result[2] += 0;
          result[3] += 2064888;
          result[4] += 28908433;
          result[5] += 9911462;
        } else {
          result[0] += 326613;
          result[1] += 0;
          result[2] += 0;
          result[3] += 5389122;
          result[4] += 2653734;
          result[5] += 34580202;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 41607495;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1342177;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d60000))) ) ) {
          result[0] += 20618206;
          result[1] += 2067728;
          result[2] += 1831416;
          result[3] += 7561978;
          result[4] += 4667158;
          result[5] += 6203185;
        } else {
          result[0] += 39096011;
          result[1] += 621558;
          result[2] += 870181;
          result[3] += 310779;
          result[4] += 1864674;
          result[5] += 186467;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 438261;
          result[2] += 876523;
          result[3] += 35499219;
          result[4] += 1314785;
          result[5] += 4820881;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11930464;
          result[3] += 16702650;
          result[4] += 0;
          result[5] += 14316557;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 2290649;
          result[1] += 2290649;
          result[2] += 6299285;
          result[3] += 5153960;
          result[4] += 2863311;
          result[5] += 24051816;
        } else {
          result[0] += 1614649;
          result[1] += 0;
          result[2] += 22928020;
          result[3] += 14854774;
          result[4] += 968789;
          result[5] += 2583438;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42880000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 37407779;
          result[1] += 0;
          result[2] += 5541893;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1664716;
          result[1] += 0;
          result[2] += 32295490;
          result[3] += 6492392;
          result[4] += 0;
          result[5] += 2497074;
        } else {
          result[0] += 191454;
          result[1] += 0;
          result[2] += 40716034;
          result[3] += 1850728;
          result[4] += 0;
          result[5] += 191454;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x423c0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a70000))) ) ) {
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
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 6157659;
          result[1] += 153941;
          result[2] += 0;
          result[3] += 0;
          result[4] += 33559242;
          result[5] += 3078829;
        } else {
          result[0] += 208831;
          result[1] += 1044157;
          result[2] += 626494;
          result[3] += 6404165;
          result[4] += 2680003;
          result[5] += 31986020;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
          result[0] += 32454224;
          result[1] += 1088864;
          result[2] += 90738;
          result[3] += 1905513;
          result[4] += 5172108;
          result[5] += 2238222;
        } else {
          result[0] += 6465542;
          result[1] += 692736;
          result[2] += 11199242;
          result[3] += 10737418;
          result[4] += 3117314;
          result[5] += 10737418;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5726623;
          result[3] += 1431655;
          result[4] += 0;
          result[5] += 35791394;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2260509;
          result[3] += 36168145;
          result[4] += 0;
          result[5] += 4521018;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7809031;
          result[3] += 29283867;
          result[4] += 0;
          result[5] += 5856773;
        } else {
          result[0] += 0;
          result[1] += 1789569;
          result[2] += 31496426;
          result[3] += 5726623;
          result[4] += 0;
          result[5] += 3937053;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 9544371;
          result[4] += 0;
          result[5] += 33405301;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 18407002;
          result[2] += 6135667;
          result[3] += 0;
          result[4] += 6135667;
          result[5] += 12271335;
        } else {
          result[0] += 418510;
          result[1] += 0;
          result[2] += 39863155;
          result[3] += 2511064;
          result[4] += 0;
          result[5] += 156941;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 768919;
          result[1] += 549228;
          result[2] += 0;
          result[3] += 0;
          result[4] += 37677078;
          result[5] += 3954445;
        } else {
          result[0] += 0;
          result[1] += 38581909;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4367763;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 35773271;
          result[1] += 1522266;
          result[2] += 326200;
          result[3] += 217466;
          result[4] += 2718333;
          result[5] += 2392133;
        } else {
          result[0] += 3656995;
          result[1] += 453787;
          result[2] += 720721;
          result[3] += 7927938;
          result[4] += 3203207;
          result[5] += 26987022;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 42854861;
          result[2] += 0;
          result[3] += 0;
          result[4] += 94811;
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42df0000))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
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
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 42049530;
          result[1] += 0;
          result[2] += 192887;
          result[3] += 64295;
          result[4] += 642959;
          result[5] += 0;
        } else {
          result[0] += 12271335;
          result[1] += 0;
          result[2] += 0;
          result[3] += 18407002;
          result[4] += 12271335;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 22817013;
          result[3] += 8053063;
          result[4] += 0;
          result[5] += 12079595;
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
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6316128;
          result[3] += 23369674;
          result[4] += 2526451;
          result[5] += 10737418;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 29144420;
          result[3] += 13038293;
          result[4] += 0;
          result[5] += 766958;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 2562338;
          result[1] += 0;
          result[2] += 31236125;
          result[3] += 7320966;
          result[4] += 0;
          result[5] += 1830241;
        } else {
          result[0] += 483939;
          result[1] += 0;
          result[2] += 40590465;
          result[3] += 1754282;
          result[4] += 0;
          result[5] += 120984;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 24542670;
          result[2] += 0;
          result[3] += 0;
          result[4] += 12271335;
          result[5] += 6135667;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 17179869;
          result[2] += 0;
          result[3] += 0;
          result[4] += 25769803;
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
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 668477;
          result[1] += 501358;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38270331;
          result[5] += 3509506;
        } else {
          result[0] += 1878370;
          result[1] += 866940;
          result[2] += 397347;
          result[3] += 6213072;
          result[4] += 1986738;
          result[5] += 31607202;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 2055008;
          result[1] += 15823563;
          result[2] += 822003;
          result[3] += 0;
          result[4] += 23016092;
          result[5] += 1233004;
        } else {
          result[0] += 28684986;
          result[1] += 311229;
          result[2] += 2178606;
          result[3] += 4279405;
          result[4] += 2697322;
          result[5] += 4798121;
        }
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 40628069;
          result[4] += 0;
          result[5] += 2321603;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 429496;
          result[1] += 0;
          result[2] += 24481313;
          result[3] += 12025908;
          result[4] += 1288490;
          result[5] += 4724464;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38177487;
          result[3] += 3976821;
          result[4] += 0;
          result[5] += 795364;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 1331772;
          result[1] += 0;
          result[2] += 34293149;
          result[3] += 5992977;
          result[4] += 0;
          result[5] += 1331772;
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35526272;
          result[3] += 6893157;
          result[4] += 0;
          result[5] += 530242;
        } else {
          result[0] += 80732;
          result[1] += 0;
          result[2] += 42223080;
          result[3] += 484394;
          result[4] += 0;
          result[5] += 161464;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 40265318;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 2684354;
        } else {
          result[0] += 147087;
          result[1] += 147087;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38978299;
          result[5] += 3677198;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1079877;
          result[1] += 49085;
          result[2] += 98170;
          result[3] += 1570730;
          result[4] += 2846949;
          result[5] += 37304858;
        } else {
          result[0] += 2497074;
          result[1] += 1331772;
          result[2] += 499414;
          result[3] += 18811290;
          result[4] += 5826506;
          result[5] += 13983614;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42660000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 6781527;
          result[2] += 0;
          result[3] += 0;
          result[4] += 36168145;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42060445;
          result[2] += 88922;
          result[3] += 0;
          result[4] += 800304;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
          result[0] += 5757746;
          result[1] += 1244918;
          result[2] += 466844;
          result[3] += 12916024;
          result[4] += 4512827;
          result[5] += 18051311;
        } else {
          result[0] += 32318867;
          result[1] += 1005205;
          result[2] += 1340273;
          result[3] += 2345478;
          result[4] += 3959898;
          result[5] += 1979949;
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3964585;
          result[3] += 8589934;
          result[4] += 3964585;
          result[5] += 26430567;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5651272;
          result[3] += 31647127;
          result[4] += 0;
          result[5] += 5651272;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32609936;
          result[3] += 6362914;
          result[4] += 0;
          result[5] += 3976821;
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
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0;
          result[1] += 35370318;
          result[2] += 0;
          result[3] += 0;
          result[4] += 5052902;
          result[5] += 2526451;
        } else {
          result[0] += 34896609;
          result[1] += 0;
          result[2] += 2684354;
          result[3] += 0;
          result[4] += 5368709;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 1275732;
          result[1] += 425244;
          result[2] += 26790390;
          result[3] += 9780618;
          result[4] += 0;
          result[5] += 4677687;
        } else {
          result[0] += 799063;
          result[1] += 0;
          result[2] += 39104178;
          result[3] += 2447132;
          result[4] += 49941;
          result[5] += 549356;
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
