
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
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 438261;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 84584559;
            result[5] += 876523;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 70960329;
            result[5] += 14939016;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b80000))) ) ) {
            result[0] += 49085340;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10518287;
            result[5] += 26295718;
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
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5368709;
            result[4] += 64424509;
            result[5] += 16106127;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4772185;
            result[4] += 2277634;
            result[5] += 78849525;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 2564159;
            result[2] += 2564159;
            result[3] += 12179758;
            result[4] += 8333518;
            result[5] += 60257750;
          } else {
            result[0] += 1431655;
            result[1] += 3937053;
            result[2] += 2505397;
            result[3] += 53687091;
            result[4] += 2147483;
            result[5] += 22190664;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 85899345;
          } else {
            result[0] += 14810232;
            result[1] += 29620464;
            result[2] += 0;
            result[3] += 2962046;
            result[4] += 38506603;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 198841;
            result[1] += 85302822;
            result[2] += 0;
            result[3] += 0;
            result[4] += 397682;
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
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 10534825;
            result[1] += 21474836;
            result[2] += 405185;
            result[3] += 405185;
            result[4] += 50243013;
            result[5] += 2836299;
          } else {
            result[0] += 74888543;
            result[1] += 150832;
            result[2] += 1357496;
            result[3] += 3167491;
            result[4] += 4675820;
            result[5] += 1659162;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 2433409;
            result[1] += 973363;
            result[2] += 19467273;
            result[3] += 29444251;
            result[4] += 7543568;
            result[5] += 26037478;
          } else {
            result[0] += 56411510;
            result[1] += 1282079;
            result[2] += 11538718;
            result[3] += 0;
            result[4] += 16667037;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 8589934;
            result[4] += 0;
            result[5] += 77309411;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10226112;
            result[3] += 65447120;
            result[4] += 0;
            result[5] += 10226112;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 31236125;
            result[4] += 0;
            result[5] += 54663220;
          } else {
            result[0] += 0;
            result[1] += 5052902;
            result[2] += 60634832;
            result[3] += 10105805;
            result[4] += 0;
            result[5] += 10105805;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34359738;
            result[3] += 51539607;
            result[4] += 0;
            result[5] += 0;
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
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42980000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 85899345;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 6607641;
            result[1] += 46253493;
            result[2] += 19822925;
            result[3] += 13215283;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3734754;
            result[4] += 7469508;
            result[5] += 74695083;
          } else {
            result[0] += 5368709;
            result[1] += 0;
            result[2] += 37580963;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 21474836;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42f20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 70796164;
            result[3] += 12743309;
            result[4] += 0;
            result[5] += 2359872;
          } else {
            result[0] += 85899345;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 431655;
            result[1] += 0;
            result[2] += 79424520;
            result[3] += 5611515;
            result[4] += 0;
            result[5] += 431655;
          } else {
            result[0] += 526989;
            result[1] += 0;
            result[2] += 84669702;
            result[3] += 702653;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42810000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 78429837;
            result[5] += 7469508;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 45812984;
            result[5] += 40086361;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42660000))) ) ) {
            result[0] += 84443424;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1455921;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 25769803;
            result[2] += 0;
            result[3] += 7362801;
            result[4] += 36814005;
            result[5] += 15952735;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 247905;
            result[2] += 123952;
            result[3] += 2479057;
            result[4] += 1363481;
            result[5] += 81684947;
          } else {
            result[0] += 195670;
            result[1] += 587011;
            result[2] += 391340;
            result[3] += 29546244;
            result[4] += 4500421;
            result[5] += 50678657;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42d60000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
            result[0] += 1835456;
            result[1] += 38544578;
            result[2] += 2202547;
            result[3] += 0;
            result[4] += 40747125;
            result[5] += 2569638;
          } else {
            result[0] += 45535780;
            result[1] += 1521239;
            result[2] += 5577879;
            result[3] += 11967087;
            result[4] += 7910447;
            result[5] += 13386911;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 38738920;
            result[1] += 10105805;
            result[2] += 0;
            result[3] += 3368601;
            result[4] += 33686018;
            result[5] += 0;
          } else {
            result[0] += 82365512;
            result[1] += 0;
            result[2] += 1223250;
            result[3] += 135916;
            result[4] += 1359166;
            result[5] += 815500;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428a0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 57266230;
            result[2] += 0;
            result[3] += 0;
            result[4] += 28633115;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 85462199;
            result[2] += 0;
            result[3] += 0;
            result[4] += 437146;
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
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42f80000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3579139;
            result[3] += 7158278;
            result[4] += 10737418;
            result[5] += 64424509;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9911462;
            result[3] += 57816867;
            result[4] += 2477865;
            result[5] += 15693149;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 2684354;
            result[1] += 8053063;
            result[2] += 21474836;
            result[3] += 16106127;
            result[4] += 0;
            result[5] += 37580963;
          } else {
            result[0] += 8589934;
            result[1] += 0;
            result[2] += 65856165;
            result[3] += 11453246;
            result[4] += 0;
            result[5] += 0;
          }
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
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c80000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 923648;
            result[1] += 0;
            result[2] += 54495283;
            result[3] += 24014870;
            result[4] += 1847297;
            result[5] += 4618244;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 78319991;
            result[3] += 2526451;
            result[4] += 0;
            result[5] += 5052902;
          }
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 64424509;
          } else {
            result[0] += 2863311;
            result[1] += 0;
            result[2] += 68719476;
            result[3] += 14316557;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 7692478;
            result[1] += 0;
            result[2] += 72223828;
            result[3] += 4700959;
            result[4] += 0;
            result[5] += 1282079;
          } else {
            result[0] += 291678;
            result[1] += 0;
            result[2] += 84586792;
            result[3] += 1020875;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 85439991;
            result[5] += 459354;
          } else {
            result[0] += 0;
            result[1] += 38177487;
            result[2] += 0;
            result[3] += 0;
            result[4] += 28633115;
            result[5] += 19088743;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 27331610;
            result[2] += 0;
            result[3] += 0;
            result[4] += 54663220;
            result[5] += 3904515;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 6607641;
            result[4] += 6607641;
            result[5] += 72684061;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 82164591;
            result[5] += 3734754;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2006408;
            result[4] += 1755607;
            result[5] += 82137330;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42620000))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 159072;
            result[1] += 477218;
            result[2] += 3499602;
            result[3] += 31019208;
            result[4] += 11135100;
            result[5] += 39609142;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x43028000))) ) ) {
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
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 72155450;
            result[2] += 0;
            result[3] += 0;
            result[4] += 13743895;
            result[5] += 0;
          } else {
            result[0] += 377579;
            result[1] += 85521766;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 13071639;
            result[1] += 10581803;
            result[2] += 0;
            result[3] += 0;
            result[4] += 59133607;
            result[5] += 3112295;
          } else {
            result[0] += 75026010;
            result[1] += 1232311;
            result[2] += 72488;
            result[3] += 2319644;
            result[4] += 5146711;
            result[5] += 2102178;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 4003783;
            result[1] += 3639802;
            result[2] += 6187664;
            result[3] += 35306087;
            result[4] += 11283388;
            result[5] += 25478619;
          } else {
            result[0] += 23592073;
            result[1] += 0;
            result[2] += 41134898;
            result[3] += 14518199;
            result[4] += 0;
            result[5] += 6654174;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42930000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 85899345;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 85899345;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5368709;
            result[4] += 0;
            result[5] += 80530636;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42980000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 2231151;
            result[2] += 10040183;
            result[3] += 43507460;
            result[4] += 2231151;
            result[5] += 27889398;
          } else {
            result[0] += 19448908;
            result[1] += 3241484;
            result[2] += 50243013;
            result[3] += 4862227;
            result[4] += 1620742;
            result[5] += 6482969;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12271335;
            result[3] += 0;
            result[4] += 0;
            result[5] += 73628010;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 32212254;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 85899345;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 75793540;
            result[3] += 5052902;
            result[4] += 0;
            result[5] += 5052902;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26430567;
            result[3] += 52861135;
            result[4] += 0;
            result[5] += 6607641;
          } else {
            result[0] += 1726620;
            result[1] += 0;
            result[2] += 72518040;
            result[3] += 11654685;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 536870;
            result[1] += 0;
            result[2] += 77309411;
            result[3] += 8053063;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 334890;
            result[1] += 0;
            result[2] += 84057449;
            result[3] += 1339560;
            result[4] += 0;
            result[5] += 167445;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
            result[0] += 2225371;
            result[1] += 1335222;
            result[2] += 0;
            result[3] += 0;
            result[4] += 81003528;
            result[5] += 1335222;
          } else {
            result[0] += 59055800;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 13421772;
            result[5] += 13421772;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 2831846;
            result[1] += 1887897;
            result[2] += 943948;
            result[3] += 0;
            result[4] += 39645851;
            result[5] += 40589800;
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
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 32212254;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 335981;
            result[3] += 2911842;
            result[4] += 1903896;
            result[5] += 80747625;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 18457710;
            result[2] += 0;
            result[3] += 13488327;
            result[4] += 4259471;
            result[5] += 49693836;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8312839;
            result[3] += 52093796;
            result[4] += 0;
            result[5] += 25492709;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
            result[0] += 5023353;
            result[1] += 22102755;
            result[2] += 0;
            result[3] += 0;
            result[4] += 58270901;
            result[5] += 502335;
          } else {
            result[0] += 69282311;
            result[1] += 1072066;
            result[2] += 670041;
            result[3] += 3685229;
            result[4] += 6700416;
            result[5] += 4489279;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 3343387;
            result[1] += 1285918;
            result[2] += 3600571;
            result[3] += 34719795;
            result[4] += 6172408;
            result[5] += 36777264;
          } else {
            result[0] += 35071330;
            result[1] += 0;
            result[2] += 42187252;
            result[3] += 2541400;
            result[4] += 1016560;
            result[5] += 5082801;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42af0000))) ) ) {
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
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42960000))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
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
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428d0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42620000))) ) ) {
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
          result[4] += 0;
          result[5] += 85899345;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 3181457;
            result[1] += 0;
            result[2] += 25451658;
            result[3] += 9544371;
            result[4] += 6362914;
            result[5] += 41358944;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 29386618;
            result[3] += 51991709;
            result[4] += 0;
            result[5] += 4521018;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 85899345;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 72477573;
            result[3] += 8053063;
            result[4] += 0;
            result[5] += 5368709;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ba0000))) ) ) {
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
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 81127160;
            result[3] += 0;
            result[4] += 0;
            result[5] += 4772185;
          } else {
            result[0] += 37580963;
            result[1] += 0;
            result[2] += 16106127;
            result[3] += 0;
            result[4] += 0;
            result[5] += 32212254;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 6362914;
            result[1] += 0;
            result[2] += 54084773;
            result[3] += 25451658;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 81320954;
            result[3] += 4360372;
            result[4] += 0;
            result[5] += 218018;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42830000))) ) ) {
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
            result[4] += 36814005;
            result[5] += 49085340;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42820000))) ) ) {
            result[0] += 6135667;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 12271335;
            result[5] += 67492343;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 71582788;
            result[5] += 14316557;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428f0000))) ) ) {
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
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424a0000))) ) ) {
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
            result[3] += 0;
            result[4] += 79291703;
            result[5] += 6607641;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 85899345;
            result[5] += 0;
          } else {
            result[0] += 242996;
            result[1] += 0;
            result[2] += 121498;
            result[3] += 1336482;
            result[4] += 1214983;
            result[5] += 82983385;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
            result[0] += 52710962;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 31236125;
            result[5] += 1952257;
          } else {
            result[0] += 622459;
            result[1] += 933688;
            result[2] += 0;
            result[3] += 12137951;
            result[4] += 6847049;
            result[5] += 65358197;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 2526451;
            result[1] += 0;
            result[2] += 1263225;
            result[3] += 35370318;
            result[4] += 0;
            result[5] += 46739349;
          } else {
            result[0] += 894784;
            result[1] += 0;
            result[2] += 0;
            result[3] += 72477573;
            result[4] += 0;
            result[5] += 12526987;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42480000))) ) ) {
            result[0] += 0;
            result[1] += 65358197;
            result[2] += 0;
            result[3] += 0;
            result[4] += 20541147;
            result[5] += 0;
          } else {
            result[0] += 1576134;
            result[1] += 11821010;
            result[2] += 0;
            result[3] += 0;
            result[4] += 71714132;
            result[5] += 788067;
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
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
            result[0] += 35414642;
            result[1] += 3767515;
            result[2] += 0;
            result[3] += 20344581;
            result[4] += 18837575;
            result[5] += 7535030;
          } else {
            result[0] += 76734677;
            result[1] += 1553333;
            result[2] += 776666;
            result[3] += 1398000;
            result[4] += 4582334;
            result[5] += 854333;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 4068916;
            result[1] += 2260509;
            result[2] += 10398341;
            result[3] += 28482414;
            result[4] += 11754647;
            result[5] += 28934516;
          } else {
            result[0] += 64424509;
            result[1] += 894784;
            result[2] += 11632203;
            result[3] += 894784;
            result[4] += 8053063;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 5368709;
            result[4] += 53687091;
            result[5] += 16106127;
          } else {
            result[0] += 0;
            result[1] += 2095105;
            result[2] += 6285317;
            result[3] += 54472755;
            result[4] += 0;
            result[5] += 23046165;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12271335;
            result[3] += 36814005;
            result[4] += 3067833;
            result[5] += 33746171;
          } else {
            result[0] += 442780;
            result[1] += 0;
            result[2] += 52248055;
            result[3] += 24352907;
            result[4] += 1771120;
            result[5] += 7084482;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a50000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 2863311;
            result[1] += 2290649;
            result[2] += 54402919;
            result[3] += 12025908;
            result[4] += 572662;
            result[5] += 13743895;
          } else {
            result[0] += 55581929;
            result[1] += 30317416;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 806566;
            result[1] += 0;
            result[2] += 73397563;
            result[3] += 10082082;
            result[4] += 0;
            result[5] += 1613133;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 83767092;
            result[3] += 1979949;
            result[4] += 0;
            result[5] += 152303;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42900000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 399531;
            result[2] += 0;
            result[3] += 0;
            result[4] += 84700750;
            result[5] += 799063;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x429e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 9544371;
            result[4] += 19088743;
            result[5] += 57266230;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 85899345;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 85899345;
            result[5] += 0;
          } else {
            result[0] += 80172722;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5726623;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 568242;
            result[2] += 473535;
            result[3] += 6061254;
            result[4] += 6250669;
            result[5] += 72545643;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1308111;
            result[3] += 44911840;
            result[4] += 1744149;
            result[5] += 37935244;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42960000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 8589934;
            result[2] += 0;
            result[3] += 0;
            result[4] += 77309411;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 81127160;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4772185;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 85899345;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 85715800;
            result[2] += 0;
            result[3] += 0;
            result[4] += 183545;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 71224874;
            result[1] += 930576;
            result[2] += 0;
            result[3] += 2505397;
            result[4] += 10164755;
            result[5] += 1073741;
          } else {
            result[0] += 10412041;
            result[1] += 75487303;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 2169175;
            result[1] += 4772185;
            result[2] += 6073691;
            result[3] += 32971466;
            result[4] += 4338350;
            result[5] += 35574476;
          } else {
            result[0] += 51539607;
            result[1] += 0;
            result[2] += 21584963;
            result[3] += 1762037;
            result[4] += 7929170;
            result[5] += 3083566;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a60000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 85899345;
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
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b00000))) ) ) {
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
            result[3] += 74815559;
            result[4] += 0;
            result[5] += 11083786;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 85899345;
          } else {
            result[0] += 1590728;
            result[1] += 2386092;
            result[2] += 15907286;
            result[3] += 29428479;
            result[4] += 4772185;
            result[5] += 31814572;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
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
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 85899345;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 588351;
            result[1] += 0;
            result[2] += 64130333;
            result[3] += 18827253;
            result[4] += 0;
            result[5] += 2353406;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e50000))) ) ) {
            result[0] += 24542670;
            result[1] += 0;
            result[2] += 61356675;
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
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 35791394;
          } else {
            result[0] += 381774;
            result[1] += 0;
            result[2] += 80840828;
            result[3] += 4008636;
            result[4] += 0;
            result[5] += 668106;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42be0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x41e00000))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 350609;
            result[2] += 0;
            result[3] += 0;
            result[4] += 85548736;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42820000))) ) ) {
            result[0] += 3272356;
            result[1] += 7362801;
            result[2] += 0;
            result[3] += 0;
            result[4] += 57266230;
            result[5] += 17997958;
          } else {
            result[0] += 0;
            result[1] += 8421504;
            result[2] += 8421504;
            result[3] += 23580212;
            result[4] += 16843009;
            result[5] += 28633115;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42720000))) ) ) {
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
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 8589934;
            result[2] += 0;
            result[3] += 0;
            result[4] += 77309411;
            result[5] += 0;
          } else {
            result[0] += 11453246;
            result[1] += 74446099;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428d0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42620000))) ) ) {
            result[0] += 31069976;
            result[1] += 18276456;
            result[2] += 3655291;
            result[3] += 5482936;
            result[4] += 20104102;
            result[5] += 7310582;
          } else {
            result[0] += 95549;
            result[1] += 191099;
            result[2] += 95549;
            result[3] += 4873044;
            result[4] += 3248696;
            result[5] += 77395406;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 69056336;
            result[4] += 0;
            result[5] += 16843009;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 24865600;
            result[3] += 9042036;
            result[4] += 0;
            result[5] += 51991709;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
            result[0] += 4521018;
            result[1] += 25619103;
            result[2] += 0;
            result[3] += 0;
            result[4] += 55759224;
            result[5] += 0;
          } else {
            result[0] += 74262237;
            result[1] += 1210797;
            result[2] += 941731;
            result[3] += 2488861;
            result[4] += 4641389;
            result[5] += 2354328;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 3282777;
            result[1] += 820694;
            result[2] += 3829907;
            result[3] += 31186386;
            result[4] += 6291990;
            result[5] += 40487589;
          } else {
            result[0] += 22287397;
            result[1] += 0;
            result[2] += 46896399;
            result[3] += 10215057;
            result[4] += 1392962;
            result[5] += 5107528;
          }
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5368709;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 26843545;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 18407002;
            result[3] += 6135667;
            result[4] += 0;
            result[5] += 61356675;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42e50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 85899345;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 73628010;
            result[3] += 0;
            result[4] += 0;
            result[5] += 12271335;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 3904515;
            result[2] += 0;
            result[3] += 74185798;
            result[4] += 0;
            result[5] += 7809031;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 76354974;
            result[3] += 9544371;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0;
            result[1] += 5726623;
            result[2] += 62992853;
            result[3] += 1431655;
            result[4] += 1431655;
            result[5] += 14316557;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 28633115;
            result[4] += 0;
            result[5] += 57266230;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 76742562;
            result[3] += 8720745;
            result[4] += 0;
            result[5] += 436037;
          } else {
            result[0] += 5052902;
            result[1] += 0;
            result[2] += 58108381;
            result[3] += 21895911;
            result[4] += 0;
            result[5] += 842150;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 24542670;
            result[1] += 0;
            result[2] += 36814005;
            result[3] += 0;
            result[4] += 0;
            result[5] += 24542670;
          } else {
            result[0] += 303531;
            result[1] += 0;
            result[2] += 84229923;
            result[3] += 1365890;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42c00000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 85899345;
            result[5] += 0;
          } else {
            result[0] += 3506095;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 59603627;
            result[5] += 22789622;
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
        result[0] += 0;
        result[1] += 85899345;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 596523;
            result[4] += 2236962;
            result[5] += 83065860;
          } else {
            result[0] += 1201389;
            result[1] += 2102431;
            result[2] += 2402778;
            result[3] += 12914936;
            result[4] += 7809031;
            result[5] += 59468777;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 84146298;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1753047;
          } else {
            result[0] += 1867377;
            result[1] += 2801065;
            result[2] += 3734754;
            result[3] += 12137951;
            result[4] += 14939016;
            result[5] += 50419181;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bb0000))) ) ) {
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
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 2911842;
            result[1] += 5823684;
            result[2] += 0;
            result[3] += 23294737;
            result[4] += 5823684;
            result[5] += 48045396;
          } else {
            result[0] += 505290;
            result[1] += 0;
            result[2] += 2526451;
            result[3] += 69224766;
            result[4] += 1010580;
            result[5] += 12632256;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42400000))) ) ) {
            result[0] += 0;
            result[1] += 81604378;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4294967;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 24542670;
            result[2] += 1363481;
            result[3] += 0;
            result[4] += 59993193;
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
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42580000))) ) ) {
            result[0] += 80172722;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5726623;
            result[5] += 0;
          } else {
            result[0] += 4424000;
            result[1] += 2580667;
            result[2] += 4424000;
            result[3] += 22488669;
            result[4] += 28018670;
            result[5] += 23963336;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
            result[0] += 73873437;
            result[1] += 1419206;
            result[2] += 74695;
            result[3] += 1419206;
            result[4] += 8888714;
            result[5] += 224085;
          } else {
            result[0] += 31131306;
            result[1] += 12106619;
            result[2] += 2882528;
            result[3] += 12106619;
            result[4] += 16718664;
            result[5] += 10953607;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 13563054;
            result[4] += 0;
            result[5] += 72336291;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 19928648;
            result[3] += 47416438;
            result[4] += 0;
            result[5] += 18554258;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 28633115;
          } else {
            result[0] += 1443686;
            result[1] += 0;
            result[2] += 62078518;
            result[3] += 16602394;
            result[4] += 2165529;
            result[5] += 3609216;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ee0000))) ) ) {
            result[0] += 15339168;
            result[1] += 3067833;
            result[2] += 52153174;
            result[3] += 12271335;
            result[4] += 0;
            result[5] += 3067833;
          } else {
            result[0] += 85899345;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 1328340;
            result[1] += 0;
            result[2] += 66417020;
            result[3] += 11955063;
            result[4] += 442780;
            result[5] += 5756141;
          } else {
            result[0] += 371858;
            result[1] += 0;
            result[2] += 83172382;
            result[3] += 2231151;
            result[4] += 0;
            result[5] += 123952;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42300000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bb0000))) ) ) {
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
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
            result[0] += 330382;
            result[1] += 0;
            result[2] += 330382;
            result[3] += 0;
            result[4] += 84577817;
            result[5] += 660764;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 64424509;
            result[5] += 21474836;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 120645;
            result[1] += 0;
            result[2] += 0;
            result[3] += 844516;
            result[4] += 3378064;
            result[5] += 81556120;
          } else {
            result[0] += 1923119;
            result[1] += 8333518;
            result[2] += 1923119;
            result[3] += 24359516;
            result[4] += 3205199;
            result[5] += 46154872;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
            result[0] += 70219306;
            result[1] += 681740;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14316557;
            result[5] += 681740;
          } else {
            result[0] += 3406772;
            result[1] += 1216704;
            result[2] += 2676750;
            result[3] += 25307456;
            result[4] += 9976977;
            result[5] += 43314684;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42500000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
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
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 65165021;
            result[2] += 0;
            result[3] += 0;
            result[4] += 20734324;
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
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
            result[0] += 15081564;
            result[1] += 5245761;
            result[2] += 0;
            result[3] += 17704445;
            result[4] += 11802963;
            result[5] += 36064610;
          } else {
            result[0] += 77150338;
            result[1] += 1829337;
            result[2] += 0;
            result[3] += 1908874;
            result[4] += 4772185;
            result[5] += 238609;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 3694595;
            result[1] += 461824;
            result[2] += 24476695;
            result[3] += 37176867;
            result[4] += 3694595;
            result[5] += 16394767;
          } else {
            result[0] += 72955608;
            result[1] += 4706813;
            result[2] += 5883516;
            result[3] += 0;
            result[4] += 2353406;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c00000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42760000))) ) ) {
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
            result[3] += 1952257;
            result[4] += 9761289;
            result[5] += 74185798;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x429a0000))) ) ) {
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
            result[3] += 85899345;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42cd0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 44540401;
            result[4] += 12725829;
            result[5] += 28633115;
          } else {
            result[0] += 1827645;
            result[1] += 9138228;
            result[2] += 62139952;
            result[3] += 1827645;
            result[4] += 0;
            result[5] += 10965873;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34359738;
            result[3] += 51539607;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 81127160;
            result[1] += 0;
            result[2] += 4772185;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17179869;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 47244640;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17179869;
            result[3] += 68719476;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42d20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 73173516;
            result[3] += 9544371;
            result[4] += 0;
            result[5] += 3181457;
          } else {
            result[0] += 3734754;
            result[1] += 0;
            result[2] += 44817050;
            result[3] += 37347541;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42890000))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 206488;
            result[1] += 0;
            result[2] += 81253347;
            result[3] += 4336265;
            result[4] += 0;
            result[5] += 103244;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 433835;
            result[2] += 0;
            result[3] += 0;
            result[4] += 84164005;
            result[5] += 1301505;
          } else {
            result[0] += 0;
            result[1] += 2290649;
            result[2] += 0;
            result[3] += 4581298;
            result[4] += 59556879;
            result[5] += 19470518;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 83128399;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2770946;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 85899345;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
            result[0] += 6135667;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 49085340;
            result[5] += 30678337;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2634949;
            result[4] += 1317474;
            result[5] += 81946922;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 14364439;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5745775;
            result[4] += 14939016;
            result[5] += 50850114;
          } else {
            result[0] += 352046;
            result[1] += 0;
            result[2] += 6336836;
            result[3] += 47526277;
            result[4] += 2464325;
            result[5] += 29219859;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b20000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42340000))) ) ) {
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
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a60000))) ) ) {
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
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
            result[0] += 21048184;
            result[1] += 11946266;
            result[2] += 0;
            result[3] += 11377396;
            result[4] += 11946266;
            result[5] += 29581231;
          } else {
            result[0] += 71521970;
            result[1] += 1532613;
            result[2] += 802797;
            result[3] += 1897521;
            result[4] += 9779534;
            result[5] += 364908;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 3482405;
            result[1] += 2321603;
            result[2] += 6964811;
            result[3] += 42175804;
            result[4] += 5804009;
            result[5] += 25150709;
          } else {
            result[0] += 28633115;
            result[1] += 0;
            result[2] += 49669689;
            result[3] += 5259143;
            result[4] += 2337397;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42be0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x428c0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x426a0000))) ) ) {
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
            result[4] += 28633115;
            result[5] += 57266230;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1561806;
            result[3] += 1561806;
            result[4] += 1561806;
            result[5] += 81213927;
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
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 7158278;
            result[2] += 0;
            result[3] += 25053975;
            result[4] += 10737418;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 3579139;
            result[2] += 14316557;
            result[3] += 64424509;
            result[4] += 0;
            result[5] += 3579139;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 14939016;
            result[2] += 44817050;
            result[3] += 11204262;
            result[4] += 11204262;
            result[5] += 3734754;
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
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42dd0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 67678272;
            result[3] += 10412041;
            result[4] += 0;
            result[5] += 7809031;
          } else {
            result[0] += 85899345;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 85899345;
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
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5052902;
            result[3] += 65687735;
            result[4] += 0;
            result[5] += 15158708;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 61356675;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 3067833;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
            result[0] += 26843545;
            result[1] += 0;
            result[2] += 59055800;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 100939;
            result[1] += 0;
            result[2] += 80246744;
            result[3] += 5147904;
            result[4] += 0;
            result[5] += 403757;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a50000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 818089;
            result[2] += 0;
            result[3] += 0;
            result[4] += 82626989;
            result[5] += 2454267;
          } else {
            result[0] += 26587892;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 18407002;
            result[5] += 40904450;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5052902;
            result[3] += 0;
            result[4] += 80846443;
            result[5] += 0;
          } else {
            result[0] += 52710962;
            result[1] += 0;
            result[2] += 15618062;
            result[3] += 0;
            result[4] += 5856773;
            result[5] += 11713547;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1166714;
            result[4] += 1020875;
            result[5] += 83711756;
          } else {
            result[0] += 0;
            result[1] += 4521018;
            result[2] += 0;
            result[3] += 7535030;
            result[4] += 15070060;
            result[5] += 58773236;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 1437645;
            result[2] += 718822;
            result[3] += 11501167;
            result[4] += 12219990;
            result[5] += 60021718;
          } else {
            result[0] += 0;
            result[1] += 376751;
            result[2] += 753503;
            result[3] += 47093939;
            result[4] += 6404775;
            result[5] += 31270375;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0;
            result[1] += 85501663;
            result[2] += 0;
            result[3] += 0;
            result[4] += 397682;
            result[5] += 0;
          } else {
            result[0] += 7809031;
            result[1] += 46854188;
            result[2] += 15618062;
            result[3] += 0;
            result[4] += 15618062;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 14900906;
            result[1] += 23666146;
            result[2] += 0;
            result[3] += 1753047;
            result[4] += 43387934;
            result[5] += 2191309;
          } else {
            result[0] += 75371717;
            result[1] += 76287;
            result[2] += 228861;
            result[3] += 3356635;
            result[4] += 4424655;
            result[5] += 2441189;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 2842257;
            result[1] += 6947741;
            result[2] += 17685159;
            result[3] += 23685481;
            result[4] += 8842579;
            result[5] += 25896126;
          } else {
            result[0] += 61989218;
            result[1] += 0;
            result[2] += 18596765;
            result[3] += 885560;
            result[4] += 4427801;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ad0000))) ) ) {
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
            result[3] += 85899345;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42da0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4090445;
            result[3] += 4090445;
            result[4] += 6135667;
            result[5] += 71582788;
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7040929;
            result[3] += 64776555;
            result[4] += 0;
            result[5] += 14081859;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8765239;
            result[3] += 29801813;
            result[4] += 0;
            result[5] += 47332292;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37580963;
            result[3] += 37580963;
            result[4] += 0;
            result[5] += 10737418;
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
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7809031;
            result[3] += 39045157;
            result[4] += 15618062;
            result[5] += 23427094;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 85899345;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 28633115;
            result[2] += 0;
            result[3] += 14316557;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 14316557;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 25769803;
            result[5] += 2863311;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42f90000))) ) ) {
            result[0] += 0;
            result[1] += 795364;
            result[2] += 70389741;
            result[3] += 11532782;
            result[4] += 198841;
            result[5] += 2982616;
          } else {
            result[0] += 85899345;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42f90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 83339961;
            result[3] += 2399423;
            result[4] += 0;
            result[5] += 159961;
          } else {
            result[0] += 14316557;
            result[1] += 0;
            result[2] += 71582788;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42870000))) ) ) {
            result[0] += 1034931;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 84174459;
            result[5] += 689954;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 85899345;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 16361780;
            result[5] += 69537565;
          } else {
            result[0] += 6135667;
            result[1] += 3067833;
            result[2] += 0;
            result[3] += 0;
            result[4] += 64424509;
            result[5] += 12271335;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x424a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 85899345;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 262689;
            result[2] += 0;
            result[3] += 2232857;
            result[4] += 919411;
            result[5] += 82484387;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 83947088;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1952257;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 177112;
            result[2] += 1239784;
            result[3] += 27629480;
            result[4] += 7792930;
            result[5] += 49060038;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x423c0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 32212254;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 190464;
            result[1] += 85518417;
            result[2] += 0;
            result[3] += 0;
            result[4] += 190464;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 3834792;
            result[1] += 9203501;
            result[2] += 766958;
            result[3] += 1533916;
            result[4] += 70560176;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
            result[0] += 5726623;
            result[1] += 34359738;
            result[2] += 0;
            result[3] += 0;
            result[4] += 43904110;
            result[5] += 1908874;
          } else {
            result[0] += 75830816;
            result[1] += 563274;
            result[2] += 492865;
            result[3] += 2112278;
            result[4] += 4787832;
            result[5] += 2112278;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e30000))) ) ) {
            result[0] += 5021807;
            result[1] += 7400559;
            result[2] += 16915563;
            result[3] += 30659458;
            result[4] += 2643056;
            result[5] += 23258899;
          } else {
            result[0] += 70960329;
            result[1] += 0;
            result[2] += 8714426;
            result[3] += 1244918;
            result[4] += 4979672;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4772185;
            result[3] += 62038416;
            result[4] += 0;
            result[5] += 19088743;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36814005;
            result[3] += 0;
            result[4] += 0;
            result[5] += 49085340;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c30000))) ) ) {
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
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a30000))) ) ) {
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
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 85899345;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 75987882;
            result[3] += 0;
            result[4] += 0;
            result[5] += 9911462;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 22605091;
            result[3] += 49731200;
            result[4] += 0;
            result[5] += 13563054;
          } else {
            result[0] += 23427094;
            result[1] += 0;
            result[2] += 39045157;
            result[3] += 0;
            result[4] += 7809031;
            result[5] += 15618062;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 24542670;
            result[3] += 24542670;
            result[4] += 0;
            result[5] += 36814005;
          } else {
            result[0] += 3506095;
            result[1] += 0;
            result[2] += 73628010;
            result[3] += 7012191;
            result[4] += 0;
            result[5] += 1753047;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42cf0000))) ) ) {
            result[0] += 1130254;
            result[1] += 0;
            result[2] += 80248073;
            result[3] += 4521018;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 5965232;
            result[1] += 0;
            result[2] += 59652323;
            result[3] += 20281790;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 62472251;
            result[3] += 23427094;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 83981338;
            result[3] += 1918007;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d70000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 321720;
            result[1] += 643440;
            result[2] += 0;
            result[3] += 321720;
            result[4] += 83325582;
            result[5] += 1286881;
          } else {
            result[0] += 2962046;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51835812;
            result[5] += 31101487;
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
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 85183518;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 715827;
          } else {
            result[0] += 9544371;
            result[1] += 19088743;
            result[2] += 0;
            result[3] += 0;
            result[4] += 57266230;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 621708;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4351957;
            result[4] += 5077283;
            result[5] += 75848397;
          } else {
            result[0] += 4077500;
            result[1] += 543666;
            result[2] += 543666;
            result[3] += 31260837;
            result[4] += 10601501;
            result[5] += 38872172;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42540000))) ) ) {
            result[0] += 3506095;
            result[1] += 57850579;
            result[2] += 5259143;
            result[3] += 0;
            result[4] += 19283526;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 19976592;
            result[2] += 3995318;
            result[3] += 0;
            result[4] += 57932117;
            result[5] += 3995318;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 85499814;
            result[2] += 0;
            result[3] += 0;
            result[4] += 399531;
            result[5] += 0;
          } else {
            result[0] += 32212254;
            result[1] += 21474836;
            result[2] += 21474836;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 25839640;
            result[1] += 21649428;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35616801;
            result[5] += 2793474;
          } else {
            result[0] += 79757226;
            result[1] += 541951;
            result[2] += 0;
            result[3] += 2077481;
            result[4] += 2438782;
            result[5] += 1083903;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 2669188;
            result[1] += 1213267;
            result[2] += 24750658;
            result[3] += 32030264;
            result[4] += 1213267;
            result[5] += 24022698;
          } else {
            result[0] += 67605966;
            result[1] += 0;
            result[2] += 8749007;
            result[3] += 795364;
            result[4] += 7158278;
            result[5] += 1590728;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 26430567;
            result[2] += 13215283;
            result[3] += 0;
            result[4] += 46253493;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 6362914;
            result[4] += 3181457;
            result[5] += 76354974;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 19522578;
            result[2] += 11713547;
            result[3] += 0;
            result[4] += 3904515;
            result[5] += 50758704;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 54402919;
            result[4] += 0;
            result[5] += 2863311;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b90000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42890000))) ) ) {
            result[0] += 39645851;
            result[1] += 0;
            result[2] += 39645851;
            result[3] += 0;
            result[4] += 6607641;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 82320206;
            result[3] += 3579139;
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
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a60000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26430567;
            result[3] += 0;
            result[4] += 13215283;
            result[5] += 46253493;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 85899345;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 57266230;
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
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 397682;
            result[1] += 0;
            result[2] += 77548020;
            result[3] += 7953643;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 257955;
            result[1] += 0;
            result[2] += 84093653;
            result[3] += 1547735;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42be0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 3078829;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 79433803;
            result[5] += 3386712;
          } else {
            result[0] += 0;
            result[1] += 71089113;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14810232;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 2454267;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17179869;
            result[5] += 66265209;
          } else {
            result[0] += 79886391;
            result[1] += 858993;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4724464;
            result[5] += 429496;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 587345;
            result[4] += 587345;
            result[5] += 84724653;
          } else {
            result[0] += 499414;
            result[1] += 0;
            result[2] += 0;
            result[3] += 14483029;
            result[4] += 13484199;
            result[5] += 57432702;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 1101273;
            result[1] += 0;
            result[2] += 0;
            result[3] += 12664647;
            result[4] += 7158278;
            result[5] += 64975146;
          } else {
            result[0] += 5213544;
            result[1] += 3723960;
            result[2] += 496528;
            result[3] += 34260432;
            result[4] += 8937504;
            result[5] += 33267376;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x425c0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 85465510;
            result[2] += 0;
            result[3] += 0;
            result[4] += 433835;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 12271335;
            result[1] += 12271335;
            result[2] += 22088403;
            result[3] += 0;
            result[4] += 31905471;
            result[5] += 7362801;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 21144454;
            result[1] += 1321528;
            result[2] += 0;
            result[3] += 13215283;
            result[4] += 35681266;
            result[5] += 14536812;
          } else {
            result[0] += 76297822;
            result[1] += 2657564;
            result[2] += 0;
            result[3] += 1028734;
            result[4] += 5229401;
            result[5] += 685823;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 1963413;
            result[1] += 981706;
            result[2] += 4908534;
            result[3] += 33378031;
            result[4] += 9326214;
            result[5] += 35341445;
          } else {
            result[0] += 37625333;
            result[1] += 709911;
            result[2] += 30526213;
            result[3] += 2839647;
            result[4] += 7809031;
            result[5] += 6389207;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b00000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b90000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 10737418;
            result[4] += 32212254;
            result[5] += 32212254;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 85899345;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 7158278;
            result[2] += 7158278;
            result[3] += 21474836;
            result[4] += 2386092;
            result[5] += 47721858;
          } else {
            result[0] += 0;
            result[1] += 7579354;
            result[2] += 2526451;
            result[3] += 63161283;
            result[4] += 3789677;
            result[5] += 8842579;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 6135667;
            result[2] += 12271335;
            result[3] += 67492343;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 58773236;
            result[3] += 11302545;
            result[4] += 0;
            result[5] += 15823563;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 1378064;
            result[1] += 0;
            result[2] += 68673541;
            result[3] += 12402579;
            result[4] += 229677;
            result[5] += 3215483;
          } else {
            result[0] += 0;
            result[1] += 85899345;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 50529027;
            result[1] += 0;
            result[2] += 35370318;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 28633115;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 57266230;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 70628351;
            result[3] += 15270994;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 81100499;
            result[3] += 4798846;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 85210313;
            result[3] += 689032;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x423c0000))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1391082;
            result[2] += 0;
            result[3] += 0;
            result[4] += 83812722;
            result[5] += 695541;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 6285317;
            result[4] += 18855953;
            result[5] += 60758073;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 78741067;
            result[5] += 7158278;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 55934457;
            result[5] += 29964888;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 750212;
            result[3] += 3500992;
            result[4] += 875248;
            result[5] += 80772892;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42620000))) ) ) {
            result[0] += 65942932;
            result[1] += 9544371;
            result[2] += 0;
            result[3] += 4338350;
            result[4] += 6073691;
            result[5] += 0;
          } else {
            result[0] += 4841925;
            result[1] += 0;
            result[2] += 717322;
            result[3] += 30127536;
            result[4] += 11297826;
            result[5] += 38914734;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42300000))) ) ) {
            result[0] += 0;
            result[1] += 79456894;
            result[2] += 0;
            result[3] += 4294967;
            result[4] += 2147483;
            result[5] += 0;
          } else {
            result[0] += 4521018;
            result[1] += 12432800;
            result[2] += 0;
            result[3] += 0;
            result[4] += 66685018;
            result[5] += 2260509;
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
            result[0] += 34359738;
            result[1] += 51539607;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
            result[0] += 71582788;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8589934;
            result[5] += 5726623;
          } else {
            result[0] += 1419823;
            result[1] += 0;
            result[2] += 709911;
            result[3] += 17747798;
            result[4] += 4259471;
            result[5] += 61762339;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 10052051;
            result[1] += 34725267;
            result[2] += 913822;
            result[3] += 0;
            result[4] += 37466735;
            result[5] += 2741468;
          } else {
            result[0] += 77317074;
            result[1] += 153254;
            result[2] += 919529;
            result[3] += 1915685;
            result[4] += 3831371;
            result[5] += 1762430;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 20043180;
            result[4] += 0;
            result[5] += 65856165;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 85899345;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3846239;
            result[3] += 70514388;
            result[4] += 0;
            result[5] += 11538718;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34139483;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 8810189;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 61356675;
            result[3] += 0;
            result[4] += 0;
            result[5] += 24542670;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 75161927;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42380000))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 56825721;
            result[3] += 21144454;
            result[4] += 0;
            result[5] += 7929170;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ed0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 18084072;
            result[3] += 18084072;
            result[4] += 0;
            result[5] += 49731200;
          } else {
            result[0] += 6482969;
            result[1] += 0;
            result[2] += 64829695;
            result[3] += 4862227;
            result[4] += 6482969;
            result[5] += 3241484;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 85899345;
            result[5] += 0;
          } else {
            result[0] += 81604378;
            result[1] += 0;
            result[2] += 4294967;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10105805;
            result[3] += 60634832;
            result[4] += 5052902;
            result[5] += 10105805;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 78741067;
            result[3] += 0;
            result[4] += 0;
            result[5] += 7158278;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 863310;
            result[1] += 0;
            result[2] += 67338180;
            result[3] += 16834545;
            result[4] += 0;
            result[5] += 863310;
          } else {
            result[0] += 602379;
            result[1] += 0;
            result[2] += 80718880;
            result[3] += 4578085;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b80000))) ) ) {
            result[0] += 1326630;
            result[1] += 0;
            result[2] += 0;
            result[3] += 994973;
            result[4] += 79597849;
            result[5] += 3979892;
          } else {
            result[0] += 0;
            result[1] += 68719476;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17179869;
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
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x424e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 68719476;
            result[5] += 17179869;
          } else {
            result[0] += 122363;
            result[1] += 244727;
            result[2] += 122363;
            result[3] += 2080183;
            result[4] += 2324911;
            result[5] += 81004796;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 57947971;
            result[1] += 1363481;
            result[2] += 0;
            result[3] += 681740;
            result[4] += 22497447;
            result[5] += 3408704;
          } else {
            result[0] += 1039104;
            result[1] += 0;
            result[2] += 3463683;
            result[3] += 33944096;
            result[4] += 5715077;
            result[5] += 41737383;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42460000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
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
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ad0000))) ) ) {
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
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 9421218;
            result[1] += 9421218;
            result[2] += 1662567;
            result[3] += 4987703;
            result[4] += 52647986;
            result[5] += 7758650;
          } else {
            result[0] += 913822;
            result[1] += 74019649;
            result[2] += 0;
            result[3] += 0;
            result[4] += 6396759;
            result[5] += 4569114;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
            result[0] += 79304230;
            result[1] += 325684;
            result[2] += 0;
            result[3] += 1547002;
            result[4] += 3175426;
            result[5] += 1547002;
          } else {
            result[0] += 17583423;
            result[1] += 2882528;
            result[2] += 19312940;
            result[3] += 17295170;
            result[4] += 5765056;
            result[5] += 23060227;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42660000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42cf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 85899345;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 68719476;
            result[3] += 0;
            result[4] += 0;
            result[5] += 17179869;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3655291;
            result[4] += 3655291;
            result[5] += 78588763;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2260509;
            result[3] += 31647127;
            result[4] += 2260509;
            result[5] += 49731200;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 1997659;
            result[1] += 4994148;
            result[2] += 7990636;
            result[3] += 50940309;
            result[4] += 2996488;
            result[5] += 16980103;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 71582788;
            result[3] += 0;
            result[4] += 0;
            result[5] += 14316557;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 75161927;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1431655;
            result[1] += 0;
            result[2] += 67287820;
            result[3] += 12884901;
            result[4] += 0;
            result[5] += 4294967;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42aa0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42d50000))) ) ) {
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 73628010;
            result[3] += 0;
            result[4] += 0;
            result[5] += 12271335;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 2120971;
            result[1] += 0;
            result[2] += 56205744;
            result[3] += 23330686;
            result[4] += 0;
            result[5] += 4241943;
          } else {
            result[0] += 1842894;
            result[1] += 0;
            result[2] += 79551599;
            result[3] += 4095320;
            result[4] += 102383;
            result[5] += 307149;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42810000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42830000))) ) ) {
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
            result[3] += 0;
            result[4] += 85899345;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428e0000))) ) ) {
            result[0] += 15618062;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 31236125;
            result[5] += 39045157;
          } else {
            result[0] += 4521018;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 81378327;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5052902;
            result[5] += 80846443;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 51539607;
            result[4] += 17179869;
            result[5] += 17179869;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 3734754;
            result[2] += 0;
            result[3] += 0;
            result[4] += 78429837;
            result[5] += 3734754;
          } else {
            result[0] += 3817748;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 15270994;
            result[5] += 66810602;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 250435;
            result[2] += 125217;
            result[3] += 1627830;
            result[4] += 2003483;
            result[5] += 81892379;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 27610504;
            result[4] += 6135667;
            result[5] += 52153174;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 82775733;
            result[1] += 1561806;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1561806;
            result[5] += 0;
          } else {
            result[0] += 1160801;
            result[1] += 773867;
            result[2] += 0;
            result[3] += 12381887;
            result[4] += 11221085;
            result[5] += 60361702;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 1651910;
            result[1] += 1651910;
            result[2] += 825955;
            result[3] += 28082478;
            result[4] += 7433597;
            result[5] += 46253493;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 73628010;
            result[4] += 0;
            result[5] += 12271335;
          }
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 14763950;
            result[1] += 28185722;
            result[2] += 0;
            result[3] += 1006632;
            result[4] += 40600862;
            result[5] += 1342177;
          } else {
            result[0] += 76948075;
            result[1] += 656973;
            result[2] += 1231826;
            result[3] += 2545774;
            result[4] += 3777600;
            result[5] += 739095;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 381774;
            result[1] += 1145324;
            result[2] += 4581298;
            result[3] += 41613460;
            result[4] += 6108397;
            result[5] += 32069089;
          } else {
            result[0] += 35400942;
            result[1] += 520602;
            result[2] += 36962748;
            result[3] += 5206020;
            result[4] += 3123612;
            result[5] += 4685418;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 85279879;
            result[2] += 0;
            result[3] += 0;
            result[4] += 619466;
            result[5] += 0;
          } else {
            result[0] += 57266230;
            result[1] += 28633115;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 11453246;
            result[2] += 0;
            result[3] += 0;
            result[4] += 62992853;
            result[5] += 11453246;
          } else {
            result[0] += 0;
            result[1] += 2801065;
            result[2] += 22408525;
            result[3] += 31745410;
            result[4] += 1867377;
            result[5] += 27076967;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17179869;
            result[3] += 25769803;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 61798090;
            result[3] += 19775388;
            result[4] += 0;
            result[5] += 4325866;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 25264513;
            result[3] += 0;
            result[4] += 25264513;
            result[5] += 35370318;
          } else {
            result[0] += 0;
            result[1] += 85899345;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42950000))) ) ) {
            result[0] += 42949672;
            result[1] += 7158278;
            result[2] += 35791394;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 842150;
            result[1] += 0;
            result[2] += 80214830;
            result[3] += 4737096;
            result[4] += 105268;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 706990;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 82717888;
            result[5] += 2474466;
          } else {
            result[0] += 1651910;
            result[1] += 6607641;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41297762;
            result[5] += 36342030;
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
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 62472251;
            result[1] += 15618062;
            result[2] += 0;
            result[3] += 3123612;
            result[4] += 3123612;
            result[5] += 1561806;
          } else {
            result[0] += 101897;
            result[1] += 0;
            result[2] += 101897;
            result[3] += 6623318;
            result[4] += 4789168;
            result[5] += 74283064;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 3137875;
            result[1] += 392234;
            result[2] += 6275751;
            result[3] += 28633115;
            result[4] += 3530110;
            result[5] += 43930259;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 84597840;
            result[4] += 0;
            result[5] += 1301505;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42500000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x421a0000))) ) ) {
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
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 21474836;
            result[2] += 0;
            result[3] += 0;
            result[4] += 64424509;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 85708458;
            result[2] += 0;
            result[3] += 0;
            result[4] += 190887;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 17602324;
            result[1] += 3520464;
            result[2] += 0;
            result[3] += 4928650;
            result[4] += 58439718;
            result[5] += 1408185;
          } else {
            result[0] += 1115575;
            result[1] += 56894371;
            result[2] += 0;
            result[3] += 2231151;
            result[4] += 25658246;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42950000))) ) ) {
            result[0] += 72477573;
            result[1] += 290200;
            result[2] += 72550;
            result[3] += 3264755;
            result[4] += 5586359;
            result[5] += 4207907;
          } else {
            result[0] += 22605091;
            result[1] += 695541;
            result[2] += 23300632;
            result[3] += 18084072;
            result[4] += 5216559;
            result[5] += 15997449;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 74446099;
            result[5] += 11453246;
          } else {
            result[0] += 0;
            result[1] += 85899345;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 766958;
            result[1] += 0;
            result[2] += 3834792;
            result[3] += 42949672;
            result[4] += 3834792;
            result[5] += 34513130;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5052902;
            result[3] += 0;
            result[4] += 0;
            result[5] += 80846443;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 2770946;
            result[2] += 16625679;
            result[3] += 8312839;
            result[4] += 11083786;
            result[5] += 47106092;
          } else {
            result[0] += 59055800;
            result[1] += 0;
            result[2] += 5368709;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33038209;
            result[3] += 39645851;
            result[4] += 6607641;
            result[5] += 6607641;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 70590551;
            result[3] += 9355374;
            result[4] += 0;
            result[5] += 5953420;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ca0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30678337;
            result[3] += 18407002;
            result[4] += 0;
            result[5] += 36814005;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 68719476;
            result[4] += 0;
            result[5] += 17179869;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 59468777;
            result[3] += 24027789;
            result[4] += 0;
            result[5] += 2402778;
          } else {
            result[0] += 0;
            result[1] += 3241484;
            result[2] += 81037118;
            result[3] += 1620742;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 73014444;
            result[3] += 12884901;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 85899345;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 84794023;
            result[3] += 1105322;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42140000))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1209849;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 82673079;
            result[5] += 2016416;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 85899345;
            result[4] += 0;
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 8589934;
            result[4] += 42949672;
            result[5] += 34359738;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 245076;
            result[3] += 2328227;
            result[4] += 980306;
            result[5] += 82345735;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 42949672;
            result[1] += 7874106;
            result[2] += 0;
            result[3] += 715827;
            result[4] += 24338148;
            result[5] += 10021590;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3113622;
            result[3] += 33517228;
            result[4] += 1831542;
            result[5] += 47436952;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 14316557;
            result[2] += 0;
            result[3] += 71582788;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 566369;
            result[1] += 84577817;
            result[2] += 377579;
            result[3] += 188789;
            result[4] += 188789;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 36873865;
            result[1] += 5028254;
            result[2] += 838042;
            result[3] += 6075807;
            result[4] += 28074420;
            result[5] += 9008955;
          } else {
            result[0] += 74893223;
            result[1] += 2923501;
            result[2] += 343941;
            result[3] += 1203794;
            result[4] += 6190943;
            result[5] += 343941;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 4349333;
            result[1] += 1812222;
            result[2] += 16672446;
            result[3] += 34432227;
            result[4] += 5074222;
            result[5] += 23558892;
          } else {
            result[0] += 33307909;
            result[1] += 0;
            result[2] += 46455768;
            result[3] += 2629571;
            result[4] += 0;
            result[5] += 3506095;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 85899345;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 85899345;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2770946;
            result[3] += 0;
            result[4] += 0;
            result[5] += 83128399;
          } else {
            result[0] += 0;
            result[1] += 8589934;
            result[2] += 0;
            result[3] += 51539607;
            result[4] += 0;
            result[5] += 25769803;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 7809031;
            result[4] += 0;
            result[5] += 78090314;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33486185;
            result[3] += 37853949;
            result[4] += 0;
            result[5] += 14559211;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 42949672;
            result[1] += 32212254;
            result[2] += 0;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 8589934;
            result[2] += 71582788;
            result[3] += 2863311;
            result[4] += 0;
            result[5] += 2863311;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 25769803;
            result[1] += 0;
            result[2] += 60129542;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 28633115;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 67958343;
            result[3] += 17941002;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1311440;
            result[1] += 0;
            result[2] += 79997864;
            result[3] += 4590041;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d90000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42f70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 80771026;
            result[3] += 5128319;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 15618062;
            result[1] += 0;
            result[2] += 54663220;
            result[3] += 15618062;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 85320249;
            result[3] += 579096;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 399531;
            result[2] += 0;
            result[3] += 0;
            result[4] += 84301218;
            result[5] += 1198595;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 3846239;
            result[2] += 0;
            result[3] += 1282079;
            result[4] += 67950228;
            result[5] += 12820797;
          } else {
            result[0] += 7953643;
            result[1] += 1590728;
            result[2] += 0;
            result[3] += 1590728;
            result[4] += 27042386;
            result[5] += 47721858;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42620000))) ) ) {
            result[0] += 69537565;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 16361780;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 95762;
            result[3] += 5458486;
            result[4] += 5266961;
            result[5] += 75078135;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 60447687;
            result[1] += 4241943;
            result[2] += 1060485;
            result[3] += 0;
            result[4] += 11665343;
            result[5] += 8483886;
          } else {
            result[0] += 215827;
            result[1] += 2374102;
            result[2] += 2158275;
            result[3] += 47482050;
            result[4] += 2374102;
            result[5] += 31294987;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cc0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 85899345;
            result[5] += 0;
          } else {
            result[0] += 28633115;
            result[1] += 57266230;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42620000))) ) ) {
            result[0] += 353495;
            result[1] += 85192355;
            result[2] += 0;
            result[3] += 176747;
            result[4] += 176747;
            result[5] += 0;
          } else {
            result[0] += 2321603;
            result[1] += 27859247;
            result[2] += 0;
            result[3] += 0;
            result[4] += 55718494;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
            result[0] += 20211610;
            result[1] += 11790106;
            result[2] += 1684300;
            result[3] += 10105805;
            result[4] += 15158708;
            result[5] += 26948814;
          } else {
            result[0] += 76908929;
            result[1] += 1716352;
            result[2] += 81731;
            result[3] += 653848;
            result[4] += 6048098;
            result[5] += 490386;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 3080056;
            result[1] += 0;
            result[2] += 19849251;
            result[3] += 25667135;
            result[4] += 2053370;
            result[5] += 35249532;
          } else {
            result[0] += 55476660;
            result[1] += 0;
            result[2] += 13421772;
            result[3] += 1789569;
            result[4] += 11632203;
            result[5] += 3579139;
          }
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d50000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a60000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6362914;
            result[3] += 63629145;
            result[4] += 0;
            result[5] += 15907286;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 0;
            result[4] += 0;
            result[5] += 71582788;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 70481514;
            result[3] += 13215283;
            result[4] += 0;
            result[5] += 2202547;
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
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 24542670;
            result[3] += 24542670;
            result[4] += 0;
            result[5] += 36814005;
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 264305;
            result[1] += 0;
            result[2] += 71626839;
            result[3] += 12686672;
            result[4] += 0;
            result[5] += 1321528;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 0;
            result[4] += 0;
            result[5] += 57266230;
          } else {
            result[0] += 286809;
            result[1] += 0;
            result[2] += 82457635;
            result[3] += 3154900;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42240000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 332943;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 83235800;
            result[5] += 2330602;
          } else {
            result[0] += 0;
            result[1] += 7809031;
            result[2] += 0;
            result[3] += 18221073;
            result[4] += 54663220;
            result[5] += 5206020;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
            result[0] += 21838816;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1455921;
            result[4] += 33486185;
            result[5] += 29118422;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3817748;
            result[4] += 2227020;
            result[5] += 79854577;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 2822983;
            result[1] += 2822983;
            result[2] += 2218058;
            result[3] += 42949672;
            result[4] += 7864024;
            result[5] += 27221623;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 85899345;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 85703675;
            result[2] += 0;
            result[3] += 0;
            result[4] += 195670;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 7953643;
            result[1] += 1590728;
            result[2] += 0;
            result[3] += 0;
            result[4] += 76354974;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 51539607;
            result[2] += 0;
            result[3] += 3435973;
            result[4] += 22333829;
            result[5] += 8589934;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42680000))) ) ) {
            result[0] += 80331795;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5567550;
            result[5] += 0;
          } else {
            result[0] += 6583526;
            result[1] += 2194508;
            result[2] += 10659042;
            result[3] += 21004584;
            result[4] += 8464534;
            result[5] += 36993148;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 74942796;
            result[1] += 3593748;
            result[2] += 350609;
            result[3] += 1227133;
            result[4] += 4820881;
            result[5] += 964176;
          } else {
            result[0] += 12271335;
            result[1] += 1227133;
            result[2] += 48471773;
            result[3] += 15952735;
            result[4] += 3681400;
            result[5] += 4294967;
          }
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 12271335;
            result[2] += 3067833;
            result[3] += 9203501;
            result[4] += 7669584;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10105805;
            result[3] += 68214186;
            result[4] += 2526451;
            result[5] += 5052902;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 14316557;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 71582788;
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
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42e40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 85899345;
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
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42da0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 80530636;
            result[3] += 0;
            result[4] += 2684354;
            result[5] += 2684354;
          } else {
            result[0] += 57266230;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
            result[0] += 13563054;
            result[1] += 0;
            result[2] += 22605091;
            result[3] += 9042036;
            result[4] += 0;
            result[5] += 40689163;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 20824083;
            result[3] += 59869241;
            result[4] += 0;
            result[5] += 5206020;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 57266230;
            result[3] += 23264406;
            result[4] += 0;
            result[5] += 5368709;
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42960000))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
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
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 10737418;
            result[1] += 32212254;
            result[2] += 10737418;
            result[3] += 32212254;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 437703;
            result[1] += 0;
            result[2] += 80865753;
            result[3] += 4048758;
            result[4] += 0;
            result[5] += 547129;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42420000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 645859;
            result[2] += 0;
            result[3] += 0;
            result[4] += 82024187;
            result[5] += 3229298;
          } else {
            result[0] += 0;
            result[1] += 10105805;
            result[2] += 0;
            result[3] += 20211610;
            result[4] += 15158708;
            result[5] += 40423221;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 85899345;
            result[5] += 0;
          } else {
            result[0] += 79975253;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5924092;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 95443;
            result[2] += 0;
            result[3] += 4008636;
            result[4] += 5249404;
            result[5] += 76545861;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1043311;
            result[3] += 40689163;
            result[4] += 5216559;
            result[5] += 38950310;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a60000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42bb0000))) ) ) {
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
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 19522578;
            result[3] += 19522578;
            result[4] += 3904515;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 16647160;
            result[1] += 22973080;
            result[2] += 332943;
            result[3] += 3995318;
            result[4] += 40619070;
            result[5] += 1331772;
          } else {
            result[0] += 78978545;
            result[1] += 325684;
            result[2] += 81421;
            result[3] += 1709844;
            result[4] += 3989637;
            result[5] += 814211;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 2851430;
            result[1] += 1069286;
            result[2] += 13900724;
            result[3] += 33504309;
            result[4] += 1069286;
            result[5] += 33504309;
          } else {
            result[0] += 38132887;
            result[1] += 0;
            result[2] += 32914702;
            result[3] += 4816785;
            result[4] += 6823779;
            result[5] += 3211190;
          }
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d60000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42860000))) ) ) {
            result[0] += 0;
            result[1] += 48318382;
            result[2] += 0;
            result[3] += 0;
            result[4] += 37580963;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 9286415;
            result[2] += 16251227;
            result[3] += 2321603;
            result[4] += 2321603;
            result[5] += 55718494;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 1263225;
            result[2] += 15158708;
            result[3] += 61898058;
            result[4] += 0;
            result[5] += 7579354;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 54033459;
            result[3] += 24938519;
            result[4] += 0;
            result[5] += 6927366;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7158278;
            result[3] += 0;
            result[4] += 0;
            result[5] += 78741067;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 0;
            result[4] += 57266230;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 5726623;
            result[1] += 0;
            result[2] += 80172722;
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
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 85899345;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42df0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17179869;
            result[3] += 0;
            result[4] += 0;
            result[5] += 68719476;
          } else {
            result[0] += 85899345;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 85899345;
          } else {
            result[0] += 104500;
            result[1] += 0;
            result[2] += 80778825;
            result[3] += 4702518;
            result[4] += 0;
            result[5] += 313501;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42960000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 85899345;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 9544371;
            result[2] += 0;
            result[3] += 0;
            result[4] += 47721858;
            result[5] += 28633115;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x425a0000))) ) ) {
            result[0] += 68719476;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17179869;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3014012;
            result[3] += 1507006;
            result[4] += 55759224;
            result[5] += 25619103;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1172687;
            result[4] += 3078304;
            result[5] += 81648354;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1590728;
            result[3] += 28633115;
            result[4] += 0;
            result[5] += 55675501;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
            result[0] += 75591424;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1717986;
            result[4] += 6871947;
            result[5] += 1717986;
          } else {
            result[0] += 0;
            result[1] += 1205000;
            result[2] += 860714;
            result[3] += 30813593;
            result[4] += 4992146;
            result[5] += 48027890;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 10737418;
            result[2] += 0;
            result[3] += 0;
            result[4] += 75161927;
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
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 32212254;
            result[1] += 10737418;
            result[2] += 21474836;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42580000))) ) ) {
            result[0] += 29674319;
            result[1] += 40606963;
            result[2] += 0;
            result[3] += 0;
            result[4] += 15618062;
            result[5] += 0;
          } else {
            result[0] += 1847297;
            result[1] += 4618244;
            result[2] += 0;
            result[3] += 0;
            result[4] += 75739208;
            result[5] += 3694595;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
            result[0] += 71269613;
            result[1] += 3690987;
            result[2] += 671088;
            result[3] += 2483027;
            result[4] += 6845104;
            result[5] += 939524;
          } else {
            result[0] += 18052749;
            result[1] += 198381;
            result[2] += 25988023;
            result[3] += 21226859;
            result[4] += 2380582;
            result[5] += 18052749;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a80000))) ) ) {
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
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c00000))) ) ) {
            result[0] += 0;
            result[1] += 4405094;
            result[2] += 6607641;
            result[3] += 0;
            result[4] += 0;
            result[5] += 74886609;
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
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7809031;
            result[3] += 74185798;
            result[4] += 0;
            result[5] += 3904515;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17179869;
            result[3] += 0;
            result[4] += 0;
            result[5] += 68719476;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 55834574;
            result[4] += 0;
            result[5] += 8589934;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 60910445;
            result[3] += 14056256;
            result[4] += 0;
            result[5] += 10932644;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 85899345;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 6442450;
            result[1] += 0;
            result[2] += 25769803;
            result[3] += 47244640;
            result[4] += 4294967;
            result[5] += 2147483;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 64689630;
            result[3] += 16967772;
            result[4] += 0;
            result[5] += 4241943;
          } else {
            result[0] += 1867377;
            result[1] += 0;
            result[2] += 80297214;
            result[3] += 1493901;
            result[4] += 0;
            result[5] += 2240852;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ee0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 81437042;
            result[3] += 4462303;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 85676230;
            result[3] += 223115;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 64424509;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 82463372;
            result[3] += 3435973;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c00000))) ) ) {
            result[0] += 1026685;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 81450375;
            result[5] += 3422284;
          } else {
            result[0] += 0;
            result[1] += 68719476;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17179869;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 6607641;
            result[5] += 79291703;
          } else {
            result[0] += 0;
            result[1] += 2045222;
            result[2] += 0;
            result[3] += 8180890;
            result[4] += 57266230;
            result[5] += 18407002;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 3123612;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 49977801;
            result[5] += 32797932;
          } else {
            result[0] += 63925094;
            result[1] += 1498244;
            result[2] += 0;
            result[3] += 1498244;
            result[4] += 15981273;
            result[5] += 2996488;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1580969;
            result[4] += 2371454;
            result[5] += 81946922;
          } else {
            result[0] += 2643056;
            result[1] += 0;
            result[2] += 220254;
            result[3] += 25329294;
            result[4] += 5065858;
            result[5] += 52640881;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42480000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424e0000))) ) ) {
            result[0] += 0;
            result[1] += 62853179;
            result[2] += 0;
            result[3] += 8380423;
            result[4] += 8380423;
            result[5] += 6285317;
          } else {
            result[0] += 0;
            result[1] += 5368709;
            result[2] += 0;
            result[3] += 0;
            result[4] += 80530636;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42970000))) ) ) {
            result[0] += 74976631;
            result[1] += 3120775;
            result[2] += 0;
            result[3] += 2028504;
            result[4] += 4759182;
            result[5] += 1014252;
          } else {
            result[0] += 21474836;
            result[1] += 8459784;
            result[2] += 19522578;
            result[3] += 14967310;
            result[4] += 7158278;
            result[5] += 14316557;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42df0000))) ) ) {
            result[0] += 2785924;
            result[1] += 1392962;
            result[2] += 21358756;
            result[3] += 31573813;
            result[4] += 3482405;
            result[5] += 25305482;
          } else {
            result[0] += 71796468;
            result[1] += 0;
            result[2] += 10256638;
            result[3] += 0;
            result[4] += 3846239;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428a0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42620000))) ) ) {
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
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8180890;
            result[3] += 73628010;
            result[4] += 2045222;
            result[5] += 2045222;
          } else {
            result[0] += 3579139;
            result[1] += 10737418;
            result[2] += 32212254;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 17895697;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33746171;
            result[3] += 35280088;
            result[4] += 3067833;
            result[5] += 13805252;
          } else {
            result[0] += 9042036;
            result[1] += 0;
            result[2] += 76857309;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 79614027;
            result[3] += 6285317;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 51539607;
            result[3] += 34359738;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42990000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6607641;
            result[3] += 0;
            result[4] += 6607641;
            result[5] += 72684061;
          } else {
            result[0] += 34359738;
            result[1] += 17179869;
            result[2] += 8589934;
            result[3] += 17179869;
            result[4] += 8589934;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12271335;
            result[3] += 61356675;
            result[4] += 0;
            result[5] += 12271335;
          } else {
            result[0] += 954437;
            result[1] += 0;
            result[2] += 73491662;
            result[3] += 10498808;
            result[4] += 0;
            result[5] += 954437;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 50107951;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 74446099;
            result[3] += 11453246;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 85899345;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 82845737;
            result[3] += 2788077;
            result[4] += 0;
            result[5] += 265531;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 770397;
            result[2] += 0;
            result[3] += 0;
            result[4] += 83973351;
            result[5] += 1155596;
          } else {
            result[0] += 0;
            result[1] += 85899345;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42850000))) ) ) {
            result[0] += 4772185;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 38177487;
          } else {
            result[0] += 78566474;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5237764;
            result[5] += 2095105;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 6871947;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 79027398;
            result[5] += 0;
          } else {
            result[0] += 777760;
            result[1] += 259253;
            result[2] += 0;
            result[3] += 5357906;
            result[4] += 5357906;
            result[5] += 74146517;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 5259143;
            result[1] += 0;
            result[2] += 0;
            result[3] += 14024383;
            result[4] += 0;
            result[5] += 66615819;
          } else {
            result[0] += 409044;
            result[1] += 0;
            result[2] += 1636178;
            result[3] += 58084319;
            result[4] += 818089;
            result[5] += 24951714;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42360000))) ) ) {
            result[0] += 0;
            result[1] += 51539607;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 34359738;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 85899345;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 28633115;
            result[2] += 9544371;
            result[3] += 0;
            result[4] += 47721858;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
            result[0] += 20043180;
            result[1] += 0;
            result[2] += 4294967;
            result[3] += 15748213;
            result[4] += 37223049;
            result[5] += 8589934;
          } else {
            result[0] += 74337464;
            result[1] += 1629526;
            result[2] += 0;
            result[3] += 1086351;
            result[4] += 8458020;
            result[5] += 387982;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 1010580;
            result[1] += 2526451;
            result[2] += 11116385;
            result[3] += 35875609;
            result[4] += 2021161;
            result[5] += 33349157;
          } else {
            result[0] += 36814005;
            result[1] += 511305;
            result[2] += 33234865;
            result[3] += 4601750;
            result[4] += 4601750;
            result[5] += 6135667;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 71582788;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14316557;
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
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0;
            result[1] += 6607641;
            result[2] += 6607641;
            result[3] += 5286113;
            result[4] += 6607641;
            result[5] += 60790306;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 24228020;
            result[3] += 33038209;
            result[4] += 0;
            result[5] += 28633115;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42de0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5368709;
            result[3] += 69793218;
            result[4] += 0;
            result[5] += 10737418;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 85899345;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14939016;
            result[3] += 59756066;
            result[4] += 0;
            result[5] += 11204262;
          } else {
            result[0] += 0;
            result[1] += 1408185;
            result[2] += 66184741;
            result[3] += 16898231;
            result[4] += 0;
            result[5] += 1408185;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 75161927;
            result[3] += 3579139;
            result[4] += 1789569;
            result[5] += 5368709;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 0;
            result[4] += 0;
            result[5] += 64424509;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 85899345;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 66376767;
            result[1] += 19522578;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ee0000))) ) ) {
            result[0] += 339523;
            result[1] += 0;
            result[2] += 71978898;
            result[3] += 12562354;
            result[4] += 0;
            result[5] += 1018569;
          } else {
            result[0] += 17179869;
            result[1] += 0;
            result[2] += 0;
            result[3] += 68719476;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 75987882;
            result[3] += 9911462;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 715827;
            result[1] += 0;
            result[2] += 85004561;
            result[3] += 178956;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42900000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42440000))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 83608696;
            result[5] += 2290649;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
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
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x425a0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42600000))) ) ) {
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
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427c0000))) ) ) {
            result[0] += 0;
            result[1] += 12271335;
            result[2] += 0;
            result[3] += 0;
            result[4] += 73628010;
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
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 732929;
            result[4] += 1905616;
            result[5] += 83260799;
          } else {
            result[0] += 1193046;
            result[1] += 0;
            result[2] += 477218;
            result[3] += 8589934;
            result[4] += 11453246;
            result[5] += 64185900;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
            result[0] += 77309411;
            result[1] += 0;
            result[2] += 0;
            result[3] += 8589934;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1254005;
            result[1] += 627002;
            result[2] += 0;
            result[3] += 22572090;
            result[4] += 1254005;
            result[5] += 60192242;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 29878033;
            result[5] += 56021312;
          } else {
            result[0] += 449734;
            result[1] += 899469;
            result[2] += 449734;
            result[3] += 59814727;
            result[4] += 1798939;
            result[5] += 22486739;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 8589934;
            result[2] += 0;
            result[3] += 0;
            result[4] += 75161927;
            result[5] += 2147483;
          } else {
            result[0] += 14316557;
            result[1] += 71582788;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 75793540;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10105805;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 85708033;
            result[2] += 0;
            result[3] += 0;
            result[4] += 191312;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 20929789;
            result[1] += 13953193;
            result[2] += 0;
            result[3] += 0;
            result[4] += 47964101;
            result[5] += 3052261;
          } else {
            result[0] += 75947094;
            result[1] += 489454;
            result[2] += 652606;
            result[3] += 2202547;
            result[4] += 4078791;
            result[5] += 2528850;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 2660599;
            result[1] += 9122054;
            result[2] += 11782653;
            result[3] += 30406848;
            result[4] += 13302996;
            result[5] += 18624194;
          } else {
            result[0] += 72094093;
            result[1] += 0;
            result[2] += 4601750;
            result[3] += 0;
            result[4] += 9203501;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 1908874;
            result[2] += 9544371;
            result[3] += 24815366;
            result[4] += 0;
            result[5] += 49630733;
          } else {
            result[0] += 0;
            result[1] += 7635497;
            result[2] += 17179869;
            result[3] += 53448481;
            result[4] += 0;
            result[5] += 7635497;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 2454267;
            result[2] += 14725602;
            result[3] += 26996937;
            result[4] += 4908534;
            result[5] += 36814005;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 60209821;
            result[3] += 19267143;
            result[4] += 0;
            result[5] += 6422381;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 49085340;
            result[2] += 0;
            result[3] += 12271335;
            result[4] += 24542670;
            result[5] += 0;
          } else {
            result[0] += 79291703;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 6607641;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 655720;
            result[1] += 0;
            result[2] += 68850620;
            result[3] += 13114403;
            result[4] += 0;
            result[5] += 3278600;
          } else {
            result[0] += 1550063;
            result[1] += 0;
            result[2] += 82540875;
            result[3] += 1162547;
            result[4] += 387515;
            result[5] += 258343;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
            result[0] += 810371;
            result[1] += 1215556;
            result[2] += 0;
            result[3] += 0;
            result[4] += 79011190;
            result[5] += 4862227;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35616801;
            result[5] += 50282543;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 12570635;
            result[1] += 4190211;
            result[2] += 0;
            result[3] += 0;
            result[4] += 69138497;
            result[5] += 0;
          } else {
            result[0] += 70171296;
            result[1] += 2419699;
            result[2] += 0;
            result[3] += 0;
            result[4] += 13308349;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2793474;
            result[4] += 3375448;
            result[5] += 79730422;
          } else {
            result[0] += 0;
            result[1] += 2426535;
            result[2] += 0;
            result[3] += 18441667;
            result[4] += 10676754;
            result[5] += 54354388;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 1408185;
            result[2] += 0;
            result[3] += 21122789;
            result[4] += 2816371;
            result[5] += 60551997;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 65480648;
            result[4] += 704092;
            result[5] += 19714603;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 6213995;
            result[1] += 24490451;
            result[2] += 0;
            result[3] += 731058;
            result[4] += 53001724;
            result[5] += 1462116;
          } else {
            result[0] += 71558273;
            result[1] += 1323791;
            result[2] += 882527;
            result[3] += 4486181;
            result[4] += 4339093;
            result[5] += 3309478;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 2397191;
            result[1] += 1598127;
            result[2] += 5193913;
            result[3] += 45546629;
            result[4] += 8789700;
            result[5] += 22373783;
          } else {
            result[0] += 19357599;
            result[1] += 0;
            result[2] += 52628472;
            result[3] += 8468949;
            result[4] += 3629549;
            result[5] += 1814774;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ee0000))) ) ) {
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
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9911462;
            result[3] += 0;
            result[4] += 13215283;
            result[5] += 62772598;
          } else {
            result[0] += 3435973;
            result[1] += 3435973;
            result[2] += 3435973;
            result[3] += 37795712;
            result[4] += 20615843;
            result[5] += 17179869;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13215283;
            result[3] += 70041005;
            result[4] += 0;
            result[5] += 2643056;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 76354974;
            result[3] += 9544371;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x425a0000))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 2526451;
            result[1] += 0;
            result[2] += 25264513;
            result[3] += 15158708;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 3003473;
            result[1] += 1802084;
            result[2] += 63673641;
            result[3] += 10211810;
            result[4] += 600694;
            result[5] += 6607641;
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
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 43760044;
            result[3] += 40518559;
            result[4] += 0;
            result[5] += 1620742;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 85899345;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 80220050;
            result[3] += 5442658;
            result[4] += 0;
            result[5] += 236637;
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
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 1350618;
            result[2] += 0;
            result[3] += 0;
            result[4] += 82387737;
            result[5] += 2160989;
          } else {
            result[0] += 3734754;
            result[1] += 746950;
            result[2] += 0;
            result[3] += 0;
            result[4] += 60503017;
            result[5] += 20914623;
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 65447120;
            result[2] += 0;
            result[3] += 0;
            result[4] += 20452225;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 10737418;
            result[2] += 0;
            result[3] += 0;
            result[4] += 75161927;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 81127160;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4772185;
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
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 244727;
            result[3] += 2080183;
            result[4] += 2692002;
            result[5] += 80882432;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 32687361;
            result[4] += 9122054;
            result[5] += 44089929;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 69092952;
            result[1] += 4201598;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7936352;
            result[5] += 4668442;
          } else {
            result[0] += 2503441;
            result[1] += 156465;
            result[2] += 6727999;
            result[3] += 38803347;
            result[4] += 6727999;
            result[5] += 30980091;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 0;
            result[1] += 21474836;
            result[2] += 6135667;
            result[3] += 0;
            result[4] += 6135667;
            result[5] += 52153174;
          } else {
            result[0] += 76051540;
            result[1] += 1903357;
            result[2] += 910301;
            result[3] += 1075810;
            result[4] += 5379053;
            result[5] += 579282;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42e20000))) ) ) {
            result[0] += 2346976;
            result[1] += 938790;
            result[2] += 31918882;
            result[3] += 18775813;
            result[4] += 7040929;
            result[5] += 24877952;
          } else {
            result[0] += 61148686;
            result[1] += 0;
            result[2] += 16015132;
            result[3] += 1455921;
            result[4] += 5823684;
            result[5] += 1455921;
          }
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 85899345;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 8589934;
            result[4] += 0;
            result[5] += 77309411;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 85899345;
            result[4] += 0;
            result[5] += 0;
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
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428a0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428f0000))) ) ) {
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
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ee0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 85899345;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 57266230;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 28633115;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 44176806;
            result[3] += 14725602;
            result[4] += 0;
            result[5] += 26996937;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 58000413;
            result[3] += 27164750;
            result[4] += 0;
            result[5] += 734182;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 17179869;
            result[1] += 0;
            result[2] += 51539607;
            result[3] += 0;
            result[4] += 0;
            result[5] += 17179869;
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
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 727960;
            result[1] += 0;
            result[2] += 70612174;
            result[3] += 13831250;
            result[4] += 0;
            result[5] += 727960;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 81516726;
            result[3] += 1753047;
            result[4] += 0;
            result[5] += 2629571;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 84749641;
            result[3] += 1149704;
            result[4] += 0;
            result[5] += 0;
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
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42360000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 34359738;
            result[5] += 51539607;
          } else {
            result[0] += 0;
            result[1] += 85899345;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
            result[0] += 1125318;
            result[1] += 375106;
            result[2] += 0;
            result[3] += 0;
            result[4] += 84398920;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3904515;
            result[3] += 0;
            result[4] += 46854188;
            result[5] += 35140641;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
            result[0] += 36612835;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2816371;
            result[4] += 30980091;
            result[5] += 15490045;
          } else {
            result[0] += 412977;
            result[1] += 0;
            result[2] += 103244;
            result[3] += 3510309;
            result[4] += 2168132;
            result[5] += 79704681;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 67108863;
            result[2] += 0;
            result[3] += 5368709;
            result[4] += 5368709;
            result[5] += 8053063;
          } else {
            result[0] += 5743270;
            result[1] += 249707;
            result[2] += 4744440;
            result[3] += 38454939;
            result[4] += 2497074;
            result[5] += 34209913;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 4473924;
            result[1] += 3579139;
            result[2] += 2684354;
            result[3] += 0;
            result[4] += 71582788;
            result[5] += 3579139;
          } else {
            result[0] += 0;
            result[1] += 80530636;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5368709;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
            result[0] += 73376754;
            result[1] += 633164;
            result[2] += 1266329;
            result[3] += 3165823;
            result[4] += 5979888;
            result[5] += 1477384;
          } else {
            result[0] += 16589027;
            result[1] += 454493;
            result[2] += 20906719;
            result[3] += 20224978;
            result[4] += 6590161;
            result[5] += 21133966;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c50000))) ) ) {
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
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5052902;
            result[3] += 0;
            result[4] += 7579354;
            result[5] += 73267089;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 85899345;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 3542241;
            result[2] += 10626723;
            result[3] += 56675857;
            result[4] += 5313361;
            result[5] += 9741162;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 58567735;
            result[3] += 11713547;
            result[4] += 0;
            result[5] += 15618062;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42f20000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 12271335;
            result[1] += 12271335;
            result[2] += 16361780;
            result[3] += 12271335;
            result[4] += 12271335;
            result[5] += 20452225;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 67492343;
            result[3] += 11589594;
            result[4] += 0;
            result[5] += 6817408;
          }
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
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42e70000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 4772185;
            result[2] += 9544371;
            result[3] += 14316557;
            result[4] += 0;
            result[5] += 57266230;
          } else {
            result[0] += 2603010;
            result[1] += 2603010;
            result[2] += 65075262;
            result[3] += 13015052;
            result[4] += 0;
            result[5] += 2603010;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 0;
            result[4] += 57266230;
            result[5] += 0;
          } else {
            result[0] += 78741067;
            result[1] += 0;
            result[2] += 7158278;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42cd0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 78340203;
            result[3] += 7559142;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 85167249;
            result[3] += 732096;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42da0000))) ) ) {
            result[0] += 68719476;
            result[1] += 0;
            result[2] += 17179869;
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
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 850488;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 83773124;
            result[5] += 1275732;
          } else {
            result[0] += 0;
            result[1] += 85899345;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 45634027;
            result[5] += 40265318;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7158278;
            result[3] += 0;
            result[4] += 78741067;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 8589934;
            result[4] += 77309411;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2277154;
            result[4] += 1391594;
            result[5] += 82230596;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 39229622;
            result[1] += 13527456;
            result[2] += 0;
            result[3] += 6087355;
            result[4] += 16909320;
            result[5] += 10145592;
          } else {
            result[0] += 786264;
            result[1] += 982830;
            result[2] += 196566;
            result[3] += 32826523;
            result[4] += 4127886;
            result[5] += 46979276;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x422a0000))) ) ) {
            result[0] += 0;
            result[1] += 81378327;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4521018;
            result[5] += 0;
          } else {
            result[0] += 2656680;
            result[1] += 12397843;
            result[2] += 0;
            result[3] += 0;
            result[4] += 65531459;
            result[5] += 5313361;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 35791394;
            result[2] += 21474836;
            result[3] += 0;
            result[4] += 28633115;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 85699114;
            result[2] += 0;
            result[3] += 0;
            result[4] += 200231;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 5188551;
            result[1] += 5765056;
            result[2] += 6341562;
            result[3] += 19601193;
            result[4] += 17295170;
            result[5] += 31707812;
          } else {
            result[0] += 48221938;
            result[1] += 5272265;
            result[2] += 5915224;
            result[3] += 10544530;
            result[4] += 9001428;
            result[5] += 6943959;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 80321466;
            result[1] += 867670;
            result[2] += 123952;
            result[3] += 371858;
            result[4] += 4214397;
            result[5] += 0;
          } else {
            result[0] += 38654705;
            result[1] += 0;
            result[2] += 24338148;
            result[3] += 17179869;
            result[4] += 4294967;
            result[5] += 1431655;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ac0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42840000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 20211610;
            result[3] += 0;
            result[4] += 10105805;
            result[5] += 55581929;
          } else {
            result[0] += 0;
            result[1] += 3142658;
            result[2] += 1047552;
            result[3] += 55520308;
            result[4] += 2095105;
            result[5] += 24093718;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 24051816;
            result[3] += 46958309;
            result[4] += 1145324;
            result[5] += 13743895;
          } else {
            result[0] += 0;
            result[1] += 14810232;
            result[2] += 56278881;
            result[3] += 11848185;
            result[4] += 0;
            result[5] += 2962046;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 85899345;
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
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 57266230;
            result[3] += 0;
            result[4] += 0;
            result[5] += 28633115;
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
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 57266230;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 28633115;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 79832463;
            result[3] += 5007585;
            result[4] += 0;
            result[5] += 1059296;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 80172722;
            result[1] += 0;
            result[2] += 5726623;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 9911462;
            result[1] += 0;
            result[2] += 75987882;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 24542670;
            result[1] += 24542670;
            result[2] += 0;
            result[3] += 36814005;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 7809031;
            result[1] += 0;
            result[2] += 78090314;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 650752;
            result[2] += 0;
            result[3] += 0;
            result[4] += 83296335;
            result[5] += 1952257;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42620000))) ) ) {
            result[0] += 79188459;
            result[1] += 4026531;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2684354;
            result[5] += 0;
          } else {
            result[0] += 4862227;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 30794105;
            result[5] += 50243013;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 84535864;
            result[5] += 1363481;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1595653;
            result[4] += 3058335;
            result[5] += 81245356;
          } else {
            result[0] += 510293;
            result[1] += 2721563;
            result[2] += 340195;
            result[3] += 31638174;
            result[4] += 3231856;
            result[5] += 47457262;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42680000))) ) ) {
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
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 20493752;
            result[1] += 8284708;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52760511;
            result[5] += 4360372;
          } else {
            result[0] += 74951390;
            result[1] += 995268;
            result[2] += 459354;
            result[3] += 3598279;
            result[4] += 3981074;
            result[5] += 1913978;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 277094;
            result[1] += 2493851;
            result[2] += 15517301;
            result[3] += 29372034;
            result[4] += 9421218;
            result[5] += 28817845;
          } else {
            result[0] += 57724360;
            result[1] += 6184752;
            result[2] += 13056700;
            result[3] += 0;
            result[4] += 8246337;
            result[5] += 687194;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ca0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2321603;
            result[3] += 71969722;
            result[4] += 0;
            result[5] += 11608019;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 14316557;
            result[4] += 0;
            result[5] += 57266230;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 85899345;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 51539607;
            result[3] += 28633115;
            result[4] += 3817748;
            result[5] += 1908874;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38177487;
            result[3] += 9544371;
            result[4] += 0;
            result[5] += 38177487;
          } else {
            result[0] += 85899345;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 51539607;
            result[3] += 34359738;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 83513252;
            result[3] += 2386092;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 61356675;
            result[3] += 20861269;
            result[4] += 0;
            result[5] += 3681400;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 18407002;
            result[3] += 67492343;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42e70000))) ) ) {
            result[0] += 712857;
            result[1] += 0;
            result[2] += 76632196;
            result[3] += 7485005;
            result[4] += 0;
            result[5] += 1069286;
          } else {
            result[0] += 36168145;
            result[1] += 0;
            result[2] += 49731200;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 502335;
            result[1] += 0;
            result[2] += 79871321;
            result[3] += 5525688;
            result[4] += 0;
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
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 83016817;
            result[3] += 2882528;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 85609145;
            result[3] += 290200;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c40000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0;
            result[1] += 940503;
            result[2] += 0;
            result[3] += 0;
            result[4] += 82450832;
            result[5] += 2508010;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 85899345;
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
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 235987;
            result[3] += 2359872;
            result[4] += 3775795;
            result[5] += 79527691;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 66076419;
            result[3] += 6607641;
            result[4] += 0;
            result[5] += 13215283;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 4564699;
            result[1] += 0;
            result[2] += 0;
            result[3] += 15353989;
            result[4] += 14109071;
            result[5] += 51871585;
          } else {
            result[0] += 9894165;
            result[1] += 0;
            result[2] += 2698408;
            result[3] += 46772418;
            result[4] += 4047613;
            result[5] += 22486739;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 15649678;
            result[1] += 21561779;
            result[2] += 0;
            result[3] += 3129935;
            result[4] += 39298081;
            result[5] += 6259871;
          } else {
            result[0] += 74845274;
            result[1] += 767643;
            result[2] += 307057;
            result[3] += 1228230;
            result[4] += 4836156;
            result[5] += 3914983;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 1620742;
            result[1] += 1215556;
            result[2] += 4862227;
            result[3] += 53079312;
            result[4] += 1215556;
            result[5] += 23905950;
          } else {
            result[0] += 33960206;
            result[1] += 499414;
            result[2] += 28966058;
            result[3] += 8989466;
            result[4] += 6991807;
            result[5] += 6492392;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42e20000))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
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
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 28633115;
            result[5] += 14316557;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2260509;
            result[4] += 0;
            result[5] += 83638836;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 3368601;
            result[2] += 0;
            result[3] += 40423221;
            result[4] += 0;
            result[5] += 42107522;
          } else {
            result[0] += 2386092;
            result[1] += 19088743;
            result[2] += 50107951;
            result[3] += 7158278;
            result[4] += 0;
            result[5] += 7158278;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42de0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 57266230;
            result[3] += 0;
            result[4] += 28633115;
            result[5] += 0;
          } else {
            result[0] += 81378327;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4521018;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 19822925;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 66076419;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35204649;
            result[3] += 45061951;
            result[4] += 0;
            result[5] += 5632743;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 71582788;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 69175579;
            result[3] += 7601712;
            result[4] += 0;
            result[5] += 9122054;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42b50000))) ) ) {
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
            result[3] += 0;
            result[4] += 0;
            result[5] += 85899345;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 1528458;
            result[1] += 0;
            result[2] += 74283064;
            result[3] += 9782131;
            result[4] += 0;
            result[5] += 305691;
          } else {
            result[0] += 156180;
            result[1] += 0;
            result[2] += 83868997;
            result[3] += 1874167;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428c0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42f90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 84408037;
            result[5] += 1491308;
          } else {
            result[0] += 0;
            result[1] += 85899345;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 85899345;
          } else {
            result[0] += 17179869;
            result[1] += 0;
            result[2] += 0;
            result[3] += 34359738;
            result[4] += 34359738;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42810000))) ) ) {
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
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x424a0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42560000))) ) ) {
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
            result[3] += 0;
            result[4] += 85899345;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x425a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 14316557;
            result[4] += 57266230;
            result[5] += 14316557;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 117670;
            result[3] += 1765055;
            result[4] += 2000395;
            result[5] += 82016224;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 85899345;
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
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 1391082;
            result[2] += 0;
            result[3] += 17736302;
            result[4] += 13215283;
            result[5] += 53556677;
          } else {
            result[0] += 0;
            result[1] += 2321603;
            result[2] += 331657;
            result[3] += 51075286;
            result[4] += 4974865;
            result[5] += 27195931;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42420000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 4521018;
            result[1] += 45210182;
            result[2] += 0;
            result[3] += 0;
            result[4] += 36168145;
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
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x424a0000))) ) ) {
            result[0] += 7362801;
            result[1] += 68719476;
            result[2] += 0;
            result[3] += 0;
            result[4] += 9817068;
            result[5] += 0;
          } else {
            result[0] += 1930322;
            result[1] += 4825805;
            result[2] += 0;
            result[3] += 965161;
            result[4] += 77212895;
            result[5] += 965161;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 20211610;
            result[1] += 24001287;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40423221;
            result[5] += 1263225;
          } else {
            result[0] += 79697832;
            result[1] += 754238;
            result[2] += 0;
            result[3] += 1089455;
            result[4] += 3603582;
            result[5] += 754238;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 2831846;
            result[1] += 2359872;
            result[2] += 11327386;
            result[3] += 36342030;
            result[4] += 2831846;
            result[5] += 30206363;
          } else {
            result[0] += 63629145;
            result[1] += 3181457;
            result[2] += 7423400;
            result[3] += 0;
            result[4] += 10604857;
            result[5] += 1060485;
          }
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 7809031;
            result[4] += 0;
            result[5] += 78090314;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14908150;
            result[3] += 44724452;
            result[4] += 709911;
            result[5] += 25556830;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 64424509;
          } else {
            result[0] += 2095105;
            result[1] += 0;
            result[2] += 70535235;
            result[3] += 6285317;
            result[4] += 0;
            result[5] += 6983686;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42520000))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 8765239;
            result[1] += 1753047;
            result[2] += 29801813;
            result[3] += 14024383;
            result[4] += 5259143;
            result[5] += 26295718;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 31905471;
            result[3] += 49085340;
            result[4] += 0;
            result[5] += 4908534;
          } else {
            result[0] += 2004652;
            result[1] += 0;
            result[2] += 77179108;
            result[3] += 6414886;
            result[4] += 300697;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 2733161;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 82385281;
            result[5] += 780903;
          } else {
            result[0] += 0;
            result[1] += 85899345;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428e0000))) ) ) {
            result[0] += 2095105;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1047552;
            result[4] += 37711907;
            result[5] += 45044778;
          } else {
            result[0] += 57888689;
            result[1] += 1867377;
            result[2] += 0;
            result[3] += 18673770;
            result[4] += 7469508;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1654803;
            result[4] += 1805240;
            result[5] += 82439302;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 41788870;
            result[4] += 0;
            result[5] += 44110474;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42890000))) ) ) {
            result[0] += 1347440;
            result[1] += 0;
            result[2] += 0;
            result[3] += 10105805;
            result[4] += 12126966;
            result[5] += 62319133;
          } else {
            result[0] += 1231531;
            result[1] += 923648;
            result[2] += 615765;
            result[3] += 45258795;
            result[4] += 4002478;
            result[5] += 33867125;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 85899345;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 75161927;
            result[2] += 0;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 15158708;
            result[2] += 0;
            result[3] += 0;
            result[4] += 70740637;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 85548019;
            result[2] += 0;
            result[3] += 0;
            result[4] += 351326;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 34808885;
            result[1] += 7579354;
            result[2] += 842150;
            result[3] += 842150;
            result[4] += 34528168;
            result[5] += 7298637;
          } else {
            result[0] += 77479509;
            result[1] += 935537;
            result[2] += 935537;
            result[3] += 2891661;
            result[4] += 2636514;
            result[5] += 1020586;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 1311440;
            result[1] += 655720;
            result[2] += 17376585;
            result[3] += 39015351;
            result[4] += 6885062;
            result[5] += 20655186;
          } else {
            result[0] += 41980883;
            result[1] += 9687896;
            result[2] += 16792353;
            result[3] += 0;
            result[4] += 9687896;
            result[5] += 7750316;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 19088743;
            result[5] += 66810602;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 85899345;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x429e0000))) ) ) {
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
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 75161927;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6607641;
            result[3] += 79291703;
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
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 31814572;
            result[3] += 25451658;
            result[4] += 0;
            result[5] += 28633115;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 80172722;
            result[3] += 2863311;
            result[4] += 0;
            result[5] += 2863311;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42950000))) ) ) {
            result[0] += 24542670;
            result[1] += 0;
            result[2] += 61356675;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6607641;
            result[3] += 72684061;
            result[4] += 0;
            result[5] += 6607641;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 70972574;
            result[3] += 14081859;
            result[4] += 0;
            result[5] += 844911;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 80661580;
            result[3] += 5237764;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 3530110;
            result[1] += 0;
            result[2] += 67072092;
            result[3] += 15297143;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42740000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 85899345;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 361681;
            result[1] += 0;
            result[2] += 84995142;
            result[3] += 361681;
            result[4] += 0;
            result[5] += 180840;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42e50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 82891197;
            result[5] += 3008148;
          } else {
            result[0] += 0;
            result[1] += 85899345;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42680000))) ) ) {
            result[0] += 77846282;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5368709;
            result[5] += 2684354;
          } else {
            result[0] += 5856773;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35140641;
            result[5] += 44901930;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9042036;
            result[3] += 0;
            result[4] += 72336291;
            result[5] += 4521018;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 122538;
            result[3] += 1715536;
            result[4] += 1592997;
            result[5] += 82468273;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 1583398;
            result[2] += 0;
            result[3] += 13063034;
            result[4] += 13458883;
            result[5] += 57794029;
          } else {
            result[0] += 0;
            result[1] += 324148;
            result[2] += 0;
            result[3] += 50243013;
            result[4] += 1620742;
            result[5] += 33711441;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 1047552;
            result[1] += 9427976;
            result[2] += 0;
            result[3] += 2095105;
            result[4] += 72281156;
            result[5] += 1047552;
          } else {
            result[0] += 2202547;
            result[1] += 72684061;
            result[2] += 0;
            result[3] += 0;
            result[4] += 11012736;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x425a0000))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 6607641;
            result[1] += 52861135;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26430567;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ec0000))) ) ) {
            result[0] += 72646700;
            result[1] += 1248940;
            result[2] += 208156;
            result[3] += 1873410;
            result[4] += 7771184;
            result[5] += 2150952;
          } else {
            result[0] += 0;
            result[1] += 85899345;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 3368601;
            result[1] += 2105376;
            result[2] += 8842579;
            result[3] += 35791394;
            result[4] += 7579354;
            result[5] += 28212040;
          } else {
            result[0] += 59703091;
            result[1] += 1827645;
            result[2] += 15839595;
            result[3] += 2436860;
            result[4] += 6092152;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 17179869;
            result[4] += 0;
            result[5] += 68719476;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7279605;
            result[3] += 61148686;
            result[4] += 1455921;
            result[5] += 16015132;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 11453246;
            result[3] += 11453246;
            result[4] += 0;
            result[5] += 62992853;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 49501317;
            result[3] += 30574343;
            result[4] += 0;
            result[5] += 5823684;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c40000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 68719476;
            result[4] += 0;
            result[5] += 17179869;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 57266230;
            result[3] += 0;
            result[4] += 0;
            result[5] += 28633115;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 83804239;
            result[3] += 2095105;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 85899345;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5726623;
            result[3] += 11453246;
            result[4] += 0;
            result[5] += 68719476;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 15339168;
            result[1] += 0;
            result[2] += 39881839;
            result[3] += 12271335;
            result[4] += 6135667;
            result[5] += 12271335;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 70281283;
            result[3] += 9761289;
            result[4] += 0;
            result[5] += 5856773;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42f50000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 882527;
            result[1] += 0;
            result[2] += 73838136;
            result[3] += 10884506;
            result[4] += 0;
            result[5] += 294175;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 84241057;
            result[3] += 1658288;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 77309411;
            result[1] += 0;
            result[2] += 8589934;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 10475529;
            result[1] += 0;
            result[2] += 75423815;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x421a0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42980000))) ) ) {
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
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429e0000))) ) ) {
            result[0] += 0;
            result[1] += 320519;
            result[2] += 0;
            result[3] += 641039;
            result[4] += 82053106;
            result[5] += 2884679;
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42620000))) ) ) {
            result[0] += 71582788;
            result[1] += 0;
            result[2] += 4090445;
            result[3] += 2045222;
            result[4] += 8180890;
            result[5] += 0;
          } else {
            result[0] += 540814;
            result[1] += 270407;
            result[2] += 90135;
            result[3] += 5768686;
            result[4] += 5858822;
            result[5] += 73370480;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 20211610;
            result[4] += 0;
            result[5] += 65687735;
          } else {
            result[0] += 645859;
            result[1] += 645859;
            result[2] += 1937579;
            result[3] += 66523553;
            result[4] += 0;
            result[5] += 16146493;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42870000))) ) ) {
            result[0] += 8180890;
            result[1] += 28633115;
            result[2] += 0;
            result[3] += 0;
            result[4] += 48574034;
            result[5] += 511305;
          } else {
            result[0] += 68050131;
            result[1] += 984331;
            result[2] += 853087;
            result[3] += 4331059;
            result[4] += 5774745;
            result[5] += 5905990;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 1172687;
            result[1] += 4104405;
            result[2] += 14658591;
            result[3] += 30783042;
            result[4] += 8208811;
            result[5] += 26971808;
          } else {
            result[0] += 36729375;
            result[1] += 2369637;
            result[2] += 39691421;
            result[3] += 4146864;
            result[4] += 592409;
            result[5] += 2369637;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x425e0000))) ) ) {
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
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 8053063;
            result[4] += 2684354;
            result[5] += 75161927;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 49085340;
            result[3] += 0;
            result[4] += 24542670;
            result[5] += 12271335;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 4190211;
            result[2] += 6285317;
            result[3] += 69138497;
            result[4] += 0;
            result[5] += 6285317;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 85899345;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17179869;
            result[3] += 17179869;
            result[4] += 0;
            result[5] += 51539607;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 62720157;
            result[3] += 19088743;
            result[4] += 0;
            result[5] += 4090445;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42e20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 56448141;
            result[3] += 19634136;
            result[4] += 0;
            result[5] += 9817068;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 85899345;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42990000))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 403283;
            result[1] += 0;
            result[2] += 72590996;
            result[3] += 10888649;
            result[4] += 0;
            result[5] += 2016416;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 64424509;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 78741067;
            result[3] += 7158278;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 148872;
            result[1] += 0;
            result[2] += 84410622;
            result[3] += 1339851;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x421a0000))) ) ) {
            result[0] += 0;
            result[1] += 78741067;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7158278;
            result[5] += 0;
          } else {
            result[0] += 2842257;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 79899023;
            result[5] += 3158064;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 20211610;
            result[2] += 0;
            result[3] += 0;
            result[4] += 65687735;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4405094;
            result[4] += 19822925;
            result[5] += 61671325;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42640000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 85899345;
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
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5306523;
            result[4] += 2984919;
            result[5] += 77607903;
          } else {
            result[0] += 4601750;
            result[1] += 3323486;
            result[2] += 2556528;
            result[3] += 24031364;
            result[4] += 17640044;
            result[5] += 33746171;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42660000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42580000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42480000))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 27709466;
            result[2] += 2770946;
            result[3] += 0;
            result[4] += 55418932;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42850000))) ) ) {
            result[0] += 40904450;
            result[1] += 10907853;
            result[2] += 2726963;
            result[3] += 5453926;
            result[4] += 23179188;
            result[5] += 2726963;
          } else {
            result[0] += 1762037;
            result[1] += 1762037;
            result[2] += 0;
            result[3] += 37883814;
            result[4] += 3083566;
            result[5] += 41407889;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
            result[0] += 75368227;
            result[1] += 3457979;
            result[2] += 157180;
            result[3] += 314361;
            result[4] += 6130053;
            result[5] += 471542;
          } else {
            result[0] += 27930462;
            result[1] += 526989;
            result[2] += 11593776;
            result[3] += 18444644;
            result[4] += 10539797;
            result[5] += 16863675;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5856773;
            result[3] += 59869241;
            result[4] += 0;
            result[5] += 20173331;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40423221;
            result[3] += 10105805;
            result[4] += 30317416;
            result[5] += 5052902;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 6607641;
            result[1] += 0;
            result[2] += 16519104;
            result[3] += 23126746;
            result[4] += 0;
            result[5] += 39645851;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 72155450;
            result[3] += 0;
            result[4] += 0;
            result[5] += 13743895;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 2863311;
            result[1] += 0;
            result[2] += 37223049;
            result[3] += 17179869;
            result[4] += 0;
            result[5] += 28633115;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 70960329;
            result[3] += 14939016;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42f50000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30678337;
            result[3] += 27610504;
            result[4] += 0;
            result[5] += 27610504;
          } else {
            result[0] += 2095105;
            result[1] += 1047552;
            result[2] += 75423815;
            result[3] += 2095105;
            result[4] += 1047552;
            result[5] += 4190211;
          }
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42cf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 80373656;
            result[3] += 4521018;
            result[4] += 0;
            result[5] += 1004670;
          } else {
            result[0] += 833974;
            result[1] += 0;
            result[2] += 68385887;
            result[3] += 16679484;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 7332870;
            result[1] += 0;
            result[2] += 70186050;
            result[3] += 8380423;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 365529;
            result[1] += 0;
            result[2] += 84985523;
            result[3] += 548293;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 386933;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 82416939;
            result[5] += 3095471;
          } else {
            result[0] += 0;
            result[1] += 85899345;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 10412041;
            result[2] += 0;
            result[3] += 0;
            result[4] += 23427094;
            result[5] += 52060209;
          } else {
            result[0] += 67157670;
            result[1] += 6247225;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7809031;
            result[5] += 4685418;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 61847529;
            result[5] += 24051816;
          } else {
            result[0] += 108049;
            result[1] += 0;
            result[2] += 108049;
            result[3] += 5186375;
            result[4] += 2052940;
            result[5] += 78443930;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 5541893;
            result[2] += 0;
            result[3] += 12931084;
            result[4] += 5541893;
            result[5] += 61884475;
          } else {
            result[0] += 0;
            result[1] += 4321979;
            result[2] += 1080494;
            result[3] += 47541776;
            result[4] += 3781732;
            result[5] += 29173362;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 12725829;
            result[2] += 22270200;
            result[3] += 6362914;
            result[4] += 44540401;
            result[5] += 0;
          } else {
            result[0] += 2684354;
            result[1] += 83214991;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ba0000))) ) ) {
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
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 23768265;
            result[1] += 10841665;
            result[2] += 0;
            result[3] += 416987;
            result[4] += 47953518;
            result[5] += 2918909;
          } else {
            result[0] += 76201032;
            result[1] += 153941;
            result[2] += 692736;
            result[3] += 2386092;
            result[4] += 4618244;
            result[5] += 1847297;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 4581298;
            result[1] += 2290649;
            result[2] += 10307921;
            result[3] += 19470518;
            result[4] += 10307921;
            result[5] += 38941036;
          } else {
            result[0] += 69092952;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 16806393;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 48318382;
            result[3] += 32212254;
            result[4] += 5368709;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 3579139;
            result[2] += 3579139;
            result[3] += 11930464;
            result[4] += 13123511;
            result[5] += 53687091;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 74530314;
            result[4] += 0;
            result[5] += 11369031;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 24898361;
            result[3] += 46061968;
            result[4] += 0;
            result[5] += 14939016;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 5726623;
            result[1] += 0;
            result[2] += 66810602;
            result[3] += 1908874;
            result[4] += 3817748;
            result[5] += 7635497;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 50903316;
            result[3] += 31814572;
            result[4] += 0;
            result[5] += 3181457;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42df0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 10737418;
            result[2] += 21474836;
            result[3] += 10737418;
            result[4] += 42949672;
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
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42870000))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 13362120;
            result[1] += 0;
            result[2] += 57266230;
            result[3] += 1908874;
            result[4] += 0;
            result[5] += 13362120;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 563274;
            result[1] += 0;
            result[2] += 73225671;
            result[3] += 10983850;
            result[4] += 0;
            result[5] += 1126548;
          } else {
            result[0] += 1294965;
            result[1] += 0;
            result[2] += 83453300;
            result[3] += 1151080;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423c0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429e0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42500000))) ) ) {
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
            result[3] += 61356675;
            result[4] += 0;
            result[5] += 24542670;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42f70000))) ) ) {
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
            result[4] += 0;
            result[5] += 85899345;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 75161927;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10737418;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ee0000))) ) ) {
            result[0] += 0;
            result[1] += 81808900;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4090445;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
            result[0] += 660764;
            result[1] += 4955731;
            result[2] += 0;
            result[3] += 0;
            result[4] += 78300557;
            result[5] += 1982292;
          } else {
            result[0] += 36077725;
            result[1] += 1145324;
            result[2] += 0;
            result[3] += 2863311;
            result[4] += 25769803;
            result[5] += 20043180;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42830000))) ) ) {
            result[0] += 391638;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1305461;
            result[4] += 3133106;
            result[5] += 81069139;
          } else {
            result[0] += 2844349;
            result[1] += 0;
            result[2] += 568869;
            result[3] += 17066095;
            result[4] += 23892533;
            result[5] += 41527498;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 3014012;
            result[1] += 40689163;
            result[2] += 0;
            result[3] += 3014012;
            result[4] += 34661139;
            result[5] += 4521018;
          } else {
            result[0] += 68335050;
            result[1] += 1657008;
            result[2] += 1126766;
            result[3] += 3777980;
            result[4] += 5567550;
            result[5] += 5434989;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 973915;
            result[1] += 779132;
            result[2] += 17530478;
            result[3] += 37787920;
            result[4] += 2142614;
            result[5] += 26685284;
          } else {
            result[0] += 59756066;
            result[1] += 0;
            result[2] += 14939016;
            result[3] += 746950;
            result[4] += 10457311;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428d0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d70000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ca0000))) ) ) {
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
        } else {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 14316557;
            result[4] += 0;
            result[5] += 71582788;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7809031;
            result[3] += 54663220;
            result[4] += 0;
            result[5] += 23427094;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42f20000))) ) ) {
            result[0] += 1789569;
            result[1] += 0;
            result[2] += 59652323;
            result[3] += 16106127;
            result[4] += 0;
            result[5] += 8351325;
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
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13563054;
            result[3] += 36168145;
            result[4] += 0;
            result[5] += 36168145;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 62720157;
            result[3] += 20452225;
            result[4] += 0;
            result[5] += 2726963;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42e30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 77908709;
            result[3] += 7491222;
            result[4] += 499414;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 48318382;
            result[3] += 37580963;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42df0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 85899345;
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
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 75707898;
            result[3] += 8735526;
            result[4] += 0;
            result[5] += 1455921;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 85026385;
            result[3] += 872960;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
            result[0] += 419021;
            result[1] += 419021;
            result[2] += 0;
            result[3] += 0;
            result[4] += 84223261;
            result[5] += 838042;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 28633115;
            result[5] += 57266230;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1997659;
            result[4] += 27967228;
            result[5] += 55934457;
          } else {
            result[0] += 0;
            result[1] += 31236125;
            result[2] += 0;
            result[3] += 46854188;
            result[4] += 7809031;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42660000))) ) ) {
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
            result[3] += 1042784;
            result[4] += 1564176;
            result[5] += 83292385;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 77518921;
            result[1] += 6285317;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2095105;
            result[5] += 0;
          } else {
            result[0] += 806566;
            result[1] += 403283;
            result[2] += 0;
            result[3] += 31254456;
            result[4] += 5242683;
            result[5] += 48192356;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42990000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 85899345;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 17179869;
            result[2] += 0;
            result[3] += 68719476;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42870000))) ) ) {
            result[0] += 13836136;
            result[1] += 14989147;
            result[2] += 0;
            result[3] += 576505;
            result[4] += 55921050;
            result[5] += 576505;
          } else {
            result[0] += 71440334;
            result[1] += 2564159;
            result[2] += 569813;
            result[3] += 2635386;
            result[4] += 6196718;
            result[5] += 2492932;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 3086204;
            result[1] += 1028734;
            result[2] += 14916652;
            result[3] += 33948244;
            result[4] += 6943959;
            result[5] += 25975550;
          } else {
            result[0] += 58856959;
            result[1] += 5832671;
            result[2] += 10604857;
            result[3] += 2651214;
            result[4] += 4241943;
            result[5] += 3711700;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 85899345;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1651910;
            result[3] += 67728330;
            result[4] += 0;
            result[5] += 16519104;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 42949672;
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
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ca0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 21474836;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 56278881;
            result[3] += 20734324;
            result[4] += 0;
            result[5] += 8886139;
          }
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
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 85899345;
          } else {
            result[0] += 459354;
            result[1] += 0;
            result[2] += 65687735;
            result[3] += 18374191;
            result[4] += 0;
            result[5] += 1378064;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 1034931;
            result[1] += 0;
            result[2] += 81242152;
            result[3] += 3622261;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 61356675;
            result[1] += 0;
            result[2] += 24542670;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b60000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cc0000))) ) ) {
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
            result[3] += 0;
            result[4] += 0;
            result[5] += 85899345;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 16361780;
            result[1] += 0;
            result[2] += 65447120;
            result[3] += 4090445;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 288252;
            result[1] += 0;
            result[2] += 83881576;
            result[3] += 1585390;
            result[4] += 0;
            result[5] += 144126;
          }
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42be0000))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42260000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x423a0000))) ) ) {
            result[0] += 68719476;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17179869;
            result[5] += 0;
          } else {
            result[0] += 901042;
            result[1] += 300347;
            result[2] += 0;
            result[3] += 0;
            result[4] += 80493093;
            result[5] += 4204863;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 81808900;
            result[5] += 4090445;
          } else {
            result[0] += 12725829;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 19088743;
            result[5] += 54084773;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 30317416;
            result[2] += 0;
            result[3] += 0;
            result[4] += 50529027;
            result[5] += 5052902;
          } else {
            result[0] += 80530636;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4921316;
            result[5] += 447392;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8589934;
            result[5] += 77309411;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 85899345;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4294967;
            result[4] += 47244640;
            result[5] += 34359738;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 430034;
            result[3] += 3655291;
            result[4] += 2795222;
            result[5] += 79018797;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 2419699;
            result[1] += 2419699;
            result[2] += 0;
            result[3] += 13308349;
            result[4] += 48393997;
            result[5] += 19357599;
          } else {
            result[0] += 59756066;
            result[1] += 7469508;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7469508;
            result[5] += 11204262;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 9911462;
            result[4] += 3303820;
            result[5] += 72684061;
          } else {
            result[0] += 0;
            result[1] += 493674;
            result[2] += 1234186;
            result[3] += 39987626;
            result[4] += 2468372;
            result[5] += 41715486;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 23427094;
            result[2] += 0;
            result[3] += 0;
            result[4] += 62472251;
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
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 11790106;
            result[2] += 6737203;
            result[3] += 0;
            result[4] += 67372036;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 62038416;
            result[2] += 0;
            result[3] += 0;
            result[4] += 19088743;
            result[5] += 4772185;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42870000))) ) ) {
            result[0] += 74291326;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4643207;
            result[4] += 6964811;
            result[5] += 0;
          } else {
            result[0] += 2300875;
            result[1] += 3834792;
            result[2] += 13038293;
            result[3] += 33746171;
            result[4] += 2300875;
            result[5] += 30678337;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
            result[0] += 78802511;
            result[1] += 2488500;
            result[2] += 921666;
            result[3] += 645166;
            result[4] += 2672833;
            result[5] += 368666;
          } else {
            result[0] += 33651290;
            result[1] += 885560;
            result[2] += 10626723;
            result[3] += 15054524;
            result[4] += 15940084;
            result[5] += 9741162;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 15618062;
            result[3] += 56615477;
            result[4] += 976128;
            result[5] += 12689676;
          } else {
            result[0] += 7158278;
            result[1] += 5965232;
            result[2] += 27440068;
            result[3] += 21474836;
            result[4] += 7158278;
            result[5] += 16702650;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 1908874;
            result[2] += 64265436;
            result[3] += 8271788;
            result[4] += 1908874;
            result[5] += 9544371;
          } else {
            result[0] += 65856165;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 0;
            result[4] += 5726623;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 1867377;
            result[1] += 0;
            result[2] += 35480164;
            result[3] += 44817050;
            result[4] += 0;
            result[5] += 3734754;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 71396858;
            result[3] += 10040183;
            result[4] += 0;
            result[5] += 4462303;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42e10000))) ) ) {
            result[0] += 419021;
            result[1] += 0;
            result[2] += 77309411;
            result[3] += 7751892;
            result[4] += 0;
            result[5] += 419021;
          } else {
            result[0] += 1167110;
            result[1] += 0;
            result[2] += 82398013;
            result[3] += 1867377;
            result[4] += 0;
            result[5] += 466844;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1110767;
            result[2] += 0;
            result[3] += 0;
            result[4] += 81086020;
            result[5] += 3702558;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 85899345;
            result[5] += 0;
          } else {
            result[0] += 2863311;
            result[1] += 0;
            result[2] += 8589934;
            result[3] += 7158278;
            result[4] += 22906492;
            result[5] += 44381328;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 77309411;
            result[5] += 8589934;
          } else {
            result[0] += 263494;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3557181;
            result[4] += 1449222;
            result[5] += 80629447;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
            result[0] += 62300624;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 23598721;
            result[5] += 0;
          } else {
            result[0] += 1347440;
            result[1] += 1179010;
            result[2] += 2526451;
            result[3] += 32001717;
            result[4] += 8084644;
            result[5] += 40760081;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426a0000))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 5924092;
            result[1] += 56278881;
            result[2] += 0;
            result[3] += 2962046;
            result[4] += 20734324;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 37580963;
            result[1] += 9663676;
            result[2] += 1073741;
            result[3] += 2684354;
            result[4] += 19864223;
            result[5] += 15032385;
          } else {
            result[0] += 78257993;
            result[1] += 439158;
            result[2] += 439158;
            result[3] += 1580969;
            result[4] += 2898444;
            result[5] += 2283622;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 3499602;
            result[1] += 954437;
            result[2] += 25451658;
            result[3] += 28314969;
            result[4] += 6362914;
            result[5] += 21315763;
          } else {
            result[0] += 73078548;
            result[1] += 0;
            result[2] += 5128319;
            result[3] += 0;
            result[4] += 7692478;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42990000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17179869;
            result[5] += 68719476;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6135667;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 36814005;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 66810602;
            result[2] += 19088743;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 85899345;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 25141271;
            result[3] += 52377649;
            result[4] += 0;
            result[5] += 8380423;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 76354974;
            result[3] += 0;
            result[4] += 0;
            result[5] += 9544371;
          }
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
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c20000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 7158278;
            result[4] += 0;
            result[5] += 78741067;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 57266230;
            result[3] += 0;
            result[4] += 0;
            result[5] += 28633115;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 923648;
            result[2] += 69273666;
            result[3] += 12469259;
            result[4] += 0;
            result[5] += 3232771;
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
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 1988410;
            result[1] += 0;
            result[2] += 75161927;
            result[3] += 8351325;
            result[4] += 0;
            result[5] += 397682;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 84676579;
            result[3] += 1222766;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
            result[0] += 411001;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 85077342;
            result[5] += 411001;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5052902;
            result[4] += 45476124;
            result[5] += 35370318;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x424c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 85899345;
            result[5] += 0;
          } else {
            result[0] += 3435973;
            result[1] += 0;
            result[2] += 1717986;
            result[3] += 10307921;
            result[4] += 15461882;
            result[5] += 54975581;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 25769803;
            result[2] += 0;
            result[3] += 0;
            result[4] += 60129542;
            result[5] += 0;
          } else {
            result[0] += 81494251;
            result[1] += 4405094;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x423a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 85899345;
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
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x427e0000))) ) ) {
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
            result[4] += 28633115;
            result[5] += 57266230;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1238932;
            result[4] += 137659;
            result[5] += 84522753;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 14056256;
            result[4] += 14056256;
            result[5] += 57786832;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0;
            result[1] += 6442450;
            result[2] += 0;
            result[3] += 13958643;
            result[4] += 35433480;
            result[5] += 30064771;
          } else {
            result[0] += 0;
            result[1] += 846298;
            result[2] += 846298;
            result[3] += 15656531;
            result[4] += 2115747;
            result[5] += 66434469;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 25264513;
            result[4] += 7579354;
            result[5] += 53055478;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 709911;
            result[3] += 62472251;
            result[4] += 0;
            result[5] += 22717182;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42480000))) ) ) {
            result[0] += 0;
            result[1] += 74185798;
            result[2] += 0;
            result[3] += 0;
            result[4] += 11713547;
            result[5] += 0;
          } else {
            result[0] += 15569256;
            result[1] += 6442450;
            result[2] += 536870;
            result[3] += 0;
            result[4] += 61203283;
            result[5] += 2147483;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 74701892;
            result[1] += 626430;
            result[2] += 0;
            result[3] += 2349116;
            result[4] += 6264309;
            result[5] += 1957596;
          } else {
            result[0] += 29223488;
            result[1] += 4427801;
            result[2] += 2213900;
            result[3] += 24795687;
            result[4] += 6198921;
            result[5] += 19039545;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 9042036;
            result[1] += 76857309;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
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
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 1094259;
            result[2] += 8754073;
            result[3] += 50335922;
            result[4] += 2735647;
            result[5] += 22979442;
          } else {
            result[0] += 3435973;
            result[1] += 0;
            result[2] += 30923764;
            result[3] += 20615843;
            result[4] += 0;
            result[5] += 30923764;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 74185798;
            result[1] += 0;
            result[2] += 11713547;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 7158278;
            result[1] += 0;
            result[2] += 64424509;
            result[3] += 10462099;
            result[4] += 0;
            result[5] += 3854457;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 40086361;
            result[4] += 0;
            result[5] += 45812984;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 32212254;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 315806;
            result[2] += 68214186;
            result[3] += 12948063;
            result[4] += 0;
            result[5] += 4421289;
          } else {
            result[0] += 979308;
            result[1] += 0;
            result[2] += 83101321;
            result[3] += 1678814;
            result[4] += 0;
            result[5] += 139901;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42140000))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 881018;
            result[2] += 0;
            result[3] += 0;
            result[4] += 85018326;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42580000))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 67372036;
            result[5] += 18527309;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
            result[0] += 2526451;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 27790964;
            result[5] += 55581929;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 827281;
            result[4] += 275760;
            result[5] += 84796304;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42660000))) ) ) {
            result[0] += 82463372;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3435973;
            result[5] += 0;
          } else {
            result[0] += 624722;
            result[1] += 4373057;
            result[2] += 2030348;
            result[3] += 28893416;
            result[4] += 6871947;
            result[5] += 43105853;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 81808900;
            result[5] += 4090445;
          } else {
            result[0] += 0;
            result[1] += 85899345;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 0;
            result[1] += 73628010;
            result[2] += 0;
            result[3] += 0;
            result[4] += 12271335;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 85498882;
            result[2] += 0;
            result[3] += 0;
            result[4] += 400463;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x424e0000))) ) ) {
            result[0] += 25451658;
            result[1] += 50903316;
            result[2] += 0;
            result[3] += 0;
            result[4] += 9544371;
            result[5] += 0;
          } else {
            result[0] += 6991807;
            result[1] += 4494733;
            result[2] += 0;
            result[3] += 998829;
            result[4] += 70916901;
            result[5] += 2497074;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 75394742;
            result[1] += 521505;
            result[2] += 745007;
            result[3] += 2756527;
            result[4] += 4842547;
            result[5] += 1639016;
          } else {
            result[0] += 14179557;
            result[1] += 1644006;
            result[2] += 23632595;
            result[3] += 21783087;
            result[4] += 4521018;
            result[5] += 20139081;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42aa0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 85899345;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 0;
            result[4] += 0;
            result[5] += 71582788;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 85899345;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 85899345;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6135667;
            result[3] += 0;
            result[4] += 0;
            result[5] += 79763678;
          } else {
            result[0] += 14939016;
            result[1] += 14939016;
            result[2] += 18673770;
            result[3] += 0;
            result[4] += 22408525;
            result[5] += 14939016;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 1667948;
            result[2] += 39196788;
            result[3] += 35860891;
            result[4] += 0;
            result[5] += 9173716;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 79763678;
            result[3] += 6135667;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e20000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cc0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 85899345;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38177487;
            result[3] += 31814572;
            result[4] += 0;
            result[5] += 15907286;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 76667173;
            result[3] += 9232172;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 85899345;
          } else {
            result[0] += 430213;
            result[1] += 0;
            result[2] += 83748277;
            result[3] += 1720855;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x41e00000))) ) ) {
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
            result[4] += 84286212;
            result[5] += 1613133;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42820000))) ) ) {
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
            result[3] += 15618062;
            result[4] += 19522578;
            result[5] += 50758704;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 45292382;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 37483350;
            result[5] += 3123612;
          } else {
            result[0] += 0;
            result[1] += 92464;
            result[2] += 0;
            result[3] += 4808144;
            result[4] += 4623215;
            result[5] += 76375521;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 13048001;
            result[1] += 3262000;
            result[2] += 1087333;
            result[3] += 17397335;
            result[4] += 11960668;
            result[5] += 39144005;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 65922753;
            result[4] += 0;
            result[5] += 19976592;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x422c0000))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 5726623;
            result[2] += 0;
            result[3] += 0;
            result[4] += 80172722;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 83771208;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2128136;
            result[5] += 0;
          } else {
            result[0] += 62472251;
            result[1] += 23427094;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42850000))) ) ) {
            result[0] += 63898760;
            result[1] += 2264766;
            result[2] += 970614;
            result[3] += 970614;
            result[4] += 16015132;
            result[5] += 1779459;
          } else {
            result[0] += 6413817;
            result[1] += 6413817;
            result[2] += 7559142;
            result[3] += 28404050;
            result[4] += 8246337;
            result[5] += 28862180;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42870000))) ) ) {
            result[0] += 9203501;
            result[1] += 21474836;
            result[2] += 27610504;
            result[3] += 0;
            result[4] += 27610504;
            result[5] += 0;
          } else {
            result[0] += 79737269;
            result[1] += 0;
            result[2] += 1971864;
            result[3] += 1232415;
            result[4] += 2341589;
            result[5] += 616207;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a00000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 17179869;
            result[4] += 68719476;
            result[5] += 0;
          } else {
            result[0] += 14316557;
            result[1] += 71582788;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 85899345;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 4601750;
            result[2] += 1533916;
            result[3] += 9203501;
            result[4] += 7669584;
            result[5] += 62890592;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d60000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9042036;
            result[3] += 51991709;
            result[4] += 0;
            result[5] += 24865600;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 50354788;
            result[3] += 29620464;
            result[4] += 0;
            result[5] += 5924092;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42820000))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 68214186;
            result[3] += 2526451;
            result[4] += 5052902;
            result[5] += 10105805;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 22270200;
            result[3] += 63629145;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 7809031;
            result[1] += 0;
            result[2] += 78090314;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47106092;
            result[3] += 11083786;
            result[4] += 0;
            result[5] += 27709466;
          } else {
            result[0] += 6781527;
            result[1] += 0;
            result[2] += 79117818;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 85899345;
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
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 73675208;
            result[3] += 12224137;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1240921;
            result[1] += 0;
            result[2] += 81762940;
            result[3] += 2895483;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 533536;
            result[1] += 1867377;
            result[2] += 0;
            result[3] += 0;
            result[4] += 80830750;
            result[5] += 2667681;
          } else {
            result[0] += 8589934;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 38654705;
            result[5] += 38654705;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42620000))) ) ) {
            result[0] += 82416939;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3482405;
            result[5] += 0;
          } else {
            result[0] += 7362801;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 36814005;
            result[5] += 41722539;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5368709;
            result[3] += 0;
            result[4] += 80530636;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 382199;
            result[2] += 286649;
            result[3] += 4681944;
            result[4] += 2484296;
            result[5] += 78064255;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42940000))) ) ) {
            result[0] += 1282079;
            result[1] += 2564159;
            result[2] += 2564159;
            result[3] += 3846239;
            result[4] += 53847351;
            result[5] += 21795356;
          } else {
            result[0] += 876523;
            result[1] += 0;
            result[2] += 0;
            result[3] += 31554861;
            result[4] += 5259143;
            result[5] += 48208816;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42900000))) ) ) {
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
            result[3] += 85899345;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 85137489;
            result[2] += 0;
            result[3] += 380928;
            result[4] += 380928;
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
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 4367763;
            result[1] += 20382895;
            result[2] += 2911842;
            result[3] += 0;
            result[4] += 53141120;
            result[5] += 5095723;
          } else {
            result[0] += 71479419;
            result[1] += 1240423;
            result[2] += 1007844;
            result[3] += 3256112;
            result[4] += 5271801;
            result[5] += 3643744;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 1171354;
            result[1] += 1952257;
            result[2] += 17765546;
            result[3] += 36507222;
            result[4] += 1366580;
            result[5] += 27136384;
          } else {
            result[0] += 59677440;
            result[1] += 7233629;
            result[2] += 10850443;
            result[3] += 0;
            result[4] += 8137832;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e50000))) ) ) {
            result[0] += 1363481;
            result[1] += 2726963;
            result[2] += 1363481;
            result[3] += 23179188;
            result[4] += 14998298;
            result[5] += 42267932;
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
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42cf0000))) ) ) {
            result[0] += 0;
            result[1] += 1507006;
            result[2] += 13563054;
            result[3] += 61787248;
            result[4] += 0;
            result[5] += 9042036;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 85899345;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 73968881;
            result[3] += 11930464;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 42949672;
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
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 59157096;
            result[3] += 23500764;
            result[4] += 0;
            result[5] += 3241484;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 77309411;
            result[3] += 8589934;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a30000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
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
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 1684300;
            result[1] += 0;
            result[2] += 74109239;
            result[3] += 8421504;
            result[4] += 0;
            result[5] += 1684300;
          } else {
            result[0] += 347068;
            result[1] += 0;
            result[2] += 85031675;
            result[3] += 520602;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42040000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 82072147;
            result[5] += 3827198;
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
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 62853179;
            result[1] += 4190211;
            result[2] += 0;
            result[3] += 0;
            result[4] += 16760847;
            result[5] += 2095105;
          } else {
            result[0] += 0;
            result[1] += 494242;
            result[2] += 889636;
            result[3] += 4744727;
            result[4] += 4645879;
            result[5] += 75124859;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 3846239;
            result[1] += 0;
            result[2] += 0;
            result[3] += 6410398;
            result[4] += 3846239;
            result[5] += 71796468;
          } else {
            result[0] += 4123168;
            result[1] += 9620726;
            result[2] += 8246337;
            result[3] += 39513699;
            result[4] += 2405181;
            result[5] += 21990232;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 3368601;
            result[1] += 5895053;
            result[2] += 0;
            result[3] += 842150;
            result[4] += 73267089;
            result[5] += 2526451;
          } else {
            result[0] += 2911842;
            result[1] += 82987503;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 71617120;
            result[1] += 343322;
            result[2] += 274658;
            result[3] += 3021239;
            result[4] += 7347106;
            result[5] += 3295898;
          } else {
            result[0] += 19463598;
            result[1] += 4152234;
            result[2] += 13235246;
            result[3] += 23096802;
            result[4] += 8304468;
            result[5] += 17646995;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42cc0000))) ) ) {
            result[0] += 0;
            result[1] += 85461083;
            result[2] += 0;
            result[3] += 0;
            result[4] += 438261;
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
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ea0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 85899345;
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
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 85899345;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9988296;
            result[3] += 0;
            result[4] += 0;
            result[5] += 75911049;
          } else {
            result[0] += 1342177;
            result[1] += 3355443;
            result[2] += 12079595;
            result[3] += 26172456;
            result[4] += 5368709;
            result[5] += 37580963;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 17179869;
            result[4] += 4294967;
            result[5] += 42949672;
          } else {
            result[0] += 4521018;
            result[1] += 0;
            result[2] += 6781527;
            result[3] += 65554763;
            result[4] += 0;
            result[5] += 9042036;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 4521018;
            result[2] += 9042036;
            result[3] += 58773236;
            result[4] += 0;
            result[5] += 13563054;
          } else {
            result[0] += 4026531;
            result[1] += 0;
            result[2] += 67108863;
            result[3] += 14763950;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
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
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 85899345;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 64424509;
            result[3] += 0;
            result[4] += 0;
            result[5] += 21474836;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 77605615;
            result[3] += 8293729;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 416987;
            result[1] += 0;
            result[2] += 85065371;
            result[3] += 208493;
            result[4] += 0;
            result[5] += 208493;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a50000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42e50000))) ) ) {
            result[0] += 346368;
            result[1] += 692736;
            result[2] += 0;
            result[3] += 0;
            result[4] += 82089294;
            result[5] += 2770946;
          } else {
            result[0] += 0;
            result[1] += 85899345;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 12271335;
            result[2] += 0;
            result[3] += 18407002;
            result[4] += 49085340;
            result[5] += 6135667;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 17179869;
            result[4] += 0;
            result[5] += 68719476;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 85899345;
            result[5] += 0;
          } else {
            result[0] += 73225671;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 12673673;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 196566;
            result[2] += 0;
            result[3] += 3833037;
            result[4] += 5405565;
            result[5] += 76464177;
          } else {
            result[0] += 0;
            result[1] += 864758;
            result[2] += 1729517;
            result[3] += 41220155;
            result[4] += 3747286;
            result[5] += 38337627;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d80000))) ) ) {
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
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
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
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 17459216;
            result[1] += 6983686;
            result[2] += 0;
            result[3] += 0;
            result[4] += 59361336;
            result[5] += 2095105;
          } else {
            result[0] += 74421416;
            result[1] += 740511;
            result[2] += 148102;
            result[3] += 3036097;
            result[4] += 5183581;
            result[5] += 2369637;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 1096587;
            result[1] += 4751878;
            result[2] += 15352223;
            result[3] += 37283971;
            result[4] += 4020820;
            result[5] += 23393864;
          } else {
            result[0] += 21931747;
            result[1] += 2558703;
            result[2] += 40573733;
            result[3] += 8772699;
            result[4] += 4751878;
            result[5] += 7310582;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b70000))) ) ) {
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
            result[2] += 10737418;
            result[3] += 0;
            result[4] += 10737418;
            result[5] += 64424509;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 85899345;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 23427094;
            result[4] += 0;
            result[5] += 62472251;
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
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 2569638;
            result[1] += 0;
            result[2] += 54696592;
            result[3] += 17987469;
            result[4] += 0;
            result[5] += 10645645;
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
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42700000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 85899345;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 75161927;
            result[3] += 5368709;
            result[4] += 0;
            result[5] += 5368709;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32212254;
            result[3] += 53687091;
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
            result[0] += 359913;
            result[1] += 0;
            result[2] += 83499922;
            result[3] += 1919538;
            result[4] += 0;
            result[5] += 119971;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 80405783;
            result[5] += 5493562;
          } else {
            result[0] += 0;
            result[1] += 28633115;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 57266230;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 17685159;
            result[4] += 60634832;
            result[5] += 7579354;
          } else {
            result[0] += 118809;
            result[1] += 0;
            result[2] += 237619;
            result[3] += 2257382;
            result[4] += 3089049;
            result[5] += 80196484;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42580000))) ) ) {
            result[0] += 43730576;
            result[1] += 3123612;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35921544;
            result[5] += 3123612;
          } else {
            result[0] += 1493901;
            result[1] += 4481705;
            result[2] += 0;
            result[3] += 0;
            result[4] += 71707280;
            result[5] += 8216459;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 4386349;
            result[1] += 0;
            result[2] += 0;
            result[3] += 16448810;
            result[4] += 1827645;
            result[5] += 63236539;
          } else {
            result[0] += 987348;
            result[1] += 1974697;
            result[2] += 0;
            result[3] += 51342137;
            result[4] += 2962046;
            result[5] += 28633115;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b20000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 7158278;
            result[2] += 0;
            result[3] += 0;
            result[4] += 78741067;
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
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0;
            result[1] += 85703675;
            result[2] += 0;
            result[3] += 0;
            result[4] += 195670;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 63490820;
            result[2] += 0;
            result[3] += 0;
            result[4] += 22408525;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 38729184;
            result[1] += 6454864;
            result[2] += 744792;
            result[3] += 2730904;
            result[4] += 32026056;
            result[5] += 5213544;
          } else {
            result[0] += 79861692;
            result[1] += 182959;
            result[2] += 91479;
            result[3] += 2195510;
            result[4] += 3018826;
            result[5] += 548877;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42e30000))) ) ) {
            result[0] += 2839647;
            result[1] += 2129735;
            result[2] += 19877534;
            result[3] += 32300993;
            result[4] += 5324339;
            result[5] += 23427094;
          } else {
            result[0] += 66214079;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 1789569;
            result[4] += 7158278;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42910000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 46854188;
            result[3] += 0;
            result[4] += 0;
            result[5] += 39045157;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 7469508;
            result[4] += 0;
            result[5] += 78429837;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0;
            result[1] += 9138228;
            result[2] += 1827645;
            result[3] += 29242330;
            result[4] += 7310582;
            result[5] += 38380558;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 11204262;
            result[3] += 67225575;
            result[4] += 0;
            result[5] += 7469508;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 71582788;
            result[3] += 4772185;
            result[4] += 0;
            result[5] += 9544371;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 24542670;
            result[3] += 12271335;
            result[4] += 0;
            result[5] += 49085340;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 64424509;
            result[4] += 0;
            result[5] += 21474836;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 85899345;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 36814005;
            result[2] += 36814005;
            result[3] += 0;
            result[4] += 0;
            result[5] += 12271335;
          } else {
            result[0] += 77309411;
            result[1] += 0;
            result[2] += 8589934;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53113336;
            result[3] += 30163129;
            result[4] += 655720;
            result[5] += 1967160;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 81531582;
            result[3] += 2911842;
            result[4] += 1455921;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 52861135;
            result[1] += 26430567;
            result[2] += 6607641;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 538216;
            result[1] += 0;
            result[2] += 82131830;
            result[3] += 2906368;
            result[4] += 0;
            result[5] += 322929;
          }
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42be0000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 2762036;
            result[1] += 552407;
            result[2] += 276203;
            result[3] += 0;
            result[4] += 81203883;
            result[5] += 1104814;
          } else {
            result[0] += 5052902;
            result[1] += 55581929;
            result[2] += 0;
            result[3] += 0;
            result[4] += 25264513;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42890000))) ) ) {
            result[0] += 2603010;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3904515;
            result[4] += 14316557;
            result[5] += 65075262;
          } else {
            result[0] += 74864417;
            result[1] += 649113;
            result[2] += 216371;
            result[3] += 2596453;
            result[4] += 6707505;
            result[5] += 865484;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3597878;
            result[4] += 4722215;
            result[5] += 77579252;
          } else {
            result[0] += 3702558;
            result[1] += 0;
            result[2] += 0;
            result[3] += 24436882;
            result[4] += 18512790;
            result[5] += 39247114;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 2603010;
            result[1] += 2603010;
            result[2] += 3036845;
            result[3] += 36297535;
            result[4] += 8821313;
            result[5] += 32537631;
          } else {
            result[0] += 39255077;
            result[1] += 12931084;
            result[2] += 6927366;
            result[3] += 5541893;
            result[4] += 12931084;
            result[5] += 8312839;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42780000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x425e0000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 66810602;
            result[2] += 0;
            result[3] += 0;
            result[4] += 19088743;
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
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42d80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42400000))) ) ) {
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
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42dd0000))) ) ) {
            result[0] += 84429839;
            result[1] += 0;
            result[2] += 0;
            result[3] += 133591;
            result[4] += 1335915;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 85899345;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e50000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10307921;
            result[3] += 54975581;
            result[4] += 3435973;
            result[5] += 17179869;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 79763678;
            result[3] += 3067833;
            result[4] += 3067833;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 14316557;
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
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42e50000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34175008;
            result[3] += 41564199;
            result[4] += 0;
            result[5] += 10160137;
          } else {
            result[0] += 1347440;
            result[1] += 0;
            result[2] += 66024595;
            result[3] += 13474407;
            result[4] += 0;
            result[5] += 5052902;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 23860929;
            result[1] += 0;
            result[2] += 62038416;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 77309411;
            result[1] += 0;
            result[2] += 5726623;
            result[3] += 0;
            result[4] += 0;
            result[5] += 2863311;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 73014444;
            result[3] += 12884901;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 2165529;
            result[1] += 0;
            result[2] += 77237226;
            result[3] += 6496589;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 152845;
            result[1] += 0;
            result[2] += 84065196;
            result[3] += 1681303;
            result[4] += 0;
            result[5] += 0;
          }
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
