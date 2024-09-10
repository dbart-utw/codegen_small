
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
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 30608;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53656482;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 9752511;
        result[1] += 124147;
        result[2] += 68971;
        result[3] += 43713872;
        result[4] += 0;
        result[5] += 27588;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 53392559;
        result[1] += 32513;
        result[2] += 130053;
        result[3] += 118577;
        result[4] += 0;
        result[5] += 0;
        result[6] += 13387;
      } else {
        result[0] += 155614;
        result[1] += 778073;
        result[2] += 0;
        result[3] += 52753402;
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
        result[3] += 53567406;
        result[4] += 102586;
        result[5] += 17097;
        result[6] += 0;
      } else {
        result[0] += 25579328;
        result[1] += 0;
        result[2] += 927092;
        result[3] += 0;
        result[4] += 27180670;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 53574976;
        result[1] += 0;
        result[2] += 0;
        result[3] += 112115;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53269667;
        result[1] += 0;
        result[2] += 353204;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 64219;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 19509578;
        result[1] += 143002;
        result[2] += 715010;
        result[3] += 33258213;
        result[4] += 61286;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 28211;
        result[1] += 282118;
        result[2] += 0;
        result[3] += 7617191;
        result[4] += 45759570;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        result[0] += 52386607;
        result[1] += 24608;
        result[2] += 49217;
        result[3] += 1215299;
        result[4] += 1892;
        result[5] += 0;
        result[6] += 9464;
      } else {
        result[0] += 1291935;
        result[1] += 0;
        result[2] += 813440;
        result[3] += 45696231;
        result[4] += 5789784;
        result[5] += 95698;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 24539137;
        result[1] += 0;
        result[2] += 0;
        result[3] += 29147953;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 10568928;
        result[1] += 0;
        result[2] += 0;
        result[3] += 43118163;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42200000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2596630;
        result[3] += 0;
        result[4] += 50669385;
        result[5] += 421075;
        result[6] += 0;
      } else {
        result[0] += 53356098;
        result[1] += 0;
        result[2] += 231695;
        result[3] += 66198;
        result[4] += 0;
        result[5] += 0;
        result[6] += 33099;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
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
        result[0] += 53613189;
        result[1] += 0;
        result[2] += 68974;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4926;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 869611;
        result[1] += 343267;
        result[2] += 789516;
        result[3] += 43377613;
        result[4] += 8249870;
        result[5] += 57211;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 234327;
        result[2] += 0;
        result[3] += 7602633;
        result[4] += 45850129;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 52881553;
        result[1] += 0;
        result[2] += 224494;
        result[3] += 521618;
        result[4] += 0;
        result[5] += 6602;
        result[6] += 52822;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 39680;
        result[3] += 53647411;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 3239738;
        result[1] += 0;
        result[2] += 0;
        result[3] += 50447352;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 22754665;
        result[1] += 135329;
        result[2] += 753977;
        result[3] += 29656463;
        result[4] += 386655;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 462819;
        result[1] += 0;
        result[2] += 0;
        result[3] += 41653777;
        result[4] += 11570493;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 59685;
        result[1] += 417798;
        result[2] += 0;
        result[3] += 4237669;
        result[4] += 48971938;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 6443726;
        result[1] += 31899;
        result[2] += 287096;
        result[3] += 45839780;
        result[4] += 988888;
        result[5] += 95698;
        result[6] += 0;
      } else {
        result[0] += 53362362;
        result[1] += 23760;
        result[2] += 79202;
        result[3] += 211865;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9900;
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
        result[0] += 19067030;
        result[1] += 0;
        result[2] += 304785;
        result[3] += 28237491;
        result[4] += 6015033;
        result[5] += 35857;
        result[6] += 26892;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 48045715;
        result[1] += 0;
        result[2] += 47011;
        result[3] += 5186931;
        result[4] += 391762;
        result[5] += 5223;
        result[6] += 10446;
      } else {
        result[0] += 27770391;
        result[1] += 0;
        result[2] += 716993;
        result[3] += 21894540;
        result[4] += 3235215;
        result[5] += 52462;
        result[6] += 17487;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53625767;
        result[1] += 0;
        result[2] += 58403;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2920;
      } else {
        result[0] += 29166929;
        result[1] += 98474;
        result[2] += 313887;
        result[3] += 19867239;
        result[4] += 4197477;
        result[5] += 18463;
        result[6] += 24618;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 9581080;
        result[1] += 619466;
        result[2] += 289084;
        result[3] += 43197459;
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
        result[0] += 57296;
        result[1] += 744858;
        result[2] += 0;
        result[3] += 9282079;
        result[4] += 43602856;
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
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
        result[0] += 6731577;
        result[1] += 36784;
        result[2] += 220707;
        result[3] += 41493003;
        result[4] += 5076271;
        result[5] += 128746;
        result[6] += 0;
      } else {
        result[0] += 53178560;
        result[1] += 38092;
        result[2] += 100944;
        result[3] += 356161;
        result[4] += 0;
        result[5] += 0;
        result[6] += 13332;
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
        result[0] += 19282437;
        result[1] += 0;
        result[2] += 543037;
        result[3] += 27786958;
        result[4] += 6028637;
        result[5] += 36816;
        result[6] += 9204;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42da0000))) ) ) {
        result[0] += 8269757;
        result[1] += 353786;
        result[2] += 0;
        result[3] += 45063546;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 624268;
        result[2] += 0;
        result[3] += 208089;
        result[4] += 52854733;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 494811;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1030858;
        result[4] += 52161421;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 16504512;
        result[1] += 0;
        result[2] += 2086777;
        result[3] += 35095801;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
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
        result[4] += 53451621;
        result[5] += 235469;
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
        result[1] += 169520;
        result[2] += 389896;
        result[3] += 53009009;
        result[4] += 0;
        result[5] += 118664;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 53499878;
        result[1] += 33152;
        result[2] += 132608;
        result[3] += 9750;
        result[4] += 0;
        result[5] += 0;
        result[6] += 11700;
      } else {
        result[0] += 362750;
        result[1] += 1813753;
        result[2] += 0;
        result[3] += 51510587;
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
        result[0] += 22235604;
        result[1] += 0;
        result[2] += 375568;
        result[3] += 30998878;
        result[4] += 0;
        result[5] += 9629;
        result[6] += 67409;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45b71400))) ) ) {
        result[0] += 53650089;
        result[1] += 0;
        result[2] += 37001;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 26843545;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 26843545;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 32627142;
        result[1] += 105194;
        result[2] += 332414;
        result[3] += 17588528;
        result[4] += 2979109;
        result[5] += 42077;
        result[6] += 12623;
      } else {
        result[0] += 387505;
        result[1] += 0;
        result[2] += 915921;
        result[3] += 42801716;
        result[4] += 9441037;
        result[5] += 140911;
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
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 8134407;
        result[1] += 856253;
        result[2] += 0;
        result[3] += 44696429;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 18916592;
        result[1] += 0;
        result[2] += 540474;
        result[3] += 34230024;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1071171;
        result[4] += 52615920;
        result[5] += 0;
        result[6] += 0;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 49748350;
        result[4] += 3922922;
        result[5] += 15818;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 254770;
        result[2] += 741150;
        result[3] += 0;
        result[4] += 52552204;
        result[5] += 138965;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 53410923;
        result[1] += 0;
        result[2] += 248551;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 27616;
      } else {
        result[0] += 53664328;
        result[1] += 0;
        result[2] += 22762;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 50432026;
        result[1] += 188948;
        result[2] += 377896;
        result[3] += 2653865;
        result[4] += 0;
        result[5] += 0;
        result[6] += 34354;
      } else {
        result[0] += 22140471;
        result[1] += 0;
        result[2] += 284112;
        result[3] += 31232067;
        result[4] += 0;
        result[5] += 0;
        result[6] += 30440;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 53231413;
        result[1] += 0;
        result[2] += 455677;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53618084;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 69006;
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
        result[0] += 53667099;
        result[1] += 0;
        result[2] += 19991;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 49115149;
        result[1] += 66452;
        result[2] += 192712;
        result[3] += 4219742;
        result[4] += 0;
        result[5] += 19935;
        result[6] += 73097;
      } else {
        result[0] += 6295716;
        result[1] += 237948;
        result[2] += 406495;
        result[3] += 29247815;
        result[4] += 17479287;
        result[5] += 19829;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
        result[0] += 0;
        result[1] += 52617;
        result[2] += 245546;
        result[3] += 53388927;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1225382;
        result[3] += 0;
        result[4] += 52461708;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x41180000))) ) ) {
        result[0] += 22330029;
        result[1] += 151170;
        result[2] += 561490;
        result[3] += 30104507;
        result[4] += 539894;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 15991899;
        result[1] += 0;
        result[2] += 0;
        result[3] += 37695191;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 125730;
        result[1] += 335282;
        result[2] += 0;
        result[3] += 11525331;
        result[4] += 41700746;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 6915199;
        result[1] += 0;
        result[2] += 440058;
        result[3] += 44948794;
        result[4] += 1131578;
        result[5] += 251461;
        result[6] += 0;
      } else {
        result[0] += 53364675;
        result[1] += 21494;
        result[2] += 64483;
        result[3] += 232530;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3908;
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
        result[0] += 19786305;
        result[1] += 0;
        result[2] += 511394;
        result[3] += 27113189;
        result[4] += 6229710;
        result[5] += 27894;
        result[6] += 18596;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 26809694;
        result[1] += 0;
        result[2] += 677012;
        result[3] += 26200383;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 7929394;
        result[1] += 800214;
        result[2] += 400107;
        result[3] += 44557375;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53660460;
        result[1] += 0;
        result[2] += 26630;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 28769958;
        result[1] += 0;
        result[2] += 669579;
        result[3] += 21843653;
        result[4] += 2359992;
        result[5] += 10976;
        result[6] += 32930;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53636730;
        result[1] += 0;
        result[2] += 44435;
        result[3] += 0;
        result[4] += 5924;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 30366978;
        result[1] += 132302;
        result[2] += 188009;
        result[3] += 18912339;
        result[4] += 4059607;
        result[5] += 27853;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41780000))) ) ) {
        result[0] += 61356;
        result[1] += 276105;
        result[2] += 337461;
        result[3] += 0;
        result[4] += 52920132;
        result[5] += 92035;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 16941;
        result[2] += 101648;
        result[3] += 53534619;
        result[4] += 0;
        result[5] += 33882;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 53545623;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 141467;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 842450;
        result[3] += 0;
        result[4] += 52844640;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 44765551;
        result[1] += 0;
        result[2] += 134466;
        result[3] += 8781227;
        result[4] += 0;
        result[5] += 5846;
        result[6] += 0;
      } else {
        result[0] += 53378357;
        result[1] += 0;
        result[2] += 146242;
        result[3] += 129992;
        result[4] += 0;
        result[5] += 0;
        result[6] += 32498;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 53154238;
        result[1] += 43676;
        result[2] += 142676;
        result[3] += 340676;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5823;
      } else {
        result[0] += 36860052;
        result[1] += 0;
        result[2] += 181960;
        result[3] += 16645077;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53600499;
        result[5] += 86592;
        result[6] += 0;
      } else {
        result[0] += 9866336;
        result[1] += 237029;
        result[2] += 622201;
        result[3] += 42872638;
        result[4] += 0;
        result[5] += 88885;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 53467299;
        result[1] += 0;
        result[2] += 63624;
        result[3] += 150384;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5784;
      } else {
        result[0] += 29148670;
        result[1] += 0;
        result[2] += 464742;
        result[3] += 23924960;
        result[4] += 0;
        result[5] += 0;
        result[6] += 148717;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x41080000))) ) ) {
        result[0] += 31647127;
        result[1] += 0;
        result[2] += 0;
        result[3] += 20909709;
        result[4] += 1130254;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 45514798;
        result[1] += 41939;
        result[2] += 135805;
        result[3] += 6600544;
        result[4] += 1374031;
        result[5] += 5991;
        result[6] += 13979;
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
        result[0] += 7456540;
        result[1] += 389036;
        result[2] += 518715;
        result[3] += 45322797;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x453af800))) ) ) {
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 4396884;
        result[1] += 0;
        result[2] += 0;
        result[3] += 49267658;
        result[4] += 0;
        result[5] += 22548;
        result[6] += 0;
      } else {
        result[0] += 18199013;
        result[1] += 174990;
        result[2] += 839954;
        result[3] += 34403136;
        result[4] += 0;
        result[5] += 69996;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 53143751;
        result[1] += 0;
        result[2] += 517465;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 25873;
      } else {
        result[0] += 53673342;
        result[1] += 0;
        result[2] += 13748;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 50515300;
        result[1] += 181492;
        result[2] += 388911;
        result[3] += 2549531;
        result[4] += 0;
        result[5] += 0;
        result[6] += 51854;
      } else {
        result[0] += 21750660;
        result[1] += 0;
        result[2] += 344779;
        result[3] += 31542397;
        result[4] += 0;
        result[5] += 9850;
        result[6] += 39403;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 47758254;
        result[1] += 98268;
        result[2] += 87349;
        result[3] += 5688626;
        result[4] += 0;
        result[5] += 10918;
        result[6] += 43674;
      } else {
        result[0] += 52956563;
        result[1] += 6722;
        result[2] += 47058;
        result[3] += 665542;
        result[4] += 0;
        result[5] += 6722;
        result[6] += 4481;
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
        result[0] += 9824265;
        result[1] += 330624;
        result[2] += 755712;
        result[3] += 42729256;
        result[4] += 0;
        result[5] += 47232;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 4038116;
        result[1] += 0;
        result[2] += 959880;
        result[3] += 42996011;
        result[4] += 5626883;
        result[5] += 66198;
        result[6] += 0;
      } else {
        result[0] += 10289866;
        result[1] += 0;
        result[2] += 19126;
        result[3] += 34465314;
        result[4] += 8912783;
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
        result[0] += 52932705;
        result[1] += 0;
        result[2] += 502923;
        result[3] += 176023;
        result[4] += 0;
        result[5] += 0;
        result[6] += 75438;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
        result[0] += 52537367;
        result[1] += 0;
        result[2] += 1149723;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 4314369;
        result[1] += 280816;
        result[2] += 408460;
        result[3] += 47815464;
        result[4] += 867979;
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
        result[0] += 708740;
        result[1] += 2303406;
        result[2] += 0;
        result[3] += 50674944;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 6575312;
        result[1] += 33893;
        result[2] += 406720;
        result[3] += 45247643;
        result[4] += 1254054;
        result[5] += 169466;
        result[6] += 0;
      } else {
        result[0] += 53333782;
        result[1] += 33554;
        result[2] += 65135;
        result[3] += 244749;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9868;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 23709031;
        result[1] += 0;
        result[2] += 0;
        result[3] += 29978059;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 43890758;
        result[1] += 0;
        result[2] += 598147;
        result[3] += 13292;
        result[4] += 9118431;
        result[5] += 13292;
        result[6] += 53168;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
        result[0] += 52229523;
        result[1] += 0;
        result[2] += 1457568;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 4374878;
        result[1] += 303459;
        result[2] += 303459;
        result[3] += 47719049;
        result[4] += 986244;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41a80000))) ) ) {
        result[0] += 87867;
        result[1] += 351470;
        result[2] += 0;
        result[3] += 14014878;
        result[4] += 39232874;
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
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 46794344;
        result[1] += 67355;
        result[2] += 134711;
        result[3] += 6614343;
        result[4] += 31432;
        result[5] += 17961;
        result[6] += 26942;
      } else {
        result[0] += 53336813;
        result[1] += 0;
        result[2] += 69424;
        result[3] += 173560;
        result[4] += 100980;
        result[5] += 6311;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 7662394;
        result[1] += 0;
        result[2] += 314548;
        result[3] += 36877633;
        result[4] += 8782186;
        result[5] += 50327;
        result[6] += 0;
      } else {
        result[0] += 53418548;
        result[1] += 0;
        result[2] += 139642;
        result[3] += 75192;
        result[4] += 0;
        result[5] += 0;
        result[6] += 53708;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53267988;
        result[1] += 0;
        result[2] += 335282;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 83820;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += 53626019;
        result[1] += 0;
        result[2] += 61072;
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 1113840;
        result[1] += 542997;
        result[2] += 306306;
        result[3] += 47867276;
        result[4] += 3842748;
        result[5] += 13923;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 840951;
        result[3] += 10129639;
        result[4] += 42620937;
        result[5] += 95562;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 29179823;
        result[1] += 0;
        result[2] += 56751;
        result[3] += 24403223;
        result[4] += 0;
        result[5] += 0;
        result[6] += 47293;
      } else {
        result[0] += 52282235;
        result[1] += 10806;
        result[2] += 270164;
        result[3] += 1069851;
        result[4] += 0;
        result[5] += 21613;
        result[6] += 32419;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43590000))) ) ) {
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
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40900000))) ) ) {
        result[0] += 53628777;
        result[1] += 0;
        result[2] += 47205;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 11107;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 945976;
        result[1] += 327004;
        result[2] += 805831;
        result[3] += 43059452;
        result[4] += 8443716;
        result[5] += 105108;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 418001;
        result[2] += 0;
        result[3] += 8412283;
        result[4] += 44856805;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 29447350;
        result[1] += 0;
        result[2] += 56197;
        result[3] += 24146078;
        result[4] += 0;
        result[5] += 0;
        result[6] += 37464;
      } else {
        result[0] += 52334635;
        result[1] += 0;
        result[2] += 292130;
        result[3] += 1017046;
        result[4] += 0;
        result[5] += 0;
        result[6] += 43278;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 34861;
        result[1] += 34861;
        result[2] += 139446;
        result[3] += 52501791;
        result[4] += 906405;
        result[5] += 69723;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 256195;
        result[2] += 0;
        result[3] += 5066968;
        result[4] += 48363927;
        result[5] += 0;
        result[6] += 0;
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
        result[0] += 0;
        result[1] += 0;
        result[2] += 1344153;
        result[3] += 0;
        result[4] += 52342937;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 53304392;
        result[1] += 0;
        result[2] += 273355;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 109342;
      } else {
        result[0] += 53655302;
        result[1] += 0;
        result[2] += 31789;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x425c0000))) ) ) {
        result[0] += 38066797;
        result[1] += 49074;
        result[2] += 417130;
        result[3] += 15109922;
        result[4] += 0;
        result[5] += 0;
        result[6] += 44166;
      } else {
        result[0] += 10182034;
        result[1] += 1203331;
        result[2] += 0;
        result[3] += 42301725;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 0;
        result[1] += 14389;
        result[2] += 474852;
        result[3] += 42664761;
        result[4] += 10475529;
        result[5] += 57557;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 316144;
        result[2] += 0;
        result[3] += 5776822;
        result[4] += 47594123;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a00000))) ) ) {
        result[0] += 51382924;
        result[1] += 2304167;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 53350963;
        result[1] += 21341;
        result[2] += 42682;
        result[3] += 264100;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8003;
      } else {
        result[0] += 43082394;
        result[1] += 45541;
        result[2] += 331803;
        result[3] += 10201328;
        result[4] += 0;
        result[5] += 3252;
        result[6] += 22770;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
        result[0] += 7480244;
        result[1] += 0;
        result[2] += 217871;
        result[3] += 40324325;
        result[4] += 5646494;
        result[5] += 18155;
        result[6] += 0;
      } else {
        result[0] += 53177956;
        result[1] += 30396;
        result[2] += 123484;
        result[3] += 340056;
        result[4] += 0;
        result[5] += 0;
        result[6] += 15198;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 23397654;
        result[1] += 0;
        result[2] += 0;
        result[3] += 30289437;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 43338928;
        result[1] += 0;
        result[2] += 794958;
        result[3] += 27412;
        result[4] += 9402436;
        result[5] += 54824;
        result[6] += 68530;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 9575897;
        result[1] += 265997;
        result[2] += 0;
        result[3] += 43712198;
        result[4] += 132998;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 5362615;
        result[1] += 0;
        result[2] += 304694;
        result[3] += 11334618;
        result[4] += 36685163;
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
        result[0] += 1851279;
        result[1] += 5183581;
        result[2] += 0;
        result[3] += 46652230;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 6491576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 45055049;
        result[4] += 2140465;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 9352349;
        result[1] += 41844;
        result[2] += 0;
        result[3] += 40192089;
        result[4] += 4017116;
        result[5] += 83689;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 48273266;
        result[1] += 0;
        result[2] += 4962672;
        result[3] += 0;
        result[4] += 451152;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 313677;
        result[2] += 361935;
        result[3] += 0;
        result[4] += 52963220;
        result[5] += 48258;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 26451096;
        result[1] += 470939;
        result[2] += 0;
        result[3] += 26765055;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 47342158;
        result[1] += 33197;
        result[2] += 141090;
        result[3] += 6158194;
        result[4] += 0;
        result[5] += 2074;
        result[6] += 10374;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x422c0000))) ) ) {
        result[0] += 53037485;
        result[1] += 0;
        result[2] += 122760;
        result[3] += 501270;
        result[4] += 0;
        result[5] += 0;
        result[6] += 25575;
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
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d60000))) ) ) {
        result[0] += 16617432;
        result[1] += 0;
        result[2] += 0;
        result[3] += 27908765;
        result[4] += 9160892;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 173184;
        result[1] += 1731841;
        result[2] += 0;
        result[3] += 14374285;
        result[4] += 37407779;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41e80000))) ) ) {
        result[0] += 0;
        result[1] += 261888;
        result[2] += 0;
        result[3] += 2968066;
        result[4] += 50457136;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 11735238;
        result[1] += 151842;
        result[2] += 911053;
        result[3] += 26420556;
        result[4] += 14468399;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40600000))) ) ) {
        result[0] += 53639229;
        result[1] += 0;
        result[2] += 42231;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5630;
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
        result[0] += 42173241;
        result[1] += 54253;
        result[2] += 349635;
        result[3] += 10278069;
        result[4] += 765580;
        result[5] += 54253;
        result[6] += 12056;
      } else {
        result[0] += 0;
        result[1] += 83776;
        result[2] += 572476;
        result[3] += 42712304;
        result[4] += 10262681;
        result[5] += 55851;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 136045;
        result[1] += 17005;
        result[2] += 238080;
        result[3] += 52241604;
        result[4] += 918309;
        result[5] += 136045;
        result[6] += 0;
      } else {
        result[0] += 26748825;
        result[1] += 0;
        result[2] += 947196;
        result[3] += 0;
        result[4] += 25991068;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41a80000))) ) ) {
        result[0] += 0;
        result[1] += 417392;
        result[2] += 0;
        result[3] += 9860894;
        result[4] += 43408804;
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
        result[0] += 521233;
        result[1] += 1911190;
        result[2] += 0;
        result[3] += 51254666;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 47573810;
        result[1] += 0;
        result[2] += 123947;
        result[3] += 5953919;
        result[4] += 0;
        result[5] += 8853;
        result[6] += 26560;
      } else {
        result[0] += 49497909;
        result[1] += 30802;
        result[2] += 143013;
        result[3] += 4008765;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6600;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 52348944;
        result[1] += 90284;
        result[2] += 106406;
        result[3] += 1109210;
        result[4] += 0;
        result[5] += 0;
        result[6] += 32244;
      } else {
        result[0] += 13442683;
        result[1] += 191184;
        result[2] += 250930;
        result[3] += 36301220;
        result[4] += 3477174;
        result[5] += 23898;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 53682166;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 4924;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 6014613;
        result[1] += 0;
        result[2] += 1125888;
        result[3] += 2844349;
        result[4] += 43702240;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 9165404;
        result[1] += 0;
        result[2] += 0;
        result[3] += 44521687;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 4227330;
        result[1] += 0;
        result[2] += 2184120;
        result[3] += 0;
        result[4] += 46993818;
        result[5] += 281822;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53305203;
        result[1] += 0;
        result[2] += 350064;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 31824;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 53549307;
        result[1] += 0;
        result[2] += 105364;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 32419;
      } else {
        result[0] += 53662825;
        result[1] += 0;
        result[2] += 24265;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 1092268;
        result[1] += 400959;
        result[2] += 387133;
        result[3] += 48128963;
        result[4] += 3650113;
        result[5] += 27652;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 875015;
        result[3] += 10344633;
        result[4] += 42467441;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 31246760;
        result[1] += 8238;
        result[2] += 148284;
        result[3] += 22226142;
        result[4] += 0;
        result[5] += 8238;
        result[6] += 49428;
      } else {
        result[0] += 51930508;
        result[1] += 0;
        result[2] += 235035;
        result[3] += 1385473;
        result[4] += 0;
        result[5] += 0;
        result[6] += 136073;
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
        result[0] += 0;
        result[1] += 187538;
        result[2] += 460321;
        result[3] += 52902840;
        result[4] += 0;
        result[5] += 136391;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 53254746;
        result[1] += 0;
        result[2] += 356048;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 76296;
      } else {
        result[0] += 53657163;
        result[1] += 0;
        result[2] += 29927;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 28101088;
        result[1] += 139243;
        result[2] += 208865;
        result[3] += 25185677;
        result[4] += 0;
        result[5] += 0;
        result[6] += 52216;
      } else {
        result[0] += 45959912;
        result[1] += 76791;
        result[2] += 681527;
        result[3] += 6930463;
        result[4] += 0;
        result[5] += 9598;
        result[6] += 28796;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 24941247;
        result[1] += 0;
        result[2] += 0;
        result[3] += 6861281;
        result[4] += 21852044;
        result[5] += 32517;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 17567;
        result[2] += 632439;
        result[3] += 50893816;
        result[4] += 2072996;
        result[5] += 70271;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 43394747;
        result[4] += 10292343;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 425309;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53261782;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 53449795;
        result[1] += 44736;
        result[2] += 149768;
        result[3] += 33065;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9725;
      } else {
        result[0] += 15678531;
        result[1] += 593883;
        result[2] += 0;
        result[3] += 37414676;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        result[0] += 23438314;
        result[1] += 0;
        result[2] += 246837;
        result[3] += 30001939;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 46950143;
        result[1] += 0;
        result[2] += 260616;
        result[3] += 6372084;
        result[4] += 0;
        result[5] += 13030;
        result[6] += 91215;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 16236196;
        result[1] += 0;
        result[2] += 44851;
        result[3] += 7983544;
        result[4] += 29377648;
        result[5] += 44851;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 69243;
        result[2] += 784764;
        result[3] += 46670377;
        result[4] += 6116543;
        result[5] += 46162;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += 50222114;
        result[1] += 49533;
        result[2] += 148600;
        result[3] += 3233821;
        result[4] += 0;
        result[5] += 2358;
        result[6] += 30663;
      } else {
        result[0] += 46745120;
        result[1] += 0;
        result[2] += 64137;
        result[3] += 6877833;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1234186;
        result[1] += 7405116;
        result[2] += 0;
        result[3] += 45047789;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 7389387;
        result[1] += 501748;
        result[2] += 0;
        result[3] += 45795955;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 4814753;
        result[1] += 0;
        result[2] += 673030;
        result[3] += 10716709;
        result[4] += 37482597;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45b53000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53605718;
        result[1] += 0;
        result[2] += 76586;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4786;
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
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 49270395;
        result[1] += 100991;
        result[2] += 168319;
        result[3] += 4080057;
        result[4] += 0;
        result[5] += 0;
        result[6] += 67327;
      } else {
        result[0] += 6044111;
        result[1] += 207057;
        result[2] += 552153;
        result[3] += 28997931;
        result[4] += 17836537;
        result[5] += 49299;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 0;
        result[1] += 87324;
        result[2] += 0;
        result[3] += 53512442;
        result[4] += 52394;
        result[5] += 34929;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2721126;
        result[3] += 0;
        result[4] += 50892420;
        result[5] += 73543;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42220000))) ) ) {
        result[0] += 52660288;
        result[1] += 0;
        result[2] += 733430;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 293372;
      } else {
        result[0] += 53618656;
        result[1] += 0;
        result[2] += 68434;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 53636780;
        result[1] += 0;
        result[2] += 50310;
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
        result[0] += 915960;
        result[1] += 325018;
        result[2] += 275772;
        result[3] += 34314038;
        result[4] += 17787357;
        result[5] += 68943;
        result[6] += 0;
      } else {
        result[0] += 52780441;
        result[1] += 6715;
        result[2] += 268636;
        result[3] += 570853;
        result[4] += 0;
        result[5] += 6715;
        result[6] += 53727;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 114227;
        result[2] += 0;
        result[3] += 12279494;
        result[4] += 41236255;
        result[5] += 57113;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 631387;
        result[3] += 52960038;
        result[4] += 38265;
        result[5] += 57398;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 48270907;
        result[1] += 0;
        result[2] += 71467;
        result[3] += 4895494;
        result[4] += 449221;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 27939567;
        result[1] += 0;
        result[2] += 592929;
        result[3] += 21956367;
        result[4] += 3036518;
        result[5] += 71870;
        result[6] += 89837;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53640243;
        result[1] += 0;
        result[2] += 32207;
        result[3] += 0;
        result[4] += 5855;
        result[5] += 0;
        result[6] += 8783;
      } else {
        result[0] += 29805289;
        result[1] += 100185;
        result[2] += 300557;
        result[3] += 19323345;
        result[4] += 4107619;
        result[5] += 31308;
        result[6] += 18784;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 10875273;
        result[1] += 497811;
        result[2] += 229759;
        result[3] += 42084246;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 5914679;
        result[4] += 47772411;
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
        result[0] += 2284557;
        result[1] += 4949873;
        result[2] += 0;
        result[3] += 46452660;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x453af800))) ) ) {
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 3440483;
        result[1] += 194377;
        result[2] += 427630;
        result[3] += 49566286;
        result[4] += 0;
        result[5] += 58313;
        result[6] += 0;
      } else {
        result[0] += 23871014;
        result[1] += 0;
        result[2] += 136146;
        result[3] += 29679930;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 53364807;
        result[1] += 0;
        result[2] += 295426;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 26856;
      } else {
        result[0] += 53666553;
        result[1] += 0;
        result[2] += 20537;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 27872315;
        result[1] += 198405;
        result[2] += 558475;
        result[3] += 25035849;
        result[4] += 0;
        result[5] += 7348;
        result[6] += 14696;
      } else {
        result[0] += 52131121;
        result[1] += 0;
        result[2] += 269538;
        result[3] += 1212921;
        result[4] += 0;
        result[5] += 0;
        result[6] += 73510;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 646832;
        result[1] += 0;
        result[2] += 0;
        result[3] += 53040258;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 974765;
        result[2] += 0;
        result[3] += 149963;
        result[4] += 52562361;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 320576;
        result[1] += 94287;
        result[2] += 452578;
        result[3] += 36319402;
        result[4] += 16500247;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53468406;
        result[1] += 0;
        result[2] += 218684;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        result[0] += 52433288;
        result[1] += 34246;
        result[2] += 43759;
        result[3] += 1151062;
        result[4] += 7610;
        result[5] += 3805;
        result[6] += 13318;
      } else {
        result[0] += 1524946;
        result[1] += 0;
        result[2] += 941878;
        result[3] += 45793249;
        result[4] += 5427015;
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
        result[0] += 19359862;
        result[1] += 0;
        result[2] += 410940;
        result[3] += 27624332;
        result[4] += 6173239;
        result[5] += 73056;
        result[6] += 45660;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
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
        result[0] += 319712;
        result[1] += 614831;
        result[2] += 541051;
        result[3] += 52211495;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53071883;
        result[1] += 0;
        result[2] += 615207;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
        result[0] += 53637797;
        result[1] += 0;
        result[2] += 45185;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4107;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
        result[0] += 35199685;
        result[1] += 130523;
        result[2] += 281931;
        result[3] += 17453656;
        result[4] += 563863;
        result[5] += 10441;
        result[6] += 46988;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 536870;
        result[3] += 35165044;
        result[4] += 17776392;
        result[5] += 208783;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 31277;
        result[1] += 0;
        result[2] += 0;
        result[3] += 50262251;
        result[4] += 3377923;
        result[5] += 15638;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 34636833;
        result[1] += 4329604;
        result[2] += 13421772;
        result[3] += 0;
        result[4] += 0;
        result[5] += 1298881;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 53241786;
        result[1] += 0;
        result[2] += 417473;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 27831;
      } else {
        result[0] += 53666493;
        result[1] += 0;
        result[2] += 20597;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 28253664;
        result[1] += 249060;
        result[2] += 402891;
        result[3] += 24774149;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7325;
      } else {
        result[0] += 51856433;
        result[1] += 0;
        result[2] += 183065;
        result[3] += 1610978;
        result[4] += 0;
        result[5] += 0;
        result[6] += 36613;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 7547197;
        result[1] += 0;
        result[2] += 0;
        result[3] += 46017506;
        result[4] += 61193;
        result[5] += 61193;
        result[6] += 0;
      } else {
        result[0] += 108022;
        result[1] += 0;
        result[2] += 1620334;
        result[3] += 0;
        result[4] += 51742689;
        result[5] += 216044;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 53214252;
        result[1] += 22787;
        result[2] += 100644;
        result[3] += 330417;
        result[4] += 0;
        result[5] += 0;
        result[6] += 18989;
      } else {
        result[0] += 34850720;
        result[1] += 0;
        result[2] += 193545;
        result[3] += 18611608;
        result[4] += 0;
        result[5] += 0;
        result[6] += 31217;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += 528069;
        result[1] += 2464325;
        result[2] += 0;
        result[3] += 4576604;
        result[4] += 46118091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 7994016;
        result[1] += 272523;
        result[2] += 0;
        result[3] += 45420550;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 604681;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1554895;
        result[4] += 51527513;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 16912417;
        result[1] += 0;
        result[2] += 2359872;
        result[3] += 34414802;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 31506;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53655584;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 13253890;
        result[1] += 200281;
        result[2] += 70687;
        result[3] += 40115107;
        result[4] += 0;
        result[5] += 47124;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 53422299;
        result[1] += 27059;
        result[2] += 121765;
        result[3] += 102437;
        result[4] += 0;
        result[5] += 0;
        result[6] += 13529;
      } else {
        result[0] += 0;
        result[1] += 10905190;
        result[2] += 0;
        result[3] += 42781900;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
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
        result[2] += 518107;
        result[3] += 43450976;
        result[4] += 9704004;
        result[5] += 14002;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 53562444;
        result[1] += 0;
        result[2] += 0;
        result[3] += 124646;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53319565;
        result[1] += 0;
        result[2] += 254441;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 113084;
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
        result[0] += 53273317;
        result[1] += 0;
        result[2] += 387912;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 25860;
      } else {
        result[0] += 53667154;
        result[1] += 0;
        result[2] += 19936;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 1068399;
        result[1] += 393620;
        result[2] += 281157;
        result[3] += 47712486;
        result[4] += 4161136;
        result[5] += 70289;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 918228;
        result[3] += 10295886;
        result[4] += 42394828;
        result[5] += 78147;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3fc00000))) ) ) {
        result[0] += 38941077;
        result[1] += 22897;
        result[2] += 290035;
        result[3] += 14387285;
        result[4] += 0;
        result[5] += 0;
        result[6] += 45795;
      } else {
        result[0] += 42024446;
        result[1] += 0;
        result[2] += 14971;
        result[3] += 11617730;
        result[4] += 0;
        result[5] += 0;
        result[6] += 29942;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
        result[0] += 53179411;
        result[1] += 0;
        result[2] += 507679;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 3252575;
        result[1] += 352688;
        result[2] += 78375;
        result[3] += 31624439;
        result[4] += 18379011;
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
        result[0] += 29449660;
        result[1] += 0;
        result[2] += 371498;
        result[3] += 21558142;
        result[4] += 2217730;
        result[5] += 67545;
        result[6] += 22515;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 46284786;
        result[1] += 73370;
        result[2] += 293483;
        result[3] += 5637328;
        result[4] += 1381817;
        result[5] += 4076;
        result[6] += 12228;
      } else {
        result[0] += 2418942;
        result[1] += 335964;
        result[2] += 403157;
        result[3] += 14984006;
        result[4] += 35545020;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 48916945;
        result[1] += 0;
        result[2] += 8744;
        result[3] += 4603999;
        result[4] += 148657;
        result[5] += 0;
        result[6] += 8744;
      } else {
        result[0] += 9825219;
        result[1] += 0;
        result[2] += 20092;
        result[3] += 25336610;
        result[4] += 18485076;
        result[5] += 20092;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += 0;
        result[1] += 3213663;
        result[2] += 0;
        result[3] += 3780781;
        result[4] += 46692646;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 17973817;
        result[1] += 270418;
        result[2] += 288446;
        result[3] += 35154408;
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
        result[0] += 25793145;
        result[1] += 0;
        result[2] += 1400532;
        result[3] += 26493412;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 53656475;
        result[1] += 0;
        result[2] += 28574;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2041;
      } else {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 10737418;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 39983204;
        result[1] += 162429;
        result[2] += 188075;
        result[3] += 13011425;
        result[4] += 290662;
        result[5] += 17097;
        result[6] += 34195;
      } else {
        result[0] += 19129032;
        result[1] += 0;
        result[2] += 397750;
        result[3] += 27389296;
        result[4] += 6706261;
        result[5] += 46250;
        result[6] += 18500;
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
        result[4] += 53664245;
        result[5] += 22845;
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
        result[0] += 33765;
        result[1] += 202592;
        result[2] += 422068;
        result[3] += 52927368;
        result[4] += 0;
        result[5] += 101296;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53643155;
        result[1] += 0;
        result[2] += 38444;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5492;
      } else {
        result[0] += 28256746;
        result[1] += 225240;
        result[2] += 363290;
        result[3] += 24805485;
        result[4] += 0;
        result[5] += 7265;
        result[6] += 29063;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x43438000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 53687091;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53044913;
        result[1] += 0;
        result[2] += 151407;
        result[3] += 469886;
        result[4] += 0;
        result[5] += 0;
        result[6] += 20883;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
        result[0] += 53074224;
        result[1] += 0;
        result[2] += 612866;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 3222001;
        result[1] += 310554;
        result[2] += 38819;
        result[3] += 31598909;
        result[4] += 18516805;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 16335938;
        result[1] += 443008;
        result[2] += 526072;
        result[3] += 30761401;
        result[4] += 5620670;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 5849177;
        result[1] += 0;
        result[2] += 292458;
        result[3] += 5431378;
        result[4] += 42114076;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 6892261;
        result[1] += 65954;
        result[2] += 0;
        result[3] += 46432078;
        result[4] += 263818;
        result[5] += 32977;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1524020;
        result[3] += 0;
        result[4] += 52093796;
        result[5] += 69273;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53643552;
        result[1] += 0;
        result[2] += 35245;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8293;
      } else {
        result[0] += 36788633;
        result[1] += 52857;
        result[2] += 216714;
        result[3] += 16570742;
        result[4] += 0;
        result[5] += 10571;
        result[6] += 47571;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 10385466;
        result[1] += 490424;
        result[2] += 0;
        result[3] += 42811200;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 29009866;
        result[1] += 0;
        result[2] += 1318630;
        result[3] += 23358594;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 5895798;
        result[1] += 0;
        result[2] += 652069;
        result[3] += 42846428;
        result[4] += 4238454;
        result[5] += 54339;
        result[6] += 0;
      } else {
        result[0] += 48921499;
        result[1] += 23738;
        result[2] += 102374;
        result[3] += 4627609;
        result[4] += 0;
        result[5] += 5934;
        result[6] += 5934;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43590000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 158369;
        result[3] += 0;
        result[4] += 53528722;
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
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
        result[0] += 26843545;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 26843545;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53644130;
        result[1] += 0;
        result[2] += 38869;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4091;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 36045427;
        result[1] += 62983;
        result[2] += 409392;
        result[3] += 15487629;
        result[4] += 1631271;
        result[5] += 18895;
        result[6] += 31491;
      } else {
        result[0] += 19155345;
        result[1] += 0;
        result[2] += 465387;
        result[3] += 27755704;
        result[4] += 6254806;
        result[5] += 18615;
        result[6] += 37230;
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
        result[0] += 6999477;
        result[1] += 586343;
        result[2] += 219878;
        result[3] += 45881391;
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
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 53078307;
        result[1] += 0;
        result[2] += 494636;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 114146;
      } else {
        result[0] += 53658393;
        result[1] += 0;
        result[2] += 28697;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 49109378;
        result[1] += 59622;
        result[2] += 165619;
        result[3] += 4272973;
        result[4] += 0;
        result[5] += 13249;
        result[6] += 66247;
      } else {
        result[0] += 5597186;
        result[1] += 229474;
        result[2] += 468926;
        result[3] += 29702001;
        result[4] += 17679525;
        result[5] += 9977;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 0;
        result[1] += 70455;
        result[2] += 0;
        result[3] += 53510952;
        result[4] += 70455;
        result[5] += 35227;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1890390;
        result[3] += 0;
        result[4] += 51796700;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 53613848;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 73242;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 139978;
        result[2] += 150745;
        result[3] += 34380842;
        result[4] += 18993988;
        result[5] += 21535;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        result[0] += 22675293;
        result[1] += 555766;
        result[2] += 0;
        result[3] += 30456031;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53368444;
        result[1] += 28967;
        result[2] += 150632;
        result[3] += 121664;
        result[4] += 0;
        result[5] += 0;
        result[6] += 17380;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 4814417;
        result[1] += 0;
        result[2] += 1140256;
        result[3] += 41714394;
        result[4] += 5923000;
        result[5] += 95021;
        result[6] += 0;
      } else {
        result[0] += 53180609;
        result[1] += 0;
        result[2] += 217063;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 289418;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 10265945;
        result[1] += 0;
        result[2] += 57033;
        result[3] += 33972674;
        result[4] += 9391438;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53610285;
        result[1] += 0;
        result[2] += 15361;
        result[3] += 61444;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41fc0000))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 53289163;
        result[1] += 0;
        result[2] += 364767;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 33160;
      } else {
        result[0] += 53668137;
        result[1] += 0;
        result[2] += 18953;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 1224906;
        result[1] += 542856;
        result[2] += 320145;
        result[3] += 47980140;
        result[4] += 3563364;
        result[5] += 55677;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 878153;
        result[3] += 10877124;
        result[4] += 41851981;
        result[5] += 79832;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 29114454;
        result[1] += 0;
        result[2] += 103010;
        result[3] += 24441532;
        result[4] += 0;
        result[5] += 0;
        result[6] += 28093;
      } else {
        result[0] += 52215610;
        result[1] += 0;
        result[2] += 351398;
        result[3] += 1098120;
        result[4] += 0;
        result[5] += 0;
        result[6] += 21962;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += 51643166;
        result[1] += 0;
        result[2] += 2043924;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 4612668;
        result[1] += 245645;
        result[2] += 81881;
        result[3] += 48746896;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41b80000))) ) ) {
        result[0] += 200138;
        result[1] += 700483;
        result[2] += 0;
        result[3] += 11958261;
        result[4] += 40828207;
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
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 6123230;
        result[1] += 0;
        result[2] += 348240;
        result[3] += 43965374;
        result[4] += 3163185;
        result[5] += 87060;
        result[6] += 0;
      } else {
        result[0] += 53336643;
        result[1] += 33282;
        result[2] += 97890;
        result[3] += 201654;
        result[4] += 0;
        result[5] += 0;
        result[6] += 17620;
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
        result[0] += 19221192;
        result[1] += 0;
        result[2] += 425728;
        result[3] += 27916925;
        result[4] += 6050780;
        result[5] += 27174;
        result[6] += 45290;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42220000))) ) ) {
        result[0] += 53627187;
        result[1] += 0;
        result[2] += 56575;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3327;
      } else {
        result[0] += 53681722;
        result[1] += 0;
        result[2] += 5368;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
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
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 1103846;
        result[1] += 387063;
        result[2] += 272377;
        result[3] += 48182193;
        result[4] += 3712939;
        result[5] += 28671;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 928307;
        result[3] += 9863262;
        result[4] += 42818162;
        result[5] += 77358;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 29016813;
        result[1] += 0;
        result[2] += 82878;
        result[3] += 24541354;
        result[4] += 0;
        result[5] += 0;
        result[6] += 46043;
      } else {
        result[0] += 52369550;
        result[1] += 21423;
        result[2] += 246369;
        result[3] += 996189;
        result[4] += 0;
        result[5] += 10711;
        result[6] += 42846;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53666808;
        result[1] += 0;
        result[2] += 20282;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 28808428;
        result[1] += 0;
        result[2] += 620489;
        result[3] += 21500443;
        result[4] += 2688786;
        result[5] += 29547;
        result[6] += 39396;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 3679405;
        result[1] += 0;
        result[2] += 268569;
        result[3] += 33141506;
        result[4] += 16490182;
        result[5] += 107427;
        result[6] += 0;
      } else {
        result[0] += 49175642;
        result[1] += 25730;
        result[2] += 124365;
        result[3] += 4348487;
        result[4] += 0;
        result[5] += 0;
        result[6] += 12865;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 580400;
        result[2] += 0;
        result[3] += 53106690;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 52108059;
        result[1] += 0;
        result[2] += 1579032;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 24605221;
        result[1] += 0;
        result[2] += 65352;
        result[3] += 6633280;
        result[4] += 22383236;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 34547;
        result[2] += 431845;
        result[3] += 51061467;
        result[4] += 2072860;
        result[5] += 86369;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 17373194;
        result[4] += 36313896;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 450807;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53236283;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 53484906;
        result[1] += 5695;
        result[2] += 51258;
        result[3] += 142383;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2847;
      } else {
        result[0] += 51453851;
        result[1] += 0;
        result[2] += 0;
        result[3] += 2233240;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 51550139;
        result[1] += 122461;
        result[2] += 251045;
        result[3] += 1732829;
        result[4] += 0;
        result[5] += 0;
        result[6] += 30615;
      } else {
        result[0] += 33619046;
        result[1] += 0;
        result[2] += 281358;
        result[3] += 19721254;
        result[4] += 0;
        result[5] += 6543;
        result[6] += 58888;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        result[0] += 52525838;
        result[1] += 42771;
        result[2] += 57741;
        result[3] += 1028660;
        result[4] += 8554;
        result[5] += 14970;
        result[6] += 8554;
      } else {
        result[0] += 36579385;
        result[1] += 0;
        result[2] += 149303;
        result[3] += 16896192;
        result[4] += 12441;
        result[5] += 12441;
        result[6] += 37325;
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
        result[0] += 17457902;
        result[1] += 363706;
        result[2] += 1252766;
        result[3] += 34612716;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 23314153;
        result[1] += 0;
        result[2] += 403359;
        result[3] += 1532764;
        result[4] += 28436813;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 912481;
        result[1] += 0;
        result[2] += 232268;
        result[3] += 52293483;
        result[4] += 165905;
        result[5] += 82952;
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
        result[0] += 53355755;
        result[1] += 0;
        result[2] += 117570;
        result[3] += 138947;
        result[4] += 0;
        result[5] += 0;
        result[6] += 74817;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 3414726;
        result[1] += 208677;
        result[2] += 588091;
        result[3] += 49361770;
        result[4] += 0;
        result[5] += 113824;
        result[6] += 0;
      } else {
        result[0] += 23573265;
        result[1] += 0;
        result[2] += 136261;
        result[3] += 29886722;
        result[4] += 0;
        result[5] += 90841;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 53620080;
        result[1] += 5584;
        result[2] += 53050;
        result[3] += 5584;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2792;
      } else {
        result[0] += 47068134;
        result[1] += 0;
        result[2] += 0;
        result[3] += 6618956;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 29744479;
        result[1] += 165767;
        result[2] += 353157;
        result[3] += 23409272;
        result[4] += 0;
        result[5] += 7207;
        result[6] += 7207;
      } else {
        result[0] += 52872222;
        result[1] += 0;
        result[2] += 116409;
        result[3] += 681828;
        result[4] += 0;
        result[5] += 0;
        result[6] += 16629;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 67786;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53619304;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 10493640;
        result[1] += 28020;
        result[2] += 434316;
        result[3] += 42633042;
        result[4] += 0;
        result[5] += 98071;
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
        result[1] += 3055362;
        result[2] += 0;
        result[3] += 50631728;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53643271;
        result[1] += 0;
        result[2] += 41080;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2738;
      } else {
        result[0] += 37792886;
        result[1] += 1236215;
        result[2] += 0;
        result[3] += 14657988;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 28925703;
        result[1] += 181057;
        result[2] += 420052;
        result[3] += 24116823;
        result[4] += 0;
        result[5] += 28969;
        result[6] += 14484;
      } else {
        result[0] += 52815744;
        result[1] += 0;
        result[2] += 159930;
        result[3] += 689356;
        result[4] += 0;
        result[5] += 0;
        result[6] += 22059;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 583555;
        result[1] += 5251998;
        result[2] += 0;
        result[3] += 47851537;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 18477099;
        result[1] += 172504;
        result[2] += 440843;
        result[3] += 33772457;
        result[4] += 824185;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 294714;
        result[1] += 0;
        result[2] += 343833;
        result[3] += 9430852;
        result[4] += 43617691;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 53493416;
        result[1] += 0;
        result[2] += 41875;
        result[3] += 143947;
        result[4] += 2617;
        result[5] += 0;
        result[6] += 5234;
      } else {
        result[0] += 666920;
        result[1] += 166730;
        result[2] += 611343;
        result[3] += 14616671;
        result[4] += 37569848;
        result[5] += 55576;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 37211268;
        result[1] += 48354;
        result[2] += 162648;
        result[3] += 16203276;
        result[4] += 8791;
        result[5] += 30771;
        result[6] += 21979;
      } else {
        result[0] += 44358972;
        result[1] += 0;
        result[2] += 488160;
        result[3] += 7279965;
        result[4] += 1517543;
        result[5] += 0;
        result[6] += 42448;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x453af800))) ) ) {
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
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40900000))) ) ) {
        result[0] += 11671909;
        result[1] += 203150;
        result[2] += 572514;
        result[3] += 41110239;
        result[4] += 0;
        result[5] += 129277;
        result[6] += 0;
      } else {
        result[0] += 6503081;
        result[1] += 48895;
        result[2] += 0;
        result[3] += 47135114;
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
        result[0] += 53562596;
        result[1] += 0;
        result[2] += 109555;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 14939;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 50871090;
        result[1] += 270266;
        result[2] += 322575;
        result[3] += 2197003;
        result[4] += 0;
        result[5] += 0;
        result[6] += 26154;
      } else {
        result[0] += 22000276;
        result[1] += 0;
        result[2] += 360989;
        result[3] += 31285716;
        result[4] += 0;
        result[5] += 0;
        result[6] += 40109;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
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
        result[0] += 7980513;
        result[1] += 241833;
        result[2] += 725501;
        result[3] += 44670147;
        result[4] += 0;
        result[5] += 69095;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 29694;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53657396;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 12161408;
        result[1] += 88446;
        result[2] += 287451;
        result[3] += 41017114;
        result[4] += 0;
        result[5] += 132669;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        result[0] += 33001060;
        result[1] += 160980;
        result[2] += 160980;
        result[3] += 20364069;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53421274;
        result[1] += 39380;
        result[2] += 129954;
        result[3] += 88605;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7876;
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
        result[0] += 21897116;
        result[1] += 0;
        result[2] += 416332;
        result[3] += 31314165;
        result[4] += 0;
        result[5] += 9912;
        result[6] += 49563;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 42206;
        result[1] += 42206;
        result[2] += 253240;
        result[3] += 47588203;
        result[4] += 5634612;
        result[5] += 126620;
        result[6] += 0;
      } else {
        result[0] += 19311547;
        result[1] += 0;
        result[2] += 938412;
        result[3] += 0;
        result[4] += 33437130;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 53216386;
        result[1] += 19134;
        result[2] += 120546;
        result[3] += 321456;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9567;
      } else {
        result[0] += 34948184;
        result[1] += 0;
        result[2] += 165776;
        result[3] += 18536290;
        result[4] += 0;
        result[5] += 12279;
        result[6] += 24559;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 30612077;
        result[1] += 0;
        result[2] += 579774;
        result[3] += 22495239;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 520111;
        result[2] += 0;
        result[3] += 53166979;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 126026;
        result[1] += 1134234;
        result[2] += 0;
        result[3] += 19281983;
        result[4] += 33144847;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1031617;
        result[4] += 52655473;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 15543350;
        result[1] += 0;
        result[2] += 0;
        result[3] += 8307653;
        result[4] += 29791422;
        result[5] += 44664;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 22904;
        result[2] += 732929;
        result[3] += 46289083;
        result[4] += 6458941;
        result[5] += 183232;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 53297768;
        result[1] += 18413;
        result[2] += 73655;
        result[3] += 291992;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5261;
      } else {
        result[0] += 43380185;
        result[1] += 26052;
        result[2] += 306113;
        result[3] += 9955200;
        result[4] += 0;
        result[5] += 0;
        result[6] += 19539;
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
        result[0] += 8117146;
        result[1] += 712030;
        result[2] += 320413;
        result[3] += 44537500;
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
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        result[0] += 23681;
        result[1] += 473639;
        result[2] += 449957;
        result[3] += 46677219;
        result[4] += 6062591;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53632641;
        result[1] += 54449;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 27260185;
        result[1] += 0;
        result[2] += 833280;
        result[3] += 0;
        result[4] += 25593624;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 738813;
        result[1] += 0;
        result[2] += 140726;
        result[3] += 8408397;
        result[4] += 44399154;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 53212971;
        result[1] += 0;
        result[2] += 362562;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 111557;
      } else {
        result[0] += 53671550;
        result[1] += 0;
        result[2] += 15540;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 20011169;
        result[1] += 96547;
        result[2] += 334699;
        result[3] += 28520261;
        result[4] += 4621428;
        result[5] += 70801;
        result[6] += 32182;
      } else {
        result[0] += 51888622;
        result[1] += 0;
        result[2] += 182656;
        result[3] += 1587710;
        result[4] += 0;
        result[5] += 0;
        result[6] += 28101;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 0;
        result[1] += 11096;
        result[2] += 366199;
        result[3] += 35299428;
        result[4] += 17954880;
        result[5] += 55484;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 738813;
        result[2] += 0;
        result[3] += 0;
        result[4] += 52948278;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 53461629;
        result[1] += 29154;
        result[2] += 155490;
        result[3] += 31098;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9718;
      } else {
        result[0] += 18075012;
        result[1] += 1936608;
        result[2] += 0;
        result[3] += 33675470;
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
        result[0] += 21807857;
        result[1] += 0;
        result[2] += 272472;
        result[3] += 31515937;
        result[4] += 0;
        result[5] += 10091;
        result[6] += 80732;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 50952;
        result[1] += 50952;
        result[2] += 135873;
        result[3] += 52311370;
        result[4] += 1053021;
        result[5] += 84921;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 427671;
        result[2] += 0;
        result[3] += 5274621;
        result[4] += 47984797;
        result[5] += 0;
        result[6] += 0;
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
        result[0] += 0;
        result[1] += 0;
        result[2] += 997045;
        result[3] += 0;
        result[4] += 52690045;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 53477117;
        result[1] += 33051;
        result[2] += 143870;
        result[3] += 27218;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5832;
      } else {
        result[0] += 19572002;
        result[1] += 1223250;
        result[2] += 0;
        result[3] += 32891838;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 10607201;
        result[1] += 0;
        result[2] += 284848;
        result[3] += 42781476;
        result[4] += 0;
        result[5] += 13564;
        result[6] += 0;
      } else {
        result[0] += 53377193;
        result[1] += 0;
        result[2] += 235094;
        result[3] += 42744;
        result[4] += 0;
        result[5] += 0;
        result[6] += 32058;
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
        result[0] += 237448;
        result[1] += 356172;
        result[2] += 593621;
        result[3] += 52499849;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53006430;
        result[1] += 0;
        result[2] += 680660;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 52761318;
        result[1] += 7714;
        result[2] += 82290;
        result[3] += 828052;
        result[4] += 0;
        result[5] += 5143;
        result[6] += 2571;
      } else {
        result[0] += 158602;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53528488;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42890000))) ) ) {
        result[0] += 37910380;
        result[1] += 74510;
        result[2] += 125492;
        result[3] += 15537491;
        result[4] += 0;
        result[5] += 19608;
        result[6] += 19608;
      } else {
        result[0] += 48080131;
        result[1] += 0;
        result[2] += 662803;
        result[3] += 3923080;
        result[4] += 841939;
        result[5] += 107481;
        result[6] += 71654;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 19437927;
        result[1] += 232789;
        result[2] += 465579;
        result[3] += 31746675;
        result[4] += 1804119;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 7062744;
        result[1] += 460613;
        result[2] += 0;
        result[3] += 36183768;
        result[4] += 9979964;
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
        result[0] += 16855249;
        result[1] += 0;
        result[2] += 2184939;
        result[3] += 34646901;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41c80000))) ) ) {
        result[0] += 39387165;
        result[1] += 0;
        result[2] += 289391;
        result[3] += 12892885;
        result[4] += 1067754;
        result[5] += 9979;
        result[6] += 39916;
      } else {
        result[0] += 47989812;
        result[1] += 24507;
        result[2] += 119271;
        result[3] += 5517554;
        result[4] += 21240;
        result[5] += 3267;
        result[6] += 11437;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x42e50000))) ) ) {
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
        result[2] += 79067;
        result[3] += 0;
        result[4] += 53608023;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ed0000))) ) ) {
        result[0] += 17167261;
        result[1] += 105062;
        result[2] += 399238;
        result[3] += 35763377;
        result[4] += 252150;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 673192;
        result[1] += 1514682;
        result[2] += 0;
        result[3] += 6563625;
        result[4] += 44935590;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 48258059;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 5429031;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 829016;
        result[1] += 0;
        result[2] += 265285;
        result[3] += 6565808;
        result[4] += 46026981;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 220416;
        result[1] += 94464;
        result[2] += 566784;
        result[3] += 48397102;
        result[4] += 4250884;
        result[5] += 157440;
        result[6] += 0;
      } else {
        result[0] += 10966959;
        result[1] += 0;
        result[2] += 1020182;
        result[3] += 0;
        result[4] += 41699949;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += 50239720;
        result[1] += 51054;
        result[2] += 143437;
        result[3] += 3218842;
        result[4] += 0;
        result[5] += 7293;
        result[6] += 26742;
      } else {
        result[0] += 47021294;
        result[1] += 0;
        result[2] += 52604;
        result[3] += 6613191;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 10199670;
        result[1] += 204577;
        result[2] += 379930;
        result[3] += 42902912;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
        result[0] += 48718064;
        result[1] += 0;
        result[2] += 72014;
        result[3] += 4824996;
        result[4] += 0;
        result[5] += 0;
        result[6] += 72014;
      } else {
        result[0] += 47367725;
        result[1] += 0;
        result[2] += 130089;
        result[3] += 6169262;
        result[4] += 0;
        result[5] += 0;
        result[6] += 20013;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 52909612;
        result[1] += 58677;
        result[2] += 55743;
        result[3] += 645453;
        result[4] += 2933;
        result[5] += 2933;
        result[6] += 11735;
      } else {
        result[0] += 37810116;
        result[1] += 0;
        result[2] += 27280;
        result[3] += 15422308;
        result[4] += 427387;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 13476812;
        result[1] += 172981;
        result[2] += 754827;
        result[3] += 29674147;
        result[4] += 9576871;
        result[5] += 31451;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 2588971;
        result[4] += 51098119;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x41080000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x422c0000))) ) ) {
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
        result[3] += 32843867;
        result[4] += 20843223;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 43988350;
        result[1] += 84093;
        result[2] += 104479;
        result[3] += 8862905;
        result[4] += 616682;
        result[5] += 12741;
        result[6] += 17837;
      } else {
        result[0] += 47001957;
        result[1] += 0;
        result[2] += 163974;
        result[3] += 357381;
        result[4] += 6163777;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 17095168;
        result[1] += 0;
        result[2] += 0;
        result[3] += 36591923;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 40827907;
        result[1] += 0;
        result[2] += 0;
        result[3] += 12859183;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421c0000))) ) ) {
        result[0] += 79536;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53607554;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 52582286;
        result[1] += 0;
        result[2] += 832606;
        result[3] += 0;
        result[4] += 112081;
        result[5] += 96069;
        result[6] += 64046;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 26879722;
        result[1] += 0;
        result[2] += 795900;
        result[3] += 25939113;
        result[4] += 72354;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 8500456;
        result[1] += 581610;
        result[2] += 268435;
        result[3] += 44336589;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 128746;
        result[1] += 300407;
        result[2] += 0;
        result[3] += 11801718;
        result[4] += 41456219;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 53458419;
        result[1] += 0;
        result[2] += 177855;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 50815;
      } else {
        result[0] += 53675967;
        result[1] += 0;
        result[2] += 11123;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        result[0] += 34473849;
        result[1] += 73651;
        result[2] += 309336;
        result[3] += 17254109;
        result[4] += 1536862;
        result[5] += 4910;
        result[6] += 34370;
      } else {
        result[0] += 820613;
        result[1] += 0;
        result[2] += 789051;
        result[3] += 37053877;
        result[4] += 14897299;
        result[5] += 126248;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
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
        result[1] += 15339;
        result[2] += 0;
        result[3] += 50373830;
        result[4] += 3251903;
        result[5] += 46017;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53662610;
        result[5] += 24481;
        result[6] += 0;
      } else {
        result[0] += 37851330;
        result[1] += 2703666;
        result[2] += 12359618;
        result[3] += 0;
        result[4] += 0;
        result[5] += 772476;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 53478214;
        result[1] += 0;
        result[2] += 68671;
        result[3] += 134482;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5722;
      } else {
        result[0] += 51911914;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1775176;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 41531990;
        result[1] += 0;
        result[2] += 264061;
        result[3] += 11808519;
        result[4] += 0;
        result[5] += 8251;
        result[6] += 74267;
      } else {
        result[0] += 43750837;
        result[1] += 50514;
        result[2] += 308140;
        result[3] += 9572547;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5051;
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
        result[0] += 2440322;
        result[1] += 0;
        result[2] += 0;
        result[3] += 51246768;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 18893162;
        result[1] += 312930;
        result[2] += 567186;
        result[3] += 33913812;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 53652118;
        result[1] += 0;
        result[2] += 32915;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2057;
      } else {
        result[0] += 38347922;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 15339168;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 19671986;
        result[1] += 149407;
        result[2] += 423321;
        result[3] += 28206888;
        result[4] += 5148333;
        result[5] += 62253;
        result[6] += 24901;
      } else {
        result[0] += 52118141;
        result[1] += 0;
        result[2] += 171397;
        result[3] += 1357998;
        result[4] += 0;
        result[5] += 0;
        result[6] += 39553;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 541143;
        result[1] += 199368;
        result[2] += 712030;
        result[3] += 51607962;
        result[4] += 626586;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 52679088;
        result[1] += 0;
        result[2] += 1008002;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 21070286;
        result[4] += 32616804;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 37308;
        result[1] += 485011;
        result[2] += 0;
        result[3] += 2201208;
        result[4] += 50963562;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 52814527;
        result[1] += 18017;
        result[2] += 82365;
        result[3] += 743866;
        result[4] += 10295;
        result[5] += 5147;
        result[6] += 12869;
      } else {
        result[0] += 81098;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53605992;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
        result[0] += 43038525;
        result[1] += 48214;
        result[2] += 182527;
        result[3] += 10390272;
        result[4] += 0;
        result[5] += 6887;
        result[6] += 20663;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 891072;
        result[3] += 50791107;
        result[4] += 1826697;
        result[5] += 178214;
        result[6] += 0;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 53391875;
        result[1] += 0;
        result[2] += 295215;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53675888;
        result[1] += 0;
        result[2] += 11202;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 784814;
        result[1] += 290671;
        result[2] += 377873;
        result[3] += 35132537;
        result[4] += 17023681;
        result[5] += 77512;
        result[6] += 0;
      } else {
        result[0] += 52703173;
        result[1] += 0;
        result[2] += 281119;
        result[3] += 622478;
        result[4] += 0;
        result[5] += 0;
        result[6] += 80319;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 0;
        result[1] += 87381;
        result[2] += 0;
        result[3] += 53494852;
        result[4] += 87381;
        result[5] += 17476;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2156406;
        result[3] += 0;
        result[4] += 51456325;
        result[5] += 74358;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x43080000))) ) ) {
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53580183;
        result[1] += 0;
        result[2] += 92329;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 14578;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 865354;
        result[1] += 409289;
        result[2] += 853661;
        result[3] += 42659662;
        result[4] += 8840653;
        result[5] += 58469;
        result[6] += 0;
      } else {
        result[0] += 39810534;
        result[1] += 0;
        result[2] += 185421;
        result[3] += 13636009;
        result[4] += 0;
        result[5] += 5011;
        result[6] += 50113;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 20566285;
        result[4] += 33120805;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 77025;
        result[1] += 346616;
        result[2] += 0;
        result[3] += 3196577;
        result[4] += 50066871;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 42041;
        result[1] += 42041;
        result[2] += 462457;
        result[3] += 47023501;
        result[4] += 5885820;
        result[5] += 231228;
        result[6] += 0;
      } else {
        result[0] += 18346308;
        result[1] += 0;
        result[2] += 579357;
        result[3] += 0;
        result[4] += 34761425;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 53203045;
        result[1] += 28585;
        result[2] += 99095;
        result[3] += 344929;
        result[4] += 0;
        result[5] += 0;
        result[6] += 11434;
      } else {
        result[0] += 34976354;
        result[1] += 0;
        result[2] += 148941;
        result[3] += 18499736;
        result[4] += 0;
        result[5] += 0;
        result[6] += 62058;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
        result[0] += 8337289;
        result[1] += 294752;
        result[2] += 421075;
        result[3] += 44633973;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        result[0] += 1022611;
        result[1] += 0;
        result[2] += 0;
        result[3] += 35280088;
        result[4] += 17384391;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 34614;
        result[1] += 346145;
        result[2] += 0;
        result[3] += 3080690;
        result[4] += 50225641;
        result[5] += 0;
        result[6] += 0;
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
        result[0] += 53639760;
        result[1] += 0;
        result[2] += 43214;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4115;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 39867354;
        result[1] += 65904;
        result[2] += 314315;
        result[3] += 12096071;
        result[4] += 1262331;
        result[5] += 45626;
        result[6] += 35487;
      } else {
        result[0] += 0;
        result[1] += 114869;
        result[2] += 402042;
        result[3] += 43420637;
        result[4] += 9735182;
        result[5] += 14358;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 897385;
        result[2] += 0;
        result[3] += 52789705;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53487510;
        result[1] += 0;
        result[2] += 199580;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
        result[0] += 17027102;
        result[1] += 159131;
        result[2] += 437612;
        result[3] += 36063244;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 301612;
        result[1] += 2262096;
        result[2] += 0;
        result[3] += 8595966;
        result[4] += 42527414;
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
        result[0] += 18709137;
        result[1] += 0;
        result[2] += 1464193;
        result[3] += 33513759;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42aa0000))) ) ) {
        result[0] += 6236996;
        result[1] += 30573;
        result[2] += 0;
        result[3] += 47205506;
        result[4] += 152867;
        result[5] += 61147;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2535399;
        result[3] += 0;
        result[4] += 51151691;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 53297669;
        result[1] += 31468;
        result[2] += 112106;
        result[3] += 234046;
        result[4] += 0;
        result[5] += 0;
        result[6] += 11800;
      } else {
        result[0] += 35366226;
        result[1] += 0;
        result[2] += 201395;
        result[3] += 18076749;
        result[4] += 0;
        result[5] += 18308;
        result[6] += 24411;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 574808;
        result[1] += 488587;
        result[2] += 862212;
        result[3] += 51761483;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53126097;
        result[1] += 0;
        result[2] += 560993;
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
        result[0] += 371536;
        result[1] += 2043453;
        result[2] += 0;
        result[3] += 51272100;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42aa0000))) ) ) {
        result[0] += 6806265;
        result[1] += 0;
        result[2] += 0;
        result[3] += 46545090;
        result[4] += 152606;
        result[5] += 183128;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1582756;
        result[3] += 0;
        result[4] += 52041024;
        result[5] += 63310;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 47313121;
        result[1] += 28739;
        result[2] += 121115;
        result[3] += 6199480;
        result[4] += 0;
        result[5] += 6158;
        result[6] += 18475;
      } else {
        result[0] += 52970407;
        result[1] += 0;
        result[2] += 106967;
        result[3] += 593670;
        result[4] += 0;
        result[5] += 0;
        result[6] += 16045;
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
