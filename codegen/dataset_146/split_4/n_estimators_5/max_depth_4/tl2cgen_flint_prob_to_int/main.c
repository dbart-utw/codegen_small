
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
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c20000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42820000))) ) ) {
          result[0] += 3922344;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 847226425;
          result[5] += 7844689;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 697932185;
          result[5] += 161061273;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 286331153;
          result[2] += 0;
          result[3] += 0;
          result[4] += 572662306;
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
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3554455;
          result[3] += 11848185;
          result[4] += 41468649;
          result[5] += 802122167;
        } else {
          result[0] += 86909926;
          result[1] += 16169288;
          result[2] += 8084644;
          result[3] += 181904497;
          result[4] += 70740637;
          result[5] += 495184464;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a60000))) ) ) {
          result[0] += 7809031;
          result[1] += 31236125;
          result[2] += 0;
          result[3] += 679385735;
          result[4] += 15618062;
          result[5] += 124944503;
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
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0;
          result[1] += 250539758;
          result[2] += 0;
          result[3] += 0;
          result[4] += 608453700;
          result[5] += 0;
        } else {
          result[0] += 1831542;
          result[1] += 855330373;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1831542;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 682959360;
          result[1] += 20515252;
          result[2] += 1985346;
          result[3] += 26471293;
          result[4] += 108532301;
          result[5] += 18529905;
        } else {
          result[0] += 142625329;
          result[1] += 16207423;
          result[2] += 29173362;
          result[3] += 272284719;
          result[4] += 94003057;
          result[5] += 304699566;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 29878033;
          result[1] += 7469508;
          result[2] += 250228529;
          result[3] += 339862629;
          result[4] += 11204262;
          result[5] += 220350496;
        } else {
          result[0] += 55105240;
          result[1] += 0;
          result[2] += 599674678;
          result[3] += 149108298;
          result[4] += 3241484;
          result[5] += 51863756;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 171798691;
          result[3] += 687194767;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 7964177;
          result[1] += 0;
          result[2] += 806657433;
          result[3] += 39820888;
          result[4] += 0;
          result[5] += 4550958;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 16925979;
          result[2] += 0;
          result[3] += 8462989;
          result[4] += 803984025;
          result[5] += 29620464;
        } else {
          result[0] += 0;
          result[1] += 548801376;
          result[2] += 0;
          result[3] += 143165576;
          result[4] += 47721858;
          result[5] += 119304647;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 24577781;
          result[4] += 29493337;
          result[5] += 804922339;
        } else {
          result[0] += 69955906;
          result[1] += 3253763;
          result[2] += 0;
          result[3] += 296092442;
          result[4] += 76463432;
          result[5] += 413227913;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 715827882;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 845893340;
          result[2] += 0;
          result[3] += 1871445;
          result[4] += 11228672;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 650205851;
          result[1] += 41886402;
          result[2] += 2577624;
          result[3] += 27709466;
          result[4] += 119859552;
          result[5] += 16754561;
        } else {
          result[0] += 129437370;
          result[1] += 18827253;
          result[2] += 242400893;
          result[3] += 150618031;
          result[4] += 77662422;
          result[5] += 240047487;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 46432078;
          result[3] += 104472177;
          result[4] += 162512276;
          result[5] += 545576926;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52861135;
          result[3] += 594687779;
          result[4] += 0;
          result[5] += 211444543;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 315548617;
          result[1] += 105182872;
          result[2] += 122713351;
          result[3] += 105182872;
          result[4] += 122713351;
          result[5] += 87652393;
        } else {
          result[0] += 6710886;
          result[1] += 20132659;
          result[2] += 476472934;
          result[3] += 261724569;
          result[4] += 13421772;
          result[5] += 80530636;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 286331153;
          result[1] += 0;
          result[2] += 572662306;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 797636783;
          result[1] += 0;
          result[2] += 61356675;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 644245094;
          result[3] += 203445819;
          result[4] += 11302545;
          result[5] += 0;
        } else {
          result[0] += 2196914;
          result[1] += 0;
          result[2] += 811759803;
          result[3] += 39544455;
          result[4] += 0;
          result[5] += 5492285;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 3449772;
          result[2] += 0;
          result[3] += 0;
          result[4] += 838294821;
          result[5] += 17248864;
        } else {
          result[0] += 171798691;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 446676598;
          result[5] += 240518168;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42660000))) ) ) {
          result[0] += 810371187;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 48622271;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 250539758;
          result[5] += 608453700;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 83804239;
          result[2] += 0;
          result[3] += 125706359;
          result[4] += 565678619;
          result[5] += 83804239;
        } else {
          result[0] += 0;
          result[1] += 5023353;
          result[2] += 0;
          result[3] += 27126109;
          result[4] += 44205511;
          result[5] += 782638484;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 132152839;
          result[4] += 0;
          result[5] += 726840619;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26228807;
          result[3] += 570476572;
          result[4] += 13114403;
          result[5] += 249173675;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 25451658;
          result[1] += 273605323;
          result[2] += 6362914;
          result[3] += 25451658;
          result[4] += 528121904;
          result[5] += 0;
        } else {
          result[0] += 3940336;
          result[1] += 855053122;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          result[0] += 705926276;
          result[1] += 32151097;
          result[2] += 11881927;
          result[3] += 31452160;
          result[4] += 50323457;
          result[5] += 27258539;
        } else {
          result[0] += 222702007;
          result[1] += 31814572;
          result[2] += 154527923;
          result[3] += 231791885;
          result[4] += 54539267;
          result[5] += 163617801;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 31236125;
          result[2] += 166592670;
          result[3] += 458129844;
          result[4] += 20824083;
          result[5] += 182210733;
        } else {
          result[0] += 25264513;
          result[1] += 50529027;
          result[2] += 294752657;
          result[3] += 84215045;
          result[4] += 101058054;
          result[5] += 303174162;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 37347541;
          result[1] += 0;
          result[2] += 642911253;
          result[3] += 149390166;
          result[4] += 0;
          result[5] += 29344497;
        } else {
          result[0] += 3898608;
          result[1] += 0;
          result[2] += 820007371;
          result[3] += 31188869;
          result[4] += 0;
          result[5] += 3898608;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 17237326;
          result[1] += 14364439;
          result[2] += 0;
          result[3] += 2872887;
          result[4] += 795789926;
          result[5] += 28728878;
        } else {
          result[0] += 547068459;
          result[1] += 9597692;
          result[2] += 0;
          result[3] += 23994230;
          result[4] += 134367691;
          result[5] += 143965384;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 68719476;
          result[2] += 0;
          result[3] += 11453246;
          result[4] += 607022044;
          result[5] += 171798691;
        } else {
          result[0] += 14663859;
          result[1] += 771782;
          result[2] += 1543564;
          result[3] += 98016324;
          result[4] += 49394053;
          result[5] += 694603875;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42580000))) ) ) {
          result[0] += 0;
          result[1] += 858993459;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 458129844;
          result[2] += 38177487;
          result[3] += 38177487;
          result[4] += 305419896;
          result[5] += 19088743;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 703643578;
          result[1] += 33741150;
          result[2] += 4920584;
          result[3] += 26711744;
          result[4] += 65373479;
          result[5] += 24602922;
        } else {
          result[0] += 117377988;
          result[1] += 2667681;
          result[2] += 194740753;
          result[3] += 309451059;
          result[4] += 40015223;
          result[5] += 194740753;
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 54024745;
          result[2] += 140464339;
          result[3] += 421393017;
          result[4] += 21609898;
          result[5] += 221501457;
        } else {
          result[0] += 127258290;
          result[1] += 0;
          result[2] += 636291451;
          result[3] += 0;
          result[4] += 63629145;
          result[5] += 31814572;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 245426702;
          result[3] += 490853405;
          result[4] += 0;
          result[5] += 122713351;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 820531065;
          result[3] += 25641595;
          result[4] += 0;
          result[5] += 12820797;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e50000))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
          result[2] += 357913941;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 143165576;
        } else {
          result[0] += 858993459;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 662140791;
          result[3] += 131235111;
          result[4] += 0;
          result[5] += 65617555;
        } else {
          result[0] += 14376459;
          result[1] += 0;
          result[2] += 794299390;
          result[3] += 46723493;
          result[4] += 0;
          result[5] += 3594114;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0;
          result[1] += 858993459;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 3316577;
          result[2] += 0;
          result[3] += 0;
          result[4] += 805928226;
          result[5] += 49748655;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 45258795;
          result[1] += 12007435;
          result[2] += 1847297;
          result[3] += 48029741;
          result[4] += 39716901;
          result[5] += 712133286;
        } else {
          result[0] += 9105937;
          result[1] += 3035312;
          result[2] += 42494376;
          result[3] += 516003137;
          result[4] += 12141250;
          result[5] += 276213444;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 396458519;
          result[2] += 0;
          result[3] += 0;
          result[4] += 462534939;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 851374891;
          result[2] += 0;
          result[3] += 0;
          result[4] += 7618567;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 670114636;
          result[1] += 24934498;
          result[2] += 9973799;
          result[3] += 23064410;
          result[4] += 113451966;
          result[5] += 17454148;
        } else {
          result[0] += 124793238;
          result[1] += 10399436;
          result[2] += 216308280;
          result[3] += 243346815;
          result[4] += 62396619;
          result[5] += 201749069;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d60000))) ) ) {
          result[0] += 0;
          result[1] += 14081859;
          result[2] += 98573019;
          result[3] += 394292079;
          result[4] += 42245579;
          result[5] += 309800919;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 858993459;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 858993459;
        } else {
          result[0] += 0;
          result[1] += 33038209;
          result[2] += 660764199;
          result[3] += 66076419;
          result[4] += 0;
          result[5] += 99114629;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 36295498;
          result[1] += 48393997;
          result[2] += 362954982;
          result[3] += 290363986;
          result[4] += 0;
          result[5] += 120984994;
        } else {
          result[0] += 18539427;
          result[1] += 0;
          result[2] += 701408328;
          result[3] += 123596181;
          result[4] += 6179809;
          result[5] += 9269713;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 858993459;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 834411770;
          result[3] += 20484740;
          result[4] += 0;
          result[5] += 4096948;
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
