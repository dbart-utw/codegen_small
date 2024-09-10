
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
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 48825118;
        result[1] += 32792;
        result[2] += 122541;
        result[3] += 4247538;
        result[4] += 438388;
        result[5] += 15533;
        result[6] += 5177;
      } else {
        result[0] += 34966107;
        result[1] += 0;
        result[2] += 366104;
        result[3] += 18205955;
        result[4] += 80667;
        result[5] += 31025;
        result[6] += 37230;
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
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 33094782;
        result[1] += 0;
        result[2] += 367719;
        result[3] += 20224589;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 357913;
        result[2] += 0;
        result[3] += 53329177;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 145493;
        result[1] += 436480;
        result[2] += 0;
        result[3] += 8729608;
        result[4] += 44375508;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53639921;
        result[1] += 0;
        result[2] += 28711;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 18457;
      } else {
        result[0] += 30987047;
        result[1] += 75336;
        result[2] += 412367;
        result[3] += 21054538;
        result[4] += 1094360;
        result[5] += 35685;
        result[6] += 27755;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x42e50000))) ) ) {
        result[0] += 13421772;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 40265318;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 8423048;
        result[1] += 472320;
        result[2] += 196800;
        result[3] += 44594922;
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
        result[0] += 168474;
        result[1] += 617738;
        result[2] += 0;
        result[3] += 9546867;
        result[4] += 43354010;
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41b40000))) ) ) {
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
        result[4] += 53641747;
        result[5] += 45343;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41780000))) ) ) {
        result[0] += 6710886;
        result[1] += 13421772;
        result[2] += 33554431;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 3813837;
        result[1] += 39116;
        result[2] += 293372;
        result[3] += 49540765;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 53331547;
        result[1] += 0;
        result[2] += 304751;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 50791;
      } else {
        result[0] += 53664726;
        result[1] += 0;
        result[2] += 22364;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 50255039;
        result[1] += 300861;
        result[2] += 289718;
        result[3] += 2796899;
        result[4] += 0;
        result[5] += 0;
        result[6] += 44572;
      } else {
        result[0] += 25820968;
        result[1] += 0;
        result[2] += 448054;
        result[3] += 27338573;
        result[4] += 0;
        result[5] += 43360;
        result[6] += 36133;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42480000))) ) ) {
        result[0] += 20609;
        result[1] += 206092;
        result[2] += 329747;
        result[3] += 52986376;
        result[4] += 0;
        result[5] += 144264;
        result[6] += 0;
      } else {
        result[0] += 51074002;
        result[1] += 0;
        result[2] += 2613088;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 53360229;
        result[1] += 0;
        result[2] += 217908;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 108954;
      } else {
        result[0] += 53673625;
        result[1] += 0;
        result[2] += 13465;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 50290426;
        result[1] += 219848;
        result[2] += 373743;
        result[3] += 2759103;
        result[4] += 0;
        result[5] += 0;
        result[6] += 43969;
      } else {
        result[0] += 25268356;
        result[1] += 0;
        result[2] += 391982;
        result[3] += 27925127;
        result[4] += 0;
        result[5] += 29035;
        result[6] += 72589;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 30043;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53657048;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 83132;
        result[1] += 199518;
        result[2] += 232771;
        result[3] += 53071909;
        result[4] += 0;
        result[5] += 99759;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 53168733;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 518358;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 789516;
        result[3] += 0;
        result[4] += 52897575;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 52686997;
        result[1] += 0;
        result[2] += 52027;
        result[3] += 948065;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 29888404;
        result[1] += 0;
        result[2] += 361407;
        result[3] += 23328857;
        result[4] += 0;
        result[5] += 0;
        result[6] += 108422;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53629261;
        result[1] += 0;
        result[2] += 51742;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6087;
      } else {
        result[0] += 37308865;
        result[1] += 261632;
        result[2] += 246682;
        result[3] += 15847484;
        result[4] += 0;
        result[5] += 0;
        result[6] += 22425;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 78489;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53530111;
        result[5] += 78489;
        result[6] += 0;
      } else {
        result[0] += 52897801;
        result[1] += 17996;
        result[2] += 82271;
        result[3] += 686450;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2570;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += 40785194;
        result[1] += 27634;
        result[2] += 262528;
        result[3] += 11582345;
        result[4] += 960301;
        result[5] += 34543;
        result[6] += 34543;
      } else {
        result[0] += 25134716;
        result[1] += 0;
        result[2] += 381583;
        result[3] += 28170791;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41400000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 10708766;
        result[1] += 286522;
        result[2] += 250706;
        result[3] += 42441096;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 183859;
        result[1] += 2022458;
        result[2] += 0;
        result[3] += 12686333;
        result[4] += 38794439;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 163431;
        result[2] += 0;
        result[3] += 3105189;
        result[4] += 50418470;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41300000))) ) ) {
        result[0] += 53562719;
        result[1] += 13091;
        result[2] += 17455;
        result[3] += 74186;
        result[4] += 4363;
        result[5] += 0;
        result[6] += 15273;
      } else {
        result[0] += 46046613;
        result[1] += 186767;
        result[2] += 305619;
        result[3] += 7114133;
        result[4] += 0;
        result[5] += 0;
        result[6] += 33957;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        result[0] += 10143433;
        result[1] += 0;
        result[2] += 411220;
        result[3] += 41548477;
        result[4] += 1583959;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53412098;
        result[1] += 0;
        result[2] += 211533;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 63459;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
        result[0] += 14154965;
        result[1] += 66958;
        result[2] += 227657;
        result[3] += 39103593;
        result[4] += 93741;
        result[5] += 40174;
        result[6] += 0;
      } else {
        result[0] += 327360;
        result[1] += 2291522;
        result[2] += 0;
        result[3] += 11457610;
        result[4] += 39610597;
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
        result[0] += 20347162;
        result[1] += 0;
        result[2] += 2614896;
        result[3] += 30479885;
        result[4] += 0;
        result[5] += 245146;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 384959;
        result[1] += 325735;
        result[2] += 888368;
        result[3] += 52058414;
        result[4] += 29612;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53498273;
        result[1] += 0;
        result[2] += 188817;
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
        result[0] += 451152;
        result[1] += 1353456;
        result[2] += 0;
        result[3] += 51882483;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 49311258;
        result[1] += 0;
        result[2] += 36949;
        result[3] += 4175252;
        result[4] += 153074;
        result[5] += 5278;
        result[6] += 5278;
      } else {
        result[0] += 50873842;
        result[1] += 41534;
        result[2] += 116295;
        result[3] += 2364679;
        result[4] += 254743;
        result[5] += 8306;
        result[6] += 27689;
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
        result[0] += 19884784;
        result[1] += 0;
        result[2] += 365529;
        result[3] += 26857252;
        result[4] += 6460727;
        result[5] += 18276;
        result[6] += 100520;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 53656315;
        result[1] += 0;
        result[2] += 24620;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6155;
      } else {
        result[0] += 23008753;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 30678337;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 32934593;
        result[1] += 50513;
        result[2] += 345173;
        result[3] += 17460722;
        result[4] += 2841366;
        result[5] += 4209;
        result[6] += 50513;
      } else {
        result[0] += 290004;
        result[1] += 0;
        result[2] += 797512;
        result[3] += 42340663;
        result[4] += 10222660;
        result[5] += 36250;
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
        result[0] += 9034301;
        result[1] += 734847;
        result[2] += 0;
        result[3] += 43917942;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40a00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 2040109;
        result[4] += 51646981;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 9372492;
        result[1] += 0;
        result[2] += 272985;
        result[3] += 18835979;
        result[4] += 25205634;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 21395384;
        result[1] += 0;
        result[2] += 0;
        result[3] += 32234955;
        result[4] += 56751;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 88446;
        result[1] += 972912;
        result[2] += 0;
        result[3] += 11763398;
        result[4] += 40862332;
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
        result[0] += 16989585;
        result[1] += 339791;
        result[2] += 679583;
        result[3] += 35678130;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 46444882;
        result[1] += 48252;
        result[2] += 92117;
        result[3] += 7049199;
        result[4] += 8773;
        result[5] += 21932;
        result[6] += 21932;
      } else {
        result[0] += 52957545;
        result[1] += 0;
        result[2] += 93531;
        result[3] += 187063;
        result[4] += 439598;
        result[5] += 9353;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 7997021;
        result[1] += 0;
        result[2] += 415593;
        result[3] += 36559611;
        result[4] += 8626708;
        result[5] += 88156;
        result[6] += 0;
      } else {
        result[0] += 53215692;
        result[1] += 0;
        result[2] += 314265;
        result[3] += 83804;
        result[4] += 0;
        result[5] += 0;
        result[6] += 73328;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 10298;
        result[1] += 123584;
        result[2] += 102986;
        result[3] += 35509896;
        result[4] += 17919727;
        result[5] += 20597;
        result[6] += 0;
      } else {
        result[0] += 53639284;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 47806;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 53396268;
        result[1] += 48795;
        result[2] += 122965;
        result[3] += 103447;
        result[4] += 0;
        result[5] += 0;
        result[6] += 15614;
      } else {
        result[0] += 1579032;
        result[1] += 0;
        result[2] += 0;
        result[3] += 52108059;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 24403223;
        result[1] += 0;
        result[2] += 631117;
        result[3] += 967714;
        result[4] += 27685036;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 809099;
        result[1] += 0;
        result[2] += 269699;
        result[3] += 52389161;
        result[4] += 185418;
        result[5] += 33712;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 53130873;
        result[1] += 0;
        result[2] += 532034;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 24183;
      } else {
        result[0] += 53541152;
        result[1] += 0;
        result[2] += 0;
        result[3] += 145938;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 7556412;
        result[1] += 20312;
        result[2] += 0;
        result[3] += 45866610;
        result[4] += 182816;
        result[5] += 60938;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1344867;
        result[3] += 0;
        result[4] += 52180840;
        result[5] += 161384;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 47307765;
        result[1] += 36418;
        result[2] += 159837;
        result[3] += 6160813;
        result[4] += 0;
        result[5] += 2023;
        result[6] += 20232;
      } else {
        result[0] += 53000943;
        result[1] += 0;
        result[2] += 78566;
        result[3] += 576154;
        result[4] += 0;
        result[5] += 0;
        result[6] += 31426;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
        result[0] += 0;
        result[1] += 589428;
        result[2] += 98238;
        result[3] += 52999424;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 52666424;
        result[1] += 0;
        result[2] += 1020667;
        result[3] += 0;
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
        result[1] += 3639802;
        result[2] += 0;
        result[3] += 50047288;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x431e0000))) ) ) {
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 53530796;
        result[1] += 0;
        result[2] += 156294;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53673745;
        result[1] += 0;
        result[2] += 13345;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 709781;
        result[1] += 315458;
        result[2] += 364748;
        result[3] += 33892071;
        result[4] += 18345882;
        result[5] += 59148;
        result[6] += 0;
      } else {
        result[0] += 52603242;
        result[1] += 0;
        result[2] += 365715;
        result[3] += 631691;
        result[4] += 0;
        result[5] += 0;
        result[6] += 86441;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 0;
        result[1] += 143644;
        result[2] += 448888;
        result[3] += 45517316;
        result[4] += 7541330;
        result[5] += 35911;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 37860655;
        result[4] += 15826436;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 50310288;
        result[1] += 69163;
        result[2] += 130189;
        result[3] += 3157106;
        result[4] += 0;
        result[5] += 4068;
        result[6] += 16273;
      } else {
        result[0] += 53683638;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3452;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 7468618;
        result[1] += 76732;
        result[2] += 613859;
        result[3] += 33698305;
        result[4] += 11803998;
        result[5] += 25577;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 277883;
        result[2] += 0;
        result[3] += 5779976;
        result[4] += 47629231;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        result[0] += 8310251;
        result[1] += 0;
        result[2] += 0;
        result[3] += 45376839;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42200000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1125178;
        result[3] += 0;
        result[4] += 52240433;
        result[5] += 321479;
        result[6] += 0;
      } else {
        result[0] += 53095541;
        result[1] += 0;
        result[2] += 383707;
        result[3] += 63951;
        result[4] += 0;
        result[5] += 31975;
        result[6] += 111914;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 110014;
        result[1] += 15716;
        result[2] += 0;
        result[3] += 50040895;
        result[4] += 3441883;
        result[5] += 78581;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53639622;
        result[5] += 47468;
        result[6] += 0;
      } else {
        result[0] += 38774010;
        result[1] += 4260880;
        result[2] += 8947848;
        result[3] += 0;
        result[4] += 0;
        result[5] += 1704352;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42800000))) ) ) {
        result[0] += 53497605;
        result[1] += 17581;
        result[2] += 134789;
        result[3] += 7813;
        result[4] += 0;
        result[5] += 0;
        result[6] += 29301;
      } else {
        result[0] += 180158;
        result[1] += 1801580;
        result[2] += 0;
        result[3] += 51705352;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        result[0] += 24776078;
        result[1] += 0;
        result[2] += 134105;
        result[3] += 28776906;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 46337144;
        result[1] += 0;
        result[2] += 300734;
        result[3] += 6952977;
        result[4] += 0;
        result[5] += 0;
        result[6] += 96234;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53277266;
        result[5] += 409825;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41780000))) ) ) {
        result[0] += 0;
        result[1] += 23008753;
        result[2] += 21091357;
        result[3] += 0;
        result[4] += 0;
        result[5] += 9586980;
        result[6] += 0;
      } else {
        result[0] += 3886304;
        result[1] += 100162;
        result[2] += 320519;
        result[3] += 49360071;
        result[4] += 0;
        result[5] += 20032;
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
        result[0] += 53643368;
        result[1] += 0;
        result[2] += 34006;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9716;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 50295048;
        result[1] += 298323;
        result[2] += 342519;
        result[3] += 2729103;
        result[4] += 0;
        result[5] += 0;
        result[6] += 22098;
      } else {
        result[0] += 24885097;
        result[1] += 0;
        result[2] += 468563;
        result[3] += 28267538;
        result[4] += 0;
        result[5] += 14642;
        result[6] += 51249;
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
        result[0] += 53470392;
        result[1] += 0;
        result[2] += 216698;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53678263;
        result[1] += 0;
        result[2] += 8827;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 1006183;
        result[1] += 273107;
        result[2] += 733076;
        result[3] += 38076868;
        result[4] += 13468488;
        result[5] += 129366;
        result[6] += 0;
      } else {
        result[0] += 39732811;
        result[1] += 0;
        result[2] += 187026;
        result[3] += 13699715;
        result[4] += 0;
        result[5] += 5195;
        result[6] += 62342;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 7420571;
        result[1] += 323716;
        result[2] += 249012;
        result[3] += 28636435;
        result[4] += 17057355;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 55807;
        result[1] += 446462;
        result[2] += 0;
        result[3] += 6306279;
        result[4] += 46878541;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 93776;
        result[1] += 0;
        result[2] += 0;
        result[3] += 49795363;
        result[4] += 3766692;
        result[5] += 31258;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 470055;
        result[2] += 604357;
        result[3] += 0;
        result[4] += 52478376;
        result[5] += 134301;
        result[6] += 0;
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
        result[0] += 0;
        result[1] += 0;
        result[2] += 681500;
        result[3] += 0;
        result[4] += 53005590;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 53436216;
        result[1] += 0;
        result[2] += 250874;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53680186;
        result[1] += 0;
        result[2] += 6905;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 48848655;
        result[1] += 140510;
        result[2] += 342111;
        result[3] += 4294722;
        result[4] += 0;
        result[5] += 0;
        result[6] += 61091;
      } else {
        result[0] += 0;
        result[1] += 38861;
        result[2] += 310891;
        result[3] += 53337338;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 53430338;
        result[1] += 0;
        result[2] += 205402;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 51350;
      } else {
        result[0] += 53667083;
        result[1] += 0;
        result[2] += 20007;
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
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
        result[0] += 11312510;
        result[1] += 272162;
        result[2] += 366828;
        result[3] += 23051014;
        result[4] += 18684575;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42463995;
        result[1] += 71598;
        result[2] += 346060;
        result[3] += 10071550;
        result[4] += 608588;
        result[5] += 35799;
        result[6] += 89498;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 0;
        result[1] += 145690;
        result[2] += 655608;
        result[3] += 44435719;
        result[4] += 8450071;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 36254413;
        result[4] += 17432677;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
        result[0] += 52419690;
        result[1] += 0;
        result[2] += 1267400;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 4579341;
        result[1] += 177101;
        result[2] += 303602;
        result[3] += 48070439;
        result[4] += 556605;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 468473;
        result[1] += 2061284;
        result[2] += 0;
        result[3] += 27452561;
        result[4] += 23704771;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 596937;
        result[4] += 53090153;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 37850338;
        result[1] += 0;
        result[2] += 363343;
        result[3] += 14796838;
        result[4] += 613924;
        result[5] += 50116;
        result[6] += 12529;
      } else {
        result[0] += 52867390;
        result[1] += 48089;
        result[2] += 24044;
        result[3] += 719150;
        result[4] += 13115;
        result[5] += 6557;
        result[6] += 8743;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 24657655;
        result[1] += 0;
        result[2] += 0;
        result[3] += 29029435;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 44226417;
        result[1] += 0;
        result[2] += 612837;
        result[3] += 38302;
        result[4] += 8656325;
        result[5] += 51069;
        result[6] += 102139;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 28355858;
        result[1] += 0;
        result[2] += 831771;
        result[3] += 18374595;
        result[4] += 6124865;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 4976612;
        result[1] += 301612;
        result[2] += 0;
        result[3] += 29407255;
        result[4] += 19001610;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 20809589;
        result[1] += 274895;
        result[2] += 632259;
        result[3] += 31667961;
        result[4] += 302385;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 6091576;
        result[4] += 47595515;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 53150220;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 536870;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 47301;
        result[2] += 685870;
        result[3] += 35641606;
        result[4] += 17241361;
        result[5] += 70952;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 51445942;
        result[1] += 57855;
        result[2] += 112666;
        result[3] += 2055401;
        result[4] += 0;
        result[5] += 6090;
        result[6] += 9135;
      } else {
        result[0] += 46415074;
        result[1] += 0;
        result[2] += 99496;
        result[3] += 7146183;
        result[4] += 0;
        result[5] += 5852;
        result[6] += 20484;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 53493879;
        result[1] += 0;
        result[2] += 15456;
        result[3] += 172602;
        result[4] += 5152;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 60119;
        result[1] += 180359;
        result[2] += 841678;
        result[3] += 14849620;
        result[4] += 37755311;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 35253472;
        result[1] += 51945;
        result[2] += 193928;
        result[3] += 17308139;
        result[4] += 869216;
        result[5] += 0;
        result[6] += 10389;
      } else {
        result[0] += 52578796;
        result[1] += 0;
        result[2] += 619341;
        result[3] += 32596;
        result[4] += 309670;
        result[5] += 16298;
        result[6] += 130387;
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
        result[0] += 7074757;
        result[1] += 921192;
        result[2] += 368476;
        result[3] += 45322664;
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53606237;
        result[5] += 80854;
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
        result[1] += 165140;
        result[2] += 478906;
        result[3] += 52943960;
        result[4] += 0;
        result[5] += 99084;
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
        result[0] += 53582631;
        result[1] += 0;
        result[2] += 94510;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9948;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40200000))) ) ) {
        result[0] += 36138042;
        result[1] += 184726;
        result[2] += 636281;
        result[3] += 16686990;
        result[4] += 0;
        result[5] += 6841;
        result[6] += 34208;
      } else {
        result[0] += 40536609;
        result[1] += 0;
        result[2] += 142784;
        result[3] += 13007696;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 245146;
        result[2] += 40857;
        result[3] += 35260243;
        result[4] += 18140843;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 52900878;
        result[1] += 0;
        result[2] += 786212;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
        result[0] += 5545950;
        result[1] += 0;
        result[2] += 800446;
        result[3] += 36992063;
        result[4] += 10291455;
        result[5] += 57174;
        result[6] += 0;
      } else {
        result[0] += 47936522;
        result[1] += 0;
        result[2] += 158730;
        result[3] += 5555557;
        result[4] += 0;
        result[5] += 4535;
        result[6] += 31746;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 4238454;
        result[1] += 27169;
        result[2] += 217356;
        result[3] += 30973321;
        result[4] += 18094940;
        result[5] += 135847;
        result[6] += 0;
      } else {
        result[0] += 49171917;
        result[1] += 60259;
        result[2] += 120519;
        result[3] += 4319329;
        result[4] += 0;
        result[5] += 0;
        result[6] += 15064;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 5750026;
        result[1] += 786845;
        result[2] += 0;
        result[3] += 35347532;
        result[4] += 11802686;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1100537;
        result[1] += 0;
        result[2] += 478494;
        result[3] += 8373655;
        result[4] += 43734404;
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
        result[0] += 53629824;
        result[1] += 0;
        result[2] += 42949;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 14316;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 27414090;
        result[1] += 127674;
        result[2] += 215450;
        result[3] += 25662557;
        result[4] += 223430;
        result[5] += 23938;
        result[6] += 19949;
      } else {
        result[0] += 33166436;
        result[1] += 0;
        result[2] += 1408280;
        result[3] += 114961;
        result[4] += 18796229;
        result[5] += 86221;
        result[6] += 114961;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 209715;
        result[1] += 1677721;
        result[2] += 0;
        result[3] += 26843545;
        result[4] += 24956108;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 933363;
        result[4] += 52753727;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 52708420;
        result[1] += 0;
        result[2] += 978670;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53666250;
        result[1] += 0;
        result[2] += 14588;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6252;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 44447016;
        result[1] += 129081;
        result[2] += 182865;
        result[3] += 8895857;
        result[4] += 0;
        result[5] += 10756;
        result[6] += 21513;
      } else {
        result[0] += 8844999;
        result[1] += 185127;
        result[2] += 411395;
        result[3] += 42085742;
        result[4] += 2139255;
        result[5] += 20569;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 29343700;
        result[1] += 59832;
        result[2] += 589780;
        result[3] += 8701394;
        result[4] += 14898360;
        result[5] += 51285;
        result[6] += 42737;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 448423;
        result[3] += 42816692;
        result[4] += 10406512;
        result[5] += 15462;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        result[0] += 704092;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 52982998;
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
        result[1] += 161404;
        result[2] += 363159;
        result[3] += 53021298;
        result[4] += 0;
        result[5] += 141228;
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
        result[0] += 53647853;
        result[1] += 0;
        result[2] += 29428;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9809;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 45856657;
        result[1] += 176284;
        result[2] += 363941;
        result[3] += 7210595;
        result[4] += 0;
        result[5] += 17059;
        result[6] += 62552;
      } else {
        result[0] += 0;
        result[1] += 177771;
        result[2] += 434553;
        result[3] += 53074766;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41a40000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1054164;
        result[3] += 0;
        result[4] += 52632926;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 52815273;
        result[1] += 7669;
        result[2] += 25566;
        result[3] += 836024;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2556;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 42418327;
        result[1] += 39702;
        result[2] += 188584;
        result[3] += 11004083;
        result[4] += 0;
        result[5] += 9925;
        result[6] += 26468;
      } else {
        result[0] += 7882099;
        result[1] += 0;
        result[2] += 910327;
        result[3] += 39166265;
        result[4] += 5661790;
        result[5] += 66609;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 7742512;
        result[1] += 595577;
        result[2] += 0;
        result[3] += 39563387;
        result[4] += 5785613;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 6815743;
        result[1] += 0;
        result[2] += 0;
        result[3] += 10380902;
        result[4] += 36490444;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 5024082;
        result[1] += 539777;
        result[2] += 207606;
        result[3] += 29189501;
        result[4] += 18726123;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 2885586;
        result[4] += 50801504;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x42cd0000))) ) ) {
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 53424562;
        result[1] += 0;
        result[2] += 262528;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53673825;
        result[1] += 0;
        result[2] += 13265;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 119570;
        result[1] += 239140;
        result[2] += 0;
        result[3] += 12136391;
        result[4] += 41191988;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 29933274;
        result[1] += 90375;
        result[2] += 497067;
        result[3] += 22899011;
        result[4] += 188283;
        result[5] += 37656;
        result[6] += 41422;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
        result[0] += 166730;
        result[1] += 833650;
        result[2] += 0;
        result[3] += 12421392;
        result[4] += 40265318;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 39159;
        result[2] += 0;
        result[3] += 6617883;
        result[4] += 47030048;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 62282;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53562527;
        result[5] += 62282;
        result[6] += 0;
      } else {
        result[0] += 14045703;
        result[1] += 174120;
        result[2] += 116080;
        result[3] += 39327970;
        result[4] += 0;
        result[5] += 23216;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42540000))) ) ) {
        result[0] += 53518282;
        result[1] += 29443;
        result[2] += 123662;
        result[3] += 3925;
        result[4] += 0;
        result[5] += 0;
        result[6] += 11777;
      } else {
        result[0] += 30217324;
        result[1] += 3520464;
        result[2] += 0;
        result[3] += 19949301;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
        result[0] += 372611;
        result[1] += 0;
        result[2] += 403662;
        result[3] += 42927937;
        result[4] += 9982880;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 45871363;
        result[1] += 0;
        result[2] += 327360;
        result[3] += 6935946;
        result[4] += 306900;
        result[5] += 102300;
        result[6] += 143220;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
        result[0] += 17321196;
        result[1] += 236981;
        result[2] += 366244;
        result[3] += 35719581;
        result[4] += 43087;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1022611;
        result[1] += 2215657;
        result[2] += 0;
        result[3] += 8180890;
        result[4] += 42267932;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b40000))) ) ) {
        result[0] += 3548386;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1029032;
        result[4] += 49109672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1579032;
        result[3] += 52108059;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 5695921;
        result[1] += 30297;
        result[2] += 0;
        result[3] += 47748789;
        result[4] += 60594;
        result[5] += 151487;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1791629;
        result[3] += 0;
        result[4] += 51771901;
        result[5] += 123560;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53654060;
        result[1] += 0;
        result[2] += 30966;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2064;
      } else {
        result[0] += 36903702;
        result[1] += 93558;
        result[2] += 462595;
        result[3] += 16196047;
        result[4] += 0;
        result[5] += 15593;
        result[6] += 15593;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ea0000))) ) ) {
        result[0] += 0;
        result[1] += 3426835;
        result[2] += 0;
        result[3] += 0;
        result[4] += 50260255;
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
        result[0] += 4052221;
        result[1] += 0;
        result[2] += 0;
        result[3] += 49479760;
        result[4] += 96943;
        result[5] += 58165;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 482580;
        result[3] += 0;
        result[4] += 53114026;
        result[5] += 90483;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 19348615;
        result[1] += 265777;
        result[2] += 0;
        result[3] += 34072698;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53148860;
        result[1] += 21069;
        result[2] += 109178;
        result[3] += 388828;
        result[4] += 0;
        result[5] += 0;
        result[6] += 19154;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 10433173;
        result[1] += 0;
        result[2] += 296167;
        result[3] += 42957750;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53314192;
        result[1] += 0;
        result[2] += 196807;
        result[3] += 93224;
        result[4] += 0;
        result[5] += 0;
        result[6] += 82866;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53680400;
        result[1] += 0;
        result[2] += 6690;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 28376211;
        result[1] += 0;
        result[2] += 506022;
        result[3] += 21797912;
        result[4] += 2938825;
        result[5] += 29193;
        result[6] += 38924;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 49197950;
        result[1] += 36518;
        result[2] += 174766;
        result[3] += 3810943;
        result[4] += 446044;
        result[5] += 7825;
        result[6] += 13042;
      } else {
        result[0] += 34663224;
        result[1] += 0;
        result[2] += 77507;
        result[3] += 14330336;
        result[4] += 4598797;
        result[5] += 17223;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
        result[0] += 0;
        result[1] += 418703;
        result[2] += 46522;
        result[3] += 53221865;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53157284;
        result[1] += 0;
        result[2] += 529806;
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
        result[0] += 294984;
        result[1] += 1769904;
        result[2] += 0;
        result[3] += 51622203;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 256876;
        result[1] += 128438;
        result[2] += 0;
        result[3] += 53301777;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 34275797;
        result[1] += 0;
        result[2] += 1748765;
        result[3] += 0;
        result[4] += 17662528;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 53435039;
        result[1] += 12992;
        result[2] += 28583;
        result[3] += 205279;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5196;
      } else {
        result[0] += 43975445;
        result[1] += 49968;
        result[2] += 160611;
        result[3] += 9468943;
        result[4] += 0;
        result[5] += 10707;
        result[6] += 21414;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42da0000))) ) ) {
        result[0] += 13556946;
        result[1] += 211003;
        result[2] += 224190;
        result[3] += 39629012;
        result[4] += 39563;
        result[5] += 26375;
        result[6] += 0;
      } else {
        result[0] += 193119;
        result[1] += 1158714;
        result[2] += 0;
        result[3] += 0;
        result[4] += 52335257;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 4762825;
        result[1] += 0;
        result[2] += 874804;
        result[3] += 1036805;
        result[4] += 47012654;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 4583044;
        result[1] += 0;
        result[2] += 553994;
        result[3] += 18181088;
        result[4] += 30268238;
        result[5] += 100726;
        result[6] += 0;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 263172;
        result[1] += 842150;
        result[2] += 605295;
        result[3] += 51976473;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53283428;
        result[1] += 0;
        result[2] += 403662;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 52466930;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1220161;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 22075;
        result[2] += 596032;
        result[3] += 34768572;
        result[4] += 18234184;
        result[5] += 66225;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 53418303;
        result[1] += 20876;
        result[2] += 26095;
        result[3] += 221815;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 43193612;
        result[1] += 37476;
        result[2] += 221453;
        result[3] += 10200479;
        result[4] += 0;
        result[5] += 13627;
        result[6] += 20441;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45cb4000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x44d7b000))) ) ) {
        result[0] += 53640006;
        result[1] += 0;
        result[2] += 38896;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8188;
      } else {
        result[0] += 47721858;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 5965232;
        result[5] += 0;
        result[6] += 0;
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
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 783056;
        result[1] += 267385;
        result[2] += 572967;
        result[3] += 36965978;
        result[4] += 15021308;
        result[5] += 76395;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 628253;
        result[2] += 0;
        result[3] += 6054076;
        result[4] += 47004761;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bd0000))) ) ) {
        result[0] += 52634569;
        result[1] += 0;
        result[2] += 237666;
        result[3] += 780903;
        result[4] += 0;
        result[5] += 0;
        result[6] += 33952;
      } else {
        result[0] += 21776642;
        result[1] += 0;
        result[2] += 269907;
        result[3] += 31566929;
        result[4] += 0;
        result[5] += 0;
        result[6] += 73611;
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
        result[0] += 53604360;
        result[1] += 0;
        result[2] += 72997;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9732;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 39945452;
        result[1] += 65484;
        result[2] += 362682;
        result[3] += 11887927;
        result[4] += 1344947;
        result[5] += 5037;
        result[6] += 75558;
      } else {
        result[0] += 4942281;
        result[1] += 463896;
        result[2] += 107053;
        result[3] += 22409766;
        result[4] += 25764094;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 365218;
        result[2] += 0;
        result[3] += 10408721;
        result[4] += 42852281;
        result[5] += 60869;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 508022;
        result[3] += 52961344;
        result[4] += 199580;
        result[5] += 18143;
        result[6] += 0;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 53208928;
        result[1] += 0;
        result[2] += 451598;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 26564;
      } else {
        result[0] += 53680447;
        result[1] += 0;
        result[2] += 6643;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 944571;
        result[1] += 436864;
        result[2] += 543128;
        result[3] += 43143310;
        result[4] += 8571987;
        result[5] += 47228;
        result[6] += 0;
      } else {
        result[0] += 39787943;
        result[1] += 0;
        result[2] += 266324;
        result[3] += 13612722;
        result[4] += 0;
        result[5] += 0;
        result[6] += 20099;
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
        result[0] += 0;
        result[1] += 492165;
        result[2] += 0;
        result[3] += 11811980;
        result[4] += 41382945;
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
        result[1] += 14248;
        result[2] += 384700;
        result[3] += 43342922;
        result[4] += 9831234;
        result[5] += 113985;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 307422;
        result[2] += 0;
        result[3] += 5617441;
        result[4] += 47762227;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42060000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53630450;
        result[1] += 0;
        result[2] += 48548;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8091;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 28883383;
        result[1] += 117595;
        result[2] += 235191;
        result[3] += 24405690;
        result[4] += 0;
        result[5] += 0;
        result[6] += 45229;
      } else {
        result[0] += 46899958;
        result[1] += 116184;
        result[2] += 503467;
        result[3] += 6099705;
        result[4] += 0;
        result[5] += 29046;
        result[6] += 38728;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += 743073;
        result[1] += 1857684;
        result[2] += 0;
        result[3] += 5758822;
        result[4] += 45327509;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 16972589;
        result[1] += 293716;
        result[2] += 272736;
        result[3] += 36085110;
        result[4] += 62939;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b40000))) ) ) {
        result[0] += 4078390;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1300865;
        result[4] += 48307834;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1798132;
        result[3] += 51888958;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        result[0] += 52432028;
        result[1] += 30333;
        result[2] += 37917;
        result[3] += 1167852;
        result[4] += 9479;
        result[5] += 0;
        result[6] += 9479;
      } else {
        result[0] += 1199196;
        result[1] += 0;
        result[2] += 1383687;
        result[3] += 45154349;
        result[4] += 5903735;
        result[5] += 46122;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 21515997;
        result[1] += 0;
        result[2] += 243224;
        result[3] += 25950163;
        result[4] += 5977705;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 49371782;
        result[1] += 0;
        result[2] += 334182;
        result[3] += 3632414;
        result[4] += 101707;
        result[5] += 87177;
        result[6] += 159826;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53648142;
        result[1] += 0;
        result[2] += 38948;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 1004838;
        result[1] += 244032;
        result[2] += 947419;
        result[3] += 38313060;
        result[4] += 13077256;
        result[5] += 100483;
        result[6] += 0;
      } else {
        result[0] += 39700556;
        result[1] += 0;
        result[2] += 216127;
        result[3] += 13713802;
        result[4] += 0;
        result[5] += 5145;
        result[6] += 51458;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42da0000))) ) ) {
        result[0] += 8837210;
        result[1] += 912763;
        result[2] += 0;
        result[3] += 43937117;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 598740;
        result[1] += 1197481;
        result[2] += 0;
        result[3] += 0;
        result[4] += 51890868;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 372568;
        result[1] += 0;
        result[2] += 0;
        result[3] += 6967027;
        result[4] += 46347495;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 31876710;
        result[1] += 0;
        result[2] += 2936012;
        result[3] += 18874367;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
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
        result[0] += 53139822;
        result[1] += 0;
        result[2] += 492542;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 54726;
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
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 44970808;
        result[1] += 195383;
        result[2] += 151965;
        result[3] += 8336370;
        result[4] += 0;
        result[5] += 0;
        result[6] += 32563;
      } else {
        result[0] += 9456249;
        result[1] += 162688;
        result[2] += 264368;
        result[3] += 41790519;
        result[4] += 1952257;
        result[5] += 61008;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 29742718;
        result[1] += 69859;
        result[2] += 523946;
        result[3] += 9090478;
        result[4] += 14120368;
        result[5] += 34929;
        result[6] += 104789;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 433835;
        result[3] += 42236943;
        result[4] += 11016312;
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
        result[0] += 53605030;
        result[1] += 0;
        result[2] += 77233;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4827;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 43577;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53643514;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1111940;
        result[1] += 457857;
        result[2] += 811062;
        result[3] += 51201577;
        result[4] += 0;
        result[5] += 104653;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 52451683;
        result[1] += 0;
        result[2] += 325456;
        result[3] += 777111;
        result[4] += 0;
        result[5] += 13283;
        result[6] += 119555;
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
        result[4] += 53642867;
        result[5] += 44223;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 4573931;
        result[1] += 0;
        result[2] += 0;
        result[3] += 49067872;
        result[4] += 0;
        result[5] += 45286;
        result[6] += 0;
      } else {
        result[0] += 19551194;
        result[1] += 349753;
        result[2] += 1014283;
        result[3] += 32736884;
        result[4] += 0;
        result[5] += 34975;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 53354900;
        result[1] += 0;
        result[2] += 229978;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 102212;
      } else {
        result[0] += 53677984;
        result[1] += 0;
        result[2] += 9106;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 28369691;
        result[1] += 181324;
        result[2] += 415534;
        result[3] += 24644988;
        result[4] += 0;
        result[5] += 15110;
        result[6] += 60441;
      } else {
        result[0] += 52104812;
        result[1] += 0;
        result[2] += 367971;
        result[3] += 1140712;
        result[4] += 0;
        result[5] += 0;
        result[6] += 73594;
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
        result[4] += 53609396;
        result[5] += 77694;
        result[6] += 0;
      } else {
        result[0] += 10444630;
        result[1] += 225221;
        result[2] += 281526;
        result[3] += 42735712;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 53528059;
        result[1] += 0;
        result[2] += 9354;
        result[3] += 149676;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42195370;
        result[1] += 0;
        result[2] += 303745;
        result[3] += 11137350;
        result[4] += 0;
        result[5] += 0;
        result[6] += 50624;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 4393554;
        result[1] += 0;
        result[2] += 428639;
        result[3] += 18931575;
        result[4] += 29826161;
        result[5] += 107159;
        result[6] += 0;
      } else {
        result[0] += 48556824;
        result[1] += 119001;
        result[2] += 229187;
        result[3] += 4777670;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4407;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
        result[0] += 48654324;
        result[1] += 0;
        result[2] += 21235;
        result[3] += 4531613;
        result[4] += 458682;
        result[5] += 0;
        result[6] += 21235;
      } else {
        result[0] += 8980386;
        result[1] += 21691;
        result[2] += 21691;
        result[3] += 26507323;
        result[4] += 18134306;
        result[5] += 21691;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 9080082;
        result[1] += 235083;
        result[2] += 0;
        result[3] += 42608802;
        result[4] += 1733737;
        result[5] += 29385;
        result[6] += 0;
      } else {
        result[0] += 2407492;
        result[1] += 0;
        result[2] += 1364245;
        result[3] += 0;
        result[4] += 49594353;
        result[5] += 320999;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 53479046;
        result[1] += 0;
        result[2] += 34674;
        result[3] += 173370;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 30098132;
        result[1] += 0;
        result[2] += 525810;
        result[3] += 23063147;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 17214545;
        result[1] += 185768;
        result[2] += 743073;
        result[3] += 35512741;
        result[4] += 30961;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 83624;
        result[2] += 0;
        result[3] += 4264862;
        result[4] += 49338604;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 47679741;
        result[1] += 38331;
        result[2] += 91568;
        result[3] += 5655980;
        result[4] += 206562;
        result[5] += 6388;
        result[6] += 8518;
      } else {
        result[0] += 409825;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53277266;
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
        result[0] += 53600700;
        result[1] += 0;
        result[2] += 67192;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 19197;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 742349;
        result[1] += 180828;
        result[2] += 523451;
        result[3] += 36831952;
        result[4] += 15322853;
        result[5] += 85655;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 330382;
        result[2] += 0;
        result[3] += 4570285;
        result[4] += 48786423;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 31646763;
        result[1] += 0;
        result[2] += 146993;
        result[3] += 21858748;
        result[4] += 0;
        result[5] += 0;
        result[6] += 34586;
      } else {
        result[0] += 52040622;
        result[1] += 0;
        result[2] += 329293;
        result[3] += 1317175;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
        result[0] += 2511676;
        result[1] += 0;
        result[2] += 0;
        result[3] += 51175414;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 18917929;
        result[1] += 398272;
        result[2] += 557581;
        result[3] += 33813308;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424a0000))) ) ) {
        result[0] += 52785579;
        result[1] += 28514;
        result[2] += 39482;
        result[3] += 813773;
        result[4] += 13160;
        result[5] += 2193;
        result[6] += 4386;
      } else {
        result[0] += 37448602;
        result[1] += 0;
        result[2] += 451965;
        result[3] += 14409103;
        result[4] += 1334375;
        result[5] += 21522;
        result[6] += 21522;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 35279912;
        result[1] += 0;
        result[2] += 264984;
        result[3] += 18031270;
        result[4] += 36974;
        result[5] += 30812;
        result[6] += 43137;
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
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45afc400))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 53514701;
        result[1] += 0;
        result[2] += 123135;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 49254;
      } else {
        result[0] += 53673604;
        result[1] += 0;
        result[2] += 13486;
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 1324925;
        result[1] += 621058;
        result[2] += 317430;
        result[3] += 47600714;
        result[4] += 3809161;
        result[5] += 13801;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 926638;
        result[3] += 10637032;
        result[4] += 42026895;
        result[5] += 96524;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 29293094;
        result[1] += 0;
        result[2] += 110714;
        result[3] += 24283283;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 52253407;
        result[1] += 0;
        result[2] += 391004;
        result[3] += 955788;
        result[4] += 0;
        result[5] += 0;
        result[6] += 86889;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 53352939;
        result[1] += 0;
        result[2] += 334152;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53663822;
        result[1] += 0;
        result[2] += 23268;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40900000))) ) ) {
        result[0] += 53657992;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 29098;
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
        result[0] += 403493;
        result[1] += 156914;
        result[2] += 874236;
        result[3] += 37166261;
        result[4] += 15018935;
        result[5] += 67248;
        result[6] += 0;
      } else {
        result[0] += 858071;
        result[1] += 461053;
        result[2] += 409825;
        result[3] += 28969513;
        result[4] += 22950206;
        result[5] += 38421;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 32074682;
        result[1] += 0;
        result[2] += 144365;
        result[3] += 21425582;
        result[4] += 0;
        result[5] += 8492;
        result[6] += 33968;
      } else {
        result[0] += 51815565;
        result[1] += 0;
        result[2] += 293572;
        result[3] += 1467863;
        result[4] += 0;
        result[5] += 0;
        result[6] += 110089;
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
        result[0] += 53660500;
        result[1] += 0;
        result[2] += 24545;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2045;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 39781708;
        result[1] += 15393;
        result[2] += 446408;
        result[3] += 11914501;
        result[4] += 1441849;
        result[5] += 15393;
        result[6] += 71835;
      } else {
        result[0] += 0;
        result[1] += 57728;
        result[2] += 505120;
        result[3] += 43555817;
        result[4] += 9539561;
        result[5] += 28864;
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
        result[0] += 8647585;
        result[1] += 1216066;
        result[2] += 0;
        result[3] += 43823439;
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
        result[0] += 11734004;
        result[1] += 0;
        result[2] += 1446658;
        result[3] += 40506428;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41780000))) ) ) {
        result[0] += 2334221;
        result[1] += 18673770;
        result[2] += 30344877;
        result[3] += 0;
        result[4] += 0;
        result[5] += 2334221;
        result[6] += 0;
      } else {
        result[0] += 3614498;
        result[1] += 78576;
        result[2] += 392880;
        result[3] += 49561848;
        result[4] += 0;
        result[5] += 39288;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 62066;
        result[2] += 310330;
        result[3] += 53190563;
        result[4] += 0;
        result[5] += 124132;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 53457800;
        result[1] += 24862;
        result[2] += 19337;
        result[3] += 185089;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 43341849;
        result[1] += 69579;
        result[2] += 271993;
        result[3] += 9956227;
        result[4] += 0;
        result[5] += 3162;
        result[6] += 44278;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x42cd0000))) ) ) {
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
        result[0] += 53594811;
        result[1] += 0;
        result[2] += 82565;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9713;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 64917;
        result[1] += 194753;
        result[2] += 0;
        result[3] += 12139644;
        result[4] += 41222857;
        result[5] += 64917;
        result[6] += 0;
      } else {
        result[0] += 31061702;
        result[1] += 56242;
        result[2] += 409763;
        result[3] += 20938126;
        result[4] += 1144928;
        result[5] += 44190;
        result[6] += 32138;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 11151280;
        result[1] += 498167;
        result[2] += 344884;
        result[3] += 41692758;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 155614;
        result[1] += 248983;
        result[2] += 0;
        result[3] += 5602131;
        result[4] += 47680361;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 41682;
        result[1] += 114626;
        result[2] += 197991;
        result[3] += 35523931;
        result[4] += 17777596;
        result[5] += 31261;
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
        result[0] += 3253763;
        result[1] += 0;
        result[2] += 0;
        result[3] += 50433328;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53396416;
        result[1] += 35115;
        result[2] += 130706;
        result[3] += 115099;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9754;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
        result[0] += 413802;
        result[1] += 0;
        result[2] += 291194;
        result[3] += 42514413;
        result[4] += 10467680;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 46236299;
        result[1] += 0;
        result[2] += 434629;
        result[3] += 6622925;
        result[4] += 269056;
        result[5] += 20696;
        result[6] += 103483;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 52608;
        result[1] += 0;
        result[2] += 289347;
        result[3] += 51609050;
        result[4] += 1551954;
        result[5] += 184130;
        result[6] += 0;
      } else {
        result[0] += 11233946;
        result[1] += 0;
        result[2] += 930990;
        result[3] += 0;
        result[4] += 41522154;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 5583457;
        result[4] += 48103633;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 195327;
        result[2] += 0;
        result[3] += 14900679;
        result[4] += 38591084;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42060000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53643760;
        result[1] += 0;
        result[2] += 35206;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8124;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 45602165;
        result[1] += 91033;
        result[2] += 438099;
        result[3] += 7481827;
        result[4] += 0;
        result[5] += 17068;
        result[6] += 56896;
      } else {
        result[0] += 0;
        result[1] += 37941;
        result[2] += 265589;
        result[3] += 53383559;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 53068813;
        result[1] += 0;
        result[2] += 412184;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 206092;
      } else {
        result[0] += 53553624;
        result[1] += 0;
        result[2] += 133466;
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
        result[0] += 53666164;
        result[1] += 0;
        result[2] += 20926;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 33076029;
        result[1] += 84766;
        result[2] += 250062;
        result[3] += 17411113;
        result[4] += 2776114;
        result[5] += 29668;
        result[6] += 59336;
      } else {
        result[0] += 416717;
        result[1] += 0;
        result[2] += 1007067;
        result[3] += 42088456;
        result[4] += 10140123;
        result[5] += 34726;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 11326713;
        result[1] += 344393;
        result[2] += 229595;
        result[3] += 41786388;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 65114;
        result[1] += 227901;
        result[2] += 0;
        result[3] += 6218456;
        result[4] += 47175618;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 45769;
        result[1] += 0;
        result[2] += 274614;
        result[3] += 46592889;
        result[4] += 6590742;
        result[5] += 183076;
        result[6] += 0;
      } else {
        result[0] += 10999016;
        result[1] += 0;
        result[2] += 891812;
        result[3] += 0;
        result[4] += 41796262;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 53431040;
        result[1] += 5225;
        result[2] += 23514;
        result[3] += 227310;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 43351883;
        result[1] += 22523;
        result[2] += 279938;
        result[3] += 10003785;
        result[4] += 0;
        result[5] += 9653;
        result[6] += 19306;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
        result[0] += 5457425;
        result[1] += 295722;
        result[2] += 161303;
        result[3] += 29921748;
        result[4] += 17850890;
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
        result[1] += 3774873;
        result[2] += 0;
        result[3] += 49912217;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 303745;
        result[2] += 404994;
        result[3] += 36576071;
        result[4] += 16376967;
        result[5] += 25312;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 53414361;
        result[1] += 0;
        result[2] += 75435;
        result[3] += 197293;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 30077927;
        result[1] += 0;
        result[2] += 456833;
        result[3] += 23134056;
        result[4] += 0;
        result[5] += 0;
        result[6] += 18273;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 14691207;
        result[1] += 484952;
        result[2] += 228212;
        result[3] += 32206549;
        result[4] += 6076169;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2407892;
        result[1] += 0;
        result[2] += 490496;
        result[3] += 6198094;
        result[4] += 44590607;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53639371;
        result[1] += 0;
        result[2] += 32806;
        result[3] += 0;
        result[4] += 5964;
        result[5] += 0;
        result[6] += 8947;
      } else {
        result[0] += 30582754;
        result[1] += 111514;
        result[2] += 327572;
        result[3] += 18629831;
        result[4] += 3993600;
        result[5] += 13939;
        result[6] += 27878;
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
        result[0] += 53654131;
        result[1] += 0;
        result[2] += 28839;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4119;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 27849880;
        result[1] += 83365;
        result[2] += 613328;
        result[3] += 21180676;
        result[4] += 3846701;
        result[5] += 47637;
        result[6] += 65501;
      } else {
        result[0] += 31972335;
        result[1] += 0;
        result[2] += 30498;
        result[3] += 18329449;
        result[4] += 3324309;
        result[5] += 0;
        result[6] += 30498;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
        result[0] += 0;
        result[1] += 430261;
        result[2] += 143420;
        result[3] += 53113409;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 52789313;
        result[1] += 0;
        result[2] += 897777;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41d00000))) ) ) {
        result[0] += 0;
        result[1] += 540655;
        result[2] += 0;
        result[3] += 9028946;
        result[4] += 44117488;
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
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += 360316;
        result[1] += 1801580;
        result[2] += 0;
        result[3] += 6305530;
        result[4] += 45219664;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 17708307;
        result[1] += 206128;
        result[2] += 149911;
        result[3] += 35604004;
        result[4] += 18738;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x428e0000))) ) ) {
        result[0] += 26405283;
        result[1] += 0;
        result[2] += 2191309;
        result[3] += 25090497;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1076612;
        result[4] += 52610478;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 45648788;
        result[1] += 0;
        result[2] += 164477;
        result[3] += 7764173;
        result[4] += 50608;
        result[5] += 25304;
        result[6] += 33738;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 51136330;
        result[1] += 28500;
        result[2] += 42750;
        result[3] += 687565;
        result[4] += 1777694;
        result[5] += 0;
        result[6] += 14250;
      } else {
        result[0] += 40988029;
        result[1] += 56784;
        result[2] += 139379;
        result[3] += 12348030;
        result[4] += 134217;
        result[5] += 10324;
        result[6] += 10324;
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
        result[0] += 60002;
        result[1] += 0;
        result[2] += 0;
        result[3] += 50266957;
        result[4] += 3330129;
        result[5] += 30001;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53639727;
        result[5] += 47363;
        result[6] += 0;
      } else {
        result[0] += 37252267;
        result[1] += 4747837;
        result[2] += 9860894;
        result[3] += 0;
        result[4] += 0;
        result[5] += 1826091;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 53364323;
        result[1] += 0;
        result[2] += 215178;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 107589;
      } else {
        result[0] += 53666427;
        result[1] += 0;
        result[2] += 20663;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 28687072;
        result[1] += 161870;
        result[2] += 143885;
        result[3] += 24640306;
        result[4] += 0;
        result[5] += 0;
        result[6] += 53956;
      } else {
        result[0] += 45790778;
        result[1] += 97969;
        result[2] += 548627;
        result[3] += 7190935;
        result[4] += 0;
        result[5] += 19593;
        result[6] += 39187;
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
        result[0] += 53399154;
        result[1] += 0;
        result[2] += 157056;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 130880;
      } else {
        result[0] += 53684866;
        result[1] += 0;
        result[2] += 2224;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 37867647;
        result[1] += 103734;
        result[2] += 301771;
        result[3] += 15319634;
        result[4] += 28291;
        result[5] += 9430;
        result[6] += 56582;
      } else {
        result[0] += 0;
        result[1] += 115054;
        result[2] += 388307;
        result[3] += 43418518;
        result[4] += 9707684;
        result[5] += 57527;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 236160;
        result[1] += 314880;
        result[2] += 0;
        result[3] += 15901455;
        result[4] += 37234595;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 71061;
        result[2] += 0;
        result[3] += 7639129;
        result[4] += 45976900;
        result[5] += 0;
        result[6] += 0;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 346196;
        result[1] += 559240;
        result[2] += 452718;
        result[3] += 52328935;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53215116;
        result[1] += 0;
        result[2] += 471974;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        result[0] += 52363649;
        result[1] += 34325;
        result[2] += 51488;
        result[3] += 1218557;
        result[4] += 9534;
        result[5] += 0;
        result[6] += 9534;
      } else {
        result[0] += 1973460;
        result[1] += 0;
        result[2] += 1659500;
        result[3] += 44985925;
        result[4] += 4933650;
        result[5] += 134554;
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
        result[0] += 19815950;
        result[1] += 0;
        result[2] += 506733;
        result[3] += 27123582;
        result[4] += 6151923;
        result[5] += 35560;
        result[6] += 53340;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53544873;
        result[5] += 142217;
        result[6] += 0;
      } else {
        result[0] += 4775995;
        result[1] += 24492;
        result[2] += 538830;
        result[3] += 48127342;
        result[4] += 0;
        result[5] += 220430;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 50091608;
        result[4] += 3595482;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 472875;
        result[2] += 0;
        result[3] += 252200;
        result[4] += 52962015;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 53458710;
        result[1] += 0;
        result[2] += 17567;
        result[3] += 210813;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 39984936;
        result[1] += 0;
        result[2] += 341334;
        result[3] += 13303931;
        result[4] += 0;
        result[5] += 24381;
        result[6] += 32508;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53630609;
        result[1] += 0;
        result[2] += 47563;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8918;
      } else {
        result[0] += 35550049;
        result[1] += 209969;
        result[2] += 362016;
        result[3] += 17528853;
        result[4] += 0;
        result[5] += 0;
        result[6] += 36201;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 6450226;
        result[1] += 0;
        result[2] += 0;
        result[3] += 47201520;
        result[4] += 0;
        result[5] += 35343;
        result[6] += 0;
      } else {
        result[0] += 21663212;
        result[1] += 824143;
        result[2] += 1530553;
        result[3] += 29492579;
        result[4] += 0;
        result[5] += 176602;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 53453894;
        result[1] += 0;
        result[2] += 207286;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 25910;
      } else {
        result[0] += 53668786;
        result[1] += 0;
        result[2] += 18304;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 49044566;
        result[1] += 102364;
        result[2] += 325157;
        result[3] += 4184895;
        result[4] += 0;
        result[5] += 6021;
        result[6] += 24085;
      } else {
        result[0] += 0;
        result[1] += 77948;
        result[2] += 311794;
        result[3] += 53297348;
        result[4] += 0;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420a0000))) ) ) {
        result[0] += 53615203;
        result[1] += 0;
        result[2] += 71887;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53666071;
        result[1] += 0;
        result[2] += 18016;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3002;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 32465018;
        result[1] += 90995;
        result[2] += 171879;
        result[3] += 15772478;
        result[4] += 5065392;
        result[5] += 50552;
        result[6] += 70773;
      } else {
        result[0] += 31331948;
        result[1] += 186614;
        result[2] += 302444;
        result[3] += 13333291;
        result[4] += 8500616;
        result[5] += 6434;
        result[6] += 25739;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 0;
        result[1] += 106066;
        result[2] += 0;
        result[3] += 53492636;
        result[4] += 35355;
        result[5] += 53033;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2041621;
        result[3] += 0;
        result[4] += 51569853;
        result[5] += 75615;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        result[0] += 0;
        result[1] += 283785;
        result[2] += 438577;
        result[3] += 46128072;
        result[4] += 6836655;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1442339;
        result[1] += 0;
        result[2] += 320519;
        result[3] += 8109154;
        result[4] += 43815076;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 6561755;
        result[1] += 31395;
        result[2] += 0;
        result[3] += 46968355;
        result[4] += 31395;
        result[5] += 94187;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1731841;
        result[3] += 0;
        result[4] += 51707843;
        result[5] += 247405;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53668518;
        result[1] += 0;
        result[2] += 16508;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2063;
      } else {
        result[0] += 36717003;
        result[1] += 115264;
        result[2] += 345793;
        result[3] += 16440918;
        result[4] += 0;
        result[5] += 10478;
        result[6] += 57632;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53665987;
        result[5] += 21103;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 136651;
        result[2] += 358711;
        result[3] += 53055076;
        result[4] += 0;
        result[5] += 136651;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53665233;
        result[1] += 0;
        result[2] += 16393;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5464;
      } else {
        result[0] += 36613457;
        result[1] += 758828;
        result[2] += 0;
        result[3] += 16314805;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 29734836;
        result[1] += 130926;
        result[2] += 472789;
        result[3] += 23275801;
        result[4] += 0;
        result[5] += 0;
        result[6] += 72736;
      } else {
        result[0] += 52828009;
        result[1] += 0;
        result[2] += 280853;
        result[3] += 539679;
        result[4] += 0;
        result[5] += 0;
        result[6] += 38548;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x459b9800))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43390000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53648260;
        result[1] += 0;
        result[2] += 32699;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6131;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x46219c00))) ) ) {
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 32896440;
        result[1] += 100986;
        result[2] += 353453;
        result[3] += 17516996;
        result[4] += 2756097;
        result[5] += 16831;
        result[6] += 46285;
      } else {
        result[0] += 110014;
        result[1] += 0;
        result[2] += 1063473;
        result[3] += 41658835;
        result[4] += 10781424;
        result[5] += 73343;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 7351973;
        result[1] += 328438;
        result[2] += 277909;
        result[3] += 29660538;
        result[4] += 16068230;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 184070;
        result[1] += 490853;
        result[2] += 0;
        result[3] += 5092604;
        result[4] += 47919563;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
        result[0] += 22896788;
        result[1] += 223929;
        result[2] += 145554;
        result[3] += 27677682;
        result[4] += 2743136;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 50731564;
        result[1] += 49756;
        result[2] += 66341;
        result[3] += 2789672;
        result[4] += 3317;
        result[5] += 9951;
        result[6] += 36487;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 6328248;
        result[1] += 0;
        result[2] += 559240;
        result[3] += 2501865;
        result[4] += 44297736;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53379180;
        result[1] += 0;
        result[2] += 115466;
        result[3] += 0;
        result[4] += 192444;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 8582724;
        result[1] += 0;
        result[2] += 318905;
        result[3] += 36327525;
        result[4] += 8457935;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53424470;
        result[1] += 0;
        result[2] += 0;
        result[3] += 262620;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        result[0] += 50008026;
        result[1] += 0;
        result[2] += 299775;
        result[3] += 3229401;
        result[4] += 0;
        result[5] += 13626;
        result[6] += 136261;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 51313172;
        result[4] += 1826091;
        result[5] += 547827;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45935c00))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53642913;
        result[1] += 0;
        result[2] += 38286;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5890;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x4613de00))) ) ) {
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
        result[0] += 783246;
        result[1] += 237948;
        result[2] += 376751;
        result[3] += 34522336;
        result[4] += 17756893;
        result[5] += 9914;
        result[6] += 0;
      } else {
        result[0] += 52740264;
        result[1] += 0;
        result[2] += 382759;
        result[3] += 503631;
        result[4] += 0;
        result[5] += 6715;
        result[6] += 53720;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 0;
        result[1] += 88563;
        result[2] += 637655;
        result[3] += 45078735;
        result[4] += 7828998;
        result[5] += 53137;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 37206737;
        result[4] += 16480353;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 4592832;
        result[1] += 0;
        result[2] += 0;
        result[3] += 48068674;
        result[4] += 980993;
        result[5] += 44590;
        result[6] += 0;
      } else {
        result[0] += 16093016;
        result[1] += 98328;
        result[2] += 0;
        result[3] += 31432185;
        result[4] += 6063560;
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
        result[1] += 92603;
        result[2] += 463019;
        result[3] += 0;
        result[4] += 53131467;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
        result[0] += 53598654;
        result[1] += 35374;
        result[2] += 29478;
        result[3] += 23583;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53310061;
        result[1] += 0;
        result[2] += 34726;
        result[3] += 337342;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4960;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 28721874;
        result[1] += 165523;
        result[2] += 575732;
        result[3] += 24166387;
        result[4] += 0;
        result[5] += 0;
        result[6] += 57573;
      } else {
        result[0] += 52970300;
        result[1] += 0;
        result[2] += 150026;
        result[3] += 516756;
        result[4] += 0;
        result[5] += 0;
        result[6] += 50008;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 53687091;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 68130;
        result[1] += 749439;
        result[2] += 0;
        result[3] += 3542802;
        result[4] += 49326718;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41200000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 16699681;
        result[1] += 133597;
        result[2] += 438963;
        result[3] += 36414848;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 52772568;
        result[1] += 7706;
        result[2] += 61653;
        result[3] += 832318;
        result[4] += 10275;
        result[5] += 2568;
        result[6] += 0;
      } else {
        result[0] += 149754;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53537336;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        result[0] += 42750583;
        result[1] += 46923;
        result[2] += 154176;
        result[3] += 10678428;
        result[4] += 0;
        result[5] += 0;
        result[6] += 56978;
      } else {
        result[0] += 1035507;
        result[1] += 0;
        result[2] += 916026;
        result[3] += 45283547;
        result[4] += 6133391;
        result[5] += 318617;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 24673216;
        result[1] += 0;
        result[2] += 0;
        result[3] += 6690488;
        result[4] += 22290749;
        result[5] += 32636;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 36031;
        result[2] += 486426;
        result[3] += 51020752;
        result[4] += 2107848;
        result[5] += 36031;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 964438;
        result[4] += 52722652;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 491155;
        result[2] += 0;
        result[3] += 4004807;
        result[4] += 49191127;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 53561747;
        result[1] += 0;
        result[2] += 24001;
        result[3] += 98674;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2666;
      } else {
        result[0] += 14060904;
        result[1] += 6391320;
        result[2] += 0;
        result[3] += 33234865;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53677524;
        result[1] += 0;
        result[2] += 9566;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 37147583;
        result[1] += 89991;
        result[2] += 393121;
        result[3] += 15990085;
        result[4] += 0;
        result[5] += 4736;
        result[6] += 61573;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 13052886;
        result[1] += 56751;
        result[2] += 0;
        result[3] += 40009935;
        result[4] += 340510;
        result[5] += 227006;
        result[6] += 0;
      } else {
        result[0] += 53416568;
        result[1] += 30916;
        result[2] += 50239;
        result[3] += 168110;
        result[4] += 0;
        result[5] += 0;
        result[6] += 21255;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 8422105;
        result[1] += 275632;
        result[2] += 275632;
        result[3] += 40334226;
        result[4] += 4364181;
        result[5] += 15312;
        result[6] += 0;
      } else {
        result[0] += 1226764;
        result[1] += 0;
        result[2] += 1259047;
        result[3] += 2679512;
        result[4] += 48521766;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        result[0] += 8102882;
        result[1] += 0;
        result[2] += 0;
        result[3] += 45584208;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 52444771;
        result[1] += 0;
        result[2] += 739101;
        result[3] += 15725;
        result[4] += 251609;
        result[5] += 94353;
        result[6] += 141530;
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
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 48244302;
        result[1] += 0;
        result[2] += 66877;
        result[3] += 4984935;
        result[4] += 380686;
        result[5] += 0;
        result[6] += 10288;
      } else {
        result[0] += 28231399;
        result[1] += 0;
        result[2] += 878388;
        result[3] += 21186725;
        result[4] += 3267604;
        result[5] += 70271;
        result[6] += 52703;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 46667033;
        result[1] += 36552;
        result[2] += 150270;
        result[3] += 6416945;
        result[4] += 400043;
        result[5] += 2030;
        result[6] += 14214;
      } else {
        result[0] += 216044;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53471046;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
        result[0] += 9167983;
        result[1] += 310779;
        result[2] += 388473;
        result[3] += 43819854;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 936402;
        result[1] += 3433476;
        result[2] += 0;
        result[3] += 49317211;
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
        result[0] += 53620197;
        result[1] += 0;
        result[2] += 52559;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 14334;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
        result[0] += 10217902;
        result[1] += 287342;
        result[2] += 333317;
        result[3] += 23297737;
        result[4] += 19550790;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42457743;
        result[1] += 66805;
        result[2] += 327952;
        result[3] += 9911462;
        result[4] += 825955;
        result[5] += 18219;
        result[6] += 78951;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
        result[0] += 0;
        result[1] += 88098;
        result[2] += 299534;
        result[3] += 53299458;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 780335;
        result[3] += 0;
        result[4] += 52672654;
        result[5] += 234100;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41180000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 8832619;
        result[1] += 0;
        result[2] += 0;
        result[3] += 44840361;
        result[4] += 0;
        result[5] += 14109;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 17895697;
        result[1] += 6507526;
        result[2] += 0;
        result[3] += 0;
        result[4] += 28470427;
        result[5] += 813440;
        result[6] += 0;
      } else {
        result[0] += 1438257;
        result[1] += 0;
        result[2] += 518715;
        result[3] += 0;
        result[4] += 51612227;
        result[5] += 117889;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53657219;
        result[1] += 0;
        result[2] += 29871;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 37802146;
        result[1] += 1206451;
        result[2] += 0;
        result[3] += 14678493;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 28881271;
        result[1] += 110346;
        result[2] += 426671;
        result[3] += 24232019;
        result[4] += 0;
        result[5] += 0;
        result[6] += 36782;
      } else {
        result[0] += 52925455;
        result[1] += 0;
        result[2] += 169861;
        result[3] += 558898;
        result[4] += 0;
        result[5] += 0;
        result[6] += 32876;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 8657903;
        result[1] += 13485;
        result[2] += 0;
        result[3] += 41806074;
        result[4] += 3182655;
        result[5] += 26971;
        result[6] += 0;
      } else {
        result[0] += 2770946;
        result[1] += 283392;
        result[2] += 251904;
        result[3] += 0;
        result[4] += 50349360;
        result[5] += 31488;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 52920846;
        result[1] += 69134;
        result[2] += 115224;
        result[3] += 574203;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7681;
      } else {
        result[0] += 39698201;
        result[1] += 0;
        result[2] += 2079429;
        result[3] += 11909460;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 22412639;
        result[1] += 0;
        result[2] += 731314;
        result[3] += 1505647;
        result[4] += 29037489;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 864312;
        result[1] += 0;
        result[2] += 382291;
        result[3] += 52174544;
        result[4] += 199456;
        result[5] += 66485;
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
        result[0] += 52986404;
        result[1] += 0;
        result[2] += 507393;
        result[3] += 96646;
        result[4] += 0;
        result[5] += 0;
        result[6] += 96646;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += 52241947;
        result[1] += 0;
        result[2] += 1445143;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 3763472;
        result[1] += 588842;
        result[2] += 102407;
        result[3] += 42627089;
        result[4] += 6605278;
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
        result[0] += 17403154;
        result[1] += 0;
        result[2] += 1313445;
        result[3] += 34970490;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 51450869;
        result[1] += 11847;
        result[2] += 35542;
        result[3] += 897450;
        result[4] += 1288419;
        result[5] += 2961;
        result[6] += 0;
      } else {
        result[0] += 49888403;
        result[1] += 0;
        result[2] += 0;
        result[3] += 398249;
        result[4] += 3354485;
        result[5] += 0;
        result[6] += 45951;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += 42914465;
        result[1] += 42095;
        result[2] += 256399;
        result[3] += 9968983;
        result[4] += 443916;
        result[5] += 30614;
        result[6] += 30614;
      } else {
        result[0] += 24277193;
        result[1] += 0;
        result[2] += 247558;
        result[3] += 29162339;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_4/test_data.csv", "r");
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
