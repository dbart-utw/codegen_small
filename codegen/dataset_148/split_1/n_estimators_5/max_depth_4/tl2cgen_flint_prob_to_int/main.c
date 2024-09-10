
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      result[0] += 858993459;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 835168792;
          result[4] += 22519205;
          result[5] += 1305461;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 637534207;
          result[4] += 221459251;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 161061273;
          result[2] += 0;
          result[3] += 0;
          result[4] += 662140791;
          result[5] += 35791394;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11555965;
          result[3] += 0;
          result[4] += 846281896;
          result[5] += 1155596;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 858335864;
          result[1] += 0;
          result[2] += 569915;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 87679;
        } else {
          result[0] += 801917481;
          result[1] += 0;
          result[2] += 0;
          result[3] += 57075977;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0;
          result[1] += 171798691;
          result[2] += 0;
          result[3] += 687194767;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 361681456;
          result[1] += 0;
          result[2] += 0;
          result[3] += 497312002;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 848462573;
          result[1] += 3086638;
          result[2] += 6536411;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 907834;
        } else {
          result[0] += 798396148;
          result[1] += 0;
          result[2] += 3827198;
          result[3] += 56770112;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 454670948;
          result[1] += 0;
          result[2] += 7061061;
          result[3] += 396033438;
          result[4] += 0;
          result[5] += 0;
          result[6] += 1228010;
        } else {
          result[0] += 555286428;
          result[1] += 0;
          result[2] += 2860662;
          result[3] += 300687442;
          result[4] += 0;
          result[5] += 0;
          result[6] += 158925;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e40000))) ) ) {
          result[0] += 858993459;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 1143292;
          result[2] += 0;
          result[3] += 854420290;
          result[4] += 1905486;
          result[5] += 1524389;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 858993459;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 31814572;
          result[1] += 0;
          result[2] += 731735168;
          result[3] += 0;
          result[4] += 0;
          result[5] += 95443717;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 846128796;
          result[1] += 831766;
          result[2] += 2162594;
          result[3] += 9759398;
          result[4] += 0;
          result[5] += 0;
          result[6] += 110902;
        } else {
          result[0] += 857424334;
          result[1] += 0;
          result[2] += 1569124;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42200000))) ) ) {
          result[0] += 732575553;
          result[1] += 0;
          result[2] += 5485589;
          result[3] += 119186900;
          result[4] += 0;
          result[5] += 0;
          result[6] += 1745414;
        } else {
          result[0] += 446722099;
          result[1] += 0;
          result[2] += 2112545;
          result[3] += 410158813;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 858993459;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40b00000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 168181877;
          result[1] += 5425221;
          result[2] += 0;
          result[3] += 685386359;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 858993459;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 384667104;
          result[1] += 0;
          result[2] += 28922338;
          result[3] += 445404015;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 14889219;
          result[2] += 0;
          result[3] += 844104239;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45afc400))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 858458360;
          result[1] += 0;
          result[2] += 481588;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 53509;
        } else {
          result[0] += 858908854;
          result[1] += 0;
          result[2] += 84604;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x43238000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 858993459;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 858993459;
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
          result[0] += 27195207;
          result[1] += 3438474;
          result[2] += 8127303;
          result[3] += 722704831;
          result[4] += 95652110;
          result[5] += 1875531;
          result[6] += 0;
        } else {
          result[0] += 845710054;
          result[1] += 0;
          result[2] += 3652936;
          result[3] += 8634212;
          result[4] += 0;
          result[5] += 0;
          result[6] += 996255;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 2955252;
          result[2] += 0;
          result[3] += 182240584;
          result[4] += 673797621;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6691875;
          result[3] += 850476526;
          result[4] += 1825056;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 858993459;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 3605428;
          result[2] += 0;
          result[3] += 855388030;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 31378756;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 827614702;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 95443717;
          result[2] += 0;
          result[3] += 448585473;
          result[4] += 314964268;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
          result[0] += 108504436;
          result[1] += 0;
          result[2] += 0;
          result[3] += 750489022;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 19404972;
          result[4] += 839588486;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 30678337;
          result[1] += 0;
          result[2] += 214748364;
          result[3] += 613566756;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 858993459;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41200000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 858993459;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 5703225;
          result[1] += 3948386;
          result[2] += 7019354;
          result[3] += 842322492;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 858993459;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 858993459;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42dc0000))) ) ) {
          result[0] += 66076419;
          result[1] += 66076419;
          result[2] += 0;
          result[3] += 726840619;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1385473;
          result[1] += 11083786;
          result[2] += 0;
          result[3] += 0;
          result[4] += 846524199;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41780000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 858993459;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 858993459;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 858993459;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 653410475;
          result[1] += 0;
          result[2] += 6729014;
          result[3] += 190732745;
          result[4] += 6961049;
          result[5] += 232034;
          result[6] += 928139;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14610802;
          result[3] += 728713799;
          result[4] += 115060073;
          result[5] += 608783;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 858993459;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 121652046;
          result[1] += 0;
          result[2] += 5571849;
          result[3] += 730840921;
          result[4] += 0;
          result[5] += 928641;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 853250025;
          result[1] += 840502;
          result[2] += 1587615;
          result[3] += 3128536;
          result[4] += 0;
          result[5] += 0;
          result[6] += 186778;
        } else {
          result[0] += 600938869;
          result[1] += 0;
          result[2] += 594253;
          result[3] += 257311772;
          result[4] += 0;
          result[5] += 0;
          result[6] += 148563;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 94733754;
          result[1] += 0;
          result[2] += 0;
          result[3] += 743701646;
          result[4] += 19724623;
          result[5] += 833434;
          result[6] += 0;
        } else {
          result[0] += 245815446;
          result[1] += 907068;
          result[2] += 0;
          result[3] += 457162305;
          result[4] += 155108639;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41d00000))) ) ) {
          result[0] += 0;
          result[1] += 9014128;
          result[2] += 5302428;
          result[3] += 0;
          result[4] += 844676901;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 832963354;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 8676701;
          result[5] += 17353403;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 856767518;
          result[1] += 689727;
          result[2] += 1348104;
          result[3] += 62702;
          result[4] += 0;
          result[5] += 0;
          result[6] += 125405;
        } else {
          result[0] += 781573447;
          result[1] += 0;
          result[2] += 33180004;
          result[3] += 44240006;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42180000))) ) ) {
          result[0] += 0;
          result[1] += 11228672;
          result[2] += 0;
          result[3] += 847764786;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 858993459;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 285379886;
          result[1] += 0;
          result[2] += 28537988;
          result[3] += 54222178;
          result[4] += 490853405;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 8744647;
          result[1] += 0;
          result[2] += 8071982;
          result[3] += 837468172;
          result[4] += 4708656;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 406101738;
          result[1] += 0;
          result[2] += 0;
          result[3] += 21187916;
          result[4] += 431703804;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 14890921;
          result[1] += 0;
          result[2] += 2552729;
          result[3] += 838146168;
          result[4] += 3403639;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42890000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424a0000))) ) ) {
          result[0] += 857718987;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1274471;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 858993459;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 769852628;
          result[1] += 0;
          result[2] += 68881550;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 20259279;
        } else {
          result[0] += 850250523;
          result[1] += 0;
          result[2] += 6557201;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 2185733;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_1/test_data.csv", "r");
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
