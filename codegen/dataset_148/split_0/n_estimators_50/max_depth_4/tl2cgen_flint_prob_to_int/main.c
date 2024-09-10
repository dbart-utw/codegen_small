
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
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 882527;
          result[1] += 882527;
          result[2] += 1176703;
          result[3] += 82957587;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 619892;
          result[2] += 0;
          result[3] += 85279453;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x423e0000))) ) ) {
          result[0] += 85271688;
          result[1] += 0;
          result[2] += 627657;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41d80000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 61232367;
          result[1] += 0;
          result[2] += 189163;
          result[3] += 24402148;
          result[4] += 18916;
          result[5] += 18916;
          result[6] += 37832;
        } else {
          result[0] += 34295634;
          result[1] += 0;
          result[2] += 5769359;
          result[3] += 0;
          result[4] += 45834352;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41e80000))) ) ) {
          result[0] += 75385934;
          result[1] += 1433646;
          result[2] += 0;
          result[3] += 9079763;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 84731962;
          result[1] += 14323;
          result[2] += 57294;
          result[3] += 1045631;
          result[4] += 39390;
          result[5] += 7161;
          result[6] += 3580;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85473680;
          result[4] += 340532;
          result[5] += 85133;
          result[6] += 0;
        } else {
          result[0] += 39375948;
          result[1] += 0;
          result[2] += 1364513;
          result[3] += 0;
          result[4] += 45158884;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 85743259;
          result[1] += 0;
          result[2] += 0;
          result[3] += 156086;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 84492014;
          result[1] += 0;
          result[2] += 938221;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 469110;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41700000))) ) ) {
          result[0] += 14316557;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 28633115;
          result[6] += 0;
        } else {
          result[0] += 8099505;
          result[1] += 0;
          result[2] += 0;
          result[3] += 77651225;
          result[4] += 0;
          result[5] += 148614;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 700266;
          result[3] += 0;
          result[4] += 85082368;
          result[5] += 116711;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5790967;
          result[3] += 0;
          result[4] += 80108378;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 83708524;
          result[1] += 111668;
          result[2] += 164843;
          result[3] += 1887722;
          result[4] += 0;
          result[5] += 0;
          result[6] += 26587;
        } else {
          result[0] += 85851265;
          result[1] += 0;
          result[2] += 48080;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 37574983;
          result[1] += 0;
          result[2] += 0;
          result[3] += 48324362;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 84722642;
          result[1] += 0;
          result[2] += 875686;
          result[3] += 0;
          result[4] += 0;
          result[5] += 27365;
          result[6] += 273651;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x41280000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
          result[0] += 18190449;
          result[1] += 0;
          result[2] += 0;
          result[3] += 67708896;
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 25141271;
          result[1] += 0;
          result[2] += 6983686;
          result[3] += 53774387;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 10817548;
          result[1] += 1522469;
          result[2] += 0;
          result[3] += 73559327;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 810371;
          result[1] += 286013;
          result[2] += 667364;
          result[3] += 84135596;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 14254446;
          result[4] += 71644899;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 80590959;
          result[1] += 0;
          result[2] += 5308386;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ca0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x44b9b000))) ) ) {
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
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 100115;
          result[1] += 901042;
          result[2] += 0;
          result[3] += 100115;
          result[4] += 84798072;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42890000))) ) ) {
          result[0] += 44164188;
          result[1] += 0;
          result[2] += 147213;
          result[3] += 41587943;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 62778145;
          result[1] += 0;
          result[2] += 769104;
          result[3] += 14420707;
          result[4] += 7931388;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
          result[0] += 15784212;
          result[1] += 0;
          result[2] += 996897;
          result[3] += 67124440;
          result[4] += 1578421;
          result[5] += 415374;
          result[6] += 0;
        } else {
          result[0] += 78038700;
          result[1] += 35170;
          result[2] += 140682;
          result[3] += 7657158;
          result[4] += 0;
          result[5] += 7536;
          result[6] += 20097;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x433f0000))) ) ) {
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
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41e80000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x420c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1867377;
          result[4] += 84031968;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d80000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 991623;
          result[2] += 0;
          result[3] += 0;
          result[4] += 84907722;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 4313560;
          result[1] += 0;
          result[2] += 0;
          result[3] += 81511413;
          result[4] += 74371;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2968443;
          result[3] += 0;
          result[4] += 82930901;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 8156614;
          result[1] += 0;
          result[2] += 560767;
          result[3] += 76723154;
          result[4] += 0;
          result[5] += 458809;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41d00000))) ) ) {
          result[0] += 2260509;
          result[1] += 0;
          result[2] += 0;
          result[3] += 83638836;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 34468014;
          result[1] += 1172995;
          result[2] += 0;
          result[3] += 50258335;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 84263899;
          result[1] += 76833;
          result[2] += 225011;
          result[3] += 1284209;
          result[4] += 0;
          result[5] += 0;
          result[6] += 49392;
        } else {
          result[0] += 85864706;
          result[1] += 0;
          result[2] += 34639;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
          result[0] += 15329338;
          result[1] += 0;
          result[2] += 63519;
          result[3] += 70506488;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85520099;
          result[1] += 0;
          result[2] += 379246;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42200000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 61356675;
          result[3] += 0;
          result[4] += 0;
          result[5] += 24542670;
          result[6] += 0;
        } else {
          result[0] += 85206824;
          result[1] += 0;
          result[2] += 479438;
          result[3] += 106541;
          result[4] += 0;
          result[5] += 0;
          result[6] += 106541;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 399996;
          result[1] += 366663;
          result[2] += 633328;
          result[3] += 64066178;
          result[4] += 20433177;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 40447750;
          result[4] += 45451595;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 20211610;
          result[1] += 0;
          result[2] += 65687735;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 436037;
          result[1] += 0;
          result[2] += 0;
          result[3] += 872074;
          result[4] += 84591234;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 9110536;
          result[2] += 0;
          result[3] += 56615477;
          result[4] += 20173331;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
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
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41d80000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
          result[0] += 57883;
          result[1] += 0;
          result[2] += 810371;
          result[3] += 76464309;
          result[4] += 8566781;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85340403;
          result[1] += 0;
          result[2] += 431910;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 127032;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41e80000))) ) ) {
          result[0] += 74970974;
          result[1] += 1292603;
          result[2] += 0;
          result[3] += 9635767;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 84835854;
          result[1] += 3580;
          result[2] += 42969;
          result[3] += 981133;
          result[4] += 14323;
          result[5] += 17903;
          result[6] += 3580;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 85899345;
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
          result[2] += 588835;
          result[3] += 69247073;
          result[4] += 16039883;
          result[5] += 23553;
          result[6] += 0;
        } else {
          result[0] += 84696835;
          result[1] += 0;
          result[2] += 921924;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 280585;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41700000))) ) ) {
          result[0] += 4772185;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 78741067;
          result[5] += 2386092;
          result[6] += 0;
        } else {
          result[0] += 101977;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85797368;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41300000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 19327352;
          result[2] += 57982058;
          result[3] += 8589934;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x423c0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41f80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 79291703;
          result[4] += 0;
          result[5] += 6607641;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42740000))) ) ) {
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
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 85552802;
          result[1] += 0;
          result[2] += 43317;
          result[3] += 303225;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 66739433;
          result[1] += 0;
          result[2] += 306335;
          result[3] += 18783954;
          result[4] += 0;
          result[5] += 0;
          result[6] += 69621;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 76844535;
          result[1] += 149357;
          result[2] += 140022;
          result[3] += 8751427;
          result[4] += 0;
          result[5] += 0;
          result[6] += 14002;
        } else {
          result[0] += 85552744;
          result[1] += 0;
          result[2] += 259950;
          result[3] += 72208;
          result[4] += 0;
          result[5] += 0;
          result[6] += 14441;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42480000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 602314;
          result[1] += 509650;
          result[2] += 648646;
          result[3] += 84138733;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 81759618;
          result[1] += 0;
          result[2] += 4139727;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85217;
          result[1] += 1193046;
          result[2] += 0;
          result[3] += 1022611;
          result[4] += 83598470;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41d80000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
          result[0] += 50072689;
          result[1] += 0;
          result[2] += 846298;
          result[3] += 33005660;
          result[4] += 1974697;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 60613223;
          result[1] += 0;
          result[2] += 551029;
          result[3] += 21939129;
          result[4] += 2673512;
          result[5] += 0;
          result[6] += 122450;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
          result[0] += 79502586;
          result[1] += 0;
          result[2] += 0;
          result[3] += 5482936;
          result[4] += 913822;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 84615276;
          result[1] += 45609;
          result[2] += 63150;
          result[3] += 1140225;
          result[4] += 7016;
          result[5] += 14033;
          result[6] += 14033;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 24703223;
          result[1] += 0;
          result[2] += 0;
          result[3] += 61196122;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 47727926;
          result[1] += 0;
          result[2] += 2348170;
          result[3] += 109217;
          result[4] += 35714031;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42420000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 82831512;
          result[4] += 1887897;
          result[5] += 1179936;
          result[6] += 0;
        } else {
          result[0] += 85423185;
          result[1] += 0;
          result[2] += 404736;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 71424;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 85296543;
          result[1] += 0;
          result[2] += 602802;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85871058;
          result[1] += 0;
          result[2] += 28287;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 28096914;
          result[1] += 285973;
          result[2] += 607694;
          result[3] += 56908763;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 69056336;
          result[1] += 67372;
          result[2] += 538976;
          result[3] += 15976797;
          result[4] += 96245;
          result[5] += 57747;
          result[6] += 105870;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
          result[0] += 0;
          result[1] += 86504;
          result[2] += 0;
          result[3] += 85639831;
          result[4] += 144174;
          result[5] += 28834;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4778993;
          result[3] += 0;
          result[4] += 81120352;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 227849;
          result[1] += 3189896;
          result[2] += 0;
          result[3] += 82481600;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 5801480;
          result[4] += 80097865;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 80580;
          result[4] += 85818764;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 85887588;
          result[1] += 0;
          result[2] += 11757;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85559912;
          result[1] += 0;
          result[2] += 316804;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 22628;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 1160801;
          result[1] += 2321603;
          result[2] += 0;
          result[3] += 81643072;
          result[4] += 0;
          result[5] += 773867;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 1877581;
          result[1] += 610213;
          result[2] += 1384716;
          result[3] += 80360480;
          result[4] += 1408185;
          result[5] += 258167;
          result[6] += 0;
        } else {
          result[0] += 63822752;
          result[1] += 16208;
          result[2] += 389014;
          result[3] += 21630847;
          result[4] += 0;
          result[5] += 0;
          result[6] += 40522;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42f90000))) ) ) {
          result[0] += 0;
          result[1] += 517465;
          result[2] += 0;
          result[3] += 85381879;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 20211610;
          result[1] += 30317416;
          result[2] += 0;
          result[3] += 35370318;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42040000))) ) ) {
          result[0] += 0;
          result[1] += 1199102;
          result[2] += 0;
          result[3] += 72709217;
          result[4] += 11991025;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41a00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 2643056;
          result[1] += 0;
          result[2] += 0;
          result[3] += 83256289;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 82392373;
          result[1] += 0;
          result[2] += 143141;
          result[3] += 1746328;
          result[4] += 1603187;
          result[5] += 14314;
          result[6] += 0;
        } else {
          result[0] += 77507757;
          result[1] += 0;
          result[2] += 0;
          result[3] += 305148;
          result[4] += 8086439;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42260000))) ) ) {
          result[0] += 31717169;
          result[1] += 0;
          result[2] += 760451;
          result[3] += 52407789;
          result[4] += 1013935;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 79515979;
          result[1] += 0;
          result[2] += 331316;
          result[3] += 5985786;
          result[4] += 0;
          result[5] += 0;
          result[6] += 66263;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
          result[0] += 18438662;
          result[1] += 709179;
          result[2] += 0;
          result[3] += 66751504;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 46429784;
          result[1] += 0;
          result[2] += 3395231;
          result[3] += 34801118;
          result[4] += 1273211;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41a80000))) ) ) {
          result[0] += 0;
          result[1] += 213414;
          result[2] += 0;
          result[3] += 19847550;
          result[4] += 65838380;
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
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
          result[0] += 11435786;
          result[1] += 0;
          result[2] += 436480;
          result[3] += 69574978;
          result[4] += 3928323;
          result[5] += 523776;
          result[6] += 0;
        } else {
          result[0] += 85511495;
          result[1] += 85137;
          result[2] += 122976;
          result[3] += 146626;
          result[4] += 0;
          result[5] += 0;
          result[6] += 33109;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 59929431;
          result[1] += 0;
          result[2] += 163053;
          result[3] += 25703100;
          result[4] += 59292;
          result[5] += 0;
          result[6] += 44469;
        } else {
          result[0] += 369459;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85529886;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x4467a000))) ) ) {
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
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 604778;
          result[3] += 66546446;
          result[4] += 18477013;
          result[5] += 271107;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 971712;
          result[2] += 0;
          result[3] += 1263225;
          result[4] += 83664408;
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
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 85874806;
          result[1] += 0;
          result[2] += 24539;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85579762;
          result[1] += 0;
          result[2] += 296755;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 22827;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x425c0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 59376297;
          result[1] += 73606;
          result[2] += 956890;
          result[3] += 25394408;
          result[4] += 0;
          result[5] += 0;
          result[6] += 98142;
        } else {
          result[0] += 65554195;
          result[1] += 0;
          result[2] += 108103;
          result[3] += 20193805;
          result[4] += 0;
          result[5] += 0;
          result[6] += 43241;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 82098489;
          result[1] += 3800856;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
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
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
          result[0] += 40942678;
          result[1] += 0;
          result[2] += 0;
          result[3] += 43752470;
          result[4] += 1204196;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85382958;
          result[1] += 0;
          result[2] += 58301;
          result[3] += 445592;
          result[4] += 0;
          result[5] += 0;
          result[6] += 12493;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1049152;
          result[3] += 0;
          result[4] += 84850193;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 50903316;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 34996029;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x41480000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42340000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 73628010;
          result[4] += 12271335;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 78090314;
          result[1] += 0;
          result[2] += 7809031;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
          result[0] += 67403943;
          result[1] += 31598;
          result[2] += 305447;
          result[3] += 18084627;
          result[4] += 0;
          result[5] += 5266;
          result[6] += 68462;
        } else {
          result[0] += 15275731;
          result[1] += 0;
          result[2] += 1314423;
          result[3] += 60001652;
          result[4] += 9236488;
          result[5] += 71049;
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
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42f90000))) ) ) {
          result[0] += 0;
          result[1] += 742840;
          result[2] += 0;
          result[3] += 85156505;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 33612787;
          result[2] += 0;
          result[3] += 52286558;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x3f800000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 81857023;
          result[1] += 0;
          result[2] += 4042322;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41700000))) ) ) {
          result[0] += 394033;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 84323211;
          result[5] += 1182101;
          result[6] += 0;
        } else {
          result[0] += 107710;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85656996;
          result[4] += 0;
          result[5] += 134638;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42900000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 61356675;
          result[3] += 0;
          result[4] += 0;
          result[5] += 24542670;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 228607;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85670738;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42740000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
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
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 85600936;
          result[1] += 0;
          result[2] += 56839;
          result[3] += 241569;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 48161572;
          result[1] += 0;
          result[2] += 543175;
          result[3] += 37168732;
          result[4] += 0;
          result[5] += 0;
          result[6] += 25865;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 85835332;
          result[1] += 0;
          result[2] += 57611;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 6401;
        } else {
          result[0] += 44670117;
          result[1] += 593963;
          result[2] += 327703;
          result[3] += 40225635;
          result[4] += 0;
          result[5] += 0;
          result[6] += 81925;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x422c0000))) ) ) {
          result[0] += 85798952;
          result[1] += 0;
          result[2] += 87844;
          result[3] += 12549;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 33467277;
          result[1] += 0;
          result[2] += 0;
          result[3] += 52432068;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85327228;
          result[1] += 0;
          result[2] += 435898;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 136218;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 84922106;
          result[1] += 0;
          result[2] += 684067;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 293171;
        } else {
          result[0] += 85865208;
          result[1] += 0;
          result[2] += 34137;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 1869516;
          result[1] += 688769;
          result[2] += 196791;
          result[3] += 82972077;
          result[4] += 122994;
          result[5] += 49197;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1662044;
          result[3] += 22174111;
          result[4] += 61901038;
          result[5] += 162150;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 1986112;
          result[2] += 0;
          result[3] += 21350704;
          result[4] += 62562529;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3387198;
          result[4] += 82512147;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 85470706;
          result[1] += 42863;
          result[2] += 342911;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 42863;
        } else {
          result[0] += 61384692;
          result[1] += 0;
          result[2] += 0;
          result[3] += 24514653;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 83472525;
          result[1] += 0;
          result[2] += 808940;
          result[3] += 1415645;
          result[4] += 0;
          result[5] += 0;
          result[6] += 202235;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 101097;
          result[3] += 85798248;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 5735949;
          result[1] += 0;
          result[2] += 1189160;
          result[3] += 65823521;
          result[4] += 12800961;
          result[5] += 349753;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 56825721;
          result[4] += 29073624;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 85563943;
          result[1] += 0;
          result[2] += 54389;
          result[3] += 271948;
          result[4] += 0;
          result[5] += 0;
          result[6] += 9064;
        } else {
          result[0] += 48320305;
          result[1] += 0;
          result[2] += 769431;
          result[3] += 36624945;
          result[4] += 0;
          result[5] += 0;
          result[6] += 184663;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85653023;
          result[1] += 0;
          result[2] += 201536;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 44785;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
          result[0] += 52885579;
          result[1] += 136186;
          result[2] += 272372;
          result[3] += 26839999;
          result[4] += 5640371;
          result[5] += 56744;
          result[6] += 68093;
        } else {
          result[0] += 1435878;
          result[1] += 0;
          result[2] += 1604805;
          result[3] += 66979529;
          result[4] += 15879131;
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
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42f90000))) ) ) {
          result[0] += 0;
          result[1] += 490503;
          result[2] += 0;
          result[3] += 85408842;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 37580963;
          result[2] += 0;
          result[3] += 48318382;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x3f800000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 73352250;
          result[1] += 0;
          result[2] += 12547095;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
          result[0] += 3035709;
          result[1] += 0;
          result[2] += 0;
          result[3] += 80465050;
          result[4] += 2286151;
          result[5] += 112433;
          result[6] += 0;
        } else {
          result[0] += 81224551;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4674794;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41500000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 26879674;
          result[1] += 0;
          result[2] += 0;
          result[3] += 58961865;
          result[4] += 0;
          result[5] += 57805;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40200000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85507111;
          result[5] += 392234;
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420a0000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 30480413;
          result[2] += 52647986;
          result[3] += 0;
          result[4] += 0;
          result[5] += 2770946;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 85571798;
          result[1] += 0;
          result[2] += 245660;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 81886;
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42180000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 6073691;
          result[2] += 0;
          result[3] += 79825654;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85841559;
          result[1] += 0;
          result[2] += 57786;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 44552637;
          result[1] += 171309;
          result[2] += 599582;
          result[3] += 40514634;
          result[4] += 0;
          result[5] += 0;
          result[6] += 61181;
        } else {
          result[0] += 82915639;
          result[1] += 0;
          result[2] += 687037;
          result[3] += 2178891;
          result[4] += 0;
          result[5] += 0;
          result[6] += 117777;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420a0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40200000))) ) ) {
          result[0] += 84888765;
          result[1] += 0;
          result[2] += 1010580;
          result[3] += 0;
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
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 1084066;
          result[1] += 0;
          result[2] += 1393799;
          result[3] += 68915641;
          result[4] += 14505839;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 62610985;
          result[1] += 0;
          result[2] += 459913;
          result[3] += 22703015;
          result[4] += 0;
          result[5] += 0;
          result[6] += 125431;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42df0000))) ) ) {
          result[0] += 10336435;
          result[1] += 0;
          result[2] += 0;
          result[3] += 54771228;
          result[4] += 20791681;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1022611;
          result[1] += 3067833;
          result[2] += 0;
          result[3] += 16702650;
          result[4] += 65106250;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85605479;
          result[1] += 0;
          result[2] += 271261;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 22605;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 13808584;
          result[1] += 311004;
          result[2] += 373204;
          result[3] += 38284610;
          result[4] += 33121941;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 68728850;
          result[1] += 62494;
          result[2] += 796810;
          result[3] += 13405172;
          result[4] += 2812273;
          result[5] += 62494;
          result[6] += 31247;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41c00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 94498;
          result[3] += 85804847;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85365809;
          result[5] += 533536;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 4981433;
          result[1] += 0;
          result[2] += 0;
          result[3] += 80735665;
          result[4] += 91123;
          result[5] += 91123;
          result[6] += 0;
        } else {
          result[0] += 80297214;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3734754;
          result[4] += 0;
          result[5] += 1867377;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 77718455;
          result[3] += 0;
          result[4] += 0;
          result[5] += 8180890;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x43608000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x42240000))) ) ) {
          result[0] += 0;
          result[1] += 1550529;
          result[2] += 0;
          result[3] += 0;
          result[4] += 84348816;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 285379;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85613966;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
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
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x426c0000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
          result[0] += 0;
          result[1] += 898293;
          result[2] += 0;
          result[3] += 85001052;
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
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 85888545;
          result[1] += 0;
          result[2] += 10800;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 57983044;
          result[1] += 0;
          result[2] += 552407;
          result[3] += 27186334;
          result[4] += 0;
          result[5] += 39457;
          result[6] += 138101;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
          result[0] += 59481558;
          result[1] += 0;
          result[2] += 2824543;
          result[3] += 23593243;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 79418313;
          result[1] += 42475;
          result[2] += 162822;
          result[3] += 6268655;
          result[4] += 0;
          result[5] += 0;
          result[6] += 7079;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
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
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41700000))) ) ) {
          result[0] += 0;
          result[1] += 47392742;
          result[2] += 35544556;
          result[3] += 0;
          result[4] += 0;
          result[5] += 2962046;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 33038;
          result[2] += 462534;
          result[3] += 85271619;
          result[4] += 0;
          result[5] += 132152;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
          result[0] += 84736125;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1163220;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85817376;
          result[1] += 31876;
          result[2] += 50092;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bc0000))) ) ) {
          result[0] += 52591436;
          result[1] += 0;
          result[2] += 0;
          result[3] += 33307909;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 83602571;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2296773;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 2216757;
          result[1] += 1524020;
          result[2] += 1108378;
          result[3] += 81050189;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 79007353;
          result[1] += 26032;
          result[2] += 279844;
          result[3] += 6527543;
          result[4] += 0;
          result[5] += 0;
          result[6] += 58572;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
          result[0] += 30340297;
          result[1] += 0;
          result[2] += 0;
          result[3] += 55559048;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 82608183;
          result[1] += 0;
          result[2] += 3291162;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x43880000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x40200000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 85838400;
          result[1] += 0;
          result[2] += 60945;
          result[3] += 0;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85636924;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 262421;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 73754;
          result[1] += 565450;
          result[2] += 196678;
          result[3] += 79064767;
          result[4] += 5900355;
          result[5] += 98339;
          result[6] += 0;
        } else {
          result[0] += 85634581;
          result[1] += 49643;
          result[2] += 182025;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 33095;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x422c0000))) ) ) {
          result[0] += 81335856;
          result[1] += 0;
          result[2] += 695653;
          result[3] += 3700878;
          result[4] += 0;
          result[5] += 0;
          result[6] += 166956;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1067675;
          result[3] += 13200351;
          result[4] += 71582788;
          result[5] += 48530;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 0;
          result[1] += 143596;
          result[2] += 0;
          result[3] += 85755749;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 64424509;
          result[5] += 21474836;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41600000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43320000))) ) ) {
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41b40000))) ) ) {
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
          result[3] += 0;
          result[4] += 85864356;
          result[5] += 34989;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 53403;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85685732;
          result[4] += 0;
          result[5] += 160210;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 18790481;
          result[2] += 64424509;
          result[3] += 0;
          result[4] += 0;
          result[5] += 2684354;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41a80000))) ) ) {
          result[0] += 80846443;
          result[1] += 5052902;
          result[2] += 0;
          result[3] += 0;
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
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 85899345;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 85856277;
          result[1] += 0;
          result[2] += 38761;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 4306;
        } else {
          result[0] += 56064076;
          result[1] += 1311440;
          result[2] += 0;
          result[3] += 28523828;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 85884153;
          result[1] += 0;
          result[2] += 15192;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 60469935;
          result[1] += 112129;
          result[2] += 624722;
          result[3] += 24652511;
          result[4] += 0;
          result[5] += 0;
          result[6] += 40046;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42640000))) ) ) {
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
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
          result[0] += 311088;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85354940;
          result[4] += 0;
          result[5] += 233316;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 27141807;
          result[1] += 0;
          result[2] += 0;
          result[3] += 58578581;
          result[4] += 0;
          result[5] += 178956;
          result[6] += 0;
        } else {
          result[0] += 62073249;
          result[1] += 6270025;
          result[2] += 16929068;
          result[3] += 0;
          result[4] += 0;
          result[5] += 627002;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40900000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x40200000))) ) ) {
          result[0] += 85848487;
          result[1] += 0;
          result[2] += 50858;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85778133;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 121212;
        }
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0;
          result[1] += 4255075;
          result[2] += 5850729;
          result[3] += 75793540;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85660736;
          result[1] += 14913;
          result[2] += 193870;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 29826;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 70560176;
          result[1] += 0;
          result[2] += 1077005;
          result[3] += 14098980;
          result[4] += 0;
          result[5] += 0;
          result[6] += 163182;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 470939;
          result[3] += 85428406;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42990000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 84571005;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1328340;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 158583;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85053567;
          result[4] += 264305;
          result[5] += 422889;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 84685220;
          result[1] += 70588;
          result[2] += 204707;
          result[3] += 910593;
          result[4] += 0;
          result[5] += 0;
          result[6] += 28235;
        } else {
          result[0] += 85882628;
          result[1] += 0;
          result[2] += 0;
          result[3] += 16717;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 43917552;
          result[1] += 0;
          result[2] += 2238222;
          result[3] += 39743570;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 12572192;
          result[1] += 1723092;
          result[2] += 382909;
          result[3] += 71221151;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x41180000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
          result[0] += 77309411;
          result[1] += 0;
          result[2] += 5726623;
          result[3] += 0;
          result[4] += 2863311;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 30373090;
          result[1] += 0;
          result[2] += 659661;
          result[3] += 45258486;
          result[4] += 9522064;
          result[5] += 28680;
          result[6] += 57361;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41f80000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 57266230;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x43880000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420e0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 85434396;
          result[1] += 0;
          result[2] += 464949;
          result[3] += 0;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 85442920;
          result[1] += 0;
          result[2] += 273855;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 182570;
        } else {
          result[0] += 85888665;
          result[1] += 0;
          result[2] += 10680;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 62466196;
          result[1] += 186506;
          result[2] += 666092;
          result[3] += 20062719;
          result[4] += 2331325;
          result[5] += 93253;
          result[6] += 93253;
        } else {
          result[0] += 0;
          result[1] += 282099;
          result[2] += 1269448;
          result[3] += 69713878;
          result[4] += 14563394;
          result[5] += 70524;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 59266484;
          result[1] += 0;
          result[2] += 47814;
          result[3] += 24026953;
          result[4] += 2510278;
          result[5] += 47814;
          result[6] += 0;
        } else {
          result[0] += 30891406;
          result[1] += 0;
          result[2] += 50558;
          result[3] += 43278304;
          result[4] += 11577957;
          result[5] += 0;
          result[6] += 101117;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 13267499;
          result[1] += 370255;
          result[2] += 740511;
          result[3] += 71521078;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 3325135;
          result[2] += 0;
          result[3] += 82574209;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 28633115;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 14316557;
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
          result[0] += 179555;
          result[1] += 0;
          result[2] += 179555;
          result[3] += 85360679;
          result[4] += 0;
          result[5] += 179555;
          result[6] += 0;
        } else {
          result[0] += 83153704;
          result[1] += 0;
          result[2] += 2745641;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2386092;
          result[4] += 83513252;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 31347154;
          result[4] += 54552191;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 73628010;
          result[2] += 0;
          result[3] += 12271335;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 85801899;
          result[1] += 0;
          result[2] += 97446;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 84295891;
          result[1] += 0;
          result[2] += 1145324;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 458129;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 84944908;
          result[1] += 0;
          result[2] += 954437;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85873967;
          result[1] += 0;
          result[2] += 25378;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 82074553;
          result[1] += 105657;
          result[2] += 729035;
          result[3] += 2916140;
          result[4] += 0;
          result[5] += 0;
          result[6] += 73960;
        } else {
          result[0] += 0;
          result[1] += 91188;
          result[2] += 273564;
          result[3] += 85534592;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41300000))) ) ) {
          result[0] += 26406670;
          result[1] += 1553333;
          result[2] += 0;
          result[3] += 57939341;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 877803;
          result[3] += 84896141;
          result[4] += 0;
          result[5] += 125400;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41dc0000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85605058;
          result[4] += 228890;
          result[5] += 65397;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 5883516;
          result[4] += 80015829;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 75161927;
          result[1] += 4601750;
          result[2] += 0;
          result[3] += 4601750;
          result[4] += 0;
          result[5] += 1533916;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42020000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41b80000))) ) ) {
          result[0] += 0;
          result[1] += 16106127;
          result[2] += 10737418;
          result[3] += 59055800;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 97502;
          result[3] += 85606839;
          result[4] += 0;
          result[5] += 195004;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 85483843;
          result[1] += 22829;
          result[2] += 27395;
          result[3] += 351578;
          result[4] += 0;
          result[5] += 0;
          result[6] += 13697;
        } else {
          result[0] += 47542901;
          result[1] += 202817;
          result[2] += 298261;
          result[3] += 37831503;
          result[4] += 0;
          result[5] += 0;
          result[6] += 23860;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40200000))) ) ) {
          result[0] += 85561401;
          result[1] += 0;
          result[2] += 184333;
          result[3] += 122888;
          result[4] += 0;
          result[5] += 0;
          result[6] += 30722;
        } else {
          result[0] += 84528793;
          result[1] += 0;
          result[2] += 262689;
          result[3] += 1073599;
          result[4] += 0;
          result[5] += 0;
          result[6] += 34263;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 653226;
          result[2] += 415689;
          result[3] += 78001238;
          result[4] += 6829190;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 741424;
          result[3] += 4766301;
          result[4] += 80391619;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x421c0000))) ) ) {
          result[0] += 85849112;
          result[1] += 0;
          result[2] += 50233;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 84089473;
          result[1] += 139220;
          result[2] += 1670651;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 61754179;
          result[1] += 0;
          result[2] += 314156;
          result[3] += 23427094;
          result[4] += 44879;
          result[5] += 134638;
          result[6] += 224397;
        } else {
          result[0] += 82114622;
          result[1] += 158522;
          result[2] += 128799;
          result[3] += 3457770;
          result[4] += 39630;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 82912671;
          result[1] += 0;
          result[2] += 64927;
          result[3] += 2856818;
          result[4] += 0;
          result[5] += 64927;
          result[6] += 0;
        } else {
          result[0] += 85865301;
          result[1] += 0;
          result[2] += 22696;
          result[3] += 0;
          result[4] += 5674;
          result[5] += 5674;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41700000))) ) ) {
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
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
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
          result[2] += 970248;
          result[3] += 84929097;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42420000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 60129542;
          result[5] += 25769803;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x41d00000))) ) ) {
          result[0] += 85400326;
          result[1] += 0;
          result[2] += 362923;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 136096;
        } else {
          result[0] += 68719476;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 17179869;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
          result[0] += 28633115;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 57266230;
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
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
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
          result[2] += 529262;
          result[3] += 85264230;
          result[4] += 0;
          result[5] += 105852;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 27331610;
          result[4] += 58567735;
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
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 1166534;
          result[2] += 0;
          result[3] += 0;
          result[4] += 84732811;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 84757826;
          result[1] += 0;
          result[2] += 1141519;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85787464;
          result[1] += 0;
          result[2] += 103275;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 8606;
        }
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 10337457;
          result[1] += 2461299;
          result[2] += 1599844;
          result[3] += 71500744;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 84180722;
          result[1] += 21217;
          result[2] += 434960;
          result[3] += 1145748;
          result[4] += 0;
          result[5] += 0;
          result[6] += 116696;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
          result[0] += 0;
          result[1] += 13215283;
          result[2] += 66076419;
          result[3] += 6607641;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 184597;
          result[3] += 85714748;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43320000))) ) ) {
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 128080;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85600491;
          result[4] += 128080;
          result[5] += 42693;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2063647;
          result[3] += 0;
          result[4] += 83663727;
          result[5] += 171970;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 85439320;
          result[1] += 0;
          result[2] += 334564;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 125461;
        } else {
          result[0] += 85874352;
          result[1] += 0;
          result[2] += 24993;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41700000))) ) ) {
          result[0] += 51109910;
          result[1] += 93412;
          result[2] += 507095;
          result[3] += 34082170;
          result[4] += 0;
          result[5] += 0;
          result[6] += 106756;
        } else {
          result[0] += 71706633;
          result[1] += 92884;
          result[2] += 650189;
          result[3] += 13375330;
          result[4] += 0;
          result[5] += 37153;
          result[6] += 37153;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 61717597;
          result[1] += 0;
          result[2] += 0;
          result[3] += 24181748;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 183938;
          result[1] += 0;
          result[2] += 0;
          result[3] += 82036634;
          result[4] += 3678772;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 3904515;
          result[1] += 7809031;
          result[2] += 0;
          result[3] += 74185798;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 11165935;
          result[1] += 979468;
          result[2] += 587680;
          result[3] += 73166261;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 236637;
          result[2] += 0;
          result[3] += 9938767;
          result[4] += 75723941;
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
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 4114938;
          result[1] += 0;
          result[2] += 4372122;
          result[3] += 76897917;
          result[4] += 514367;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 653905;
          result[2] += 0;
          result[3] += 85245440;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ae0000))) ) ) {
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
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 16106127;
          result[1] += 64424509;
          result[2] += 0;
          result[3] += 5368709;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 84644669;
          result[1] += 12546;
          result[2] += 33458;
          result[3] += 1145938;
          result[4] += 46004;
          result[5] += 8364;
          result[6] += 8364;
        } else {
          result[0] += 74853287;
          result[1] += 0;
          result[2] += 0;
          result[3] += 11046058;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 61740154;
          result[1] += 0;
          result[2] += 24159191;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 124132;
          result[3] += 0;
          result[4] += 85775213;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 44333858;
          result[1] += 146404;
          result[2] += 372665;
          result[3] += 40993180;
          result[4] += 0;
          result[5] += 13309;
          result[6] += 39928;
        } else {
          result[0] += 84725068;
          result[1] += 0;
          result[2] += 177073;
          result[3] += 959925;
          result[4] += 0;
          result[5] += 0;
          result[6] += 37278;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 83964005;
          result[4] += 1414287;
          result[5] += 521053;
          result[6] += 0;
        } else {
          result[0] += 8852222;
          result[1] += 0;
          result[2] += 9835802;
          result[3] += 22622346;
          result[4] += 44588973;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
          result[0] += 179611;
          result[1] += 538835;
          result[2] += 0;
          result[3] += 65154182;
          result[4] += 20026716;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42920000))) ) ) {
          result[0] += 85751958;
          result[1] += 0;
          result[2] += 73693;
          result[3] += 73693;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 5368709;
          result[1] += 0;
          result[2] += 0;
          result[3] += 80530636;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 17228059;
          result[1] += 0;
          result[2] += 0;
          result[3] += 68671286;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 58195167;
          result[1] += 0;
          result[2] += 0;
          result[3] += 27704178;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6676114;
          result[3] += 0;
          result[4] += 79223230;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 82527438;
          result[1] += 0;
          result[2] += 1938846;
          result[3] += 0;
          result[4] += 842976;
          result[5] += 0;
          result[6] += 590083;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41080000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 4595438;
          result[1] += 0;
          result[2] += 0;
          result[3] += 81303907;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 29205777;
          result[1] += 520602;
          result[2] += 1093264;
          result[3] += 55079701;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 58236;
          result[1] += 0;
          result[2] += 873552;
          result[3] += 48627765;
          result[4] += 36223317;
          result[5] += 116473;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 83310416;
          result[1] += 59006;
          result[2] += 132765;
          result[3] += 2367653;
          result[4] += 0;
          result[5] += 0;
          result[6] += 29503;
        } else {
          result[0] += 75327225;
          result[1] += 0;
          result[2] += 96928;
          result[3] += 10468268;
          result[4] += 0;
          result[5] += 0;
          result[6] += 6923;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 85899345;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 1677721;
          result[1] += 2684354;
          result[2] += 0;
          result[3] += 15435038;
          result[4] += 66102231;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 318145;
          result[2] += 0;
          result[3] += 3499602;
          result[4] += 82081597;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x41080000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 41781655;
          result[1] += 0;
          result[2] += 934414;
          result[3] += 42115374;
          result[4] += 1067901;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 11147765;
          result[1] += 478738;
          result[2] += 307760;
          result[3] += 44625257;
          result[4] += 29339824;
          result[5] += 0;
          result[6] += 0;
        }
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
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423e0000))) ) ) {
          result[0] += 84695236;
          result[1] += 14819;
          result[2] += 44459;
          result[3] += 1107781;
          result[4] += 14819;
          result[5] += 7409;
          result[6] += 14819;
        } else {
          result[0] += 79623746;
          result[1] += 99612;
          result[2] += 149419;
          result[3] += 5960159;
          result[4] += 0;
          result[5] += 0;
          result[6] += 66408;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85334749;
          result[4] += 161313;
          result[5] += 403283;
          result[6] += 0;
        } else {
          result[0] += 11384250;
          result[1] += 0;
          result[2] += 9314386;
          result[3] += 0;
          result[4] += 64683242;
          result[5] += 517465;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
          result[0] += 25381929;
          result[1] += 0;
          result[2] += 0;
          result[3] += 60517416;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 66860087;
          result[1] += 0;
          result[2] += 0;
          result[3] += 19039258;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d90000))) ) ) {
          result[0] += 68450644;
          result[1] += 0;
          result[2] += 963736;
          result[3] += 76084;
          result[4] += 16282072;
          result[5] += 25361;
          result[6] += 101445;
        } else {
          result[0] += 83522057;
          result[1] += 0;
          result[2] += 316971;
          result[3] += 0;
          result[4] += 2060316;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 48177753;
          result[1] += 0;
          result[2] += 0;
          result[3] += 37721592;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 14102877;
          result[1] += 0;
          result[2] += 3846239;
          result[3] += 6410398;
          result[4] += 61539829;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
          result[0] += 1091940;
          result[1] += 4003783;
          result[2] += 0;
          result[3] += 20018915;
          result[4] += 60784706;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 11018812;
          result[1] += 0;
          result[2] += 0;
          result[3] += 51184161;
          result[4] += 23696371;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 405185;
          result[1] += 495226;
          result[2] += 585268;
          result[3] += 58931993;
          result[4] += 25481671;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 84724252;
          result[1] += 0;
          result[2] += 1175093;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 34359738;
          result[4] += 51539607;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 372396;
          result[2] += 0;
          result[3] += 5461808;
          result[4] += 80065141;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 85568645;
          result[1] += 0;
          result[2] += 206687;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 124012;
        } else {
          result[0] += 85881582;
          result[1] += 0;
          result[2] += 17763;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 34607591;
          result[1] += 195069;
          result[2] += 699954;
          result[3] += 49788573;
          result[4] += 527834;
          result[5] += 68847;
          result[6] += 11474;
        } else {
          result[0] += 82919663;
          result[1] += 0;
          result[2] += 333546;
          result[3] += 2579426;
          result[4] += 0;
          result[5] += 0;
          result[6] += 66709;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x42ec0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
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
          result[3] += 0;
          result[4] += 85899345;
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
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 2321603;
          result[1] += 0;
          result[2] += 0;
          result[3] += 83577741;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1069286;
          result[1] += 3920717;
          result[2] += 0;
          result[3] += 1069286;
          result[4] += 79840055;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
          result[0] += 83124330;
          result[1] += 0;
          result[2] += 2775015;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 6724443;
          result[1] += 347068;
          result[2] += 0;
          result[3] += 78697683;
          result[4] += 130150;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 26286138;
          result[1] += 0;
          result[2] += 0;
          result[3] += 8449115;
          result[4] += 51164091;
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
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42220000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 10737418;
          result[1] += 0;
          result[2] += 75161927;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b40000))) ) ) {
          result[0] += 26100185;
          result[1] += 0;
          result[2] += 0;
          result[3] += 58477631;
          result[4] += 660764;
          result[5] += 660764;
          result[6] += 0;
        } else {
          result[0] += 85197872;
          result[1] += 16602;
          result[2] += 20753;
          result[3] += 659965;
          result[4] += 0;
          result[5] += 0;
          result[6] += 4150;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 901492;
          result[3] += 0;
          result[4] += 84997853;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53001724;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 32897621;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 57851634;
          result[1] += 275483;
          result[2] += 464879;
          result[3] += 24518073;
          result[4] += 2617097;
          result[5] += 103306;
          result[6] += 68870;
        } else {
          result[0] += 120054;
          result[1] += 0;
          result[2] += 540247;
          result[3] += 84938905;
          result[4] += 210096;
          result[5] += 90041;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 79724375;
          result[1] += 0;
          result[2] += 427968;
          result[3] += 5747002;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85519644;
          result[1] += 0;
          result[2] += 216972;
          result[3] += 108486;
          result[4] += 0;
          result[5] += 0;
          result[6] += 54243;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 84257957;
          result[1] += 0;
          result[2] += 1641388;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 11121202;
          result[1] += 750510;
          result[2] += 0;
          result[3] += 70206852;
          result[4] += 3820781;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 330700;
          result[1] += 661400;
          result[2] += 0;
          result[3] += 66636066;
          result[4] += 18271179;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40a00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4163719;
          result[4] += 81735626;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 19422094;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 66477251;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42220000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 10737418;
          result[1] += 0;
          result[2] += 75161927;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 85440882;
          result[1] += 0;
          result[2] += 333427;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 125035;
        } else {
          result[0] += 85870895;
          result[1] += 0;
          result[2] += 28450;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 59597680;
          result[1] += 182144;
          result[2] += 309645;
          result[3] += 25664159;
          result[4] += 18214;
          result[5] += 72857;
          result[6] += 54643;
        } else {
          result[0] += 76145956;
          result[1] += 0;
          result[2] += 1042815;
          result[3] += 5479891;
          result[4] += 3005761;
          result[5] += 61342;
          result[6] += 163578;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 84796;
          result[2] += 763172;
          result[3] += 85051376;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 8323580;
          result[1] += 0;
          result[2] += 0;
          result[3] += 74745748;
          result[4] += 2830017;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 24542670;
          result[1] += 651575;
          result[2] += 0;
          result[3] += 56578456;
          result[4] += 4126643;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
          result[0] += 59822758;
          result[1] += 0;
          result[2] += 26076587;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85465510;
          result[5] += 433835;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41d00000))) ) ) {
          result[0] += 11713547;
          result[1] += 0;
          result[2] += 0;
          result[3] += 74185798;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85759262;
          result[1] += 0;
          result[2] += 74711;
          result[3] += 46694;
          result[4] += 0;
          result[5] += 0;
          result[6] += 18677;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 28633115;
          result[1] += 0;
          result[2] += 0;
          result[3] += 57266230;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 84384523;
          result[1] += 0;
          result[2] += 1336608;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 178214;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 392832;
          result[1] += 392832;
          result[2] += 851136;
          result[3] += 80727052;
          result[4] += 3535491;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 84042062;
          result[1] += 154773;
          result[2] += 1392962;
          result[3] += 309547;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41280000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 5052902;
          result[2] += 0;
          result[3] += 80846443;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 85530151;
          result[1] += 0;
          result[2] += 76183;
          result[3] += 269570;
          result[4] += 17580;
          result[5] += 0;
          result[6] += 5860;
        } else {
          result[0] += 1252177;
          result[1] += 250435;
          result[2] += 0;
          result[3] += 17154825;
          result[4] += 67241907;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 36007289;
          result[1] += 121441;
          result[2] += 647685;
          result[3] += 46552425;
          result[4] += 2388341;
          result[5] += 101200;
          result[6] += 80960;
        } else {
          result[0] += 84654229;
          result[1] += 0;
          result[2] += 109460;
          result[3] += 1135655;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
          result[0] += 85784336;
          result[1] += 0;
          result[2] += 89451;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 25557;
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
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
          result[0] += 49709122;
          result[1] += 0;
          result[2] += 514824;
          result[3] += 31423334;
          result[4] += 4252065;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 74499348;
          result[1] += 116178;
          result[2] += 363057;
          result[3] += 10688405;
          result[4] += 87133;
          result[5] += 43566;
          result[6] += 101656;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85772087;
          result[5] += 127258;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 55152;
          result[2] += 937585;
          result[3] += 84879032;
          result[4] += 0;
          result[5] += 27576;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
          result[0] += 11438857;
          result[1] += 1294965;
          result[2] += 269784;
          result[3] += 72895738;
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
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42400000))) ) ) {
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
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
          result[0] += 83356636;
          result[1] += 0;
          result[2] += 2542709;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 6628741;
          result[1] += 1051455;
          result[2] += 0;
          result[3] += 78219148;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x43880000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 85722517;
          result[1] += 0;
          result[2] += 157180;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 19647;
        } else {
          result[0] += 85879754;
          result[1] += 0;
          result[2] += 19591;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 291184;
          result[2] += 0;
          result[3] += 21159386;
          result[4] += 64448774;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 34032843;
          result[1] += 89560;
          result[2] += 570945;
          result[3] += 49493158;
          result[4] += 1589692;
          result[5] += 89560;
          result[6] += 33585;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42100000))) ) ) {
          result[0] += 85142428;
          result[1] += 0;
          result[2] += 497403;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 259514;
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
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 85860826;
          result[1] += 0;
          result[2] += 38519;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 20187701;
          result[1] += 0;
          result[2] += 2438782;
          result[3] += 38343083;
          result[4] += 24929778;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
          result[0] += 63509135;
          result[1] += 0;
          result[2] += 291623;
          result[3] += 22001379;
          result[4] += 0;
          result[5] += 0;
          result[6] += 97207;
        } else {
          result[0] += 11700251;
          result[1] += 0;
          result[2] += 780016;
          result[3] += 64838893;
          result[4] += 8287678;
          result[5] += 292506;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 80716497;
          result[1] += 50978;
          result[2] += 59475;
          result[3] += 951605;
          result[4] += 4120789;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 84412133;
          result[1] += 0;
          result[2] += 34188;
          result[3] += 1401740;
          result[4] += 34188;
          result[5] += 0;
          result[6] += 17094;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 34515497;
          result[1] += 248551;
          result[2] += 629663;
          result[3] += 47291036;
          result[4] += 3115176;
          result[5] += 16570;
          result[6] += 82850;
        } else {
          result[0] += 84703561;
          result[1] += 0;
          result[2] += 91983;
          result[3] += 1077519;
          result[4] += 0;
          result[5] += 0;
          result[6] += 26280;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40e00000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 27760154;
          result[1] += 0;
          result[2] += 1833217;
          result[3] += 56305973;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x42240000))) ) ) {
          result[0] += 17179869;
          result[1] += 27487790;
          result[2] += 0;
          result[3] += 41231686;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 77596;
          result[1] += 1008754;
          result[2] += 0;
          result[3] += 84812994;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 14996104;
          result[1] += 0;
          result[2] += 621958;
          result[3] += 40496393;
          result[4] += 29370251;
          result[5] += 414638;
          result[6] += 0;
        } else {
          result[0] += 1053979;
          result[1] += 0;
          result[2] += 0;
          result[3] += 21343089;
          result[4] += 63502277;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 365307;
          result[3] += 84699051;
          result[4] += 834987;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 50107951;
          result[4] += 35791394;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42aa0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bc0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x43608000))) ) ) {
          result[0] += 0;
          result[1] += 358162;
          result[2] += 0;
          result[3] += 537243;
          result[4] += 85003939;
          result[5] += 0;
          result[6] += 0;
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
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x3f800000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42100000))) ) ) {
          result[0] += 0;
          result[1] += 1316465;
          result[2] += 548527;
          result[3] += 84034353;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85757831;
          result[1] += 141514;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 85257802;
          result[1] += 42974;
          result[2] += 107435;
          result[3] += 469646;
          result[4] += 0;
          result[5] += 0;
          result[6] += 21487;
        } else {
          result[0] += 73830842;
          result[1] += 0;
          result[2] += 2484691;
          result[3] += 9583811;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 22312295;
          result[1] += 0;
          result[2] += 897277;
          result[3] += 62689773;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 43720428;
          result[1] += 0;
          result[2] += 26577;
          result[3] += 42152339;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
          result[0] += 80431373;
          result[1] += 0;
          result[2] += 680660;
          result[3] += 4719245;
          result[4] += 0;
          result[5] += 0;
          result[6] += 68066;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85198126;
          result[4] += 0;
          result[5] += 701219;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42100000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d40000))) ) ) {
          result[0] += 0;
          result[1] += 338757;
          result[2] += 822697;
          result[3] += 84641101;
          result[4] += 96787;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 4367763;
          result[2] += 0;
          result[3] += 727960;
          result[4] += 80803621;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 83901686;
          result[1] += 1997659;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
          result[0] += 11044201;
          result[1] += 0;
          result[2] += 0;
          result[3] += 74855144;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 37211457;
          result[1] += 0;
          result[2] += 3129935;
          result[3] += 45557952;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 85035167;
          result[1] += 0;
          result[2] += 864178;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85871721;
          result[1] += 0;
          result[2] += 27623;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 85819883;
          result[1] += 0;
          result[2] += 79462;
          result[3] += 0;
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
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 3575113;
          result[1] += 483123;
          result[2] += 579748;
          result[3] += 75125693;
          result[4] += 5894105;
          result[5] += 241561;
          result[6] += 0;
        } else {
          result[0] += 84426169;
          result[1] += 0;
          result[2] += 491058;
          result[3] += 850369;
          result[4] += 0;
          result[5] += 0;
          result[6] += 131747;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
          result[0] += 0;
          result[1] += 165350;
          result[2] += 0;
          result[3] += 85375737;
          result[4] += 330700;
          result[5] += 27558;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3303820;
          result[3] += 0;
          result[4] += 82595524;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 1227133;
          result[1] += 0;
          result[2] += 0;
          result[3] += 409044;
          result[4] += 84263167;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 14693309;
          result[2] += 0;
          result[3] += 33907636;
          result[4] += 37298400;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85700274;
          result[4] += 199071;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 83467314;
          result[1] += 1264656;
          result[2] += 1167375;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42740000))) ) ) {
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
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4266523;
          result[4] += 81632822;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 4386349;
          result[1] += 0;
          result[2] += 1462116;
          result[3] += 25221510;
          result[4] += 54829369;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 85548345;
          result[1] += 0;
          result[2] += 351000;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85870355;
          result[1] += 0;
          result[2] += 28990;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 85578825;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 320519;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41500000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85636656;
          result[5] += 262689;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 1963413;
          result[2] += 0;
          result[3] += 83935932;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
          result[0] += 57753216;
          result[1] += 82539;
          result[2] += 396191;
          result[3] += 27576603;
          result[4] += 0;
          result[5] += 16507;
          result[6] += 74285;
        } else {
          result[0] += 1162547;
          result[1] += 0;
          result[2] += 516687;
          result[3] += 73692596;
          result[4] += 10075412;
          result[5] += 452101;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43320000))) ) ) {
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 640001;
          result[3] += 83255861;
          result[4] += 1697395;
          result[5] += 306087;
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
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1952257;
          result[4] += 83947088;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 484091;
          result[2] += 0;
          result[3] += 9412890;
          result[4] += 76002364;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x40200000))) ) ) {
          result[0] += 85512605;
          result[1] += 0;
          result[2] += 386740;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 83870227;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 2029118;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 85866122;
          result[1] += 0;
          result[2] += 33223;
          result[3] += 0;
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
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 85020174;
          result[1] += 245014;
          result[2] += 562093;
          result[3] += 43237;
          result[4] += 0;
          result[5] += 0;
          result[6] += 28825;
        } else {
          result[0] += 1441264;
          result[1] += 2594275;
          result[2] += 0;
          result[3] += 81863806;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41700000))) ) ) {
          result[0] += 28610408;
          result[1] += 0;
          result[2] += 772026;
          result[3] += 56494203;
          result[4] += 0;
          result[5] += 0;
          result[6] += 22706;
        } else {
          result[0] += 50076096;
          result[1] += 0;
          result[2] += 600694;
          result[3] += 35222554;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 85226505;
          result[1] += 0;
          result[2] += 672840;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85856001;
          result[1] += 0;
          result[2] += 33342;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 10002;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 394033;
          result[1] += 492542;
          result[2] += 0;
          result[3] += 16352398;
          result[4] += 68660371;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 2268261;
          result[1] += 176747;
          result[2] += 1443438;
          result[3] += 73350264;
          result[4] += 8454428;
          result[5] += 206205;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 84750958;
          result[1] += 0;
          result[2] += 382795;
          result[3] += 645284;
          result[4] += 0;
          result[5] += 0;
          result[6] += 120307;
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
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0;
          result[1] += 1363481;
          result[2] += 0;
          result[3] += 84535864;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
          result[0] += 76435858;
          result[1] += 0;
          result[2] += 9463487;
          result[3] += 0;
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
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 5016020;
          result[2] += 0;
          result[3] += 80883325;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41500000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
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
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40900000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42060000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 85468124;
          result[1] += 0;
          result[2] += 301855;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 129366;
        } else {
          result[0] += 85866162;
          result[1] += 0;
          result[2] += 33183;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 1679534;
          result[1] += 375685;
          result[2] += 817668;
          result[3] += 81258527;
          result[4] += 1657435;
          result[5] += 110495;
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 589248;
          result[2] += 0;
          result[3] += 20558227;
          result[4] += 64751869;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
          result[0] += 84994531;
          result[1] += 0;
          result[2] += 440806;
          result[3] += 359605;
          result[4] += 0;
          result[5] += 0;
          result[6] += 104401;
        } else {
          result[0] += 74773828;
          result[1] += 129366;
          result[2] += 2069863;
          result[3] += 8926287;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42100000))) ) ) {
          result[0] += 0;
          result[1] += 622459;
          result[2] += 474254;
          result[3] += 77362764;
          result[4] += 7439867;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85638385;
          result[1] += 130480;
          result[2] += 130480;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42940000))) ) ) {
          result[0] += 70007966;
          result[1] += 0;
          result[2] += 6442450;
          result[3] += 9448928;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2850992;
          result[4] += 83048353;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41980000))) ) ) {
          result[0] += 84998748;
          result[1] += 0;
          result[2] += 58734;
          result[3] += 841862;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1333840;
          result[1] += 0;
          result[2] += 0;
          result[3] += 84298736;
          result[4] += 0;
          result[5] += 266768;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
          result[0] += 85042530;
          result[1] += 43566;
          result[2] += 87133;
          result[3] += 706751;
          result[4] += 0;
          result[5] += 0;
          result[6] += 19363;
        } else {
          result[0] += 0;
          result[1] += 258732;
          result[2] += 0;
          result[3] += 83053283;
          result[4] += 1034931;
          result[5] += 1552397;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42440000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85656004;
          result[4] += 189265;
          result[5] += 54075;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3430891;
          result[3] += 0;
          result[4] += 82468454;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 84984676;
          result[1] += 0;
          result[2] += 636291;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 278377;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40b00000))) ) ) {
          result[0] += 251167;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85522594;
          result[5] += 125583;
          result[6] += 0;
        } else {
          result[0] += 69860048;
          result[1] += 0;
          result[2] += 0;
          result[3] += 16039296;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41700000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 16967772;
          result[3] += 0;
          result[4] += 65750116;
          result[5] += 3181457;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 266033;
          result[3] += 85603752;
          result[4] += 0;
          result[5] += 29559;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 83472810;
          result[4] += 2426535;
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
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 23622320;
          result[4] += 62277025;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 264957;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85634388;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 85811224;
          result[1] += 18551;
          result[2] += 41741;
          result[3] += 23189;
          result[4] += 0;
          result[5] += 0;
          result[6] += 4637;
        } else {
          result[0] += 73407237;
          result[1] += 0;
          result[2] += 0;
          result[3] += 12492108;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 79303783;
          result[1] += 372963;
          result[2] += 530000;
          result[3] += 5574820;
          result[4] += 0;
          result[5] += 0;
          result[6] += 117777;
        } else {
          result[0] += 338186;
          result[1] += 0;
          result[2] += 422733;
          result[3] += 85138426;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x42740000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85418565;
          result[1] += 0;
          result[2] += 270438;
          result[3] += 170276;
          result[4] += 0;
          result[5] += 0;
          result[6] += 40064;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x424c0000))) ) ) {
          result[0] += 79479243;
          result[1] += 0;
          result[2] += 0;
          result[3] += 6420102;
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
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42220000))) ) ) {
          result[0] += 85783823;
          result[1] += 0;
          result[2] += 115522;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85875691;
          result[1] += 0;
          result[2] += 23653;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40900000))) ) ) {
          result[0] += 85852988;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 46356;
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
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 2004067;
          result[1] += 475966;
          result[2] += 776576;
          result[3] += 81114634;
          result[4] += 1427898;
          result[5] += 100203;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 484312;
          result[2] += 0;
          result[3] += 13340595;
          result[4] += 72074438;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 84783769;
          result[1] += 0;
          result[2] += 342404;
          result[3] += 673763;
          result[4] += 0;
          result[5] += 0;
          result[6] += 99407;
        } else {
          result[0] += 75836851;
          result[1] += 0;
          result[2] += 3435973;
          result[3] += 6626520;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 0;
          result[1] += 56624;
          result[2] += 0;
          result[3] += 85842721;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 74446099;
          result[5] += 11453246;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14109071;
          result[3] += 0;
          result[4] += 71790274;
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
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41600000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40e00000))) ) ) {
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
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 757060;
          result[3] += 84844868;
          result[4] += 0;
          result[5] += 297416;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 78741067;
          result[2] += 0;
          result[3] += 7158278;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420a0000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 84983274;
          result[1] += 0;
          result[2] += 704670;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 211401;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85830183;
          result[1] += 0;
          result[2] += 69162;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
          result[0] += 42838691;
          result[1] += 1553734;
          result[2] += 0;
          result[3] += 41506919;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 81638721;
          result[1] += 139516;
          result[2] += 633191;
          result[3] += 3402060;
          result[4] += 0;
          result[5] += 0;
          result[6] += 85856;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
          result[0] += 0;
          result[1] += 90167;
          result[2] += 0;
          result[3] += 85809178;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85554368;
          result[1] += 0;
          result[2] += 287481;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 57496;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 85832124;
          result[1] += 0;
          result[2] += 67221;
          result[3] += 0;
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
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 1831859;
          result[1] += 717890;
          result[2] += 618871;
          result[3] += 80824600;
          result[4] += 1708084;
          result[5] += 198038;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 343597;
          result[2] += 0;
          result[3] += 12240656;
          result[4] += 73315091;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42000000))) ) ) {
          result[0] += 84597485;
          result[1] += 0;
          result[2] += 504324;
          result[3] += 774079;
          result[4] += 0;
          result[5] += 0;
          result[6] += 23456;
        } else {
          result[0] += 80696991;
          result[1] += 0;
          result[2] += 1330834;
          result[3] += 3145609;
          result[4] += 0;
          result[5] += 0;
          result[6] += 725909;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40200000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 84109776;
          result[5] += 1789569;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42cf0000))) ) ) {
          result[0] += 0;
          result[1] += 144709;
          result[2] += 0;
          result[3] += 85725694;
          result[4] += 0;
          result[5] += 28941;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
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
