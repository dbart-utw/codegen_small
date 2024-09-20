
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
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 214748364;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 1933753;
        result[1] += 1526647;
        result[2] += 2137305;
        result[3] += 209150658;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 213373241;
        result[1] += 0;
        result[2] += 1375122;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 213309170;
        result[1] += 0;
        result[2] += 1439194;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 214712576;
        result[1] += 0;
        result[2] += 35788;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 156318374;
        result[1] += 599767;
        result[2] += 726034;
        result[3] += 52337614;
        result[4] += 4450906;
        result[5] += 189400;
        result[6] += 126266;
      } else {
        result[0] += 77783158;
        result[1] += 0;
        result[2] += 1525872;
        result[3] += 110916385;
        result[4] += 23977993;
        result[5] += 145321;
        result[6] += 399633;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 214341644;
        result[5] += 406720;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 214748364;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 194753;
        result[1] += 843932;
        result[2] += 779014;
        result[3] += 212800828;
        result[4] += 0;
        result[5] += 129835;
        result[6] += 0;
      } else {
        result[0] += 209379655;
        result[1] += 0;
        result[2] += 5368709;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 214448835;
        result[1] += 0;
        result[2] += 271002;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 28526;
      } else {
        result[0] += 214748364;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 195290151;
        result[1] += 634772;
        result[2] += 1660173;
        result[3] += 16967952;
        result[4] += 0;
        result[5] += 24414;
        result[6] += 170900;
      } else {
        result[0] += 0;
        result[1] += 227166;
        result[2] += 605778;
        result[3] += 213915419;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x450d7000))) ) ) {
        result[0] += 214748364;
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
        result[3] += 0;
        result[4] += 214748364;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 198168;
        result[1] += 726617;
        result[2] += 1651402;
        result[3] += 211841896;
        result[4] += 0;
        result[5] += 330280;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 214574558;
        result[1] += 0;
        result[2] += 152080;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 21725;
      } else {
        result[0] += 155854164;
        result[1] += 718221;
        result[2] += 0;
        result[3] += 58175978;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 205826403;
        result[1] += 745567;
        result[2] += 1242612;
        result[3] += 6859223;
        result[4] += 0;
        result[5] += 0;
        result[6] += 74556;
      } else {
        result[0] += 133483838;
        result[1] += 0;
        result[2] += 1370789;
        result[3] += 79816145;
        result[4] += 0;
        result[5] += 0;
        result[6] += 77591;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x41c80000))) ) ) {
        result[0] += 214748364;
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
        result[3] += 0;
        result[4] += 214748364;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
        result[0] += 208749807;
        result[1] += 0;
        result[2] += 5998557;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 16972624;
        result[1] += 2143910;
        result[2] += 803966;
        result[3] += 194827863;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 158031239;
        result[1] += 469441;
        result[2] += 1365649;
        result[3] += 52876236;
        result[4] += 1792414;
        result[5] += 128029;
        result[6] += 85353;
      } else {
        result[0] += 212097150;
        result[1] += 17913;
        result[2] += 161222;
        result[3] += 2355639;
        result[4] += 71654;
        result[5] += 8956;
        result[6] += 35827;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 138666797;
        result[1] += 0;
        result[2] += 1093625;
        result[3] += 74441128;
        result[4] += 323116;
        result[5] += 149130;
        result[6] += 74565;
      } else {
        result[0] += 641039;
        result[1] += 0;
        result[2] += 320519;
        result[3] += 0;
        result[4] += 213786804;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45cb4000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 214555367;
        result[1] += 0;
        result[2] += 192997;
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
      result[4] += 214748364;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 92048;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 214656316;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 3572430;
        result[1] += 2062952;
        result[2] += 4276853;
        result[3] += 204634863;
        result[4] += 0;
        result[5] += 201263;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 210862720;
        result[1] += 26613;
        result[2] += 1197629;
        result[3] += 2475101;
        result[4] += 0;
        result[5] += 26613;
        result[6] += 159683;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 162503;
        result[3] += 214585861;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 214748364;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 214748364;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 214660172;
        result[5] += 88192;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 857410;
        result[2] += 2044594;
        result[3] += 211186813;
        result[4] += 0;
        result[5] += 659546;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 214494067;
        result[1] += 0;
        result[2] += 187958;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 66338;
      } else {
        result[0] += 114685453;
        result[1] += 764961;
        result[2] += 1882983;
        result[3] += 97297279;
        result[4] += 0;
        result[5] += 0;
        result[6] += 117686;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 214306170;
        result[1] += 0;
        result[2] += 442194;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 206540259;
        result[1] += 0;
        result[2] += 851210;
        result[3] += 6992090;
        result[4] += 0;
        result[5] += 0;
        result[6] += 364804;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      result[0] += 214748364;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
        result[0] += 0;
        result[1] += 3426835;
        result[2] += 0;
        result[3] += 0;
        result[4] += 211321529;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 86907;
        result[2] += 1347065;
        result[3] += 137139991;
        result[4] += 75913677;
        result[5] += 260722;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 213583556;
        result[1] += 0;
        result[2] += 1164808;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 214711545;
        result[1] += 0;
        result[2] += 36819;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 202606387;
        result[1] += 857484;
        result[2] += 1337675;
        result[3] += 9809620;
        result[4] += 0;
        result[5] += 0;
        result[6] += 137197;
      } else {
        result[0] += 88374785;
        result[1] += 0;
        result[2] += 1694966;
        result[3] += 124520940;
        result[4] += 0;
        result[5] += 39417;
        result[6] += 118253;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 29957315;
        result[1] += 0;
        result[2] += 0;
        result[3] += 183976991;
        result[4] += 651245;
        result[5] += 162811;
        result[6] += 0;
      } else {
        result[0] += 440509;
        result[1] += 0;
        result[2] += 5946877;
        result[3] += 0;
        result[4] += 207479958;
        result[5] += 881018;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 212673206;
        result[1] += 83921;
        result[2] += 579823;
        result[3] += 1335120;
        result[4] += 0;
        result[5] += 0;
        result[6] += 76292;
      } else {
        result[0] += 138146278;
        result[1] += 0;
        result[2] += 619156;
        result[3] += 75834332;
        result[4] += 0;
        result[5] += 49532;
        result[6] += 99065;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 214748364;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 2403899;
        result[2] += 0;
        result[3] += 212344465;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 209849162;
        result[1] += 0;
        result[2] += 4899202;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x42cd0000))) ) ) {
        result[0] += 214748364;
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
        result[3] += 0;
        result[4] += 214748364;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 212009227;
        result[1] += 0;
        result[2] += 2739137;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 214623409;
        result[1] += 0;
        result[2] += 116625;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8330;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 4875550;
        result[1] += 1961428;
        result[2] += 1120816;
        result[3] += 190202492;
        result[4] += 16307874;
        result[5] += 280204;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3547010;
        result[3] += 40096642;
        result[4] += 170950493;
        result[5] += 154217;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 210845287;
        result[1] += 52744;
        result[2] += 1160374;
        result[3] += 2478981;
        result[4] += 0;
        result[5] += 26372;
        result[6] += 184605;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 83787;
        result[3] += 214664576;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 214748364;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 2092044;
        result[1] += 1673635;
        result[2] += 2196646;
        result[3] += 208786038;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 212155354;
        result[1] += 0;
        result[2] += 2593009;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 147730617;
        result[1] += 0;
        result[2] += 1811290;
        result[3] += 59463340;
        result[4] += 5433871;
        result[5] += 132533;
        result[6] += 176711;
      } else {
        result[0] += 211407505;
        result[1] += 122120;
        result[2] += 95951;
        result[3] += 3035559;
        result[4] += 34891;
        result[5] += 26168;
        result[6] += 26168;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 78877380;
        result[1] += 0;
        result[2] += 2247323;
        result[3] += 108313637;
        result[4] += 25015292;
        result[5] += 184206;
        result[6] += 110524;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ed0000))) ) ) {
        result[0] += 66231558;
        result[1] += 806718;
        result[2] += 1371420;
        result[3] += 145773965;
        result[4] += 564702;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 3532045;
        result[1] += 7770500;
        result[2] += 0;
        result[3] += 26137136;
        result[4] += 177308682;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 214748364;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 73700622;
        result[1] += 0;
        result[2] += 2541400;
        result[3] += 138506341;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 518402;
        result[1] += 259201;
        result[2] += 1555208;
        result[3] += 195049057;
        result[4] += 16588889;
        result[5] += 777604;
        result[6] += 0;
      } else {
        result[0] += 48483936;
        result[1] += 0;
        result[2] += 5203154;
        result[3] += 0;
        result[4] += 161061273;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 189896552;
        result[1] += 0;
        result[2] += 502419;
        result[3] += 24187900;
        result[4] += 0;
        result[5] += 125604;
        result[6] += 35887;
      } else {
        result[0] += 198082670;
        result[1] += 238207;
        result[2] += 352899;
        result[3] += 16012829;
        result[4] += 0;
        result[5] += 0;
        result[6] += 61757;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 211174897;
        result[1] += 0;
        result[2] += 3573467;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 214668229;
        result[1] += 0;
        result[2] += 80134;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x40200000))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 213862804;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 885560;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 130903581;
        result[1] += 216094;
        result[2] += 1097096;
        result[3] += 70546641;
        result[4] += 11718987;
        result[5] += 49868;
        result[6] += 216094;
      } else {
        result[0] += 15002044;
        result[1] += 927092;
        result[2] += 3118402;
        result[3] += 190475394;
        result[4] += 4972587;
        result[5] += 252843;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 731680;
        result[1] += 3292564;
        result[2] += 0;
        result[3] += 114142231;
        result[4] += 96581888;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 5711392;
        result[4] += 209036972;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42480000))) ) ) {
        result[0] += 84248;
        result[1] += 0;
        result[2] += 1095225;
        result[3] += 190147924;
        result[4] += 22662734;
        result[5] += 758232;
        result[6] += 0;
      } else {
        result[0] += 80957521;
        result[1] += 0;
        result[2] += 4218630;
        result[3] += 0;
        result[4] += 129572212;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 213533321;
        result[1] += 62847;
        result[2] += 115219;
        result[3] += 1026501;
        result[4] += 0;
        result[5] += 0;
        result[6] += 10474;
      } else {
        result[0] += 173978195;
        result[1] += 224011;
        result[2] += 909224;
        result[3] += 39544691;
        result[4] += 0;
        result[5] += 26354;
        result[6] += 65885;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
        result[0] += 20452225;
        result[1] += 1159662;
        result[2] += 948814;
        result[3] += 125665218;
        result[4] += 66522443;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 214748364;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 1091940;
        result[1] += 4003783;
        result[2] += 0;
        result[3] += 39309870;
        result[4] += 170342770;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 214748364;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 214748364;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 214490465;
        result[1] += 0;
        result[2] += 244325;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 13573;
      } else {
        result[0] += 214748364;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 2776576;
        result[1] += 1229626;
        result[2] += 1388288;
        result[3] += 141922727;
        result[4] += 67272483;
        result[5] += 158661;
        result[6] += 0;
      } else {
        result[0] += 211225294;
        result[1] += 52978;
        result[2] += 821166;
        result[3] += 2384032;
        result[4] += 0;
        result[5] += 26489;
        result[6] += 238403;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 0;
        result[1] += 354487;
        result[2] += 0;
        result[3] += 214039390;
        result[4] += 283589;
        result[5] += 70897;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 9169696;
        result[3] += 0;
        result[4] += 205282872;
        result[5] += 295796;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 214266055;
        result[1] += 0;
        result[2] += 482309;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 211350447;
        result[1] += 0;
        result[2] += 2038750;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 1359166;
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45b71400))) ) ) {
        result[0] += 214685716;
        result[1] += 0;
        result[2] += 62647;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 107374182;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 107374182;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 179114201;
        result[1] += 643215;
        result[2] += 300167;
        result[3] += 34347731;
        result[4] += 0;
        result[5] += 214405;
        result[6] += 128643;
      } else {
        result[0] += 37685190;
        result[1] += 735719;
        result[2] += 1880172;
        result[3] += 167662312;
        result[4] += 6703222;
        result[5] += 81746;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 686425;
        result[1] += 171606;
        result[2] += 1681743;
        result[3] += 131038717;
        result[4] += 81066907;
        result[5] += 102963;
        result[6] += 0;
      } else {
        result[0] += 212485924;
        result[1] += 0;
        result[2] += 1528675;
        result[3] += 550323;
        result[4] += 0;
        result[5] += 0;
        result[6] += 183441;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 75083552;
        result[1] += 548627;
        result[2] += 1959382;
        result[3] += 136921676;
        result[4] += 235125;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 881018;
        result[1] += 0;
        result[2] += 881018;
        result[3] += 38324323;
        result[4] += 174662003;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 214748364;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 6763728;
        result[1] += 27054912;
        result[2] += 0;
        result[3] += 180929724;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 214748364;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 214492819;
        result[1] += 0;
        result[2] += 230814;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 24730;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 155749813;
        result[1] += 763323;
        result[2] += 1335816;
        result[3] += 52287664;
        result[4] += 4198279;
        result[5] += 286246;
        result[6] += 127220;
      } else {
        result[0] += 78260960;
        result[1] += 0;
        result[2] += 2021500;
        result[3] += 108655669;
        result[4] += 25521447;
        result[5] += 144392;
        result[6] += 144392;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 13126054;
        result[1] += 0;
        result[2] += 2899942;
        result[3] += 171401857;
        result[4] += 27015252;
        result[5] += 305257;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 3152269;
        result[2] += 0;
        result[3] += 29946560;
        result[4] += 181649534;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 24930290;
        result[1] += 115954;
        result[2] += 0;
        result[3] += 183556512;
        result[4] += 5681787;
        result[5] += 463819;
        result[6] += 0;
      } else {
        result[0] += 7720488;
        result[1] += 118776;
        result[2] += 1306544;
        result[3] += 0;
        result[4] += 205483778;
        result[5] += 118776;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 208038853;
        result[1] += 0;
        result[2] += 241982;
        result[3] += 6467529;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 119207552;
        result[1] += 0;
        result[2] += 1820518;
        result[3] += 93210548;
        result[4] += 0;
        result[5] += 72820;
        result[6] += 436924;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        result[0] += 130809972;
        result[1] += 717422;
        result[2] += 0;
        result[3] += 83220969;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 196801808;
        result[1] += 256505;
        result[2] += 601461;
        result[3] += 17070898;
        result[4] += 0;
        result[5] += 0;
        result[6] += 17690;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42990000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 211493056;
        result[1] += 133349;
        result[2] += 274544;
        result[3] += 2831725;
        result[4] += 0;
        result[5] += 0;
        result[6] += 15688;
      } else {
        result[0] += 48119327;
        result[1] += 0;
        result[2] += 0;
        result[3] += 165244308;
        result[4] += 807758;
        result[5] += 576970;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 54578245;
        result[1] += 1267419;
        result[2] += 1821915;
        result[3] += 136564434;
        result[4] += 20516350;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 30497490;
        result[1] += 0;
        result[2] += 4027970;
        result[3] += 10127468;
        result[4] += 170095435;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 214007388;
        result[4] += 538891;
        result[5] += 202084;
        result[6] += 0;
      } else {
        result[0] += 107452500;
        result[1] += 0;
        result[2] += 5325634;
        result[3] += 0;
        result[4] += 101970230;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x43438000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 214748364;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 213784427;
        result[1] += 0;
        result[2] += 628654;
        result[3] += 125730;
        result[4] += 0;
        result[5] += 0;
        result[6] += 209551;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x41400000))) ) ) {
        result[0] += 17895697;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 196852667;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 214569258;
        result[5] += 179106;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 13954495;
        result[1] += 1131445;
        result[2] += 2036601;
        result[3] += 197474962;
        result[4] += 0;
        result[5] += 150859;
        result[6] += 0;
      } else {
        result[0] += 98551478;
        result[1] += 0;
        result[2] += 750868;
        result[3] += 114507432;
        result[4] += 0;
        result[5] += 938585;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 214551968;
        result[1] += 0;
        result[2] += 185485;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 10910;
      } else {
        result[0] += 113019167;
        result[1] += 597352;
        result[2] += 1642720;
        result[3] += 99369653;
        result[4] += 0;
        result[5] += 59735;
        result[6] += 59735;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 214481181;
        result[1] += 0;
        result[2] += 200387;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 66795;
      } else {
        result[0] += 208357381;
        result[1] += 0;
        result[2] += 848360;
        result[3] += 5542623;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b90000))) ) ) {
        result[0] += 211077184;
        result[1] += 0;
        result[2] += 156888;
        result[3] += 3451537;
        result[4] += 0;
        result[5] += 62755;
        result[6] += 0;
      } else {
        result[0] += 59728313;
        result[1] += 0;
        result[2] += 8662885;
        result[3] += 73406553;
        result[4] += 72950612;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 117263909;
        result[1] += 0;
        result[2] += 1059613;
        result[3] += 80354034;
        result[4] += 14834590;
        result[5] += 883011;
        result[6] += 353204;
      } else {
        result[0] += 128595212;
        result[1] += 493512;
        result[2] += 599264;
        result[3] += 71841294;
        result[4] += 13042825;
        result[5] += 0;
        result[6] += 176254;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 214619061;
        result[1] += 0;
        result[2] += 105793;
        result[3] += 0;
        result[4] += 11754;
        result[5] += 0;
        result[6] += 11754;
      } else {
        result[0] += 117863842;
        result[1] += 394440;
        result[2] += 1060059;
        result[3] += 79307253;
        result[4] += 15950199;
        result[5] += 147915;
        result[6] += 24652;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41280000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 214748364;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 31907056;
        result[1] += 2219621;
        result[2] += 2219621;
        result[3] += 178402065;
        result[4] += 0;
        result[5] += 0;
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
    

    FILE* file = fopen("./codegen_small/dataset_148/split_3/test_data.csv", "r");
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
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
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
