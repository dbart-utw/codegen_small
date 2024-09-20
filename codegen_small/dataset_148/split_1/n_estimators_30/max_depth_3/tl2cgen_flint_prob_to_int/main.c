
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
  if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        result[0] += 143059684;
        result[1] += 0;
        result[2] += 105891;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 87422995;
        result[1] += 0;
        result[2] += 1466153;
        result[3] += 49331752;
        result[4] += 4772185;
        result[5] += 28748;
        result[6] += 143740;
      } else {
        result[0] += 7969269;
        result[1] += 843804;
        result[2] += 0;
        result[3] += 93006058;
        result[4] += 40877662;
        result[5] += 468780;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
        result[0] += 19835962;
        result[1] += 38516;
        result[2] += 731812;
        result[3] += 72410891;
        result[4] += 49955811;
        result[5] += 192582;
        result[6] += 0;
      } else {
        result[0] += 141186995;
        result[1] += 144588;
        result[2] += 403326;
        result[3] += 1423056;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7609;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 55636127;
        result[1] += 0;
        result[2] += 314995;
        result[3] += 68393456;
        result[4] += 18742248;
        result[5] += 0;
        result[6] += 78748;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45afc400))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 140807555;
        result[1] += 0;
        result[2] += 2358021;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 143088078;
        result[1] += 0;
        result[2] += 71961;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5535;
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x4613de00))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 143165576;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 72554741;
        result[1] += 234977;
        result[2] += 736975;
        result[3] += 69532072;
        result[4] += 0;
        result[5] += 64084;
        result[6] += 42723;
      } else {
        result[0] += 136019409;
        result[1] += 0;
        result[2] += 6298316;
        result[3] += 363364;
        result[4] += 0;
        result[5] += 121121;
        result[6] += 363364;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 136261;
        result[1] += 317943;
        result[2] += 90841;
        result[3] += 142348006;
        result[4] += 0;
        result[5] += 272523;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42740000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2240144;
        result[3] += 0;
        result[4] += 140925432;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        result[0] += 54636658;
        result[1] += 2921746;
        result[2] += 0;
        result[3] += 85607171;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 142766464;
        result[1] += 52514;
        result[2] += 315088;
        result[3] += 15754;
        result[4] += 0;
        result[5] += 0;
        result[6] += 15754;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        result[0] += 64232638;
        result[1] += 0;
        result[2] += 383742;
        result[3] += 78549195;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 122831179;
        result[1] += 0;
        result[2] += 1110302;
        result[3] += 19128925;
        result[4] += 0;
        result[5] += 0;
        result[6] += 95168;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 143165576;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 143011483;
        result[1] += 0;
        result[2] += 141252;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 12841;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 2577101;
        result[1] += 697333;
        result[2] += 1910087;
        result[3] += 114605226;
        result[4] += 23163596;
        result[5] += 212231;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 508194;
        result[2] += 0;
        result[3] += 20908562;
        result[4] += 121748819;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 140477268;
        result[1] += 0;
        result[2] += 790678;
        result[3] += 1739493;
        result[4] += 0;
        result[5] += 0;
        result[6] += 158135;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 57243;
        result[3] += 143108333;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x41080000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 115537131;
        result[4] += 27628444;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 45028244;
        result[1] += 538722;
        result[2] += 718297;
        result[3] += 86734366;
        result[4] += 10145945;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 65593790;
        result[1] += 0;
        result[2] += 5703807;
        result[3] += 71867978;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 17489226;
        result[1] += 87885;
        result[2] += 0;
        result[3] += 124709608;
        result[4] += 527313;
        result[5] += 351542;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3574175;
        result[3] += 0;
        result[4] += 139591401;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 143050084;
        result[1] += 0;
        result[2] += 115491;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 97727013;
        result[1] += 232199;
        result[2] += 667573;
        result[3] += 44437201;
        result[4] += 0;
        result[5] += 29024;
        result[6] += 72562;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 140973848;
        result[1] += 6827;
        result[2] += 170695;
        result[3] += 2007376;
        result[4] += 6827;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 102138197;
        result[1] += 115245;
        result[2] += 660740;
        result[3] += 38215390;
        result[4] += 1936123;
        result[5] += 30732;
        result[6] += 69147;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 34251005;
        result[1] += 1449777;
        result[2] += 0;
        result[3] += 107464793;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 14695804;
        result[1] += 948116;
        result[2] += 0;
        result[3] += 97023911;
        result[4] += 30497744;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1357019;
        result[1] += 0;
        result[2] += 678509;
        result[3] += 23612142;
        result[4] += 117517904;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42020000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 142333218;
        result[1] += 0;
        result[2] += 624268;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 208089;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 143118490;
        result[1] += 0;
        result[2] += 47086;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 1834092;
        result[1] += 318972;
        result[2] += 903755;
        result[3] += 92289432;
        result[4] += 47712998;
        result[5] += 106324;
        result[6] += 0;
      } else {
        result[0] += 140239095;
        result[1] += 0;
        result[2] += 981441;
        result[3] += 1748750;
        result[4] += 0;
        result[5] += 0;
        result[6] += 196288;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
        result[0] += 0;
        result[1] += 193205;
        result[2] += 772823;
        result[3] += 142199546;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1784612;
        result[3] += 0;
        result[4] += 141182673;
        result[5] += 198290;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 143061864;
        result[1] += 0;
        result[2] += 103711;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 82172651;
        result[1] += 202421;
        result[2] += 905571;
        result[3] += 56869909;
        result[4] += 2801945;
        result[5] += 63922;
        result[6] += 149153;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x42e50000))) ) ) {
        result[0] += 71582788;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 71582788;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 143165576;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
        result[0] += 18882074;
        result[1] += 1033347;
        result[2] += 845466;
        result[3] += 122404689;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
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
      result[4] += 143165576;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 142942964;
        result[1] += 0;
        result[2] += 196422;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 26189;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 104781886;
        result[1] += 204385;
        result[2] += 1212690;
        result[3] += 33165034;
        result[4] += 3583567;
        result[5] += 81754;
        result[6] += 136257;
      } else {
        result[0] += 0;
        result[1] += 77807;
        result[2] += 1206014;
        result[3] += 115271631;
        result[4] += 26610123;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 26295718;
        result[1] += 1278264;
        result[2] += 456522;
        result[3] += 115135071;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 11269593;
        result[1] += 0;
        result[2] += 0;
        result[3] += 128735726;
        result[4] += 3041001;
        result[5] += 119254;
        result[6] += 0;
      } else {
        result[0] += 38384973;
        result[1] += 172905;
        result[2] += 0;
        result[3] += 89910748;
        result[4] += 14696949;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143101290;
        result[5] += 64286;
        result[6] += 0;
      } else {
        result[0] += 101184693;
        result[1] += 8611463;
        result[2] += 33369420;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 142178227;
        result[1] += 0;
        result[2] += 705249;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 282099;
      } else {
        result[0] += 143135210;
        result[1] += 0;
        result[2] += 30366;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 103083479;
        result[1] += 146576;
        result[2] += 906111;
        result[3] += 38976108;
        result[4] += 0;
        result[5] += 0;
        result[6] += 53300;
      } else {
        result[0] += 35985912;
        result[1] += 778073;
        result[2] += 4279405;
        result[3] += 102122184;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40200000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 142226785;
        result[5] += 938790;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 0;
        result[1] += 448232;
        result[2] += 448232;
        result[3] += 142134640;
        result[4] += 0;
        result[5] += 134469;
        result[6] += 0;
      } else {
        result[0] += 140729513;
        result[1] += 0;
        result[2] += 2436063;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 143025167;
        result[1] += 7389;
        result[2] += 110849;
        result[3] += 14779;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7389;
      } else {
        result[0] += 124375094;
        result[1] += 0;
        result[2] += 0;
        result[3] += 18790481;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 137914173;
        result[1] += 275536;
        result[2] += 680737;
        result[3] += 4262713;
        result[4] += 0;
        result[5] += 0;
        result[6] += 32416;
      } else {
        result[0] += 89840675;
        result[1] += 0;
        result[2] += 837838;
        result[3] += 52364878;
        result[4] += 0;
        result[5] += 0;
        result[6] += 122184;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 41776577;
        result[1] += 0;
        result[2] += 0;
        result[3] += 21307251;
        result[4] += 80081748;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 62300;
        result[2] += 1059101;
        result[3] += 124475553;
        result[4] += 17070221;
        result[5] += 498400;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 142542234;
        result[1] += 14007;
        result[2] += 112061;
        result[3] += 497272;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 115352739;
        result[1] += 113201;
        result[2] += 670503;
        result[3] += 26933345;
        result[4] += 0;
        result[5] += 0;
        result[6] += 95786;
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 78510154;
        result[1] += 0;
        result[2] += 865920;
        result[3] += 63789500;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 455941;
        result[2] += 0;
        result[3] += 142709635;
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
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1767476;
        result[1] += 10604857;
        result[2] += 0;
        result[3] += 130793242;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 18128574;
        result[1] += 788198;
        result[2] += 0;
        result[3] += 90212943;
        result[4] += 33892551;
        result[5] += 143308;
        result[6] += 0;
      } else {
        result[0] += 19591477;
        result[1] += 75789;
        result[2] += 492629;
        result[3] += 72984886;
        result[4] += 49869216;
        result[5] += 151578;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 141315286;
        result[1] += 76458;
        result[2] += 321124;
        result[3] += 1442512;
        result[4] += 0;
        result[5] += 0;
        result[6] += 10194;
      } else {
        result[0] += 108984175;
        result[1] += 0;
        result[2] += 5449208;
        result[3] += 28732191;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 173428;
        result[1] += 0;
        result[2] += 1040573;
        result[3] += 113119015;
        result[4] += 28832558;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42420000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 141587994;
        result[4] += 788791;
        result[5] += 788791;
        result[6] += 0;
      } else {
        result[0] += 142153805;
        result[1] += 0;
        result[2] += 885299;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 126471;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
        result[0] += 122713351;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 20452225;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 0;
        result[1] += 71852;
        result[2] += 538891;
        result[3] += 111227258;
        result[4] += 31040165;
        result[5] += 287408;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 1039169;
        result[2] += 0;
        result[3] += 9912077;
        result[4] += 132214329;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        result[0] += 93517723;
        result[1] += 427998;
        result[2] += 427998;
        result[3] += 48791855;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 142542183;
        result[1] += 110010;
        result[2] += 282884;
        result[3] += 199066;
        result[4] += 0;
        result[5] += 0;
        result[6] += 31431;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 26994182;
        result[1] += 0;
        result[2] += 741598;
        result[3] += 115429795;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 142220222;
        result[1] += 0;
        result[2] += 528286;
        result[3] += 250240;
        result[4] += 0;
        result[5] += 0;
        result[6] += 166827;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 13025672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 127219349;
        result[4] += 2920554;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 38544578;
        result[1] += 0;
        result[2] += 0;
        result[3] += 89063322;
        result[4] += 15557675;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143101405;
        result[5] += 64171;
        result[6] += 0;
      } else {
        result[0] += 102996817;
        result[1] += 12359618;
        result[2] += 24719236;
        result[3] += 0;
        result[4] += 0;
        result[5] += 3089904;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42220000))) ) ) {
        result[0] += 143072936;
        result[1] += 0;
        result[2] += 83375;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9263;
      } else {
        result[0] += 143151287;
        result[1] += 0;
        result[2] += 14289;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 76941237;
        result[1] += 351758;
        result[2] += 539362;
        result[3] += 65239415;
        result[4] += 0;
        result[5] += 0;
        result[6] += 93802;
      } else {
        result[0] += 123248710;
        result[1] += 104825;
        result[2] += 1703416;
        result[3] += 17898972;
        result[4] += 0;
        result[5] += 0;
        result[6] += 209651;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 142772605;
        result[1] += 0;
        result[2] += 62048;
        result[3] += 303346;
        result[4] += 20682;
        result[5] += 0;
        result[6] += 6894;
      } else {
        result[0] += 2134524;
        result[1] += 304932;
        result[2] += 2134524;
        result[3] += 38726364;
        result[4] += 99712765;
        result[5] += 152466;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42260000))) ) ) {
        result[0] += 49715916;
        result[1] += 290396;
        result[2] += 1645581;
        result[3] += 85879986;
        result[4] += 5401378;
        result[5] += 116158;
        result[6] += 116158;
      } else {
        result[0] += 135211933;
        result[1] += 0;
        result[2] += 277746;
        result[3] += 7638022;
        result[4] += 0;
        result[5] += 0;
        result[6] += 37874;
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 84334378;
        result[1] += 0;
        result[2] += 2898088;
        result[3] += 55933109;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 162873;
        result[1] += 977239;
        result[2] += 0;
        result[3] += 142025463;
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
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1636178;
        result[1] += 7362801;
        result[2] += 0;
        result[3] += 134166597;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        result[0] += 20916841;
        result[1] += 446396;
        result[2] += 0;
        result[3] += 87174763;
        result[4] += 34500034;
        result[5] += 127541;
        result[6] += 0;
      } else {
        result[0] += 142491062;
        result[1] += 0;
        result[2] += 183958;
        result[3] += 490555;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 43984129;
        result[1] += 0;
        result[2] += 0;
        result[3] += 99181447;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 116657664;
        result[1] += 0;
        result[2] += 5141620;
        result[3] += 0;
        result[4] += 20566483;
        result[5] += 114258;
        result[6] += 685549;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
        result[0] += 20372020;
        result[1] += 80204;
        result[2] += 320819;
        result[3] += 69617770;
        result[4] += 52654454;
        result[5] += 120307;
        result[6] += 0;
      } else {
        result[0] += 141495895;
        result[1] += 236347;
        result[2] += 373581;
        result[3] += 1052127;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7624;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 99536650;
        result[1] += 0;
        result[2] += 593752;
        result[3] += 42892672;
        result[4] += 118750;
        result[5] += 0;
        result[6] += 23750;
      } else {
        result[0] += 604074;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 142561502;
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
      result[4] += 143165576;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42060000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 143021900;
        result[1] += 0;
        result[2] += 136491;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7183;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 102110648;
        result[1] += 164981;
        result[2] += 1116795;
        result[3] += 39582788;
        result[4] += 63454;
        result[5] += 25381;
        result[6] += 101526;
      } else {
        result[0] += 0;
        result[1] += 116869;
        result[2] += 1207655;
        result[3] += 117960643;
        result[4] += 23841451;
        result[5] += 38956;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1350618;
        result[1] += 2025927;
        result[2] += 0;
        result[3] += 139789029;
        result[4] += 0;
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
      result[4] += 143165576;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
        result[0] += 143100684;
        result[1] += 0;
        result[2] += 58403;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6489;
      } else {
        result[0] += 142926967;
        result[1] += 0;
        result[2] += 238609;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 43092521;
        result[1] += 634880;
        result[2] += 952320;
        result[3] += 91581527;
        result[4] += 6904326;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 100887655;
        result[1] += 374582;
        result[2] += 499443;
        result[3] += 41129200;
        result[4] += 99888;
        result[5] += 99888;
        result[6] += 74916;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 77418027;
        result[1] += 207988;
        result[2] += 1409701;
        result[3] += 23941813;
        result[4] += 39795177;
        result[5] += 69329;
        result[6] += 323538;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1143690;
        result[3] += 116329689;
        result[4] += 25692196;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 142633362;
        result[5] += 532214;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 441596;
        result[2] += 839033;
        result[3] += 141752467;
        result[4] += 0;
        result[5] += 132478;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 142169526;
        result[1] += 0;
        result[2] += 929646;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 66403;
      } else {
        result[0] += 143110698;
        result[1] += 0;
        result[2] += 54878;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 101667001;
        result[1] += 193136;
        result[2] += 1287576;
        result[3] += 39927732;
        result[4] += 0;
        result[5] += 0;
        result[6] += 90130;
      } else {
        result[0] += 426088;
        result[1] += 1704352;
        result[2] += 0;
        result[3] += 141035136;
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
      result[4] += 143165576;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 62018034;
        result[1] += 0;
        result[2] += 2969877;
        result[3] += 78177663;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 18159645;
        result[1] += 1478110;
        result[2] += 0;
        result[3] += 123527820;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 16561138;
        result[1] += 84066;
        result[2] += 0;
        result[3] += 125595637;
        result[4] += 336266;
        result[5] += 588466;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2866684;
        result[3] += 0;
        result[4] += 139961635;
        result[5] += 337256;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 127345208;
        result[1] += 0;
        result[2] += 537075;
        result[3] += 15248266;
        result[4] += 0;
        result[5] += 0;
        result[6] += 35026;
      } else {
        result[0] += 132123203;
        result[1] += 77053;
        result[2] += 177815;
        result[3] += 10740085;
        result[4] += 0;
        result[5] += 0;
        result[6] += 47417;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 137526241;
        result[1] += 0;
        result[2] += 109501;
        result[3] += 2041423;
        result[4] += 3480587;
        result[5] += 7821;
        result[6] += 0;
      } else {
        result[0] += 132806272;
        result[1] += 0;
        result[2] += 41437;
        result[3] += 1160242;
        result[4] += 9074750;
        result[5] += 0;
        result[6] += 82874;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42260000))) ) ) {
        result[0] += 49859911;
        result[1] += 193781;
        result[2] += 1278956;
        result[3] += 85845087;
        result[4] += 5832815;
        result[5] += 116268;
        result[6] += 38756;
      } else {
        result[0] += 135066886;
        result[1] += 0;
        result[2] += 443590;
        result[3] += 7591729;
        result[4] += 0;
        result[5] += 0;
        result[6] += 63370;
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42dc0000))) ) ) {
        result[0] += 20573964;
        result[1] += 608697;
        result[2] += 0;
        result[3] += 121982914;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 4149726;
        result[2] += 0;
        result[3] += 518715;
        result[4] += 138497133;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 36678784;
        result[1] += 0;
        result[2] += 5915932;
        result[3] += 100570859;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 42132;
        result[2] += 0;
        result[3] += 133138087;
        result[4] += 9858959;
        result[5] += 126396;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 142972109;
        result[5] += 193466;
        result[6] += 0;
      } else {
        result[0] += 102410412;
        result[1] += 8360033;
        result[2] += 30305122;
        result[3] += 0;
        result[4] += 0;
        result[5] += 2090008;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 143047760;
        result[1] += 19635;
        result[2] += 88361;
        result[3] += 9817;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 140721101;
        result[1] += 0;
        result[2] += 126003;
        result[3] += 2318470;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 77937905;
        result[1] += 350896;
        result[2] += 1111170;
        result[3] += 63668133;
        result[4] += 0;
        result[5] += 0;
        result[6] += 97471;
      } else {
        result[0] += 141150430;
        result[1] += 0;
        result[2] += 586497;
        result[3] += 1353456;
        result[4] += 0;
        result[5] += 0;
        result[6] += 75192;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 143165576;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 1133588;
        result[1] += 1066906;
        result[2] += 1133588;
        result[3] += 139831492;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 141256702;
        result[1] += 0;
        result[2] += 1908874;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 142989481;
        result[5] += 176095;
        result[6] += 0;
      } else {
        result[0] += 17461284;
        result[1] += 84763;
        result[2] += 1949560;
        result[3] += 122907096;
        result[4] += 0;
        result[5] += 762871;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 142132353;
        result[1] += 92527;
        result[2] += 236458;
        result[3] += 693955;
        result[4] += 0;
        result[5] += 0;
        result[6] += 10280;
      } else {
        result[0] += 92232799;
        result[1] += 0;
        result[2] += 671272;
        result[3] += 50060123;
        result[4] += 0;
        result[5] += 16781;
        result[6] += 184599;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 19225408;
        result[1] += 110809;
        result[2] += 0;
        result[3] += 123330717;
        result[4] += 332427;
        result[5] += 166213;
        result[6] += 0;
      } else {
        result[0] += 146386;
        result[1] += 0;
        result[2] += 4098809;
        result[3] += 0;
        result[4] += 138627608;
        result[5] += 292772;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 141963819;
        result[1] += 55543;
        result[2] += 272667;
        result[3] += 853348;
        result[4] += 0;
        result[5] += 0;
        result[6] += 20197;
      } else {
        result[0] += 92889414;
        result[1] += 0;
        result[2] += 390791;
        result[3] += 49749443;
        result[4] += 0;
        result[5] += 0;
        result[6] += 135927;
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 35841452;
        result[1] += 0;
        result[2] += 0;
        result[3] += 102318335;
        result[4] += 5005789;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 929646;
        result[1] += 1239528;
        result[2] += 0;
        result[3] += 15803992;
        result[4] += 125192408;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 13337359;
        result[1] += 1857100;
        result[2] += 0;
        result[3] += 96738060;
        result[4] += 31233056;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2146221;
        result[1] += 0;
        result[2] += 1767476;
        result[3] += 22093453;
        result[4] += 117158425;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 853944;
        result[3] += 114614142;
        result[4] += 27511849;
        result[5] += 185640;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 870067;
        result[2] += 0;
        result[3] += 7830603;
        result[4] += 134464906;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 137495652;
        result[1] += 5669923;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 143165576;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 142700266;
        result[1] += 113742;
        result[2] += 320546;
        result[3] += 5170;
        result[4] += 0;
        result[5] += 0;
        result[6] += 25850;
      } else {
        result[0] += 91524400;
        result[1] += 0;
        result[2] += 970394;
        result[3] += 50573741;
        result[4] += 0;
        result[5] += 0;
        result[6] += 97039;
      }
    }
  }
  if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
        result[0] += 140602509;
        result[1] += 0;
        result[2] += 2563066;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 7985792;
        result[1] += 1273097;
        result[2] += 115736;
        result[3] += 87380768;
        result[4] += 46410182;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 132302148;
        result[1] += 0;
        result[2] += 46960;
        result[3] += 10785160;
        result[4] += 0;
        result[5] += 31306;
        result[6] += 0;
      } else {
        result[0] += 74771102;
        result[1] += 0;
        result[2] += 1594156;
        result[3] += 57646771;
        result[4] += 8587877;
        result[5] += 359970;
        result[6] += 205697;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 131467222;
        result[1] += 112739;
        result[2] += 338217;
        result[3] += 9887894;
        result[4] += 1319712;
        result[5] += 13263;
        result[6] += 26526;
      } else {
        result[0] += 90017077;
        result[1] += 0;
        result[2] += 266519;
        result[3] += 40821956;
        result[4] += 12060022;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 21329793;
        result[1] += 2218298;
        result[2] += 1706383;
        result[3] += 117911100;
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
      result[4] += 143165576;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 1128398;
        result[1] += 846298;
        result[2] += 1269448;
        result[3] += 139921430;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 142246866;
        result[1] += 0;
        result[2] += 918709;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 13177123;
        result[1] += 77512;
        result[2] += 775124;
        result[3] += 117198890;
        result[4] += 11704386;
        result[5] += 232537;
        result[6] += 0;
      } else {
        result[0] += 141947014;
        result[1] += 82614;
        result[2] += 263333;
        result[3] += 841634;
        result[4] += 0;
        result[5] += 0;
        result[6] += 30980;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        result[0] += 54247924;
        result[1] += 0;
        result[2] += 842950;
        result[3] += 69529796;
        result[4] += 18544904;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 129161392;
        result[1] += 0;
        result[2] += 842356;
        result[3] += 12389666;
        result[4] += 456276;
        result[5] += 105294;
        result[6] += 210589;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x44db3000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 142929589;
        result[1] += 0;
        result[2] += 209766;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 26220;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 328738;
        result[2] += 0;
        result[3] += 31065779;
        result[4] += 111606689;
        result[5] += 164369;
        result[6] += 0;
      } else {
        result[0] += 80301529;
        result[1] += 192399;
        result[2] += 1063261;
        result[3] += 61314723;
        result[4] += 60757;
        result[5] += 111389;
        result[6] += 121515;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 705249;
        result[1] += 5641993;
        result[2] += 0;
        result[3] += 136818334;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143080863;
        result[5] += 84713;
        result[6] += 0;
      } else {
        result[0] += 26372606;
        result[1] += 475511;
        result[2] += 475511;
        result[3] += 115622480;
        result[4] += 0;
        result[5] += 219466;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 141252757;
        result[1] += 102017;
        result[2] += 326454;
        result[3] += 1453742;
        result[4] += 0;
        result[5] += 0;
        result[6] += 30605;
      } else {
        result[0] += 110868964;
        result[1] += 0;
        result[2] += 3856311;
        result[3] += 28440299;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 120591751;
        result[1] += 0;
        result[2] += 1188096;
        result[3] += 20629668;
        result[4] += 216017;
        result[5] += 162013;
        result[6] += 378030;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1011175;
        result[3] += 113883623;
        result[4] += 28270777;
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
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
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
