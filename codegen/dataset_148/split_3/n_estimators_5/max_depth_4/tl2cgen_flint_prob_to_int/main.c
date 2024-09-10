
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
      result[4] += 858993459;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x41080000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 7151267;
          result[1] += 8413256;
          result[2] += 12619884;
          result[3] += 830809050;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 851254779;
          result[1] += 0;
          result[2] += 7738679;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42420000))) ) ) {
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
          result[2] += 0;
          result[3] += 0;
          result[4] += 858993459;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42780000))) ) ) {
          result[0] += 844575181;
          result[1] += 327688;
          result[2] += 491532;
          result[3] += 13517135;
          result[4] += 0;
          result[5] += 0;
          result[6] += 81922;
        } else {
          result[0] += 545130464;
          result[1] += 0;
          result[2] += 313862994;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 10447831;
          result[1] += 5905296;
          result[2] += 8630817;
          result[3] += 769505510;
          result[4] += 62686989;
          result[5] += 1817014;
          result[6] += 0;
        } else {
          result[0] += 783668089;
          result[1] += 0;
          result[2] += 2345035;
          result[3] += 72696087;
          result[4] += 0;
          result[5] += 0;
          result[6] += 284246;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
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
          result[2] += 10898417;
          result[3] += 848095041;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 858993459;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
          result[0] += 837907056;
          result[1] += 0;
          result[2] += 21086402;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1171887;
          result[3] += 857821571;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 212572910;
          result[1] += 6215582;
          result[2] += 0;
          result[3] += 640204965;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 26188824;
          result[1] += 15713294;
          result[2] += 9427976;
          result[3] += 807663362;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
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
          result[2] += 0;
          result[3] += 0;
          result[4] += 858993459;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42020000))) ) ) {
          result[0] += 858993459;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 858487623;
          result[1] += 0;
          result[2] += 421529;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 84305;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
          result[0] += 1028734;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 856935989;
          result[5] += 1028734;
          result[6] += 0;
        } else {
          result[0] += 352830326;
          result[1] += 1209075;
          result[2] += 9562691;
          result[3] += 494182289;
          result[4] += 0;
          result[5] += 659495;
          result[6] += 549579;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 753691196;
          result[1] += 0;
          result[2] += 0;
          result[3] += 105302262;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 850545236;
          result[1] += 0;
          result[2] += 5450466;
          result[3] += 2452709;
          result[4] += 0;
          result[5] += 0;
          result[6] += 545046;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42fb0000))) ) ) {
          result[0] += 9303178;
          result[1] += 0;
          result[2] += 0;
          result[3] += 55819069;
          result[4] += 793871211;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 36552913;
          result[1] += 127935196;
          result[2] += 0;
          result[3] += 292423305;
          result[4] += 402082044;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 858511149;
          result[4] += 482309;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 828787095;
          result[1] += 13215283;
          result[2] += 16991079;
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
        result[4] += 858993459;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 858993459;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 52060209;
          result[1] += 0;
          result[2] += 33467277;
          result[3] += 773465971;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 858993459;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 857274378;
          result[1] += 0;
          result[2] += 1640940;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 78140;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x43080000))) ) ) {
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
          result[2] += 0;
          result[3] += 0;
          result[4] += 858993459;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 755520647;
          result[1] += 2921223;
          result[2] += 1691234;
          result[3] += 98552856;
          result[4] += 0;
          result[5] += 153748;
          result[6] += 153748;
        } else {
          result[0] += 334856584;
          result[1] += 0;
          result[2] += 7776511;
          result[3] += 466901749;
          result[4] += 48525431;
          result[5] += 155530;
          result[6] += 777651;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 854149510;
          result[5] += 4843948;
          result[6] += 0;
        } else {
          result[0] += 23311500;
          result[1] += 0;
          result[2] += 15541000;
          result[3] += 818021731;
          result[4] += 0;
          result[5] += 2119227;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
          result[0] += 572662306;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 286331153;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 858993459;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
          result[0] += 63897278;
          result[1] += 4406708;
          result[2] += 3147649;
          result[3] += 786912292;
          result[4] += 0;
          result[5] += 629529;
          result[6] += 0;
        } else {
          result[0] += 402017972;
          result[1] += 0;
          result[2] += 0;
          result[3] += 456975486;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x422c0000))) ) ) {
          result[0] += 857566817;
          result[1] += 217097;
          result[2] += 930418;
          result[3] += 62027;
          result[4] += 0;
          result[5] += 0;
          result[6] += 217097;
        } else {
          result[0] += 649547523;
          result[1] += 0;
          result[2] += 76885217;
          result[3] += 132560718;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41dc0000))) ) ) {
          result[0] += 0;
          result[1] += 5784467;
          result[2] += 0;
          result[3] += 853208991;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 330382099;
          result[1] += 462534939;
          result[2] += 0;
          result[3] += 66076419;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 349854951;
          result[1] += 0;
          result[2] += 0;
          result[3] += 509138507;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 228629437;
          result[1] += 0;
          result[2] += 0;
          result[3] += 630364021;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
          result[0] += 186012513;
          result[1] += 0;
          result[2] += 0;
          result[3] += 672980945;
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
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41b80000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 858993459;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 828532698;
          result[1] += 0;
          result[2] += 26653165;
          result[3] += 2284557;
          result[4] += 0;
          result[5] += 0;
          result[6] += 1523038;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 858993459;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3886848;
          result[3] += 0;
          result[4] += 848628530;
          result[5] += 6478080;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42060000))) ) ) {
        result[0] += 858993459;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 855092883;
          result[1] += 0;
          result[2] += 2600383;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 1300191;
        } else {
          result[0] += 858559477;
          result[1] += 0;
          result[2] += 433981;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43590000))) ) ) {
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
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 10125659;
          result[1] += 0;
          result[2] += 18001172;
          result[3] += 667730999;
          result[4] += 162010554;
          result[5] += 1125073;
          result[6] += 0;
        } else {
          result[0] += 627829557;
          result[1] += 0;
          result[2] += 2278497;
          result[3] += 228678268;
          result[4] += 0;
          result[5] += 0;
          result[6] += 207136;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 141243890;
          result[1] += 12971377;
          result[2] += 0;
          result[3] += 590918319;
          result[4] += 113859871;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 2231151;
          result[1] += 0;
          result[2] += 0;
          result[3] += 187416754;
          result[4] += 669345552;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 499124;
          result[1] += 11978990;
          result[2] += 10481616;
          result[3] += 812075745;
          result[4] += 23458856;
          result[5] += 499124;
          result[6] += 0;
        } else {
          result[0] += 854656672;
          result[1] += 619540;
          result[2] += 2168393;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 1548852;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 478687323;
          result[1] += 0;
          result[2] += 8451247;
          result[3] += 113983491;
          result[4] += 257871396;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1111246;
          result[3] += 654524123;
          result[4] += 202987673;
          result[5] += 370415;
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
