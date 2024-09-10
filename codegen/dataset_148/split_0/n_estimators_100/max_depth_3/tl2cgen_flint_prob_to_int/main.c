
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
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45afc400))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 42788359;
        result[1] += 0;
        result[2] += 100820;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 60492;
      } else {
        result[0] += 42946099;
        result[1] += 0;
        result[2] += 3573;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43ba8000))) ) ) {
        result[0] += 42949672;
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
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 22149405;
        result[1] += 85912;
        result[2] += 159096;
        result[3] += 20386616;
        result[4] += 152732;
        result[5] += 9545;
        result[6] += 6363;
      } else {
        result[0] += 26521362;
        result[1] += 0;
        result[2] += 1132156;
        result[3] += 120442;
        result[4] += 15079357;
        result[5] += 24088;
        result[6] += 72265;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 390451;
        result[1] += 650752;
        result[2] += 0;
        result[3] += 41908468;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 236311;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42654283;
        result[5] += 59077;
        result[6] += 0;
      } else {
        result[0] += 8635264;
        result[1] += 0;
        result[2] += 203982;
        result[3] += 34019767;
        result[4] += 0;
        result[5] += 90658;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 1378064;
        result[2] += 0;
        result[3] += 41571608;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        result[0] += 42908721;
        result[1] += 0;
        result[2] += 40951;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42938145;
        result[1] += 0;
        result[2] += 2881;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8645;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 38930111;
        result[1] += 101822;
        result[2] += 305467;
        result[3] += 3573482;
        result[4] += 0;
        result[5] += 0;
        result[6] += 38789;
      } else {
        result[0] += 0;
        result[1] += 77164;
        result[2] += 216060;
        result[3] += 42656448;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ac0000))) ) ) {
        result[0] += 8935990;
        result[1] += 0;
        result[2] += 0;
        result[3] += 33933998;
        result[4] += 56917;
        result[5] += 22766;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1586376;
        result[3] += 0;
        result[4] += 41304541;
        result[5] += 58754;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 30588547;
        result[4] += 12361125;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 230499;
        result[2] += 0;
        result[3] += 332943;
        result[4] += 42386230;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 42810795;
        result[1] += 6830;
        result[2] += 22766;
        result[3] += 102450;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6830;
      } else {
        result[0] += 41699091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1250581;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 23317523;
        result[1] += 63740;
        result[2] += 208606;
        result[3] += 19342418;
        result[4] += 0;
        result[5] += 0;
        result[6] += 17383;
      } else {
        result[0] += 42393947;
        result[1] += 0;
        result[2] += 158778;
        result[3] += 370483;
        result[4] += 0;
        result[5] += 0;
        result[6] += 26463;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42911720;
        result[1] += 0;
        result[2] += 37952;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 10933834;
        result[1] += 0;
        result[2] += 1178497;
        result[3] += 18986898;
        result[4] += 11654027;
        result[5] += 196416;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40b00000))) ) ) {
        result[0] += 18193958;
        result[1] += 0;
        result[2] += 0;
        result[3] += 22071359;
        result[4] += 2684354;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 25029710;
        result[1] += 36398;
        result[2] += 127393;
        result[3] += 14820063;
        result[4] += 2911842;
        result[5] += 6066;
        result[6] += 18199;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42919175;
        result[1] += 0;
        result[2] += 23459;
        result[3] += 0;
        result[4] += 4691;
        result[5] += 0;
        result[6] += 2345;
      } else {
        result[0] += 28353358;
        result[1] += 153866;
        result[2] += 125890;
        result[3] += 13554220;
        result[4] += 706386;
        result[5] += 34969;
        result[6] += 20981;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 7892692;
        result[1] += 184054;
        result[2] += 400589;
        result[3] += 21014700;
        result[4] += 13457636;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
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
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42928369;
        result[1] += 0;
        result[2] += 16569;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4734;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 35735301;
        result[1] += 94925;
        result[2] += 112185;
        result[3] += 6946852;
        result[4] += 0;
        result[5] += 25888;
        result[6] += 34518;
      } else {
        result[0] += 7046558;
        result[1] += 163493;
        result[2] += 212541;
        result[3] += 34137387;
        result[4] += 1373343;
        result[5] += 16349;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 96795;
        result[1] += 55311;
        result[2] += 345699;
        result[3] += 26625755;
        result[4] += 15763885;
        result[5] += 62225;
        result[6] += 0;
      } else {
        result[0] += 42446260;
        result[1] += 0;
        result[2] += 356072;
        result[3] += 85948;
        result[4] += 0;
        result[5] += 0;
        result[6] += 61391;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 42749803;
        result[1] += 0;
        result[2] += 133246;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 66623;
      } else {
        result[0] += 42931844;
        result[1] += 0;
        result[2] += 17828;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 701617;
        result[1] += 266437;
        result[2] += 541755;
        result[3] += 34361514;
        result[4] += 7016178;
        result[5] += 62168;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 179893;
        result[2] += 0;
        result[3] += 6183853;
        result[4] += 36585925;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 25236233;
        result[1] += 13542;
        result[2] += 142195;
        result[3] += 17544159;
        result[4] += 0;
        result[5] += 0;
        result[6] += 13542;
      } else {
        result[0] += 41706032;
        result[1] += 0;
        result[2] += 254603;
        result[3] += 910697;
        result[4] += 0;
        result[5] += 0;
        result[6] += 78339;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        result[0] += 0;
        result[1] += 190590;
        result[2] += 266827;
        result[3] += 25872722;
        result[4] += 16619531;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42491004;
        result[1] += 36693;
        result[2] += 421974;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
        result[0] += 42499157;
        result[1] += 27549;
        result[2] += 17826;
        result[3] += 395416;
        result[4] += 1620;
        result[5] += 0;
        result[6] += 8102;
      } else {
        result[0] += 0;
        result[1] += 438261;
        result[2] += 0;
        result[3] += 41822713;
        result[4] += 313044;
        result[5] += 375653;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 19121207;
        result[1] += 0;
        result[2] += 486957;
        result[3] += 1298553;
        result[4] += 22042953;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 548352;
        result[1] += 0;
        result[2] += 274176;
        result[3] += 41976348;
        result[4] += 123379;
        result[5] += 27417;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x42850000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 42949672;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42692129;
        result[1] += 0;
        result[2] += 171695;
        result[3] += 68678;
        result[4] += 0;
        result[5] += 0;
        result[6] += 17169;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 20640724;
        result[1] += 0;
        result[2] += 424124;
        result[3] += 21884823;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 5535735;
        result[1] += 681740;
        result[2] += 245426;
        result[3] += 36486769;
        result[4] += 0;
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
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42921805;
        result[1] += 0;
        result[2] += 27867;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 34166154;
        result[1] += 52970;
        result[2] += 269669;
        result[3] += 7656685;
        result[4] += 717513;
        result[5] += 33708;
        result[6] += 52970;
      } else {
        result[0] += 0;
        result[1] += 58040;
        result[2] += 348240;
        result[3] += 34394562;
        result[4] += 8137221;
        result[5] += 11608;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40b00000))) ) ) {
        result[0] += 8589934;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 34359738;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41e80000))) ) ) {
        result[0] += 0;
        result[1] += 768013;
        result[2] += 0;
        result[3] += 708935;
        result[4] += 41472724;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 204310;
        result[3] += 28079403;
        result[4] += 14612660;
        result[5] += 53298;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 42828267;
        result[1] += 24903;
        result[2] += 74711;
        result[3] += 10895;
        result[4] += 0;
        result[5] += 0;
        result[6] += 10895;
      } else {
        result[0] += 129366;
        result[1] += 1293664;
        result[2] += 0;
        result[3] += 41526641;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        result[0] += 19765056;
        result[1] += 0;
        result[2] += 119684;
        result[3] += 23064931;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 37118757;
        result[1] += 0;
        result[2] += 386018;
        result[3] += 5414421;
        result[4] += 0;
        result[5] += 0;
        result[6] += 30475;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        result[0] += 42849789;
        result[1] += 0;
        result[2] += 79906;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 19976;
      } else {
        result[0] += 42939907;
        result[1] += 0;
        result[2] += 9765;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 931278;
        result[1] += 421292;
        result[2] += 144126;
        result[3] += 38858699;
        result[4] += 2538842;
        result[5] += 55433;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 686340;
        result[3] += 8724152;
        result[4] += 33493423;
        result[5] += 45756;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 23134255;
        result[1] += 0;
        result[2] += 67578;
        result[3] += 19717804;
        result[4] += 0;
        result[5] += 0;
        result[6] += 30034;
      } else {
        result[0] += 41759361;
        result[1] += 0;
        result[2] += 277441;
        result[3] += 850222;
        result[4] += 0;
        result[5] += 0;
        result[6] += 62647;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x4545c800))) ) ) {
        result[0] += 42949672;
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
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42886989;
        result[1] += 0;
        result[2] += 58765;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3917;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 305116;
        result[1] += 143584;
        result[2] += 358960;
        result[3] += 30798846;
        result[4] += 11307268;
        result[5] += 35896;
        result[6] += 0;
      } else {
        result[0] += 31318110;
        result[1] += 0;
        result[2] += 225457;
        result[3] += 11385608;
        result[4] += 0;
        result[5] += 0;
        result[6] += 20496;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 23365042;
        result[1] += 157517;
        result[2] += 291168;
        result[3] += 19097759;
        result[4] += 0;
        result[5] += 28639;
        result[6] += 9546;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 139901;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42669870;
        result[5] += 139901;
        result[6] += 0;
      } else {
        result[0] += 3772731;
        result[1] += 0;
        result[2] += 353112;
        result[3] += 38768073;
        result[4] += 0;
        result[5] += 55754;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 38043910;
        result[1] += 0;
        result[2] += 128187;
        result[3] += 4756788;
        result[4] += 0;
        result[5] += 3464;
        result[6] += 17322;
      } else {
        result[0] += 39391249;
        result[1] += 29552;
        result[2] += 78226;
        result[3] += 3441953;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8691;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 607175;
        result[2] += 0;
        result[3] += 42342497;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 41348159;
        result[1] += 0;
        result[2] += 1601513;
        result[3] += 0;
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
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 42809445;
        result[1] += 0;
        result[2] += 120194;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 20032;
      } else {
        result[0] += 42939004;
        result[1] += 0;
        result[2] += 10668;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42914697;
        result[5] += 34975;
        result[6] += 0;
      } else {
        result[0] += 820363;
        result[1] += 290761;
        result[2] += 498448;
        result[3] += 41225870;
        result[4] += 0;
        result[5] += 114227;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 24921159;
        result[1] += 6899;
        result[2] += 103493;
        result[3] += 17876723;
        result[4] += 0;
        result[5] += 0;
        result[6] += 41397;
      } else {
        result[0] += 41734301;
        result[1] += 0;
        result[2] += 284240;
        result[3] += 882124;
        result[4] += 0;
        result[5] += 0;
        result[6] += 49006;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 42615867;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 333805;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 265039;
        result[3] += 29737447;
        result[4] += 12774910;
        result[5] += 172275;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42929837;
        result[1] += 0;
        result[2] += 19835;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 30309045;
        result[1] += 67195;
        result[2] += 284591;
        result[3] += 12249313;
        result[4] += 0;
        result[5] += 0;
        result[6] += 39526;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
        result[0] += 4631617;
        result[1] += 150098;
        result[2] += 107213;
        result[3] += 23951465;
        result[4] += 14109278;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 263494;
        result[1] += 1317474;
        result[2] += 0;
        result[3] += 11462029;
        result[4] += 29906674;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1964574;
        result[4] += 40985098;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0;
        result[1] += 2229221;
        result[2] += 0;
        result[3] += 0;
        result[4] += 40720451;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 25309;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42899054;
        result[5] += 25309;
        result[6] += 0;
      } else {
        result[0] += 3266423;
        result[1] += 0;
        result[2] += 349431;
        result[3] += 39166698;
        result[4] += 0;
        result[5] += 167119;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
        result[0] += 42895432;
        result[1] += 9040;
        result[2] += 9040;
        result[3] += 36160;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42574008;
        result[1] += 0;
        result[2] += 15491;
        result[3] += 356300;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3872;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += 35897520;
        result[1] += 44842;
        result[2] += 221220;
        result[3] += 6747227;
        result[4] += 0;
        result[5] += 2989;
        result[6] += 35873;
      } else {
        result[0] += 19685266;
        result[1] += 0;
        result[2] += 248188;
        result[3] += 23016217;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41a40000))) ) ) {
        result[0] += 129366;
        result[1] += 0;
        result[2] += 711515;
        result[3] += 0;
        result[4] += 41979424;
        result[5] += 129366;
        result[6] += 0;
      } else {
        result[0] += 42193084;
        result[1] += 16358;
        result[2] += 40896;
        result[3] += 695243;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4089;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += 32361654;
        result[1] += 38733;
        result[2] += 174299;
        result[3] += 9486886;
        result[4] += 854898;
        result[5] += 8299;
        result[6] += 24899;
      } else {
        result[0] += 18751724;
        result[1] += 0;
        result[2] += 215692;
        result[3] += 23982256;
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
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 9306725;
        result[1] += 231223;
        result[2] += 0;
        result[3] += 33411724;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 3655992;
        result[1] += 526989;
        result[2] += 428179;
        result[3] += 23319300;
        result[4] += 15019210;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 127636;
        result[2] += 0;
        result[3] += 2361274;
        result[4] += 40460761;
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
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 42549209;
        result[1] += 0;
        result[2] += 400463;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42931371;
        result[1] += 0;
        result[2] += 16638;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 1663;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 25896126;
        result[1] += 40315;
        result[2] += 262052;
        result[3] += 14352393;
        result[4] += 2365188;
        result[5] += 10078;
        result[6] += 23517;
      } else {
        result[0] += 3131930;
        result[1] += 123165;
        result[2] += 615828;
        result[3] += 37864685;
        result[4] += 1178872;
        result[5] += 35190;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41a80000))) ) ) {
        result[0] += 70007;
        result[1] += 420045;
        result[2] += 0;
        result[3] += 11481249;
        result[4] += 30978370;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 10387354;
        result[1] += 229132;
        result[2] += 0;
        result[3] += 32205889;
        result[4] += 127296;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 20441288;
        result[1] += 0;
        result[2] += 1224946;
        result[3] += 21283438;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 17257430;
        result[4] += 25692242;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 31168;
        result[1] += 280513;
        result[2] += 0;
        result[3] += 2462281;
        result[4] += 40175710;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x437c0000))) ) ) {
        result[0] += 42930012;
        result[1] += 0;
        result[2] += 18021;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 1638;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 15718720;
        result[1] += 35391;
        result[2] += 252793;
        result[3] += 22893009;
        result[4] += 3963807;
        result[5] += 65726;
        result[6] += 20223;
      } else {
        result[0] += 41503903;
        result[1] += 0;
        result[2] += 278826;
        result[3] += 1084326;
        result[4] += 0;
        result[5] += 0;
        result[6] += 82615;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 45606;
        result[1] += 0;
        result[2] += 353448;
        result[3] += 34181874;
        result[4] += 8243327;
        result[5] += 125417;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 12664647;
        result[4] += 30285025;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 490666;
        result[2] += 0;
        result[3] += 32711;
        result[4] += 42426295;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b60000))) ) ) {
        result[0] += 42837853;
        result[1] += 23295;
        result[2] += 66781;
        result[3] += 12424;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9318;
      } else {
        result[0] += 13254803;
        result[1] += 822003;
        result[2] += 0;
        result[3] += 28872866;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        result[0] += 18983968;
        result[1] += 0;
        result[2] += 97855;
        result[3] += 23867848;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 36933059;
        result[1] += 0;
        result[2] += 396364;
        result[3] += 5559269;
        result[4] += 0;
        result[5] += 0;
        result[6] += 60979;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 42724912;
        result[1] += 0;
        result[2] += 224760;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42942550;
        result[1] += 0;
        result[2] += 7122;
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
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 96299;
        result[1] += 337049;
        result[2] += 0;
        result[3] += 9918870;
        result[4] += 32404854;
        result[5] += 192599;
        result[6] += 0;
      } else {
        result[0] += 24719489;
        result[1] += 38379;
        result[2] += 252663;
        result[3] += 16950872;
        result[4] += 943491;
        result[5] += 19189;
        result[6] += 25586;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 5852986;
        result[1] += 145803;
        result[2] += 270778;
        result[3] += 23495262;
        result[4] += 13184841;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 144611;
        result[1] += 433835;
        result[2] += 0;
        result[3] += 5302428;
        result[4] += 37068797;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 5192843;
        result[1] += 0;
        result[2] += 255805;
        result[3] += 32487245;
        result[4] += 4962618;
        result[5] += 51161;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 558694;
        result[2] += 0;
        result[3] += 5237764;
        result[4] += 37153213;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 24458;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42925214;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 9639971;
        result[1] += 17559;
        result[2] += 87795;
        result[3] += 33098991;
        result[4] += 0;
        result[5] += 105354;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42930189;
        result[1] += 0;
        result[2] += 12988;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6494;
      } else {
        result[0] += 29229638;
        result[1] += 894784;
        result[2] += 0;
        result[3] += 12825249;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42927248;
        result[1] += 0;
        result[2] += 22424;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 29802365;
        result[1] += 92613;
        result[2] += 281700;
        result[3] += 12730545;
        result[4] += 0;
        result[5] += 0;
        result[6] += 42448;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 42248453;
        result[1] += 0;
        result[2] += 350609;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 350609;
      } else {
        result[0] += 42862258;
        result[1] += 0;
        result[2] += 87414;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += 42923202;
        result[1] += 0;
        result[2] += 26470;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42949672;
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
        result[0] += 36363001;
        result[1] += 70351;
        result[2] += 43969;
        result[3] += 6419586;
        result[4] += 0;
        result[5] += 8793;
        result[6] += 43969;
      } else {
        result[0] += 7645741;
        result[1] += 190746;
        result[2] += 190746;
        result[3] += 33507738;
        result[4] += 1398805;
        result[5] += 15895;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 5368709;
        result[1] += 0;
        result[2] += 303684;
        result[3] += 29826161;
        result[4] += 7418579;
        result[5] += 32537;
        result[6] += 0;
      } else {
        result[0] += 22178309;
        result[1] += 60513;
        result[2] += 257183;
        result[3] += 7965129;
        result[4] += 12390201;
        result[5] += 30256;
        result[6] += 68078;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 20312976;
        result[1] += 0;
        result[2] += 0;
        result[3] += 5430718;
        result[4] += 17205978;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 417662;
        result[3] += 40541149;
        result[4] += 1893405;
        result[5] += 97454;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 35544556;
        result[4] += 7405116;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 304019;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42645653;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 42901728;
        result[1] += 0;
        result[2] += 42303;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5640;
      } else {
        result[0] += 42937120;
        result[1] += 0;
        result[2] += 12552;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 22273499;
        result[1] += 178140;
        result[2] += 249396;
        result[3] += 20248636;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 41536265;
        result[1] += 0;
        result[2] += 298607;
        result[3] += 1055078;
        result[4] += 0;
        result[5] += 0;
        result[6] += 59721;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 13062653;
        result[1] += 206687;
        result[2] += 0;
        result[3] += 27737469;
        result[4] += 1942862;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 5551318;
        result[1] += 0;
        result[2] += 0;
        result[3] += 6720016;
        result[4] += 30678337;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 13727196;
        result[1] += 122783;
        result[2] += 564804;
        result[3] += 28510331;
        result[4] += 24556;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 32686;
        result[2] += 0;
        result[3] += 3856972;
        result[4] += 39060014;
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
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42939769;
        result[1] += 0;
        result[2] += 8252;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 1650;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 34118765;
        result[1] += 43030;
        result[2] += 205592;
        result[3] += 7836414;
        result[4] += 655026;
        result[5] += 19124;
        result[6] += 71718;
      } else {
        result[0] += 0;
        result[1] += 45162;
        result[2] += 270975;
        result[3] += 34504258;
        result[4] += 8117984;
        result[5] += 11290;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 42700689;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 248983;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 39235;
        result[1] += 0;
        result[2] += 274647;
        result[3] += 29701189;
        result[4] += 12869207;
        result[5] += 65392;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 42546733;
        result[1] += 21367;
        result[2] += 76314;
        result[3] += 300678;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4578;
      } else {
        result[0] += 27840796;
        result[1] += 0;
        result[2] += 194342;
        result[3] += 14904568;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9966;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
        result[0] += 7179551;
        result[1] += 414818;
        result[2] += 95727;
        result[3] += 35259575;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42949672;
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
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 1431655;
        result[2] += 0;
        result[3] += 41518017;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 226471;
        result[2] += 319724;
        result[3] += 42336867;
        result[4] += 0;
        result[5] += 66609;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b60000))) ) ) {
        result[0] += 42827670;
        result[1] += 18769;
        result[2] += 78206;
        result[3] += 9384;
        result[4] += 0;
        result[5] += 0;
        result[6] += 15641;
      } else {
        result[0] += 12904603;
        result[1] += 689558;
        result[2] += 0;
        result[3] += 29355510;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 8655538;
        result[1] += 0;
        result[2] += 105813;
        result[3] += 34188320;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42678376;
        result[1] += 0;
        result[2] += 194994;
        result[3] += 50868;
        result[4] += 0;
        result[5] += 0;
        result[6] += 25434;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x41c80000))) ) ) {
        result[0] += 42949672;
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
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
        result[0] += 41644572;
        result[1] += 0;
        result[2] += 1305100;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 3483376;
        result[1] += 395022;
        result[2] += 107733;
        result[3] += 38963541;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 40465300;
        result[1] += 26713;
        result[2] += 62331;
        result[3] += 2332995;
        result[4] += 46006;
        result[5] += 4452;
        result[6] += 11872;
      } else {
        result[0] += 27900962;
        result[1] += 0;
        result[2] += 272083;
        result[3] += 14657899;
        result[4] += 59363;
        result[5] += 4946;
        result[6] += 54416;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42949672;
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40e00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42899677;
        result[1] += 0;
        result[2] += 34612;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 15383;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 50174;
        result[1] += 100349;
        result[2] += 0;
        result[3] += 9533221;
        result[4] += 33165576;
        result[5] += 100349;
        result[6] += 0;
      } else {
        result[0] += 23998732;
        result[1] += 56918;
        result[2] += 260627;
        result[3] += 18423693;
        result[4] += 182739;
        result[5] += 8987;
        result[6] += 17974;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0;
        result[1] += 858993;
        result[2] += 0;
        result[3] += 22411920;
        result[4] += 19678759;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1240319;
        result[4] += 41709353;
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
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 42520176;
        result[1] += 0;
        result[2] += 429496;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42934683;
        result[1] += 0;
        result[2] += 11658;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3330;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 39157358;
        result[1] += 63293;
        result[2] += 163507;
        result[3] += 3496946;
        result[4] += 0;
        result[5] += 10548;
        result[6] += 58018;
      } else {
        result[0] += 4794382;
        result[1] += 183784;
        result[2] += 391541;
        result[3] += 24754992;
        result[4] += 12801000;
        result[5] += 23971;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 0;
        result[1] += 69950;
        result[2] += 0;
        result[3] += 42837751;
        result[4] += 27980;
        result[5] += 13990;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1787087;
        result[3] += 0;
        result[4] += 41162585;
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
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += 41426634;
        result[1] += 0;
        result[2] += 1523038;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2922552;
        result[1] += 375192;
        result[2] += 0;
        result[3] += 39651927;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 206364;
        result[1] += 0;
        result[2] += 283751;
        result[3] += 38744990;
        result[4] += 3637179;
        result[5] += 77386;
        result[6] += 0;
      } else {
        result[0] += 9772394;
        result[1] += 0;
        result[2] += 635205;
        result[3] += 0;
        result[4] += 32542073;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 42712646;
        result[1] += 8316;
        result[2] += 31187;
        result[3] += 197522;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 34400786;
        result[1] += 41047;
        result[2] += 169664;
        result[3] += 8310809;
        result[4] += 0;
        result[5] += 0;
        result[6] += 27365;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x432e8000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 0;
        result[1] += 148175;
        result[2] += 275182;
        result[3] += 28513163;
        result[4] += 13970815;
        result[5] += 42335;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 47881;
        result[2] += 227436;
        result[3] += 22444436;
        result[4] += 20170066;
        result[5] += 59851;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41300000))) ) ) {
        result[0] += 16879784;
        result[1] += 0;
        result[2] += 0;
        result[3] += 26069888;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 38031180;
        result[1] += 0;
        result[2] += 130267;
        result[3] += 4784704;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3520;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42915789;
        result[1] += 0;
        result[2] += 29042;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4840;
      } else {
        result[0] += 30080321;
        result[1] += 180382;
        result[2] += 286123;
        result[3] += 12377965;
        result[4] += 0;
        result[5] += 0;
        result[6] += 24880;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 40315;
        result[1] += 134385;
        result[2] += 107508;
        result[3] += 42600270;
        result[4] += 0;
        result[5] += 67192;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 42887696;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 61976;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 468116;
        result[3] += 0;
        result[4] += 42481556;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42905919;
        result[1] += 0;
        result[2] += 35798;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7955;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        result[0] += 21891415;
        result[1] += 145229;
        result[2] += 214022;
        result[3] += 20660787;
        result[4] += 0;
        result[5] += 0;
        result[6] += 38218;
      } else {
        result[0] += 36416782;
        result[1] += 56746;
        result[2] += 375942;
        result[3] += 6093108;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7093;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43390000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 42785272;
        result[1] += 0;
        result[2] += 143850;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 20550;
      } else {
        result[0] += 42935367;
        result[1] += 0;
        result[2] += 14305;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
        result[0] += 8778823;
        result[1] += 233862;
        result[2] += 116931;
        result[3] += 19032776;
        result[4] += 14787280;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 33885039;
        result[1] += 48241;
        result[2] += 217088;
        result[3] += 8012962;
        result[4] += 689857;
        result[5] += 38593;
        result[6] += 57890;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 0;
        result[1] += 58138;
        result[2] += 377898;
        result[3] += 35784126;
        result[4] += 6700439;
        result[5] += 29069;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 29843497;
        result[4] += 13106174;
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
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += 41962921;
        result[1] += 0;
        result[2] += 986751;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 3149517;
        result[1] += 487425;
        result[2] += 0;
        result[3] += 39312729;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 42219433;
        result[1] += 4137;
        result[2] += 22755;
        result[3] += 690934;
        result[4] += 6206;
        result[5] += 0;
        result[6] += 6206;
      } else {
        result[0] += 1856959;
        result[1] += 0;
        result[2] += 479215;
        result[3] += 0;
        result[4] += 40613498;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 18217630;
        result[1] += 43285;
        result[2] += 297585;
        result[3] += 23536290;
        result[4] += 800774;
        result[5] += 32463;
        result[6] += 21642;
      } else {
        result[0] += 42325960;
        result[1] += 0;
        result[2] += 100158;
        result[3] += 491685;
        result[4] += 0;
        result[5] += 0;
        result[6] += 31868;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42060000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42919108;
        result[1] += 0;
        result[2] += 28381;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2183;
      }
    } else {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 31559773;
        result[1] += 62239;
        result[2] += 253108;
        result[3] += 9891993;
        result[4] += 1099571;
        result[5] += 29045;
        result[6] += 53941;
      } else {
        result[0] += 0;
        result[1] += 45162;
        result[2] += 304847;
        result[3] += 34842978;
        result[4] += 7722811;
        result[5] += 33871;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 7667358;
        result[1] += 529858;
        result[2] += 155840;
        result[3] += 34596616;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 50410;
        result[1] += 151231;
        result[2] += 0;
        result[3] += 4763784;
        result[4] += 37984247;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 10846464;
        result[1] += 29078;
        result[2] += 67850;
        result[3] += 31327768;
        result[4] += 620351;
        result[5] += 58157;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 129822;
        result[2] += 0;
        result[3] += 5993480;
        result[4] += 36826369;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41dc0000))) ) ) {
        result[0] += 39038572;
        result[1] += 434566;
        result[2] += 0;
        result[3] += 3476533;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42736838;
        result[1] += 25413;
        result[2] += 90534;
        result[3] += 90534;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6353;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 3257876;
        result[1] += 0;
        result[2] += 542979;
        result[3] += 34479193;
        result[4] += 4642474;
        result[5] += 27148;
        result[6] += 0;
      } else {
        result[0] += 8372052;
        result[1] += 0;
        result[2] += 14923;
        result[3] += 27100975;
        result[4] += 7461722;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42890000))) ) ) {
        result[0] += 42910751;
        result[1] += 0;
        result[2] += 0;
        result[3] += 38921;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 40787276;
        result[1] += 0;
        result[2] += 1640438;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 521957;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x423e0000))) ) ) {
        result[0] += 42949672;
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
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 7590145;
        result[1] += 0;
        result[2] += 0;
        result[3] += 35290735;
        result[4] += 0;
        result[5] += 68792;
        result[6] += 0;
      } else {
        result[0] += 29004973;
        result[1] += 5298985;
        result[2] += 7251243;
        result[3] += 0;
        result[4] += 0;
        result[5] += 1394469;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 42844377;
        result[1] += 29420;
        result[2] += 61938;
        result[3] += 4645;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9290;
      } else {
        result[0] += 543666;
        result[1] += 2038750;
        result[2] += 0;
        result[3] += 40367255;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 18973960;
        result[1] += 0;
        result[2] += 59456;
        result[3] += 23916256;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42424803;
        result[1] += 0;
        result[2] += 409654;
        result[3] += 25603;
        result[4] += 0;
        result[5] += 0;
        result[6] += 89611;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 5413592;
        result[1] += 0;
        result[2] += 469546;
        result[3] += 18643748;
        result[4] += 18312304;
        result[5] += 110481;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 138696;
        result[3] += 41146618;
        result[4] += 1618125;
        result[5] += 46232;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 33102674;
        result[4] += 9846998;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 363980;
        result[2] += 0;
        result[3] += 103994;
        result[4] += 42481698;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        result[0] += 22689952;
        result[1] += 46735;
        result[2] += 0;
        result[3] += 20212985;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42758406;
        result[1] += 45840;
        result[2] += 71132;
        result[3] += 61647;
        result[4] += 0;
        result[5] += 0;
        result[6] += 12645;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 8451522;
        result[1] += 0;
        result[2] += 104857;
        result[3] += 34372321;
        result[4] += 0;
        result[5] += 20971;
        result[6] += 0;
      } else {
        result[0] += 42631216;
        result[1] += 0;
        result[2] += 192749;
        result[3] += 33521;
        result[4] += 0;
        result[5] += 0;
        result[6] += 92184;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42df0000))) ) ) {
        result[0] += 11847084;
        result[1] += 0;
        result[2] += 0;
        result[3] += 22480721;
        result[4] += 8621867;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 609215;
        result[1] += 761519;
        result[2] += 0;
        result[3] += 10965873;
        result[4] += 30613064;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 11669345;
        result[1] += 231534;
        result[2] += 254688;
        result[3] += 26487561;
        result[4] += 4306544;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2379797;
        result[1] += 0;
        result[2] += 226647;
        result[3] += 5363987;
        result[4] += 34979241;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
        result[0] += 41722539;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1227133;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42923367;
        result[1] += 0;
        result[2] += 21372;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4932;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 30469003;
        result[1] += 69477;
        result[2] += 221064;
        result[3] += 11198495;
        result[4] += 922154;
        result[5] += 37896;
        result[6] += 31580;
      } else {
        result[0] += 15656531;
        result[1] += 0;
        result[2] += 372079;
        result[3] += 21879746;
        result[4] += 4975654;
        result[5] += 21887;
        result[6] += 43774;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 67530;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42882142;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1484680;
        result[1] += 318145;
        result[2] += 388844;
        result[3] += 40758002;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 4410354;
        result[1] += 102566;
        result[2] += 307699;
        result[3] += 38077769;
        result[4] += 0;
        result[5] += 51283;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x3f800000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42600000))) ) ) {
        result[0] += 42464913;
        result[1] += 0;
        result[2] += 484759;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 4006835;
        result[1] += 360164;
        result[2] += 0;
        result[3] += 38582672;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 42549088;
        result[1] += 25992;
        result[2] += 94794;
        result[3] += 273681;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6115;
      } else {
        result[0] += 27650622;
        result[1] += 0;
        result[2] += 164024;
        result[3] += 15115143;
        result[4] += 0;
        result[5] += 19881;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x44d7b000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 42902707;
        result[1] += 0;
        result[2] += 43051;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3913;
      } else {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42949672;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 584202;
        result[1] += 266857;
        result[2] += 367830;
        result[3] += 29008158;
        result[4] += 12686561;
        result[5] += 36061;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 42077190;
        result[1] += 10705;
        result[2] += 305101;
        result[3] += 519207;
        result[4] += 0;
        result[5] += 0;
        result[6] += 37468;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 42949672;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 14006078;
        result[1] += 0;
        result[2] += 0;
        result[3] += 6520070;
        result[4] += 22423524;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 388205;
        result[3] += 37603020;
        result[4] += 4905509;
        result[5] += 52937;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42923134;
        result[1] += 0;
        result[2] += 24880;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 1658;
      } else {
        result[0] += 29890384;
        result[1] += 47344;
        result[2] += 252505;
        result[3] += 12723929;
        result[4] += 0;
        result[5] += 0;
        result[6] += 35508;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 5903853;
        result[1] += 725034;
        result[2] += 0;
        result[3] += 36320784;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 10381874;
        result[1] += 0;
        result[2] += 1706609;
        result[3] += 30861188;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1020990;
        result[4] += 41928682;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41b40000))) ) ) {
        result[0] += 17179869;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 25769803;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 26463;
        result[1] += 119084;
        result[2] += 105852;
        result[3] += 42592420;
        result[4] += 0;
        result[5] += 105852;
        result[6] += 0;
      } else {
        result[0] += 41904802;
        result[1] += 0;
        result[2] += 1044870;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42930066;
        result[1] += 0;
        result[2] += 17428;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2178;
      } else {
        result[0] += 27588111;
        result[1] += 470251;
        result[2] += 0;
        result[3] += 14891309;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 41103853;
        result[1] += 98181;
        result[2] += 157091;
        result[3] += 1561092;
        result[4] += 0;
        result[5] += 0;
        result[6] += 29454;
      } else {
        result[0] += 26378945;
        result[1] += 0;
        result[2] += 227137;
        result[3] += 16317778;
        result[4] += 0;
        result[5] += 0;
        result[6] += 25811;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 40183163;
        result[1] += 15284;
        result[2] += 18341;
        result[3] += 623610;
        result[4] += 2103158;
        result[5] += 6113;
        result[6] += 0;
      } else {
        result[0] += 42058922;
        result[1] += 0;
        result[2] += 99587;
        result[3] += 752435;
        result[4] += 27663;
        result[5] += 0;
        result[6] += 11065;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += 32696807;
        result[1] += 47753;
        result[2] += 185394;
        result[3] += 9238814;
        result[4] += 727532;
        result[5] += 25281;
        result[6] += 28090;
      } else {
        result[0] += 19876986;
        result[1] += 0;
        result[2] += 172382;
        result[3] += 22900304;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += 148102;
        result[1] += 1332920;
        result[2] += 0;
        result[3] += 4591171;
        result[4] += 36877477;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 7119284;
        result[1] += 434510;
        result[2] += 0;
        result[3] += 35395878;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40a00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 2724260;
        result[4] += 40225412;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 5836366;
        result[1] += 0;
        result[2] += 748252;
        result[3] += 15413994;
        result[4] += 20951059;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 20566696;
        result[1] += 0;
        result[2] += 0;
        result[3] += 5021479;
        result[4] += 17334787;
        result[5] += 26709;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 365965;
        result[3] += 41705391;
        result[4] += 746568;
        result[5] += 131747;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42aa0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 16773245;
        result[4] += 26176427;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 186063;
        result[2] += 0;
        result[3] += 558190;
        result[4] += 42205418;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 35998254;
        result[1] += 0;
        result[2] += 101886;
        result[3] += 6844901;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4631;
      } else {
        result[0] += 42696792;
        result[1] += 0;
        result[2] += 106475;
        result[3] += 106475;
        result[4] += 0;
        result[5] += 0;
        result[6] += 39928;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 42681618;
        result[1] += 6092;
        result[2] += 42645;
        result[3] += 207133;
        result[4] += 0;
        result[5] += 0;
        result[6] += 12184;
      } else {
        result[0] += 34901482;
        result[1] += 90290;
        result[2] += 155956;
        result[3] += 7785525;
        result[4] += 0;
        result[5] += 0;
        result[6] += 16416;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42245646;
        result[1] += 6121;
        result[2] += 40813;
        result[3] += 655050;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2040;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 27962185;
        result[1] += 19460;
        result[2] += 130664;
        result[3] += 14081176;
        result[4] += 722824;
        result[5] += 16680;
        result[6] += 16680;
      } else {
        result[0] += 42194113;
        result[1] += 0;
        result[2] += 442914;
        result[3] += 26053;
        result[4] += 169349;
        result[5] += 65134;
        result[6] += 52107;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += 433835;
        result[1] += 1590728;
        result[2] += 0;
        result[3] += 4482962;
        result[4] += 36442146;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 6954099;
        result[1] += 288252;
        result[2] += 0;
        result[3] += 35707320;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 11373432;
        result[1] += 0;
        result[2] += 1047552;
        result[3] += 30528687;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1179010;
        result[4] += 41770662;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 13646085;
        result[1] += 315516;
        result[2] += 0;
        result[3] += 26385060;
        result[4] += 2603010;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 3919361;
        result[1] += 0;
        result[2] += 0;
        result[3] += 7103843;
        result[4] += 31926467;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 11899171;
        result[1] += 375516;
        result[2] += 398986;
        result[3] += 25793273;
        result[4] += 4482725;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2048529;
        result[1] += 0;
        result[2] += 138883;
        result[3] += 5069241;
        result[4] += 35693018;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40b00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42760744;
        result[5] += 188928;
        result[6] += 0;
      } else {
        result[0] += 42232376;
        result[1] += 14345;
        result[2] += 36889;
        result[3] += 661962;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4098;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 29127889;
        result[1] += 40116;
        result[2] += 70975;
        result[3] += 13223117;
        result[4] += 453628;
        result[5] += 24687;
        result[6] += 9257;
      } else {
        result[0] += 42291137;
        result[1] += 0;
        result[2] += 434633;
        result[3] += 0;
        result[4] += 131707;
        result[5] += 26341;
        result[6] += 65853;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += 308990;
        result[1] += 1699447;
        result[2] += 0;
        result[3] += 6179809;
        result[4] += 34761425;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 13876543;
        result[1] += 144882;
        result[2] += 273667;
        result[3] += 28654579;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42920000))) ) ) {
        result[0] += 15498658;
        result[1] += 0;
        result[2] += 1050756;
        result[3] += 26400257;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1382626;
        result[4] += 41567046;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 42242716;
        result[1] += 4110;
        result[2] += 49322;
        result[3] += 637083;
        result[4] += 6165;
        result[5] += 2055;
        result[6] += 8220;
      } else {
        result[0] += 31500257;
        result[1] += 19985;
        result[2] += 149894;
        result[3] += 10862330;
        result[4] += 389724;
        result[5] += 7494;
        result[6] += 19985;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x445c0000))) ) ) {
        result[0] += 63723;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42885949;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42949672;
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 66821;
        result[1] += 0;
        result[2] += 133643;
        result[3] += 37988158;
        result[4] += 4677521;
        result[5] += 83527;
        result[6] += 0;
      } else {
        result[0] += 14757684;
        result[1] += 0;
        result[2] += 761945;
        result[3] += 0;
        result[4] += 27430043;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42919808;
        result[1] += 0;
        result[2] += 23227;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6636;
      } else {
        result[0] += 30051778;
        result[1] += 74804;
        result[2] += 283470;
        result[3] += 12496311;
        result[4] += 0;
        result[5] += 0;
        result[6] += 43307;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 7735012;
        result[1] += 232631;
        result[2] += 319868;
        result[3] += 34662159;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 867670;
        result[1] += 433835;
        result[2] += 0;
        result[3] += 41648167;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 50588;
        result[1] += 556473;
        result[2] += 0;
        result[3] += 50588;
        result[4] += 42292021;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42790403;
        result[1] += 0;
        result[2] += 132724;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 26544;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42913978;
        result[1] += 0;
        result[2] += 35694;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x41480000))) ) ) {
        result[0] += 21787366;
        result[1] += 76470;
        result[2] += 335804;
        result[3] += 18632138;
        result[4] += 2074670;
        result[5] += 16623;
        result[6] += 26598;
      } else {
        result[0] += 25087182;
        result[1] += 0;
        result[2] += 17325;
        result[3] += 16407156;
        result[4] += 1368706;
        result[5] += 17325;
        result[6] += 51976;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41a80000))) ) ) {
        result[0] += 139108;
        result[1] += 347770;
        result[2] += 0;
        result[3] += 11093883;
        result[4] += 31368910;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 22949712;
        result[1] += 0;
        result[2] += 399783;
        result[3] += 16531572;
        result[4] += 3068605;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 3251523;
        result[1] += 369491;
        result[2] += 118237;
        result[3] += 17587787;
        result[4] += 21622633;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424a0000))) ) ) {
        result[0] += 42221860;
        result[1] += 36740;
        result[2] += 34990;
        result[3] += 635086;
        result[4] += 12246;
        result[5] += 8747;
        result[6] += 0;
      } else {
        result[0] += 34363009;
        result[1] += 0;
        result[2] += 65422;
        result[3] += 8455819;
        result[4] += 16355;
        result[5] += 32711;
        result[6] += 16355;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        result[0] += 6870103;
        result[1] += 0;
        result[2] += 0;
        result[3] += 36079569;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42220000))) ) ) {
        result[0] += 67319;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42882353;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42133839;
        result[1] += 0;
        result[2] += 578978;
        result[3] += 26317;
        result[4] += 157903;
        result[5] += 26317;
        result[6] += 26317;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41b40000))) ) ) {
        result[0] += 30678337;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 12271335;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 26196;
        result[1] += 117885;
        result[2] += 340558;
        result[3] += 42360244;
        result[4] += 0;
        result[5] += 104787;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
        result[0] += 42887427;
        result[1] += 9576;
        result[2] += 43093;
        result[3] += 9576;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42531661;
        result[1] += 0;
        result[2] += 23439;
        result[3] += 390664;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3906;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42911697;
        result[1] += 0;
        result[2] += 37974;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 29446684;
        result[1] += 64030;
        result[2] += 305088;
        result[3] += 13096203;
        result[4] += 0;
        result[5] += 0;
        result[6] += 37665;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42400000))) ) ) {
        result[0] += 42659472;
        result[1] += 0;
        result[2] += 290200;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2763023;
        result[1] += 245602;
        result[2] += 0;
        result[3] += 25174218;
        result[4] += 14766828;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 35921048;
        result[1] += 0;
        result[2] += 143302;
        result[3] += 6840967;
        result[4] += 34119;
        result[5] += 3411;
        result[6] += 6823;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428c0000))) ) ) {
        result[0] += 39437754;
        result[1] += 28179;
        result[2] += 54598;
        result[3] += 3429140;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 8694689;
        result[1] += 116394;
        result[2] += 360823;
        result[3] += 21824020;
        result[4] += 11907185;
        result[5] += 46557;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 192887;
        result[2] += 0;
        result[3] += 2700428;
        result[4] += 40056356;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 16491573;
        result[1] += 178956;
        result[2] += 137659;
        result[3] += 26058888;
        result[4] += 82595;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 3611596;
        result[1] += 0;
        result[2] += 424893;
        result[3] += 7506455;
        result[4] += 31406727;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 320519;
        result[1] += 961559;
        result[2] += 0;
        result[3] += 11057938;
        result[4] += 30609654;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 180208;
        result[2] += 0;
        result[3] += 2703126;
        result[4] += 40066338;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 5378133;
        result[1] += 0;
        result[2] += 201051;
        result[3] += 36214440;
        result[4] += 929864;
        result[5] += 226183;
        result[6] += 0;
      } else {
        result[0] += 42694246;
        result[1] += 15864;
        result[2] += 57113;
        result[3] += 172928;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9518;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 18878452;
        result[1] += 0;
        result[2] += 0;
        result[3] += 24071220;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 35286987;
        result[1] += 0;
        result[2] += 643923;
        result[3] += 53660;
        result[4] += 6911441;
        result[5] += 21464;
        result[6] += 32196;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42100000))) ) ) {
        result[0] += 0;
        result[1] += 622158;
        result[2] += 207386;
        result[3] += 37184337;
        result[4] += 4935790;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42840801;
        result[1] += 108871;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 2539790;
        result[4] += 40409882;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 7149517;
        result[1] += 0;
        result[2] += 525699;
        result[3] += 10251145;
        result[4] += 25023310;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42888491;
        result[5] += 61181;
        result[6] += 0;
      } else {
        result[0] += 42182605;
        result[1] += 8138;
        result[2] += 50866;
        result[3] += 699923;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8138;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        result[0] += 34107253;
        result[1] += 16395;
        result[2] += 153020;
        result[3] += 8642945;
        result[4] += 0;
        result[5] += 0;
        result[6] += 30057;
      } else {
        result[0] += 573937;
        result[1] += 0;
        result[2] += 637708;
        result[3] += 36445045;
        result[4] += 5133554;
        result[5] += 159427;
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
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42925162;
        result[1] += 0;
        result[2] += 22876;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 1634;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 145263;
        result[1] += 290527;
        result[2] += 0;
        result[3] += 8715829;
        result[4] += 33749630;
        result[5] += 48421;
        result[6] += 0;
      } else {
        result[0] += 24764273;
        result[1] += 39024;
        result[2] += 334959;
        result[3] += 16923608;
        result[4] += 829269;
        result[5] += 26016;
        result[6] += 32520;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 24433967;
        result[1] += 0;
        result[2] += 760919;
        result[3] += 17754786;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 234270;
        result[1] += 624722;
        result[2] += 0;
        result[3] += 42090679;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 15938954;
        result[1] += 219242;
        result[2] += 328864;
        result[3] += 24971759;
        result[4] += 1490851;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 5610542;
        result[1] += 232160;
        result[2] += 0;
        result[3] += 30103464;
        result[4] += 7003505;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42920000))) ) ) {
        result[0] += 14686813;
        result[1] += 0;
        result[2] += 1234186;
        result[3] += 27028673;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1446013;
        result[4] += 41503659;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 106179;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42843493;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 5028374;
        result[1] += 0;
        result[2] += 441515;
        result[3] += 37430725;
        result[4] += 0;
        result[5] += 49057;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 42706172;
        result[1] += 14048;
        result[2] += 54631;
        result[3] += 163894;
        result[4] += 0;
        result[5] += 0;
        result[6] += 10926;
      } else {
        result[0] += 27522505;
        result[1] += 0;
        result[2] += 179559;
        result[3] += 15227656;
        result[4] += 0;
        result[5] += 4987;
        result[6] += 14963;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 3667089;
        result[1] += 0;
        result[2] += 0;
        result[3] += 38334506;
        result[4] += 894412;
        result[5] += 53664;
        result[6] += 0;
      } else {
        result[0] += 11991725;
        result[1] += 0;
        result[2] += 0;
        result[3] += 26106123;
        result[4] += 4851824;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 18546449;
        result[1] += 7320966;
        result[2] += 0;
        result[3] += 0;
        result[4] += 16594191;
        result[5] += 488064;
        result[6] += 0;
      } else {
        result[0] += 1483613;
        result[1] += 0;
        result[2] += 544617;
        result[3] += 0;
        result[4] += 40883881;
        result[5] += 37559;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 42815460;
        result[1] += 23140;
        result[2] += 91017;
        result[3] += 10798;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9256;
      } else {
        result[0] += 255652;
        result[1] += 2556528;
        result[2] += 0;
        result[3] += 40137491;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        result[0] += 19275579;
        result[1] += 0;
        result[2] += 150452;
        result[3] += 23523641;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 37331739;
        result[1] += 0;
        result[2] += 186918;
        result[3] += 5399862;
        result[4] += 0;
        result[5] += 0;
        result[6] += 31153;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x41c80000))) ) ) {
        result[0] += 42949672;
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
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 164747;
        result[2] += 378919;
        result[3] += 42323632;
        result[4] += 0;
        result[5] += 82373;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x46503000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 42949672;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 41470215;
        result[1] += 46873;
        result[2] += 64451;
        result[3] += 1363737;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4394;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 8521249;
        result[1] += 0;
        result[2] += 203908;
        result[3] += 34213782;
        result[4] += 0;
        result[5] += 10732;
        result[6] += 0;
      } else {
        result[0] += 42603583;
        result[1] += 0;
        result[2] += 242262;
        result[3] += 43261;
        result[4] += 0;
        result[5] += 0;
        result[6] += 60565;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 9494691;
        result[1] += 131505;
        result[2] += 0;
        result[3] += 33297174;
        result[4] += 26301;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 21626067;
        result[1] += 0;
        result[2] += 945195;
        result[3] += 20378409;
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
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 2154665;
        result[2] += 0;
        result[3] += 40795007;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 42726557;
        result[1] += 0;
        result[2] += 223115;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42931220;
        result[1] += 0;
        result[2] += 13420;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5032;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 97061;
        result[1] += 291184;
        result[2] += 0;
        result[3] += 10191447;
        result[4] += 32321448;
        result[5] += 48530;
        result[6] += 0;
      } else {
        result[0] += 25713880;
        result[1] += 25093;
        result[2] += 304709;
        result[3] += 16339588;
        result[4] += 501874;
        result[5] += 21508;
        result[6] += 43017;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 42723622;
        result[1] += 0;
        result[2] += 143850;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 82200;
      } else {
        result[0] += 42942535;
        result[1] += 0;
        result[2] += 7137;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 26416243;
        result[1] += 46554;
        result[2] += 199518;
        result[3] += 13952990;
        result[4] += 2301112;
        result[5] += 23277;
        result[6] += 9975;
      } else {
        result[0] += 3535491;
        result[1] += 336713;
        result[2] += 430244;
        result[3] += 38441453;
        result[4] += 130944;
        result[5] += 74825;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 56962;
        result[1] += 0;
        result[2] += 0;
        result[3] += 18114053;
        result[4] += 24778657;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 62608;
        result[1] += 281739;
        result[2] += 0;
        result[3] += 2880007;
        result[4] += 39725317;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 125009;
        result[1] += 0;
        result[2] += 107150;
        result[3] += 41699578;
        result[4] += 892924;
        result[5] += 125009;
        result[6] += 0;
      } else {
        result[0] += 10165061;
        result[1] += 0;
        result[2] += 915771;
        result[3] += 0;
        result[4] += 31868840;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 31684184;
        result[4] += 11265487;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 181990;
        result[2] += 0;
        result[3] += 155991;
        result[4] += 42611691;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 41751873;
        result[1] += 342228;
        result[2] += 0;
        result[3] += 855571;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 20354647;
        result[1] += 0;
        result[2] += 218573;
        result[3] += 22376451;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 37530589;
        result[1] += 34401;
        result[2] += 85185;
        result[3] += 5288028;
        result[4] += 0;
        result[5] += 0;
        result[6] += 11467;
      } else {
        result[0] += 42368989;
        result[1] += 0;
        result[2] += 150392;
        result[3] += 409402;
        result[4] += 0;
        result[5] += 0;
        result[6] += 20887;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
        result[0] += 41896190;
        result[1] += 0;
        result[2] += 1053482;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 3305400;
        result[1] += 328486;
        result[2] += 20530;
        result[3] += 38761463;
        result[4] += 533791;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41a80000))) ) ) {
        result[0] += 108733;
        result[1] += 326200;
        result[2] += 0;
        result[3] += 10837090;
        result[4] += 31677649;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
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
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42913786;
        result[1] += 0;
        result[2] += 29361;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6524;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
        result[0] += 28198814;
        result[1] += 67030;
        result[2] += 222037;
        result[3] += 13925547;
        result[4] += 490159;
        result[5] += 16757;
        result[6] += 29325;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 432621;
        result[3] += 28408793;
        result[4] += 13964051;
        result[5] += 144207;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 42869814;
        result[1] += 0;
        result[2] += 65765;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 14092;
      } else {
        result[0] += 42949672;
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
        result[0] += 39292812;
        result[1] += 68500;
        result[2] += 147539;
        result[3] += 3382859;
        result[4] += 0;
        result[5] += 0;
        result[6] += 57961;
      } else {
        result[0] += 4595797;
        result[1] += 269874;
        result[2] += 230186;
        result[3] += 24121984;
        result[4] += 13715955;
        result[5] += 15874;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 48149;
        result[2] += 0;
        result[3] += 8426225;
        result[4] += 34427148;
        result[5] += 48149;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 638543;
        result[3] += 42189501;
        result[4] += 121627;
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
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 2393090;
        result[1] += 0;
        result[2] += 0;
        result[3] += 40556582;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 16616922;
        result[1] += 328623;
        result[2] += 342911;
        result[3] += 25661215;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
        result[0] += 42151523;
        result[1] += 21488;
        result[2] += 38372;
        result[3] += 729079;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9209;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 584614;
        result[3] += 40650189;
        result[4] += 1597946;
        result[5] += 116922;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 18736864;
        result[1] += 0;
        result[2] += 0;
        result[3] += 24212807;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 35695757;
        result[1] += 0;
        result[2] += 422242;
        result[3] += 32480;
        result[4] += 6745058;
        result[5] += 32480;
        result[6] += 21653;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x44672000))) ) ) {
        result[0] += 42949672;
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
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x40200000))) ) ) {
        result[0] += 42926076;
        result[1] += 0;
        result[2] += 23596;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42897591;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 52081;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 23017601;
        result[1] += 0;
        result[2] += 375368;
        result[3] += 17544727;
        result[4] += 1944409;
        result[5] += 45044;
        result[6] += 22522;
      } else {
        result[0] += 4178158;
        result[1] += 224632;
        result[2] += 0;
        result[3] += 21924100;
        result[4] += 16622781;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 25701552;
        result[1] += 273005;
        result[2] += 126752;
        result[3] += 16224348;
        result[4] += 565512;
        result[5] += 29250;
        result[6] += 29250;
      } else {
        result[0] += 15636311;
        result[1] += 6921;
        result[2] += 256106;
        result[3] += 15352518;
        result[4] += 11670128;
        result[5] += 13843;
        result[6] += 13843;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 130546;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42688580;
        result[5] += 130546;
        result[6] += 0;
      } else {
        result[0] += 42217494;
        result[1] += 8226;
        result[2] += 67870;
        result[3] += 651967;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4113;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 33944054;
        result[1] += 33944;
        result[2] += 133165;
        result[3] += 8804565;
        result[4] += 0;
        result[5] += 13055;
        result[6] += 20888;
      } else {
        result[0] += 7343179;
        result[1] += 0;
        result[2] += 545895;
        result[3] += 30394069;
        result[4] += 4613700;
        result[5] += 52828;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42da0000))) ) ) {
        result[0] += 0;
        result[1] += 1814774;
        result[2] += 0;
        result[3] += 41134898;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 60069;
        result[1] += 540625;
        result[2] += 0;
        result[3] += 120138;
        result[4] += 42228839;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 7593647;
        result[1] += 334120;
        result[2] += 242996;
        result[3] += 34778907;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 4832454;
        result[4] += 38117218;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x41500000))) ) ) {
        result[0] += 9911462;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 33038209;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 17339;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42862975;
        result[5] += 69357;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 3590932;
        result[1] += 0;
        result[2] += 0;
        result[3] += 39341051;
        result[4] += 0;
        result[5] += 17689;
        result[6] += 0;
      } else {
        result[0] += 15404687;
        result[1] += 296762;
        result[2] += 674460;
        result[3] += 26492825;
        result[4] += 0;
        result[5] += 80935;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 42604233;
        result[1] += 0;
        result[2] += 345439;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42941083;
        result[1] += 0;
        result[2] += 8589;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 28656537;
        result[1] += 122964;
        result[2] += 304483;
        result[3] += 13801278;
        result[4] += 0;
        result[5] += 0;
        result[6] += 64409;
      } else {
        result[0] += 31048198;
        result[1] += 0;
        result[2] += 60209;
        result[3] += 11831230;
        result[4] += 0;
        result[5] += 0;
        result[6] += 10034;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 40142627;
        result[1] += 71589;
        result[2] += 71589;
        result[3] += 2633724;
        result[4] += 0;
        result[5] += 7535;
        result[6] += 22607;
      } else {
        result[0] += 42815672;
        result[1] += 0;
        result[2] += 9925;
        result[3] += 119111;
        result[4] += 2481;
        result[5] += 2481;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 6274001;
        result[1] += 110955;
        result[2] += 383299;
        result[3] += 26417377;
        result[4] += 9733779;
        result[5] += 30260;
        result[6] += 0;
      } else {
        result[0] += 125461;
        result[1] += 334564;
        result[2] += 0;
        result[3] += 4851180;
        result[4] += 37638467;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        result[0] += 6711614;
        result[1] += 0;
        result[2] += 0;
        result[3] += 36238058;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 42428913;
        result[1] += 0;
        result[2] += 468683;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 52075;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 178461;
        result[3] += 0;
        result[4] += 42533263;
        result[5] += 237948;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 3205199;
        result[1] += 0;
        result[2] += 0;
        result[3] += 39515530;
        result[4] += 122102;
        result[5] += 106839;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 735529;
        result[3] += 0;
        result[4] += 42161605;
        result[5] += 52537;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 360542;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42589130;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
        result[0] += 20721333;
        result[1] += 0;
        result[2] += 37675;
        result[3] += 22115314;
        result[4] += 0;
        result[5] += 75350;
        result[6] += 0;
      } else {
        result[0] += 26040352;
        result[1] += 67637;
        result[2] += 67637;
        result[3] += 16774045;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 38151143;
        result[1] += 0;
        result[2] += 113239;
        result[3] += 4671135;
        result[4] += 0;
        result[5] += 0;
        result[6] += 14154;
      } else {
        result[0] += 39360321;
        result[1] += 37296;
        result[2] += 76369;
        result[3] += 3466805;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8880;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
        result[0] += 18228281;
        result[1] += 264305;
        result[2] += 158583;
        result[3] += 22219297;
        result[4] += 2079204;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 40511133;
        result[1] += 39888;
        result[2] += 66481;
        result[3] += 2305576;
        result[4] += 2659;
        result[5] += 10637;
        result[6] += 13296;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42495819;
        result[1] += 0;
        result[2] += 121027;
        result[3] += 332825;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        result[0] += 6975902;
        result[1] += 0;
        result[2] += 0;
        result[3] += 35973770;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 41956012;
        result[1] += 0;
        result[2] += 627575;
        result[3] += 65372;
        result[4] += 130744;
        result[5] += 65372;
        result[6] += 104595;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
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
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42913544;
        result[1] += 0;
        result[2] += 32843;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3284;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 28841399;
        result[1] += 67133;
        result[2] += 273696;
        result[3] += 12228547;
        result[4] += 1445943;
        result[5] += 46476;
        result[6] += 46476;
      } else {
        result[0] += 15357090;
        result[1] += 0;
        result[2] += 332085;
        result[3] += 22006172;
        result[4] += 5210046;
        result[5] += 14759;
        result[6] += 29518;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 24381205;
        result[1] += 0;
        result[2] += 484394;
        result[3] += 18084072;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 145592;
        result[1] += 909950;
        result[2] += 0;
        result[3] += 41894130;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41b40000))) ) ) {
        result[0] += 21474836;
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
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e40000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 152791;
        result[2] += 336141;
        result[3] += 42369065;
        result[4] += 0;
        result[5] += 91674;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 42269730;
        result[1] += 0;
        result[2] += 679942;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42931203;
        result[1] += 0;
        result[2] += 16790;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 1679;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 37415280;
        result[1] += 106967;
        result[2] += 274394;
        result[3] += 5097221;
        result[4] += 0;
        result[5] += 0;
        result[6] += 55808;
      } else {
        result[0] += 0;
        result[1] += 62517;
        result[2] += 93776;
        result[3] += 42793378;
        result[4] += 0;
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
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 42609701;
        result[1] += 0;
        result[2] += 339971;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42936284;
        result[1] += 0;
        result[2] += 11714;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 1673;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 199302;
        result[1] += 249128;
        result[2] += 0;
        result[3] += 8868957;
        result[4] += 33632284;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 24362723;
        result[1] += 86561;
        result[2] += 307444;
        result[3] += 18079516;
        result[4] += 38803;
        result[5] += 29848;
        result[6] += 44773;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41a80000))) ) ) {
        result[0] += 190464;
        result[1] += 285696;
        result[2] += 0;
        result[3] += 13649933;
        result[4] += 28823579;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x432e8000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 42800096;
        result[1] += 0;
        result[2] += 149575;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42931936;
        result[1] += 0;
        result[2] += 17736;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 29957349;
        result[1] += 71614;
        result[2] += 335455;
        result[3] += 12509869;
        result[4] += 7538;
        result[5] += 30153;
        result[6] += 37691;
      } else {
        result[0] += 0;
        result[1] += 22992;
        result[2] += 287404;
        result[3] += 34603457;
        result[4] += 8012827;
        result[5] += 22992;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 59901;
        result[1] += 359411;
        result[2] += 0;
        result[3] += 12279892;
        result[4] += 30250467;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 42797590;
        result[1] += 0;
        result[2] += 16666;
        result[3] += 124999;
        result[4] += 4166;
        result[5] += 0;
        result[6] += 6249;
      } else {
        result[0] += 807830;
        result[1] += 134638;
        result[2] += 359035;
        result[3] += 11489149;
        result[4] += 30069259;
        result[5] += 89758;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 17899994;
        result[1] += 60948;
        result[2] += 234415;
        result[3] += 23427520;
        result[4] += 1279910;
        result[5] += 37506;
        result[6] += 9376;
      } else {
        result[0] += 42386587;
        result[1] += 0;
        result[2] += 93108;
        result[3] += 456675;
        result[4] += 0;
        result[5] += 0;
        result[6] += 13301;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x42080000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 541951;
        result[1] += 1761343;
        result[2] += 0;
        result[3] += 9484154;
        result[4] += 31162223;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 6828338;
        result[1] += 315595;
        result[2] += 344285;
        result[3] += 35461453;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 42720448;
        result[1] += 4130;
        result[2] += 16520;
        result[3] += 200313;
        result[4] += 4130;
        result[5] += 0;
        result[6] += 4130;
      } else {
        result[0] += 0;
        result[1] += 285696;
        result[2] += 238080;
        result[3] += 10570762;
        result[4] += 31855134;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42260000))) ) ) {
        result[0] += 14470835;
        result[1] += 64445;
        result[2] += 310507;
        result[3] += 26451749;
        result[4] += 1581832;
        result[5] += 35151;
        result[6] += 35151;
      } else {
        result[0] += 40440519;
        result[1] += 0;
        result[2] += 91658;
        result[3] += 2406037;
        result[4] += 0;
        result[5] += 0;
        result[6] += 11457;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 24602239;
        result[1] += 0;
        result[2] += 917371;
        result[3] += 17430061;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 106663;
        result[1] += 853304;
        result[2] += 0;
        result[3] += 41989705;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 42728250;
        result[1] += 2088;
        result[2] += 22977;
        result[3] += 183822;
        result[4] += 6266;
        result[5] += 0;
        result[6] += 6266;
      } else {
        result[0] += 88556;
        result[1] += 88556;
        result[2] += 619892;
        result[3] += 11866507;
        result[4] += 30197605;
        result[5] += 88556;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42260000))) ) ) {
        result[0] += 14863238;
        result[1] += 34286;
        result[2] += 342865;
        result[3] += 25994952;
        result[4] += 1640042;
        result[5] += 40001;
        result[6] += 34286;
      } else {
        result[0] += 40184232;
        result[1] += 0;
        result[2] += 91043;
        result[3] += 2659222;
        result[4] += 0;
        result[5] += 0;
        result[6] += 15173;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 24201799;
        result[1] += 0;
        result[2] += 511305;
        result[3] += 18236567;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 44186;
        result[1] += 530242;
        result[2] += 0;
        result[3] += 42375243;
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
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 270123;
        result[1] += 2971361;
        result[2] += 0;
        result[3] += 39708188;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        result[0] += 42831381;
        result[1] += 0;
        result[2] += 108433;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9857;
      } else {
        result[0] += 42937912;
        result[1] += 0;
        result[2] += 11760;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 667487;
        result[1] += 206603;
        result[2] += 286066;
        result[3] += 28074226;
        result[4] += 13675557;
        result[5] += 39731;
        result[6] += 0;
      } else {
        result[0] += 42133501;
        result[1] += 5299;
        result[2] += 275590;
        result[3] += 471683;
        result[4] += 0;
        result[5] += 0;
        result[6] += 63597;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 0;
        result[1] += 87414;
        result[2] += 0;
        result[3] += 42789412;
        result[4] += 43707;
        result[5] += 29138;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2183881;
        result[3] += 0;
        result[4] += 40765791;
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
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42914678;
        result[1] += 0;
        result[2] += 31106;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3888;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 35672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42896164;
        result[5] += 17836;
        result[6] += 0;
      } else {
        result[0] += 754915;
        result[1] += 271769;
        result[2] += 503277;
        result[3] += 41369382;
        result[4] += 0;
        result[5] += 50327;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b90000))) ) ) {
        result[0] += 42820931;
        result[1] += 0;
        result[2] += 100132;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 28609;
      } else {
        result[0] += 18758579;
        result[1] += 0;
        result[2] += 209643;
        result[3] += 23935874;
        result[4] += 0;
        result[5] += 0;
        result[6] += 45574;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42903115;
        result[1] += 0;
        result[2] += 46557;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 656859;
        result[1] += 186607;
        result[2] += 313501;
        result[3] += 30103585;
        result[4] += 11651796;
        result[5] += 37321;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 543666;
        result[2] += 0;
        result[3] += 4976641;
        result[4] += 37429364;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 42226343;
        result[1] += 0;
        result[2] += 203603;
        result[3] += 482219;
        result[4] += 0;
        result[5] += 0;
        result[6] += 37505;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 17043;
        result[3] += 42932629;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 42949672;
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
        result[3] += 41993073;
        result[4] += 956598;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42930601;
        result[5] += 19071;
        result[6] += 0;
      } else {
        result[0] += 23748642;
        result[1] += 5558192;
        result[2] += 11116385;
        result[3] += 505290;
        result[4] += 0;
        result[5] += 2021161;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 42687415;
        result[1] += 0;
        result[2] += 181562;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 80694;
      } else {
        result[0] += 42938884;
        result[1] += 0;
        result[2] += 10788;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 36476624;
        result[1] += 95191;
        result[2] += 312773;
        result[3] += 6015220;
        result[4] += 0;
        result[5] += 9065;
        result[6] += 40796;
      } else {
        result[0] += 0;
        result[1] += 60153;
        result[2] += 375960;
        result[3] += 42513559;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 4008948;
        result[1] += 0;
        result[2] += 0;
        result[3] += 38565617;
        result[4] += 210997;
        result[5] += 164109;
        result[6] += 0;
      } else {
        result[0] += 42648550;
        result[1] += 26523;
        result[2] += 35885;
        result[3] += 226231;
        result[4] += 0;
        result[5] += 0;
        result[6] += 12481;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 15524421;
        result[1] += 202332;
        result[2] += 662179;
        result[3] += 25457108;
        result[4] += 1103631;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42735;
        result[1] += 256415;
        result[2] += 0;
        result[3] += 6965966;
        result[4] += 35684554;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 6821810;
        result[1] += 0;
        result[2] += 266216;
        result[3] += 35839461;
        result[4] += 0;
        result[5] += 22184;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 42797956;
        result[1] += 0;
        result[2] += 0;
        result[3] += 151716;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42345920;
        result[1] += 0;
        result[2] += 458018;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 145733;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43ba8000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 42879506;
        result[1] += 0;
        result[2] += 58472;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 11694;
      } else {
        result[0] += 42949672;
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
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 662563;
        result[1] += 303999;
        result[2] += 233845;
        result[3] += 27812056;
        result[4] += 13898233;
        result[5] += 38974;
        result[6] += 0;
      } else {
        result[0] += 42133385;
        result[1] += 10811;
        result[2] += 227046;
        result[3] += 529775;
        result[4] += 0;
        result[5] += 0;
        result[6] += 48652;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41b80000))) ) ) {
        result[0] += 0;
        result[1] += 56070;
        result[2] += 196245;
        result[3] += 42697357;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 490153;
        result[3] += 0;
        result[4] += 42336981;
        result[5] += 122538;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x436c0000))) ) ) {
        result[0] += 42949672;
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
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42887601;
        result[1] += 0;
        result[2] += 54312;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7758;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        result[0] += 28481;
        result[1] += 370255;
        result[2] += 113924;
        result[3] += 41183837;
        result[4] += 1210451;
        result[5] += 42721;
        result[6] += 0;
      } else {
        result[0] += 42847456;
        result[1] += 37169;
        result[2] += 55754;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9292;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 23959470;
        result[1] += 91502;
        result[2] += 344892;
        result[3] += 7418707;
        result[4] += 11099907;
        result[5] += 7038;
        result[6] += 28154;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 384444;
        result[3] += 34299668;
        result[4] += 8241531;
        result[5] += 24027;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 10112066;
        result[1] += 319328;
        result[2] += 0;
        result[3] += 32465056;
        result[4] += 53221;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 21237545;
        result[1] += 0;
        result[2] += 711873;
        result[3] += 21000254;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 104246;
        result[1] += 208493;
        result[2] += 0;
        result[3] += 9173716;
        result[4] += 33463216;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 154680;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42794992;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 4938720;
        result[1] += 0;
        result[2] += 515985;
        result[3] += 37421253;
        result[4] += 0;
        result[5] += 73712;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 42721817;
        result[1] += 6271;
        result[2] += 22994;
        result[3] += 196499;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2090;
      } else {
        result[0] += 34109730;
        result[1] += 27174;
        result[2] += 144026;
        result[3] += 8625261;
        result[4] += 0;
        result[5] += 13587;
        result[6] += 29892;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
        result[0] += 42921960;
        result[1] += 0;
        result[2] += 22822;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4890;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 31752154;
        result[1] += 54499;
        result[2] += 272496;
        result[3] += 9839227;
        result[4] += 955834;
        result[5] += 37730;
        result[6] += 37730;
      } else {
        result[0] += 0;
        result[1] += 46381;
        result[2] += 324673;
        result[3] += 35041552;
        result[4] += 7490682;
        result[5] += 46381;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42da0000))) ) ) {
        result[0] += 6820624;
        result[1] += 303889;
        result[2] += 0;
        result[3] += 35825159;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 968789;
        result[2] += 0;
        result[3] += 0;
        result[4] += 41980883;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 12394048;
        result[1] += 0;
        result[2] += 490853;
        result[3] += 30064771;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 42778940;
        result[1] += 0;
        result[2] += 10410;
        result[3] += 139501;
        result[4] += 10410;
        result[5] += 0;
        result[6] += 10410;
      } else {
        result[0] += 647482;
        result[1] += 86331;
        result[2] += 431655;
        result[3] += 11827347;
        result[4] += 29870526;
        result[5] += 86331;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += 32529929;
        result[1] += 30386;
        result[2] += 157456;
        result[3] += 9469480;
        result[4] += 720984;
        result[5] += 22099;
        result[6] += 19336;
      } else {
        result[0] += 19585050;
        result[1] += 0;
        result[2] += 237875;
        result[3] += 23126746;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42da0000))) ) ) {
        result[0] += 6793918;
        result[1] += 605398;
        result[2] += 0;
        result[3] += 35550355;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 322929;
        result[1] += 1130254;
        result[2] += 0;
        result[3] += 161464;
        result[4] += 41335023;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 11713547;
        result[1] += 0;
        result[2] += 1301505;
        result[3] += 29934620;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 797290;
        result[4] += 42152382;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x44941000))) ) ) {
        result[0] += 9544371;
        result[1] += 0;
        result[2] += 0;
        result[3] += 19088743;
        result[4] += 14316557;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 35600076;
        result[1] += 33542;
        result[2] += 40996;
        result[3] += 5575556;
        result[4] += 1699501;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 14005328;
        result[1] += 0;
        result[2] += 0;
        result[3] += 28944344;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 34967250;
        result[1] += 0;
        result[2] += 1306856;
        result[3] += 0;
        result[4] += 6569604;
        result[5] += 0;
        result[6] += 105961;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41980000))) ) ) {
        result[0] += 14678071;
        result[1] += 128674;
        result[2] += 367641;
        result[3] += 16010770;
        result[4] += 11764515;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 41882359;
        result[1] += 33959;
        result[2] += 38811;
        result[3] += 963008;
        result[4] += 12128;
        result[5] += 9702;
        result[6] += 9702;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 7704712;
        result[1] += 0;
        result[2] += 14902;
        result[3] += 27108069;
        result[4] += 8121988;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42782831;
        result[1] += 0;
        result[2] += 59586;
        result[3] += 95337;
        result[4] += 0;
        result[5] += 0;
        result[6] += 11917;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 21474836;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 21474836;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42913835;
        result[1] += 0;
        result[2] += 27692;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8144;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 26149480;
        result[1] += 67920;
        result[2] += 196970;
        result[3] += 14331273;
        result[4] += 2156483;
        result[5] += 16980;
        result[6] += 30564;
      } else {
        result[0] += 361174;
        result[1] += 0;
        result[2] += 692251;
        result[3] += 33860113;
        result[4] += 7945839;
        result[5] += 90293;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 25696385;
        result[1] += 0;
        result[2] += 917728;
        result[3] += 16335559;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 599726;
        result[2] += 0;
        result[3] += 42349946;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 105011;
        result[1] += 1050114;
        result[2] += 0;
        result[3] += 15331668;
        result[4] += 26462879;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 828611;
        result[4] += 42121061;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 42282493;
        result[1] += 0;
        result[2] += 416987;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 250192;
      } else {
        result[0] += 42892215;
        result[1] += 0;
        result[2] += 57457;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42901241;
        result[1] += 0;
        result[2] += 48431;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 26228446;
        result[1] += 60792;
        result[2] += 287074;
        result[3] += 14157822;
        result[4] += 2181763;
        result[5] += 13509;
        result[6] += 20264;
      } else {
        result[0] += 3199489;
        result[1] += 278216;
        result[2] += 365159;
        result[3] += 38098272;
        result[4] += 1008534;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 15720633;
        result[4] += 27229039;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 314419;
        result[2] += 0;
        result[3] += 2546796;
        result[4] += 40088457;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 1717986;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 41231686;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2352280;
        result[1] += 0;
        result[2] += 0;
        result[3] += 40531594;
        result[4] += 0;
        result[5] += 65798;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 31386299;
        result[1] += 0;
        result[2] += 4955731;
        result[3] += 2477865;
        result[4] += 4129776;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 159203;
        result[2] += 194582;
        result[3] += 0;
        result[4] += 42560507;
        result[5] += 35378;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
        result[0] += 42870267;
        result[1] += 13234;
        result[2] += 22057;
        result[3] += 44114;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42511692;
        result[1] += 0;
        result[2] += 11837;
        result[3] += 418251;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7891;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 21450943;
        result[1] += 90263;
        result[2] += 260172;
        result[3] += 21095197;
        result[4] += 0;
        result[5] += 21238;
        result[6] += 31857;
      } else {
        result[0] += 42266869;
        result[1] += 0;
        result[2] += 178510;
        result[3] += 481978;
        result[4] += 0;
        result[5] += 0;
        result[6] += 22313;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 7471551;
        result[1] += 164468;
        result[2] += 0;
        result[3] += 33950917;
        result[4] += 1292249;
        result[5] += 70486;
        result[6] += 0;
      } else {
        result[0] += 1415145;
        result[1] += 0;
        result[2] += 849087;
        result[3] += 0;
        result[4] += 40543925;
        result[5] += 141514;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42944092;
        result[1] += 0;
        result[2] += 5580;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 30494740;
        result[1] += 0;
        result[2] += 311845;
        result[3] += 12105287;
        result[4] += 0;
        result[5] += 0;
        result[6] += 37799;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428c0000))) ) ) {
        result[0] += 39528098;
        result[1] += 14256;
        result[2] += 48115;
        result[3] += 3346727;
        result[4] += 0;
        result[5] += 0;
        result[6] += 12474;
      } else {
        result[0] += 876523;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42073149;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 9482534;
        result[1] += 128431;
        result[2] += 449510;
        result[3] += 21373161;
        result[4] += 11505332;
        result[5] += 10702;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 259907;
        result[2] += 0;
        result[3] += 2144234;
        result[4] += 40545530;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 12617;
        result[1] += 0;
        result[2] += 0;
        result[3] += 39934111;
        result[4] += 2952474;
        result[5] += 50469;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 42035850;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 913822;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 222537;
        result[2] += 389440;
        result[3] += 0;
        result[4] += 42319150;
        result[5] += 18544;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b60000))) ) ) {
        result[0] += 42835253;
        result[1] += 20376;
        result[2] += 75234;
        result[3] += 6269;
        result[4] += 0;
        result[5] += 0;
        result[6] += 12539;
      } else {
        result[0] += 13384710;
        result[1] += 847133;
        result[2] += 0;
        result[3] += 28717828;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 8748031;
        result[1] += 0;
        result[2] += 137017;
        result[3] += 34064624;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42549864;
        result[1] += 0;
        result[2] += 323249;
        result[3] += 68052;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8506;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 9097478;
        result[1] += 0;
        result[2] += 0;
        result[3] += 33517024;
        result[4] += 143644;
        result[5] += 191525;
        result[6] += 0;
      } else {
        result[0] += 42741575;
        result[1] += 23121;
        result[2] += 43160;
        result[3] += 126399;
        result[4] += 0;
        result[5] += 0;
        result[6] += 15414;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 7694159;
        result[1] += 162640;
        result[2] += 575498;
        result[3] += 34492353;
        result[4] += 0;
        result[5] += 25021;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 18725409;
        result[1] += 0;
        result[2] += 0;
        result[3] += 24224263;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42147117;
        result[1] += 0;
        result[2] += 504833;
        result[3] += 38833;
        result[4] += 142388;
        result[5] += 12944;
        result[6] += 103555;
      }
    } else {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42868380;
        result[1] += 0;
        result[2] += 69679;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 11613;
      }
    } else {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 668998;
        result[1] += 243987;
        result[2] += 196764;
        result[3] += 28593762;
        result[4] += 13191066;
        result[5] += 55093;
        result[6] += 0;
      } else {
        result[0] += 42100130;
        result[1] += 15928;
        result[2] += 265481;
        result[3] += 530963;
        result[4] += 0;
        result[5] += 0;
        result[6] += 37167;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
        result[0] += 0;
        result[1] += 28228;
        result[2] += 0;
        result[3] += 42625045;
        result[4] += 254056;
        result[5] += 42342;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1745414;
        result[3] += 0;
        result[4] += 41204258;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 13518585;
        result[1] += 0;
        result[2] += 0;
        result[3] += 6829702;
        result[4] += 22601385;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 469001;
        result[3] += 36978928;
        result[4] += 5411550;
        result[5] += 90192;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42924823;
        result[1] += 0;
        result[2] += 21536;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3313;
      } else {
        result[0] += 29962790;
        result[1] += 101980;
        result[2] += 231418;
        result[3] += 12618182;
        result[4] += 0;
        result[5] += 0;
        result[6] += 35301;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 5346432;
        result[1] += 677214;
        result[2] += 0;
        result[3] += 36926025;
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
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 9085507;
        result[1] += 0;
        result[2] += 1769904;
        result[3] += 32094261;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x41500000))) ) ) {
        result[0] += 6135667;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 36814005;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 17111;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42898338;
        result[5] += 34222;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 12991;
        result[1] += 181880;
        result[2] += 415725;
        result[3] += 42274118;
        result[4] += 0;
        result[5] += 64957;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 42697027;
        result[1] += 0;
        result[2] += 210537;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 42107;
      } else {
        result[0] += 42938622;
        result[1] += 0;
        result[2] += 11050;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x425c0000))) ) ) {
        result[0] += 30649200;
        result[1] += 86291;
        result[2] += 290253;
        result[3] += 11876859;
        result[4] += 0;
        result[5] += 0;
        result[6] += 47068;
      } else {
        result[0] += 6804633;
        result[1] += 1097521;
        result[2] += 0;
        result[3] += 35047518;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 6816043;
        result[1] += 0;
        result[2] += 0;
        result[3] += 33800693;
        result[4] += 2322185;
        result[5] += 10750;
        result[6] += 0;
      } else {
        result[0] += 2321603;
        result[1] += 215963;
        result[2] += 269953;
        result[3] += 0;
        result[4] += 40007174;
        result[5] += 134976;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x46503000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 42949672;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42265736;
        result[1] += 54714;
        result[2] += 92711;
        result[3] += 525870;
        result[4] += 0;
        result[5] += 0;
        result[6] += 10639;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 18929187;
        result[1] += 0;
        result[2] += 326365;
        result[3] += 2056101;
        result[4] += 21638019;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 768120;
        result[1] += 0;
        result[2] += 182265;
        result[3] += 41804001;
        result[4] += 182265;
        result[5] += 13018;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42289524;
        result[1] += 0;
        result[2] += 420094;
        result[3] += 120027;
        result[4] += 0;
        result[5] += 0;
        result[6] += 120027;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 40003653;
        result[1] += 58554;
        result[2] += 87831;
        result[3] += 2770356;
        result[4] += 0;
        result[5] += 7319;
        result[6] += 21957;
      } else {
        result[0] += 42830269;
        result[1] += 0;
        result[2] += 5080;
        result[3] += 101619;
        result[4] += 5080;
        result[5] += 7621;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 6490485;
        result[1] += 187450;
        result[2] += 93725;
        result[3] += 25680764;
        result[4] += 10497246;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 4701591;
        result[1] += 114363;
        result[2] += 508280;
        result[3] += 21093626;
        result[4] += 16519104;
        result[5] += 12707;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        result[0] += 6447488;
        result[1] += 0;
        result[2] += 0;
        result[3] += 36502184;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 42232541;
        result[1] += 0;
        result[2] += 651937;
        result[3] += 13038;
        result[4] += 0;
        result[5] += 0;
        result[6] += 52155;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 122538;
        result[3] += 0;
        result[4] += 42643327;
        result[5] += 183807;
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
