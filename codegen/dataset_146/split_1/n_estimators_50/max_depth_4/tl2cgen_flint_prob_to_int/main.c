
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
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
          result[0] += 6607641;
          result[1] += 2434394;
          result[2] += 0;
          result[3] += 0;
          result[4] += 73031832;
          result[5] += 3825476;
        } else {
          result[0] += 0;
          result[1] += 16625679;
          result[2] += 0;
          result[3] += 0;
          result[4] += 27709466;
          result[5] += 41564199;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2298714;
          result[4] += 3024624;
          result[5] += 80576006;
        } else {
          result[0] += 223696;
          result[1] += 2684354;
          result[2] += 3131746;
          result[3] += 29080507;
          result[4] += 6934582;
          result[5] += 43844457;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 13929623;
          result[2] += 0;
          result[3] += 0;
          result[4] += 71195854;
          result[5] += 773867;
        } else {
          result[0] += 0;
          result[1] += 82568554;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3330790;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 70256334;
          result[1] += 1234974;
          result[2] += 686097;
          result[3] += 2469949;
          result[4] += 7066799;
          result[5] += 4185191;
        } else {
          result[0] += 11172409;
          result[1] += 2564159;
          result[2] += 13003952;
          result[3] += 27473138;
          result[4] += 6410398;
          result[5] += 25275287;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42900000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 15748213;
          result[3] += 60129542;
          result[4] += 0;
          result[5] += 10021590;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42e40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 59822758;
          result[3] += 18407002;
          result[4] += 0;
          result[5] += 7669584;
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32212254;
          result[3] += 48318382;
          result[4] += 0;
          result[5] += 5368709;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 65980656;
          result[3] += 8714426;
          result[4] += 0;
          result[5] += 11204262;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 0;
          result[4] += 0;
          result[5] += 57266230;
        } else {
          result[0] += 981706;
          result[1] += 0;
          result[2] += 81383494;
          result[3] += 3337803;
          result[4] += 0;
          result[5] += 196341;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 314649;
          result[2] += 0;
          result[3] += 0;
          result[4] += 83696798;
          result[5] += 1887897;
        } else {
          result[0] += 0;
          result[1] += 49557314;
          result[2] += 0;
          result[3] += 0;
          result[4] += 33038209;
          result[5] += 3303820;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42870000))) ) ) {
          result[0] += 100232;
          result[1] += 100232;
          result[2] += 801860;
          result[3] += 4710932;
          result[4] += 3608373;
          result[5] += 76577713;
        } else {
          result[0] += 11052511;
          result[1] += 775614;
          result[2] += 775614;
          result[3] += 36066091;
          result[4] += 9695185;
          result[5] += 27534327;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 64392409;
          result[1] += 5713783;
          result[2] += 256799;
          result[3] += 1476595;
          result[4] += 10464569;
          result[5] += 3595189;
        } else {
          result[0] += 9195491;
          result[1] += 1121401;
          result[2] += 20185224;
          result[3] += 25792231;
          result[4] += 5158446;
          result[5] += 24446550;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 212622;
          result[1] += 85048857;
          result[2] += 0;
          result[3] += 0;
          result[4] += 637866;
          result[5] += 0;
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0;
          result[1] += 40689163;
          result[2] += 18084072;
          result[3] += 9042036;
          result[4] += 13563054;
          result[5] += 4521018;
        } else {
          result[0] += 3181457;
          result[1] += 3181457;
          result[2] += 6362914;
          result[3] += 24391172;
          result[4] += 3181457;
          result[5] += 45600887;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 7074063;
          result[1] += 0;
          result[2] += 49518446;
          result[3] += 21222191;
          result[4] += 0;
          result[5] += 8084644;
        } else {
          result[0] += 71582788;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 16625679;
          result[3] += 38793252;
          result[4] += 0;
          result[5] += 30480413;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 68719476;
          result[3] += 14725602;
          result[4] += 0;
          result[5] += 2454267;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 3775795;
          result[1] += 0;
          result[2] += 64660496;
          result[3] += 14159232;
          result[4] += 0;
          result[5] += 3303820;
        } else {
          result[0] += 132765;
          result[1] += 0;
          result[2] += 82712971;
          result[3] += 3053608;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
          result[0] += 663315;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 81919453;
          result[5] += 3316577;
        } else {
          result[0] += 0;
          result[1] += 1385473;
          result[2] += 1385473;
          result[3] += 16625679;
          result[4] += 29094939;
          result[5] += 37407779;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 3389589;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3211190;
          result[4] += 4905985;
          result[5] += 74392579;
        } else {
          result[0] += 6946038;
          result[1] += 1157673;
          result[2] += 463069;
          result[3] += 41676232;
          result[4] += 4399157;
          result[5] += 31257174;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 63731772;
          result[2] += 0;
          result[3] += 0;
          result[4] += 22167573;
          result[5] += 0;
        } else {
          result[0] += 198381;
          result[1] += 85700964;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
          result[0] += 67234147;
          result[1] += 3614739;
          result[2] += 131445;
          result[3] += 2957513;
          result[4] += 9595489;
          result[5] += 2366011;
        } else {
          result[0] += 13915158;
          result[1] += 535198;
          result[2] += 29703512;
          result[3] += 21407936;
          result[4] += 5887182;
          result[5] += 14450357;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 37743651;
          result[4] += 0;
          result[5] += 48155693;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 71582788;
          result[3] += 14316557;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 81378327;
          result[3] += 0;
          result[4] += 0;
          result[5] += 4521018;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 22906492;
          result[1] += 5726623;
          result[2] += 17179869;
          result[3] += 11453246;
          result[4] += 0;
          result[5] += 28633115;
        } else {
          result[0] += 731058;
          result[1] += 0;
          result[2] += 67988418;
          result[3] += 14621165;
          result[4] += 731058;
          result[5] += 1827645;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42e00000))) ) ) {
          result[0] += 351087;
          result[1] += 0;
          result[2] += 82856589;
          result[3] += 2457610;
          result[4] += 0;
          result[5] += 234058;
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
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 456911;
          result[2] += 0;
          result[3] += 0;
          result[4] += 83157877;
          result[5] += 2284557;
        } else {
          result[0] += 17179869;
          result[1] += 5726623;
          result[2] += 0;
          result[3] += 0;
          result[4] += 35505062;
          result[5] += 27487790;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 2701237;
          result[2] += 0;
          result[3] += 3781732;
          result[4] += 4502062;
          result[5] += 74914314;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4693953;
          result[3] += 55388649;
          result[4] += 0;
          result[5] += 25816743;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 20043180;
          result[2] += 0;
          result[3] += 0;
          result[4] += 65856165;
          result[5] += 0;
        } else {
          result[0] += 200699;
          result[1] += 85698646;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 61423915;
          result[1] += 1529714;
          result[2] += 706022;
          result[3] += 4353802;
          result[4] += 12061209;
          result[5] += 5824681;
        } else {
          result[0] += 14555736;
          result[1] += 1435072;
          result[2] += 16810850;
          result[3] += 28291431;
          result[4] += 4715238;
          result[5] += 20091016;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 51539607;
          result[3] += 0;
          result[4] += 0;
          result[5] += 34359738;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6781527;
          result[3] += 70075782;
          result[4] += 0;
          result[5] += 9042036;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11012736;
          result[3] += 19822925;
          result[4] += 0;
          result[5] += 55063683;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 68719476;
          result[3] += 5726623;
          result[4] += 0;
          result[5] += 11453246;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32582510;
          result[3] += 50354788;
          result[4] += 0;
          result[5] += 2962046;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 68329025;
          result[3] += 13665805;
          result[4] += 0;
          result[5] += 3904515;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0;
          result[1] += 71582788;
          result[2] += 0;
          result[3] += 0;
          result[4] += 14316557;
          result[5] += 0;
        } else {
          result[0] += 662219;
          result[1] += 0;
          result[2] += 80885397;
          result[3] += 3500303;
          result[4] += 0;
          result[5] += 851425;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 641039;
          result[1] += 2243639;
          result[2] += 0;
          result[3] += 0;
          result[4] += 79809466;
          result[5] += 3205199;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 12884901;
          result[4] += 21474836;
          result[5] += 51539607;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 123418;
          result[1] += 0;
          result[2] += 246837;
          result[3] += 2344953;
          result[4] += 2838627;
          result[5] += 80345508;
        } else {
          result[0] += 7235249;
          result[1] += 2924888;
          result[2] += 1077590;
          result[3] += 28633115;
          result[4] += 7235249;
          result[5] += 38793252;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 5368709;
          result[2] += 0;
          result[3] += 0;
          result[4] += 80530636;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 84443424;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1455921;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42890000))) ) ) {
          result[0] += 6524000;
          result[1] += 14679002;
          result[2] += 543666;
          result[3] += 0;
          result[4] += 60347008;
          result[5] += 3805667;
        } else {
          result[0] += 58512742;
          result[1] += 879890;
          result[2] += 5059372;
          result[3] += 7149113;
          result[4] += 6819154;
          result[5] += 7479072;
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 3161939;
          result[2] += 23714543;
          result[3] += 42159188;
          result[4] += 526989;
          result[5] += 16336685;
        } else {
          result[0] += 4190211;
          result[1] += 0;
          result[2] += 69138497;
          result[3] += 8380423;
          result[4] += 2095105;
          result[5] += 2095105;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42780000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 0;
          result[4] += 0;
          result[5] += 64424509;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 79240481;
          result[3] += 3995318;
          result[4] += 0;
          result[5] += 2663545;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 80172722;
          result[1] += 0;
          result[2] += 0;
          result[3] += 5726623;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 28633115;
          result[1] += 0;
          result[2] += 57266230;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 50107951;
          result[3] += 7158278;
          result[4] += 0;
          result[5] += 28633115;
        } else {
          result[0] += 231847;
          result[1] += 0;
          result[2] += 83117180;
          result[3] += 2086623;
          result[4] += 0;
          result[5] += 463694;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 359411;
          result[2] += 0;
          result[3] += 718822;
          result[4] += 83024053;
          result[5] += 1797057;
        } else {
          result[0] += 0;
          result[1] += 7158278;
          result[2] += 0;
          result[3] += 14316557;
          result[4] += 25053975;
          result[5] += 39370533;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 216098;
          result[1] += 0;
          result[2] += 108049;
          result[3] += 2377088;
          result[4] += 4213930;
          result[5] += 78984178;
        } else {
          result[0] += 6950362;
          result[1] += 0;
          result[2] += 356428;
          result[3] += 31900379;
          result[4] += 8910720;
          result[5] += 37781455;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 27126109;
          result[2] += 0;
          result[3] += 22605091;
          result[4] += 36168145;
          result[5] += 0;
        } else {
          result[0] += 1193046;
          result[1] += 83513252;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1193046;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
          result[0] += 1802084;
          result[1] += 24628483;
          result[2] += 3003473;
          result[3] += 0;
          result[4] += 56465304;
          result[5] += 0;
        } else {
          result[0] += 56867541;
          result[1] += 1902833;
          result[2] += 5762867;
          result[3] += 9024867;
          result[4] += 4838634;
          result[5] += 7502601;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12271335;
          result[3] += 0;
          result[4] += 0;
          result[5] += 73628010;
        } else {
          result[0] += 2337397;
          result[1] += 0;
          result[2] += 29217464;
          result[3] += 43241847;
          result[4] += 584349;
          result[5] += 10518287;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 57266230;
          result[3] += 25769803;
          result[4] += 0;
          result[5] += 2863311;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 82717888;
          result[3] += 3181457;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42960000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        } else {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 12993178;
          result[1] += 721843;
          result[2] += 60634832;
          result[3] += 7940275;
          result[4] += 0;
          result[5] += 3609216;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 82508582;
          result[3] += 2825636;
          result[4] += 0;
          result[5] += 565127;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x422c0000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 9544371;
          result[2] += 0;
          result[3] += 0;
          result[4] += 76354974;
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
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 2243639;
          result[1] += 961559;
          result[2] += 0;
          result[3] += 320519;
          result[4] += 74681147;
          result[5] += 7692478;
        } else {
          result[0] += 2145695;
          result[1] += 71523;
          result[2] += 286092;
          result[3] += 13160266;
          result[4] += 3147020;
          result[5] += 67088748;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
          result[0] += 4468752;
          result[1] += 27805568;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52631969;
          result[5] += 993056;
        } else {
          result[0] += 56974055;
          result[1] += 1643482;
          result[2] += 5806971;
          result[3] += 8381760;
          result[4] += 6026102;
          result[5] += 7066974;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 10105805;
          result[4] += 2526451;
          result[5] += 73267089;
        } else {
          result[0] += 0;
          result[1] += 8765239;
          result[2] += 14024383;
          result[3] += 32431385;
          result[4] += 4382619;
          result[5] += 26295718;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 19822925;
          result[3] += 52861135;
          result[4] += 0;
          result[5] += 13215283;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 56949842;
          result[3] += 25627429;
          result[4] += 0;
          result[5] += 3322074;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 85899345;
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 736881;
          result[1] += 0;
          result[2] += 81372787;
          result[3] += 3684408;
          result[4] += 0;
          result[5] += 105268;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42850000))) ) ) {
          result[0] += 1487434;
          result[1] += 371858;
          result[2] += 0;
          result[3] += 0;
          result[4] += 80321466;
          result[5] += 3718586;
        } else {
          result[0] += 62202974;
          result[1] += 5924092;
          result[2] += 0;
          result[3] += 0;
          result[4] += 11848185;
          result[5] += 5924092;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 187348;
          result[1] += 0;
          result[2] += 93674;
          result[3] += 4402692;
          result[4] += 6463527;
          result[5] += 74752102;
        } else {
          result[0] += 580400;
          result[1] += 6577877;
          result[2] += 2708537;
          result[3] += 36371795;
          result[4] += 4062806;
          result[5] += 35597927;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 2147483;
          result[1] += 52613349;
          result[2] += 3221225;
          result[3] += 0;
          result[4] += 27917287;
          result[5] += 0;
        } else {
          result[0] += 211054;
          result[1] += 85688290;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 66293419;
          result[1] += 3314670;
          result[2] += 0;
          result[3] += 2256797;
          result[4] += 11848185;
          result[5] += 2186272;
        } else {
          result[0] += 19685266;
          result[1] += 1118481;
          result[2] += 22145925;
          result[3] += 23711798;
          result[4] += 2908050;
          result[5] += 16329823;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 2454267;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4908534;
          result[4] += 14725602;
          result[5] += 63810942;
        } else {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 1342177;
          result[1] += 0;
          result[2] += 20132659;
          result[3] += 56371445;
          result[4] += 0;
          result[5] += 8053063;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 60519993;
          result[3] += 11713547;
          result[4] += 0;
          result[5] += 13665805;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42eb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 60928605;
          result[3] += 21974251;
          result[4] += 0;
          result[5] += 2996488;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 25264513;
          result[1] += 0;
          result[2] += 50529027;
          result[3] += 5052902;
          result[4] += 0;
          result[5] += 5052902;
        } else {
          result[0] += 107374;
          result[1] += 0;
          result[2] += 82463372;
          result[3] += 3221225;
          result[4] += 0;
          result[5] += 107374;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 368666;
          result[1] += 368666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 82581345;
          result[5] += 2580667;
        } else {
          result[0] += 6693455;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 61356675;
          result[5] += 17849214;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1848343;
          result[1] += 389125;
          result[2] += 0;
          result[3] += 3210281;
          result[4] += 3696687;
          result[5] += 76754908;
        } else {
          result[0] += 6297606;
          result[1] += 251904;
          result[2] += 0;
          result[3] += 42823720;
          result[4] += 1511425;
          result[5] += 35014689;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 4561027;
          result[1] += 23565307;
          result[2] += 2280513;
          result[3] += 1520342;
          result[4] += 53211984;
          result[5] += 760171;
        } else {
          result[0] += 410020;
          result[1] += 84464273;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1025051;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 73213788;
          result[1] += 2754578;
          result[2] += 289955;
          result[3] += 2464622;
          result[4] += 6089067;
          result[5] += 1087333;
        } else {
          result[0] += 11215344;
          result[1] += 1274471;
          result[2] += 25489420;
          result[3] += 21411112;
          result[4] += 6882143;
          result[5] += 19626853;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 9544371;
          result[4] += 10737418;
          result[5] += 65617555;
        } else {
          result[0] += 4481705;
          result[1] += 3734754;
          result[2] += 17179869;
          result[3] += 41082295;
          result[4] += 2987803;
          result[5] += 16432918;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e50000))) ) ) {
          result[0] += 5188551;
          result[1] += 2306022;
          result[2] += 54768039;
          result[3] += 17871675;
          result[4] += 1153011;
          result[5] += 4612045;
        } else {
          result[0] += 62038416;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 0;
          result[4] += 2386092;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32797932;
          result[3] += 35921544;
          result[4] += 0;
          result[5] += 17179869;
        } else {
          result[0] += 2603010;
          result[1] += 0;
          result[2] += 80693324;
          result[3] += 2603010;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 70281283;
          result[3] += 15618062;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 237619;
          result[1] += 0;
          result[2] += 82929105;
          result[3] += 2732620;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 388684;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85510661;
          result[5] += 0;
        } else {
          result[0] += 6442450;
          result[1] += 4294967;
          result[2] += 0;
          result[3] += 10737418;
          result[4] += 15032385;
          result[5] += 49392123;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 228759;
          result[2] += 0;
          result[3] += 1830079;
          result[4] += 3660158;
          result[5] += 80180348;
        } else {
          result[0] += 7743847;
          result[1] += 430213;
          result[2] += 573618;
          result[3] += 30688581;
          result[4] += 6883420;
          result[5] += 39579665;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 0;
          result[1] += 85109466;
          result[2] += 0;
          result[3] += 0;
          result[4] += 789879;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 31236125;
          result[2] += 0;
          result[3] += 0;
          result[4] += 54663220;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 66547629;
          result[1] += 2784419;
          result[2] += 139220;
          result[3] += 2854030;
          result[4] += 11137678;
          result[5] += 2436367;
        } else {
          result[0] += 16473847;
          result[1] += 6864102;
          result[2] += 16866081;
          result[3] += 19807840;
          result[4] += 4510696;
          result[5] += 21376777;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14081859;
          result[3] += 63368369;
          result[4] += 0;
          result[5] += 8449115;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 51539607;
          result[4] += 0;
          result[5] += 12884901;
        } else {
          result[0] += 3482405;
          result[1] += 0;
          result[2] += 61522504;
          result[3] += 9286415;
          result[4] += 2321603;
          result[5] += 9286415;
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 734182;
          result[1] += 0;
          result[2] += 55063683;
          result[3] += 24962203;
          result[4] += 0;
          result[5] += 5139277;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 79347700;
          result[3] += 4367763;
          result[4] += 0;
          result[5] += 2183881;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 0;
          result[4] += 0;
          result[5] += 57266230;
        } else {
          result[0] += 1599844;
          result[1] += 0;
          result[2] += 81469007;
          result[3] += 2707429;
          result[4] += 0;
          result[5] += 123064;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 6135667;
          result[2] += 0;
          result[3] += 0;
          result[4] += 78149028;
          result[5] += 1614649;
        } else {
          result[0] += 34674965;
          result[1] += 2364202;
          result[2] += 0;
          result[3] += 6304539;
          result[4] += 16549415;
          result[5] += 26006223;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 256033;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1792236;
          result[4] += 1792236;
          result[5] += 82058838;
        } else {
          result[0] += 894784;
          result[1] += 536870;
          result[2] += 715827;
          result[3] += 32928082;
          result[4] += 7516192;
          result[5] += 43307586;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42420000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 21474836;
          result[2] += 0;
          result[3] += 0;
          result[4] += 64424509;
          result[5] += 0;
        } else {
          result[0] += 768674;
          result[1] += 83977660;
          result[2] += 0;
          result[3] += 768674;
          result[4] += 384337;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 66635877;
          result[1] += 4258930;
          result[2] += 65522;
          result[3] += 1048352;
          result[4] += 10811130;
          result[5] += 3079534;
        } else {
          result[0] += 12802306;
          result[1] += 0;
          result[2] += 22300791;
          result[3] += 24985146;
          result[4] += 3097332;
          result[5] += 22713769;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 76354974;
          result[2] += 0;
          result[3] += 9544371;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 17620378;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2202547;
          result[4] += 6607641;
          result[5] += 59468777;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6607641;
          result[3] += 23126746;
          result[4] += 0;
          result[5] += 56164956;
        } else {
          result[0] += 1176703;
          result[1] += 0;
          result[2] += 36477804;
          result[3] += 40007914;
          result[4] += 0;
          result[5] += 8236923;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 1677721;
          result[1] += 0;
          result[2] += 64424509;
          result[3] += 16106127;
          result[4] += 0;
          result[5] += 3690987;
        } else {
          result[0] += 33612787;
          result[1] += 0;
          result[2] += 50419181;
          result[3] += 1867377;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 69340435;
          result[3] += 12419182;
          result[4] += 0;
          result[5] += 4139727;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 83407385;
          result[3] += 2491960;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85399931;
          result[5] += 499414;
        } else {
          result[0] += 0;
          result[1] += 5651272;
          result[2] += 0;
          result[3] += 13563054;
          result[4] += 49731200;
          result[5] += 16953818;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 3817748;
          result[1] += 397682;
          result[2] += 79536;
          result[3] += 4931258;
          result[4] += 4613113;
          result[5] += 72060006;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 55634291;
          result[4] += 0;
          result[5] += 30265054;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 41468649;
          result[2] += 0;
          result[3] += 0;
          result[4] += 44430696;
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
          result[0] += 62674937;
          result[1] += 2910792;
          result[2] += 928976;
          result[3] += 2601133;
          result[4] += 12881805;
          result[5] += 3901700;
        } else {
          result[0] += 9053117;
          result[1] += 631612;
          result[2] += 26106663;
          result[3] += 27580427;
          result[4] += 7368816;
          result[5] += 15158708;
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2603010;
          result[3] += 7809031;
          result[4] += 0;
          result[5] += 75487303;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 61356675;
          result[3] += 0;
          result[4] += 0;
          result[5] += 24542670;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5541893;
          result[3] += 47106092;
          result[4] += 0;
          result[5] += 33251359;
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
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428e0000))) ) ) {
          result[0] += 30064771;
          result[1] += 47244640;
          result[2] += 0;
          result[3] += 8589934;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1197203;
          result[1] += 0;
          result[2] += 62553879;
          result[3] += 18257352;
          result[4] += 0;
          result[5] += 3890911;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42960000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 253764;
          result[1] += 0;
          result[2] += 82600404;
          result[3] += 2664529;
          result[4] += 0;
          result[5] += 380647;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 368666;
          result[1] += 1106000;
          result[2] += 0;
          result[3] += 0;
          result[4] += 81844011;
          result[5] += 2580667;
        } else {
          result[0] += 33541649;
          result[1] += 2454267;
          result[2] += 0;
          result[3] += 6544712;
          result[4] += 17179869;
          result[5] += 26178848;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 373881;
          result[1] += 280411;
          result[2] += 93470;
          result[3] += 6636402;
          result[4] += 5047404;
          result[5] += 73467775;
        } else {
          result[0] += 0;
          result[1] += 373475;
          result[2] += 0;
          result[3] += 47057902;
          result[4] += 373475;
          result[5] += 38094492;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
          result[0] += 60700549;
          result[1] += 6206600;
          result[2] += 62066;
          result[3] += 2296442;
          result[4] += 13530388;
          result[5] += 3103300;
        } else {
          result[0] += 21280200;
          result[1] += 3633204;
          result[2] += 14273305;
          result[3] += 23356317;
          result[4] += 5190292;
          result[5] += 18166024;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 207486;
          result[1] += 84861914;
          result[2] += 207486;
          result[3] += 414972;
          result[4] += 207486;
          result[5] += 0;
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 8589934;
          result[4] += 0;
          result[5] += 77309411;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 22167573;
          result[3] += 50985418;
          result[4] += 0;
          result[5] += 12746354;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42df0000))) ) ) {
          result[0] += 795364;
          result[1] += 0;
          result[2] += 55675501;
          result[3] += 14316557;
          result[4] += 0;
          result[5] += 15111921;
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
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 0;
          result[4] += 0;
          result[5] += 75161927;
        } else {
          result[0] += 1321528;
          result[1] += 0;
          result[2] += 52861135;
          result[3] += 27752096;
          result[4] += 1321528;
          result[5] += 2643056;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 2024563;
          result[1] += 0;
          result[2] += 70859729;
          result[3] += 9833595;
          result[4] += 289223;
          result[5] += 2892233;
        } else {
          result[0] += 318735;
          result[1] += 0;
          result[2] += 84305666;
          result[3] += 956207;
          result[4] += 0;
          result[5] += 318735;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 1316465;
          result[1] += 0;
          result[2] += 658232;
          result[3] += 0;
          result[4] += 71089113;
          result[5] += 12835534;
        } else {
          result[0] += 41335023;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 43918462;
          result[5] += 645859;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 101177;
          result[2] += 0;
          result[3] += 2934135;
          result[4] += 5160031;
          result[5] += 77704001;
        } else {
          result[0] += 540247;
          result[1] += 1260577;
          result[2] += 720329;
          result[3] += 38357569;
          result[4] += 2881319;
          result[5] += 42139301;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 18721652;
          result[2] += 2202547;
          result[3] += 0;
          result[4] += 64975146;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 83159959;
          result[2] += 0;
          result[3] += 782681;
          result[4] += 1956704;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 69994774;
          result[1] += 3664647;
          result[2] += 879515;
          result[3] += 3151597;
          result[4] += 7109416;
          result[5] += 1099394;
        } else {
          result[0] += 16169288;
          result[1] += 2779096;
          result[2] += 19706320;
          result[3] += 23495997;
          result[4] += 4800257;
          result[5] += 18948385;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11608019;
          result[3] += 48753682;
          result[4] += 0;
          result[5] += 25537643;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 57266230;
          result[3] += 5726623;
          result[4] += 5726623;
          result[5] += 17179869;
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
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11453246;
          result[3] += 62992853;
          result[4] += 0;
          result[5] += 11453246;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 63854381;
          result[3] += 15203424;
          result[4] += 0;
          result[5] += 6841540;
        } else {
          result[0] += 682514;
          result[1] += 0;
          result[2] += 81609253;
          result[3] += 3510075;
          result[4] += 0;
          result[5] += 97502;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 734182;
          result[1] += 367091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 82962616;
          result[5] += 1835456;
        } else {
          result[0] += 0;
          result[1] += 5726623;
          result[2] += 0;
          result[3] += 17179869;
          result[4] += 34359738;
          result[5] += 28633115;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42870000))) ) ) {
          result[0] += 318933;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2232532;
          result[4] += 3933509;
          result[5] += 79414370;
        } else {
          result[0] += 10018037;
          result[1] += 639449;
          result[2] += 0;
          result[3] += 31546161;
          result[4] += 4476144;
          result[5] += 39219552;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 62868361;
          result[1] += 5975606;
          result[2] += 62245;
          result[3] += 2676573;
          result[4] += 12200196;
          result[5] += 2116360;
        } else {
          result[0] += 7683657;
          result[1] += 591050;
          result[2] += 29946560;
          result[3] += 25218156;
          result[4] += 2167185;
          result[5] += 20292735;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42600000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 2863311;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 5726623;
          result[4] += 28633115;
          result[5] += 5726623;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3904515;
          result[3] += 0;
          result[4] += 3904515;
          result[5] += 78090314;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9857301;
          result[3] += 35204649;
          result[4] += 2816371;
          result[5] += 38021021;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 13854733;
          result[1] += 36022306;
          result[2] += 11083786;
          result[3] += 5541893;
          result[4] += 0;
          result[5] += 19396626;
        } else {
          result[0] += 6991807;
          result[1] += 998829;
          result[2] += 62926265;
          result[3] += 12984784;
          result[4] += 0;
          result[5] += 1997659;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 50980912;
          result[3] += 27934746;
          result[4] += 0;
          result[5] += 6983686;
        } else {
          result[0] += 933688;
          result[1] += 0;
          result[2] += 77496149;
          result[3] += 7469508;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 671088;
          result[1] += 0;
          result[2] += 71806484;
          result[3] += 12750684;
          result[4] += 0;
          result[5] += 671088;
        } else {
          result[0] += 148614;
          result[1] += 0;
          result[2] += 83818738;
          result[3] += 1337533;
          result[4] += 0;
          result[5] += 594459;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 795364;
          result[1] += 5169868;
          result[2] += 0;
          result[3] += 0;
          result[4] += 78343384;
          result[5] += 1590728;
        } else {
          result[0] += 37443304;
          result[1] += 4405094;
          result[2] += 0;
          result[3] += 2936729;
          result[4] += 22025473;
          result[5] += 19088743;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3463683;
          result[4] += 4948119;
          result[5] += 77487543;
        } else {
          result[0] += 1311440;
          result[1] += 1092866;
          result[2] += 1311440;
          result[3] += 40873225;
          result[4] += 2185733;
          result[5] += 39124638;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 14621165;
          result[2] += 0;
          result[3] += 0;
          result[4] += 71278180;
          result[5] += 0;
        } else {
          result[0] += 354224;
          result[1] += 81117320;
          result[2] += 531336;
          result[3] += 531336;
          result[4] += 2656680;
          result[5] += 708448;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
          result[0] += 9980006;
          result[1] += 0;
          result[2] += 712857;
          result[3] += 17821441;
          result[4] += 17465012;
          result[5] += 39920027;
        } else {
          result[0] += 60996529;
          result[1] += 3135910;
          result[2] += 4796098;
          result[3] += 5964378;
          result[4] += 7501589;
          result[5] += 3504840;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34465786;
          result[3] += 43479915;
          result[4] += 0;
          result[5] += 7953643;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 59468777;
          result[3] += 14536812;
          result[4] += 0;
          result[5] += 11893755;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32212254;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 5206020;
          result[1] += 0;
          result[2] += 72884293;
          result[3] += 6767827;
          result[4] += 1041204;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        } else {
          result[0] += 19088743;
          result[1] += 0;
          result[2] += 57266230;
          result[3] += 0;
          result[4] += 0;
          result[5] += 9544371;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 814211;
          result[1] += 0;
          result[2] += 80199863;
          result[3] += 4885270;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85703675;
          result[3] += 195670;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42340000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 2673909;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 78880333;
          result[5] += 4345103;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3758787;
          result[4] += 1547735;
          result[5] += 80592822;
        } else {
          result[0] += 6935972;
          result[1] += 1956299;
          result[2] += 1244918;
          result[3] += 30589415;
          result[4] += 8892271;
          result[5] += 36280469;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 802797;
          result[1] += 22478333;
          result[2] += 0;
          result[3] += 4816785;
          result[4] += 57801429;
          result[5] += 0;
        } else {
          result[0] += 775614;
          result[1] += 84542019;
          result[2] += 0;
          result[3] += 0;
          result[4] += 581711;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 72489213;
          result[1] += 2905528;
          result[2] += 372503;
          result[3] += 1788017;
          result[4] += 6407063;
          result[5] += 1937019;
        } else {
          result[0] += 7877232;
          result[1] += 937765;
          result[2] += 20255740;
          result[3] += 24194357;
          result[4] += 5814147;
          result[5] += 26820101;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 1997659;
          result[1] += 5992977;
          result[2] += 0;
          result[3] += 5992977;
          result[4] += 11985955;
          result[5] += 59929776;
        } else {
          result[0] += 833974;
          result[1] += 0;
          result[2] += 25019226;
          result[3] += 54208325;
          result[4] += 0;
          result[5] += 5837819;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 4706813;
          result[1] += 10590330;
          result[2] += 32947694;
          result[3] += 15297143;
          result[4] += 0;
          result[5] += 22357364;
        } else {
          result[0] += 4544938;
          result[1] += 454493;
          result[2] += 69083071;
          result[3] += 9998865;
          result[4] += 0;
          result[5] += 1817975;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 64424509;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 73491662;
          result[3] += 10498808;
          result[4] += 0;
          result[5] += 1908874;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 807830;
          result[1] += 0;
          result[2] += 82802661;
          result[3] += 2288854;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 399531;
          result[3] += 0;
          result[4] += 84700750;
          result[5] += 799063;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 4908534;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 46631073;
          result[5] += 34359738;
        } else {
          result[0] += 75550027;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 10349318;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 228455;
          result[3] += 3312607;
          result[4] += 2398784;
          result[5] += 79959497;
        } else {
          result[0] += 0;
          result[1] += 1678814;
          result[2] += 0;
          result[3] += 18746762;
          result[4] += 11192097;
          result[5] += 54281671;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1039104;
          result[3] += 63039036;
          result[4] += 346368;
          result[5] += 21474836;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 913822;
          result[1] += 17362633;
          result[2] += 0;
          result[3] += 1827645;
          result[4] += 65795243;
          result[5] += 0;
        } else {
          result[0] += 201641;
          result[1] += 84084570;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1613133;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 74744572;
          result[1] += 2731781;
          result[2] += 75882;
          result[3] += 1214125;
          result[4] += 6450039;
          result[5] += 682945;
        } else {
          result[0] += 29374905;
          result[1] += 4005668;
          result[2] += 12462081;
          result[3] += 19138196;
          result[4] += 7121189;
          result[5] += 13797304;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 4190211;
          result[2] += 10475529;
          result[3] += 34918433;
          result[4] += 698368;
          result[5] += 35616801;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 45184048;
          result[3] += 31777792;
          result[4] += 1986112;
          result[5] += 6951392;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 11384250;
          result[1] += 5692125;
          result[2] += 47606866;
          result[3] += 10866784;
          result[4] += 1552397;
          result[5] += 8796920;
        } else {
          result[0] += 103994;
          result[1] += 0;
          result[2] += 80283650;
          result[3] += 5407707;
          result[4] += 0;
          result[5] += 103994;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 4576604;
          result[2] += 0;
          result[3] += 0;
          result[4] += 81322741;
          result[5] += 0;
        } else {
          result[0] += 5726623;
          result[1] += 7158278;
          result[2] += 0;
          result[3] += 2863311;
          result[4] += 37223049;
          result[5] += 32928082;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 2421974;
          result[1] += 80732;
          result[2] += 0;
          result[3] += 7669584;
          result[4] += 4924680;
          result[5] += 70802374;
        } else {
          result[0] += 2397191;
          result[1] += 0;
          result[2] += 1997659;
          result[3] += 60329308;
          result[4] += 0;
          result[5] += 21175187;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 22408525;
          result[2] += 3734754;
          result[3] += 14939016;
          result[4] += 44817050;
          result[5] += 0;
        } else {
          result[0] += 1448904;
          result[1] += 83208523;
          result[2] += 620959;
          result[3] += 206986;
          result[4] += 413972;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 64855997;
          result[1] += 4115733;
          result[2] += 1526804;
          result[3] += 1991484;
          result[4] += 8231467;
          result[5] += 5177858;
        } else {
          result[0] += 9194119;
          result[1] += 788067;
          result[2] += 19964373;
          result[3] += 27056980;
          result[4] += 9719497;
          result[5] += 19176306;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4643207;
          result[3] += 53396890;
          result[4] += 0;
          result[5] += 27859247;
        } else {
          result[0] += 0;
          result[1] += 6135667;
          result[2] += 18407002;
          result[3] += 3067833;
          result[4] += 3067833;
          result[5] += 55221008;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 10737418;
          result[5] += 21474836;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 59822758;
          result[3] += 23008753;
          result[4] += 0;
          result[5] += 3067833;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 54760833;
          result[3] += 27917287;
          result[4] += 0;
          result[5] += 3221225;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 74335972;
          result[3] += 3303820;
          result[4] += 0;
          result[5] += 8259552;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 1090785;
          result[1] += 0;
          result[2] += 76900366;
          result[3] += 7090104;
          result[4] += 0;
          result[5] += 818089;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 84508888;
          result[3] += 1390457;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 78090314;
          result[2] += 0;
          result[3] += 0;
          result[4] += 7809031;
          result[5] += 0;
        } else {
          result[0] += 1291719;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1614649;
          result[4] += 78794888;
          result[5] += 4198088;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 1450652;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3212158;
          result[4] += 6527935;
          result[5] += 74708598;
        } else {
          result[0] += 8293729;
          result[1] += 1777227;
          result[2] += 3949395;
          result[3] += 31002752;
          result[4] += 4541804;
          result[5] += 36334435;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
          result[0] += 9829278;
          result[1] += 22222716;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50855831;
          result[5] += 2991519;
        } else {
          result[0] += 63270967;
          result[1] += 2022648;
          result[2] += 3160388;
          result[3] += 7016061;
          result[4] += 4234919;
          result[5] += 6194360;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
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
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4443069;
          result[3] += 7405116;
          result[4] += 10367162;
          result[5] += 63683997;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2021161;
          result[3] += 46486704;
          result[4] += 0;
          result[5] += 37391479;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 6964811;
          result[2] += 2321603;
          result[3] += 51075286;
          result[4] += 0;
          result[5] += 25537643;
        } else {
          result[0] += 0;
          result[1] += 3435973;
          result[2] += 48103633;
          result[3] += 29549374;
          result[4] += 0;
          result[5] += 4810363;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42dc0000))) ) ) {
          result[0] += 23126746;
          result[1] += 8259552;
          result[2] += 31386299;
          result[3] += 1651910;
          result[4] += 16519104;
          result[5] += 4955731;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 445074;
          result[1] += 0;
          result[2] += 60085034;
          result[3] += 18693121;
          result[4] += 0;
          result[5] += 6676114;
        } else {
          result[0] += 456911;
          result[1] += 0;
          result[2] += 81901371;
          result[3] += 3426835;
          result[4] += 114227;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
          result[0] += 1120426;
          result[1] += 746950;
          result[2] += 0;
          result[3] += 0;
          result[4] += 79923739;
          result[5] += 4108229;
        } else {
          result[0] += 0;
          result[1] += 976128;
          result[2] += 0;
          result[3] += 6832902;
          result[4] += 58567735;
          result[5] += 19522578;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42620000))) ) ) {
          result[0] += 75987882;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9911462;
          result[5] += 0;
        } else {
          result[0] += 220820;
          result[1] += 588855;
          result[2] += 294427;
          result[3] += 14721396;
          result[4] += 5814951;
          result[5] += 64258893;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 6063483;
          result[1] += 24253932;
          result[2] += 0;
          result[3] += 0;
          result[4] += 55581929;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 84595017;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1304328;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 76989573;
          result[1] += 837670;
          result[2] += 761519;
          result[3] += 1827645;
          result[4] += 3807595;
          result[5] += 1675341;
        } else {
          result[0] += 26143279;
          result[1] += 1244918;
          result[2] += 15353989;
          result[3] += 21578579;
          result[4] += 5394644;
          result[5] += 16183934;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3241484;
          result[3] += 0;
          result[4] += 8103711;
          result[5] += 74554149;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 981706;
          result[2] += 5399387;
          result[3] += 57429848;
          result[4] += 2945120;
          result[5] += 19143282;
        } else {
          result[0] += 4955731;
          result[1] += 6607641;
          result[2] += 28082478;
          result[3] += 14041239;
          result[4] += 3303820;
          result[5] += 28908433;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9544371;
          result[3] += 38177487;
          result[4] += 0;
          result[5] += 38177487;
        } else {
          result[0] += 409044;
          result[1] += 0;
          result[2] += 68719476;
          result[3] += 15952735;
          result[4] += 0;
          result[5] += 818089;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 14316557;
          result[1] += 0;
          result[2] += 35791394;
          result[3] += 14316557;
          result[4] += 7158278;
          result[5] += 14316557;
        } else {
          result[0] += 604924;
          result[1] += 0;
          result[2] += 82269796;
          result[3] += 2782654;
          result[4] += 0;
          result[5] += 241969;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
          result[0] += 363980;
          result[1] += 2547861;
          result[2] += 0;
          result[3] += 0;
          result[4] += 78255760;
          result[5] += 4731743;
        } else {
          result[0] += 48022468;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 18938438;
          result[5] += 18938438;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 187348;
          result[2] += 0;
          result[3] += 4871064;
          result[4] += 4027995;
          result[5] += 76812937;
        } else {
          result[0] += 911398;
          result[1] += 2734196;
          result[2] += 0;
          result[3] += 44430696;
          result[4] += 4329144;
          result[5] += 33493909;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 59468777;
          result[2] += 0;
          result[3] += 0;
          result[4] += 26430567;
          result[5] += 0;
        } else {
          result[0] += 190887;
          result[1] += 85708458;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 64390259;
          result[1] += 4452517;
          result[2] += 1301505;
          result[3] += 2740011;
          result[4] += 10069540;
          result[5] += 2945511;
        } else {
          result[0] += 16361780;
          result[1] += 1924915;
          result[2] += 20452225;
          result[3] += 24061441;
          result[4] += 6255974;
          result[5] += 16843009;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8312839;
          result[3] += 66502719;
          result[4] += 0;
          result[5] += 11083786;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 2962046;
          result[2] += 44430696;
          result[3] += 32582510;
          result[4] += 0;
          result[5] += 5924092;
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
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 10737418;
          result[4] += 0;
          result[5] += 64424509;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 2386092;
          result[1] += 2386092;
          result[2] += 51300998;
          result[3] += 9544371;
          result[4] += 2386092;
          result[5] += 17895697;
        } else {
          result[0] += 597214;
          result[1] += 298607;
          result[2] += 80623951;
          result[3] += 3881893;
          result[4] += 0;
          result[5] += 497678;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 456911;
          result[2] += 0;
          result[3] += 0;
          result[4] += 84528611;
          result[5] += 913822;
        } else {
          result[0] += 4294967;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 61561197;
          result[5] += 20043180;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 2726963;
          result[1] += 2556528;
          result[2] += 0;
          result[3] += 4175662;
          result[4] += 4516533;
          result[5] += 71923658;
        } else {
          result[0] += 1258598;
          result[1] += 943948;
          result[2] += 3461145;
          result[3] += 49399990;
          result[4] += 0;
          result[5] += 30835662;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 19088743;
          result[2] += 0;
          result[3] += 0;
          result[4] += 66810602;
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
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
          result[0] += 7953643;
          result[1] += 6893157;
          result[2] += 1060485;
          result[3] += 4241943;
          result[4] += 62038416;
          result[5] += 3711700;
        } else {
          result[0] += 57841490;
          result[1] += 1948462;
          result[2] += 5734045;
          result[3] += 7125804;
          result[4] += 6179408;
          result[5] += 7070134;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 10412041;
          result[4] += 13015052;
          result[5] += 62472251;
        } else {
          result[0] += 0;
          result[1] += 6028024;
          result[2] += 19591078;
          result[3] += 43703175;
          result[4] += 0;
          result[5] += 16577066;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 734182;
          result[1] += 4405094;
          result[2] += 58000413;
          result[3] += 19088743;
          result[4] += 0;
          result[5] += 3670912;
        } else {
          result[0] += 41160103;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 1789569;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a30000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 1321528;
          result[1] += 0;
          result[2] += 64754891;
          result[3] += 14536812;
          result[4] += 0;
          result[5] += 5286113;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 82595524;
          result[3] += 3303820;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42850000))) ) ) {
          result[0] += 2939521;
          result[1] += 326613;
          result[2] += 0;
          result[3] += 0;
          result[4] += 77734008;
          result[5] += 4899202;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 17179869;
          result[5] += 68719476;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 3047244;
          result[1] += 494147;
          result[2] += 82357;
          result[3] += 4941477;
          result[4] += 3953181;
          result[5] += 73380936;
        } else {
          result[0] += 0;
          result[1] += 356428;
          result[2] += 712857;
          result[3] += 58097897;
          result[4] += 1425715;
          result[5] += 25306446;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 1765055;
          result[1] += 29417584;
          result[2] += 0;
          result[3] += 0;
          result[4] += 54716706;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 84243898;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1655447;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 73495108;
          result[1] += 2403321;
          result[2] += 77526;
          result[3] += 2480847;
          result[4] += 5736959;
          result[5] += 1705582;
        } else {
          result[0] += 15547392;
          result[1] += 1749081;
          result[2] += 13992653;
          result[3] += 25070171;
          result[4] += 5830272;
          result[5] += 23709774;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 795364;
          result[1] += 0;
          result[2] += 22270200;
          result[3] += 54880137;
          result[4] += 0;
          result[5] += 7953643;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 79117818;
          result[3] += 4521018;
          result[4] += 0;
          result[5] += 2260509;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 39645851;
          result[1] += 0;
          result[2] += 19822925;
          result[3] += 26430567;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 73491662;
          result[3] += 9544371;
          result[4] += 0;
          result[5] += 2863311;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 64424509;
          result[4] += 0;
          result[5] += 21474836;
        } else {
          result[0] += 8589934;
          result[1] += 0;
          result[2] += 74446099;
          result[3] += 0;
          result[4] += 0;
          result[5] += 2863311;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 78674167;
          result[3] += 7225178;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 137219;
          result[1] += 0;
          result[2] += 83978274;
          result[3] += 1509413;
          result[4] += 0;
          result[5] += 274438;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42780000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 416987;
          result[2] += 0;
          result[3] += 0;
          result[4] += 83814410;
          result[5] += 1667948;
        } else {
          result[0] += 13563054;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 45210182;
          result[5] += 27126109;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 3103784;
          result[1] += 2097151;
          result[2] += 0;
          result[3] += 4781506;
          result[4] += 6710886;
          result[5] += 69206015;
        } else {
          result[0] += 1997659;
          result[1] += 0;
          result[2] += 499414;
          result[3] += 59430361;
          result[4] += 1498244;
          result[5] += 22473666;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 21474836;
          result[2] += 0;
          result[3] += 0;
          result[4] += 64424509;
          result[5] += 0;
        } else {
          result[0] += 391340;
          result[1] += 85312334;
          result[2] += 0;
          result[3] += 0;
          result[4] += 195670;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 13791179;
          result[1] += 12609078;
          result[2] += 0;
          result[3] += 0;
          result[4] += 56740852;
          result[5] += 2758235;
        } else {
          result[0] += 64816672;
          result[1] += 564714;
          result[2] += 1568651;
          result[3] += 4831446;
          result[4] += 7404034;
          result[5] += 6713827;
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6471868;
          result[3] += 62953630;
          result[4] += 0;
          result[5] += 16473847;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 10737418;
          result[4] += 0;
          result[5] += 32212254;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17895697;
          result[3] += 25053975;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 1493901;
          result[1] += 0;
          result[2] += 66478624;
          result[3] += 14939016;
          result[4] += 0;
          result[5] += 2987803;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42e10000))) ) ) {
          result[0] += 3435973;
          result[1] += 0;
          result[2] += 62133860;
          result[3] += 14316557;
          result[4] += 1145324;
          result[5] += 4867629;
        } else {
          result[0] += 53316835;
          result[1] += 0;
          result[2] += 26658417;
          result[3] += 5924092;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42800000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 516687;
          result[1] += 0;
          result[2] += 83315906;
          result[3] += 1937579;
          result[4] += 0;
          result[5] += 129171;
        }
      }
    }
  }
  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
          result[0] += 0;
          result[1] += 69793218;
          result[2] += 0;
          result[3] += 0;
          result[4] += 16106127;
          result[5] += 0;
        } else {
          result[0] += 2972295;
          result[1] += 1188918;
          result[2] += 0;
          result[3] += 0;
          result[4] += 79954754;
          result[5] += 1783377;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 1533916;
          result[1] += 1533916;
          result[2] += 0;
          result[3] += 0;
          result[4] += 29144420;
          result[5] += 53687091;
        } else {
          result[0] += 78122450;
          result[1] += 1060485;
          result[2] += 0;
          result[3] += 0;
          result[4] += 5655924;
          result[5] += 1060485;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 64424509;
          result[5] += 21474836;
        } else {
          result[0] += 202354;
          result[1] += 505885;
          result[2] += 202354;
          result[3] += 4249437;
          result[4] += 3945906;
          result[5] += 76793408;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42850000))) ) ) {
          result[0] += 23427094;
          result[1] += 17179869;
          result[2] += 0;
          result[3] += 6247225;
          result[4] += 37483350;
          result[5] += 1561806;
        } else {
          result[0] += 450521;
          result[1] += 1802084;
          result[2] += 1201389;
          result[3] += 43550367;
          result[4] += 4655384;
          result[5] += 34239599;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42940000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x425c0000))) ) ) {
          result[0] += 186332;
          result[1] += 85526680;
          result[2] += 0;
          result[3] += 0;
          result[4] += 186332;
          result[5] += 0;
        } else {
          result[0] += 2069863;
          result[1] += 34152751;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49676730;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
          result[0] += 0;
          result[1] += 7310582;
          result[2] += 16448810;
          result[3] += 40208204;
          result[4] += 1827645;
          result[5] += 20104102;
        } else {
          result[0] += 75613663;
          result[1] += 92663;
          result[2] += 2131267;
          result[3] += 2872577;
          result[4] += 3150569;
          result[5] += 2038603;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 6167132;
          result[1] += 3083566;
          result[2] += 38764833;
          result[3] += 27752096;
          result[4] += 881018;
          result[5] += 9250698;
        } else {
          result[0] += 66265209;
          result[1] += 0;
          result[2] += 4908534;
          result[3] += 0;
          result[4] += 14725602;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42245579;
          result[3] += 29571905;
          result[4] += 0;
          result[5] += 14081859;
        } else {
          result[0] += 564508;
          result[1] += 0;
          result[2] += 80348347;
          result[3] += 4327896;
          result[4] += 0;
          result[5] += 658593;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 994973;
          result[1] += 663315;
          result[2] += 0;
          result[3] += 0;
          result[4] += 81587795;
          result[5] += 2653261;
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 20089363;
          result[5] += 22860309;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 659636;
          result[2] += 146585;
          result[3] += 8355397;
          result[4] += 5863436;
          result[5] += 70874289;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 63244573;
          result[4] += 0;
          result[5] += 22654772;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 5583457;
          result[1] += 27058293;
          result[2] += 858993;
          result[3] += 1717986;
          result[4] += 47674136;
          result[5] += 3006477;
        } else {
          result[0] += 65792333;
          result[1] += 2256909;
          result[2] += 2530474;
          result[3] += 6565555;
          result[4] += 4171863;
          result[5] += 4582210;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 84185643;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1499489;
          result[5] += 214212;
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
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5286113;
          result[3] += 64754891;
          result[4] += 0;
          result[5] += 15858340;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39645851;
          result[3] += 27531841;
          result[4] += 0;
          result[5] += 18721652;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ef0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 62772598;
          result[3] += 19162161;
          result[4] += 0;
          result[5] += 3964585;
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
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ff0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 63587827;
          result[3] += 12271335;
          result[4] += 0;
          result[5] += 10040183;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 21474836;
          result[1] += 0;
          result[2] += 48318382;
          result[3] += 0;
          result[4] += 10737418;
          result[5] += 5368709;
        } else {
          result[0] += 405663;
          result[1] += 0;
          result[2] += 81944122;
          result[3] += 3448143;
          result[4] += 101415;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 482580;
          result[4] += 83003862;
          result[5] += 2412902;
        } else {
          result[0] += 330382;
          result[1] += 220254;
          result[2] += 0;
          result[3] += 2863311;
          result[4] += 3303820;
          result[5] += 79181576;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 3976821;
          result[2] += 0;
          result[3] += 0;
          result[4] += 78741067;
          result[5] += 3181457;
        } else {
          result[0] += 20196572;
          result[1] += 2045222;
          result[2] += 2556528;
          result[3] += 17640044;
          result[4] += 9970459;
          result[5] += 33490518;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
          result[0] += 0;
          result[1] += 85485373;
          result[2] += 0;
          result[3] += 0;
          result[4] += 413972;
          result[5] += 0;
        } else {
          result[0] += 3123612;
          result[1] += 35140641;
          result[2] += 8589934;
          result[3] += 780903;
          result[4] += 36702447;
          result[5] += 1561806;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 68677979;
          result[1] += 3458105;
          result[2] += 414972;
          result[3] += 4080564;
          result[4] += 6224590;
          result[5] += 3043133;
        } else {
          result[0] += 9741162;
          result[1] += 2656680;
          result[2] += 15644898;
          result[3] += 32175356;
          result[4] += 4427801;
          result[5] += 21253446;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2770946;
          result[3] += 0;
          result[4] += 11083786;
          result[5] += 72044612;
        } else {
          result[0] += 10737418;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 21474836;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9042036;
          result[3] += 72336291;
          result[4] += 0;
          result[5] += 4521018;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 59468777;
          result[3] += 6607641;
          result[4] += 0;
          result[5] += 19822925;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 12884901;
          result[2] += 8589934;
          result[3] += 51539607;
          result[4] += 0;
          result[5] += 12884901;
        } else {
          result[0] += 1394469;
          result[1] += 0;
          result[2] += 64982297;
          result[3] += 16733638;
          result[4] += 0;
          result[5] += 2788939;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 976128;
          result[1] += 0;
          result[2] += 67352896;
          result[3] += 15618062;
          result[4] += 0;
          result[5] += 1952257;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 84980636;
          result[3] += 918709;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 721843;
          result[2] += 0;
          result[3] += 0;
          result[4] += 84816581;
          result[5] += 360921;
        } else {
          result[0] += 3435973;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3435973;
          result[4] += 51539607;
          result[5] += 27487790;
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
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3538467;
          result[4] += 2440322;
          result[5] += 79920556;
        } else {
          result[0] += 12271335;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 55221008;
          result[5] += 18407002;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 55462569;
          result[1] += 676372;
          result[2] += 0;
          result[3] += 1352745;
          result[4] += 25025793;
          result[5] += 3381864;
        } else {
          result[0] += 730436;
          result[1] += 584349;
          result[2] += 4674794;
          result[3] += 36229656;
          result[4] += 5259143;
          result[5] += 38420965;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42560000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42200000))) ) ) {
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 10737418;
          result[1] += 75161927;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 59517796;
          result[1] += 5225331;
          result[2] += 637235;
          result[3] += 2931283;
          result[4] += 14274075;
          result[5] += 3313624;
        } else {
          result[0] += 2661669;
          result[1] += 3629549;
          result[2] += 24438968;
          result[3] += 24196998;
          result[4] += 4597429;
          result[5] += 26374728;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 76644636;
          result[1] += 260696;
          result[2] += 4040788;
          result[3] += 2476612;
          result[4] += 1042784;
          result[5] += 1433828;
        } else {
          result[0] += 538553;
          result[1] += 0;
          result[2] += 77372242;
          result[3] += 6462646;
          result[4] += 179517;
          result[5] += 1346384;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
          result[0] += 2376661;
          result[1] += 1358092;
          result[2] += 0;
          result[3] += 0;
          result[4] += 78090314;
          result[5] += 4074277;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 24938519;
          result[5] += 60960826;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42680000))) ) ) {
          result[0] += 28097916;
          result[1] += 20872738;
          result[2] += 0;
          result[3] += 1605595;
          result[4] += 32914702;
          result[5] += 2408392;
        } else {
          result[0] += 596005;
          result[1] += 819508;
          result[2] += 223502;
          result[3] += 12739625;
          result[4] += 2458524;
          result[5] += 69062180;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 62324050;
          result[1] += 3323113;
          result[2] += 1442105;
          result[3] += 2946911;
          result[4] += 12978952;
          result[5] += 2884211;
        } else {
          result[0] += 12385487;
          result[1] += 799063;
          result[2] += 17179869;
          result[3] += 26169335;
          result[4] += 7191573;
          result[5] += 22174017;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42520000))) ) ) {
          result[0] += 409044;
          result[1] += 85490301;
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
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4090445;
          result[3] += 12271335;
          result[4] += 0;
          result[5] += 69537565;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 73628010;
          result[4] += 0;
          result[5] += 12271335;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41950843;
          result[3] += 32628433;
          result[4] += 665886;
          result[5] += 10654182;
        } else {
          result[0] += 3024624;
          result[1] += 3024624;
          result[2] += 72590996;
          result[3] += 3629549;
          result[4] += 604924;
          result[5] += 3024624;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x426c0000))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 344977;
          result[1] += 0;
          result[2] += 70375367;
          result[3] += 11729227;
          result[4] += 0;
          result[5] += 3449772;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85045475;
          result[3] += 853870;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
          result[0] += 1908874;
          result[1] += 636291;
          result[2] += 0;
          result[3] += 0;
          result[4] += 80172722;
          result[5] += 3181457;
        } else {
          result[0] += 45946161;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 20642478;
          result[5] += 19310705;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2494551;
          result[4] += 3145304;
          result[5] += 80259489;
        } else {
          result[0] += 0;
          result[1] += 819650;
          result[2] += 655720;
          result[3] += 34753170;
          result[4] += 8032572;
          result[5] += 41638232;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42990000))) ) ) {
          result[0] += 607778;
          result[1] += 84886381;
          result[2] += 0;
          result[3] += 0;
          result[4] += 405185;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42890000))) ) ) {
          result[0] += 4924166;
          result[1] += 31186386;
          result[2] += 0;
          result[3] += 0;
          result[4] += 48694533;
          result[5] += 1094259;
        } else {
          result[0] += 60677323;
          result[1] += 1324306;
          result[2] += 5598205;
          result[3] += 8006035;
          result[4] += 5176835;
          result[5] += 5116639;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2962046;
          result[3] += 77013206;
          result[4] += 0;
          result[5] += 5924092;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 21474836;
          result[4] += 0;
          result[5] += 50107951;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 2321603;
          result[1] += 0;
          result[2] += 35984861;
          result[3] += 32502455;
          result[4] += 2321603;
          result[5] += 12768821;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 75987882;
          result[3] += 8259552;
          result[4] += 0;
          result[5] += 1651910;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42f20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 66810602;
          result[3] += 12725829;
          result[4] += 0;
          result[5] += 6362914;
        } else {
          result[0] += 71582788;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34359738;
          result[3] += 51539607;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1222766;
          result[1] += 0;
          result[2] += 81313971;
          result[3] += 3260710;
          result[4] += 0;
          result[5] += 101897;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 1726620;
          result[2] += 0;
          result[3] += 0;
          result[4] += 83741070;
          result[5] += 431655;
        } else {
          result[0] += 25109039;
          result[1] += 1982292;
          result[2] += 0;
          result[3] += 5286113;
          result[4] += 25769803;
          result[5] += 27752096;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 5439041;
          result[4] += 2438191;
          result[5] += 78022113;
        } else {
          result[0] += 535198;
          result[1] += 4281587;
          result[2] += 1873194;
          result[3] += 44421468;
          result[4] += 8563174;
          result[5] += 26224722;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 24542670;
          result[2] += 0;
          result[3] += 0;
          result[4] += 61356675;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85498882;
          result[2] += 0;
          result[3] += 400463;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
          result[0] += 64393067;
          result[1] += 3144192;
          result[2] += 0;
          result[3] += 3332844;
          result[4] += 11067558;
          result[5] += 3961682;
        } else {
          result[0] += 9469219;
          result[1] += 3156406;
          result[2] += 28633115;
          result[3] += 20516641;
          result[4] += 4960067;
          result[5] += 19163896;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 4772185;
          result[2] += 2386092;
          result[3] += 54880137;
          result[4] += 7158278;
          result[5] += 16702650;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2202547;
          result[3] += 17620378;
          result[4] += 4405094;
          result[5] += 61671325;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 19522578;
          result[2] += 7809031;
          result[3] += 7809031;
          result[4] += 0;
          result[5] += 50758704;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 56448141;
          result[3] += 22088403;
          result[4] += 0;
          result[5] += 7362801;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42560000))) ) ) {
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
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 25769803;
          result[1] += 0;
          result[2] += 47244640;
          result[3] += 12884901;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 667611;
          result[1] += 0;
          result[2] += 82338751;
          result[3] += 2892983;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
          result[0] += 882527;
          result[1] += 4412637;
          result[2] += 0;
          result[3] += 0;
          result[4] += 75014839;
          result[5] += 5589341;
        } else {
          result[0] += 46461281;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2701237;
          result[4] += 28092867;
          result[5] += 8643959;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3235576;
          result[4] += 4592431;
          result[5] += 78071337;
        } else {
          result[0] += 3875158;
          result[1] += 322929;
          result[2] += 3552228;
          result[3] += 24219740;
          result[4] += 13885984;
          result[5] += 40043304;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 45133554;
          result[2] += 0;
          result[3] += 7279605;
          result[4] += 23294737;
          result[5] += 10191447;
        } else {
          result[0] += 0;
          result[1] += 85446051;
          result[2] += 0;
          result[3] += 0;
          result[4] += 453294;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 68801874;
          result[1] += 3845214;
          result[2] += 68664;
          result[3] += 2197265;
          result[4] += 6797789;
          result[5] += 4188537;
        } else {
          result[0] += 10554740;
          result[1] += 1299044;
          result[2] += 15750919;
          result[3] += 31339458;
          result[4] += 1948567;
          result[5] += 25006614;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 1481023;
          result[2] += 4443069;
          result[3] += 56278881;
          result[4] += 0;
          result[5] += 23696371;
        } else {
          result[0] += 16519104;
          result[1] += 23126746;
          result[2] += 13215283;
          result[3] += 0;
          result[4] += 19822925;
          result[5] += 13215283;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 75940001;
          result[3] += 7469508;
          result[4] += 0;
          result[5] += 2489836;
        } else {
          result[0] += 79763678;
          result[1] += 0;
          result[2] += 6135667;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7809031;
          result[3] += 70281283;
          result[4] += 0;
          result[5] += 7809031;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 19088743;
          result[3] += 0;
          result[4] += 0;
          result[5] += 66810602;
        } else {
          result[0] += 684067;
          result[1] += 0;
          result[2] += 79058669;
          result[3] += 5863436;
          result[4] += 0;
          result[5] += 293171;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42be0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x423a0000))) ) ) {
          result[0] += 0;
          result[1] += 71582788;
          result[2] += 0;
          result[3] += 0;
          result[4] += 7158278;
          result[5] += 7158278;
        } else {
          result[0] += 272696;
          result[1] += 272696;
          result[2] += 0;
          result[3] += 0;
          result[4] += 83717775;
          result[5] += 1636178;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x425e0000))) ) ) {
          result[0] += 0;
          result[1] += 85689835;
          result[2] += 0;
          result[3] += 0;
          result[4] += 209510;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 40265318;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 2684354;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 2738555;
          result[1] += 91285;
          result[2] += 91285;
          result[3] += 5203254;
          result[4] += 5659680;
          result[5] += 72115285;
        } else {
          result[0] += 6524000;
          result[1] += 1957200;
          result[2] += 1522266;
          result[3] += 37186805;
          result[4] += 6958934;
          result[5] += 31750137;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 29828153;
          result[1] += 1577450;
          result[2] += 3728519;
          result[3] += 20220046;
          result[4] += 11472366;
          result[5] += 19072809;
        } else {
          result[0] += 70114796;
          result[1] += 2877846;
          result[2] += 3575505;
          result[3] += 1220904;
          result[4] += 6627766;
          result[5] += 1482526;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12469259;
          result[3] += 66502719;
          result[4] += 0;
          result[5] += 6927366;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39645851;
          result[3] += 31716681;
          result[4] += 0;
          result[5] += 14536812;
        } else {
          result[0] += 10226112;
          result[1] += 0;
          result[2] += 69537565;
          result[3] += 2045222;
          result[4] += 0;
          result[5] += 4090445;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 346368;
          result[1] += 0;
          result[2] += 72390981;
          result[3] += 10044681;
          result[4] += 0;
          result[5] += 3117314;
        } else {
          result[0] += 34359738;
          result[1] += 0;
          result[2] += 25769803;
          result[3] += 25769803;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 77559603;
          result[3] += 7505768;
          result[4] += 0;
          result[5] += 833974;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 84628108;
          result[3] += 908026;
          result[4] += 0;
          result[5] += 363210;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42100000))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
          result[0] += 645859;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 83961766;
          result[5] += 1291719;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 55221008;
          result[5] += 30678337;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42660000))) ) ) {
          result[0] += 78429837;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 7469508;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 269840;
          result[2] += 0;
          result[3] += 4137560;
          result[4] += 3867719;
          result[5] += 77624225;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42820000))) ) ) {
          result[0] += 62038416;
          result[1] += 4772185;
          result[2] += 0;
          result[3] += 4772185;
          result[4] += 7953643;
          result[5] += 6362914;
        } else {
          result[0] += 0;
          result[1] += 641039;
          result[2] += 1923119;
          result[3] += 40385513;
          result[4] += 4700959;
          result[5] += 38248713;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 0;
          result[1] += 85320249;
          result[2] += 0;
          result[3] += 0;
          result[4] += 579096;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 38693399;
          result[2] += 0;
          result[3] += 0;
          result[4] += 47205946;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 76105990;
          result[1] += 1327912;
          result[2] += 82994;
          result[3] += 746950;
          result[4] += 7054535;
          result[5] += 580961;
        } else {
          result[0] += 21248785;
          result[1] += 3164712;
          result[2] += 18988276;
          result[3] += 23057192;
          result[4] += 3616814;
          result[5] += 15823563;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42460000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 7809031;
          result[1] += 1394469;
          result[2] += 26773822;
          result[3] += 25937140;
          result[4] += 5020091;
          result[5] += 18964790;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 1145324;
          result[1] += 0;
          result[2] += 34359738;
          result[3] += 41231686;
          result[4] += 0;
          result[5] += 9162596;
        } else {
          result[0] += 1809409;
          result[1] += 0;
          result[2] += 78471242;
          result[3] += 4571140;
          result[4] += 0;
          result[5] += 1047552;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42870000))) ) ) {
          result[0] += 746950;
          result[1] += 497967;
          result[2] += 0;
          result[3] += 0;
          result[4] += 83658493;
          result[5] += 995934;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9544371;
          result[3] += 19088743;
          result[4] += 9544371;
          result[5] += 47721858;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
          result[0] += 69715411;
          result[1] += 4357213;
          result[2] += 0;
          result[3] += 2489836;
          result[4] += 8714426;
          result[5] += 622459;
        } else {
          result[0] += 1838175;
          result[1] += 353495;
          result[2] += 0;
          result[3] += 10322061;
          result[4] += 6645710;
          result[5] += 66739903;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42580000))) ) ) {
          result[0] += 0;
          result[1] += 85675065;
          result[2] += 0;
          result[3] += 0;
          result[4] += 224280;
          result[5] += 0;
        } else {
          result[0] += 5453926;
          result[1] += 39540968;
          result[2] += 0;
          result[3] += 1363481;
          result[4] += 38177487;
          result[5] += 1363481;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 69398906;
          result[1] += 4853070;
          result[2] += 1051498;
          result[3] += 2992726;
          result[4] += 5014839;
          result[5] += 2588304;
        } else {
          result[0] += 9846998;
          result[1] += 628531;
          result[2] += 14665741;
          result[3] += 35826312;
          result[4] += 6285317;
          result[5] += 18646443;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11960668;
          result[3] += 60890675;
          result[4] += 0;
          result[5] += 13048001;
        } else {
          result[0] += 4294967;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 25769803;
          result[4] += 0;
          result[5] += 2147483;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 51300998;
          result[3] += 28633115;
          result[4] += 0;
          result[5] += 5965232;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 80172722;
          result[3] += 0;
          result[4] += 0;
          result[5] += 5726623;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 2280513;
          result[1] += 0;
          result[2] += 60053525;
          result[3] += 19004280;
          result[4] += 760171;
          result[5] += 3800856;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 83608696;
          result[3] += 2290649;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 17828166;
          result[1] += 0;
          result[2] += 66450437;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1620742;
        } else {
          result[0] += 116237;
          result[1] += 0;
          result[2] += 83225888;
          result[3] += 2092270;
          result[4] += 0;
          result[5] += 464949;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42100000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1115575;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 82180759;
          result[5] += 2603010;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 57266230;
          result[5] += 28633115;
        } else {
          result[0] += 84838860;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1060485;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1717986;
          result[4] += 61847529;
          result[5] += 22333829;
        } else {
          result[0] += 0;
          result[1] += 95869;
          result[2] += 95869;
          result[3] += 4410011;
          result[4] += 5752188;
          result[5] += 75545406;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 1605595;
          result[2] += 0;
          result[3] += 26492321;
          result[4] += 9633571;
          result[5] += 48167857;
        } else {
          result[0] += 442780;
          result[1] += 0;
          result[2] += 885560;
          result[3] += 58446977;
          result[4] += 3099460;
          result[5] += 23024566;
        }
      }
    }
  } else {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 7469508;
          result[1] += 32212254;
          result[2] += 1400532;
          result[3] += 466844;
          result[4] += 42482828;
          result[5] += 1867377;
        } else {
          result[0] += 69537565;
          result[1] += 1207016;
          result[2] += 2950484;
          result[3] += 4090445;
          result[4] += 5833913;
          result[5] += 2279920;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 16953818;
          result[3] += 32212254;
          result[4] += 2825636;
          result[5] += 33907636;
        } else {
          result[0] += 1596359;
          result[1] += 304068;
          result[2] += 72900418;
          result[3] += 8437900;
          result[4] += 532119;
          result[5] += 2128479;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42950000))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
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
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c60000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 9544371;
          result[2] += 0;
          result[3] += 9544371;
          result[4] += 66810602;
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
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 74446099;
          result[2] += 0;
          result[3] += 0;
          result[4] += 11453246;
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
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 658232;
          result[1] += 4278511;
          result[2] += 0;
          result[3] += 2632930;
          result[4] += 69443532;
          result[5] += 8886139;
        } else {
          result[0] += 2768596;
          result[1] += 72857;
          result[2] += 1602871;
          result[3] += 12167252;
          result[4] += 5391477;
          result[5] += 63896290;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 65388948;
          result[1] += 4757897;
          result[2] += 1028734;
          result[3] += 1993173;
          result[4] += 10801714;
          result[5] += 1928877;
        } else {
          result[0] += 11066786;
          result[1] += 1580969;
          result[2] += 15458368;
          result[3] += 22660563;
          result[4] += 6148214;
          result[5] += 28984441;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42240000))) ) ) {
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
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 3303820;
          result[2] += 14316557;
          result[3] += 47354767;
          result[4] += 1101273;
          result[5] += 19822925;
        } else {
          result[0] += 0;
          result[1] += 10737418;
          result[2] += 53687091;
          result[3] += 16106127;
          result[4] += 0;
          result[5] += 5368709;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39268272;
          result[3] += 39268272;
          result[4] += 0;
          result[5] += 7362801;
        } else {
          result[0] += 1753047;
          result[1] += 0;
          result[2] += 71874962;
          result[3] += 12271335;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 63294254;
          result[1] += 0;
          result[2] += 18084072;
          result[3] += 4521018;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 307149;
          result[1] += 0;
          result[2] += 81599259;
          result[3] += 3890554;
          result[4] += 0;
          result[5] += 102383;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 313501;
          result[1] += 313501;
          result[2] += 0;
          result[3] += 313501;
          result[4] += 82764333;
          result[5] += 2194508;
        } else {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 220820;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2208209;
          result[4] += 4195597;
          result[5] += 79274717;
        } else {
          result[0] += 9544371;
          result[1] += 509033;
          result[2] += 254516;
          result[3] += 30796506;
          result[4] += 8653563;
          result[5] += 36141354;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 64953278;
          result[1] += 7095736;
          result[2] += 204684;
          result[3] += 1705705;
          result[4] += 11325886;
          result[5] += 614054;
        } else {
          result[0] += 13087157;
          result[1] += 475896;
          result[2] += 30457385;
          result[3] += 21177401;
          result[4] += 3093328;
          result[5] += 17608176;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42520000))) ) ) {
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
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5368709;
          result[3] += 21474836;
          result[4] += 2684354;
          result[5] += 56371445;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 18407002;
          result[3] += 55221008;
          result[4] += 0;
          result[5] += 12271335;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 22270200;
          result[3] += 60447687;
          result[4] += 0;
          result[5] += 3181457;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 71582788;
          result[3] += 14316557;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 75793540;
          result[4] += 0;
          result[5] += 10105805;
        } else {
          result[0] += 14939016;
          result[1] += 7469508;
          result[2] += 41082295;
          result[3] += 7469508;
          result[4] += 0;
          result[5] += 14939016;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 1342177;
          result[1] += 2013265;
          result[2] += 60397977;
          result[3] += 18790481;
          result[4] += 0;
          result[5] += 3355443;
        } else {
          result[0] += 1952257;
          result[1] += 0;
          result[2] += 81669453;
          result[3] += 2277634;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          result[0] += 3303820;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 75987882;
          result[5] += 6607641;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 223115;
          result[1] += 111557;
          result[2] += 0;
          result[3] += 3346727;
          result[4] += 3458285;
          result[5] += 78759660;
        } else {
          result[0] += 11600973;
          result[1] += 1173132;
          result[2] += 130348;
          result[3] += 26590996;
          result[4] += 8863665;
          result[5] += 37540230;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 19088743;
          result[2] += 0;
          result[3] += 0;
          result[4] += 66810602;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85098419;
          result[2] += 0;
          result[3] += 200231;
          result[4] += 600694;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
          result[0] += 66849369;
          result[1] += 3837907;
          result[2] += 558241;
          result[3] += 3279666;
          result[4] += 8582956;
          result[5] += 2791205;
        } else {
          result[0] += 12735077;
          result[1] += 1248537;
          result[2] += 26968399;
          result[3] += 21474836;
          result[4] += 8240344;
          result[5] += 15232151;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 1827645;
          result[1] += 1827645;
          result[2] += 1827645;
          result[3] += 0;
          result[4] += 9138228;
          result[5] += 71278180;
        } else {
          result[0] += 2962046;
          result[1] += 8886139;
          result[2] += 2962046;
          result[3] += 29620464;
          result[4] += 8886139;
          result[5] += 32582510;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 8468949;
          result[1] += 0;
          result[2] += 16937899;
          result[3] += 44764447;
          result[4] += 0;
          result[5] += 15728049;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 74695083;
          result[3] += 3734754;
          result[4] += 0;
          result[5] += 7469508;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 10529597;
          result[1] += 554189;
          result[2] += 46551903;
          result[3] += 23830141;
          result[4] += 0;
          result[5] += 4433514;
        } else {
          result[0] += 3322074;
          result[1] += 0;
          result[2] += 74034795;
          result[3] += 7593312;
          result[4] += 0;
          result[5] += 949164;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 77403806;
          result[3] += 8495539;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 171798;
          result[1] += 0;
          result[2] += 85040352;
          result[3] += 687194;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 2526451;
          result[1] += 631612;
          result[2] += 631612;
          result[3] += 0;
          result[4] += 75477734;
          result[5] += 6631934;
        } else {
          result[0] += 36531905;
          result[1] += 12835534;
          result[2] += 0;
          result[3] += 0;
          result[4] += 34557208;
          result[5] += 1974697;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 432379;
          result[3] += 2161896;
          result[4] += 1873643;
          result[5] += 81431426;
        } else {
          result[0] += 0;
          result[1] += 3509506;
          result[2] += 4846461;
          result[3] += 28076050;
          result[4] += 6517654;
          result[5] += 42949672;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          result[0] += 184729;
          result[1] += 84421507;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1293108;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 18195427;
          result[1] += 12271335;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52047386;
          result[5] += 3385195;
        } else {
          result[0] += 65736070;
          result[1] += 695285;
          result[2] += 2970764;
          result[3] += 6573607;
          result[4] += 3792465;
          result[5] += 6131152;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 2928386;
          result[1] += 3904515;
          result[2] += 976128;
          result[3] += 5856773;
          result[4] += 20498707;
          result[5] += 51734833;
        } else {
          result[0] += 0;
          result[1] += 499414;
          result[2] += 12984784;
          result[3] += 45946161;
          result[4] += 499414;
          result[5] += 25969569;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 1974697;
          result[1] += 0;
          result[2] += 69114416;
          result[3] += 8886139;
          result[4] += 987348;
          result[5] += 4936744;
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
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 23077436;
          result[3] += 50001111;
          result[4] += 0;
          result[5] += 12820797;
        } else {
          result[0] += 0;
          result[1] += 9817068;
          result[2] += 66265209;
          result[3] += 2454267;
          result[4] += 0;
          result[5] += 7362801;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 1867377;
          result[1] += 0;
          result[2] += 48551804;
          result[3] += 31745410;
          result[4] += 0;
          result[5] += 3734754;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 81688593;
          result[3] += 4000214;
          result[4] += 0;
          result[5] += 210537;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42360000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 4521018;
          result[1] += 282563;
          result[2] += 0;
          result[3] += 0;
          result[4] += 77987564;
          result[5] += 3108200;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 83150566;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2748779;
          result[5] += 0;
        } else {
          result[0] += 18221073;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 32537631;
          result[5] += 35140641;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 5541893;
          result[2] += 0;
          result[3] += 0;
          result[4] += 58189879;
          result[5] += 22167573;
        } else {
          result[0] += 0;
          result[1] += 480959;
          result[2] += 0;
          result[3] += 6156280;
          result[4] += 3462907;
          result[5] += 75799198;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 401398;
          result[1] += 401398;
          result[2] += 0;
          result[3] += 24083928;
          result[4] += 10034970;
          result[5] += 50977649;
        } else {
          result[0] += 0;
          result[1] += 1489584;
          result[2] += 6703128;
          result[3] += 50894121;
          result[4] += 2979168;
          result[5] += 23833344;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cf0000))) ) ) {
          result[0] += 67428761;
          result[1] += 2225371;
          result[2] += 2744625;
          result[3] += 2447908;
          result[4] += 9865814;
          result[5] += 1186864;
        } else {
          result[0] += 4405094;
          result[1] += 77089156;
          result[2] += 2202547;
          result[3] += 2202547;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 563890;
          result[1] += 85335455;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 46253493;
          result[1] += 6607641;
          result[2] += 33038209;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 3734754;
          result[1] += 3734754;
          result[2] += 30811721;
          result[3] += 11204262;
          result[4] += 10270573;
          result[5] += 26143279;
        } else {
          result[0] += 69793218;
          result[1] += 5368709;
          result[2] += 0;
          result[3] += 0;
          result[4] += 10737418;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 4772185;
          result[1] += 530242;
          result[2] += 53554530;
          result[3] += 20149229;
          result[4] += 1060485;
          result[5] += 5832671;
        } else {
          result[0] += 379665;
          result[1] += 0;
          result[2] += 81153525;
          result[3] += 4176321;
          result[4] += 0;
          result[5] += 189832;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 737333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 83687345;
          result[5] += 1474666;
        } else {
          result[0] += 4405094;
          result[1] += 4405094;
          result[2] += 0;
          result[3] += 2202547;
          result[4] += 50658588;
          result[5] += 24228020;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 214480;
          result[2] += 107240;
          result[3] += 2681003;
          result[4] += 4611325;
          result[5] += 78285296;
        } else {
          result[0] += 9114721;
          result[1] += 552407;
          result[2] += 276203;
          result[3] += 27896572;
          result[4] += 8424212;
          result[5] += 39635228;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
          result[0] += 0;
          result[1] += 84965657;
          result[2] += 0;
          result[3] += 0;
          result[4] += 933688;
          result[5] += 0;
        } else {
          result[0] += 4090445;
          result[1] += 33234865;
          result[2] += 0;
          result[3] += 0;
          result[4] += 48574034;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 76450417;
          result[1] += 1639896;
          result[2] += 1015174;
          result[3] += 2264619;
          result[4] += 3123612;
          result[5] += 1405625;
        } else {
          result[0] += 8698667;
          result[1] += 1087333;
          result[2] += 20659336;
          result[3] += 22290336;
          result[4] += 8155001;
          result[5] += 25008670;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20259279;
          result[3] += 51053384;
          result[4] += 0;
          result[5] += 14586681;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bc0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 28633115;
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
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 50529027;
          result[3] += 35370318;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 768674;
          result[1] += 0;
          result[2] += 80230373;
          result[3] += 4227708;
          result[4] += 0;
          result[5] += 672589;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 331657;
          result[1] += 1658288;
          result[2] += 0;
          result[3] += 0;
          result[4] += 82582768;
          result[5] += 1326630;
        } else {
          result[0] += 42196169;
          result[1] += 3767515;
          result[2] += 0;
          result[3] += 0;
          result[4] += 21098084;
          result[5] += 18837575;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3950860;
          result[4] += 764682;
          result[5] += 81183803;
        } else {
          result[0] += 939817;
          result[1] += 0;
          result[2] += 1127781;
          result[3] += 22931554;
          result[4] += 9962068;
          result[5] += 50938124;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42890000))) ) ) {
          result[0] += 5883516;
          result[1] += 42753555;
          result[2] += 0;
          result[3] += 0;
          result[4] += 35693335;
          result[5] += 1568937;
        } else {
          result[0] += 64778574;
          result[1] += 923648;
          result[2] += 2093604;
          result[3] += 6835001;
          result[4] += 6034506;
          result[5] += 5234010;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c40000))) ) ) {
          result[0] += 426299;
          result[1] += 85046746;
          result[2] += 0;
          result[3] += 0;
          result[4] += 426299;
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
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7809031;
          result[3] += 7809031;
          result[4] += 0;
          result[5] += 70281283;
        } else {
          result[0] += 1115575;
          result[1] += 0;
          result[2] += 9482395;
          result[3] += 60798887;
          result[4] += 1115575;
          result[5] += 13386911;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7809031;
          result[3] += 7809031;
          result[4] += 0;
          result[5] += 70281283;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 57266230;
          result[3] += 23427094;
          result[4] += 0;
          result[5] += 5206020;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 16361780;
          result[3] += 44994895;
          result[4] += 0;
          result[5] += 24542670;
        } else {
          result[0] += 14665741;
          result[1] += 0;
          result[2] += 60059705;
          result[3] += 8380423;
          result[4] += 1396737;
          result[5] += 1396737;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 650752;
          result[1] += 650752;
          result[2] += 63773756;
          result[3] += 9761289;
          result[4] += 0;
          result[5] += 11062794;
        } else {
          result[0] += 218573;
          result[1] += 0;
          result[2] += 82402171;
          result[3] += 3278600;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 336860;
          result[1] += 2358021;
          result[2] += 0;
          result[3] += 0;
          result[4] += 81183303;
          result[5] += 2021161;
        } else {
          result[0] += 41196625;
          result[1] += 0;
          result[2] += 0;
          result[3] += 5259143;
          result[4] += 12271335;
          result[5] += 27172242;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 183154;
          result[1] += 1923119;
          result[2] += 0;
          result[3] += 3754662;
          result[4] += 4304125;
          result[5] += 75734284;
        } else {
          result[0] += 1385473;
          result[1] += 0;
          result[2] += 0;
          result[3] += 49322850;
          result[4] += 831283;
          result[5] += 34359738;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 38177487;
          result[2] += 0;
          result[3] += 0;
          result[4] += 47721858;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85685133;
          result[2] += 0;
          result[3] += 0;
          result[4] += 214212;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 65873731;
          result[1] += 2503201;
          result[2] += 790484;
          result[3] += 3293686;
          result[4] += 11000913;
          result[5] += 2437328;
        } else {
          result[0] += 9351068;
          result[1] += 869866;
          result[2] += 23703870;
          result[3] += 22834003;
          result[4] += 8263734;
          result[5] += 20876803;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42910000))) ) ) {
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
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 760171;
          result[1] += 2280513;
          result[2] += 25845820;
          result[3] += 44850100;
          result[4] += 1520342;
          result[5] += 10642396;
        } else {
          result[0] += 0;
          result[1] += 2526451;
          result[2] += 63161283;
          result[3] += 2526451;
          result[4] += 0;
          result[5] += 17685159;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 5632743;
          result[1] += 1408185;
          result[2] += 63368369;
          result[3] += 4224557;
          result[4] += 0;
          result[5] += 11265487;
        } else {
          result[0] += 78090314;
          result[1] += 0;
          result[2] += 7809031;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 59556879;
          result[3] += 17179869;
          result[4] += 0;
          result[5] += 9162596;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 82467799;
          result[3] += 3431546;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cf0000))) ) ) {
          result[0] += 1391082;
          result[1] += 695541;
          result[2] += 0;
          result[3] += 0;
          result[4] += 79639474;
          result[5] += 4173247;
        } else {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1632589;
          result[4] += 1507006;
          result[5] += 82759749;
        } else {
          result[0] += 7173223;
          result[1] += 3945272;
          result[2] += 717322;
          result[3] += 30306867;
          result[4] += 10580503;
          result[5] += 33176156;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 2260509;
          result[1] += 7911781;
          result[2] += 0;
          result[3] += 0;
          result[4] += 75727054;
          result[5] += 0;
        } else {
          result[0] += 357913;
          result[1] += 80709593;
          result[2] += 0;
          result[3] += 894784;
          result[4] += 3937053;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 68812918;
          result[1] += 2603010;
          result[2] += 333719;
          result[3] += 2402778;
          result[4] += 7008105;
          result[5] += 4738813;
        } else {
          result[0] += 17040760;
          result[1] += 3825476;
          result[2] += 25387256;
          result[3] += 12867513;
          result[4] += 3129935;
          result[5] += 23648402;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1010580;
          result[3] += 15158708;
          result[4] += 13137547;
          result[5] += 56592510;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7104457;
          result[3] += 59419096;
          result[4] += 0;
          result[5] += 19375792;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42810000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 65687735;
          result[3] += 13474407;
          result[4] += 0;
          result[5] += 6737203;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 5726623;
          result[1] += 22906492;
          result[2] += 0;
          result[3] += 40086361;
          result[4] += 17179869;
          result[5] += 0;
        } else {
          result[0] += 64862771;
          result[1] += 7012191;
          result[2] += 10518287;
          result[3] += 0;
          result[4] += 3506095;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 51685199;
          result[3] += 21838816;
          result[4] += 0;
          result[5] += 12375329;
        } else {
          result[0] += 1680424;
          result[1] += 197696;
          result[2] += 79474193;
          result[3] += 4349333;
          result[4] += 98848;
          result[5] += 98848;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42890000))) ) ) {
          result[0] += 1774779;
          result[1] += 4969383;
          result[2] += 0;
          result[3] += 0;
          result[4] += 78090314;
          result[5] += 1064867;
        } else {
          result[0] += 65980656;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 14939016;
          result[5] += 4979672;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 186130;
          result[1] += 0;
          result[2] += 465326;
          result[3] += 5118595;
          result[4] += 7072968;
          result[5] += 73056323;
        } else {
          result[0] += 1688439;
          result[1] += 4854262;
          result[2] += 2743713;
          result[3] += 37356717;
          result[4] += 5487427;
          result[5] += 33768784;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426c0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 8180890;
          result[2] += 0;
          result[3] += 0;
          result[4] += 77718455;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 84827836;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1071509;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 44653678;
          result[1] += 2883701;
          result[2] += 6553866;
          result[3] += 8825873;
          result[4] += 14680661;
          result[5] += 8301564;
        } else {
          result[0] += 80182019;
          result[1] += 0;
          result[2] += 4183409;
          result[3] += 836681;
          result[4] += 139446;
          result[5] += 557787;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 22270200;
          result[5] += 63629145;
        } else {
          result[0] += 1753047;
          result[1] += 8765239;
          result[2] += 11394811;
          result[3] += 45579244;
          result[4] += 2629571;
          result[5] += 15777430;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 7362801;
          result[2] += 29451204;
          result[3] += 31905471;
          result[4] += 0;
          result[5] += 17179869;
        } else {
          result[0] += 7953643;
          result[1] += 1590728;
          result[2] += 65219873;
          result[3] += 9544371;
          result[4] += 0;
          result[5] += 1590728;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 50107951;
          result[4] += 10737418;
          result[5] += 3579139;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 78090314;
          result[3] += 0;
          result[4] += 0;
          result[5] += 7809031;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 933688;
          result[1] += 0;
          result[2] += 72827706;
          result[3] += 8870041;
          result[4] += 0;
          result[5] += 3267909;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 84408037;
          result[3] += 1342177;
          result[4] += 0;
          result[5] += 149130;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 322929;
          result[1] += 2583438;
          result[2] += 0;
          result[3] += 0;
          result[4] += 82992977;
          result[5] += 0;
        } else {
          result[0] += 36586758;
          result[1] += 2386092;
          result[2] += 0;
          result[3] += 0;
          result[4] += 14316557;
          result[5] += 32609936;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4412989;
          result[4] += 5336637;
          result[5] += 76149718;
        } else {
          result[0] += 1041204;
          result[1] += 260301;
          result[2] += 1041204;
          result[3] += 49977801;
          result[4] += 260301;
          result[5] += 33318534;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0;
          result[1] += 83401154;
          result[2] += 0;
          result[3] += 192168;
          result[4] += 2306022;
          result[5] += 0;
        } else {
          result[0] += 52494044;
          result[1] += 9544371;
          result[2] += 14316557;
          result[3] += 0;
          result[4] += 9544371;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 63011018;
          result[1] += 5040881;
          result[2] += 204360;
          result[3] += 2997280;
          result[4] += 13147163;
          result[5] += 1498640;
        } else {
          result[0] += 11070560;
          result[1] += 205010;
          result[2] += 25626296;
          result[3] += 24191223;
          result[4] += 6970352;
          result[5] += 17835902;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          result[0] += 1321528;
          result[1] += 1321528;
          result[2] += 17840633;
          result[3] += 23787511;
          result[4] += 3964585;
          result[5] += 37663559;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42db0000))) ) ) {
          result[0] += 4129776;
          result[1] += 1651910;
          result[2] += 58642822;
          result[3] += 19822925;
          result[4] += 0;
          result[5] += 1651910;
        } else {
          result[0] += 52647986;
          result[1] += 11083786;
          result[2] += 22167573;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 32212254;
          result[4] += 0;
          result[5] += 32212254;
        } else {
          result[0] += 615765;
          result[1] += 0;
          result[2] += 75431325;
          result[3] += 9544371;
          result[4] += 0;
          result[5] += 307882;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 83957273;
          result[3] += 1643291;
          result[4] += 0;
          result[5] += 298780;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 375106;
          result[1] += 1125318;
          result[2] += 0;
          result[3] += 375106;
          result[4] += 81022963;
          result[5] += 3000850;
        } else {
          result[0] += 0;
          result[1] += 44994895;
          result[2] += 0;
          result[3] += 12271335;
          result[4] += 0;
          result[5] += 28633115;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42830000))) ) ) {
          result[0] += 108049;
          result[1] += 1080494;
          result[2] += 432197;
          result[3] += 4538078;
          result[4] += 4213930;
          result[5] += 75526594;
        } else {
          result[0] += 7282410;
          result[1] += 165509;
          result[2] += 1655093;
          result[3] += 28964133;
          result[4] += 9765050;
          result[5] += 38067147;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 1802084;
          result[1] += 29434041;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52260441;
          result[5] += 2402778;
        } else {
          result[0] += 0;
          result[1] += 84392339;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1507006;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 69613060;
          result[1] += 1873643;
          result[2] += 1297137;
          result[3] += 2378085;
          result[4] += 7134257;
          result[5] += 3603160;
        } else {
          result[0] += 12982716;
          result[1] += 1600608;
          result[2] += 19385152;
          result[3] += 23831288;
          result[4] += 4268290;
          result[5] += 23831288;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 10737418;
          result[4] += 0;
          result[5] += 75161927;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 8312839;
          result[2] += 33251359;
          result[3] += 13854733;
          result[4] += 0;
          result[5] += 30480413;
        } else {
          result[0] += 3579139;
          result[1] += 0;
          result[2] += 78741067;
          result[3] += 0;
          result[4] += 0;
          result[5] += 3579139;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42fd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 73666844;
          result[3] += 10329668;
          result[4] += 0;
          result[5] += 1902833;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        } else {
          result[0] += 287770;
          result[1] += 0;
          result[2] += 83453300;
          result[3] += 1870505;
          result[4] += 0;
          result[5] += 287770;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 658232;
          result[1] += 0;
          result[2] += 658232;
          result[3] += 0;
          result[4] += 82279066;
          result[5] += 2303813;
        } else {
          result[0] += 27172242;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2629571;
          result[4] += 20160050;
          result[5] += 35937481;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 1928155;
          result[2] += 192815;
          result[3] += 6652137;
          result[4] += 3567088;
          result[5] += 73559148;
        } else {
          result[0] += 0;
          result[1] += 3986889;
          result[2] += 724888;
          result[3] += 44943117;
          result[4] += 4349333;
          result[5] += 31895115;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 10105805;
          result[2] += 0;
          result[3] += 0;
          result[4] += 75793540;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85059254;
          result[2] += 0;
          result[3] += 0;
          result[4] += 840091;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 26494542;
          result[1] += 3326668;
          result[2] += 4633574;
          result[3] += 16158106;
          result[4] += 12593818;
          result[5] += 22692634;
        } else {
          result[0] += 68560403;
          result[1] += 2624702;
          result[2] += 4135894;
          result[3] += 2624702;
          result[4] += 7555960;
          result[5] += 397682;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20452225;
          result[3] += 58629712;
          result[4] += 0;
          result[5] += 6817408;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 17179869;
          result[4] += 0;
          result[5] += 68719476;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 80172722;
          result[3] += 0;
          result[4] += 0;
          result[5] += 5726623;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35957865;
          result[3] += 37955524;
          result[4] += 0;
          result[5] += 11985955;
        } else {
          result[0] += 2962046;
          result[1] += 0;
          result[2] += 72570137;
          result[3] += 8886139;
          result[4] += 0;
          result[5] += 1481023;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        } else {
          result[0] += 653581;
          result[1] += 0;
          result[2] += 81230903;
          result[3] += 3267909;
          result[4] += 0;
          result[5] += 746950;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_1/test_data.csv", "r");
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
