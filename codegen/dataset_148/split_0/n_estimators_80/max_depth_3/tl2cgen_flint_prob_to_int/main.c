
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
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x44d7b000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x40200000))) ) ) {
        result[0] += 53662248;
        result[1] += 0;
        result[2] += 24842;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53579285;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 107805;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 190154;
        result[1] += 126769;
        result[2] += 0;
        result[3] += 12106534;
        result[4] += 41263632;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 30817302;
        result[1] += 36326;
        result[2] += 314832;
        result[3] += 21388459;
        result[4] += 1057515;
        result[5] += 32290;
        result[6] += 40363;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 8881812;
        result[1] += 858465;
        result[2] += 231125;
        result[3] += 43715688;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
        result[0] += 7220308;
        result[1] += 0;
        result[2] += 465226;
        result[3] += 40865460;
        result[4] += 4987223;
        result[5] += 148872;
        result[6] += 0;
      } else {
        result[0] += 48762151;
        result[1] += 16046;
        result[2] += 103575;
        result[3] += 4790728;
        result[4] += 0;
        result[5] += 0;
        result[6] += 14588;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43070000))) ) ) {
        result[0] += 10737418;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += 820903;
        result[1] += 1805987;
        result[2] += 0;
        result[3] += 7223951;
        result[4] += 43836248;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 8192510;
        result[1] += 479349;
        result[2] += 0;
        result[3] += 45015231;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 15693149;
        result[1] += 0;
        result[2] += 1982292;
        result[3] += 36011648;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 965444;
        result[4] += 52721647;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43390000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
        result[0] += 53606673;
        result[1] += 0;
        result[2] += 80418;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53668349;
        result[1] += 0;
        result[2] += 14056;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4685;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 64142;
        result[1] += 256569;
        result[2] += 0;
        result[3] += 12892598;
        result[4] += 40473780;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 30842891;
        result[1] += 48330;
        result[2] += 346368;
        result[3] += 21148605;
        result[4] += 1232426;
        result[5] += 32220;
        result[6] += 36247;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 9574767;
        result[1] += 889085;
        result[2] += 376151;
        result[3] += 42847086;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
        result[0] += 18473387;
        result[1] += 76178;
        result[2] += 304715;
        result[3] += 34794719;
        result[4] += 38089;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 352046;
        result[1] += 1056139;
        result[2] += 0;
        result[3] += 11793557;
        result[4] += 40485347;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x428e0000))) ) ) {
        result[0] += 27290938;
        result[1] += 0;
        result[2] += 1677721;
        result[3] += 24718431;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 2055180;
        result[4] += 51631910;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 13421772;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 40265318;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53666617;
        result[1] += 0;
        result[2] += 18426;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2047;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 43169036;
        result[1] += 38039;
        result[2] += 278959;
        result[3] += 9884054;
        result[4] += 234579;
        result[5] += 31699;
        result[6] += 50719;
      } else {
        result[0] += 0;
        result[1] += 57836;
        result[2] += 404858;
        result[3] += 43377665;
        result[4] += 9817811;
        result[5] += 28918;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 24775961;
        result[1] += 0;
        result[2] += 525656;
        result[3] += 28280341;
        result[4] += 105131;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 8733573;
        result[1] += 487661;
        result[2] += 310330;
        result[3] += 44155526;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 244588;
        result[1] += 978352;
        result[2] += 0;
        result[3] += 27149280;
        result[4] += 25314869;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1164736;
        result[4] += 52522354;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 6729414;
        result[1] += 0;
        result[2] += 0;
        result[3] += 46809451;
        result[4] += 29644;
        result[5] += 118579;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1401086;
        result[3] += 0;
        result[4] += 52158633;
        result[5] += 127371;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 53328722;
        result[1] += 35057;
        result[2] += 50639;
        result[3] += 251247;
        result[4] += 0;
        result[5] += 0;
        result[6] += 21424;
      } else {
        result[0] += 34637636;
        result[1] += 0;
        result[2] += 186759;
        result[3] += 18831568;
        result[4] += 0;
        result[5] += 6225;
        result[6] += 24901;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 55634;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53631456;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 4800888;
        result[1] += 0;
        result[2] += 438659;
        result[3] += 48374433;
        result[4] += 0;
        result[5] += 73109;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 52974926;
        result[1] += 28037;
        result[2] += 99067;
        result[3] += 579451;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5607;
      } else {
        result[0] += 34953188;
        result[1] += 0;
        result[2] += 213742;
        result[3] += 18463581;
        result[4] += 0;
        result[5] += 31432;
        result[6] += 25146;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 8465714;
        result[1] += 893366;
        result[2] += 0;
        result[3] += 44328010;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 11408506;
        result[1] += 0;
        result[2] += 1509949;
        result[3] += 40768634;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53658248;
        result[1] += 0;
        result[2] += 28842;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 29684274;
        result[1] += 58248;
        result[2] += 304683;
        result[3] += 20364532;
        result[4] += 3203661;
        result[5] += 17922;
        result[6] += 53767;
      } else {
        result[0] += 25990617;
        result[1] += 0;
        result[2] += 331694;
        result[3] += 21299512;
        result[4] += 6017882;
        result[5] += 0;
        result[6] += 47384;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 7419070;
        result[1] += 573291;
        result[2] += 472122;
        result[3] += 45222606;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 53430583;
        result[1] += 0;
        result[2] += 179555;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 76952;
      } else {
        result[0] += 53662585;
        result[1] += 0;
        result[2] += 24505;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 28749759;
        result[1] += 133527;
        result[2] += 248636;
        result[3] += 16649444;
        result[4] += 7901119;
        result[5] += 4604;
        result[6] += 0;
      } else {
        result[0] += 51532979;
        result[1] += 0;
        result[2] += 800887;
        result[3] += 1049439;
        result[4] += 55233;
        result[5] += 27616;
        result[6] += 220934;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 0;
        result[1] += 89092;
        result[2] += 588009;
        result[3] += 44920397;
        result[4] += 8018317;
        result[5] += 71273;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 35739371;
        result[4] += 17947719;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x41080000))) ) ) {
        result[0] += 14821682;
        result[1] += 166026;
        result[2] += 120746;
        result[3] += 27832160;
        result[4] += 10746474;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 52310499;
        result[4] += 1376592;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 324393;
        result[1] += 1946359;
        result[2] += 0;
        result[3] += 13462321;
        result[4] += 37954016;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 2022458;
        result[4] += 51664632;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 50316625;
        result[1] += 25301;
        result[2] += 81324;
        result[3] += 2981913;
        result[4] += 267468;
        result[5] += 7228;
        result[6] += 7228;
      } else {
        result[0] += 34664252;
        result[1] += 0;
        result[2] += 291609;
        result[3] += 18613344;
        result[4] += 62044;
        result[5] += 6204;
        result[6] += 49635;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 82544;
        result[1] += 0;
        result[2] += 148580;
        result[3] += 51161222;
        result[4] += 2096636;
        result[5] += 198107;
        result[6] += 0;
      } else {
        result[0] += 28105421;
        result[1] += 0;
        result[2] += 267670;
        result[3] += 0;
        result[4] += 25313998;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 15509604;
        result[4] += 38177487;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 471315;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53215775;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 53460457;
        result[1] += 20984;
        result[2] += 50363;
        result[3] += 155286;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53342755;
        result[1] += 0;
        result[2] += 0;
        result[3] += 337009;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7326;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 51535142;
        result[1] += 105426;
        result[2] += 192249;
        result[3] += 1829466;
        result[4] += 0;
        result[5] += 0;
        result[6] += 24806;
      } else {
        result[0] += 33122681;
        result[1] += 0;
        result[2] += 280917;
        result[3] += 20238801;
        result[4] += 0;
        result[5] += 0;
        result[6] += 44691;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x439b0000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x40200000))) ) ) {
        result[0] += 53653249;
        result[1] += 0;
        result[2] += 33842;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53598790;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 88301;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 32620654;
        result[1] += 51306;
        result[2] += 236009;
        result[3] += 16069186;
        result[4] += 4638104;
        result[5] += 10261;
        result[6] += 61567;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1339386;
        result[3] += 45687975;
        result[4] += 6548113;
        result[5] += 111615;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 29302101;
        result[1] += 139794;
        result[2] += 334290;
        result[3] += 23789343;
        result[4] += 0;
        result[5] += 66858;
        result[6] += 54702;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        result[0] += 52559914;
        result[1] += 21187;
        result[2] += 36018;
        result[3] += 1031832;
        result[4] += 27543;
        result[5] += 4237;
        result[6] += 6356;
      } else {
        result[0] += 33204682;
        result[1] += 0;
        result[2] += 362199;
        result[3] += 17784018;
        result[4] += 2281859;
        result[5] += 18109;
        result[6] += 36219;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 34644802;
        result[1] += 0;
        result[2] += 272394;
        result[3] += 18693876;
        result[4] += 50678;
        result[5] += 0;
        result[6] += 25339;
      } else {
        result[0] += 79418;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53607672;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 9895618;
        result[1] += 358212;
        result[2] += 0;
        result[3] += 43298930;
        result[4] += 134329;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 4058419;
        result[1] += 0;
        result[2] += 463819;
        result[3] += 13334806;
        result[4] += 35830045;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += 85353;
        result[1] += 1024237;
        result[2] += 0;
        result[3] += 1792414;
        result[4] += 50785086;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 11000107;
        result[4] += 42686983;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 35042335;
        result[1] += 0;
        result[2] += 544770;
        result[3] += 18004651;
        result[4] += 27238;
        result[5] += 0;
        result[6] += 68096;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53618997;
        result[1] += 0;
        result[2] += 41448;
        result[3] += 0;
        result[4] += 11842;
        result[5] += 0;
        result[6] += 14802;
      } else {
        result[0] += 36791204;
        result[1] += 155933;
        result[2] += 110070;
        result[3] += 16061181;
        result[4] += 522836;
        result[5] += 18345;
        result[6] += 27517;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x45102800))) ) ) {
        result[0] += 53687091;
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
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 13427926;
        result[1] += 332313;
        result[2] += 110771;
        result[3] += 39803771;
        result[4] += 0;
        result[5] += 12307;
        result[6] += 0;
      } else {
        result[0] += 24926149;
        result[1] += 0;
        result[2] += 1232611;
        result[3] += 27528329;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 53386323;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 300768;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 114506;
        result[1] += 0;
        result[2] += 408951;
        result[3] += 38097877;
        result[4] += 14902175;
        result[5] += 163580;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 53234629;
        result[1] += 32318;
        result[2] += 74142;
        result[3] += 326989;
        result[4] += 0;
        result[5] += 0;
        result[6] += 19011;
      } else {
        result[0] += 34479503;
        result[1] += 0;
        result[2] += 269910;
        result[3] += 18906292;
        result[4] += 0;
        result[5] += 0;
        result[6] += 31384;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 8331456;
        result[1] += 406412;
        result[2] += 406412;
        result[3] += 44542809;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0;
        result[1] += 2035529;
        result[2] += 0;
        result[3] += 17683662;
        result[4] += 33967898;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1239590;
        result[4] += 52447500;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 44449343;
        result[1] += 60535;
        result[2] += 145285;
        result[3] += 8979461;
        result[4] += 20178;
        result[5] += 12107;
        result[6] += 20178;
      } else {
        result[0] += 52030639;
        result[1] += 0;
        result[2] += 96375;
        result[3] += 801120;
        result[4] += 746908;
        result[5] += 12046;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 34570998;
        result[1] += 0;
        result[2] += 259746;
        result[3] += 18769764;
        result[4] += 43291;
        result[5] += 6184;
        result[6] += 37106;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42df0000))) ) ) {
        result[0] += 11222004;
        result[1] += 0;
        result[2] += 0;
        result[3] += 30796751;
        result[4] += 11668334;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1082401;
        result[1] += 649440;
        result[2] += 0;
        result[3] += 10391049;
        result[4] += 41564199;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41080000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 7018725;
        result[1] += 800380;
        result[2] += 738813;
        result[3] += 45129171;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 19636291;
        result[1] += 138982;
        result[2] += 198546;
        result[3] += 33653705;
        result[4] += 59564;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 121189;
        result[1] += 0;
        result[2] += 302974;
        result[3] += 10422324;
        result[4] += 42840602;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += 347489;
        result[1] += 608106;
        result[2] += 0;
        result[3] += 2953658;
        result[4] += 49777836;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 11705034;
        result[4] += 41982056;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
        result[0] += 53654595;
        result[1] += 0;
        result[2] += 28433;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4061;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 126471;
        result[1] += 316178;
        result[2] += 0;
        result[3] += 11825071;
        result[4] += 41419369;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 32085184;
        result[1] += 18415;
        result[2] += 368318;
        result[3] += 20529177;
        result[4] += 621538;
        result[5] += 50643;
        result[6] += 13811;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 333948;
        result[1] += 275016;
        result[2] += 275016;
        result[3] += 37716507;
        result[4] += 15086603;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53184821;
        result[1] += 0;
        result[2] += 502270;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42f70000))) ) ) {
        result[0] += 0;
        result[1] += 224632;
        result[2] += 0;
        result[3] += 9546867;
        result[4] += 43915591;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 554618;
        result[2] += 0;
        result[3] += 1220161;
        result[4] += 51912311;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 37756754;
        result[1] += 0;
        result[2] += 360316;
        result[3] += 14216105;
        result[4] += 1342996;
        result[5] += 0;
        result[6] += 10918;
      } else {
        result[0] += 52896708;
        result[1] += 37117;
        result[2] += 28383;
        result[3] += 694314;
        result[4] += 10916;
        result[5] += 13100;
        result[6] += 6550;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 23768557;
        result[1] += 0;
        result[2] += 0;
        result[3] += 29918533;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 43495048;
        result[1] += 0;
        result[2] += 701968;
        result[3] += 53997;
        result[4] += 9328081;
        result[5] += 40498;
        result[6] += 67496;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53629139;
        result[1] += 0;
        result[2] += 43463;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 14487;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42100000))) ) ) {
        result[0] += 52224;
        result[1] += 452614;
        result[2] += 435206;
        result[3] += 51006218;
        result[4] += 1653785;
        result[5] += 87041;
        result[6] += 0;
      } else {
        result[0] += 53353201;
        result[1] += 80593;
        result[2] += 184214;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 69080;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 7160073;
        result[1] += 0;
        result[2] += 336469;
        result[3] += 37590384;
        result[4] += 8573245;
        result[5] += 26917;
        result[6] += 0;
      } else {
        result[0] += 27373788;
        result[1] += 104154;
        result[2] += 473431;
        result[3] += 9923116;
        result[4] += 15746319;
        result[5] += 9468;
        result[6] += 56811;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40900000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53607318;
        result[1] += 0;
        result[2] += 79772;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 27816853;
        result[1] += 0;
        result[2] += 441985;
        result[3] += 22832765;
        result[4] += 2557871;
        result[5] += 9403;
        result[6] += 28211;
      } else {
        result[0] += 5105042;
        result[1] += 280496;
        result[2] += 0;
        result[3] += 27208191;
        result[4] += 21093360;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53648567;
        result[1] += 0;
        result[2] += 35560;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2963;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 29176407;
        result[1] += 100069;
        result[2] += 318970;
        result[3] += 19832451;
        result[4] += 4227920;
        result[5] += 6254;
        result[6] += 25017;
      } else {
        result[0] += 3448791;
        result[1] += 597428;
        result[2] += 244402;
        result[3] += 19932384;
        result[4] += 29464083;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41b40000))) ) ) {
        result[0] += 32212254;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 21474836;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53641593;
        result[5] += 45497;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 16544;
        result[1] += 115811;
        result[2] += 446703;
        result[3] += 52975675;
        result[4] += 0;
        result[5] += 132356;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53622323;
        result[1] += 0;
        result[2] += 49820;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 14946;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 35500910;
        result[1] += 250006;
        result[2] += 614301;
        result[3] += 17250442;
        result[4] += 0;
        result[5] += 0;
        result[6] += 71430;
      } else {
        result[0] += 39363808;
        result[1] += 0;
        result[2] += 63042;
        result[3] += 14184588;
        result[4] += 0;
        result[5] += 0;
        result[6] += 75651;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 62101;
        result[1] += 0;
        result[2] += 0;
        result[3] += 50271486;
        result[4] += 3337977;
        result[5] += 15525;
        result[6] += 0;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 51877413;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1809677;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 280594;
        result[2] += 724869;
        result[3] += 0;
        result[4] += 52681627;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53601968;
        result[1] += 0;
        result[2] += 70100;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 15021;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        result[0] += 27698435;
        result[1] += 78161;
        result[2] += 185633;
        result[3] += 25695550;
        result[4] += 0;
        result[5] += 0;
        result[6] += 29310;
      } else {
        result[0] += 45613440;
        result[1] += 35803;
        result[2] += 537049;
        result[3] += 7438141;
        result[4] += 0;
        result[5] += 0;
        result[6] += 62655;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41b40000))) ) ) {
        result[0] += 26843545;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 26843545;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53643318;
        result[5] += 43772;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 3200020;
        result[1] += 0;
        result[2] += 0;
        result[3] += 50448516;
        result[4] += 0;
        result[5] += 38554;
        result[6] += 0;
      } else {
        result[0] += 28908433;
        result[1] += 6194664;
        result[2] += 17895697;
        result[3] += 688296;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 53637719;
        result[1] += 0;
        result[2] += 49371;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 25537865;
        result[1] += 185056;
        result[2] += 404383;
        result[3] += 27539222;
        result[4] += 0;
        result[5] += 6853;
        result[6] += 13707;
      } else {
        result[0] += 51805071;
        result[1] += 0;
        result[2] += 470504;
        result[3] += 1337224;
        result[4] += 0;
        result[5] += 0;
        result[6] += 74290;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53664609;
        result[5] += 22482;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 163133;
        result[2] += 424145;
        result[3] += 53018245;
        result[4] += 0;
        result[5] += 81566;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 52108059;
        result[1] += 1579032;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 7166110;
        result[1] += 0;
        result[2] += 0;
        result[3] += 46520980;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 53450635;
        result[1] += 31010;
        result[2] += 122104;
        result[3] += 69773;
        result[4] += 0;
        result[5] += 0;
        result[6] += 13567;
      } else {
        result[0] += 34492613;
        result[1] += 0;
        result[2] += 237277;
        result[3] += 18919735;
        result[4] += 0;
        result[5] += 0;
        result[6] += 37464;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 53085217;
        result[1] += 0;
        result[2] += 601873;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53664195;
        result[1] += 0;
        result[2] += 16651;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6244;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
        result[0] += 10927461;
        result[1] += 248865;
        result[2] += 316738;
        result[3] += 23382051;
        result[4] += 18811974;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42391615;
        result[1] += 54950;
        result[2] += 354128;
        result[3] += 9976652;
        result[4] += 824264;
        result[5] += 54950;
        result[6] += 30528;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41a80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 729884;
        result[3] += 0;
        result[4] += 52632812;
        result[5] += 324393;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 52686;
        result[2] += 351240;
        result[3] += 53283164;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 6320125;
        result[1] += 0;
        result[2] += 0;
        result[3] += 45328214;
        result[4] += 2038750;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2776918;
        result[1] += 504894;
        result[2] += 1430533;
        result[3] += 0;
        result[4] += 48890595;
        result[5] += 84149;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 60938;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53626152;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 12311947;
        result[1] += 65605;
        result[2] += 196816;
        result[3] += 41025247;
        result[4] += 0;
        result[5] += 87473;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 36018345;
        result[1] += 0;
        result[2] += 379492;
        result[3] += 17255767;
        result[4] += 0;
        result[5] += 0;
        result[6] += 33484;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53643879;
        result[1] += 0;
        result[2] += 37038;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6173;
      } else {
        result[0] += 37610566;
        result[1] += 189760;
        result[2] += 288436;
        result[3] += 15583146;
        result[4] += 0;
        result[5] += 0;
        result[6] += 15180;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += 52465468;
        result[1] += 0;
        result[2] += 1221622;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 4746402;
        result[1] += 105475;
        result[2] += 0;
        result[3] += 48756105;
        result[4] += 79106;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41b80000))) ) ) {
        result[0] += 50174;
        result[1] += 551923;
        result[2] += 0;
        result[3] += 12343013;
        result[4] += 40741979;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 52651930;
        result[1] += 15411;
        result[2] += 51372;
        result[3] += 947827;
        result[4] += 12843;
        result[5] += 2568;
        result[6] += 5137;
      } else {
        result[0] += 39153584;
        result[1] += 21798;
        result[2] += 239785;
        result[3] += 13758095;
        result[4] += 473343;
        result[5] += 15570;
        result[6] += 24912;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42e30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53638430;
        result[1] += 0;
        result[2] += 43794;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4866;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 45252898;
        result[1] += 120645;
        result[2] += 164516;
        result[3] += 8061289;
        result[4] += 0;
        result[5] += 32903;
        result[6] += 54838;
      } else {
        result[0] += 9356426;
        result[1] += 224717;
        result[2] += 265575;
        result[3] += 41674910;
        result[4] += 2165461;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 6521126;
        result[1] += 0;
        result[2] += 462023;
        result[3] += 37357872;
        result[4] += 9280065;
        result[5] += 66003;
        result[6] += 0;
      } else {
        result[0] += 27513703;
        result[1] += 65154;
        result[2] += 502618;
        result[3] += 10033752;
        result[4] += 15450861;
        result[5] += 46538;
        result[6] += 74461;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42640000))) ) ) {
        result[0] += 53687091;
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
        result[4] += 53664897;
        result[5] += 22193;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 41297;
        result[1] += 165191;
        result[2] += 516222;
        result[3] += 52799189;
        result[4] += 0;
        result[5] += 165191;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        result[0] += 28370262;
        result[1] += 88934;
        result[2] += 29644;
        result[3] += 25198248;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53455748;
        result[1] += 54894;
        result[2] += 84302;
        result[3] += 74500;
        result[4] += 0;
        result[5] += 0;
        result[6] += 17644;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 10745299;
        result[1] += 0;
        result[2] += 118224;
        result[3] += 42784158;
        result[4] += 0;
        result[5] += 39408;
        result[6] += 0;
      } else {
        result[0] += 53332046;
        result[1] += 0;
        result[2] += 258214;
        result[3] += 43035;
        result[4] += 0;
        result[5] += 0;
        result[6] += 53794;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 25065661;
        result[1] += 0;
        result[2] += 375609;
        result[3] += 22236071;
        result[4] += 6009749;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 5203040;
        result[1] += 207086;
        result[2] += 440058;
        result[3] += 32201900;
        result[4] += 15635006;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 874382;
        result[1] += 2273394;
        result[2] += 0;
        result[3] += 14689627;
        result[4] += 35849686;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 2312674;
        result[4] += 51374416;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53646287;
        result[1] += 0;
        result[2] += 32642;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8160;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 121739;
        result[1] += 182609;
        result[2] += 0;
        result[3] += 11443506;
        result[4] += 41939235;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 31900535;
        result[1] += 43428;
        result[2] += 313649;
        result[3] += 21144781;
        result[4] += 231617;
        result[5] += 9650;
        result[6] += 43428;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 3568075;
        result[1] += 373403;
        result[2] += 539360;
        result[3] += 49081784;
        result[4] += 0;
        result[5] += 124467;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40a00000))) ) ) {
        result[0] += 16540670;
        result[1] += 0;
        result[2] += 0;
        result[3] += 37146420;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 47489714;
        result[1] += 0;
        result[2] += 154273;
        result[3] += 6016656;
        result[4] += 0;
        result[5] += 0;
        result[6] += 26446;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41080000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 16349270;
        result[1] += 503054;
        result[2] += 698686;
        result[3] += 36136079;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 47880909;
        result[1] += 25372;
        result[2] += 97263;
        result[3] += 5431930;
        result[4] += 228356;
        result[5] += 14800;
        result[6] += 8457;
      } else {
        result[0] += 217356;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53469734;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 3627506;
        result[1] += 362750;
        result[2] += 0;
        result[3] += 32446027;
        result[4] += 17250807;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 51285169;
        result[1] += 0;
        result[2] += 74542;
        result[3] += 911073;
        result[4] += 1416305;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 37467401;
        result[1] += 0;
        result[2] += 320937;
        result[3] += 15594273;
        result[4] += 230416;
        result[5] += 32916;
        result[6] += 41145;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 3737389;
        result[1] += 0;
        result[2] += 252526;
        result[3] += 35328429;
        result[4] += 14368746;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 203823;
        result[2] += 0;
        result[3] += 3342704;
        result[4] += 50140563;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x41a40000))) ) ) {
        result[0] += 48689906;
        result[1] += 47479;
        result[2] += 109202;
        result[3] += 4823885;
        result[4] += 0;
        result[5] += 0;
        result[6] += 16617;
      } else {
        result[0] += 47607142;
        result[1] += 0;
        result[2] += 0;
        result[3] += 6041709;
        result[4] += 0;
        result[5] += 0;
        result[6] += 38238;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 334946;
        result[1] += 430645;
        result[2] += 334946;
        result[3] += 52586553;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53094798;
        result[1] += 0;
        result[2] += 592292;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 6683040;
        result[1] += 0;
        result[2] += 286416;
        result[3] += 44967314;
        result[4] += 1527552;
        result[5] += 222768;
        result[6] += 0;
      } else {
        result[0] += 53419059;
        result[1] += 29562;
        result[2] += 57153;
        result[3] += 163578;
        result[4] += 0;
        result[5] += 0;
        result[6] += 17737;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 8333110;
        result[1] += 0;
        result[2] += 384987;
        result[3] += 37145058;
        result[4] += 7811515;
        result[5] += 12418;
        result[6] += 0;
      } else {
        result[0] += 53252763;
        result[1] += 0;
        result[2] += 275427;
        result[3] += 105933;
        result[4] += 0;
        result[5] += 0;
        result[6] += 52966;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += 1193046;
        result[1] += 1789569;
        result[2] += 0;
        result[3] += 6760596;
        result[4] += 43943878;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 17249274;
        result[1] += 204133;
        result[2] += 204133;
        result[3] += 35968309;
        result[4] += 61240;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42920000))) ) ) {
        result[0] += 19752797;
        result[1] += 0;
        result[2] += 2194755;
        result[3] += 31739538;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1680108;
        result[4] += 52006983;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42480000))) ) ) {
        result[0] += 125437;
        result[1] += 0;
        result[2] += 282233;
        result[3] += 47854264;
        result[4] += 5393796;
        result[5] += 31359;
        result[6] += 0;
      } else {
        result[0] += 12207132;
        result[1] += 0;
        result[2] += 850248;
        result[3] += 0;
        result[4] += 40629710;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53653990;
        result[1] += 0;
        result[2] += 26894;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6206;
      } else {
        result[0] += 36716585;
        result[1] += 72767;
        result[2] += 322257;
        result[3] += 16523503;
        result[4] += 0;
        result[5] += 20790;
        result[6] += 31186;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x45102800))) ) ) {
        result[0] += 53687091;
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
        result[4] += 53641823;
        result[5] += 45267;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 33861;
        result[1] += 186237;
        result[2] += 524850;
        result[3] += 52789766;
        result[4] += 0;
        result[5] += 152375;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 21495406;
        result[1] += 1028488;
        result[2] += 0;
        result[3] += 31163196;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += 50285104;
        result[1] += 47282;
        result[2] += 144212;
        result[3] += 3189215;
        result[4] += 0;
        result[5] += 0;
        result[6] += 21277;
      } else {
        result[0] += 46689267;
        result[1] += 0;
        result[2] += 69095;
        result[3] += 6928728;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x43608000))) ) ) {
        result[0] += 0;
        result[1] += 725501;
        result[2] += 0;
        result[3] += 0;
        result[4] += 52961589;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 13421772;
        result[4] += 40265318;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 31395;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53655695;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 3883153;
        result[1] += 0;
        result[2] += 378358;
        result[3] += 49405665;
        result[4] += 0;
        result[5] += 19913;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x425c0000))) ) ) {
        result[0] += 53303584;
        result[1] += 28337;
        result[2] += 92570;
        result[3] += 241816;
        result[4] += 0;
        result[5] += 0;
        result[6] += 20781;
      } else {
        result[0] += 6082197;
        result[1] += 526344;
        result[2] += 175448;
        result[3] += 46903101;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 9945581;
        result[1] += 0;
        result[2] += 380952;
        result[3] += 43346951;
        result[4] += 0;
        result[5] += 13605;
        result[6] += 0;
      } else {
        result[0] += 53326917;
        result[1] += 0;
        result[2] += 211866;
        result[3] += 84746;
        result[4] += 0;
        result[5] += 0;
        result[6] += 63560;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 52568610;
        result[1] += 0;
        result[2] += 1118481;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 53605417;
        result[1] += 0;
        result[2] += 81674;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53682575;
        result[1] += 0;
        result[2] += 4515;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 482038;
        result[2] += 0;
        result[3] += 11930464;
        result[4] += 41274587;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 30206760;
        result[1] += 82902;
        result[2] += 312769;
        result[3] += 22960303;
        result[4] += 41451;
        result[5] += 37683;
        result[6] += 45219;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 364392;
        result[1] += 1336104;
        result[2] += 0;
        result[3] += 51986595;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53666617;
        result[1] += 0;
        result[2] += 20474;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 32782082;
        result[1] += 76543;
        result[2] += 233884;
        result[3] += 17787968;
        result[4] += 2730068;
        result[5] += 21262;
        result[6] += 55281;
      } else {
        result[0] += 308349;
        result[1] += 0;
        result[2] += 582438;
        result[3] += 43682859;
        result[4] += 9044921;
        result[5] += 68522;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 34012939;
        result[1] += 0;
        result[2] += 1000380;
        result[3] += 18673770;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 903252;
        result[2] += 0;
        result[3] += 52783838;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41d00000))) ) ) {
        result[0] += 114106;
        result[1] += 513479;
        result[2] += 0;
        result[3] += 9584942;
        result[4] += 43474562;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x4467a000))) ) ) {
        result[0] += 53687091;
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
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 118179;
        result[2] += 422068;
        result[3] += 53079312;
        result[4] += 0;
        result[5] += 67530;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 690509;
        result[1] += 3279918;
        result[2] += 0;
        result[3] += 49716663;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53670236;
        result[1] += 0;
        result[2] += 16854;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 37688424;
        result[1] += 67464;
        result[2] += 371053;
        result[3] += 15511960;
        result[4] += 0;
        result[5] += 0;
        result[6] += 48188;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x458ec000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 53401521;
        result[1] += 0;
        result[2] += 285569;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53662282;
        result[1] += 0;
        result[2] += 22740;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2067;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41780000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 354370;
        result[1] += 177185;
        result[2] += 509407;
        result[3] += 37895467;
        result[4] += 14639920;
        result[5] += 110740;
        result[6] += 0;
      } else {
        result[0] += 764410;
        result[1] += 331244;
        result[2] += 293023;
        result[3] += 29518982;
        result[4] += 22715729;
        result[5] += 63700;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 31650193;
        result[1] += 8568;
        result[2] += 171360;
        result[3] += 21839833;
        result[4] += 0;
        result[5] += 0;
        result[6] += 17136;
      } else {
        result[0] += 51965458;
        result[1] += 0;
        result[2] += 341794;
        result[3] += 1341860;
        result[4] += 0;
        result[5] += 0;
        result[6] += 37977;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53206752;
        result[1] += 0;
        result[2] += 369491;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 110847;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 53657334;
        result[1] += 0;
        result[2] += 29756;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 1289155;
        result[1] += 291099;
        result[2] += 609923;
        result[3] += 38314257;
        result[4] += 13071760;
        result[5] += 110895;
        result[6] += 0;
      } else {
        result[0] += 39679499;
        result[1] += 0;
        result[2] += 177047;
        result[3] += 13783678;
        result[4] += 0;
        result[5] += 0;
        result[6] += 46865;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x42080000))) ) ) {
        result[0] += 78951;
        result[1] += 552661;
        result[2] += 0;
        result[3] += 4816047;
        result[4] += 48239430;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 6342678;
        result[1] += 190042;
        result[2] += 213798;
        result[3] += 28886505;
        result[4] += 18054066;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 53491390;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 195700;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 27517;
        result[1] += 0;
        result[2] += 385248;
        result[3] += 42886382;
        result[4] += 10277872;
        result[5] += 110070;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 42027773;
        result[4] += 11659317;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 411516;
        result[2] += 0;
        result[3] += 538137;
        result[4] += 52737437;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53640738;
        result[1] += 0;
        result[2] += 40899;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5453;
      } else {
        result[0] += 35078418;
        result[1] += 1497249;
        result[2] += 0;
        result[3] += 17111423;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 51575486;
        result[1] += 168180;
        result[2] += 149494;
        result[3] += 1756556;
        result[4] += 0;
        result[5] += 0;
        result[6] += 37373;
      } else {
        result[0] += 32866487;
        result[1] += 0;
        result[2] += 219367;
        result[3] += 20575427;
        result[4] += 0;
        result[5] += 0;
        result[6] += 25807;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40e00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 53558591;
        result[1] += 0;
        result[2] += 102799;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 25699;
      } else {
        result[0] += 53671549;
        result[1] += 0;
        result[2] += 15541;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 21975;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53643139;
        result[5] += 21975;
        result[6] += 0;
      } else {
        result[0] += 1080249;
        result[1] += 481556;
        result[2] += 728842;
        result[3] += 51305336;
        result[4] += 0;
        result[5] += 91105;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 39206806;
        result[1] += 7973;
        result[2] += 191369;
        result[3] += 14201204;
        result[4] += 0;
        result[5] += 0;
        result[6] += 79737;
      } else {
        result[0] += 41977279;
        result[1] += 0;
        result[2] += 68478;
        result[3] += 11641333;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x41d40000))) ) ) {
        result[0] += 19334648;
        result[1] += 202669;
        result[2] += 304003;
        result[3] += 33805235;
        result[4] += 40533;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 6231537;
        result[1] += 0;
        result[2] += 0;
        result[3] += 47455553;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 819650;
        result[1] += 1844213;
        result[2] += 0;
        result[3] += 51023227;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        result[0] += 52400546;
        result[1] += 39907;
        result[2] += 41807;
        result[3] += 1176323;
        result[4] += 1900;
        result[5] += 3800;
        result[6] += 22804;
      } else {
        result[0] += 1309441;
        result[1] += 0;
        result[2] += 677297;
        result[3] += 45740137;
        result[4] += 5779602;
        result[5] += 180612;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 19342148;
        result[1] += 0;
        result[2] += 369882;
        result[3] += 27659993;
        result[4] += 6233873;
        result[5] += 18043;
        result[6] += 63150;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x45102800))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 44186;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53620810;
        result[5] += 22093;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 83559;
        result[1] += 208899;
        result[2] += 167119;
        result[3] += 53060393;
        result[4] += 0;
        result[5] += 167119;
        result[6] += 0;
      } else {
        result[0] += 51402534;
        result[1] += 0;
        result[2] += 2284557;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53653258;
        result[1] += 0;
        result[2] += 33832;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 38334621;
        result[1] += 112705;
        result[2] += 411620;
        result[3] += 14769340;
        result[4] += 0;
        result[5] += 0;
        result[6] += 58802;
      } else {
        result[0] += 8059263;
        result[1] += 661272;
        result[2] += 537284;
        result[3] += 44387941;
        result[4] += 0;
        result[5] += 41329;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x459b9800))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        result[0] += 53558653;
        result[1] += 0;
        result[2] += 102750;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 25687;
      } else {
        result[0] += 53682219;
        result[1] += 0;
        result[2] += 4871;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x439b0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        result[0] += 36422;
        result[1] += 437072;
        result[2] += 254959;
        result[3] += 50846118;
        result[4] += 2021461;
        result[5] += 91056;
        result[6] += 0;
      } else {
        result[0] += 53489754;
        result[1] += 46432;
        result[2] += 81256;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 69648;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 30127871;
        result[1] += 129304;
        result[2] += 431013;
        result[3] += 8611657;
        result[4] += 14309661;
        result[5] += 25860;
        result[6] += 51721;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 448552;
        result[3] += 42875429;
        result[4] += 10363108;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        result[0] += 0;
        result[1] += 204270;
        result[2] += 312413;
        result[3] += 32743357;
        result[4] += 20427049;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53306172;
        result[1] += 44813;
        result[2] += 336104;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 52781447;
        result[1] += 41264;
        result[2] += 32577;
        result[3] += 792709;
        result[4] += 15202;
        result[5] += 19546;
        result[6] += 4343;
      } else {
        result[0] += 42723294;
        result[1] += 0;
        result[2] += 88775;
        result[3] += 10741857;
        result[4] += 22193;
        result[5] += 66581;
        result[6] += 44387;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 11847757;
        result[1] += 0;
        result[2] += 899437;
        result[3] += 35202107;
        result[4] += 5737788;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 23426828;
        result[1] += 0;
        result[2] += 0;
        result[3] += 23412195;
        result[4] += 6848067;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42420000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 53171859;
        result[4] += 515231;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53401840;
        result[1] += 0;
        result[2] += 285250;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 45938;
        result[1] += 0;
        result[2] += 0;
        result[3] += 49935426;
        result[4] += 3644474;
        result[5] += 61251;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53663070;
        result[5] += 24021;
        result[6] += 0;
      } else {
        result[0] += 33253944;
        result[1] += 2804549;
        result[2] += 15625347;
        result[3] += 0;
        result[4] += 0;
        result[5] += 2003249;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b60000))) ) ) {
        result[0] += 53529084;
        result[1] += 44866;
        result[2] += 93633;
        result[3] += 9753;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9753;
      } else {
        result[0] += 16413887;
        result[1] += 1481809;
        result[2] += 0;
        result[3] += 35791394;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 10971254;
        result[1] += 0;
        result[2] += 271902;
        result[3] += 42443934;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53356676;
        result[1] += 0;
        result[2] += 255805;
        result[3] += 42634;
        result[4] += 0;
        result[5] += 0;
        result[6] += 31975;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40600000))) ) ) {
        result[0] += 0;
        result[1] += 1597830;
        result[2] += 0;
        result[3] += 0;
        result[4] += 52089261;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 11094011;
        result[1] += 0;
        result[2] += 0;
        result[3] += 9905367;
        result[4] += 32539131;
        result[5] += 148580;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 368666;
        result[3] += 37588644;
        result[4] += 15683696;
        result[5] += 46083;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 53022352;
        result[1] += 32103;
        result[2] += 81203;
        result[3] += 536323;
        result[4] += 0;
        result[5] += 0;
        result[6] += 15107;
      } else {
        result[0] += 13594855;
        result[1] += 881148;
        result[2] += 188817;
        result[3] += 39022270;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 21686070;
        result[1] += 0;
        result[2] += 315864;
        result[3] += 31537094;
        result[4] += 0;
        result[5] += 69095;
        result[6] += 78966;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 17299670;
        result[1] += 581125;
        result[2] += 0;
        result[3] += 33794705;
        result[4] += 2011589;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 9163831;
        result[1] += 0;
        result[2] += 647947;
        result[3] += 8793575;
        result[4] += 35081737;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 19428577;
        result[1] += 380952;
        result[2] += 870748;
        result[3] += 32571438;
        result[4] += 435374;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 76586;
        result[2] += 0;
        result[3] += 6050328;
        result[4] += 47560176;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x43880000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53654251;
        result[1] += 0;
        result[2] += 30787;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2052;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
        result[0] += 35368852;
        result[1] += 93513;
        result[2] += 316906;
        result[3] += 17248030;
        result[4] += 623422;
        result[5] += 5195;
        result[6] += 31171;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 289887;
        result[3] += 35453192;
        result[4] += 17770079;
        result[5] += 173932;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 81492;
        result[1] += 0;
        result[2] += 211879;
        result[3] += 51177130;
        result[4] += 2021007;
        result[5] += 195581;
        result[6] += 0;
      } else {
        result[0] += 28498284;
        result[1] += 0;
        result[2] += 551579;
        result[3] += 0;
        result[4] += 24637226;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 5131854;
        result[2] += 0;
        result[3] += 48555236;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
        result[0] += 47630379;
        result[1] += 0;
        result[2] += 100229;
        result[3] += 5956482;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 46283468;
        result[1] += 0;
        result[2] += 194832;
        result[3] += 7187142;
        result[4] += 0;
        result[5] += 0;
        result[6] += 21648;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53638403;
        result[1] += 0;
        result[2] += 42601;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6085;
      } else {
        result[0] += 36825024;
        result[1] += 239123;
        result[2] += 447392;
        result[3] += 16152409;
        result[4] += 0;
        result[5] += 0;
        result[6] += 23140;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40900000))) ) ) {
        result[0] += 53631643;
        result[1] += 0;
        result[2] += 44358;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 11089;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 16995530;
        result[1] += 293532;
        result[2] += 322885;
        result[3] += 33286583;
        result[4] += 2788558;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 37081890;
        result[1] += 201831;
        result[2] += 82567;
        result[3] += 16201538;
        result[4] += 9174;
        result[5] += 73393;
        result[6] += 36696;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 162145;
        result[1] += 34135;
        result[2] += 358425;
        result[3] += 33359217;
        result[4] += 19747564;
        result[5] += 25601;
        result[6] += 0;
      } else {
        result[0] += 53056961;
        result[1] += 0;
        result[2] += 441091;
        result[3] += 157532;
        result[4] += 0;
        result[5] += 0;
        result[6] += 31506;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 8237069;
        result[1] += 0;
        result[2] += 0;
        result[3] += 42580333;
        result[4] += 2869688;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 3165823;
        result[1] += 230841;
        result[2] += 296795;
        result[3] += 0;
        result[4] += 49960653;
        result[5] += 32977;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 53446204;
        result[1] += 40147;
        result[2] += 87942;
        result[3] += 97501;
        result[4] += 0;
        result[5] += 0;
        result[6] += 15294;
      } else {
        result[0] += 348617;
        result[1] += 2614631;
        result[2] += 0;
        result[3] += 50723842;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42440000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 285569;
        result[3] += 44191900;
        result[4] += 9209620;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53221099;
        result[1] += 0;
        result[2] += 367887;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 98103;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x4503a000))) ) ) {
        result[0] += 53687091;
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
        result[4] += 53642295;
        result[5] += 44795;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 4732103;
        result[1] += 0;
        result[2] += 0;
        result[3] += 48933767;
        result[4] += 0;
        result[5] += 21220;
        result[6] += 0;
      } else {
        result[0] += 18813127;
        result[1] += 243873;
        result[2] += 696782;
        result[3] += 33793950;
        result[4] += 0;
        result[5] += 139356;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        result[0] += 19660061;
        result[1] += 972200;
        result[2] += 0;
        result[3] += 33054828;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53523591;
        result[1] += 41367;
        result[2] += 106373;
        result[3] += 11819;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3939;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 21932032;
        result[1] += 0;
        result[2] += 334767;
        result[3] += 31382032;
        result[4] += 0;
        result[5] += 0;
        result[6] += 38259;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 375084;
        result[1] += 675152;
        result[2] += 125028;
        result[3] += 52511826;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53014473;
        result[1] += 0;
        result[2] += 672617;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 157255;
        result[1] += 0;
        result[2] += 188706;
        result[3] += 49221029;
        result[4] += 3962843;
        result[5] += 157255;
        result[6] += 0;
      } else {
        result[0] += 11936998;
        result[1] += 0;
        result[2] += 470423;
        result[3] += 0;
        result[4] += 41279669;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 47534018;
        result[1] += 20442;
        result[2] += 112431;
        result[3] += 5999756;
        result[4] += 0;
        result[5] += 4088;
        result[6] += 16353;
      } else {
        result[0] += 53004309;
        result[1] += 0;
        result[2] += 145158;
        result[3] += 516118;
        result[4] += 0;
        result[5] += 0;
        result[6] += 21504;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43ba8000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 53615329;
        result[1] += 0;
        result[2] += 66977;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4784;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
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
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        result[0] += 42130515;
        result[1] += 220934;
        result[2] += 237929;
        result[3] += 10876776;
        result[4] += 67979;
        result[5] += 33989;
        result[6] += 118964;
      } else {
        result[0] += 25238055;
        result[1] += 124940;
        result[2] += 162423;
        result[3] += 27199627;
        result[4] += 962044;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 198075;
        result[1] += 86119;
        result[2] += 456435;
        result[3] += 32708304;
        result[4] += 20160648;
        result[5] += 77507;
        result[6] += 0;
      } else {
        result[0] += 53186366;
        result[1] += 0;
        result[2] += 297305;
        result[3] += 109533;
        result[4] += 0;
        result[5] += 0;
        result[6] += 93885;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x436c0000))) ) ) {
        result[0] += 53687091;
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
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42060000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53637834;
        result[1] += 0;
        result[2] += 49256;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 651179;
        result[1] += 334389;
        result[2] += 219992;
        result[3] += 36879626;
        result[4] += 15566704;
        result[5] += 35198;
        result[6] += 0;
      } else {
        result[0] += 38471297;
        result[1] += 11363;
        result[2] += 136362;
        result[3] += 15056703;
        result[4] += 0;
        result[5] += 0;
        result[6] += 11363;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 51527265;
        result[1] += 0;
        result[2] += 1807200;
        result[3] += 176312;
        result[4] += 0;
        result[5] += 0;
        result[6] += 176312;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 82850;
        result[3] += 0;
        result[4] += 53521390;
        result[5] += 82850;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 26298021;
        result[1] += 0;
        result[2] += 601957;
        result[3] += 26674245;
        result[4] += 112867;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 7580334;
        result[1] += 583102;
        result[2] += 458152;
        result[3] += 45065502;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 569121;
        result[1] += 2276484;
        result[2] += 0;
        result[3] += 50841485;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x432e8000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53668607;
        result[1] += 0;
        result[2] += 14376;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4107;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 19624025;
        result[1] += 86313;
        result[2] += 339089;
        result[3] += 28335538;
        result[4] += 5197314;
        result[5] += 61652;
        result[6] += 43156;
      } else {
        result[0] += 52138929;
        result[1] += 0;
        result[2] += 275520;
        result[3] += 1220161;
        result[4] += 0;
        result[5] += 0;
        result[6] += 52480;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x459b9800))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 52848230;
        result[1] += 0;
        result[2] += 838860;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53664284;
        result[1] += 0;
        result[2] += 22806;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x439b0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 1024199;
        result[1] += 273913;
        result[2] += 559736;
        result[3] += 43969108;
        result[4] += 7741040;
        result[5] += 119092;
        result[6] += 0;
      } else {
        result[0] += 39836723;
        result[1] += 0;
        result[2] += 235601;
        result[3] += 13564637;
        result[4] += 0;
        result[5] += 0;
        result[6] += 50128;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 461493;
        result[1] += 1692143;
        result[2] += 0;
        result[3] += 51533454;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 28708091;
        result[1] += 0;
        result[2] += 532727;
        result[3] += 22315362;
        result[4] += 2130909;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 5698533;
        result[1] += 241755;
        result[2] += 0;
        result[3] += 20324768;
        result[4] += 27422033;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424a0000))) ) ) {
        result[0] += 52776916;
        result[1] += 39572;
        result[2] += 41771;
        result[3] += 809043;
        result[4] += 10992;
        result[5] += 4396;
        result[6] += 4396;
      } else {
        result[0] += 42515092;
        result[1] += 0;
        result[2] += 204990;
        result[3] += 10885011;
        result[4] += 20499;
        result[5] += 0;
        result[6] += 61497;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 21958343;
        result[1] += 0;
        result[2] += 534754;
        result[3] += 31149430;
        result[4] += 0;
        result[5] += 0;
        result[6] += 44562;
      } else {
        result[0] += 10216573;
        result[1] += 0;
        result[2] += 360584;
        result[3] += 14703852;
        result[4] += 28285885;
        result[5] += 120194;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 102261;
        result[1] += 0;
        result[2] += 286331;
        result[3] += 47408258;
        result[4] += 5808431;
        result[5] += 81808;
        result[6] += 0;
      } else {
        result[0] += 20707156;
        result[1] += 0;
        result[2] += 858589;
        result[3] += 0;
        result[4] += 32121345;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 47256564;
        result[1] += 26362;
        result[2] += 135870;
        result[3] += 6264237;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4055;
      } else {
        result[0] += 53027583;
        result[1] += 0;
        result[2] += 141323;
        result[3] += 497248;
        result[4] += 0;
        result[5] += 0;
        result[6] += 20936;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
        result[0] += 8577490;
        result[1] += 488872;
        result[2] += 0;
        result[3] += 44620728;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 335544;
        result[1] += 1677721;
        result[2] += 0;
        result[3] += 10905190;
        result[4] += 40768634;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 720916;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1696274;
        result[4] += 51269899;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 12533223;
        result[1] += 0;
        result[2] += 2057693;
        result[3] += 39096174;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
        result[0] += 52212171;
        result[1] += 0;
        result[2] += 1474920;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 4379443;
        result[1] += 466844;
        result[2] += 222306;
        result[3] += 48618496;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 49580572;
        result[1] += 0;
        result[2] += 32984;
        result[3] += 4040550;
        result[4] += 10994;
        result[5] += 16492;
        result[6] += 5497;
      } else {
        result[0] += 51037083;
        result[1] += 39093;
        result[2] += 69810;
        result[3] += 2370765;
        result[4] += 134036;
        result[5] += 16754;
        result[6] += 19546;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 34659781;
        result[1] += 0;
        result[2] += 280822;
        result[3] += 18665359;
        result[4] += 56164;
        result[5] += 6240;
        result[6] += 18721;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 49984533;
        result[4] += 3702558;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 20974110;
        result[1] += 165803;
        result[2] += 364767;
        result[3] += 31651839;
        result[4] += 530570;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41a80000))) ) ) {
        result[0] += 45153;
        result[1] += 361225;
        result[2] += 0;
        result[3] += 13997475;
        result[4] += 39283237;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 52766390;
        result[1] += 15345;
        result[2] += 46035;
        result[3] += 833745;
        result[4] += 15345;
        result[5] += 5115;
        result[6] += 5115;
      } else {
        result[0] += 39937485;
        result[1] += 54907;
        result[2] += 206712;
        result[3] += 13281272;
        result[4] += 161494;
        result[5] += 9689;
        result[6] += 35528;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 53687091;
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
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x43880000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42060000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53627004;
        result[1] += 0;
        result[2] += 49161;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 10924;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 41234150;
        result[1] += 291865;
        result[2] += 227006;
        result[3] += 11707061;
        result[4] += 81073;
        result[5] += 97288;
        result[6] += 48644;
      } else {
        result[0] += 25508852;
        result[1] += 124737;
        result[2] += 174632;
        result[3] += 26544175;
        result[4] += 1334693;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 23171294;
        result[1] += 0;
        result[2] += 558672;
        result[3] += 25222031;
        result[4] += 4660148;
        result[5] += 34065;
        result[6] += 40878;
      } else {
        result[0] += 0;
        result[1] += 421405;
        result[2] += 0;
        result[3] += 5000681;
        result[4] += 48265004;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
        result[0] += 53608989;
        result[1] += 0;
        result[2] += 78101;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53668256;
        result[1] += 0;
        result[2] += 18835;
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
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 61638;
        result[1] += 246553;
        result[2] += 0;
        result[3] += 11526390;
        result[4] += 41852508;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 30469010;
        result[1] += 83083;
        result[2] += 373876;
        result[3] += 22659154;
        result[4] += 30212;
        result[5] += 30212;
        result[6] += 41541;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 211366;
        result[1] += 0;
        result[2] += 0;
        result[3] += 24025325;
        result[4] += 29450399;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 38157;
        result[1] += 190785;
        result[2] += 0;
        result[3] += 2670999;
        result[4] += 50787148;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53633501;
        result[1] += 0;
        result[2] += 29230;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 24358;
      }
    } else {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 32921606;
        result[1] += 62811;
        result[2] += 347557;
        result[3] += 17511848;
        result[4] += 2772081;
        result[5] += 29312;
        result[6] += 41874;
      } else {
        result[0] += 4150954;
        result[1] += 169426;
        result[2] += 550636;
        result[3] += 47587729;
        result[4] += 1207165;
        result[5] += 21178;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 21272243;
        result[4] += 32414847;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 38847;
        result[1] += 466168;
        result[2] += 0;
        result[3] += 2486232;
        result[4] += 50695842;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 52794329;
        result[1] += 15174;
        result[2] += 63226;
        result[3] += 804244;
        result[4] += 5058;
        result[5] += 2529;
        result[6] += 2529;
      } else {
        result[0] += 38210095;
        result[1] += 17331;
        result[2] += 259971;
        result[3] += 14413998;
        result[4] += 756807;
        result[5] += 14442;
        result[6] += 14442;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x42a20000))) ) ) {
        result[0] += 26843545;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 26843545;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42da0000))) ) ) {
        result[0] += 8228080;
        result[1] += 590967;
        result[2] += 0;
        result[3] += 44868043;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 1540203;
        result[2] += 0;
        result[3] += 220029;
        result[4] += 51926858;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 814001;
        result[1] += 0;
        result[2] += 0;
        result[3] += 8140013;
        result[4] += 44733075;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 30743889;
        result[1] += 0;
        result[2] += 3212048;
        result[3] += 19731153;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 50785086;
        result[1] += 0;
        result[2] += 2902004;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53611496;
        result[1] += 0;
        result[2] += 70554;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5039;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 39532894;
        result[1] += 36041;
        result[2] += 293484;
        result[3] += 12434480;
        result[4] += 1323255;
        result[5] += 20595;
        result[6] += 46339;
      } else {
        result[0] += 0;
        result[1] += 42118;
        result[2] += 336948;
        result[3] += 44112144;
        result[4] += 9181840;
        result[5] += 14039;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 7436866;
        result[1] += 637445;
        result[2] += 0;
        result[3] += 36830194;
        result[4] += 8782584;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 3655867;
        result[1] += 0;
        result[2] += 203103;
        result[3] += 7684091;
        result[4] += 42144028;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 50927279;
        result[1] += 0;
        result[2] += 133404;
        result[3] += 1233994;
        result[4] += 1384074;
        result[5] += 8337;
        result[6] += 0;
      } else {
        result[0] += 42590349;
        result[1] += 0;
        result[2] += 317049;
        result[3] += 10779691;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 35156027;
        result[1] += 0;
        result[2] += 205140;
        result[3] += 17377146;
        result[4] += 906039;
        result[5] += 25642;
        result[6] += 17095;
      } else {
        result[0] += 5574983;
        result[1] += 445998;
        result[2] += 0;
        result[3] += 28153666;
        result[4] += 19512442;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 52758437;
        result[1] += 10925;
        result[2] += 25492;
        result[3] += 702863;
        result[4] += 174805;
        result[5] += 0;
        result[6] += 14567;
      } else {
        result[0] += 43896516;
        result[1] += 120800;
        result[2] += 126552;
        result[3] += 9508706;
        result[4] += 0;
        result[5] += 17257;
        result[6] += 17257;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 94077;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53593013;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 15211936;
        result[1] += 267188;
        result[2] += 712502;
        result[3] += 37442025;
        result[4] += 0;
        result[5] += 53437;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 78864;
        result[1] += 0;
        result[2] += 0;
        result[3] += 52109798;
        result[4] += 1360414;
        result[5] += 138013;
        result[6] += 0;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41d40000))) ) ) {
        result[0] += 50260255;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3426835;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 135231;
        result[2] += 473311;
        result[3] += 45077;
        result[4] += 52988392;
        result[5] += 45077;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53638514;
        result[1] += 0;
        result[2] += 43719;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4857;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 50132016;
        result[1] += 185957;
        result[2] += 284405;
        result[3] += 3051894;
        result[4] += 0;
        result[5] += 0;
        result[6] += 32816;
      } else {
        result[0] += 24869535;
        result[1] += 0;
        result[2] += 411252;
        result[3] += 28331530;
        result[4] += 0;
        result[5] += 14954;
        result[6] += 59818;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 537169;
        result[1] += 358112;
        result[2] += 298427;
        result[3] += 52433696;
        result[4] += 59685;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 52966830;
        result[1] += 0;
        result[2] += 720260;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 357120;
        result[1] += 1190401;
        result[2] += 0;
        result[3] += 24641303;
        result[4] += 27498266;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1605868;
        result[4] += 52081223;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x43260000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53658535;
        result[1] += 0;
        result[2] += 26516;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2039;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 61922;
        result[1] += 495382;
        result[2] += 0;
        result[3] += 12756102;
        result[4] += 40311760;
        result[5] += 61922;
        result[6] += 0;
      } else {
        result[0] += 31493408;
        result[1] += 46198;
        result[2] += 378826;
        result[3] += 21006385;
        result[4] += 697594;
        result[5] += 36958;
        result[6] += 27719;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
        result[0] += 6492305;
        result[1] += 0;
        result[2] += 427859;
        result[3] += 40814094;
        result[4] += 5729599;
        result[5] += 223231;
        result[6] += 0;
      } else {
        result[0] += 48879836;
        result[1] += 26277;
        result[2] += 132845;
        result[3] += 4626234;
        result[4] += 0;
        result[5] += 0;
        result[6] += 21897;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x458d2000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 18929187;
        result[1] += 0;
        result[2] += 2610922;
        result[3] += 32146981;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 7683748;
        result[1] += 545298;
        result[2] += 0;
        result[3] += 45458044;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 865920;
        result[1] += 2309122;
        result[2] += 0;
        result[3] += 50512048;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x439b0000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 53485827;
        result[1] += 0;
        result[2] += 150947;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 50315;
      } else {
        result[0] += 53678175;
        result[1] += 0;
        result[2] += 8915;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 37183040;
        result[1] += 107169;
        result[2] += 284231;
        result[3] += 15795802;
        result[4] += 265593;
        result[5] += 27957;
        result[6] += 23297;
      } else {
        result[0] += 0;
        result[1] += 72005;
        result[2] += 446432;
        result[3] += 43131126;
        result[4] += 10037527;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41a80000))) ) ) {
        result[0] += 46004;
        result[1] += 598056;
        result[2] += 0;
        result[3] += 13479278;
        result[4] += 39563751;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 53167119;
        result[1] += 0;
        result[2] += 519971;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53664345;
        result[1] += 0;
        result[2] += 22746;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 31498646;
        result[1] += 31207;
        result[2] += 228854;
        result[3] += 16664739;
        result[4] += 5170022;
        result[5] += 62414;
        result[6] += 31207;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 958698;
        result[3] += 46337072;
        result[4] += 6355813;
        result[5] += 35507;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 60153;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53626937;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 29678149;
        result[1] += 185875;
        result[2] += 309792;
        result[3] += 23426531;
        result[4] += 0;
        result[5] += 55762;
        result[6] += 30979;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 323954;
        result[3] += 36316423;
        result[4] += 16912662;
        result[5] += 134050;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 501748;
        result[2] += 0;
        result[3] += 188155;
        result[4] += 52997186;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        result[0] += 32444594;
        result[1] += 248935;
        result[2] += 0;
        result[3] += 20993561;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53472673;
        result[1] += 49178;
        result[2] += 84586;
        result[3] += 74751;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5901;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 22207020;
        result[1] += 0;
        result[2] += 376717;
        result[3] += 31026077;
        result[4] += 0;
        result[5] += 0;
        result[6] += 77275;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        result[0] += 53647293;
        result[1] += 0;
        result[2] += 39797;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 28461538;
        result[1] += 0;
        result[2] += 416325;
        result[3] += 22122033;
        result[4] += 2602035;
        result[5] += 18923;
        result[6] += 66233;
      } else {
        result[0] += 5687642;
        result[1] += 372088;
        result[2] += 0;
        result[3] += 27109323;
        result[4] += 20518036;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 3612904;
        result[1] += 0;
        result[2] += 0;
        result[3] += 48656036;
        result[4] += 1283087;
        result[5] += 135061;
        result[6] += 0;
      } else {
        result[0] += 1306608;
        result[1] += 58071;
        result[2] += 406500;
        result[3] += 58071;
        result[4] += 51712660;
        result[5] += 145178;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        result[0] += 30980091;
        result[1] += 176023;
        result[2] += 44005;
        result[3] += 22486970;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 49151152;
        result[1] += 62014;
        result[2] += 150607;
        result[3] += 4305598;
        result[4] += 0;
        result[5] += 0;
        result[6] += 17718;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x41180000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53643213;
        result[1] += 0;
        result[2] += 39002;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4875;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 720511;
        result[1] += 324230;
        result[2] += 486345;
        result[3] += 36322771;
        result[4] += 15734163;
        result[5] += 99070;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 52673377;
        result[1] += 0;
        result[2] += 298151;
        result[3] += 662558;
        result[4] += 0;
        result[5] += 0;
        result[6] += 53004;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 62354;
        result[3] += 53624736;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x44db3000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53614795;
        result[1] += 0;
        result[2] += 67476;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4819;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45105800))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 848216;
        result[1] += 349265;
        result[2] += 249475;
        result[3] += 34497448;
        result[4] += 17712748;
        result[5] += 29937;
        result[6] += 0;
      } else {
        result[0] += 52768732;
        result[1] += 0;
        result[2] += 207803;
        result[3] += 656927;
        result[4] += 0;
        result[5] += 0;
        result[6] += 53626;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53608944;
        result[5] += 78147;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 17419;
        result[2] += 557425;
        result[3] += 53094826;
        result[4] += 0;
        result[5] += 17419;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43320000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53624049;
        result[1] += 0;
        result[2] += 63041;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 17362868;
        result[1] += 303161;
        result[2] += 275601;
        result[3] += 33375291;
        result[4] += 2370169;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 37281140;
        result[1] += 121803;
        result[2] += 103064;
        result[3] += 16087388;
        result[4] += 18738;
        result[5] += 46847;
        result[6] += 28108;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 153562;
        result[1] += 76781;
        result[2] += 460686;
        result[3] += 33092678;
        result[4] += 19903382;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53115787;
        result[1] += 0;
        result[2] += 401456;
        result[3] += 108084;
        result[4] += 0;
        result[5] += 0;
        result[6] += 61762;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 13093017;
        result[1] += 0;
        result[2] += 0;
        result[3] += 40022325;
        result[4] += 171524;
        result[5] += 400223;
        result[6] += 0;
      } else {
        result[0] += 53414165;
        result[1] += 50326;
        result[2] += 29034;
        result[3] += 183886;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9678;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 7753246;
        result[1] += 101848;
        result[2] += 483782;
        result[3] += 33813828;
        result[4] += 11521654;
        result[5] += 12731;
        result[6] += 0;
      } else {
        result[0] += 57235;
        result[1] += 343414;
        result[2] += 0;
        result[3] += 6009749;
        result[4] += 47276692;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 3532045;
        result[1] += 0;
        result[2] += 1091723;
        result[3] += 42962516;
        result[4] += 6036586;
        result[5] += 64219;
        result[6] += 0;
      } else {
        result[0] += 52641472;
        result[1] += 0;
        result[2] += 504781;
        result[3] += 324502;
        result[4] += 0;
        result[5] += 0;
        result[6] += 216334;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 9405993;
        result[1] += 0;
        result[2] += 37399;
        result[3] += 35529597;
        result[4] += 8714101;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53510003;
        result[1] += 0;
        result[2] += 59029;
        result[3] += 103301;
        result[4] += 0;
        result[5] += 0;
        result[6] += 14757;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 3430008;
        result[1] += 0;
        result[2] += 0;
        result[3] += 50257082;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 18989066;
        result[1] += 474232;
        result[2] += 592790;
        result[3] += 33631000;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 6512158;
        result[1] += 0;
        result[2] += 0;
        result[3] += 46930344;
        result[4] += 91720;
        result[5] += 152867;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1433393;
        result[3] += 0;
        result[4] += 52188543;
        result[5] += 65154;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 51559146;
        result[1] += 39689;
        result[2] += 116014;
        result[3] += 1953923;
        result[4] += 0;
        result[5] += 3053;
        result[6] += 15265;
      } else {
        result[0] += 46560154;
        result[1] += 0;
        result[2] += 74990;
        result[3] += 7034641;
        result[4] += 0;
        result[5] += 0;
        result[6] += 17305;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_0/test_data.csv", "r");
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
