
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
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45cb4000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x445ae000))) ) ) {
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420a0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 53545236;
          result[1] += 0;
          result[2] += 141854;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53612023;
          result[1] += 0;
          result[2] += 68243;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 6824;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 52336157;
          result[1] += 141764;
          result[2] += 158442;
          result[3] += 1000691;
          result[4] += 0;
          result[5] += 0;
          result[6] += 50034;
        } else {
          result[0] += 36126803;
          result[1] += 0;
          result[2] += 0;
          result[3] += 17462911;
          result[4] += 0;
          result[5] += 97376;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
          result[0] += 7093789;
          result[1] += 161222;
          result[2] += 756505;
          result[3] += 35208512;
          result[4] += 10442257;
          result[5] += 24803;
          result[6] += 0;
        } else {
          result[0] += 205304;
          result[1] += 564587;
          result[2] += 0;
          result[3] += 6210457;
          result[4] += 46706742;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 0;
          result[1] += 105268;
          result[2] += 0;
          result[3] += 53581822;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 35791394;
          result[5] += 17895697;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7629218;
          result[3] += 0;
          result[4] += 46057872;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 205304;
          result[3] += 0;
          result[4] += 53379134;
          result[5] += 102652;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
          result[0] += 182609;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53321872;
          result[5] += 182609;
          result[6] += 0;
        } else {
          result[0] += 7527611;
          result[1] += 21144;
          result[2] += 105724;
          result[3] += 45969175;
          result[4] += 0;
          result[5] += 63434;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 53441926;
          result[1] += 31131;
          result[2] += 103124;
          result[3] += 99233;
          result[4] += 0;
          result[5] += 0;
          result[6] += 11674;
        } else {
          result[0] += 39658833;
          result[1] += 0;
          result[2] += 1160231;
          result[3] += 12868025;
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 664408;
          result[1] += 0;
          result[2] += 505528;
          result[3] += 42652133;
          result[4] += 9865021;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 49328729;
          result[1] += 0;
          result[2] += 371451;
          result[3] += 3541168;
          result[4] += 297161;
          result[5] += 99053;
          result[6] += 49526;
        }
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40900000))) ) ) {
          result[0] += 43116575;
          result[1] += 0;
          result[2] += 0;
          result[3] += 10570515;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 27993983;
          result[1] += 0;
          result[2] += 1342177;
          result[3] += 24350930;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 386933;
          result[2] += 0;
          result[3] += 53300157;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 7669584;
          result[1] += 34513130;
          result[2] += 0;
          result[3] += 11504376;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 18857;
          result[1] += 37714;
          result[2] += 169716;
          result[3] += 53385372;
          result[4] += 37714;
          result[5] += 37714;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 33000322;
          result[4] += 20686769;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0;
          result[1] += 1220161;
          result[2] += 0;
          result[3] += 8259552;
          result[4] += 44207377;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3638490;
          result[4] += 50048600;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42740000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 78604;
          result[3] += 0;
          result[4] += 53608486;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d00000))) ) ) {
          result[0] += 30941158;
          result[1] += 1337996;
          result[2] += 0;
          result[3] += 21407936;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 53577146;
          result[1] += 41978;
          result[2] += 49974;
          result[3] += 3997;
          result[4] += 0;
          result[5] += 0;
          result[6] += 13992;
        } else {
          result[0] += 50729751;
          result[1] += 0;
          result[2] += 2881510;
          result[3] += 75829;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
          result[0] += 14879787;
          result[1] += 0;
          result[2] += 0;
          result[3] += 38807303;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53182592;
          result[1] += 0;
          result[2] += 504498;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
          result[0] += 49653998;
          result[1] += 0;
          result[2] += 262427;
          result[3] += 3715417;
          result[4] += 0;
          result[5] += 0;
          result[6] += 55247;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1175629;
          result[3] += 52511461;
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
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 53347795;
          result[1] += 0;
          result[2] += 313196;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 26099;
        } else {
          result[0] += 53669428;
          result[1] += 0;
          result[2] += 17662;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 81715;
          result[3] += 0;
          result[4] += 53605375;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
          result[0] += 35110862;
          result[1] += 27527;
          result[2] += 367028;
          result[3] += 18131207;
          result[4] += 9175;
          result[5] += 18351;
          result[6] += 22939;
        } else {
          result[0] += 102980;
          result[1] += 0;
          result[2] += 1235764;
          result[3] += 41775696;
          result[4] += 10572649;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42980000))) ) ) {
          result[0] += 18375046;
          result[1] += 0;
          result[2] += 1438047;
          result[3] += 33873998;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 8285643;
          result[1] += 484540;
          result[2] += 0;
          result[3] += 44916907;
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
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cc0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
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
          result[3] += 53687091;
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
          result[0] += 5368709;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 5368709;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 52210432;
          result[1] += 0;
          result[2] += 1476658;
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
          result[4] += 53687091;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 4480216;
          result[1] += 377546;
          result[2] += 276867;
          result[3] += 48552460;
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
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 229432;
          result[3] += 53457659;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 48905245;
          result[1] += 0;
          result[2] += 4781846;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 9336885;
          result[1] += 0;
          result[2] += 0;
          result[3] += 44090847;
          result[4] += 103743;
          result[5] += 155614;
          result[6] += 0;
        } else {
          result[0] += 2982616;
          result[1] += 0;
          result[2] += 0;
          result[3] += 50704475;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 162442;
          result[3] += 0;
          result[4] += 53524649;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 22002906;
          result[3] += 0;
          result[4] += 29923952;
          result[5] += 1760232;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 53412042;
          result[1] += 16179;
          result[2] += 68762;
          result[3] += 190107;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53164118;
          result[1] += 0;
          result[2] += 7164;
          result[3] += 487152;
          result[4] += 0;
          result[5] += 0;
          result[6] += 28656;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
          result[0] += 49091519;
          result[1] += 58980;
          result[2] += 152366;
          result[3] += 4315413;
          result[4] += 0;
          result[5] += 24575;
          result[6] += 44235;
        } else {
          result[0] += 26786953;
          result[1] += 0;
          result[2] += 163488;
          result[3] += 26736649;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 53329970;
          result[1] += 0;
          result[2] += 357120;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 51614957;
          result[1] += 0;
          result[2] += 1695381;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 376751;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 53607892;
          result[1] += 0;
          result[2] += 79199;
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
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 38499081;
          result[1] += 146508;
          result[2] += 537196;
          result[3] += 12941551;
          result[4] += 1399966;
          result[5] += 48836;
          result[6] += 113950;
        } else {
          result[0] += 0;
          result[1] += 63635;
          result[2] += 657566;
          result[3] += 44056929;
          result[4] += 8866536;
          result[5] += 42423;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
          result[0] += 35911139;
          result[1] += 0;
          result[2] += 12387;
          result[3] += 14629546;
          result[4] += 3134018;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 7491222;
          result[1] += 0;
          result[2] += 59454;
          result[3] += 41617900;
          result[4] += 4518514;
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
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 34564034;
          result[1] += 0;
          result[2] += 593883;
          result[3] += 18529173;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 146021;
          result[1] += 1216842;
          result[2] += 0;
          result[3] += 52324227;
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
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
          result[0] += 8728538;
          result[1] += 745654;
          result[2] += 0;
          result[3] += 44212898;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 16016648;
          result[1] += 0;
          result[2] += 0;
          result[3] += 37670442;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 1246122;
          result[1] += 0;
          result[2] += 1453809;
          result[3] += 50987160;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53336195;
          result[1] += 0;
          result[2] += 350896;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
          result[0] += 52296803;
          result[1] += 41670;
          result[2] += 56823;
          result[3] += 1282322;
          result[4] += 0;
          result[5] += 0;
          result[6] += 9470;
        } else {
          result[0] += 1153073;
          result[1] += 0;
          result[2] += 1199196;
          result[3] += 45523332;
          result[4] += 5765366;
          result[5] += 46122;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 24245783;
          result[1] += 0;
          result[2] += 262400;
          result[3] += 29178907;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 49374277;
          result[1] += 0;
          result[2] += 208204;
          result[3] += 3866660;
          result[4] += 104102;
          result[5] += 29743;
          result[6] += 104102;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x430d0000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
          result[0] += 53484307;
          result[1] += 0;
          result[2] += 202784;
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
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40900000))) ) ) {
          result[0] += 50814942;
          result[1] += 0;
          result[2] += 2209345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 662803;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 53675010;
          result[1] += 0;
          result[2] += 12080;
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
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 38589630;
          result[1] += 0;
          result[2] += 377436;
          result[3] += 13483594;
          result[4] += 1171354;
          result[5] += 39045;
          result[6] += 26030;
        } else {
          result[0] += 7508998;
          result[1] += 539568;
          result[2] += 0;
          result[3] += 27428078;
          result[4] += 18210445;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x41680000))) ) ) {
          result[0] += 30186421;
          result[1] += 192697;
          result[2] += 536200;
          result[3] += 13488797;
          result[4] += 9249461;
          result[5] += 25134;
          result[6] += 8378;
        } else {
          result[0] += 36534570;
          result[1] += 0;
          result[2] += 59454;
          result[3] += 11177378;
          result[4] += 5915687;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 499203;
          result[3] += 53187887;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 113683;
          result[2] += 0;
          result[3] += 53573407;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 29527900;
          result[3] += 0;
          result[4] += 18790481;
          result[5] += 5368709;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 160259;
          result[3] += 0;
          result[4] += 53526831;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 5368709;
          result[1] += 0;
          result[2] += 48318382;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53265188;
          result[1] += 0;
          result[2] += 421902;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 4786878;
          result[1] += 238021;
          result[2] += 396702;
          result[3] += 47736551;
          result[4] += 528936;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 10679168;
          result[4] += 43007922;
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
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 6316128;
          result[1] += 47370962;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 24892510;
          result[1] += 0;
          result[2] += 0;
          result[3] += 28660026;
          result[4] += 0;
          result[5] += 134554;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17628597;
          result[3] += 0;
          result[4] += 34455894;
          result[5] += 1602599;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 224444;
          result[3] += 53327980;
          result[4] += 0;
          result[5] += 134666;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
          result[0] += 35437724;
          result[1] += 0;
          result[2] += 0;
          result[3] += 18249366;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53482965;
          result[1] += 39636;
          result[2] += 83235;
          result[3] += 63417;
          result[4] += 0;
          result[5] += 0;
          result[6] += 17836;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 23639248;
          result[1] += 0;
          result[2] += 0;
          result[3] += 30047842;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53107560;
          result[1] += 0;
          result[2] += 418550;
          result[3] += 96588;
          result[4] += 0;
          result[5] += 16098;
          result[6] += 48294;
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
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 53687091;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
          result[0] += 10872961;
          result[1] += 530388;
          result[2] += 0;
          result[3] += 42283740;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 26075123;
          result[1] += 0;
          result[2] += 1690528;
          result[3] += 25921439;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 50648794;
          result[1] += 47350;
          result[2] += 126266;
          result[3] += 2841004;
          result[4] += 23675;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53597042;
          result[1] += 15008;
          result[2] += 15008;
          result[3] += 57030;
          result[4] += 0;
          result[5] += 3001;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 34363072;
          result[1] += 0;
          result[2] += 150057;
          result[3] += 19107269;
          result[4] += 0;
          result[5] += 33346;
          result[6] += 33346;
        } else {
          result[0] += 45545141;
          result[1] += 0;
          result[2] += 1102185;
          result[3] += 2133261;
          result[4] += 4906502;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 23311628;
          result[1] += 0;
          result[2] += 0;
          result[3] += 30375462;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 52674421;
          result[1] += 0;
          result[2] += 732238;
          result[3] += 62318;
          result[4] += 109056;
          result[5] += 46738;
          result[6] += 62318;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x42a20000))) ) ) {
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
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x41780000))) ) ) {
          result[0] += 5965232;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 47721858;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53656861;
          result[5] += 30229;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
          result[0] += 32997;
          result[1] += 32997;
          result[2] += 115491;
          result[3] += 53340616;
          result[4] += 0;
          result[5] += 164987;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42060000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
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
          result[0] += 45733228;
          result[1] += 0;
          result[2] += 166324;
          result[3] += 7769718;
          result[4] += 0;
          result[5] += 5940;
          result[6] += 11880;
        } else {
          result[0] += 53167646;
          result[1] += 0;
          result[2] += 234587;
          result[3] += 201075;
          result[4] += 0;
          result[5] += 0;
          result[6] += 83781;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 53386323;
          result[1] += 0;
          result[2] += 187980;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 112788;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 50943184;
          result[1] += 512597;
          result[2] += 437215;
          result[3] += 1794092;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 23017919;
          result[1] += 0;
          result[2] += 240605;
          result[3] += 30428566;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420a0000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53067454;
          result[1] += 0;
          result[2] += 575376;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 44259;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 53639102;
          result[1] += 0;
          result[2] += 47988;
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
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 12253533;
          result[1] += 449988;
          result[2] += 0;
          result[3] += 26307020;
          result[4] += 14676548;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 9387330;
          result[1] += 158213;
          result[2] += 509798;
          result[3] += 22308093;
          result[4] += 21323654;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
          result[0] += 34894741;
          result[1] += 0;
          result[2] += 579088;
          result[3] += 15766146;
          result[4] += 2447115;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 46255014;
          result[1] += 143788;
          result[2] += 197709;
          result[3] += 6973750;
          result[4] += 53920;
          result[5] += 53920;
          result[6] += 8986;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42220000))) ) ) {
          result[0] += 0;
          result[1] += 1268199;
          result[2] += 0;
          result[3] += 51362059;
          result[4] += 634099;
          result[5] += 422733;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 551849;
          result[3] += 0;
          result[4] += 53135241;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 26843545;
          result[5] += 26843545;
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
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 2866635;
          result[1] += 0;
          result[2] += 0;
          result[3] += 50789296;
          result[4] += 0;
          result[5] += 31159;
          result[6] += 0;
        } else {
          result[0] += 10897545;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42789545;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
          result[0] += 0;
          result[1] += 1800158;
          result[2] += 1694267;
          result[3] += 49874990;
          result[4] += 0;
          result[5] += 317675;
          result[6] += 0;
        } else {
          result[0] += 52246705;
          result[1] += 0;
          result[2] += 1440385;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 52852885;
          result[1] += 0;
          result[2] += 774619;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 59586;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 53557724;
          result[1] += 0;
          result[2] += 129366;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53679586;
          result[1] += 0;
          result[2] += 7504;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 3900344;
          result[1] += 1778098;
          result[2] += 2638468;
          result[3] += 45370180;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 31126599;
          result[1] += 8389;
          result[2] += 192968;
          result[3] += 22333964;
          result[4] += 0;
          result[5] += 0;
          result[6] += 25169;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42520000))) ) ) {
          result[0] += 45124925;
          result[1] += 0;
          result[2] += 0;
          result[3] += 8562165;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 52917186;
          result[1] += 0;
          result[2] += 247469;
          result[3] += 467442;
          result[4] += 0;
          result[5] += 0;
          result[6] += 54993;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 52204022;
          result[1] += 0;
          result[2] += 1038148;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 444920;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 53540405;
          result[1] += 0;
          result[2] += 146686;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420a0000))) ) ) {
          result[0] += 53361933;
          result[1] += 0;
          result[2] += 325157;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53670907;
          result[1] += 0;
          result[2] += 16183;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 52030848;
          result[1] += 157343;
          result[2] += 223592;
          result[3] += 1192494;
          result[4] += 0;
          result[5] += 16562;
          result[6] += 66249;
        } else {
          result[0] += 37525346;
          result[1] += 0;
          result[2] += 0;
          result[3] += 15867299;
          result[4] += 0;
          result[5] += 294444;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 8881458;
          result[1] += 280311;
          result[2] += 752415;
          result[3] += 43728644;
          result[4] += 0;
          result[5] += 44259;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42cf0000))) ) ) {
          result[0] += 0;
          result[1] += 70803;
          result[2] += 0;
          result[3] += 53616287;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53580357;
          result[5] += 106733;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2949840;
          result[3] += 0;
          result[4] += 50737251;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 53629819;
          result[1] += 0;
          result[2] += 53902;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 3368;
        } else {
          result[0] += 53676631;
          result[1] += 0;
          result[2] += 10459;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 39801083;
          result[1] += 56426;
          result[2] += 307779;
          result[3] += 12172698;
          result[4] += 1277286;
          result[5] += 51296;
          result[6] += 20518;
        } else {
          result[0] += 0;
          result[1] += 124688;
          result[2] += 534377;
          result[3] += 52725212;
          result[4] += 195938;
          result[5] += 106875;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43590000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 126026;
          result[3] += 0;
          result[4] += 53561065;
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
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 3355443;
          result[1] += 3914683;
          result[2] += 0;
          result[3] += 14540253;
          result[4] += 31876710;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 589968;
          result[2] += 0;
          result[3] += 2949840;
          result[4] += 50147282;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 52009369;
          result[1] += 1677721;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 3271256;
          result[1] += 0;
          result[2] += 0;
          result[3] += 6157659;
          result[4] += 44258175;
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
          result[0] += 511305;
          result[1] += 0;
          result[2] += 3579139;
          result[3] += 49596646;
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
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53280370;
          result[1] += 0;
          result[2] += 406720;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 53486890;
          result[1] += 0;
          result[2] += 200200;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53670587;
          result[1] += 0;
          result[2] += 16503;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 642351;
          result[1] += 540927;
          result[2] += 0;
          result[3] += 50204868;
          result[4] += 2265135;
          result[5] += 33807;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1419610;
          result[3] += 16131938;
          result[4] += 36006486;
          result[5] += 129055;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 53574539;
          result[1] += 0;
          result[2] += 112551;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 21823532;
          result[1] += 0;
          result[2] += 150299;
          result[3] += 31472779;
          result[4] += 0;
          result[5] += 90179;
          result[6] += 150299;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40200000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 29385711;
          result[1] += 746850;
          result[2] += 1034101;
          result[3] += 21457601;
          result[4] += 890476;
          result[5] += 86175;
          result[6] += 86175;
        } else {
          result[0] += 17728662;
          result[1] += 0;
          result[2] += 501102;
          result[3] += 18471677;
          result[4] += 16968369;
          result[5] += 17279;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42240000))) ) ) {
          result[0] += 35302925;
          result[1] += 0;
          result[2] += 39965;
          result[3] += 15479999;
          result[4] += 2850877;
          result[5] += 0;
          result[6] += 13321;
        } else {
          result[0] += 3421070;
          result[1] += 0;
          result[2] += 0;
          result[3] += 30958991;
          result[4] += 19307029;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 53208;
          result[1] += 17736;
          result[2] += 0;
          result[3] += 53491994;
          result[4] += 88680;
          result[5] += 35472;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9889727;
          result[3] += 0;
          result[4] += 41678136;
          result[5] += 2119227;
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
          result[1] += 2880770;
          result[2] += 0;
          result[3] += 50806320;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x424c0000))) ) ) {
          result[0] += 53585482;
          result[1] += 11289;
          result[2] += 79029;
          result[3] += 7526;
          result[4] += 0;
          result[5] += 0;
          result[6] += 3763;
        } else {
          result[0] += 53198074;
          result[1] += 0;
          result[2] += 0;
          result[3] += 489017;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 20242673;
          result[1] += 0;
          result[2] += 0;
          result[3] += 33444417;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423a0000))) ) ) {
          result[0] += 53614410;
          result[1] += 0;
          result[2] += 72681;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 50512977;
          result[1] += 172802;
          result[2] += 427459;
          result[3] += 2528377;
          result[4] += 0;
          result[5] += 0;
          result[6] += 45474;
        } else {
          result[0] += 21875471;
          result[1] += 0;
          result[2] += 368743;
          result[3] += 31323283;
          result[4] += 0;
          result[5] += 19932;
          result[6] += 99660;
        }
      }
    }
  }
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 53092220;
          result[1] += 0;
          result[2] += 594870;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 50020655;
          result[1] += 0;
          result[2] += 2880770;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 785664;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 53289409;
          result[1] += 0;
          result[2] += 397682;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53659949;
          result[1] += 0;
          result[2] += 27142;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 1146601;
          result[1] += 507988;
          result[2] += 319306;
          result[3] += 47634775;
          result[4] += 4020363;
          result[5] += 58055;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 408933;
          result[3] += 10690683;
          result[4] += 42529055;
          result[5] += 58419;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 46152060;
          result[1] += 235469;
          result[2] += 353204;
          result[3] += 6710886;
          result[4] += 0;
          result[5] += 0;
          result[6] += 235469;
        } else {
          result[0] += 53124849;
          result[1] += 0;
          result[2] += 295177;
          result[3] += 245980;
          result[4] += 0;
          result[5] += 0;
          result[6] += 21084;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41ac0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53055478;
          result[5] += 631612;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5098774;
          result[3] += 0;
          result[4] += 48588317;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42cf0000))) ) ) {
          result[0] += 0;
          result[1] += 87609;
          result[2] += 0;
          result[3] += 53599481;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
          result[0] += 15850474;
          result[1] += 0;
          result[2] += 0;
          result[3] += 37836616;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 32546848;
          result[1] += 0;
          result[2] += 988572;
          result[3] += 20151670;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x42240000))) ) ) {
          result[0] += 2684354;
          result[1] += 32212254;
          result[2] += 0;
          result[3] += 18790481;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 7567118;
          result[1] += 466220;
          result[2] += 179315;
          result[3] += 45474436;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 53154724;
          result[1] += 0;
          result[2] += 327610;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 204756;
        } else {
          result[0] += 53610167;
          result[1] += 0;
          result[2] += 76923;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 25452775;
          result[1] += 142428;
          result[2] += 343503;
          result[3] += 26692739;
          result[4] += 1038888;
          result[5] += 0;
          result[6] += 16756;
        } else {
          result[0] += 51901738;
          result[1] += 0;
          result[2] += 253042;
          result[3] += 1476078;
          result[4] += 0;
          result[5] += 0;
          result[6] += 56231;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 20394122;
          result[4] += 33060557;
          result[5] += 232411;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1205806;
          result[3] += 49610317;
          result[4] += 2698709;
          result[5] += 172258;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
          result[0] += 21818041;
          result[1] += 122573;
          result[2] += 0;
          result[3] += 31256183;
          result[4] += 0;
          result[5] += 490293;
          result[6] += 0;
        } else {
          result[0] += 53568921;
          result[1] += 26037;
          result[2] += 38054;
          result[3] += 38054;
          result[4] += 0;
          result[5] += 0;
          result[6] += 16023;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42020000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53207742;
          result[4] += 0;
          result[5] += 479349;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
          result[0] += 24629966;
          result[1] += 0;
          result[2] += 1683567;
          result[3] += 27311203;
          result[4] += 0;
          result[5] += 62354;
          result[6] += 0;
        } else {
          result[0] += 4535775;
          result[1] += 556663;
          result[2] += 783452;
          result[3] += 47811199;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
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
          result[2] += 537206;
          result[3] += 52898068;
          result[4] += 151089;
          result[5] += 100726;
          result[6] += 0;
        } else {
          result[0] += 53416565;
          result[1] += 0;
          result[2] += 196746;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 73779;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x433f0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 135231;
          result[3] += 0;
          result[4] += 53551859;
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x423e0000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40200000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53474889;
          result[5] += 212201;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 34359;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53566832;
          result[4] += 0;
          result[5] += 85899;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 9860894;
          result[2] += 38347922;
          result[3] += 0;
          result[4] += 0;
          result[5] += 5478274;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x40200000))) ) ) {
          result[0] += 53414013;
          result[1] += 0;
          result[2] += 273077;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 52418892;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 1268199;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 53623040;
          result[1] += 0;
          result[2] += 64050;
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
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x425c0000))) ) ) {
          result[0] += 37165029;
          result[1] += 107635;
          result[2] += 622748;
          result[3] += 15745548;
          result[4] += 0;
          result[5] += 0;
          result[6] += 46129;
        } else {
          result[0] += 7625123;
          result[1] += 1089303;
          result[2] += 0;
          result[3] += 44972664;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40600000))) ) ) {
          result[0] += 31129489;
          result[1] += 0;
          result[2] += 0;
          result[3] += 22557601;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 39889007;
          result[1] += 0;
          result[2] += 92427;
          result[3] += 13692452;
          result[4] += 0;
          result[5] += 0;
          result[6] += 13203;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 5050985;
          result[1] += 0;
          result[2] += 0;
          result[3] += 48636105;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 720632;
          result[2] += 0;
          result[3] += 13511851;
          result[4] += 39454607;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x41080000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41280000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 15738490;
          result[1] += 243065;
          result[2] += 911495;
          result[3] += 36794039;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 53687091;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41d80000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
          result[0] += 112316;
          result[1] += 0;
          result[2] += 374386;
          result[3] += 48969815;
          result[4] += 4155695;
          result[5] += 74877;
          result[6] += 0;
        } else {
          result[0] += 53315498;
          result[1] += 0;
          result[2] += 306968;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 64624;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41100000))) ) ) {
          result[0] += 53571878;
          result[1] += 15509;
          result[2] += 48744;
          result[3] += 35450;
          result[4] += 4431;
          result[5] += 0;
          result[6] += 11078;
        } else {
          result[0] += 144709;
          result[1] += 1736509;
          result[2] += 0;
          result[3] += 50648199;
          result[4] += 723545;
          result[5] += 434127;
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
          result[2] += 511305;
          result[3] += 43318949;
          result[4] += 9828430;
          result[5] += 28405;
          result[6] += 0;
        } else {
          result[0] += 53426589;
          result[1] += 0;
          result[2] += 236819;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 23681;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x425c0000))) ) ) {
          result[0] += 26843545;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 26843545;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 34097;
          result[1] += 204587;
          result[2] += 85244;
          result[3] += 53226769;
          result[4] += 0;
          result[5] += 136391;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 53524397;
          result[1] += 21305;
          result[2] += 118146;
          result[3] += 11621;
          result[4] += 0;
          result[5] += 0;
          result[6] += 11621;
        } else {
          result[0] += 37516280;
          result[1] += 0;
          result[2] += 5821491;
          result[3] += 10349318;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d00000))) ) ) {
          result[0] += 25430727;
          result[1] += 1883757;
          result[2] += 0;
          result[3] += 26372606;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 783753;
          result[1] += 0;
          result[2] += 0;
          result[3] += 52903338;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
          result[0] += 17640044;
          result[1] += 0;
          result[2] += 23775711;
          result[3] += 0;
          result[4] += 8436542;
          result[5] += 3834792;
          result[6] += 0;
        } else {
          result[0] += 9410384;
          result[1] += 0;
          result[2] += 56349;
          result[3] += 44220356;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
          result[0] += 38654705;
          result[1] += 0;
          result[2] += 0;
          result[3] += 15032385;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53471046;
          result[1] += 0;
          result[2] += 162033;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 54011;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428e0000))) ) ) {
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
          result[1] += 0;
          result[2] += 53687091;
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
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
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
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 53625269;
          result[1] += 0;
          result[2] += 61821;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53083865;
          result[1] += 0;
          result[2] += 201075;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 402150;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x41780000))) ) ) {
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
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
          result[0] += 1120869;
          result[1] += 331165;
          result[2] += 611383;
          result[3] += 51559986;
          result[4] += 0;
          result[5] += 63685;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 53448708;
          result[1] += 0;
          result[2] += 204327;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 34054;
        } else {
          result[0] += 147492;
          result[1] += 0;
          result[2] += 21070;
          result[3] += 53518528;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
          result[0] += 53074310;
          result[1] += 0;
          result[2] += 237608;
          result[3] += 337654;
          result[4] += 0;
          result[5] += 0;
          result[6] += 37517;
        } else {
          result[0] += 48555800;
          result[1] += 76586;
          result[2] += 919037;
          result[3] += 4135667;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420a0000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42060000))) ) ) {
          result[0] += 50529027;
          result[1] += 0;
          result[2] += 3158064;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53350344;
          result[1] += 0;
          result[2] += 288640;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 48106;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42160000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53611390;
          result[1] += 0;
          result[2] += 75700;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 61780;
          result[1] += 123560;
          result[2] += 0;
          result[3] += 12294282;
          result[4] += 41207468;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 913774;
          result[1] += 270748;
          result[2] += 721994;
          result[3] += 40928087;
          result[4] += 10784799;
          result[5] += 67687;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cc0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 1066215;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52620875;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 46480770;
          result[1] += 0;
          result[2] += 600526;
          result[3] += 6605794;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53060718;
          result[1] += 0;
          result[2] += 257508;
          result[3] += 278387;
          result[4] += 0;
          result[5] += 13919;
          result[6] += 76556;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 93531;
          result[3] += 53593559;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42580000))) ) ) {
          result[0] += 0;
          result[1] += 115491;
          result[2] += 98992;
          result[3] += 53439609;
          result[4] += 0;
          result[5] += 32997;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 21925191;
          result[1] += 1303660;
          result[2] += 0;
          result[3] += 30458239;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 11799360;
          result[1] += 0;
          result[2] += 0;
          result[3] += 41887730;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 53578677;
          result[1] += 30115;
          result[2] += 62237;
          result[3] += 2007;
          result[4] += 0;
          result[5] += 0;
          result[6] += 14053;
        } else {
          result[0] += 50999003;
          result[1] += 0;
          result[2] += 2464080;
          result[3] += 224007;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 50808606;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2878484;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 20111252;
          result[1] += 0;
          result[2] += 53515;
          result[3] += 33522322;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d00000))) ) ) {
          result[0] += 53145822;
          result[1] += 0;
          result[2] += 490524;
          result[3] += 33829;
          result[4] += 0;
          result[5] += 0;
          result[6] += 16914;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 666460;
          result[1] += 0;
          result[2] += 1925330;
          result[3] += 48429458;
          result[4] += 2665841;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 555862;
          result[2] += 0;
          result[3] += 53131228;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 53220697;
          result[1] += 0;
          result[2] += 466393;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 52035180;
          result[1] += 0;
          result[2] += 1651910;
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
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41940000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 501748;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53185342;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 53414290;
          result[1] += 0;
          result[2] += 190960;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 81840;
        } else {
          result[0] += 53671552;
          result[1] += 0;
          result[2] += 15538;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 39657748;
          result[1] += 152954;
          result[2] += 263421;
          result[3] += 13137107;
          result[4] += 382386;
          result[5] += 33989;
          result[6] += 59482;
        } else {
          result[0] += 21744857;
          result[1] += 0;
          result[2] += 470490;
          result[3] += 31236497;
          result[4] += 132964;
          result[5] += 40912;
          result[6] += 61368;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x430d0000))) ) ) {
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
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42400000))) ) ) {
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
          result[3] += 53344042;
          result[4] += 343048;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 501388;
          result[2] += 655661;
          result[3] += 52530041;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53302434;
          result[1] += 0;
          result[2] += 384656;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x420c0000))) ) ) {
          result[0] += 1491308;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52195783;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 4949873;
          result[2] += 0;
          result[3] += 48737217;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x434c0000))) ) ) {
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42060000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53632696;
          result[1] += 0;
          result[2] += 35356;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 19037;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 1412818;
          result[1] += 470939;
          result[2] += 0;
          result[3] += 51567863;
          result[4] += 235469;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 40488946;
          result[1] += 113847;
          result[2] += 365937;
          result[3] += 11522963;
          result[4] += 1105944;
          result[5] += 48791;
          result[6] += 40659;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 703258;
          result[1] += 0;
          result[2] += 374073;
          result[3] += 42764132;
          result[4] += 9845625;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 49195622;
          result[1] += 0;
          result[2] += 397682;
          result[3] += 3649318;
          result[4] += 257323;
          result[5] += 93572;
          result[6] += 93572;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
          result[0] += 33273;
          result[1] += 33273;
          result[2] += 166368;
          result[3] += 53354354;
          result[4] += 0;
          result[5] += 99821;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42740000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a00000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 48414251;
          result[1] += 5272839;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40a00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 26454508;
          result[1] += 0;
          result[2] += 0;
          result[3] += 27232582;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 51226603;
          result[1] += 40903;
          result[2] += 191930;
          result[3] += 2208775;
          result[4] += 0;
          result[5] += 0;
          result[6] += 18878;
        } else {
          result[0] += 39767557;
          result[1] += 0;
          result[2] += 88885;
          result[3] += 13812870;
          result[4] += 0;
          result[5] += 11851;
          result[6] += 5925;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 51068208;
          result[1] += 0;
          result[2] += 81840;
          result[3] += 2537042;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53442488;
          result[1] += 0;
          result[2] += 165272;
          result[3] += 52887;
          result[4] += 0;
          result[5] += 0;
          result[6] += 26443;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x45012800))) ) ) {
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e40000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 24303;
          result[2] += 777721;
          result[3] += 52860762;
          result[4] += 0;
          result[5] += 24303;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x3f800000))) ) ) {
          result[0] += 37580963;
          result[1] += 0;
          result[2] += 1238932;
          result[3] += 14867194;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53476805;
          result[1] += 23365;
          result[2] += 95407;
          result[3] += 79830;
          result[4] += 0;
          result[5] += 0;
          result[6] += 11682;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 24672036;
          result[1] += 0;
          result[2] += 133473;
          result[3] += 28881581;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 49927950;
          result[1] += 0;
          result[2] += 134255;
          result[3] += 3550299;
          result[4] += 0;
          result[5] += 29834;
          result[6] += 44751;
        }
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41e00000))) ) ) {
          result[0] += 0;
          result[1] += 716510;
          result[2] += 0;
          result[3] += 52970580;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 51506904;
          result[1] += 2180186;
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
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 3109290;
          result[1] += 0;
          result[2] += 1658288;
          result[3] += 48919511;
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
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b40000))) ) ) {
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42220000))) ) ) {
          result[0] += 53566258;
          result[1] += 0;
          result[2] += 111538;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 9294;
        } else {
          result[0] += 53646163;
          result[1] += 0;
          result[2] += 40927;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
          result[0] += 30601522;
          result[1] += 0;
          result[2] += 645248;
          result[3] += 19488904;
          result[4] += 2951415;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 46325165;
          result[1] += 126152;
          result[2] += 225273;
          result[3] += 6848303;
          result[4] += 27032;
          result[5] += 72087;
          result[6] += 63076;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
          result[0] += 0;
          result[1] += 86928;
          result[2] += 243400;
          result[3] += 53356762;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1324645;
          result[3] += 0;
          result[4] += 52128685;
          result[5] += 233760;
          result[6] += 0;
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
          result[0] += 6984260;
          result[1] += 811302;
          result[2] += 246918;
          result[3] += 45644609;
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
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40b00000))) ) ) {
          result[0] += 45231889;
          result[1] += 0;
          result[2] += 68741;
          result[3] += 8386459;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 47070617;
          result[1] += 0;
          result[2] += 453183;
          result[3] += 6163290;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 4559661;
          result[1] += 327360;
          result[2] += 701486;
          result[3] += 46976204;
          result[4] += 1122378;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 50696;
          result[1] += 304176;
          result[2] += 0;
          result[3] += 8390192;
          result[4] += 44942026;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41e80000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
          result[0] += 42252533;
          result[1] += 221314;
          result[2] += 221314;
          result[3] += 10807501;
          result[4] += 18442;
          result[5] += 55328;
          result[6] += 110657;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
          result[0] += 23249430;
          result[1] += 0;
          result[2] += 0;
          result[3] += 29876080;
          result[4] += 112316;
          result[5] += 449264;
          result[6] += 0;
        } else {
          result[0] += 53576718;
          result[1] += 2299;
          result[2] += 64384;
          result[3] += 34491;
          result[4] += 0;
          result[5] += 0;
          result[6] += 9197;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2083379;
          result[3] += 0;
          result[4] += 51603711;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 79565;
          result[3] += 53607525;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
          result[0] += 49923000;
          result[1] += 0;
          result[2] += 278821;
          result[3] += 3359799;
          result[4] += 0;
          result[5] += 41823;
          result[6] += 83646;
        } else {
          result[0] += 3728270;
          result[1] += 0;
          result[2] += 0;
          result[3] += 45857723;
          result[4] += 3355443;
          result[5] += 745654;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
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
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41b40000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x457d1000))) ) ) {
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53612732;
          result[5] += 74358;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 166149;
          result[2] += 415374;
          result[3] += 53022492;
          result[4] += 0;
          result[5] += 83074;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42000000))) ) ) {
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
          result[2] += 254039;
          result[3] += 53179011;
          result[4] += 0;
          result[5] += 254039;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 52528376;
          result[1] += 0;
          result[2] += 869035;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 289678;
        } else {
          result[0] += 53649203;
          result[1] += 0;
          result[2] += 37887;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 53548811;
          result[1] += 0;
          result[2] += 138279;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53682174;
          result[1] += 0;
          result[2] += 4916;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 6807585;
          result[1] += 773589;
          result[2] += 2398126;
          result[3] += 43707790;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 52788979;
          result[1] += 0;
          result[2] += 272759;
          result[3] += 558824;
          result[4] += 0;
          result[5] += 13305;
          result[6] += 53221;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
          result[0] += 0;
          result[1] += 24403223;
          result[2] += 24403223;
          result[3] += 4880644;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 114879;
          result[3] += 53572211;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42220000))) ) ) {
          result[0] += 53596978;
          result[1] += 0;
          result[2] += 83437;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 6675;
        } else {
          result[0] += 53671305;
          result[1] += 0;
          result[2] += 15785;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
          result[0] += 34393785;
          result[1] += 81064;
          result[2] += 342271;
          result[3] += 18833941;
          result[4] += 0;
          result[5] += 9007;
          result[6] += 27021;
        } else {
          result[0] += 209306;
          result[1] += 0;
          result[2] += 906994;
          result[3] += 43465962;
          result[4] += 8965290;
          result[5] += 139537;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x433f0000))) ) ) {
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
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 8351325;
          result[1] += 357913;
          result[2] += 318145;
          result[3] += 44659706;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42f70000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 580400;
          result[1] += 0;
          result[2] += 0;
          result[3] += 20604234;
          result[4] += 32502455;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 497102;
          result[2] += 0;
          result[3] += 4805326;
          result[4] += 48384662;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x43020000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 917728;
          result[2] += 0;
          result[3] += 803012;
          result[4] += 51966351;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41780000))) ) ) {
          result[0] += 880116;
          result[1] += 0;
          result[2] += 704092;
          result[3] += 0;
          result[4] += 51750835;
          result[5] += 352046;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 98734;
          result[3] += 53464937;
          result[4] += 0;
          result[5] += 123418;
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
          result[0] += 51484543;
          result[1] += 0;
          result[2] += 2202547;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 53528120;
          result[1] += 0;
          result[2] += 37093;
          result[3] += 119228;
          result[4] += 0;
          result[5] += 0;
          result[6] += 2649;
        } else {
          result[0] += 9418787;
          result[1] += 7535030;
          result[2] += 0;
          result[3] += 36733272;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
          result[0] += 48987679;
          result[1] += 47775;
          result[2] += 282312;
          result[3] += 4317204;
          result[4] += 0;
          result[5] += 0;
          result[6] += 52119;
        } else {
          result[0] += 27292863;
          result[1] += 0;
          result[2] += 154051;
          result[3] += 26240175;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42cf0000))) ) ) {
          result[0] += 10345183;
          result[1] += 245146;
          result[2] += 0;
          result[3] += 42900643;
          result[4] += 196117;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x419c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 17895697;
          result[1] += 0;
          result[2] += 922458;
          result[3] += 34868935;
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
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x42240000))) ) ) {
          result[0] += 4129776;
          result[1] += 28908433;
          result[2] += 0;
          result[3] += 20648881;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 624268;
          result[1] += 624268;
          result[2] += 0;
          result[3] += 52438554;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 504522;
          result[1] += 415488;
          result[2] += 652911;
          result[3] += 51965780;
          result[4] += 148388;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 10106434;
          result[4] += 43580656;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ae0000))) ) ) {
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
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cc0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 53687091;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
          result[0] += 16953818;
          result[1] += 31082000;
          result[2] += 0;
          result[3] += 5651272;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41d80000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 53333421;
          result[1] += 0;
          result[2] += 212201;
          result[3] += 0;
          result[4] += 0;
          result[5] += 70733;
          result[6] += 70733;
        } else {
          result[0] += 35113259;
          result[1] += 0;
          result[2] += 303839;
          result[3] += 16433745;
          result[4] += 1756984;
          result[5] += 26420;
          result[6] += 52841;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423e0000))) ) ) {
          result[0] += 52922903;
          result[1] += 14021;
          result[2] += 37391;
          result[3] += 675382;
          result[4] += 21032;
          result[5] += 9347;
          result[6] += 7010;
        } else {
          result[0] += 50310061;
          result[1] += 460503;
          result[2] += 0;
          result[3] += 2916525;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53380015;
          result[4] += 238836;
          result[5] += 68239;
          result[6] += 0;
        } else {
          result[0] += 24825233;
          result[1] += 0;
          result[2] += 1210987;
          result[3] += 0;
          result[4] += 27650870;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
          result[0] += 40802189;
          result[1] += 0;
          result[2] += 0;
          result[3] += 12884901;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53447927;
          result[1] += 0;
          result[2] += 228765;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 10398;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 356269;
          result[1] += 191837;
          result[2] += 465891;
          result[3] += 52645687;
          result[4] += 27405;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 104348;
          result[3] += 8869587;
          result[4] += 44713155;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 53634301;
          result[1] += 0;
          result[2] += 52789;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 52426830;
          result[1] += 0;
          result[2] += 1260260;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42f30000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 1095654;
          result[1] += 0;
          result[2] += 0;
          result[3] += 21913098;
          result[4] += 30678337;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 7561562;
          result[4] += 46125529;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x43540000))) ) ) {
          result[0] += 0;
          result[1] += 769400;
          result[2] += 0;
          result[3] += 2137224;
          result[4] += 50780465;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 13421772;
          result[1] += 0;
          result[2] += 0;
          result[3] += 26843545;
          result[4] += 13421772;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 28908433;
          result[1] += 0;
          result[2] += 0;
          result[3] += 24503339;
          result[4] += 275318;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 83624;
          result[3] += 0;
          result[4] += 53603466;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17207401;
          result[3] += 0;
          result[4] += 34414802;
          result[5] += 2064888;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 43862;
          result[2] += 219310;
          result[3] += 53292333;
          result[4] += 0;
          result[5] += 131586;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41600000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5302428;
          result[3] += 48384662;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 51662032;
          result[1] += 70677;
          result[2] += 159792;
          result[3] += 1773078;
          result[4] += 0;
          result[5] += 3072;
          result[6] += 18437;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 53638597;
          result[1] += 0;
          result[2] += 38794;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 9698;
        } else {
          result[0] += 35383841;
          result[1] += 0;
          result[2] += 73212;
          result[3] += 18230036;
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
          result[0] += 4688603;
          result[1] += 0;
          result[2] += 0;
          result[3] += 47246701;
          result[4] += 1751786;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 15947289;
          result[1] += 254140;
          result[2] += 0;
          result[3] += 34880725;
          result[4] += 2541400;
          result[5] += 63535;
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
          result[0] += 21474836;
          result[1] += 0;
          result[2] += 32212254;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420a0000))) ) ) {
          result[0] += 53505347;
          result[1] += 0;
          result[2] += 181743;
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
          result[0] += 29672101;
          result[1] += 0;
          result[2] += 277309;
          result[3] += 23663731;
          result[4] += 0;
          result[5] += 18487;
          result[6] += 55461;
        } else {
          result[0] += 52720056;
          result[1] += 0;
          result[2] += 500190;
          result[3] += 266768;
          result[4] += 0;
          result[5] += 0;
          result[6] += 200076;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 53160277;
          result[1] += 0;
          result[2] += 431029;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 95784;
        } else {
          result[0] += 53668148;
          result[1] += 0;
          result[2] += 18942;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 89082;
          result[1] += 831437;
          result[2] += 534495;
          result[3] += 50569201;
          result[4] += 1633180;
          result[5] += 29694;
          result[6] += 0;
        } else {
          result[0] += 53322010;
          result[1] += 40564;
          result[2] += 223104;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 101411;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 24022772;
          result[1] += 0;
          result[2] += 489151;
          result[3] += 23403180;
          result[4] += 5761117;
          result[5] += 10870;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2617868;
          result[4] += 51069222;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42020000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42060000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53007507;
          result[1] += 0;
          result[2] += 679583;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 42662225;
          result[1] += 0;
          result[2] += 254699;
          result[3] += 10715586;
          result[4] += 0;
          result[5] += 54578;
          result[6] += 0;
        } else {
          result[0] += 19036942;
          result[1] += 0;
          result[2] += 946990;
          result[3] += 29065331;
          result[4] += 4540699;
          result[5] += 48563;
          result[6] += 48563;
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
          result[0] += 4343773;
          result[1] += 732096;
          result[2] += 0;
          result[3] += 48415994;
          result[4] += 0;
          result[5] += 195225;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 4880644;
          result[1] += 32109;
          result[2] += 0;
          result[3] += 48645899;
          result[4] += 32109;
          result[5] += 96328;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1193046;
          result[3] += 0;
          result[4] += 52334971;
          result[5] += 159072;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 10367162;
          result[4] += 43319928;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 12155567;
          result[1] += 1381314;
          result[2] += 0;
          result[3] += 40150208;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 53628223;
          result[1] += 0;
          result[2] += 52980;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 5886;
        } else {
          result[0] += 37208394;
          result[1] += 64654;
          result[2] += 460659;
          result[3] += 15921055;
          result[4] += 0;
          result[5] += 0;
          result[6] += 32327;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
          result[0] += 8609916;
          result[1] += 264468;
          result[2] += 0;
          result[3] += 42873270;
          result[4] += 1910049;
          result[5] += 29385;
          result[6] += 0;
        } else {
          result[0] += 53610790;
          result[1] += 0;
          result[2] += 47687;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 28612;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x422c0000))) ) ) {
          result[0] += 53598327;
          result[1] += 0;
          result[2] += 88763;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 714240;
          result[3] += 5237764;
          result[4] += 47735085;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 4678128;
          result[1] += 0;
          result[2] += 1373736;
          result[3] += 43514018;
          result[4] += 4009824;
          result[5] += 111384;
          result[6] += 0;
        } else {
          result[0] += 53193038;
          result[1] += 0;
          result[2] += 205855;
          result[3] += 41171;
          result[4] += 0;
          result[5] += 0;
          result[6] += 247026;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
          result[0] += 269784;
          result[1] += 0;
          result[2] += 0;
          result[3] += 38309381;
          result[4] += 15107925;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 52686710;
          result[1] += 0;
          result[2] += 666920;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 333460;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41280000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 19522578;
          result[1] += 350543;
          result[2] += 755016;
          result[3] += 33058952;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
          result[0] += 52777529;
          result[1] += 54516;
          result[2] += 54516;
          result[3] += 777574;
          result[4] += 0;
          result[5] += 0;
          result[6] += 22954;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1822991;
          result[3] += 49858809;
          result[4] += 1731841;
          result[5] += 273448;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 216480;
          result[1] += 0;
          result[2] += 108240;
          result[3] += 0;
          result[4] += 53362370;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
          result[0] += 10811661;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42852228;
          result[4] += 0;
          result[5] += 23200;
          result[6] += 0;
        } else {
          result[0] += 53579037;
          result[1] += 0;
          result[2] += 108053;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 65412;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53474501;
          result[4] += 98118;
          result[5] += 49059;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53652387;
          result[5] += 34704;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 15339168;
          result[2] += 34513130;
          result[3] += 0;
          result[4] += 0;
          result[5] += 3834792;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41300000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x457e0800))) ) ) {
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
          result[0] += 25849340;
          result[1] += 0;
          result[2] += 0;
          result[3] += 27837750;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53558415;
          result[1] += 0;
          result[2] += 35093;
          result[3] += 93582;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42300000))) ) ) {
          result[0] += 5752188;
          result[1] += 0;
          result[2] += 144709;
          result[3] += 47790193;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53250314;
          result[1] += 0;
          result[2] += 327582;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 109194;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
          result[0] += 53599166;
          result[1] += 35170;
          result[2] += 52755;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53076386;
          result[1] += 0;
          result[2] += 61756;
          result[3] += 548947;
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
          result[0] += 37490102;
          result[1] += 126415;
          result[2] += 410850;
          result[3] += 15636019;
          result[4] += 0;
          result[5] += 0;
          result[6] += 23702;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b40000))) ) ) {
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42160000))) ) ) {
          result[0] += 53478648;
          result[1] += 0;
          result[2] += 208442;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53655986;
          result[1] += 0;
          result[2] += 31104;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x41780000))) ) ) {
          result[0] += 8259552;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 45427538;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53621565;
          result[5] += 65525;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
          result[0] += 28935250;
          result[1] += 0;
          result[2] += 0;
          result[3] += 24751840;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 92110;
          result[1] += 447392;
          result[2] += 881626;
          result[3] += 52200169;
          result[4] += 0;
          result[5] += 65793;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 53483800;
          result[1] += 9240;
          result[2] += 129366;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 64683;
        } else {
          result[0] += 51179413;
          result[1] += 0;
          result[2] += 592723;
          result[3] += 1869359;
          result[4] += 0;
          result[5] += 0;
          result[6] += 45594;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 53687091;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42990000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
          result[0] += 6816959;
          result[1] += 0;
          result[2] += 0;
          result[3] += 46700414;
          result[4] += 141430;
          result[5] += 28286;
          result[6] += 0;
        } else {
          result[0] += 53380188;
          result[1] += 104034;
          result[2] += 166455;
          result[3] += 15605;
          result[4] += 0;
          result[5] += 0;
          result[6] += 20806;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
          result[0] += 53646357;
          result[1] += 6266;
          result[2] += 21933;
          result[3] += 9400;
          result[4] += 3133;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 51068208;
          result[4] += 0;
          result[5] += 2618882;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42540000))) ) ) {
          result[0] += 50350268;
          result[1] += 0;
          result[2] += 3217650;
          result[3] += 119172;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 4025706;
          result[1] += 329975;
          result[2] += 329975;
          result[3] += 47351552;
          result[4] += 1649879;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 175161;
          result[1] += 700647;
          result[2] += 0;
          result[3] += 14801171;
          result[4] += 38010110;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 38022;
          result[2] += 0;
          result[3] += 6539787;
          result[4] += 47109281;
          result[5] += 0;
          result[6] += 0;
        }
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1948321;
          result[3] += 0;
          result[4] += 51377968;
          result[5] += 360800;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42000000))) ) ) {
          result[0] += 53541439;
          result[1] += 0;
          result[2] += 145651;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 49758767;
          result[1] += 0;
          result[2] += 2618882;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 1309441;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 105268;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53476553;
          result[5] += 105268;
          result[6] += 0;
        } else {
          result[0] += 9839913;
          result[1] += 16318;
          result[2] += 587457;
          result[3] += 43161810;
          result[4] += 0;
          result[5] += 81591;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 8869012;
          result[1] += 0;
          result[2] += 236507;
          result[3] += 44581571;
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
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41a80000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 807324;
          result[2] += 0;
          result[3] += 1326319;
          result[4] += 51553447;
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
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 52689807;
          result[1] += 997283;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 53642840;
          result[1] += 0;
          result[2] += 35953;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 8296;
        } else {
          result[0] += 28273370;
          result[1] += 80781;
          result[2] += 500842;
          result[3] += 24783628;
          result[4] += 0;
          result[5] += 8078;
          result[6] += 40390;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x422c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 50882344;
          result[1] += 0;
          result[2] += 79379;
          result[3] += 2725367;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53473043;
          result[1] += 0;
          result[2] += 142698;
          result[3] += 32431;
          result[4] += 0;
          result[5] += 0;
          result[6] += 38917;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
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
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 52286558;
          result[1] += 0;
          result[2] += 778073;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 622459;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 53541794;
          result[1] += 0;
          result[2] += 145296;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
          result[0] += 53381616;
          result[1] += 0;
          result[2] += 305474;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53670761;
          result[1] += 0;
          result[2] += 16329;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
          result[0] += 48715570;
          result[1] += 53313;
          result[2] += 186598;
          result[3] += 4658301;
          result[4] += 0;
          result[5] += 13328;
          result[6] += 59978;
        } else {
          result[0] += 8994532;
          result[1] += 233422;
          result[2] += 840319;
          result[3] += 42840742;
          result[4] += 731389;
          result[5] += 46684;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41ac0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 892081;
          result[3] += 0;
          result[4] += 52632812;
          result[5] += 162196;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 35366;
          result[2] += 265252;
          result[3] += 53386471;
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
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x42240000))) ) ) {
          result[0] += 3355443;
          result[1] += 33554431;
          result[2] += 0;
          result[3] += 16777215;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53227512;
          result[4] += 459578;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 27917287;
          result[1] += 0;
          result[2] += 1744830;
          result[3] += 0;
          result[4] += 24024973;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 40929762;
          result[4] += 12757328;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 1203746;
          result[2] += 0;
          result[3] += 361123;
          result[4] += 52122220;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
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
          result[0] += 0;
          result[1] += 116584;
          result[2] += 291460;
          result[3] += 53133315;
          result[4] += 0;
          result[5] += 145730;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42800000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 53578404;
          result[1] += 34216;
          result[2] += 58368;
          result[3] += 4025;
          result[4] += 0;
          result[5] += 0;
          result[6] += 12076;
        } else {
          result[0] += 51769695;
          result[1] += 0;
          result[2] += 1801190;
          result[3] += 116205;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 9761289;
          result[1] += 43925801;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
          result[0] += 10028571;
          result[1] += 0;
          result[2] += 67125;
          result[3] += 43591394;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53575068;
          result[1] += 0;
          result[2] += 112023;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 52330566;
          result[1] += 0;
          result[2] += 1147828;
          result[3] += 0;
          result[4] += 0;
          result[5] += 52174;
          result[6] += 156522;
        } else {
          result[0] += 53476828;
          result[1] += 0;
          result[2] += 163537;
          result[3] += 46725;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41dc0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 63648;
          result[3] += 53559795;
          result[4] += 63648;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 51953445;
          result[1] += 671088;
          result[2] += 1062557;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42920000))) ) ) {
          result[0] += 290200;
          result[1] += 0;
          result[2] += 2611804;
          result[3] += 50785086;
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
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1342177;
          result[1] += 18790481;
          result[2] += 0;
          result[3] += 33554431;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 104653;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53408015;
          result[4] += 104653;
          result[5] += 69768;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2941758;
          result[3] += 0;
          result[4] += 50009893;
          result[5] += 735439;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 50239296;
          result[1] += 0;
          result[2] += 3447794;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 156750;
          result[3] += 0;
          result[4] += 53530340;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426a0000))) ) ) {
          result[0] += 52295479;
          result[1] += 46490;
          result[2] += 96080;
          result[3] += 1239743;
          result[4] += 0;
          result[5] += 0;
          result[6] += 9298;
        } else {
          result[0] += 2488805;
          result[1] += 0;
          result[2] += 711087;
          result[3] += 50487198;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
          result[0] += 49981269;
          result[1] += 0;
          result[2] += 102203;
          result[3] += 3580905;
          result[4] += 0;
          result[5] += 0;
          result[6] += 22711;
        } else {
          result[0] += 34513974;
          result[1] += 0;
          result[2] += 0;
          result[3] += 19173116;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 16787;
          result[2] += 0;
          result[3] += 53586364;
          result[4] += 50363;
          result[5] += 33575;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 143612;
          result[2] += 359030;
          result[3] += 0;
          result[4] += 53136577;
          result[5] += 47870;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 53520774;
          result[1] += 0;
          result[2] += 166316;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 52292621;
          result[1] += 0;
          result[2] += 697234;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 697234;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 53676955;
          result[1] += 0;
          result[2] += 10136;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0;
          result[1] += 6455046;
          result[2] += 3463683;
          result[3] += 43768361;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53468961;
          result[1] += 0;
          result[2] += 154508;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 63621;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42440000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 389896;
          result[3] += 53297194;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53347759;
          result[1] += 0;
          result[2] += 266617;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 72713;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42da0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b80000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 639132;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53047959;
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
          result[0] += 13421772;
          result[1] += 33554431;
          result[2] += 0;
          result[3] += 6710886;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41280000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 26093530;
          result[1] += 0;
          result[2] += 872109;
          result[3] += 26721450;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 7288782;
          result[1] += 208250;
          result[2] += 166600;
          result[3] += 46023456;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 53621418;
          result[1] += 0;
          result[2] += 65672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 52644623;
          result[1] += 0;
          result[2] += 521233;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 521233;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
          result[0] += 53631278;
          result[1] += 0;
          result[2] += 55812;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 47457453;
          result[1] += 280527;
          result[2] += 125753;
          result[3] += 5784663;
          result[4] += 0;
          result[5] += 19346;
          result[6] += 19346;
        } else {
          result[0] += 21717568;
          result[1] += 0;
          result[2] += 444021;
          result[3] += 28338416;
          result[4] += 3127882;
          result[5] += 9867;
          result[6] += 49335;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53460563;
          result[5] += 226527;
          result[6] += 0;
        } else {
          result[0] += 1702161;
          result[1] += 0;
          result[2] += 1012095;
          result[3] += 50696807;
          result[4] += 0;
          result[5] += 276026;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x41780000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x425c0000))) ) ) {
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
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42580000))) ) ) {
          result[0] += 16443;
          result[1] += 230204;
          result[2] += 98659;
          result[3] += 53292454;
          result[4] += 0;
          result[5] += 49329;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42220000))) ) ) {
          result[0] += 52725941;
          result[1] += 0;
          result[2] += 549228;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 411921;
        } else {
          result[0] += 53623780;
          result[1] += 0;
          result[2] += 63310;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42160000))) ) ) {
          result[0] += 53639245;
          result[1] += 0;
          result[2] += 47845;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3fc00000))) ) ) {
          result[0] += 26711441;
          result[1] += 303839;
          result[2] += 290628;
          result[3] += 26275498;
          result[4] += 0;
          result[5] += 0;
          result[6] += 105683;
        } else {
          result[0] += 31107923;
          result[1] += 0;
          result[2] += 0;
          result[3] += 22527321;
          result[4] += 0;
          result[5] += 0;
          result[6] += 51846;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 52829926;
          result[1] += 171432;
          result[2] += 685731;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 43739059;
          result[1] += 0;
          result[2] += 410833;
          result[3] += 9493180;
          result[4] += 0;
          result[5] += 0;
          result[6] += 44017;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
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
          result[3] += 52698420;
          result[4] += 942685;
          result[5] += 45984;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41f80000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 45191;
          result[2] += 0;
          result[3] += 44016184;
          result[4] += 9580524;
          result[5] += 45191;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 50861454;
          result[1] += 0;
          result[2] += 2825636;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 6100805;
          result[2] += 0;
          result[3] += 0;
          result[4] += 45145963;
          result[5] += 2440322;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 246497;
          result[3] += 0;
          result[4] += 53391294;
          result[5] += 49299;
          result[6] += 0;
        }
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
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53390164;
          result[1] += 0;
          result[2] += 282786;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 14139;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x418c0000))) ) ) {
          result[0] += 50025011;
          result[1] += 290959;
          result[2] += 541787;
          result[3] += 2789200;
          result[4] += 0;
          result[5] += 0;
          result[6] += 40132;
        } else {
          result[0] += 52383261;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1227133;
          result[4] += 0;
          result[5] += 0;
          result[6] += 76695;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42460000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 409694;
          result[3] += 53192043;
          result[4] += 0;
          result[5] += 85353;
          result[6] += 0;
        } else {
          result[0] += 53374677;
          result[1] += 0;
          result[2] += 264350;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 48063;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 53443428;
          result[1] += 0;
          result[2] += 189515;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 54147;
        } else {
          result[0] += 53660526;
          result[1] += 0;
          result[2] += 26564;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
          result[0] += 34941220;
          result[1] += 94630;
          result[2] += 306422;
          result[3] += 18268211;
          result[4] += 0;
          result[5] += 58580;
          result[6] += 18024;
        } else {
          result[0] += 171305;
          result[1] += 0;
          result[2] += 993570;
          result[3] += 42483722;
          result[4] += 10004231;
          result[5] += 34261;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x434c0000))) ) ) {
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
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42aa0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 16382457;
          result[1] += 0;
          result[2] += 1973790;
          result[3] += 35330843;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 31483170;
          result[4] += 22203920;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 574808;
          result[2] += 0;
          result[3] += 53112282;
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
          result[4] += 53687091;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1677721;
          result[1] += 5592405;
          result[2] += 0;
          result[3] += 46416964;
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
          result[4] += 53687091;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 1789569;
          result[2] += 0;
          result[3] += 51897521;
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
          result[0] += 441263;
          result[1] += 205923;
          result[2] += 588351;
          result[3] += 52422135;
          result[4] += 29417;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 8325805;
          result[4] += 45361285;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 26843545;
          result[1] += 0;
          result[2] += 26843545;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 852176;
          result[1] += 3834792;
          result[2] += 0;
          result[3] += 49000122;
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
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 50610194;
          result[1] += 95161;
          result[2] += 103091;
          result[3] += 2823132;
          result[4] += 31720;
          result[5] += 0;
          result[6] += 23790;
        } else {
          result[0] += 53579231;
          result[1] += 14980;
          result[2] += 5992;
          result[3] += 77898;
          result[4] += 0;
          result[5] += 8988;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
          result[0] += 49476932;
          result[1] += 0;
          result[2] += 166588;
          result[3] += 4013280;
          result[4] += 0;
          result[5] += 0;
          result[6] += 30288;
        } else {
          result[0] += 1067245;
          result[1] += 0;
          result[2] += 1392059;
          result[3] += 44406695;
          result[4] += 6728287;
          result[5] += 92803;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 21968463;
          result[1] += 0;
          result[2] += 448752;
          result[3] += 31127090;
          result[4] += 71392;
          result[5] += 61193;
          result[6] += 10198;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x42a20000))) ) ) {
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
          result[2] += 81715;
          result[3] += 0;
          result[4] += 53605375;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 90139;
          result[1] += 54083;
          result[2] += 0;
          result[3] += 53416672;
          result[4] += 36055;
          result[5] += 90139;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5541893;
          result[3] += 0;
          result[4] += 47106092;
          result[5] += 1039104;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 53539396;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 147694;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1294582;
          result[3] += 0;
          result[4] += 52392508;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41b80000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42da0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 129678;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53557412;
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
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 53687091;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42820000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 15339168;
          result[1] += 38347922;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
          result[0] += 53153037;
          result[1] += 70424;
          result[2] += 152586;
          result[3] += 311042;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53518119;
          result[1] += 0;
          result[2] += 157515;
          result[3] += 5727;
          result[4] += 0;
          result[5] += 0;
          result[6] += 5727;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 9468347;
          result[1] += 0;
          result[2] += 184540;
          result[3] += 44005812;
          result[4] += 0;
          result[5] += 28390;
          result[6] += 0;
        } else {
          result[0] += 53439437;
          result[1] += 0;
          result[2] += 129210;
          result[3] += 86140;
          result[4] += 0;
          result[5] += 0;
          result[6] += 32302;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x40d00000))) ) ) {
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42180000))) ) ) {
          result[0] += 0;
          result[1] += 700587;
          result[2] += 0;
          result[3] += 52986504;
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 31346711;
          result[1] += 0;
          result[2] += 1247630;
          result[3] += 21092749;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 865920;
          result[1] += 0;
          result[2] += 3896643;
          result[3] += 48924526;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
          result[0] += 22548578;
          result[1] += 0;
          result[2] += 1670265;
          result[3] += 29110333;
          result[4] += 357913;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53358490;
          result[1] += 28687;
          result[2] += 28687;
          result[3] += 268618;
          result[4] += 0;
          result[5] += 0;
          result[6] += 2607;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b40000))) ) ) {
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 23407802;
          result[1] += 93833;
          result[2] += 151576;
          result[3] += 29672980;
          result[4] += 295935;
          result[5] += 36089;
          result[6] += 28871;
        } else {
          result[0] += 52892128;
          result[1] += 0;
          result[2] += 18067;
          result[3] += 776895;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423e0000))) ) ) {
          result[0] += 45591418;
          result[1] += 0;
          result[2] += 8095672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53166509;
          result[1] += 0;
          result[2] += 235101;
          result[3] += 33585;
          result[4] += 134343;
          result[5] += 100757;
          result[6] += 16792;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x40200000))) ) ) {
          result[0] += 53223271;
          result[1] += 0;
          result[2] += 463819;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 49710269;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 3976821;
        }
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42020000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53483987;
          result[1] += 0;
          result[2] += 203103;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 53660210;
          result[1] += 0;
          result[2] += 26880;
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
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
          result[0] += 48673921;
          result[1] += 105540;
          result[2] += 257254;
          result[3] += 4604200;
          result[4] += 0;
          result[5] += 6596;
          result[6] += 39577;
        } else {
          result[0] += 10331259;
          result[1] += 161174;
          result[2] += 999279;
          result[3] += 42114791;
          result[4] += 48352;
          result[5] += 32234;
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
          result[1] += 87552;
          result[2] += 420251;
          result[3] += 53161777;
          result[4] += 0;
          result[5] += 17510;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41400000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
          result[0] += 139810;
          result[1] += 1398101;
          result[2] += 0;
          result[3] += 4334114;
          result[4] += 47815065;
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
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
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
          result[3] += 11594962;
          result[4] += 42031738;
          result[5] += 60390;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42480000))) ) ) {
          result[0] += 0;
          result[1] += 55404;
          result[2] += 369364;
          result[3] += 52043420;
          result[4] += 1108092;
          result[5] += 110809;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 49852298;
          result[3] += 0;
          result[4] += 3834792;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
          result[0] += 53536558;
          result[1] += 35419;
          result[2] += 115113;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53682987;
          result[1] += 0;
          result[2] += 4103;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 37640396;
          result[1] += 0;
          result[2] += 0;
          result[3] += 16046695;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
          result[0] += 21287918;
          result[1] += 726904;
          result[2] += 0;
          result[3] += 31672268;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53254026;
          result[1] += 77563;
          result[2] += 290864;
          result[3] += 38781;
          result[4] += 0;
          result[5] += 0;
          result[6] += 25854;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
          result[0] += 573291;
          result[1] += 0;
          result[2] += 337230;
          result[3] += 52742845;
          result[4] += 0;
          result[5] += 33723;
          result[6] += 0;
        } else {
          result[0] += 53481235;
          result[1] += 0;
          result[2] += 164684;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 41171;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41200000))) ) ) {
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
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 3928323;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49758767;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53656111;
          result[5] += 30979;
          result[6] += 0;
        } else {
          result[0] += 13214565;
          result[1] += 116736;
          result[2] += 175104;
          result[3] += 40133989;
          result[4] += 0;
          result[5] += 46694;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 53395844;
          result[1] += 41048;
          result[2] += 130963;
          result[3] += 101643;
          result[4] += 0;
          result[5] += 0;
          result[6] += 17592;
        } else {
          result[0] += 3745611;
          result[1] += 0;
          result[2] += 0;
          result[3] += 49941480;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1942369;
          result[3] += 0;
          result[4] += 51744721;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 947312;
          result[1] += 0;
          result[2] += 218610;
          result[3] += 52521168;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 4473924;
          result[1] += 0;
          result[2] += 0;
          result[3] += 49213166;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 49123087;
          result[1] += 0;
          result[2] += 336294;
          result[3] += 3531097;
          result[4] += 360316;
          result[5] += 144126;
          result[6] += 192168;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42da0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 595695;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53091395;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 49029;
          result[1] += 0;
          result[2] += 318690;
          result[3] += 51799462;
          result[4] += 1299276;
          result[5] += 220631;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 28273229;
          result[4] += 25413861;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42740000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x42060000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 989974;
          result[3] += 0;
          result[4] += 52697116;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b60000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
          result[0] += 53561203;
          result[1] += 25570;
          result[2] += 72778;
          result[3] += 15735;
          result[4] += 0;
          result[5] += 0;
          result[6] += 11801;
        } else {
          result[0] += 29283867;
          result[1] += 0;
          result[2] += 23589782;
          result[3] += 813440;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d00000))) ) ) {
          result[0] += 24501491;
          result[1] += 1621422;
          result[2] += 0;
          result[3] += 27564177;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1045852;
          result[1] += 0;
          result[2] += 0;
          result[3] += 52641238;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42200000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 45655045;
          result[1] += 0;
          result[2] += 225197;
          result[3] += 7776821;
          result[4] += 0;
          result[5] += 0;
          result[6] += 30026;
        } else {
          result[0] += 357913;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53329177;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 377487;
          result[3] += 53309603;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45cb4000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 53186900;
          result[1] += 0;
          result[2] += 416825;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 83365;
        } else {
          result[0] += 53616278;
          result[1] += 0;
          result[2] += 70812;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b40000))) ) ) {
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
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 38744090;
          result[1] += 104496;
          result[2] += 659131;
          result[3] += 12483313;
          result[4] += 1567447;
          result[5] += 88420;
          result[6] += 40190;
        } else {
          result[0] += 0;
          result[1] += 84149;
          result[2] += 694229;
          result[3] += 43862690;
          result[4] += 9024985;
          result[5] += 21037;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 1306544;
          result[1] += 0;
          result[2] += 39592;
          result[3] += 38206521;
          result[4] += 14094841;
          result[5] += 39592;
          result[6] += 0;
        } else {
          result[0] += 42050620;
          result[1] += 0;
          result[2] += 28451;
          result[3] += 11608019;
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
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
          result[0] += 7021450;
          result[1] += 900185;
          result[2] += 144029;
          result[3] += 45621424;
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
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
          result[0] += 53220246;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 466844;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 79891;
          result[2] += 0;
          result[3] += 53367525;
          result[4] += 0;
          result[5] += 239674;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x425e0000))) ) ) {
          result[0] += 53542938;
          result[1] += 30121;
          result[2] += 49485;
          result[3] += 53788;
          result[4] += 0;
          result[5] += 0;
          result[6] += 10757;
        } else {
          result[0] += 51967441;
          result[1] += 0;
          result[2] += 170075;
          result[3] += 1530677;
          result[4] += 0;
          result[5] += 0;
          result[6] += 18897;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d60000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41100000))) ) ) {
          result[0] += 9270042;
          result[1] += 136995;
          result[2] += 1004635;
          result[3] += 30717479;
          result[4] += 12557938;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53425628;
          result[4] += 174308;
          result[5] += 87154;
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
          result[0] += 1501736;
          result[1] += 5256078;
          result[2] += 0;
          result[3] += 46929275;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
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
          result[2] += 651056;
          result[3] += 52752241;
          result[4] += 200324;
          result[5] += 83468;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x433f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53381691;
          result[1] += 0;
          result[2] += 179027;
          result[3] += 84248;
          result[4] += 0;
          result[5] += 0;
          result[6] += 42124;
        }
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423c0000))) ) ) {
          result[0] += 50933907;
          result[1] += 0;
          result[2] += 2753184;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42060000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53572497;
          result[1] += 0;
          result[2] += 114593;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 53525139;
          result[1] += 0;
          result[2] += 161952;
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
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41680000))) ) ) {
          result[0] += 748252;
          result[1] += 1496504;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50881145;
          result[5] += 561189;
          result[6] += 0;
        } else {
          result[0] += 1147418;
          result[1] += 362342;
          result[2] += 407635;
          result[3] += 51769695;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1011532;
          result[3] += 14186744;
          result[4] += 38412949;
          result[5] += 75864;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 25295973;
          result[1] += 0;
          result[2] += 45516;
          result[3] += 28311463;
          result[4] += 0;
          result[5] += 0;
          result[6] += 34137;
        } else {
          result[0] += 47978152;
          result[1] += 0;
          result[2] += 0;
          result[3] += 5708938;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
          result[0] += 53049299;
          result[1] += 0;
          result[2] += 175080;
          result[3] += 400183;
          result[4] += 0;
          result[5] += 12505;
          result[6] += 50022;
        } else {
          result[0] += 48600121;
          result[1] += 0;
          result[2] += 939132;
          result[3] += 4147836;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x41c80000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53605251;
          result[5] += 81840;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41780000))) ) ) {
          result[0] += 0;
          result[1] += 21474836;
          result[2] += 26843545;
          result[3] += 0;
          result[4] += 0;
          result[5] += 5368709;
          result[6] += 0;
        } else {
          result[0] += 50206;
          result[1] += 0;
          result[2] += 83676;
          result[3] += 53486266;
          result[4] += 0;
          result[5] += 66941;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bf0000))) ) ) {
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
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 53572067;
          result[1] += 0;
          result[2] += 46009;
          result[3] += 51760;
          result[4] += 0;
          result[5] += 0;
          result[6] += 17253;
        } else {
          result[0] += 976128;
          result[1] += 0;
          result[2] += 0;
          result[3] += 52710962;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 17216801;
          result[1] += 0;
          result[2] += 0;
          result[3] += 36470290;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 52420626;
          result[1] += 0;
          result[2] += 1156337;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 110127;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 53627123;
          result[1] += 0;
          result[2] += 55969;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 3997;
        } else {
          result[0] += 29296446;
          result[1] += 226421;
          result[2] += 490580;
          result[3] += 23648484;
          result[4] += 0;
          result[5] += 0;
          result[6] += 25157;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
          result[0] += 53269809;
          result[1] += 0;
          result[2] += 189673;
          result[3] += 227608;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 51276989;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2410101;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 49603;
          result[2] += 0;
          result[3] += 53538281;
          result[4] += 66137;
          result[5] += 33068;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40900000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53443612;
          result[5] += 243478;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41300000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 10129639;
          result[2] += 35453739;
          result[3] += 0;
          result[4] += 0;
          result[5] += 8103711;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b60000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 48977697;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4709393;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41500000))) ) ) {
          result[0] += 22665069;
          result[1] += 1012963;
          result[2] += 0;
          result[3] += 30009058;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
          result[0] += 53634405;
          result[1] += 29270;
          result[2] += 17562;
          result[3] += 5854;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53205416;
          result[1] += 0;
          result[2] += 44235;
          result[3] += 427609;
          result[4] += 0;
          result[5] += 0;
          result[6] += 9830;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 53213961;
          result[1] += 118282;
          result[2] += 315419;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 39427;
        } else {
          result[0] += 33473617;
          result[1] += 0;
          result[2] += 270480;
          result[3] += 19923201;
          result[4] += 0;
          result[5] += 0;
          result[6] += 19791;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41380000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 11150629;
          result[1] += 303831;
          result[2] += 0;
          result[3] += 42232629;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 634277;
          result[1] += 0;
          result[2] += 1359166;
          result[3] += 30762476;
          result[4] += 20931169;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 52898467;
          result[1] += 0;
          result[2] += 788623;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1376592;
          result[1] += 4818072;
          result[2] += 0;
          result[3] += 47492426;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40200000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 283309;
          result[4] += 53403781;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 305040;
          result[2] += 0;
          result[3] += 4423084;
          result[4] += 48958966;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 53413874;
          result[1] += 0;
          result[2] += 245895;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 27321;
        } else {
          result[0] += 53671518;
          result[1] += 0;
          result[2] += 15573;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53535218;
          result[5] += 151872;
          result[6] += 0;
        } else {
          result[0] += 21715088;
          result[1] += 85296;
          result[2] += 383834;
          result[3] += 31446007;
          result[4] += 0;
          result[5] += 49756;
          result[6] += 7108;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42100000))) ) ) {
          result[0] += 53428773;
          result[1] += 0;
          result[2] += 186563;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 71755;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 77751;
          result[1] += 0;
          result[2] += 0;
          result[3] += 52384761;
          result[4] += 1127390;
          result[5] += 97188;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 227809;
          result[2] += 0;
          result[3] += 40474143;
          result[4] += 12985138;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
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
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 47197442;
          result[1] += 0;
          result[2] += 4719744;
          result[3] += 0;
          result[4] += 1769904;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1665330;
          result[3] += 0;
          result[4] += 51704554;
          result[5] += 317205;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 52425985;
          result[1] += 0;
          result[2] += 1141000;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 120105;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 53667423;
          result[1] += 0;
          result[2] += 19668;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 5123081;
          result[1] += 1333404;
          result[2] += 2105376;
          result[3] += 45125228;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 52789067;
          result[1] += 0;
          result[2] += 214453;
          result[3] += 629957;
          result[4] += 0;
          result[5] += 0;
          result[6] += 53613;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 46017506;
          result[2] += 0;
          result[3] += 7669584;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 338364;
          result[3] += 53348727;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
          result[0] += 18771030;
          result[1] += 194518;
          result[2] += 0;
          result[3] += 34624283;
          result[4] += 97259;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53561825;
          result[1] += 31813;
          result[2] += 47720;
          result[3] += 39766;
          result[4] += 0;
          result[5] += 0;
          result[6] += 5965;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 13157761;
          result[1] += 0;
          result[2] += 28541;
          result[3] += 40300995;
          result[4] += 114167;
          result[5] += 85625;
          result[6] += 0;
        } else {
          result[0] += 35410634;
          result[1] += 0;
          result[2] += 0;
          result[3] += 17990886;
          result[4] += 0;
          result[5] += 285569;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
          result[0] += 13247915;
          result[1] += 521571;
          result[2] += 0;
          result[3] += 39917604;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 31605541;
          result[1] += 0;
          result[2] += 3174663;
          result[3] += 14250712;
          result[4] += 4656173;
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
          result[0] += 177771;
          result[1] += 1599946;
          result[2] += 0;
          result[3] += 51909372;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
          result[0] += 244974;
          result[1] += 0;
          result[2] += 527637;
          result[3] += 52914479;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 46282728;
          result[1] += 0;
          result[2] += 480519;
          result[3] += 6574375;
          result[4] += 131050;
          result[5] += 109208;
          result[6] += 109208;
        }
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41380000))) ) ) {
          result[0] += 508882;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53178208;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 32746;
          result[2] += 0;
          result[3] += 53588853;
          result[4] += 0;
          result[5] += 65492;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49660559;
          result[5] += 4026531;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b80000))) ) ) {
          result[0] += 0;
          result[1] += 13421772;
          result[2] += 40265318;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 50636688;
          result[1] += 0;
          result[2] += 1220161;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1830241;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 53609492;
          result[1] += 5542;
          result[2] += 66513;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 5542;
        } else {
          result[0] += 0;
          result[1] += 35791394;
          result[2] += 0;
          result[3] += 17895697;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 51089789;
          result[1] += 0;
          result[2] += 185521;
          result[3] += 2397509;
          result[4] += 0;
          result[5] += 0;
          result[6] += 14270;
        } else {
          result[0] += 27745266;
          result[1] += 0;
          result[2] += 455815;
          result[3] += 25446373;
          result[4] += 0;
          result[5] += 39636;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 27743181;
          result[1] += 357208;
          result[2] += 582117;
          result[3] += 24964894;
          result[4] += 0;
          result[5] += 0;
          result[6] += 39689;
        } else {
          result[0] += 52871653;
          result[1] += 0;
          result[2] += 65893;
          result[3] += 749543;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41180000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41cc0000))) ) ) {
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 16941;
          result[2] += 0;
          result[3] += 53568501;
          result[4] += 0;
          result[5] += 101648;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420a0000))) ) ) {
          result[0] += 52060209;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1626881;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
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
          result[4] += 53687091;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 14641933;
          result[2] += 34164512;
          result[3] += 0;
          result[4] += 0;
          result[5] += 4880644;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420a0000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420a0000))) ) ) {
          result[0] += 53318650;
          result[1] += 0;
          result[2] += 368440;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53650645;
          result[1] += 0;
          result[2] += 27334;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 9111;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 52981729;
          result[1] += 329927;
          result[2] += 318550;
          result[3] += 11376;
          result[4] += 0;
          result[5] += 0;
          result[6] += 45507;
        } else {
          result[0] += 41487201;
          result[1] += 0;
          result[2] += 681981;
          result[3] += 11517908;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
          result[0] += 167191;
          result[1] += 0;
          result[2] += 222922;
          result[3] += 53296977;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 45181810;
          result[1] += 0;
          result[2] += 459205;
          result[3] += 7946248;
          result[4] += 0;
          result[5] += 19965;
          result[6] += 79861;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x450d7000))) ) ) {
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 4405445;
          result[1] += 0;
          result[2] += 0;
          result[3] += 49258819;
          result[4] += 0;
          result[5] += 22826;
          result[6] += 0;
        } else {
          result[0] += 15945105;
          result[1] += 39273;
          result[2] += 0;
          result[3] += 37663438;
          result[4] += 0;
          result[5] += 39273;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41300000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 13707342;
          result[2] += 38837470;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1142278;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
          result[0] += 53559870;
          result[1] += 0;
          result[2] += 122327;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 4893;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 52858237;
          result[1] += 235469;
          result[2] += 518033;
          result[3] += 28256;
          result[4] += 0;
          result[5] += 0;
          result[6] += 47093;
        } else {
          result[0] += 21919640;
          result[1] += 0;
          result[2] += 390706;
          result[3] += 31356707;
          result[4] += 0;
          result[5] += 0;
          result[6] += 20036;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41780000))) ) ) {
          result[0] += 813440;
          result[1] += 0;
          result[2] += 4880644;
          result[3] += 0;
          result[4] += 46366124;
          result[5] += 1626881;
          result[6] += 0;
        } else {
          result[0] += 52343;
          result[1] += 34895;
          result[2] += 34895;
          result[3] += 53495164;
          result[4] += 0;
          result[5] += 69791;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41300000))) ) ) {
          result[0] += 53617277;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 69814;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1370005;
          result[3] += 0;
          result[4] += 52317085;
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
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 53637927;
          result[1] += 0;
          result[2] += 49164;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53197767;
          result[1] += 0;
          result[2] += 46162;
          result[3] += 424695;
          result[4] += 0;
          result[5] += 0;
          result[6] += 18465;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 19173961;
          result[1] += 2556528;
          result[2] += 0;
          result[3] += 31956601;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 35791394;
          result[2] += 0;
          result[3] += 17895697;
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
          result[0] += 53633152;
          result[1] += 0;
          result[2] += 53938;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 49081779;
          result[1] += 168259;
          result[2] += 386372;
          result[3] += 4013289;
          result[4] += 0;
          result[5] += 6231;
          result[6] += 31159;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 98292;
          result[3] += 53588799;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 120848;
          result[2] += 0;
          result[3] += 39759263;
          result[4] += 13806978;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3fc00000))) ) ) {
          result[0] += 10587034;
          result[1] += 30076;
          result[2] += 451152;
          result[3] += 22377140;
          result[4] += 20121380;
          result[5] += 120307;
          result[6] += 0;
        } else {
          result[0] += 4975076;
          result[1] += 0;
          result[2] += 0;
          result[3] += 31927964;
          result[4] += 16784049;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42380000))) ) ) {
          result[0] += 0;
          result[1] += 858993;
          result[2] += 214748;
          result[3] += 52613349;
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41d00000))) ) ) {
          result[0] += 3067833;
          result[1] += 0;
          result[2] += 0;
          result[3] += 50619257;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53392021;
          result[1] += 37128;
          result[2] += 127016;
          result[3] += 121154;
          result[4] += 0;
          result[5] += 0;
          result[6] += 9770;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 320126;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53366964;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
          result[0] += 49628576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4058514;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41b80000))) ) ) {
          result[0] += 53047373;
          result[1] += 0;
          result[2] += 492090;
          result[3] += 98418;
          result[4] += 0;
          result[5] += 0;
          result[6] += 49209;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 25053975;
          result[3] += 0;
          result[4] += 21474836;
          result[5] += 7158278;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x42a20000))) ) ) {
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
          result[2] += 159072;
          result[3] += 0;
          result[4] += 53528018;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x429e0000))) ) ) {
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42580000))) ) ) {
          result[0] += 0;
          result[1] += 149176;
          result[2] += 116026;
          result[3] += 53339011;
          result[4] += 0;
          result[5] += 82876;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
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
          result[0] += 53563467;
          result[1] += 0;
          result[2] += 123623;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0;
          result[1] += 3463683;
          result[2] += 0;
          result[3] += 50223407;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 45027882;
          result[1] += 0;
          result[2] += 0;
          result[3] += 8659208;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 1496978;
          result[1] += 1360889;
          result[2] += 2857867;
          result[3] += 47971355;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 33007982;
          result[1] += 8186;
          result[2] += 114611;
          result[3] += 20490818;
          result[4] += 0;
          result[5] += 8186;
          result[6] += 57305;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 53125568;
          result[1] += 0;
          result[2] += 212283;
          result[3] += 321848;
          result[4] += 0;
          result[5] += 0;
          result[6] += 27391;
        } else {
          result[0] += 52138711;
          result[1] += 0;
          result[2] += 208435;
          result[3] += 1339944;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42220000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 53468597;
          result[1] += 0;
          result[2] += 218493;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53662719;
          result[1] += 0;
          result[2] += 24371;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 50953026;
          result[1] += 0;
          result[2] += 1739859;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 994205;
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
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
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
          result[0] += 53660799;
          result[1] += 0;
          result[2] += 26291;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 51994477;
          result[1] += 139681;
          result[2] += 287580;
          result[3] += 1199619;
          result[4] += 0;
          result[5] += 8216;
          result[6] += 57516;
        } else {
          result[0] += 36186152;
          result[1] += 0;
          result[2] += 0;
          result[3] += 17468042;
          result[4] += 0;
          result[5] += 32896;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 8632954;
          result[1] += 247071;
          result[2] += 872015;
          result[3] += 43935050;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 103810;
          result[2] += 0;
          result[3] += 53548677;
          result[4] += 17301;
          result[5] += 17301;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 47721858;
          result[5] += 5965232;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 621558;
          result[3] += 0;
          result[4] += 53065532;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40900000))) ) ) {
          result[0] += 52800921;
          result[1] += 0;
          result[2] += 664626;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 221542;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 53620712;
          result[1] += 0;
          result[2] += 66378;
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
          result[0] += 16574538;
          result[1] += 504442;
          result[2] += 540474;
          result[3] += 36067636;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 1922934;
          result[1] += 434211;
          result[2] += 589286;
          result[3] += 47018850;
          result[4] += 3721808;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 52677707;
          result[1] += 0;
          result[2] += 288395;
          result[3] += 660273;
          result[4] += 0;
          result[5] += 15178;
          result[6] += 45536;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 174308;
          result[2] += 0;
          result[3] += 53454679;
          result[4] += 58102;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53471480;
          result[5] += 215610;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8947848;
          result[3] += 0;
          result[4] += 44739242;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 24053;
          result[1] += 24053;
          result[2] += 0;
          result[3] += 53470610;
          result[4] += 168373;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 5651272;
          result[1] += 0;
          result[2] += 42384545;
          result[3] += 0;
          result[4] += 5651272;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1184670;
          result[3] += 0;
          result[4] += 52287026;
          result[5] += 215394;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
          result[0] += 35724494;
          result[1] += 0;
          result[2] += 0;
          result[3] += 17962596;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53527279;
          result[1] += 33131;
          result[2] += 99395;
          result[3] += 7795;
          result[4] += 0;
          result[5] += 0;
          result[6] += 19489;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 28293543;
          result[1] += 0;
          result[2] += 576281;
          result[3] += 24780087;
          result[4] += 0;
          result[5] += 18589;
          result[6] += 18589;
        } else {
          result[0] += 37837660;
          result[1] += 0;
          result[2] += 73080;
          result[3] += 15776349;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42cf0000))) ) ) {
          result[0] += 10474295;
          result[1] += 607205;
          result[2] += 0;
          result[3] += 42554989;
          result[4] += 50600;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 14199846;
          result[1] += 0;
          result[2] += 2334221;
          result[3] += 37153023;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cc0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
          result[0] += 2440322;
          result[1] += 0;
          result[2] += 0;
          result[3] += 51246768;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 454975;
          result[1] += 909950;
          result[2] += 0;
          result[3] += 227487;
          result[4] += 52094677;
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
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40900000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x40200000))) ) ) {
          result[0] += 53302513;
          result[1] += 0;
          result[2] += 384578;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 52274272;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 1412818;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 52777140;
          result[1] += 0;
          result[2] += 909950;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53665854;
          result[1] += 0;
          result[2] += 21236;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
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
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41980000))) ) ) {
          result[0] += 53668488;
          result[1] += 0;
          result[2] += 18602;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 47121044;
          result[1] += 81313;
          result[2] += 213447;
          result[3] += 6169644;
          result[4] += 0;
          result[5] += 10164;
          result[6] += 91477;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 8658713;
          result[1] += 368455;
          result[2] += 399160;
          result[3] += 39931405;
          result[4] += 4329356;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1247877;
          result[1] += 0;
          result[2] += 964268;
          result[3] += 8735142;
          result[4] += 42654720;
          result[5] += 85082;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41700000))) ) ) {
          result[0] += 0;
          result[1] += 150965;
          result[2] += 226448;
          result[3] += 53309677;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1436443;
          result[3] += 52250647;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53521134;
          result[5] += 165957;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42180000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 122853;
          result[3] += 41401715;
          result[4] += 12162521;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 52591436;
          result[1] += 0;
          result[2] += 1095654;
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
          result[4] += 53687091;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 7407986;
          result[1] += 749122;
          result[2] += 0;
          result[3] += 45529982;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40200000))) ) ) {
          result[0] += 53609057;
          result[1] += 0;
          result[2] += 78033;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 38406257;
          result[1] += 0;
          result[2] += 21492;
          result[3] += 15259341;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 18500753;
          result[1] += 0;
          result[2] += 1070483;
          result[3] += 29624476;
          result[4] += 4375020;
          result[5] += 46542;
          result[6] += 69814;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42100000))) ) ) {
          result[0] += 0;
          result[1] += 596523;
          result[2] += 1107828;
          result[3] += 44440981;
          result[4] += 7541758;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53436801;
          result[1] += 250289;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 2131354;
          result[1] += 0;
          result[2] += 0;
          result[3] += 979270;
          result[4] += 50576465;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 53469913;
          result[1] += 0;
          result[2] += 51533;
          result[3] += 158282;
          result[4] += 3680;
          result[5] += 0;
          result[6] += 3680;
        } else {
          result[0] += 1073741;
          result[1] += 330382;
          result[2] += 82595;
          result[3] += 14619407;
          result[4] += 37580963;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
          result[0] += 38355764;
          result[1] += 70578;
          result[2] += 70578;
          result[3] += 15096063;
          result[4] += 0;
          result[5] += 47052;
          result[6] += 47052;
        } else {
          result[0] += 44340265;
          result[1] += 0;
          result[2] += 403460;
          result[3] += 6966411;
          result[4] += 1976954;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41280000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 410242;
          result[1] += 355543;
          result[2] += 902533;
          result[3] += 52018770;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 5965232;
          result[1] += 0;
          result[2] += 47721858;
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
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x42240000))) ) ) {
          result[0] += 2684354;
          result[1] += 26843545;
          result[2] += 0;
          result[3] += 24159191;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1563701;
          result[1] += 0;
          result[2] += 0;
          result[3] += 52123389;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41c80000))) ) ) {
          result[0] += 37851675;
          result[1] += 0;
          result[2] += 215610;
          result[3] += 14949016;
          result[4] += 670789;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 46579019;
          result[1] += 0;
          result[2] += 268229;
          result[3] += 6767627;
          result[4] += 25791;
          result[5] += 25791;
          result[6] += 20633;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 53622693;
          result[1] += 0;
          result[2] += 64397;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 32366094;
          result[1] += 126955;
          result[2] += 261378;
          result[3] += 20178400;
          result[4] += 709455;
          result[5] += 37339;
          result[6] += 7467;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x433f0000))) ) ) {
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
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41e80000))) ) ) {
          result[0] += 48072329;
          result[1] += 65035;
          result[2] += 184268;
          result[3] += 5343778;
          result[4] += 0;
          result[5] += 0;
          result[6] += 21678;
        } else {
          result[0] += 52974390;
          result[1] += 11276;
          result[2] += 33830;
          result[3] += 654060;
          result[4] += 0;
          result[5] += 6766;
          result[6] += 6766;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 10154850;
          result[1] += 0;
          result[2] += 855145;
          result[3] += 42570202;
          result[4] += 80169;
          result[5] += 26723;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5405991;
          result[3] += 0;
          result[4] += 48281099;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 22877795;
          result[1] += 0;
          result[2] += 757278;
          result[3] += 1753698;
          result[4] += 28298318;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 688528;
          result[1] += 0;
          result[2] += 362383;
          result[3] += 52328153;
          result[4] += 217430;
          result[5] += 90595;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
          result[0] += 35103098;
          result[1] += 0;
          result[2] += 0;
          result[3] += 18583993;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 53377008;
          result[1] += 0;
          result[2] += 256620;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 53462;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x42080000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 5506368;
          result[1] += 19272289;
          result[2] += 0;
          result[3] += 28908433;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
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
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 32377083;
          result[1] += 0;
          result[2] += 1295083;
          result[3] += 20014924;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 287712;
          result[2] += 0;
          result[3] += 53399379;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 14641933;
          result[4] += 39045157;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3763113;
          result[4] += 49923977;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_3/test_data.csv", "r");
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
