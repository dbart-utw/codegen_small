
#include "header.h"


static const int32_t num_class[] = {  7, };

int32_t get_num_target(void) {
  return N_TARGET;
}
void get_num_class(int32_t* out) {
  for (int i = 0; i < N_TARGET; ++i) {
    out[i] = num_class[i];
  }
}
int32_t get_num_feature(void) {
  return 7;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "uint32";
}


void predict(union Entry* data, int pred_margin, uint32_t* result) {
  unsigned int tmp;
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43320000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 80950934;
        result[4] += 4948411;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 272202;
        result[2] += 972151;
        result[3] += 0;
        result[4] += 84538333;
        result[5] += 116658;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        result[0] += 53497505;
        result[1] += 275760;
        result[2] += 413640;
        result[3] += 31712439;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85494352;
        result[1] += 59650;
        result[2] += 163253;
        result[3] += 153834;
        result[4] += 0;
        result[5] += 0;
        result[6] += 28255;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
        result[0] += 50947719;
        result[1] += 0;
        result[2] += 378030;
        result[3] += 34508790;
        result[4] += 0;
        result[5] += 0;
        result[6] += 64805;
      } else {
        result[0] += 84998788;
        result[1] += 0;
        result[2] += 900557;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85751283;
        result[1] += 0;
        result[2] += 132476;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 15585;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 648296;
        result[1] += 288131;
        result[2] += 1260577;
        result[3] += 59427220;
        result[4] += 24275119;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1355134;
        result[1] += 505647;
        result[2] += 687680;
        result[3] += 46175702;
        result[4] += 37074052;
        result[5] += 101129;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b90000))) ) ) {
        result[0] += 85190509;
        result[1] += 0;
        result[2] += 650971;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 57864;
      } else {
        result[0] += 35991244;
        result[1] += 0;
        result[2] += 399700;
        result[3] += 49399391;
        result[4] += 0;
        result[5] += 0;
        result[6] += 109009;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 85627389;
        result[1] += 0;
        result[2] += 233105;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 38850;
      } else {
        result[0] += 85877751;
        result[1] += 0;
        result[2] += 21594;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 1343153;
        result[1] += 531014;
        result[2] += 655958;
        result[3] += 54959963;
        result[4] += 28378020;
        result[5] += 31236;
        result[6] += 0;
      } else {
        result[0] += 84087390;
        result[1] += 0;
        result[2] += 431919;
        result[3] += 1253620;
        result[4] += 0;
        result[5] += 0;
        result[6] += 126415;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
        result[0] += 0;
        result[1] += 57323;
        result[2] += 429926;
        result[3] += 85412095;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1005323;
        result[3] += 0;
        result[4] += 84670616;
        result[5] += 223405;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 25294;
        result[2] += 0;
        result[3] += 79626366;
        result[4] += 6247685;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85823058;
        result[5] += 76287;
        result[6] += 0;
      } else {
        result[0] += 62525374;
        result[1] += 6427842;
        result[2] += 15193081;
        result[3] += 0;
        result[4] += 0;
        result[5] += 1753047;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x46426200))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 85899345;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 84738210;
        result[1] += 61598;
        result[2] += 153996;
        result[3] += 927059;
        result[4] += 0;
        result[5] += 0;
        result[6] += 18479;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 39926722;
        result[1] += 0;
        result[2] += 237760;
        result[3] += 45734863;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 75146114;
        result[1] += 0;
        result[2] += 716882;
        result[3] += 9846586;
        result[4] += 0;
        result[5] += 0;
        result[6] += 189762;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 84483733;
        result[1] += 8089;
        result[2] += 76847;
        result[3] += 1310452;
        result[4] += 12133;
        result[5] += 4044;
        result[6] += 4044;
      } else {
        result[0] += 389860;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85509485;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 62598859;
        result[1] += 46251;
        result[2] += 349455;
        result[3] += 22766024;
        result[4] += 46251;
        result[5] += 51390;
        result[6] += 41112;
      } else {
        result[0] += 51849977;
        result[1] += 0;
        result[2] += 821566;
        result[3] += 22364866;
        result[4] += 10862935;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 990602;
        result[2] += 141514;
        result[3] += 84767229;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 82831512;
        result[1] += 0;
        result[2] += 3067833;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 16635519;
        result[1] += 93853;
        result[2] += 140780;
        result[3] += 68794559;
        result[4] += 164243;
        result[5] += 70390;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 416987;
        result[2] += 0;
        result[3] += 10925062;
        result[4] += 74557296;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        result[0] += 33563320;
        result[1] += 948116;
        result[2] += 0;
        result[3] += 51387908;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85443786;
        result[1] += 52683;
        result[2] += 226230;
        result[3] += 170447;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6198;
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 20572706;
        result[1] += 0;
        result[2] += 0;
        result[3] += 65326639;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 51752161;
        result[1] += 0;
        result[2] += 2402778;
        result[3] += 184829;
        result[4] += 31097503;
        result[5] += 231036;
        result[6] += 231036;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x43260000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 0;
        result[1] += 50380;
        result[2] += 0;
        result[3] += 80105548;
        result[4] += 5693035;
        result[5] += 50380;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 315082;
        result[2] += 945247;
        result[3] += 0;
        result[4] += 84481474;
        result[5] += 157541;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        result[0] += 52831327;
        result[1] += 387515;
        result[2] += 0;
        result[3] += 32680503;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85567736;
        result[1] += 43797;
        result[2] += 147034;
        result[3] += 122007;
        result[4] += 0;
        result[5] += 0;
        result[6] += 18770;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 37796914;
        result[1] += 0;
        result[2] += 150226;
        result[3] += 47952205;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 84993234;
        result[1] += 0;
        result[2] += 673111;
        result[3] += 129444;
        result[4] += 0;
        result[5] += 0;
        result[6] += 103555;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42640000))) ) ) {
        result[0] += 83751862;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2147483;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 52684932;
        result[4] += 33214413;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
        result[0] += 11442852;
        result[1] += 155897;
        result[2] += 140307;
        result[3] += 47205665;
        result[4] += 26829904;
        result[5] += 124717;
        result[6] += 0;
      } else {
        result[0] += 84617356;
        result[1] += 54296;
        result[2] += 256397;
        result[3] += 959229;
        result[4] += 0;
        result[5] += 0;
        result[6] += 12065;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 14119167;
        result[1] += 0;
        result[2] += 441223;
        result[3] += 71106730;
        result[4] += 185778;
        result[5] += 46444;
        result[6] += 0;
      } else {
        result[0] += 85420798;
        result[1] += 0;
        result[2] += 273455;
        result[3] += 136727;
        result[4] += 0;
        result[5] += 0;
        result[6] += 68363;
      }
    } else {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x41080000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41200000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 59371606;
        result[4] += 26527739;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
        result[0] += 11012339;
        result[1] += 170373;
        result[2] += 185862;
        result[3] += 48169305;
        result[4] += 26314999;
        result[5] += 46465;
        result[6] += 0;
      } else {
        result[0] += 84581685;
        result[1] += 51494;
        result[2] += 245357;
        result[3] += 1008691;
        result[4] += 0;
        result[5] += 0;
        result[6] += 12116;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 27068547;
        result[1] += 0;
        result[2] += 0;
        result[3] += 58830798;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 41677090;
        result[1] += 0;
        result[2] += 0;
        result[3] += 44222255;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2372910;
        result[3] += 0;
        result[4] += 83289144;
        result[5] += 237291;
        result[6] += 0;
      } else {
        result[0] += 85155961;
        result[1] += 0;
        result[2] += 563946;
        result[3] += 153803;
        result[4] += 0;
        result[5] += 0;
        result[6] += 25633;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 85528379;
        result[1] += 0;
        result[2] += 370966;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85881556;
        result[1] += 0;
        result[2] += 17789;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 46347252;
        result[1] += 0;
        result[2] += 914146;
        result[3] += 34417634;
        result[4] += 4052718;
        result[5] += 60943;
        result[6] += 106650;
      } else {
        result[0] += 8715640;
        result[1] += 502825;
        result[2] += 0;
        result[3] += 42069728;
        result[4] += 34611151;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 47326337;
        result[1] += 194518;
        result[2] += 671088;
        result[3] += 37600415;
        result[4] += 0;
        result[5] += 58355;
        result[6] += 48629;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 1188918;
        result[1] += 198153;
        result[2] += 842150;
        result[3] += 83670124;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 452101;
        result[1] += 4521018;
        result[2] += 0;
        result[3] += 80926225;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 74469052;
        result[1] += 96400;
        result[2] += 158371;
        result[3] += 11106664;
        result[4] += 34428;
        result[5] += 13771;
        result[6] += 20657;
      } else {
        result[0] += 84200270;
        result[1] += 4924;
        result[2] += 221618;
        result[3] += 438312;
        result[4] += 1029294;
        result[5] += 4924;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 55579622;
        result[1] += 0;
        result[2] += 539322;
        result[3] += 29652924;
        result[4] += 49029;
        result[5] += 29417;
        result[6] += 49029;
      } else {
        result[0] += 128784;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85770561;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 85834525;
        result[1] += 0;
        result[2] += 61578;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3240;
      } else {
        result[0] += 49161135;
        result[1] += 135875;
        result[2] += 653497;
        result[3] += 34078928;
        result[4] += 1759914;
        result[5] += 25881;
        result[6] += 84113;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += 0;
        result[1] += 1588277;
        result[2] += 0;
        result[3] += 3044198;
        result[4] += 81266869;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 20790924;
        result[4] += 65108421;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 17677651;
        result[1] += 638182;
        result[2] += 638182;
        result[3] += 66945329;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 9435168;
        result[4] += 76464177;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        result[0] += 85846335;
        result[1] += 0;
        result[2] += 53010;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85887878;
        result[1] += 0;
        result[2] += 5733;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5733;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 1494724;
        result[1] += 510855;
        result[2] += 1267677;
        result[3] += 69041126;
        result[4] += 13471439;
        result[5] += 113523;
        result[6] += 0;
      } else {
        result[0] += 63785353;
        result[1] += 0;
        result[2] += 496669;
        result[3] += 21544044;
        result[4] += 0;
        result[5] += 0;
        result[6] += 73279;
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 130546;
        result[1] += 913822;
        result[2] += 0;
        result[3] += 21279017;
        result[4] += 63575959;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 180713;
        result[2] += 0;
        result[3] += 7770698;
        result[4] += 77947933;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 62351;
        result[1] += 20783;
        result[2] += 166270;
        result[3] += 66965326;
        result[4] += 18455993;
        result[5] += 228621;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 1209849;
        result[2] += 0;
        result[3] += 186130;
        result[4] += 84503365;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1663334;
        result[3] += 0;
        result[4] += 84236011;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        result[0] += 35189858;
        result[1] += 1443686;
        result[2] += 0;
        result[3] += 49265801;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85617698;
        result[1] += 37552;
        result[2] += 194023;
        result[3] += 15647;
        result[4] += 0;
        result[5] += 0;
        result[6] += 34423;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        result[0] += 38941982;
        result[1] += 0;
        result[2] += 248264;
        result[3] += 46709099;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 74177429;
        result[1] += 0;
        result[2] += 695541;
        result[3] += 10944546;
        result[4] += 0;
        result[5] += 0;
        result[6] += 81828;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 400899;
        result[2] += 668165;
        result[3] += 84669921;
        result[4] += 0;
        result[5] += 160359;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 85657148;
        result[1] += 55891;
        result[2] += 158359;
        result[3] += 12420;
        result[4] += 0;
        result[5] += 0;
        result[6] += 15525;
      } else {
        result[0] += 322929;
        result[1] += 1937579;
        result[2] += 0;
        result[3] += 83638836;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 37276222;
        result[1] += 0;
        result[2] += 150489;
        result[3] += 48472633;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 84648508;
        result[1] += 0;
        result[2] += 842400;
        result[3] += 127636;
        result[4] += 0;
        result[5] += 0;
        result[6] += 280800;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 10320623;
        result[1] += 0;
        result[2] += 0;
        result[3] += 72350219;
        result[4] += 3228502;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 15086752;
        result[1] += 33979;
        result[2] += 0;
        result[3] += 65919592;
        result[4] += 4791063;
        result[5] += 67958;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 82282531;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3616814;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 306783;
        result[2] += 1150437;
        result[3] += 0;
        result[4] += 84250385;
        result[5] += 191739;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 85806333;
        result[1] += 13287;
        result[2] += 57579;
        result[3] += 13287;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8858;
      } else {
        result[0] += 74740216;
        result[1] += 0;
        result[2] += 0;
        result[3] += 11159129;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 69819794;
        result[1] += 52496;
        result[2] += 451466;
        result[3] += 15533591;
        result[4] += 0;
        result[5] += 0;
        result[6] += 41996;
      } else {
        result[0] += 23676458;
        result[1] += 866211;
        result[2] += 0;
        result[3] += 61356675;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42aa0000))) ) ) {
        result[0] += 11496865;
        result[1] += 0;
        result[2] += 747763;
        result[3] += 62064380;
        result[4] += 11496865;
        result[5] += 93470;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 1357326;
        result[2] += 0;
        result[3] += 4847592;
        result[4] += 79694427;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 13658585;
        result[1] += 45377;
        result[2] += 272264;
        result[3] += 31764153;
        result[4] += 40113587;
        result[5] += 45377;
        result[6] += 0;
      } else {
        result[0] += 6727275;
        result[1] += 180840;
        result[2] += 0;
        result[3] += 43691119;
        result[4] += 35263942;
        result[5] += 36168;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41dc0000))) ) ) {
        result[0] += 0;
        result[1] += 302462;
        result[2] += 0;
        result[3] += 85596883;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 83614788;
        result[1] += 2284557;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 85537773;
        result[1] += 8608;
        result[2] += 60262;
        result[3] += 288397;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4304;
      } else {
        result[0] += 68987733;
        result[1] += 46788;
        result[2] += 436697;
        result[3] += 16381337;
        result[4] += 0;
        result[5] += 0;
        result[6] += 46788;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85724475;
        result[1] += 0;
        result[2] += 167267;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7603;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 62826246;
        result[1] += 83026;
        result[2] += 639305;
        result[3] += 20067535;
        result[4] += 2133784;
        result[5] += 41513;
        result[6] += 107934;
      } else {
        result[0] += 7998496;
        result[1] += 450619;
        result[2] += 253473;
        result[3] += 35627105;
        result[4] += 41569650;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41a80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 755712;
        result[3] += 0;
        result[4] += 84765776;
        result[5] += 377856;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 57323;
        result[2] += 315279;
        result[3] += 85526742;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428c0000))) ) ) {
        result[0] += 84589396;
        result[1] += 0;
        result[2] += 89499;
        result[3] += 1208245;
        result[4] += 0;
        result[5] += 0;
        result[6] += 12204;
      } else {
        result[0] += 4331059;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 81568286;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 83050846;
        result[1] += 113939;
        result[2] += 170909;
        result[3] += 2518073;
        result[4] += 0;
        result[5] += 22787;
        result[6] += 22787;
      } else {
        result[0] += 55328791;
        result[1] += 0;
        result[2] += 301793;
        result[3] += 30190518;
        result[4] += 0;
        result[5] += 0;
        result[6] += 78242;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85841187;
        result[5] += 58157;
        result[6] += 0;
      } else {
        result[0] += 22622774;
        result[1] += 111993;
        result[2] += 1007945;
        result[3] += 62119300;
        result[4] += 0;
        result[5] += 37331;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
        result[0] += 638656;
        result[1] += 2554627;
        result[2] += 0;
        result[3] += 18521048;
        result[4] += 64185013;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 123774;
        result[2] += 0;
        result[3] += 5074745;
        result[4] += 80700826;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 40925293;
        result[1] += 0;
        result[2] += 0;
        result[3] += 10614314;
        result[4] += 34305025;
        result[5] += 54712;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 60259;
        result[2] += 542331;
        result[3] += 83519111;
        result[4] += 1596866;
        result[5] += 180777;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 26863653;
        result[4] += 59035692;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 889490;
        result[2] += 0;
        result[3] += 63535;
        result[4] += 84946320;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42080000))) ) ) {
        result[0] += 0;
        result[1] += 1921071;
        result[2] += 0;
        result[3] += 83978274;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 85665864;
        result[1] += 21791;
        result[2] += 180558;
        result[3] += 15565;
        result[4] += 0;
        result[5] += 0;
        result[6] += 15565;
      } else {
        result[0] += 54827963;
        result[1] += 0;
        result[2] += 358661;
        result[3] += 30646651;
        result[4] += 0;
        result[5] += 0;
        result[6] += 66069;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43ba8000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85775292;
        result[1] += 0;
        result[2] += 124053;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 1050645;
        result[1] += 253604;
        result[2] += 869499;
        result[3] += 60828764;
        result[4] += 22788143;
        result[5] += 108687;
        result[6] += 0;
      } else {
        result[0] += 63940727;
        result[1] += 0;
        result[2] += 285176;
        result[3] += 21551223;
        result[4] += 0;
        result[5] += 0;
        result[6] += 122218;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 47221745;
        result[1] += 165621;
        result[2] += 535835;
        result[3] += 31175899;
        result[4] += 6702818;
        result[5] += 38969;
        result[6] += 58454;
      } else {
        result[0] += 4325866;
        result[1] += 264848;
        result[2] += 353131;
        result[3] += 31693592;
        result[4] += 49261906;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
        result[0] += 27012372;
        result[1] += 77178;
        result[2] += 0;
        result[3] += 58501081;
        result[4] += 77178;
        result[5] += 231534;
        result[6] += 0;
      } else {
        result[0] += 85590299;
        result[1] += 71080;
        result[2] += 142161;
        result[3] += 83442;
        result[4] += 0;
        result[5] += 0;
        result[6] += 12361;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 15869749;
        result[1] += 444946;
        result[2] += 1211242;
        result[3] += 68348688;
        result[4] += 0;
        result[5] += 24719;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42440000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 685184;
        result[3] += 70482685;
        result[4] += 14662956;
        result[5] += 68518;
        result[6] += 0;
      } else {
        result[0] += 84888307;
        result[1] += 0;
        result[2] += 855493;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 155544;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 124132;
        result[1] += 24826;
        result[2] += 0;
        result[3] += 79916183;
        result[4] += 5734898;
        result[5] += 99305;
        result[6] += 0;
      } else {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 85139174;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 760171;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 340270;
        result[2] += 1058618;
        result[3] += 0;
        result[4] += 84311417;
        result[5] += 189039;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b60000))) ) ) {
        result[0] += 85677424;
        result[1] += 34382;
        result[2] += 175036;
        result[3] += 6251;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6251;
      } else {
        result[0] += 28703466;
        result[1] += 633164;
        result[2] += 0;
        result[3] += 56562714;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 16401912;
        result[1] += 0;
        result[2] += 388978;
        result[3] += 69108454;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85284830;
        result[1] += 0;
        result[2] += 415213;
        result[3] += 149476;
        result[4] += 0;
        result[5] += 0;
        result[6] += 49825;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42020000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85827738;
        result[1] += 0;
        result[2] += 67395;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4212;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 59970905;
        result[1] += 204937;
        result[2] += 622404;
        result[3] += 24934112;
        result[4] += 68312;
        result[5] += 37951;
        result[6] += 60722;
      } else {
        result[0] += 0;
        result[1] += 46888;
        result[2] += 679880;
        result[3] += 69160226;
        result[4] += 15965462;
        result[5] += 46888;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 36781965;
        result[4] += 49117380;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 60535;
        result[1] += 665886;
        result[2] += 0;
        result[3] += 4540134;
        result[4] += 80632789;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40200000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85217605;
        result[5] += 681740;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 78375;
        result[1] += 156750;
        result[2] += 235125;
        result[3] += 85298468;
        result[4] += 0;
        result[5] += 130625;
        result[6] += 0;
      } else {
        result[0] += 84274223;
        result[1] += 0;
        result[2] += 1625122;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        result[0] += 29014890;
        result[1] += 0;
        result[2] += 0;
        result[3] += 56884455;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 76531187;
        result[1] += 0;
        result[2] += 266659;
        result[3] += 9066412;
        result[4] += 0;
        result[5] += 0;
        result[6] += 35086;
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x41b40000))) ) ) {
        result[0] += 78935465;
        result[1] += 122576;
        result[2] += 237492;
        result[3] += 6588489;
        result[4] += 0;
        result[5] += 0;
        result[6] += 15322;
      } else {
        result[0] += 76912703;
        result[1] += 0;
        result[2] += 0;
        result[3] += 8986642;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 14519819;
        result[1] += 23010;
        result[2] += 460216;
        result[3] += 59137776;
        result[4] += 11574436;
        result[5] += 184086;
        result[6] += 0;
      } else {
        result[0] += 9152305;
        result[1] += 0;
        result[2] += 220537;
        result[3] += 50613350;
        result[4] += 25913153;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 3560594;
        result[2] += 0;
        result[3] += 82338751;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42800000))) ) ) {
        result[0] += 85621992;
        result[1] += 64715;
        result[2] += 194147;
        result[3] += 12326;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6163;
      } else {
        result[0] += 318145;
        result[1] += 1908874;
        result[2] += 0;
        result[3] += 83672325;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 16354383;
        result[1] += 0;
        result[2] += 466000;
        result[3] += 69078962;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85062719;
        result[1] += 0;
        result[2] += 529294;
        result[3] += 119518;
        result[4] += 0;
        result[5] += 0;
        result[6] += 187814;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85806230;
        result[5] += 93115;
        result[6] += 0;
      } else {
        result[0] += 16081810;
        result[1] += 302614;
        result[2] += 367460;
        result[3] += 69060999;
        result[4] += 0;
        result[5] += 86461;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 85440715;
        result[1] += 46170;
        result[2] += 233932;
        result[3] += 150824;
        result[4] += 0;
        result[5] += 0;
        result[6] += 27702;
      } else {
        result[0] += 1501736;
        result[1] += 2102431;
        result[2] += 0;
        result[3] += 82295177;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 21929111;
        result[1] += 0;
        result[2] += 0;
        result[3] += 63970234;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 84353208;
        result[1] += 0;
        result[2] += 1064553;
        result[3] += 177425;
        result[4] += 177425;
        result[5] += 25346;
        result[6] += 101386;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 102996;
        result[1] += 34332;
        result[2] += 205993;
        result[3] += 77041619;
        result[4] += 8239745;
        result[5] += 274658;
        result[6] += 0;
      } else {
        result[0] += 29008104;
        result[1] += 0;
        result[2] += 1446387;
        result[3] += 0;
        result[4] += 55444853;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 75794677;
        result[1] += 28980;
        result[2] += 209306;
        result[3] += 9847061;
        result[4] += 0;
        result[5] += 0;
        result[6] += 19320;
      } else {
        result[0] += 84677786;
        result[1] += 0;
        result[2] += 212076;
        result[3] += 924652;
        result[4] += 0;
        result[5] += 0;
        result[6] += 84830;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 85899345;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 342228;
        result[1] += 1254837;
        result[2] += 0;
        result[3] += 5133427;
        result[4] += 79168852;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 13232733;
        result[1] += 756156;
        result[2] += 0;
        result[3] += 71910455;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 8975605;
        result[1] += 0;
        result[2] += 701219;
        result[3] += 19073160;
        result[4] += 57149360;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 12433238;
        result[1] += 0;
        result[2] += 0;
        result[3] += 73166109;
        result[4] += 199998;
        result[5] += 99999;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1532206;
        result[3] += 0;
        result[4] += 83984087;
        result[5] += 383051;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 85464454;
        result[1] += 16726;
        result[2] += 58543;
        result[3] += 355439;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4181;
      } else {
        result[0] += 69162780;
        result[1] += 62880;
        result[2] += 471600;
        result[3] += 16149684;
        result[4] += 0;
        result[5] += 0;
        result[6] += 52400;
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 13889042;
        result[1] += 500506;
        result[2] += 375379;
        result[3] += 71134418;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41d00000))) ) ) {
        result[0] += 185527;
        result[1] += 1020402;
        result[2] += 0;
        result[3] += 14192872;
        result[4] += 70500543;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423e0000))) ) ) {
        result[0] += 84683997;
        result[1] += 3682;
        result[2] += 69974;
        result[3] += 1112227;
        result[4] += 14731;
        result[5] += 11048;
        result[6] += 3682;
      } else {
        result[0] += 78555905;
        result[1] += 141826;
        result[2] += 63033;
        result[3] += 7107063;
        result[4] += 0;
        result[5] += 15758;
        result[6] += 15758;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 13641401;
        result[1] += 317241;
        result[2] += 414854;
        result[3] += 65595864;
        result[4] += 5905580;
        result[5] += 24403;
        result[6] += 0;
      } else {
        result[0] += 2478342;
        result[1] += 0;
        result[2] += 2081807;
        result[3] += 4907117;
        result[4] += 76432078;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42440000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 708589;
        result[3] += 69601785;
        result[4] += 15543255;
        result[5] += 45715;
        result[6] += 0;
      } else {
        result[0] += 85122327;
        result[1] += 0;
        result[2] += 621614;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 155403;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
        result[0] += 84450247;
        result[1] += 0;
        result[2] += 1449098;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 6386156;
        result[1] += 885940;
        result[2] += 406056;
        result[3] += 78221192;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 8202350;
        result[1] += 45067;
        result[2] += 721085;
        result[3] += 54216638;
        result[4] += 22173388;
        result[5] += 540814;
        result[6] += 0;
      } else {
        result[0] += 2870672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 35772992;
        result[4] += 47255681;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
        result[0] += 77498523;
        result[1] += 31962;
        result[2] += 151822;
        result[3] += 8182412;
        result[4] += 0;
        result[5] += 5327;
        result[6] += 29299;
      } else {
        result[0] += 85476634;
        result[1] += 0;
        result[2] += 422711;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 84473426;
        result[1] += 4097;
        result[2] += 49169;
        result[3] += 1335774;
        result[4] += 32779;
        result[5] += 4097;
        result[6] += 0;
      } else {
        result[0] += 3072053;
        result[1] += 0;
        result[2] += 1299714;
        result[3] += 0;
        result[4] += 81527577;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42260000))) ) ) {
        result[0] += 29871013;
        result[1] += 103798;
        result[2] += 772725;
        result[3] += 51876377;
        result[4] += 3148566;
        result[5] += 103798;
        result[6] += 23066;
      } else {
        result[0] += 81028407;
        result[1] += 0;
        result[2] += 207765;
        result[3] += 4640088;
        result[4] += 0;
        result[5] += 0;
        result[6] += 23085;
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += 1070396;
        result[1] += 4816785;
        result[2] += 0;
        result[3] += 7225178;
        result[4] += 72786984;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 13247807;
        result[1] += 281868;
        result[2] += 0;
        result[3] += 72369670;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 25719862;
        result[1] += 0;
        result[2] += 2996488;
        result[3] += 57182994;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1765055;
        result[4] += 84134290;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 82824989;
        result[4] += 3043917;
        result[5] += 30439;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41dc0000))) ) ) {
        result[0] += 84557168;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1342177;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 395849;
        result[2] += 1151562;
        result[3] += 0;
        result[4] += 84279961;
        result[5] += 71972;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 85605744;
        result[1] += 0;
        result[2] += 251658;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 41943;
      } else {
        result[0] += 85867105;
        result[1] += 0;
        result[2] += 32240;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 83604535;
        result[1] += 201943;
        result[2] += 569112;
        result[3] += 1505395;
        result[4] += 0;
        result[5] += 0;
        result[6] += 18358;
      } else {
        result[0] += 40189045;
        result[1] += 0;
        result[2] += 616105;
        result[3] += 45046801;
        result[4] += 0;
        result[5] += 0;
        result[6] += 47392;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 16997104;
        result[1] += 685367;
        result[2] += 0;
        result[3] += 68216874;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 45258795;
        result[1] += 0;
        result[2] += 2155180;
        result[3] += 38485370;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 85385924;
        result[1] += 0;
        result[2] += 473927;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 39493;
      } else {
        result[0] += 85874490;
        result[1] += 0;
        result[2] += 17753;
        result[3] += 0;
        result[4] += 7101;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x41180000))) ) ) {
        result[0] += 46925790;
        result[1] += 138179;
        result[2] += 504355;
        result[3] += 32340934;
        result[4] += 5886450;
        result[5] += 62180;
        result[6] += 41453;
      } else {
        result[0] += 77987564;
        result[1] += 0;
        result[2] += 3390763;
        result[3] += 0;
        result[4] += 2260509;
        result[5] += 0;
        result[6] += 2260509;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 85331228;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 568117;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 22955;
        result[1] += 22955;
        result[2] += 573886;
        result[3] += 68085905;
        result[4] += 17055909;
        result[5] += 137732;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 4478164;
        result[2] += 0;
        result[3] += 81421180;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 85837506;
        result[1] += 4417;
        result[2] += 48588;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8834;
      } else {
        result[0] += 74464250;
        result[1] += 0;
        result[2] += 0;
        result[3] += 11435095;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 47159302;
        result[1] += 297824;
        result[2] += 652922;
        result[3] += 37709114;
        result[4] += 0;
        result[5] += 0;
        result[6] += 80183;
      } else {
        result[0] += 84560257;
        result[1] += 0;
        result[2] += 305563;
        result[3] += 988588;
        result[4] += 0;
        result[5] += 0;
        result[6] += 44935;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 11708837;
        result[1] += 0;
        result[2] += 0;
        result[3] += 73879654;
        result[4] += 138157;
        result[5] += 172696;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1644881;
        result[3] += 0;
        result[4] += 84163082;
        result[5] += 91382;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 85853161;
        result[1] += 0;
        result[2] += 46184;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 60827796;
        result[1] += 70294;
        result[2] += 562352;
        result[3] += 24399850;
        result[4] += 0;
        result[5] += 0;
        result[6] += 39052;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 46998207;
        result[1] += 0;
        result[2] += 1936255;
        result[3] += 36964882;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 80732;
        result[1] += 1210987;
        result[2] += 0;
        result[3] += 84607626;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3fc00000))) ) ) {
        result[0] += 85818880;
        result[1] += 0;
        result[2] += 80465;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85888825;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 10520;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 1310011;
        result[1] += 604620;
        result[2] += 878139;
        result[3] += 57280626;
        result[4] += 25739572;
        result[5] += 86374;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b90000))) ) ) {
        result[0] += 85312300;
        result[1] += 0;
        result[2] += 469635;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 117408;
      } else {
        result[0] += 37052461;
        result[1] += 0;
        result[2] += 421884;
        result[3] += 48259914;
        result[4] += 0;
        result[5] += 0;
        result[6] += 165085;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x437c0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85767717;
        result[1] += 0;
        result[2] += 123885;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7742;
      }
    } else {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 307515;
        result[1] += 410020;
        result[2] += 0;
        result[3] += 19783500;
        result[4] += 65193298;
        result[5] += 205010;
        result[6] += 0;
      } else {
        result[0] += 47558701;
        result[1] += 125864;
        result[2] += 683263;
        result[3] += 36920176;
        result[4] += 491469;
        result[5] += 35961;
        result[6] += 83909;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 32424715;
        result[4] += 53474630;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 120138;
        result[1] += 600694;
        result[2] += 0;
        result[3] += 4445140;
        result[4] += 80733371;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40900000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85261873;
        result[5] += 637471;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 79487;
        result[1] += 344445;
        result[2] += 211966;
        result[3] += 85077976;
        result[4] += 0;
        result[5] += 185470;
        result[6] += 0;
      } else {
        result[0] += 84240599;
        result[1] += 0;
        result[2] += 1658745;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 85615045;
        result[1] += 0;
        result[2] += 203071;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 81228;
      } else {
        result[0] += 85873539;
        result[1] += 0;
        result[2] += 25806;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 57181036;
        result[1] += 174261;
        result[2] += 917777;
        result[3] += 27544948;
        result[4] += 0;
        result[5] += 0;
        result[6] += 81322;
      } else {
        result[0] += 62867482;
        result[1] += 0;
        result[2] += 181990;
        result[3] += 22809430;
        result[4] += 0;
        result[5] += 0;
        result[6] += 40442;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 80734058;
        result[1] += 0;
        result[2] += 56009;
        result[3] += 1039280;
        result[4] += 4057550;
        result[5] += 12446;
        result[6] += 0;
      } else {
        result[0] += 84494219;
        result[1] += 0;
        result[2] += 186618;
        result[3] += 1130687;
        result[4] += 76842;
        result[5] += 0;
        result[6] += 10977;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += 64822829;
        result[1] += 99235;
        result[2] += 374889;
        result[3] += 18981544;
        result[4] += 1560202;
        result[5] += 11026;
        result[6] += 49617;
      } else {
        result[0] += 40852624;
        result[1] += 0;
        result[2] += 690167;
        result[3] += 44356553;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42dc0000))) ) ) {
        result[0] += 11853110;
        result[1] += 571234;
        result[2] += 0;
        result[3] += 73475001;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 655720;
        result[1] += 983580;
        result[2] += 0;
        result[3] += 1311440;
        result[4] += 82948605;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 27192988;
        result[1] += 0;
        result[2] += 2033120;
        result[3] += 56673237;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1852461;
        result[4] += 84046883;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85782157;
        result[5] += 117188;
        result[6] += 0;
      } else {
        result[0] += 15498376;
        result[1] += 69292;
        result[2] += 554338;
        result[3] += 69546364;
        result[4] += 0;
        result[5] += 230974;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 60059705;
        result[4] += 25839640;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 605280;
        result[2] += 0;
        result[3] += 958360;
        result[4] += 84335705;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
        result[0] += 85824545;
        result[1] += 37400;
        result[2] += 28050;
        result[3] += 9350;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85096993;
        result[1] += 0;
        result[2] += 47664;
        result[3] += 746743;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7944;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 85840166;
        result[1] += 0;
        result[2] += 59179;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 59641970;
        result[1] += 152128;
        result[2] += 699791;
        result[3] += 25298966;
        result[4] += 0;
        result[5] += 0;
        result[6] += 106489;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85758578;
        result[1] += 0;
        result[2] += 132946;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7820;
      }
    } else {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 52513988;
        result[1] += 0;
        result[2] += 888908;
        result[3] += 29658779;
        result[4] += 2735103;
        result[5] += 17094;
        result[6] += 85471;
      } else {
        result[0] += 4733772;
        result[1] += 372319;
        result[2] += 0;
        result[3] += 54305406;
        result[4] += 26434659;
        result[5] += 53188;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 50670029;
        result[1] += 238666;
        result[2] += 643363;
        result[3] += 20691386;
        result[4] += 13572885;
        result[5] += 20753;
        result[6] += 62260;
      } else {
        result[0] += 0;
        result[1] += 110457;
        result[2] += 0;
        result[3] += 67452893;
        result[4] += 18335994;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 17073611;
        result[1] += 24149;
        result[2] += 241493;
        result[3] += 68125401;
        result[4] += 217344;
        result[5] += 217344;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 429282;
        result[2] += 0;
        result[3] += 10431554;
        result[4] += 75038509;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 85431179;
        result[1] += 27360;
        result[2] += 203682;
        result[3] += 228002;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9120;
      } else {
        result[0] += 1282079;
        result[1] += 2564159;
        result[2] += 0;
        result[3] += 82053106;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 273011;
        result[1] += 0;
        result[2] += 694938;
        result[3] += 67955044;
        result[4] += 16976351;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 72219336;
        result[1] += 0;
        result[2] += 486091;
        result[3] += 12568942;
        result[4] += 416650;
        result[5] += 69441;
        result[6] += 138883;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 84914261;
        result[1] += 0;
        result[2] += 985084;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85849454;
        result[1] += 0;
        result[2] += 49891;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 1654031;
        result[1] += 749827;
        result[2] += 286698;
        result[3] += 77077846;
        result[4] += 6064780;
        result[5] += 66161;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1277992;
        result[3] += 16370473;
        result[4] += 68098737;
        result[5] += 152141;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 83944633;
        result[1] += 0;
        result[2] += 464379;
        result[3] += 1360738;
        result[4] += 0;
        result[5] += 0;
        result[6] += 129594;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 85899345;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85850204;
        result[5] += 49141;
        result[6] += 0;
      } else {
        result[0] += 16307749;
        result[1] += 222479;
        result[2] += 222479;
        result[3] += 69079893;
        result[4] += 0;
        result[5] += 66743;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        result[0] += 36425671;
        result[1] += 724888;
        result[2] += 0;
        result[3] += 48748784;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85408598;
        result[1] += 37037;
        result[2] += 234571;
        result[3] += 209879;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9259;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 38726180;
        result[1] += 0;
        result[2] += 584791;
        result[3] += 2339165;
        result[4] += 44249209;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1686434;
        result[1] += 0;
        result[2] += 598412;
        result[3] += 83288092;
        result[4] += 299206;
        result[5] += 27200;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 84997252;
        result[1] += 0;
        result[2] += 801860;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 100232;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 43253741;
        result[1] += 0;
        result[2] += 1140256;
        result[3] += 41505347;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 12056048;
        result[1] += 411001;
        result[2] += 342501;
        result[3] += 48326944;
        result[4] += 24762849;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += 137000;
        result[1] += 1644006;
        result[2] += 0;
        result[3] += 3151012;
        result[4] += 80967326;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 18652429;
        result[4] += 67246916;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 308066;
        result[1] += 0;
        result[2] += 462100;
        result[3] += 76657336;
        result[4] += 8369153;
        result[5] += 102688;
        result[6] += 0;
      } else {
        result[0] += 18782136;
        result[1] += 0;
        result[2] += 1424237;
        result[3] += 0;
        result[4] += 65692971;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 85331282;
        result[1] += 34333;
        result[2] += 149818;
        result[3] += 374547;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9363;
      } else {
        result[0] += 56554176;
        result[1] += 0;
        result[2] += 364230;
        result[3] += 28852966;
        result[4] += 0;
        result[5] += 19688;
        result[6] += 108284;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 16678367;
        result[1] += 0;
        result[2] += 276055;
        result[3] += 67219573;
        result[4] += 1633329;
        result[5] += 92018;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 454975;
        result[2] += 0;
        result[3] += 8098561;
        result[4] += 77345809;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 85400269;
        result[1] += 61236;
        result[2] += 229636;
        result[3] += 189832;
        result[4] += 0;
        result[5] += 0;
        result[6] += 18370;
      } else {
        result[0] += 842150;
        result[1] += 2807168;
        result[2] += 0;
        result[3] += 82250027;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 20339148;
        result[1] += 0;
        result[2] += 0;
        result[3] += 65560197;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 84458844;
        result[1] += 0;
        result[2] += 1314141;
        result[3] += 50543;
        result[4] += 0;
        result[5] += 0;
        result[6] += 75815;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 247192;
        result[3] += 0;
        result[4] += 85404961;
        result[5] += 247192;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 84456755;
        result[1] += 4075;
        result[2] += 101877;
        result[3] += 1308111;
        result[4] += 20375;
        result[5] += 4075;
        result[6] += 4075;
      } else {
        result[0] += 61412724;
        result[1] += 83083;
        result[2] += 415418;
        result[3] += 22654163;
        result[4] += 1278566;
        result[5] += 32310;
        result[6] += 23078;
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x4500c800))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 24542670;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 61356675;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41400000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 15711896;
        result[1] += 344056;
        result[2] += 516084;
        result[3] += 69327309;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 1160801;
        result[1] += 1160801;
        result[2] += 0;
        result[3] += 83577741;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 96951;
        result[1] += 581711;
        result[2] += 0;
        result[3] += 96951;
        result[4] += 85123731;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 25444;
        result[2] += 0;
        result[3] += 80276195;
        result[4] += 5470485;
        result[5] += 127220;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0;
        result[1] += 781918;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85117427;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 11195164;
        result[1] += 0;
        result[2] += 2511064;
        result[3] += 0;
        result[4] += 71774605;
        result[5] += 418510;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 85046746;
        result[1] += 0;
        result[2] += 852598;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85868572;
        result[1] += 0;
        result[2] += 23935;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6838;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        result[0] += 45326790;
        result[1] += 169244;
        result[2] += 461576;
        result[3] += 39910962;
        result[4] += 0;
        result[5] += 0;
        result[6] += 30771;
      } else {
        result[0] += 72611365;
        result[1] += 114551;
        result[2] += 844817;
        result[3] += 12285654;
        result[4] += 0;
        result[5] += 0;
        result[6] += 42956;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 85887469;
        result[1] += 0;
        result[2] += 11876;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85825877;
        result[1] += 0;
        result[2] += 51427;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 22040;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 63316471;
        result[1] += 64939;
        result[2] += 681869;
        result[3] += 19490108;
        result[4] += 2240428;
        result[5] += 40587;
        result[6] += 64939;
      } else {
        result[0] += 7971191;
        result[1] += 613168;
        result[2] += 334455;
        result[3] += 34978481;
        result[4] += 42002048;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 17498014;
        result[4] += 68301910;
        result[5] += 99420;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1008064;
        result[3] += 84555259;
        result[4] += 305474;
        result[5] += 30547;
        result[6] += 0;
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
  result[6] += 0;
  
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
    

    FILE* file = fopen("./../../codegen_small/codegen_small/dataset_148/split_1/test_data.csv", "r");
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
