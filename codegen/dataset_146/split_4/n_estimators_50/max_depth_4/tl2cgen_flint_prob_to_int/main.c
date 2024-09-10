
#include "header.h"


static const int32_t num_class[] = {  6, };

int32_t get_num_target(void) {
  return N_TARGET;
}
void get_num_class(int32_t* out) {
  for (int i = 0; i < N_TARGET; ++i) {
    out[i] = num_class[i];
  }
}
int32_t get_num_feature(void) {
  return 36;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "uint32";
}


void predict(union Entry* data, int pred_margin, uint32_t* result) {
  unsigned int tmp;
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 405185;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85494160;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 66810602;
          result[5] += 19088743;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 111702;
          result[2] += 0;
          result[3] += 3351079;
          result[4] += 4579809;
          result[5] += 77856754;
        } else {
          result[0] += 7764912;
          result[1] += 970614;
          result[2] += 1941228;
          result[3] += 27824270;
          result[4] += 8411988;
          result[5] += 38986332;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 27917287;
          result[2] += 0;
          result[3] += 3221225;
          result[4] += 54760833;
          result[5] += 0;
        } else {
          result[0] += 358661;
          result[1] += 84106040;
          result[2] += 358661;
          result[3] += 358661;
          result[4] += 717322;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 70281283;
          result[1] += 2743713;
          result[2] += 0;
          result[3] += 3165823;
          result[4] += 7597976;
          result[5] += 2110549;
        } else {
          result[0] += 16302065;
          result[1] += 1254005;
          result[2] += 23408094;
          result[3] += 21527086;
          result[4] += 5225021;
          result[5] += 18183073;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 3817748;
          result[1] += 0;
          result[2] += 20997617;
          result[3] += 3817748;
          result[4] += 11453246;
          result[5] += 45812984;
        } else {
          result[0] += 3123612;
          result[1] += 0;
          result[2] += 4685418;
          result[3] += 56225026;
          result[4] += 7809031;
          result[5] += 14056256;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 14693309;
          result[1] += 3390763;
          result[2] += 31647127;
          result[3] += 20344581;
          result[4] += 0;
          result[5] += 15823563;
        } else {
          result[0] += 7880673;
          result[1] += 0;
          result[2] += 73290267;
          result[3] += 4728404;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 10737418;
          result[4] += 0;
          result[5] += 75161927;
        } else {
          result[0] += 461824;
          result[1] += 0;
          result[2] += 67426368;
          result[3] += 18011153;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 84481864;
          result[3] += 1417480;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 1047552;
          result[1] += 0;
          result[2] += 1047552;
          result[3] += 0;
          result[4] += 71582788;
          result[5] += 12221451;
        } else {
          result[0] += 43493339;
          result[1] += 1087333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41318672;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 290200;
          result[2] += 0;
          result[3] += 5417075;
          result[4] += 5030141;
          result[5] += 75161927;
        } else {
          result[0] += 0;
          result[1] += 671088;
          result[2] += 0;
          result[3] += 44962938;
          result[4] += 2684354;
          result[5] += 37580963;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 10737418;
          result[2] += 0;
          result[3] += 0;
          result[4] += 75161927;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85716969;
          result[2] += 0;
          result[3] += 0;
          result[4] += 182376;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 8329633;
          result[1] += 17700471;
          result[2] += 0;
          result[3] += 0;
          result[4] += 59348638;
          result[5] += 520602;
        } else {
          result[0] += 62989025;
          result[1] += 574193;
          result[2] += 3961935;
          result[3] += 6832902;
          result[4] += 5052902;
          result[5] += 6488386;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 3964585;
          result[1] += 2643056;
          result[2] += 2643056;
          result[3] += 11893755;
          result[4] += 7929170;
          result[5] += 56825721;
        } else {
          result[0] += 4487279;
          result[1] += 4487279;
          result[2] += 23077436;
          result[3] += 39103433;
          result[4] += 4487279;
          result[5] += 10256638;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42f20000))) ) ) {
          result[0] += 2622880;
          result[1] += 0;
          result[2] += 72784941;
          result[3] += 10491523;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 65687735;
          result[1] += 0;
          result[2] += 10105805;
          result[3] += 0;
          result[4] += 0;
          result[5] += 10105805;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 62992853;
          result[3] += 17179869;
          result[4] += 0;
          result[5] += 5726623;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 76988625;
          result[3] += 8554291;
          result[4] += 0;
          result[5] += 356428;
        } else {
          result[0] += 445844;
          result[1] += 0;
          result[2] += 83818738;
          result[3] += 1486147;
          result[4] += 0;
          result[5] += 148614;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 1724886;
          result[1] += 0;
          result[2] += 1724886;
          result[3] += 0;
          result[4] += 69685413;
          result[5] += 12764159;
        } else {
          result[0] += 43522335;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 37795712;
          result[5] += 4581298;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 281945;
          result[2] += 0;
          result[3] += 4323161;
          result[4] += 4887052;
          result[5] += 76407186;
        } else {
          result[0] += 0;
          result[1] += 1160801;
          result[2] += 870601;
          result[3] += 45561477;
          result[4] += 870601;
          result[5] += 37435863;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0;
          result[1] += 20211610;
          result[2] += 0;
          result[3] += 2526451;
          result[4] += 63161283;
          result[5] += 0;
        } else {
          result[0] += 160259;
          result[1] += 84777526;
          result[2] += 0;
          result[3] += 0;
          result[4] += 961559;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 67667926;
          result[1] += 2458168;
          result[2] += 887672;
          result[3] += 2048474;
          result[4] += 11676302;
          result[5] += 1160801;
        } else {
          result[0] += 13147859;
          result[1] += 1095654;
          result[2] += 19283526;
          result[3] += 28267896;
          result[4] += 6354798;
          result[5] += 17749609;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7579354;
          result[3] += 15158708;
          result[4] += 0;
          result[5] += 63161283;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42eb0000))) ) ) {
          result[0] += 6209591;
          result[1] += 2069863;
          result[2] += 55886321;
          result[3] += 12419182;
          result[4] += 0;
          result[5] += 9314386;
        } else {
          result[0] += 28633115;
          result[1] += 42949672;
          result[2] += 14316557;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6607641;
          result[3] += 19822925;
          result[4] += 0;
          result[5] += 59468777;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 51130563;
          result[3] += 24542670;
          result[4] += 0;
          result[5] += 10226112;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 0;
          result[4] += 0;
          result[5] += 57266230;
        } else {
          result[0] += 296545;
          result[1] += 0;
          result[2] += 80956920;
          result[3] += 4349333;
          result[4] += 0;
          result[5] += 296545;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
          result[0] += 2526451;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 74710775;
          result[5] += 8662118;
        } else {
          result[0] += 0;
          result[1] += 92763;
          result[2] += 0;
          result[3] += 9276387;
          result[4] += 4081610;
          result[5] += 72448584;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
          result[0] += 9875629;
          result[1] += 2235991;
          result[2] += 931663;
          result[3] += 28881558;
          result[4] += 14906611;
          result[5] += 29067891;
        } else {
          result[0] += 44976067;
          result[1] += 8698667;
          result[2] += 1285030;
          result[3] += 8303273;
          result[4] += 15024971;
          result[5] += 7611334;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a60000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 72684061;
          result[2] += 0;
          result[3] += 0;
          result[4] += 13215283;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428e0000))) ) ) {
          result[0] += 66810602;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 19088743;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 83761881;
          result[1] += 0;
          result[2] += 400774;
          result[3] += 534366;
          result[4] += 1202323;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 19327352;
          result[3] += 51539607;
          result[4] += 0;
          result[5] += 15032385;
        } else {
          result[0] += 4873721;
          result[1] += 0;
          result[2] += 54220154;
          result[3] += 14011950;
          result[4] += 5482936;
          result[5] += 7310582;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 24542670;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 11044201;
          result[4] += 0;
          result[5] += 7362801;
        } else {
          result[0] += 981197;
          result[1] += 0;
          result[2] += 80458161;
          result[3] += 4013988;
          result[4] += 0;
          result[5] += 445998;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 407105;
          result[1] += 3663953;
          result[2] += 0;
          result[3] += 0;
          result[4] += 80199863;
          result[5] += 1628423;
        } else {
          result[0] += 45152220;
          result[1] += 2202547;
          result[2] += 0;
          result[3] += 0;
          result[4] += 12114010;
          result[5] += 26430567;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 617980;
          result[1] += 971112;
          result[2] += 264848;
          result[3] += 6797789;
          result[4] += 4237583;
          result[5] += 73010029;
        } else {
          result[0] += 872074;
          result[1] += 436037;
          result[2] += 436037;
          result[3] += 46655989;
          result[4] += 1744149;
          result[5] += 35755057;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 3181457;
          result[2] += 0;
          result[3] += 0;
          result[4] += 82717888;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85359098;
          result[2] += 0;
          result[3] += 0;
          result[4] += 540247;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          result[0] += 67422141;
          result[1] += 2293270;
          result[2] += 65522;
          result[3] += 2031182;
          result[4] += 11793960;
          result[5] += 2293270;
        } else {
          result[0] += 14652340;
          result[1] += 4578856;
          result[2] += 16850191;
          result[3] += 18315425;
          result[4] += 8241941;
          result[5] += 23260590;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6135667;
          result[3] += 6135667;
          result[4] += 0;
          result[5] += 73628010;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 57266230;
          result[4] += 0;
          result[5] += 14316557;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5368709;
          result[3] += 80530636;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30923764;
          result[3] += 37795712;
          result[4] += 0;
          result[5] += 17179869;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 48318382;
          result[4] += 0;
          result[5] += 26843545;
        } else {
          result[0] += 4405094;
          result[1] += 0;
          result[2] += 58367504;
          result[3] += 13215283;
          result[4] += 0;
          result[5] += 9911462;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 3397149;
          result[1] += 0;
          result[2] += 68913599;
          result[3] += 13103290;
          result[4] += 0;
          result[5] += 485307;
        } else {
          result[0] += 922409;
          result[1] += 0;
          result[2] += 81402601;
          result[3] += 2997829;
          result[4] += 0;
          result[5] += 576505;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 11828762;
          result[2] += 0;
          result[3] += 0;
          result[4] += 72662397;
          result[5] += 1408185;
        } else {
          result[0] += 55042299;
          result[1] += 833974;
          result[2] += 0;
          result[3] += 0;
          result[4] += 15011536;
          result[5] += 15011536;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2356994;
          result[4] += 2749826;
          result[5] += 80792525;
        } else {
          result[0] += 3400182;
          result[1] += 0;
          result[2] += 715827;
          result[3] += 28096244;
          result[4] += 12169074;
          result[5] += 41518017;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42460000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 79291703;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 6607641;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 6902626;
          result[1] += 28760941;
          result[2] += 2300875;
          result[3] += 3451313;
          result[4] += 37580963;
          result[5] += 6902626;
        } else {
          result[0] += 63490820;
          result[1] += 1050399;
          result[2] += 2976132;
          result[3] += 6477464;
          result[4] += 5076931;
          result[5] += 6827597;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 12271335;
          result[2] += 0;
          result[3] += 0;
          result[4] += 24542670;
          result[5] += 49085340;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8589934;
          result[3] += 71582788;
          result[4] += 0;
          result[5] += 5726623;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11204262;
          result[3] += 7469508;
          result[4] += 7469508;
          result[5] += 59756066;
        } else {
          result[0] += 0;
          result[1] += 2996488;
          result[2] += 22973080;
          result[3] += 32961376;
          result[4] += 0;
          result[5] += 26968399;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 62992853;
          result[1] += 5726623;
          result[2] += 0;
          result[3] += 5726623;
          result[4] += 5726623;
          result[5] += 5726623;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 60492497;
          result[3] += 20567449;
          result[4] += 604924;
          result[5] += 4234474;
        } else {
          result[0] += 1979247;
          result[1] += 0;
          result[2] += 78774054;
          result[3] += 4651231;
          result[4] += 0;
          result[5] += 494811;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42440000))) ) ) {
          result[0] += 28633115;
          result[1] += 57266230;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 452101;
          result[1] += 452101;
          result[2] += 0;
          result[3] += 0;
          result[4] += 83638836;
          result[5] += 1356305;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 79763678;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2045222;
          result[5] += 4090445;
        } else {
          result[0] += 4880644;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 45878059;
          result[5] += 35140641;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 83990471;
          result[5] += 1908874;
        } else {
          result[0] += 0;
          result[1] += 15339168;
          result[2] += 0;
          result[3] += 27610504;
          result[4] += 24542670;
          result[5] += 18407002;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 287288;
          result[2] += 0;
          result[3] += 4500857;
          result[4] += 3351702;
          result[5] += 77759497;
        } else {
          result[0] += 679046;
          result[1] += 0;
          result[2] += 679046;
          result[3] += 40742772;
          result[4] += 0;
          result[5] += 43798480;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 557787;
          result[1] += 25658246;
          result[2] += 0;
          result[3] += 3346727;
          result[4] += 52432068;
          result[5] += 3904515;
        } else {
          result[0] += 0;
          result[1] += 85145842;
          result[2] += 0;
          result[3] += 0;
          result[4] += 753503;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 74199522;
          result[1] += 2264481;
          result[2] += 226448;
          result[3] += 1358689;
          result[4] += 6793445;
          result[5] += 1056758;
        } else {
          result[0] += 29331483;
          result[1] += 3928323;
          result[2] += 13880077;
          result[3] += 18070289;
          result[4] += 6285317;
          result[5] += 14403853;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 4979672;
          result[1] += 0;
          result[2] += 11204262;
          result[3] += 14939016;
          result[4] += 13694098;
          result[5] += 41082295;
        } else {
          result[0] += 0;
          result[1] += 419021;
          result[2] += 35197780;
          result[3] += 41483098;
          result[4] += 0;
          result[5] += 8799445;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 18878977;
          result[1] += 9439488;
          result[2] += 34926107;
          result[3] += 4719744;
          result[4] += 4719744;
          result[5] += 13215283;
        } else {
          result[0] += 409532;
          result[1] += 0;
          result[2] += 79039684;
          result[3] += 4709618;
          result[4] += 0;
          result[5] += 1740511;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d20000))) ) ) {
          result[0] += 2059230;
          result[1] += 588351;
          result[2] += 0;
          result[3] += 0;
          result[4] += 75603191;
          result[5] += 7648571;
        } else {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42620000))) ) ) {
          result[0] += 71778905;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 11767033;
          result[5] += 2353406;
        } else {
          result[0] += 381774;
          result[1] += 763549;
          result[2] += 1450744;
          result[3] += 11911375;
          result[4] += 3817748;
          result[5] += 67574152;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 1533916;
          result[1] += 20707878;
          result[2] += 0;
          result[3] += 3067833;
          result[4] += 59822758;
          result[5] += 766958;
        } else {
          result[0] += 176384;
          result[1] += 83253575;
          result[2] += 529154;
          result[3] += 352769;
          result[4] += 1411077;
          result[5] += 176384;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
          result[0] += 5586949;
          result[1] += 27934746;
          result[2] += 2793474;
          result[3] += 9777161;
          result[4] += 32124958;
          result[5] += 7682055;
        } else {
          result[0] += 67683943;
          result[1] += 124763;
          result[2] += 3680509;
          result[3] += 6113388;
          result[4] += 3930035;
          result[5] += 4366706;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428d0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42810000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 10907853;
          result[4] += 5453926;
          result[5] += 69537565;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 1561806;
          result[1] += 520602;
          result[2] += 13015052;
          result[3] += 44771780;
          result[4] += 2603010;
          result[5] += 23427094;
        } else {
          result[0] += 0;
          result[1] += 3123612;
          result[2] += 48415994;
          result[3] += 10932644;
          result[4] += 0;
          result[5] += 23427094;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 1374389;
          result[1] += 0;
          result[2] += 51539607;
          result[3] += 30236569;
          result[4] += 1374389;
          result[5] += 1374389;
        } else {
          result[0] += 5785966;
          result[1] += 0;
          result[2] += 72547115;
          result[3] += 5785966;
          result[4] += 0;
          result[5] += 1780297;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 57266230;
          result[3] += 0;
          result[4] += 0;
          result[5] += 28633115;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 83891681;
          result[3] += 2007664;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 346368;
          result[1] += 346368;
          result[2] += 0;
          result[3] += 0;
          result[4] += 75854664;
          result[5] += 9351944;
        } else {
          result[0] += 0;
          result[1] += 71582788;
          result[2] += 0;
          result[3] += 2386092;
          result[4] += 0;
          result[5] += 11930464;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1791643;
          result[1] += 199071;
          result[2] += 99535;
          result[3] += 2986072;
          result[4] += 8062395;
          result[5] += 72760627;
        } else {
          result[0] += 11704965;
          result[1] += 188789;
          result[2] += 1887897;
          result[3] += 31527891;
          result[4] += 6796431;
          result[5] += 33793369;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 15618062;
          result[2] += 0;
          result[3] += 0;
          result[4] += 70281283;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85357963;
          result[2] += 0;
          result[3] += 0;
          result[4] += 541382;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42890000))) ) ) {
          result[0] += 9349588;
          result[1] += 14608732;
          result[2] += 1753047;
          result[3] += 4090445;
          result[4] += 50254039;
          result[5] += 5843492;
        } else {
          result[0] += 64301090;
          result[1] += 802220;
          result[2] += 3825976;
          result[3] += 5121871;
          result[4] += 4319651;
          result[5] += 7528534;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4294967;
          result[4] += 8589934;
          result[5] += 73014444;
        } else {
          result[0] += 0;
          result[1] += 1363481;
          result[2] += 11589594;
          result[3] += 59993193;
          result[4] += 681740;
          result[5] += 12271335;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 1952257;
          result[1] += 976128;
          result[2] += 7809031;
          result[3] += 8785160;
          result[4] += 14641933;
          result[5] += 51734833;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 75161927;
          result[3] += 0;
          result[4] += 0;
          result[5] += 10737418;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 1887897;
          result[1] += 0;
          result[2] += 65132471;
          result[3] += 9439488;
          result[4] += 0;
          result[5] += 9439488;
        } else {
          result[0] += 78741067;
          result[1] += 0;
          result[2] += 7158278;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 71582788;
          result[3] += 14316557;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 131747;
          result[1] += 0;
          result[2] += 83527891;
          result[3] += 1844464;
          result[4] += 395242;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 419021;
          result[1] += 2514127;
          result[2] += 0;
          result[3] += 0;
          result[4] += 80871091;
          result[5] += 2095105;
        } else {
          result[0] += 4521018;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 29386618;
          result[5] += 51991709;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          result[0] += 22133573;
          result[1] += 13174746;
          result[2] += 0;
          result[3] += 3688928;
          result[4] += 26876482;
          result[5] += 20025614;
        } else {
          result[0] += 0;
          result[1] += 307057;
          result[2] += 1919109;
          result[3] += 10516720;
          result[4] += 2379695;
          result[5] += 70776762;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 2129735;
          result[1] += 10648679;
          result[2] += 0;
          result[3] += 0;
          result[4] += 71701106;
          result[5] += 1419823;
        } else {
          result[0] += 0;
          result[1] += 84218706;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1680639;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          result[0] += 71606728;
          result[1] += 1436443;
          result[2] += 143644;
          result[3] += 2657421;
          result[4] += 6894930;
          result[5] += 3160176;
        } else {
          result[0] += 21020685;
          result[1] += 1816602;
          result[2] += 15830393;
          result[3] += 23356317;
          result[4] += 7266409;
          result[5] += 16608936;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1867377;
          result[1] += 5602131;
          result[2] += 0;
          result[3] += 1867377;
          result[4] += 29878033;
          result[5] += 46684427;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 16996127;
          result[3] += 38585802;
          result[4] += 0;
          result[5] += 30317416;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 48551804;
          result[3] += 37347541;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 78319991;
          result[3] += 7579354;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52861135;
          result[3] += 14867194;
          result[4] += 0;
          result[5] += 18171015;
        } else {
          result[0] += 72684061;
          result[1] += 0;
          result[2] += 6607641;
          result[3] += 0;
          result[4] += 6607641;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 2158275;
          result[1] += 0;
          result[2] += 70791420;
          result[3] += 11223030;
          result[4] += 0;
          result[5] += 1726620;
        } else {
          result[0] += 268855;
          result[1] += 0;
          result[2] += 82673079;
          result[3] += 2957410;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 84950181;
          result[5] += 949164;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 58773236;
          result[5] += 27126109;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 20452225;
          result[2] += 0;
          result[3] += 4090445;
          result[4] += 24542670;
          result[5] += 36814005;
        } else {
          result[0] += 0;
          result[1] += 82463372;
          result[2] += 0;
          result[3] += 3435973;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 18407002;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 55221008;
          result[5] += 12271335;
        } else {
          result[0] += 84392339;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1507006;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 456425;
          result[1] += 182570;
          result[2] += 0;
          result[3] += 4107832;
          result[4] += 6937672;
          result[5] += 74214844;
        } else {
          result[0] += 0;
          result[1] += 394033;
          result[2] += 9062775;
          result[3] += 45313875;
          result[4] += 2364202;
          result[5] += 28764459;
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42500000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0;
          result[1] += 61356675;
          result[2] += 0;
          result[3] += 0;
          result[4] += 24542670;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          result[0] += 8421504;
          result[1] += 62319133;
          result[2] += 3368601;
          result[3] += 10105805;
          result[4] += 1684300;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 8873899;
          result[1] += 20587446;
          result[2] += 0;
          result[3] += 709911;
          result[4] += 53953308;
          result[5] += 1774779;
        } else {
          result[0] += 66365563;
          result[1] += 924311;
          result[2] += 1848622;
          result[3] += 7209629;
          result[4] += 5422627;
          result[5] += 4128591;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 5669923;
          result[1] += 283496;
          result[2] += 24380672;
          result[3] += 26081649;
          result[4] += 4535939;
          result[5] += 24947664;
        } else {
          result[0] += 558392;
          result[1] += 0;
          result[2] += 76592807;
          result[3] += 7072968;
          result[4] += 0;
          result[5] += 1675176;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x423c0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 64424509;
          result[2] += 0;
          result[3] += 0;
          result[4] += 21474836;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 42949672;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
          result[0] += 16238506;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 59070509;
          result[5] += 10590330;
        } else {
          result[0] += 142099;
          result[1] += 568399;
          result[2] += 355249;
          result[3] += 13783683;
          result[4] += 6252392;
          result[5] += 64797521;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 68398748;
          result[1] += 4253133;
          result[2] += 209170;
          result[3] += 1255022;
          result[4] += 11364929;
          result[5] += 418340;
        } else {
          result[0] += 18779614;
          result[1] += 1912738;
          result[2] += 22952861;
          result[3] += 20518467;
          result[4] += 3129935;
          result[5] += 18605728;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12271335;
          result[3] += 6135667;
          result[4] += 3067833;
          result[5] += 64424509;
        } else {
          result[0] += 7158278;
          result[1] += 42949672;
          result[2] += 7158278;
          result[3] += 0;
          result[4] += 28633115;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 4190211;
          result[1] += 4190211;
          result[2] += 8380423;
          result[3] += 56567861;
          result[4] += 0;
          result[5] += 12570635;
        } else {
          result[0] += 425244;
          result[1] += 0;
          result[2] += 60809932;
          result[3] += 21687458;
          result[4] += 0;
          result[5] += 2976710;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42900000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 75057680;
          result[3] += 10841665;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 2629571;
          result[1] += 0;
          result[2] += 75381058;
          result[3] += 6135667;
          result[4] += 0;
          result[5] += 1753047;
        } else {
          result[0] += 188789;
          result[1] += 0;
          result[2] += 84766607;
          result[3] += 943948;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 1078234;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 83383465;
          result[5] += 1437645;
        } else {
          result[0] += 44588973;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 23605927;
          result[5] += 17704445;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 450206;
          result[2] += 720329;
          result[3] += 5672598;
          result[4] += 5852680;
          result[5] += 73203530;
        } else {
          result[0] += 250435;
          result[1] += 1252177;
          result[2] += 1001741;
          result[3] += 44327067;
          result[4] += 2754789;
          result[5] += 36313134;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42480000))) ) ) {
          result[0] += 0;
          result[1] += 84923216;
          result[2] += 0;
          result[3] += 195225;
          result[4] += 780903;
          result[5] += 0;
        } else {
          result[0] += 3470680;
          result[1] += 27765445;
          result[2] += 0;
          result[3] += 867670;
          result[4] += 53795549;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 71206993;
          result[1] += 3345783;
          result[2] += 1091016;
          result[3] += 2109298;
          result[4] += 6255159;
          result[5] += 1891094;
        } else {
          result[0] += 15097460;
          result[1] += 2082408;
          result[2] += 19522578;
          result[3] += 22125589;
          result[4] += 6247225;
          result[5] += 20824083;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 3142658;
          result[1] += 0;
          result[2] += 13618188;
          result[3] += 48187437;
          result[4] += 0;
          result[5] += 20951059;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 69537565;
          result[3] += 4090445;
          result[4] += 0;
          result[5] += 12271335;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 25769803;
          result[3] += 0;
          result[4] += 0;
          result[5] += 60129542;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 79456894;
          result[3] += 2147483;
          result[4] += 0;
          result[5] += 4294967;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 69301845;
          result[3] += 15141579;
          result[4] += 0;
          result[5] += 1455921;
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 39645851;
          result[3] += 0;
          result[4] += 3303820;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 271403;
          result[1] += 0;
          result[2] += 84678028;
          result[3] += 949913;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
          result[0] += 1368913;
          result[1] += 1026685;
          result[2] += 0;
          result[3] += 0;
          result[4] += 77685862;
          result[5] += 5817883;
        } else {
          result[0] += 56512727;
          result[1] += 565127;
          result[2] += 0;
          result[3] += 1130254;
          result[4] += 9607163;
          result[5] += 18084072;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 6224590;
          result[2] += 0;
          result[3] += 0;
          result[4] += 68470493;
          result[5] += 11204262;
        } else {
          result[0] += 436037;
          result[1] += 0;
          result[2] += 0;
          result[3] += 8633538;
          result[4] += 5406862;
          result[5] += 71422907;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 7158278;
          result[1] += 51539607;
          result[2] += 2863311;
          result[3] += 8589934;
          result[4] += 15748213;
          result[5] += 0;
        } else {
          result[0] += 207486;
          result[1] += 85691859;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
          result[0] += 11388902;
          result[1] += 2123354;
          result[2] += 6949160;
          result[3] += 33587609;
          result[4] += 8300386;
          result[5] += 23549933;
        } else {
          result[0] += 63456066;
          result[1] += 3443352;
          result[2] += 5042051;
          result[3] += 3566329;
          result[4] += 7440100;
          result[5] += 2951444;
        }
      }
    }
  } else {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3241484;
          result[3] += 30794105;
          result[4] += 0;
          result[5] += 51863756;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 25769803;
          result[4] += 0;
          result[5] += 17179869;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42da0000))) ) ) {
          result[0] += 0;
          result[1] += 6507526;
          result[2] += 62472251;
          result[3] += 3904515;
          result[4] += 0;
          result[5] += 13015052;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 24275902;
          result[3] += 46684427;
          result[4] += 0;
          result[5] += 14939016;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 81808900;
          result[3] += 0;
          result[4] += 0;
          result[5] += 4090445;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42910000))) ) ) {
          result[0] += 25769803;
          result[1] += 60129542;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 510697;
          result[1] += 0;
          result[2] += 80792369;
          result[3] += 4289860;
          result[4] += 0;
          result[5] += 306418;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b20000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 85899345;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
          result[0] += 12311306;
          result[1] += 559604;
          result[2] += 0;
          result[3] += 0;
          result[4] += 62955546;
          result[5] += 10072887;
        } else {
          result[0] += 137769;
          result[1] += 826617;
          result[2] += 1722120;
          result[3] += 15843504;
          result[4] += 5373014;
          result[5] += 61996320;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
          result[0] += 5482936;
          result[1] += 20561013;
          result[2] += 0;
          result[3] += 0;
          result[4] += 58027749;
          result[5] += 1827645;
        } else {
          result[0] += 59306294;
          result[1] += 1299863;
          result[2] += 5199455;
          result[3] += 8394954;
          result[4] += 4928650;
          result[5] += 6770124;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21700887;
          result[3] += 43401774;
          result[4] += 0;
          result[5] += 20796683;
        } else {
          result[0] += 0;
          result[1] += 9370837;
          result[2] += 45292382;
          result[3] += 4685418;
          result[4] += 0;
          result[5] += 26550706;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 21474836;
          result[5] += 64424509;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x43028000))) ) ) {
          result[0] += 695139;
          result[1] += 99305;
          result[2] += 80139620;
          result[3] += 4468752;
          result[4] += 0;
          result[5] += 496528;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x423e0000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 289223;
          result[2] += 1446116;
          result[3] += 289223;
          result[4] += 81850218;
          result[5] += 2024563;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 2735103;
          result[1] += 341887;
          result[2] += 0;
          result[3] += 5983039;
          result[4] += 8034366;
          result[5] += 68804948;
        } else {
          result[0] += 2272469;
          result[1] += 0;
          result[2] += 11816841;
          result[3] += 47267364;
          result[4] += 0;
          result[5] += 24542670;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 17498014;
          result[2] += 0;
          result[3] += 0;
          result[4] += 68401330;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85694335;
          result[2] += 0;
          result[3] += 0;
          result[4] += 205010;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
          result[0] += 21964136;
          result[1] += 2609600;
          result[2] += 652400;
          result[3] += 20006936;
          result[4] += 6524000;
          result[5] += 34142271;
        } else {
          result[0] += 63834628;
          result[1] += 1785584;
          result[2] += 6632169;
          result[3] += 3634938;
          result[4] += 8162669;
          result[5] += 1849354;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9544371;
          result[3] += 0;
          result[4] += 14316557;
          result[5] += 62038416;
        } else {
          result[0] += 10737418;
          result[1] += 4880644;
          result[2] += 17570320;
          result[3] += 32212254;
          result[4] += 0;
          result[5] += 20498707;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 28633115;
          result[4] += 0;
          result[5] += 57266230;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 15618062;
          result[3] += 54663220;
          result[4] += 0;
          result[5] += 15618062;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 69890831;
          result[3] += 14837159;
          result[4] += 0;
          result[5] += 1171354;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42870000))) ) ) {
          result[0] += 48318382;
          result[1] += 0;
          result[2] += 37580963;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 376751;
          result[1] += 125583;
          result[2] += 81378327;
          result[3] += 3893099;
          result[4] += 0;
          result[5] += 125583;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          result[0] += 427359;
          result[1] += 0;
          result[2] += 1282079;
          result[3] += 0;
          result[4] += 82480466;
          result[5] += 1709439;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2770946;
          result[3] += 0;
          result[4] += 55418932;
          result[5] += 27709466;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2434942;
          result[4] += 2029118;
          result[5] += 81435285;
        } else {
          result[0] += 3978496;
          result[1] += 4882699;
          result[2] += 2531770;
          result[3] += 29115357;
          result[4] += 7233629;
          result[5] += 38157393;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0;
          result[1] += 57735625;
          result[2] += 0;
          result[3] += 0;
          result[4] += 28163719;
          result[5] += 0;
        } else {
          result[0] += 212097;
          result[1] += 85475151;
          result[2] += 0;
          result[3] += 0;
          result[4] += 212097;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 61866240;
          result[1] += 1695766;
          result[2] += 116949;
          result[3] += 3391533;
          result[4] += 12572062;
          result[5] += 6256793;
        } else {
          result[0] += 17421353;
          result[1] += 1552397;
          result[2] += 17766330;
          result[3] += 29150581;
          result[4] += 4139727;
          result[5] += 15868955;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4521018;
          result[3] += 38428654;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 1684300;
          result[1] += 3368601;
          result[2] += 43791823;
          result[3] += 13474407;
          result[4] += 0;
          result[5] += 23580212;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52451812;
          result[3] += 25845820;
          result[4] += 0;
          result[5] += 7601712;
        } else {
          result[0] += 3616814;
          result[1] += 0;
          result[2] += 74596800;
          result[3] += 7685730;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b60000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x429c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 64424509;
          result[3] += 0;
          result[4] += 0;
          result[5] += 21474836;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 75423815;
          result[3] += 10056508;
          result[4] += 0;
          result[5] += 419021;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85321547;
          result[3] += 577798;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
          result[0] += 392234;
          result[1] += 1961172;
          result[2] += 0;
          result[3] += 0;
          result[4] += 81977001;
          result[5] += 1568937;
        } else {
          result[0] += 41433802;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3031741;
          result[4] += 19201030;
          result[5] += 22232771;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 682514;
          result[1] += 585012;
          result[2] += 0;
          result[3] += 3900083;
          result[4] += 5655121;
          result[5] += 75076613;
        } else {
          result[0] += 0;
          result[1] += 1659890;
          result[2] += 0;
          result[3] += 45232022;
          result[4] += 1659890;
          result[5] += 37347541;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 32765729;
          result[2] += 0;
          result[3] += 2656680;
          result[4] += 47820254;
          result[5] += 2656680;
        } else {
          result[0] += 0;
          result[1] += 83016817;
          result[2] += 0;
          result[3] += 384337;
          result[4] += 2306022;
          result[5] += 192168;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 70732636;
          result[1] += 3332595;
          result[2] += 204036;
          result[3] += 1428255;
          result[4] += 8909591;
          result[5] += 1292230;
        } else {
          result[0] += 16810409;
          result[1] += 2586216;
          result[2] += 20874464;
          result[3] += 25677438;
          result[4] += 3509865;
          result[5] += 16440950;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42620000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42980000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6135667;
          result[3] += 0;
          result[4] += 67492343;
          result[5] += 12271335;
        } else {
          result[0] += 0;
          result[1] += 746950;
          result[2] += 11951213;
          result[3] += 39588394;
          result[4] += 746950;
          result[5] += 32865836;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 8053063;
          result[2] += 16106127;
          result[3] += 21474836;
          result[4] += 0;
          result[5] += 40265318;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 67815273;
          result[3] += 18084072;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 7212922;
          result[1] += 0;
          result[2] += 55080496;
          result[3] += 18360165;
          result[4] += 2622880;
          result[5] += 2622880;
        } else {
          result[0] += 518090;
          result[1] += 0;
          result[2] += 80200354;
          result[3] += 4766429;
          result[4] += 0;
          result[5] += 414472;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 285379;
          result[1] += 570759;
          result[2] += 0;
          result[3] += 0;
          result[4] += 77337949;
          result[5] += 7705256;
        } else {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1169421;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2338843;
          result[4] += 3720887;
          result[5] += 78670193;
        } else {
          result[0] += 5139277;
          result[1] += 1713092;
          result[2] += 3181457;
          result[3] += 36953849;
          result[4] += 5873459;
          result[5] += 33038209;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85716969;
          result[2] += 0;
          result[3] += 0;
          result[4] += 182376;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 65278622;
          result[1] += 2257298;
          result[2] += 1525201;
          result[3] += 1464193;
          result[4] += 11408506;
          result[5] += 3965523;
        } else {
          result[0] += 19389900;
          result[1] += 1667948;
          result[2] += 18347433;
          result[3] += 21683330;
          result[4] += 3961377;
          result[5] += 20849355;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6607641;
          result[3] += 4405094;
          result[4] += 2202547;
          result[5] += 72684061;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 5726623;
          result[4] += 11453246;
          result[5] += 68719476;
        } else {
          result[0] += 2321603;
          result[1] += 0;
          result[2] += 37919531;
          result[3] += 34824059;
          result[4] += 0;
          result[5] += 10834151;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e80000))) ) ) {
          result[0] += 0;
          result[1] += 17179869;
          result[2] += 51539607;
          result[3] += 4294967;
          result[4] += 0;
          result[5] += 12884901;
        } else {
          result[0] += 80172722;
          result[1] += 0;
          result[2] += 0;
          result[3] += 5726623;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        } else {
          result[0] += 1011770;
          result[1] += 0;
          result[2] += 79929897;
          result[3] += 4856500;
          result[4] += 0;
          result[5] += 101177;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42240000))) ) ) {
          result[0] += 0;
          result[1] += 75591424;
          result[2] += 0;
          result[3] += 0;
          result[4] += 10307921;
          result[5] += 0;
        } else {
          result[0] += 1115575;
          result[1] += 0;
          result[2] += 557787;
          result[3] += 836681;
          result[4] += 73349116;
          result[5] += 10040183;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 132152;
          result[3] += 925069;
          result[4] += 2510903;
          result[5] += 82331219;
        } else {
          result[0] += 7852738;
          result[1] += 961559;
          result[2] += 961559;
          result[3] += 29167315;
          result[4] += 9775858;
          result[5] += 37180313;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42460000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 69992059;
          result[1] += 0;
          result[2] += 0;
          result[3] += 9544371;
          result[4] += 0;
          result[5] += 6362914;
        } else {
          result[0] += 0;
          result[1] += 85206609;
          result[2] += 0;
          result[3] += 0;
          result[4] += 692736;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42890000))) ) ) {
          result[0] += 7844689;
          result[1] += 36477804;
          result[2] += 392234;
          result[3] += 1568937;
          result[4] += 34516632;
          result[5] += 5099047;
        } else {
          result[0] += 61340204;
          result[1] += 2478974;
          result[2] += 2190721;
          result[3] += 6168610;
          result[4] += 5130900;
          result[5] += 8589934;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 15477359;
          result[3] += 54944626;
          result[4] += 0;
          result[5] += 15477359;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 51539607;
          result[4] += 0;
          result[5] += 34359738;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 70659139;
          result[3] += 9698313;
          result[4] += 1385473;
          result[5] += 4156419;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52766741;
          result[3] += 17179869;
          result[4] += 0;
          result[5] += 15952735;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 9817068;
          result[1] += 0;
          result[2] += 52766741;
          result[3] += 14725602;
          result[4] += 0;
          result[5] += 8589934;
        } else {
          result[0] += 1093625;
          result[1] += 0;
          result[2] += 80630057;
          result[3] += 4076242;
          result[4] += 0;
          result[5] += 99420;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 4679341;
          result[1] += 334238;
          result[2] += 0;
          result[3] += 1671193;
          result[4] += 69187410;
          result[5] += 10027161;
        } else {
          result[0] += 58773236;
          result[1] += 2466009;
          result[2] += 822003;
          result[3] += 1644006;
          result[4] += 21372086;
          result[5] += 822003;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 185327;
          result[1] += 0;
          result[2] += 0;
          result[3] += 6115811;
          result[4] += 5467164;
          result[5] += 74131042;
        } else {
          result[0] += 1327362;
          result[1] += 1137739;
          result[2] += 3033972;
          result[3] += 38114279;
          result[4] += 7584931;
          result[5] += 34701060;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 37580963;
          result[2] += 0;
          result[3] += 0;
          result[4] += 48318382;
          result[5] += 0;
        } else {
          result[0] += 169426;
          result[1] += 84882785;
          result[2] += 0;
          result[3] += 0;
          result[4] += 847133;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
          result[0] += 72581006;
          result[1] += 3073462;
          result[2] += 315226;
          result[3] += 1182101;
          result[4] += 8117094;
          result[5] += 630453;
        } else {
          result[0] += 11060001;
          result[1] += 4792667;
          result[2] += 39078672;
          result[3] += 16590002;
          result[4] += 1843333;
          result[5] += 12534668;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 27126109;
          result[2] += 4521018;
          result[3] += 9042036;
          result[4] += 40689163;
          result[5] += 4521018;
        } else {
          result[0] += 1282079;
          result[1] += 0;
          result[2] += 2564159;
          result[3] += 5128319;
          result[4] += 3846239;
          result[5] += 73078548;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 13854733;
          result[3] += 60960826;
          result[4] += 1385473;
          result[5] += 9698313;
        } else {
          result[0] += 2603010;
          result[1] += 2603010;
          result[2] += 67678272;
          result[3] += 7809031;
          result[4] += 0;
          result[5] += 5206020;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42940000))) ) ) {
          result[0] += 81604378;
          result[1] += 0;
          result[2] += 4294967;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 24542670;
          result[1] += 0;
          result[2] += 61356675;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 4853070;
          result[1] += 0;
          result[2] += 63089915;
          result[3] += 16015132;
          result[4] += 0;
          result[5] += 1941228;
        } else {
          result[0] += 115767;
          result[1] += 0;
          result[2] += 82657861;
          result[3] += 3125717;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 1218430;
          result[1] += 0;
          result[2] += 1218430;
          result[3] += 1218430;
          result[4] += 77065725;
          result[5] += 5178329;
        } else {
          result[0] += 0;
          result[1] += 77309411;
          result[2] += 0;
          result[3] += 0;
          result[4] += 8589934;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42850000))) ) ) {
          result[0] += 127258;
          result[1] += 0;
          result[2] += 127258;
          result[3] += 3054198;
          result[4] += 3308715;
          result[5] += 79281914;
        } else {
          result[0] += 9684730;
          result[1] += 2105376;
          result[2] += 210537;
          result[3] += 29685803;
          result[4] += 4210752;
          result[5] += 40002146;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 7809031;
          result[2] += 0;
          result[3] += 0;
          result[4] += 78090314;
          result[5] += 0;
        } else {
          result[0] += 361681;
          result[1] += 83729257;
          result[2] += 180840;
          result[3] += 904203;
          result[4] += 723362;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 12725829;
          result[1] += 17179869;
          result[2] += 0;
          result[3] += 318145;
          result[4] += 52494044;
          result[5] += 3181457;
        } else {
          result[0] += 59092367;
          result[1] += 797826;
          result[2] += 5159279;
          result[3] += 8563340;
          result[4] += 4308264;
          result[5] += 7978267;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 15442579;
          result[3] += 50188381;
          result[4] += 0;
          result[5] += 20268384;
        } else {
          result[0] += 12884901;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 4294967;
          result[4] += 2147483;
          result[5] += 23622320;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42f10000))) ) ) {
          result[0] += 981706;
          result[1] += 0;
          result[2] += 73628010;
          result[3] += 10307921;
          result[4] += 0;
          result[5] += 981706;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 64424509;
          result[4] += 0;
          result[5] += 21474836;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 7158278;
          result[1] += 0;
          result[2] += 64424509;
          result[3] += 5726623;
          result[4] += 0;
          result[5] += 8589934;
        } else {
          result[0] += 122363;
          result[1] += 0;
          result[2] += 83329707;
          result[3] += 2324911;
          result[4] += 0;
          result[5] += 122363;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42300000))) ) ) {
          result[0] += 0;
          result[1] += 78934534;
          result[2] += 0;
          result[3] += 0;
          result[4] += 6964811;
          result[5] += 0;
        } else {
          result[0] += 1186455;
          result[1] += 711873;
          result[2] += 0;
          result[3] += 0;
          result[4] += 75933123;
          result[5] += 8067894;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42620000))) ) ) {
          result[0] += 0;
          result[1] += 85703675;
          result[2] += 0;
          result[3] += 0;
          result[4] += 195670;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 59468777;
          result[2] += 0;
          result[3] += 0;
          result[4] += 26430567;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
          result[0] += 57266230;
          result[1] += 0;
          result[2] += 715827;
          result[3] += 715827;
          result[4] += 12169074;
          result[5] += 15032385;
        } else {
          result[0] += 780016;
          result[1] += 97502;
          result[2] += 390008;
          result[3] += 7020150;
          result[4] += 4192590;
          result[5] += 73419077;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
          result[0] += 69554412;
          result[1] += 1415145;
          result[2] += 212271;
          result[3] += 4103922;
          result[4] += 5802097;
          result[5] += 4811495;
        } else {
          result[0] += 11725942;
          result[1] += 3545052;
          result[2] += 10498808;
          result[3] += 29042159;
          result[4] += 3681400;
          result[5] += 27405981;
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 30064771;
          result[4] += 4294967;
          result[5] += 51539607;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17530478;
          result[3] += 61356675;
          result[4] += 0;
          result[5] += 7012191;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38506603;
          result[3] += 35544556;
          result[4] += 0;
          result[5] += 11848185;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 78090314;
          result[3] += 7809031;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        } else {
          result[0] += 17895697;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 32212254;
          result[4] += 0;
          result[5] += 7158278;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 61356675;
          result[1] += 0;
          result[2] += 24542670;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1018203;
          result[1] += 0;
          result[2] += 79419869;
          result[3] += 4905889;
          result[4] += 0;
          result[5] += 555383;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 1358092;
          result[2] += 0;
          result[3] += 0;
          result[4] += 84541253;
          result[5] += 0;
        } else {
          result[0] += 4643207;
          result[1] += 0;
          result[2] += 2321603;
          result[3] += 2321603;
          result[4] += 51075286;
          result[5] += 25537643;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
          result[0] += 73225671;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 12673673;
          result[5] += 0;
        } else {
          result[0] += 583215;
          result[1] += 333266;
          result[2] += 0;
          result[3] += 6082106;
          result[4] += 6665322;
          result[5] += 72235434;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 63715130;
          result[1] += 7158278;
          result[2] += 515911;
          result[3] += 3224449;
          result[4] += 8061124;
          result[5] += 3224449;
        } else {
          result[0] += 14316557;
          result[1] += 4595438;
          result[2] += 10428109;
          result[3] += 27042386;
          result[4] += 3534952;
          result[5] += 25981900;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 85481344;
          result[2] += 0;
          result[3] += 0;
          result[4] += 418001;
          result[5] += 0;
        } else {
          result[0] += 28633115;
          result[1] += 34359738;
          result[2] += 0;
          result[3] += 22906492;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6442450;
          result[3] += 4294967;
          result[4] += 12884901;
          result[5] += 62277025;
        } else {
          result[0] += 4190211;
          result[1] += 11523082;
          result[2] += 5237764;
          result[3] += 41902119;
          result[4] += 6285317;
          result[5] += 16760847;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10965873;
          result[3] += 58484661;
          result[4] += 0;
          result[5] += 16448810;
        } else {
          result[0] += 2863311;
          result[1] += 0;
          result[2] += 65856165;
          result[3] += 8589934;
          result[4] += 0;
          result[5] += 8589934;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42f00000))) ) ) {
          result[0] += 2408392;
          result[1] += 0;
          result[2] += 70913790;
          result[3] += 10971567;
          result[4] += 0;
          result[5] += 1605595;
        } else {
          result[0] += 70281283;
          result[1] += 0;
          result[2] += 15618062;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 4405094;
          result[1] += 0;
          result[2] += 59468777;
          result[3] += 22025473;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 572662;
          result[1] += 0;
          result[2] += 83036034;
          result[3] += 2004318;
          result[4] += 0;
          result[5] += 286331;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          result[0] += 362444;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85536901;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51539607;
          result[5] += 34359738;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 3575113;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3768362;
          result[4] += 5604231;
          result[5] += 72951637;
        } else {
          result[0] += 5596841;
          result[1] += 486681;
          result[2] += 243340;
          result[3] += 41124616;
          result[4] += 4136795;
          result[5] += 34311070;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 52861135;
          result[2] += 0;
          result[3] += 11012736;
          result[4] += 22025473;
          result[5] += 0;
        } else {
          result[0] += 397682;
          result[1] += 85103981;
          result[2] += 0;
          result[3] += 0;
          result[4] += 397682;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 10498808;
          result[1] += 18611524;
          result[2] += 0;
          result[3] += 954437;
          result[4] += 53448481;
          result[5] += 2386092;
        } else {
          result[0] += 58396942;
          result[1] += 2504962;
          result[2] += 7201767;
          result[3] += 6627713;
          result[4] += 5114298;
          result[5] += 6053659;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 3067833;
          result[1] += 13805252;
          result[2] += 7669584;
          result[3] += 6135667;
          result[4] += 7669584;
          result[5] += 47551423;
        } else {
          result[0] += 1717986;
          result[1] += 0;
          result[2] += 10307921;
          result[3] += 61847529;
          result[4] += 0;
          result[5] += 12025908;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17179869;
          result[3] += 0;
          result[4] += 0;
          result[5] += 68719476;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 13215283;
          result[2] += 9911462;
          result[3] += 9911462;
          result[4] += 6607641;
          result[5] += 46253493;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 54975581;
          result[3] += 27487790;
          result[4] += 858993;
          result[5] += 2576980;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        } else {
          result[0] += 448560;
          result[1] += 0;
          result[2] += 81974441;
          result[3] += 3476344;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cc0000))) ) ) {
          result[0] += 598601;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 79913328;
          result[5] += 5387415;
        } else {
          result[0] += 0;
          result[1] += 53175785;
          result[2] += 0;
          result[3] += 28633115;
          result[4] += 4090445;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 116711;
          result[3] += 2217510;
          result[4] += 2567643;
          result[5] += 80997481;
        } else {
          result[0] += 12235295;
          result[1] += 378411;
          result[2] += 756822;
          result[3] += 24218317;
          result[4] += 7946635;
          result[5] += 40363862;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42580000))) ) ) {
          result[0] += 0;
          result[1] += 83428789;
          result[2] += 0;
          result[3] += 190042;
          result[4] += 2280513;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 25948760;
          result[2] += 2684354;
          result[3] += 0;
          result[4] += 51002736;
          result[5] += 6263493;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 72528925;
          result[1] += 2763718;
          result[2] += 1269816;
          result[3] += 2166157;
          result[4] += 5900911;
          result[5] += 1269816;
        } else {
          result[0] += 23395350;
          result[1] += 3841027;
          result[2] += 17110032;
          result[3] += 17110032;
          result[4] += 13269004;
          result[5] += 11173898;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0;
          result[1] += 3995318;
          result[2] += 11985955;
          result[3] += 7990636;
          result[4] += 7990636;
          result[5] += 53936798;
        } else {
          result[0] += 4454040;
          result[1] += 2545165;
          result[2] += 16543577;
          result[3] += 41358944;
          result[4] += 5090331;
          result[5] += 15907286;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 2696392;
          result[1] += 0;
          result[2] += 68565397;
          result[3] += 13481960;
          result[4] += 0;
          result[5] += 1155596;
        } else {
          result[0] += 80530636;
          result[1] += 0;
          result[2] += 5368709;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 62226297;
          result[3] += 20967556;
          result[4] += 0;
          result[5] += 2705491;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 78190430;
          result[3] += 4405094;
          result[4] += 0;
          result[5] += 3303820;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 75161927;
          result[3] += 9395240;
          result[4] += 0;
          result[5] += 1342177;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85266181;
          result[3] += 633164;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 352046;
          result[1] += 704092;
          result[2] += 0;
          result[3] += 352046;
          result[4] += 78154322;
          result[5] += 6336836;
        } else {
          result[0] += 0;
          result[1] += 48676296;
          result[2] += 0;
          result[3] += 20043180;
          result[4] += 14316557;
          result[5] += 2863311;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 5315553;
          result[4] += 4039820;
          result[5] += 76543971;
        } else {
          result[0] += 8232020;
          result[1] += 1252698;
          result[2] += 2863311;
          result[3] += 27559373;
          result[4] += 8410977;
          result[5] += 37580963;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426c0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 54851389;
          result[2] += 0;
          result[3] += 0;
          result[4] += 31047956;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 67852721;
          result[1] += 2522646;
          result[2] += 1099615;
          result[3] += 3298845;
          result[4] += 8796920;
          result[5] += 2328596;
        } else {
          result[0] += 9944012;
          result[1] += 2750471;
          result[2] += 13540783;
          result[3] += 23273221;
          result[4] += 8039840;
          result[5] += 28351015;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42860000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4294967;
          result[3] += 81604378;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 19088743;
          result[3] += 44540401;
          result[4] += 0;
          result[5] += 22270200;
        } else {
          result[0] += 3482405;
          result[1] += 0;
          result[2] += 53396890;
          result[3] += 13929623;
          result[4] += 0;
          result[5] += 15090425;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17179869;
          result[3] += 60129542;
          result[4] += 0;
          result[5] += 8589934;
        } else {
          result[0] += 399531;
          result[1] += 0;
          result[2] += 71516199;
          result[3] += 10787359;
          result[4] += 0;
          result[5] += 3196254;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42890000))) ) ) {
          result[0] += 73628010;
          result[1] += 0;
          result[2] += 12271335;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 868924;
          result[1] += 0;
          result[2] += 81927121;
          result[3] += 2730904;
          result[4] += 0;
          result[5] += 372396;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 727960;
          result[2] += 363980;
          result[3] += 0;
          result[4] += 82987503;
          result[5] += 1819901;
        } else {
          result[0] += 3435973;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 48103633;
          result[5] += 34359738;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 2171082;
          result[1] += 188789;
          result[2] += 0;
          result[3] += 2926241;
          result[4] += 6041272;
          result[5] += 74571959;
        } else {
          result[0] += 5318844;
          result[1] += 797826;
          result[2] += 531884;
          result[3] += 38827568;
          result[4] += 3457249;
          result[5] += 36965972;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 8886139;
          result[2] += 0;
          result[3] += 0;
          result[4] += 77013206;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85524239;
          result[2] += 0;
          result[3] += 0;
          result[4] += 375106;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 67546401;
          result[1] += 2964221;
          result[2] += 882959;
          result[3] += 2711947;
          result[4] += 9712554;
          result[5] += 2081261;
        } else {
          result[0] += 15244935;
          result[1] += 586343;
          result[2] += 14658591;
          result[3] += 21401543;
          result[4] += 7622467;
          result[5] += 26385464;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 5436667;
          result[2] += 3262000;
          result[3] += 59803342;
          result[4] += 5436667;
          result[5] += 11960668;
        } else {
          result[0] += 0;
          result[1] += 2095105;
          result[2] += 20951059;
          result[3] += 26188824;
          result[4] += 2095105;
          result[5] += 34569248;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 11453246;
          result[1] += 45812984;
          result[2] += 28633115;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1533916;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 10737418;
          result[4] += 7669584;
          result[5] += 23008753;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 73014444;
          result[1] += 0;
          result[2] += 12884901;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 3077826;
          result[1] += 0;
          result[2] += 67712187;
          result[3] += 12870911;
          result[4] += 0;
          result[5] += 2238419;
        } else {
          result[0] += 411658;
          result[1] += 0;
          result[2] += 82743299;
          result[3] += 2744388;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423c0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 23427094;
          result[2] += 0;
          result[3] += 39045157;
          result[4] += 0;
          result[5] += 23427094;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42580000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 850488;
          result[1] += 79095437;
          result[2] += 0;
          result[3] += 0;
          result[4] += 5953420;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 1140256;
          result[2] += 0;
          result[3] += 1140256;
          result[4] += 78677719;
          result[5] += 4941112;
        } else {
          result[0] += 3021585;
          result[1] += 431655;
          result[2] += 863310;
          result[3] += 14316557;
          result[4] += 5611515;
          result[5] += 61654723;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 28528614;
          result[1] += 2717010;
          result[2] += 4493518;
          result[3] += 15257061;
          result[4] += 14630058;
          result[5] += 20273081;
        } else {
          result[0] += 68248795;
          result[1] += 5379215;
          result[2] += 4286562;
          result[3] += 1260753;
          result[4] += 6303768;
          result[5] += 420251;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 19470518;
          result[3] += 52684932;
          result[4] += 0;
          result[5] += 13743895;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 77718455;
          result[3] += 4090445;
          result[4] += 0;
          result[5] += 4090445;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 1301505;
          result[1] += 0;
          result[2] += 65726014;
          result[3] += 14641933;
          result[4] += 0;
          result[5] += 4229892;
        } else {
          result[0] += 38654705;
          result[1] += 0;
          result[2] += 34359738;
          result[3] += 0;
          result[4] += 12884901;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 58567735;
          result[3] += 23427094;
          result[4] += 0;
          result[5] += 3904515;
        } else {
          result[0] += 890148;
          result[1] += 0;
          result[2] += 81003528;
          result[3] += 4005668;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 64424509;
          result[3] += 21474836;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 194342;
          result[1] += 0;
          result[2] += 85705003;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42420000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 12271335;
          result[4] += 73628010;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 70281283;
          result[2] += 0;
          result[3] += 0;
          result[4] += 15618062;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a60000))) ) ) {
          result[0] += 0;
          result[1] += 34359738;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51539607;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 362444;
          result[1] += 2899555;
          result[2] += 0;
          result[3] += 1087333;
          result[4] += 75026010;
          result[5] += 6524000;
        } else {
          result[0] += 4083621;
          result[1] += 1074637;
          result[2] += 214927;
          result[3] += 13683715;
          result[4] += 3367197;
          result[5] += 63475246;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 29085812;
          result[1] += 1697615;
          result[2] += 8827600;
          result[3] += 16749806;
          result[4] += 16636632;
          result[5] += 12901878;
        } else {
          result[0] += 69637239;
          result[1] += 3542241;
          result[2] += 4347295;
          result[3] += 1046571;
          result[4] += 6923471;
          result[5] += 402527;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 13215283;
          result[4] += 0;
          result[5] += 72684061;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42480000))) ) ) {
          result[0] += 0;
          result[1] += 74185798;
          result[2] += 11713547;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 12965939;
          result[1] += 0;
          result[2] += 50243013;
          result[3] += 8103711;
          result[4] += 1620742;
          result[5] += 12965939;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 26843545;
          result[4] += 0;
          result[5] += 59055800;
        } else {
          result[0] += 0;
          result[1] += 2526451;
          result[2] += 50529027;
          result[3] += 15158708;
          result[4] += 0;
          result[5] += 17685159;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 12271335;
          result[1] += 0;
          result[2] += 47721858;
          result[3] += 24542670;
          result[4] += 0;
          result[5] += 1363481;
        } else {
          result[0] += 416987;
          result[1] += 0;
          result[2] += 79853032;
          result[3] += 5420832;
          result[4] += 0;
          result[5] += 208493;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 1970168;
          result[2] += 0;
          result[3] += 0;
          result[4] += 82353042;
          result[5] += 1576134;
        } else {
          result[0] += 3123612;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3123612;
          result[4] += 42168769;
          result[5] += 37483350;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1842345;
          result[4] += 4605863;
          result[5] += 79451137;
        } else {
          result[0] += 7261594;
          result[1] += 885560;
          result[2] += 708448;
          result[3] += 23024566;
          result[4] += 8678490;
          result[5] += 45340685;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 28633115;
          result[2] += 0;
          result[3] += 0;
          result[4] += 57266230;
          result[5] += 0;
        } else {
          result[0] += 186332;
          result[1] += 84222352;
          result[2] += 372665;
          result[3] += 558997;
          result[4] += 558997;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 7853654;
          result[1] += 20615843;
          result[2] += 0;
          result[3] += 0;
          result[4] += 56938994;
          result[5] += 490853;
        } else {
          result[0] += 63237742;
          result[1] += 1243280;
          result[2] += 2147483;
          result[3] += 7007578;
          result[4] += 4916607;
          result[5] += 7346654;
        }
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d20000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6049249;
          result[3] += 59282647;
          result[4] += 6049249;
          result[5] += 14518199;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 31647127;
          result[3] += 13563054;
          result[4] += 0;
          result[5] += 40689163;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 0;
          result[4] += 0;
          result[5] += 57266230;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 15417831;
          result[3] += 46253493;
          result[4] += 0;
          result[5] += 24228020;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 67645734;
          result[3] += 15569256;
          result[4] += 1073741;
          result[5] += 1610612;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 3579139;
          result[1] += 0;
          result[2] += 68278967;
          result[3] += 9636144;
          result[4] += 0;
          result[5] += 4405094;
        } else {
          result[0] += 324761;
          result[1] += 0;
          result[2] += 83301256;
          result[3] += 2273328;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 1125318;
          result[2] += 0;
          result[3] += 0;
          result[4] += 83648708;
          result[5] += 1125318;
        } else {
          result[0] += 5506368;
          result[1] += 4405094;
          result[2] += 0;
          result[3] += 1101273;
          result[4] += 42949672;
          result[5] += 31936936;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 3715967;
          result[1] += 259253;
          result[2] += 0;
          result[3] += 5012235;
          result[4] += 4148056;
          result[5] += 72763832;
        } else {
          result[0] += 784468;
          result[1] += 392234;
          result[2] += 0;
          result[3] += 57658465;
          result[4] += 0;
          result[5] += 27064177;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 3616814;
          result[1] += 31195025;
          result[2] += 2712610;
          result[3] += 452101;
          result[4] += 44305978;
          result[5] += 3616814;
        } else {
          result[0] += 58767524;
          result[1] += 1085272;
          result[2] += 6945746;
          result[3] += 7596909;
          result[4] += 6077527;
          result[5] += 5426364;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d90000))) ) ) {
          result[0] += 0;
          result[1] += 84967682;
          result[2] += 0;
          result[3] += 0;
          result[4] += 931663;
          result[5] += 0;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42800000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4955731;
          result[3] += 9911462;
          result[4] += 1651910;
          result[5] += 69380240;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 3949395;
          result[1] += 4936744;
          result[2] += 42455998;
          result[3] += 19746976;
          result[4] += 987348;
          result[5] += 13822883;
        } else {
          result[0] += 69138497;
          result[1] += 0;
          result[2] += 10475529;
          result[3] += 6285317;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 48363497;
          result[3] += 33204789;
          result[4] += 0;
          result[5] += 4331059;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 72962697;
          result[3] += 9831852;
          result[4] += 0;
          result[5] += 3104795;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 32212254;
          result[1] += 0;
          result[2] += 37580963;
          result[3] += 16106127;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 148614;
          result[1] += 0;
          result[2] += 82927050;
          result[3] += 2823680;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 5422217;
          result[1] += 856139;
          result[2] += 570759;
          result[3] += 0;
          result[4] += 73342630;
          result[5] += 5707597;
        } else {
          result[0] += 55957288;
          result[1] += 1963413;
          result[2] += 981706;
          result[3] += 0;
          result[4] += 25033523;
          result[5] += 1963413;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42890000))) ) ) {
          result[0] += 212359;
          result[1] += 106179;
          result[2] += 212359;
          result[3] += 4141006;
          result[4] += 4034827;
          result[5] += 77192613;
        } else {
          result[0] += 1431655;
          result[1] += 1431655;
          result[2] += 0;
          result[3] += 25483472;
          result[4] += 16034544;
          result[5] += 41518017;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42660000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x425e0000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 69380240;
          result[2] += 1651910;
          result[3] += 0;
          result[4] += 14867194;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 70071871;
          result[1] += 3046603;
          result[2] += 297229;
          result[3] += 2823680;
          result[4] += 6984894;
          result[5] += 2675066;
        } else {
          result[0] += 16169288;
          result[1] += 3705461;
          result[2] += 13137547;
          result[3] += 29643695;
          result[4] += 3200171;
          result[5] += 20043180;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3846239;
          result[3] += 66668149;
          result[4] += 0;
          result[5] += 15384957;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34896609;
          result[3] += 26843545;
          result[4] += 5368709;
          result[5] += 18790481;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 58189879;
          result[3] += 16625679;
          result[4] += 0;
          result[5] += 11083786;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42e70000))) ) ) {
          result[0] += 717821;
          result[1] += 0;
          result[2] += 72739278;
          result[3] += 11485149;
          result[4] += 0;
          result[5] += 957095;
        } else {
          result[0] += 62472251;
          result[1] += 0;
          result[2] += 23427094;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 19088743;
          result[1] += 0;
          result[2] += 47721858;
          result[3] += 0;
          result[4] += 0;
          result[5] += 19088743;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 84074686;
          result[3] += 1824659;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 756822;
          result[1] += 1892056;
          result[2] += 0;
          result[3] += 0;
          result[4] += 80223177;
          result[5] += 3027289;
        } else {
          result[0] += 38693399;
          result[1] += 0;
          result[2] += 6190943;
          result[3] += 773867;
          result[4] += 17025095;
          result[5] += 23216039;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 3359192;
          result[2] += 0;
          result[3] += 4222984;
          result[4] += 4510915;
          result[5] += 73806253;
        } else {
          result[0] += 588351;
          result[1] += 588351;
          result[2] += 1765055;
          result[3] += 45891431;
          result[4] += 1470879;
          result[5] += 35595276;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 81127160;
          result[5] += 4772185;
        } else {
          result[0] += 0;
          result[1] += 82752171;
          result[2] += 0;
          result[3] += 2036406;
          result[4] += 1110767;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 64679403;
          result[1] += 2995006;
          result[2] += 254894;
          result[3] += 2294047;
          result[4] += 12362368;
          result[5] += 3313624;
        } else {
          result[0] += 8190891;
          result[1] += 1680182;
          result[2] += 15121645;
          result[3] += 27092947;
          result[4] += 5880639;
          result[5] += 27933039;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4026531;
          result[3] += 71135395;
          result[4] += 0;
          result[5] += 10737418;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 21474836;
          result[4] += 0;
          result[5] += 21474836;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32212254;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 3435973;
          result[1] += 0;
          result[2] += 73873437;
          result[3] += 8589934;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42f50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 74558701;
          result[3] += 10375482;
          result[4] += 0;
          result[5] += 965161;
        } else {
          result[0] += 36814005;
          result[1] += 0;
          result[2] += 49085340;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 72684061;
          result[3] += 13215283;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 174947;
          result[1] += 0;
          result[2] += 85024607;
          result[3] += 524843;
          result[4] += 0;
          result[5] += 174947;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
          result[0] += 1881007;
          result[1] += 313501;
          result[2] += 0;
          result[3] += 0;
          result[4] += 79315819;
          result[5] += 4389017;
        } else {
          result[0] += 42295617;
          result[1] += 436037;
          result[2] += 1308111;
          result[3] += 3052261;
          result[4] += 20057715;
          result[5] += 18749603;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 95762;
          result[2] += 0;
          result[3] += 4692383;
          result[4] += 4213568;
          result[5] += 76897630;
        } else {
          result[0] += 3267909;
          result[1] += 3267909;
          result[2] += 0;
          result[3] += 30811721;
          result[4] += 20074303;
          result[5] += 28477500;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 2202547;
          result[1] += 38544578;
          result[2] += 0;
          result[3] += 1101273;
          result[4] += 40747125;
          result[5] += 3303820;
        } else {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 71342704;
          result[1] += 4321502;
          result[2] += 227447;
          result[3] += 1819580;
          result[4] += 6141082;
          result[5] += 2047027;
        } else {
          result[0] += 12988217;
          result[1] += 2066307;
          result[2] += 18153985;
          result[3] += 32175356;
          result[4] += 2951867;
          result[5] += 17563611;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12271335;
          result[3] += 3506095;
          result[4] += 8765239;
          result[5] += 61356675;
        } else {
          result[0] += 0;
          result[1] += 20211610;
          result[2] += 10105805;
          result[3] += 40423221;
          result[4] += 5052902;
          result[5] += 10105805;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 68719476;
          result[4] += 0;
          result[5] += 17179869;
        } else {
          result[0] += 0;
          result[1] += 2120971;
          result[2] += 49842830;
          result[3] += 27572629;
          result[4] += 0;
          result[5] += 6362914;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42910000))) ) ) {
          result[0] += 70281283;
          result[1] += 0;
          result[2] += 7809031;
          result[3] += 0;
          result[4] += 7809031;
          result[5] += 0;
        } else {
          result[0] += 2581674;
          result[1] += 0;
          result[2] += 68531718;
          result[3] += 12908371;
          result[4] += 0;
          result[5] += 1877581;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42940000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 500384;
          result[1] += 0;
          result[2] += 83731012;
          result[3] += 1667948;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 362444;
          result[4] += 82274900;
          result[5] += 3262000;
        } else {
          result[0] += 0;
          result[1] += 57266230;
          result[2] += 0;
          result[3] += 7158278;
          result[4] += 21474836;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 4014769;
          result[1] += 334564;
          result[2] += 0;
          result[3] += 4600257;
          result[4] += 6105795;
          result[5] += 70843959;
        } else {
          result[0] += 395849;
          result[1] += 791699;
          result[2] += 0;
          result[3] += 53043835;
          result[4] += 3166796;
          result[5] += 28501165;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 10737418;
          result[2] += 0;
          result[3] += 0;
          result[4] += 75161927;
          result[5] += 0;
        } else {
          result[0] += 184729;
          result[1] += 84975697;
          result[2] += 0;
          result[3] += 369459;
          result[4] += 369459;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          result[0] += 1552397;
          result[1] += 38809945;
          result[2] += 0;
          result[3] += 0;
          result[4] += 45537002;
          result[5] += 0;
        } else {
          result[0] += 58822948;
          result[1] += 944525;
          result[2] += 5352311;
          result[3] += 8815571;
          result[4] += 5614679;
          result[5] += 6349310;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42930000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 21474836;
        } else {
          result[0] += 0;
          result[1] += 2202547;
          result[2] += 2202547;
          result[3] += 8810189;
          result[4] += 0;
          result[5] += 72684061;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 19088743;
          result[3] += 57266230;
          result[4] += 0;
          result[5] += 9544371;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 74185798;
          result[3] += 3904515;
          result[4] += 0;
          result[5] += 7809031;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26843545;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 5368709;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 58716008;
          result[3] += 18484669;
          result[4] += 0;
          result[5] += 8698667;
        } else {
          result[0] += 703269;
          result[1] += 401868;
          result[2] += 80474124;
          result[3] += 3918215;
          result[4] += 200934;
          result[5] += 200934;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42bc0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428c0000))) ) ) {
          result[0] += 0;
          result[1] += 1439653;
          result[2] += 0;
          result[3] += 0;
          result[4] += 83499922;
          result[5] += 959769;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 10737418;
          result[4] += 32212254;
          result[5] += 42949672;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 21474836;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 21474836;
        } else {
          result[0] += 0;
          result[1] += 79975253;
          result[2] += 0;
          result[3] += 5924092;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 81994830;
          result[5] += 3904515;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1672588;
          result[4] += 2389411;
          result[5] += 81837346;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
          result[0] += 53448481;
          result[1] += 2863311;
          result[2] += 0;
          result[3] += 954437;
          result[4] += 18134306;
          result[5] += 10498808;
        } else {
          result[0] += 1446725;
          result[1] += 723362;
          result[2] += 3435973;
          result[3] += 34178897;
          result[4] += 2893451;
          result[5] += 43220934;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 1620742;
          result[1] += 5672598;
          result[2] += 0;
          result[3] += 0;
          result[4] += 72123035;
          result[5] += 6482969;
        } else {
          result[0] += 506282;
          result[1] += 81511560;
          result[2] += 675043;
          result[3] += 0;
          result[4] += 3206458;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 73249265;
          result[1] += 1817975;
          result[2] += 605991;
          result[3] += 3257206;
          result[4] += 5756922;
          result[5] += 1211983;
        } else {
          result[0] += 23929103;
          result[1] += 0;
          result[2] += 14112035;
          result[3] += 21781619;
          result[4] += 8896717;
          result[5] += 17179869;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 3067833;
          result[1] += 13038293;
          result[2] += 4601750;
          result[3] += 10737418;
          result[4] += 23775711;
          result[5] += 30678337;
        } else {
          result[0] += 10534825;
          result[1] += 0;
          result[2] += 38492631;
          result[3] += 25526692;
          result[4] += 405185;
          result[5] += 10940011;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 1385473;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 33251359;
          result[4] += 0;
          result[5] += 8312839;
        } else {
          result[0] += 293840;
          result[1] += 0;
          result[2] += 80708165;
          result[3] += 4701446;
          result[4] += 0;
          result[5] += 195893;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 1738853;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 83464951;
          result[5] += 695541;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 15618062;
          result[3] += 15618062;
          result[4] += 0;
          result[5] += 54663220;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 2975284;
          result[1] += 95976;
          result[2] += 0;
          result[3] += 3743099;
          result[4] += 6046546;
          result[5] += 73038438;
        } else {
          result[0] += 4102655;
          result[1] += 1025663;
          result[2] += 769247;
          result[3] += 35128986;
          result[4] += 4359071;
          result[5] += 40513721;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42460000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
          result[0] += 205500;
          result[1] += 83638836;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2055008;
          result[5] += 0;
        } else {
          result[0] += 73014444;
          result[1] += 12884901;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 13991181;
          result[1] += 28633115;
          result[2] += 976128;
          result[3] += 0;
          result[4] += 39695909;
          result[5] += 2603010;
        } else {
          result[0] += 63594337;
          result[1] += 1816981;
          result[2] += 2819453;
          result[3] += 7142615;
          result[4] += 4824397;
          result[5] += 5701561;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8236923;
          result[3] += 56481761;
          result[4] += 0;
          result[5] += 21180660;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41231686;
          result[3] += 13743895;
          result[4] += 0;
          result[5] += 30923764;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 50484703;
          result[3] += 27126109;
          result[4] += 1507006;
          result[5] += 6781527;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 434933;
          result[1] += 0;
          result[2] += 70894143;
          result[3] += 11090801;
          result[4] += 0;
          result[5] += 3479467;
        } else {
          result[0] += 46528812;
          result[1] += 0;
          result[2] += 35791394;
          result[3] += 3579139;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 6607641;
          result[1] += 0;
          result[2] += 59468777;
          result[3] += 0;
          result[4] += 0;
          result[5] += 19822925;
        } else {
          result[0] += 297229;
          result[1] += 0;
          result[2] += 84115968;
          result[3] += 1486147;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
          result[0] += 1945939;
          result[1] += 4447862;
          result[2] += 0;
          result[3] += 0;
          result[4] += 76447637;
          result[5] += 3057905;
        } else {
          result[0] += 56066040;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 18517224;
          result[5] += 11316081;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 310854;
          result[1] += 207236;
          result[2] += 725326;
          result[3] += 3212158;
          result[4] += 6113463;
          result[5] += 75330306;
        } else {
          result[0] += 3335896;
          result[1] += 1945939;
          result[2] += 1389957;
          result[3] += 27243158;
          result[4] += 11675639;
          result[5] += 40308754;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42620000))) ) ) {
          result[0] += 177477;
          result[1] += 85011955;
          result[2] += 0;
          result[3] += 0;
          result[4] += 709911;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 47244640;
          result[2] += 0;
          result[3] += 12884901;
          result[4] += 25769803;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 24652040;
          result[1] += 2603010;
          result[2] += 9952687;
          result[3] += 24652040;
          result[4] += 4593547;
          result[5] += 19446019;
        } else {
          result[0] += 68891902;
          result[1] += 1724256;
          result[2] += 6113274;
          result[3] += 1410755;
          result[4] += 6113274;
          result[5] += 1645881;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42740000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3303820;
          result[3] += 3303820;
          result[4] += 0;
          result[5] += 79291703;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 5128319;
          result[2] += 20513276;
          result[3] += 42308633;
          result[4] += 3846239;
          result[5] += 14102877;
        } else {
          result[0] += 6198921;
          result[1] += 0;
          result[2] += 66417020;
          result[3] += 10626723;
          result[4] += 0;
          result[5] += 2656680;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 19088743;
          result[3] += 47721858;
          result[4] += 0;
          result[5] += 19088743;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 70375367;
          result[3] += 13971580;
          result[4] += 0;
          result[5] += 1552397;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 71582788;
          result[3] += 11453246;
          result[4] += 0;
          result[5] += 2863311;
        } else {
          result[0] += 137880;
          result[1] += 0;
          result[2] += 84106903;
          result[3] += 1516681;
          result[4] += 0;
          result[5] += 137880;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 423149;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85476196;
          result[5] += 0;
        } else {
          result[0] += 2603010;
          result[1] += 0;
          result[2] += 13015052;
          result[3] += 0;
          result[4] += 44251178;
          result[5] += 26030104;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 3325135;
          result[1] += 0;
          result[2] += 184729;
          result[3] += 2770946;
          result[4] += 5080068;
          result[5] += 74538464;
        } else {
          result[0] += 3915639;
          result[1] += 734182;
          result[2] += 1223637;
          result[3] += 34506574;
          result[4] += 3670912;
          result[5] += 41848399;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 65967241;
          result[1] += 5985802;
          result[2] += 740511;
          result[3] += 2468372;
          result[4] += 9256395;
          result[5] += 1481023;
        } else {
          result[0] += 17121829;
          result[1] += 2321603;
          result[2] += 19153232;
          result[3] += 25247442;
          result[4] += 4062806;
          result[5] += 17992430;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 67492343;
          result[5] += 18407002;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 7809031;
          result[5] += 78090314;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6135667;
          result[3] += 54344484;
          result[4] += 0;
          result[5] += 25419194;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9817068;
          result[3] += 29451204;
          result[4] += 4908534;
          result[5] += 41722539;
        } else {
          result[0] += 8810189;
          result[1] += 3303820;
          result[2] += 46253493;
          result[3] += 9911462;
          result[4] += 7708915;
          result[5] += 9911462;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 1937579;
          result[1] += 0;
          result[2] += 69322279;
          result[3] += 12917194;
          result[4] += 645859;
          result[5] += 1076432;
        } else {
          result[0] += 486222;
          result[1] += 0;
          result[2] += 83468232;
          result[3] += 1458668;
          result[4] += 0;
          result[5] += 486222;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 326613;
          result[1] += 1959680;
          result[2] += 0;
          result[3] += 0;
          result[4] += 79367076;
          result[5] += 4245975;
        } else {
          result[0] += 0;
          result[1] += 10737418;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 21474836;
          result[5] += 10737418;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1190041;
          result[1] += 108185;
          result[2] += 0;
          result[3] += 3245567;
          result[4] += 3461938;
          result[5] += 77893613;
        } else {
          result[0] += 7272942;
          result[1] += 196566;
          result[2] += 196566;
          result[3] += 29484901;
          result[4] += 7469508;
          result[5] += 41278861;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 45812984;
          result[2] += 0;
          result[3] += 5726623;
          result[4] += 34359738;
          result[5] += 0;
        } else {
          result[0] += 562659;
          result[1] += 84586473;
          result[2] += 0;
          result[3] += 0;
          result[4] += 750212;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 64764398;
          result[1] += 4078673;
          result[2] += 556182;
          result[3] += 2533721;
          result[4] += 11556242;
          result[5] += 2410125;
        } else {
          result[0] += 10984571;
          result[1] += 3734754;
          result[2] += 27900810;
          result[3] += 23287290;
          result[4] += 3515062;
          result[5] += 16476856;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 17179869;
          result[1] += 11453246;
          result[2] += 28633115;
          result[3] += 0;
          result[4] += 0;
          result[5] += 28633115;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9544371;
          result[3] += 64901728;
          result[4] += 0;
          result[5] += 11453246;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42930000))) ) ) {
          result[0] += 3904515;
          result[1] += 0;
          result[2] += 11713547;
          result[3] += 0;
          result[4] += 31236125;
          result[5] += 39045157;
        } else {
          result[0] += 1923119;
          result[1] += 641039;
          result[2] += 61539829;
          result[3] += 15384957;
          result[4] += 0;
          result[5] += 6410398;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 57266230;
          result[3] += 28633115;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 72120269;
          result[3] += 11726873;
          result[4] += 0;
          result[5] += 2052202;
        } else {
          result[0] += 326613;
          result[1] += 0;
          result[2] += 84429585;
          result[3] += 1143147;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 347770;
          result[1] += 1043311;
          result[2] += 0;
          result[3] += 0;
          result[4] += 78596162;
          result[5] += 5912100;
        } else {
          result[0] += 0;
          result[1] += 81604378;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4294967;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 3886848;
          result[1] += 874540;
          result[2] += 0;
          result[3] += 4372704;
          result[4] += 3498163;
          result[5] += 73267089;
        } else {
          result[0] += 2461299;
          result[1] += 246129;
          result[2] += 738389;
          result[3] += 39380788;
          result[4] += 1722909;
          result[5] += 41349828;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 28034096;
          result[1] += 4552545;
          result[2] += 5630779;
          result[3] += 15454694;
          result[4] += 17730966;
          result[5] += 14496263;
        } else {
          result[0] += 66925004;
          result[1] += 5000989;
          result[2] += 4633269;
          result[3] += 1103159;
          result[4] += 7133764;
          result[5] += 1103159;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 85179518;
          result[2] += 0;
          result[3] += 0;
          result[4] += 719826;
          result[5] += 0;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 79763678;
          result[4] += 0;
          result[5] += 6135667;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 0;
          result[4] += 0;
          result[5] += 64424509;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 47721858;
          result[4] += 0;
          result[5] += 9544371;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 27790964;
          result[3] += 25264513;
          result[4] += 0;
          result[5] += 32843867;
        } else {
          result[0] += 1524840;
          result[1] += 0;
          result[2] += 62518458;
          result[3] += 19314645;
          result[4] += 0;
          result[5] += 2541400;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 3288013;
          result[1] += 0;
          result[2] += 73158294;
          result[3] += 9042036;
          result[4] += 0;
          result[5] += 411001;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 84916837;
          result[3] += 842150;
          result[4] += 0;
          result[5] += 140358;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 388684;
          result[1] += 388684;
          result[2] += 0;
          result[3] += 0;
          result[4] += 84733291;
          result[5] += 388684;
        } else {
          result[0] += 22548578;
          result[1] += 0;
          result[2] += 1073741;
          result[3] += 4831838;
          result[4] += 31675383;
          result[5] += 25769803;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 188375;
          result[2] += 282563;
          result[3] += 5086145;
          result[4] += 6028024;
          result[5] += 74314236;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 49208670;
          result[4] += 431655;
          result[5] += 36259020;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 5873459;
          result[1] += 31202753;
          result[2] += 0;
          result[3] += 367091;
          result[4] += 48088950;
          result[5] += 367091;
        } else {
          result[0] += 62493215;
          result[1] += 1095360;
          result[2] += 3804937;
          result[3] += 6745116;
          result[4] += 5419153;
          result[5] += 6341562;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42850000))) ) ) {
          result[0] += 194342;
          result[1] += 85705003;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42940000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 22906492;
          result[3] += 22906492;
          result[4] += 40086361;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2684354;
          result[4] += 2684354;
          result[5] += 80530636;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8998979;
          result[3] += 67083298;
          result[4] += 818089;
          result[5] += 8998979;
        } else {
          result[0] += 1771120;
          result[1] += 7084482;
          result[2] += 38964651;
          result[3] += 16825645;
          result[4] += 6198921;
          result[5] += 15054524;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 12632256;
          result[1] += 0;
          result[2] += 27790964;
          result[3] += 32843867;
          result[4] += 0;
          result[5] += 12632256;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 72477573;
          result[3] += 0;
          result[4] += 0;
          result[5] += 13421772;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1524840;
          result[1] += 0;
          result[2] += 78275143;
          result[3] += 5692737;
          result[4] += 0;
          result[5] += 406624;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42240000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 633943;
          result[1] += 633943;
          result[2] += 0;
          result[3] += 0;
          result[4] += 82729628;
          result[5] += 1901830;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 3432051;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3137875;
          result[4] += 3922344;
          result[5] += 75407074;
        } else {
          result[0] += 3713228;
          result[1] += 3960776;
          result[2] += 1485291;
          result[3] += 42825898;
          result[4] += 3713228;
          result[5] += 30200922;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 59818646;
          result[1] += 4548289;
          result[2] += 690879;
          result[3] += 3454397;
          result[4] += 13760015;
          result[5] += 3627117;
        } else {
          result[0] += 14743917;
          result[1] += 3632559;
          result[2] += 21795356;
          result[3] += 25641595;
          result[4] += 3846239;
          result[5] += 16239677;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 25769803;
          result[1] += 25769803;
          result[2] += 0;
          result[3] += 0;
          result[4] += 34359738;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 17978932;
          result[4] += 0;
          result[5] += 67920413;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 40086361;
          result[4] += 0;
          result[5] += 17179869;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 68719476;
          result[2] += 17179869;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 9439488;
          result[1] += 0;
          result[2] += 58524829;
          result[3] += 9439488;
          result[4] += 1887897;
          result[5] += 6607641;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40086361;
          result[3] += 43904110;
          result[4] += 0;
          result[5] += 1908874;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 70026640;
          result[3] += 13071639;
          result[4] += 0;
          result[5] += 2801065;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35791394;
          result[3] += 35791394;
          result[4] += 0;
          result[5] += 14316557;
        } else {
          result[0] += 264712;
          result[1] += 0;
          result[2] += 82590434;
          result[3] += 3044198;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 850488;
          result[4] += 81221658;
          result[5] += 3827198;
        } else {
          result[0] += 0;
          result[1] += 60960826;
          result[2] += 0;
          result[3] += 5541893;
          result[4] += 0;
          result[5] += 19396626;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 832963;
          result[1] += 104120;
          result[2] += 208240;
          result[3] += 2707130;
          result[4] += 7288429;
          result[5] += 74758461;
        } else {
          result[0] += 2839647;
          result[1] += 1419823;
          result[2] += 4259471;
          result[3] += 38335245;
          result[4] += 3904515;
          result[5] += 35140641;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
          result[0] += 2538896;
          result[1] += 21580623;
          result[2] += 2538896;
          result[3] += 8039840;
          result[4] += 49085340;
          result[5] += 2115747;
        } else {
          result[0] += 61289496;
          result[1] += 1097254;
          result[2] += 1515256;
          result[3] += 6792527;
          result[4] += 7419529;
          result[5] += 7785281;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 784468;
          result[1] += 85114876;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42580000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 4190211;
          result[1] += 0;
          result[2] += 2793474;
          result[3] += 25839640;
          result[4] += 2095105;
          result[5] += 50980912;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26143279;
          result[3] += 37347541;
          result[4] += 3734754;
          result[5] += 18673770;
        } else {
          result[0] += 3904515;
          result[1] += 0;
          result[2] += 74185798;
          result[3] += 7809031;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38069028;
          result[3] += 40997415;
          result[4] += 0;
          result[5] += 6832902;
        } else {
          result[0] += 3152269;
          result[1] += 0;
          result[2] += 67773795;
          result[3] += 7880673;
          result[4] += 0;
          result[5] += 7092606;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 112581;
          result[1] += 0;
          result[2] += 81959008;
          result[3] += 3602593;
          result[4] += 0;
          result[5] += 225162;
        } else {
          result[0] += 26430567;
          result[1] += 0;
          result[2] += 59468777;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 85899345;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
          result[0] += 13523512;
          result[1] += 2504354;
          result[2] += 0;
          result[3] += 0;
          result[4] += 60354933;
          result[5] += 9516545;
        } else {
          result[0] += 0;
          result[1] += 982138;
          result[2] += 0;
          result[3] += 13825488;
          result[4] += 3928554;
          result[5] += 67163164;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 61981082;
          result[1] += 3338843;
          result[2] += 910593;
          result[3] += 3399550;
          result[4] += 13658906;
          result[5] += 2610368;
        } else {
          result[0] += 12788984;
          result[1] += 213149;
          result[2] += 24938519;
          result[3] += 24725370;
          result[4] += 5541893;
          result[5] += 17691428;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c00000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4294967;
          result[3] += 4294967;
          result[4] += 4294967;
          result[5] += 73014444;
        } else {
          result[0] += 0;
          result[1] += 4190211;
          result[2] += 31426589;
          result[3] += 27236377;
          result[4] += 4190211;
          result[5] += 18855953;
        }
      } else {
        result[0] += 0;
        result[1] += 85899345;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 3520464;
          result[1] += 0;
          result[2] += 43653765;
          result[3] += 23235068;
          result[4] += 0;
          result[5] += 15490045;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 75953105;
          result[3] += 8137832;
          result[4] += 0;
          result[5] += 1808407;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x43028000))) ) ) {
          result[0] += 929898;
          result[1] += 0;
          result[2] += 80552431;
          result[3] += 4417016;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42850000))) ) ) {
          result[0] += 367091;
          result[1] += 2202547;
          result[2] += 0;
          result[3] += 0;
          result[4] += 81494251;
          result[5] += 1835456;
        } else {
          result[0] += 41231686;
          result[1] += 687194;
          result[2] += 0;
          result[3] += 3435973;
          result[4] += 21303037;
          result[5] += 19241453;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 1568937;
          result[2] += 0;
          result[3] += 3235934;
          result[4] += 7550513;
          result[5] += 73543960;
        } else {
          result[0] += 2646188;
          result[1] += 0;
          result[2] += 8956329;
          result[3] += 39285719;
          result[4] += 2849741;
          result[5] += 32161366;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 36814005;
          result[4] += 49085340;
          result[5] += 0;
        } else {
          result[0] += 788067;
          result[1] += 83141110;
          result[2] += 394033;
          result[3] += 591050;
          result[4] += 985084;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42df0000))) ) ) {
          result[0] += 45507803;
          result[1] += 3859636;
          result[2] += 5654815;
          result[3] += 9604211;
          result[4] += 11668667;
          result[5] += 9604211;
        } else {
          result[0] += 82158085;
          result[1] += 897902;
          result[2] += 1047552;
          result[3] += 0;
          result[4] += 1496504;
          result[5] += 299300;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2095105;
          result[4] += 4190211;
          result[5] += 79614027;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5052902;
          result[3] += 40423221;
          result[4] += 5052902;
          result[5] += 35370318;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 47721858;
          result[4] += 38177487;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 49796722;
          result[3] += 8714426;
          result[4] += 0;
          result[5] += 27388197;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d90000))) ) ) {
          result[0] += 0;
          result[1] += 75161927;
          result[2] += 3579139;
          result[3] += 7158278;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 46854188;
          result[1] += 0;
          result[2] += 15618062;
          result[3] += 0;
          result[4] += 15618062;
          result[5] += 7809031;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 46385646;
          result[3] += 30923764;
          result[4] += 0;
          result[5] += 8589934;
        } else {
          result[0] += 1615661;
          result[1] += 269276;
          result[2] += 78180073;
          result[3] += 5206020;
          result[4] += 89758;
          result[5] += 538553;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 1887897;
          result[2] += 0;
          result[3] += 0;
          result[4] += 81179601;
          result[5] += 2831846;
        } else {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42870000))) ) ) {
          result[0] += 804947;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3794750;
          result[4] += 2414841;
          result[5] += 78884807;
        } else {
          result[0] += 12466118;
          result[1] += 779132;
          result[2] += 3506095;
          result[3] += 22984405;
          result[4] += 10323504;
          result[5] += 35840089;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 38177487;
          result[2] += 0;
          result[3] += 9544371;
          result[4] += 38177487;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85676808;
          result[2] += 0;
          result[3] += 0;
          result[4] += 222537;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          result[0] += 66437280;
          result[1] += 2028619;
          result[2] += 0;
          result[3] += 2662562;
          result[4] += 9065392;
          result[5] += 5705491;
        } else {
          result[0] += 13003111;
          result[1] += 3940336;
          result[2] += 25809207;
          result[3] += 21671853;
          result[4] += 9062775;
          result[5] += 12412061;
        }
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b40000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c60000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7040929;
          result[3] += 7040929;
          result[4] += 7040929;
          result[5] += 64776555;
        } else {
          result[0] += 3579139;
          result[1] += 3579139;
          result[2] += 42949672;
          result[3] += 7158278;
          result[4] += 7158278;
          result[5] += 21474836;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x424c0000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 5541893;
          result[1] += 5541893;
          result[2] += 72044612;
          result[3] += 2770946;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 7158278;
          result[1] += 0;
          result[2] += 7158278;
          result[3] += 7158278;
          result[4] += 7158278;
          result[5] += 57266230;
        } else {
          result[0] += 2411209;
          result[1] += 0;
          result[2] += 63897057;
          result[3] += 15672863;
          result[4] += 0;
          result[5] += 3918215;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 83492137;
          result[3] += 2280513;
          result[4] += 0;
          result[5] += 126695;
        } else {
          result[0] += 18084072;
          result[1] += 0;
          result[2] += 67815273;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 681740;
          result[1] += 340870;
          result[2] += 0;
          result[3] += 0;
          result[4] += 79422807;
          result[5] += 5453926;
        } else {
          result[0] += 0;
          result[1] += 40086361;
          result[2] += 0;
          result[3] += 22906492;
          result[4] += 11453246;
          result[5] += 11453246;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 119636;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2033828;
          result[4] += 5503300;
          result[5] += 78242579;
        } else {
          result[0] += 8158898;
          result[1] += 461824;
          result[2] += 307882;
          result[3] += 27401583;
          result[4] += 5541893;
          result[5] += 44027263;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 36022306;
          result[2] += 0;
          result[3] += 0;
          result[4] += 45720619;
          result[5] += 4156419;
        } else {
          result[0] += 185929;
          result[1] += 84411911;
          result[2] += 185929;
          result[3] += 0;
          result[4] += 1115575;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42df0000))) ) ) {
          result[0] += 43259220;
          result[1] += 3946726;
          result[2] += 9363802;
          result[3] += 9905510;
          result[4] += 11143698;
          result[5] += 8280387;
        } else {
          result[0] += 81331799;
          result[1] += 147340;
          result[2] += 2357443;
          result[3] += 0;
          result[4] += 1620742;
          result[5] += 442020;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 1997659;
          result[2] += 3995318;
          result[3] += 7990636;
          result[4] += 15981273;
          result[5] += 55934457;
        } else {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 59240928;
          result[4] += 0;
          result[5] += 26658417;
        } else {
          result[0] += 3482405;
          result[1] += 0;
          result[2] += 45851677;
          result[3] += 26118044;
          result[4] += 2321603;
          result[5] += 8125613;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 62992853;
          result[3] += 20043180;
          result[4] += 0;
          result[5] += 2863311;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 538891;
          result[1] += 0;
          result[2] += 81480433;
          result[3] += 3880020;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 292174;
          result[1] += 1460873;
          result[2] += 0;
          result[3] += 0;
          result[4] += 82101075;
          result[5] += 2045222;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 33521695;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52377649;
          result[5] += 0;
        } else {
          result[0] += 190042;
          result[1] += 84949131;
          result[2] += 0;
          result[3] += 0;
          result[4] += 760171;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1391887;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3777980;
          result[4] += 4871606;
          result[5] += 75857871;
        } else {
          result[0] += 10405333;
          result[1] += 5091971;
          result[2] += 2656680;
          result[3] += 30773219;
          result[4] += 2878070;
          result[5] += 34094070;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 72321707;
          result[1] += 1454746;
          result[2] += 554189;
          result[3] += 3117314;
          result[4] += 6580998;
          result[5] += 1870388;
        } else {
          result[0] += 11382107;
          result[1] += 1600608;
          result[2] += 23475597;
          result[3] += 18495925;
          result[4] += 5157517;
          result[5] += 25787588;
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11608019;
          result[3] += 0;
          result[4] += 11608019;
          result[5] += 62683306;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 77718455;
          result[3] += 0;
          result[4] += 0;
          result[5] += 8180890;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 63873872;
          result[4] += 0;
          result[5] += 7708915;
        } else {
          result[0] += 10737418;
          result[1] += 0;
          result[2] += 64424509;
          result[3] += 10737418;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 16106127;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 16106127;
          result[5] += 0;
        } else {
          result[0] += 10737418;
          result[1] += 0;
          result[2] += 17895697;
          result[3] += 0;
          result[4] += 3579139;
          result[5] += 53687091;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9544371;
          result[3] += 47721858;
          result[4] += 0;
          result[5] += 28633115;
        } else {
          result[0] += 509486;
          result[1] += 0;
          result[2] += 80600691;
          result[3] += 4279682;
          result[4] += 0;
          result[5] += 509486;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_4/test_data.csv", "r");
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
