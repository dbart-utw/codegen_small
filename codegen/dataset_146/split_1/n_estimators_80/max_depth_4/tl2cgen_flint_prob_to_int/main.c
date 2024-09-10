
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
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 518715;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52909017;
          result[5] += 259357;
        } else {
          result[0] += 15886996;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 14791341;
          result[5] += 23008753;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 107805;
          result[1] += 431221;
          result[2] += 0;
          result[3] += 3449772;
          result[4] += 4042702;
          result[5] += 45655588;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 291777;
          result[3] += 37639319;
          result[4] += 0;
          result[5] += 15755994;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 277452;
          result[1] += 52854733;
          result[2] += 0;
          result[3] += 0;
          result[4] += 554905;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          result[0] += 41536202;
          result[1] += 2727750;
          result[2] += 0;
          result[3] += 1157227;
          result[4] += 6364751;
          result[5] += 1901159;
        } else {
          result[0] += 7488960;
          result[1] += 2528739;
          result[2] += 13713550;
          result[3] += 15464216;
          result[4] += 3695850;
          result[5] += 10795773;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2064888;
          result[3] += 0;
          result[4] += 0;
          result[5] += 51622203;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4994148;
          result[3] += 27467814;
          result[4] += 0;
          result[5] += 21225129;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42800000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1470879;
          result[1] += 0;
          result[2] += 30888463;
          result[3] += 15444231;
          result[4] += 0;
          result[5] += 5883516;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 6100805;
          result[1] += 0;
          result[2] += 32944351;
          result[3] += 2440322;
          result[4] += 0;
          result[5] += 12201611;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 250874;
          result[1] += 0;
          result[2] += 44906492;
          result[3] += 7777101;
          result[4] += 0;
          result[5] += 752622;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52422005;
          result[3] += 1027882;
          result[4] += 0;
          result[5] += 237203;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42080000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 191739;
          result[1] += 1150437;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50619257;
          result[5] += 1725656;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 32130910;
          result[1] += 0;
          result[2] += 2440322;
          result[3] += 813440;
          result[4] += 12608332;
          result[5] += 5694085;
        } else {
          result[0] += 507352;
          result[1] += 276737;
          result[2] += 1060827;
          result[3] += 6042103;
          result[4] += 3413096;
          result[5] += 42386973;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 26272406;
          result[2] += 0;
          result[3] += 0;
          result[4] += 27414684;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 41702575;
          result[1] += 1768932;
          result[2] += 353786;
          result[3] += 2034271;
          result[4] += 3714757;
          result[5] += 4112767;
        } else {
          result[0] += 6224590;
          result[1] += 889227;
          result[2] += 9892652;
          result[3] += 21452605;
          result[4] += 2667681;
          result[5] += 12560333;
        }
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3834792;
          result[3] += 0;
          result[4] += 3834792;
          result[5] += 46017506;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3097332;
          result[3] += 29940877;
          result[4] += 0;
          result[5] += 20648881;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8259552;
          result[3] += 24778657;
          result[4] += 0;
          result[5] += 20648881;
        } else {
          result[0] += 1597830;
          result[1] += 1597830;
          result[2] += 40265318;
          result[3] += 9267414;
          result[4] += 0;
          result[5] += 958698;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 32212254;
          result[2] += 0;
          result[3] += 16106127;
          result[4] += 0;
          result[5] += 5368709;
        } else {
          result[0] += 13649260;
          result[1] += 0;
          result[2] += 37307978;
          result[3] += 909950;
          result[4] += 0;
          result[5] += 1819901;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 46131130;
          result[3] += 6760596;
          result[4] += 0;
          result[5] += 795364;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 51903466;
          result[3] += 1783624;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 805306;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52881784;
          result[5] += 0;
        } else {
          result[0] += 11608019;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 24667041;
          result[5] += 17412029;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42870000))) ) ) {
          result[0] += 129992;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3314820;
          result[4] += 2664855;
          result[5] += 47577422;
        } else {
          result[0] += 5086145;
          result[1] += 988972;
          result[2] += 282563;
          result[3] += 18225354;
          result[4] += 5792554;
          result[5] += 23311500;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 350896;
          result[1] += 52868333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 467861;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
          result[0] += 10865244;
          result[1] += 2940007;
          result[2] += 2556528;
          result[3] += 12654814;
          result[4] += 10098286;
          result[5] += 14572210;
        } else {
          result[0] += 40475931;
          result[1] += 1531728;
          result[2] += 3484682;
          result[3] += 2335886;
          result[4] += 4212253;
          result[5] += 1646608;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428d0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ec0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2982616;
          result[4] += 0;
          result[5] += 50704475;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8589934;
          result[3] += 38654705;
          result[4] += 0;
          result[5] += 6442450;
        } else {
          result[0] += 451152;
          result[1] += 2255760;
          result[2] += 30678337;
          result[3] += 11729952;
          result[4] += 1804608;
          result[5] += 6767280;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 29826161;
          result[4] += 0;
          result[5] += 23860929;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39232874;
          result[3] += 4129776;
          result[4] += 0;
          result[5] += 10324440;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30910749;
          result[3] += 17895697;
          result[4] += 0;
          result[5] += 4880644;
        } else {
          result[0] += 314695;
          result[1] += 0;
          result[2] += 50854829;
          result[3] += 2202870;
          result[4] += 0;
          result[5] += 314695;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42620000))) ) ) {
          result[0] += 982080;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50413488;
          result[5] += 2291522;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39271112;
          result[5] += 14415978;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 858993;
          result[1] += 143165;
          result[2] += 71582;
          result[3] += 1073741;
          result[4] += 2791728;
          result[5] += 48747878;
        } else {
          result[0] += 2838627;
          result[1] += 3455720;
          result[2] += 0;
          result[3] += 20240650;
          result[4] += 1974697;
          result[5] += 25177394;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 10353939;
          result[2] += 0;
          result[3] += 2684354;
          result[4] += 39498359;
          result[5] += 1150437;
        } else {
          result[0] += 414039;
          result[1] += 51478881;
          result[2] += 0;
          result[3] += 138013;
          result[4] += 1656157;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 44356321;
          result[1] += 1265983;
          result[2] += 93776;
          result[3] += 1359760;
          result[4] += 4032392;
          result[5] += 2578855;
        } else {
          result[0] += 12025908;
          result[1] += 1002159;
          result[2] += 8160437;
          result[3] += 17323034;
          result[4] += 3435973;
          result[5] += 11739577;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 692736;
          result[1] += 0;
          result[2] += 4849156;
          result[3] += 15240206;
          result[4] += 692736;
          result[5] += 32212254;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 10475529;
          result[1] += 0;
          result[2] += 27934746;
          result[3] += 6547206;
          result[4] += 1745921;
          result[5] += 6983686;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 25019226;
          result[3] += 27625396;
          result[4] += 0;
          result[5] += 1042467;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 278171;
          result[2] += 41447547;
          result[3] += 8901486;
          result[4] += 0;
          result[5] += 3059886;
        } else {
          result[0] += 149546;
          result[1] += 0;
          result[2] += 51817763;
          result[3] += 1645008;
          result[4] += 0;
          result[5] += 74773;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42360000))) ) ) {
          result[0] += 0;
          result[1] += 40265318;
          result[2] += 0;
          result[3] += 0;
          result[4] += 13421772;
          result[5] += 0;
        } else {
          result[0] += 356724;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51725104;
          result[5] += 1605261;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 0;
          result[1] += 30678337;
          result[2] += 7669584;
          result[3] += 7669584;
          result[4] += 7669584;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49213166;
          result[5] += 4473924;
        } else {
          result[0] += 52466930;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1220161;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 437666;
          result[1] += 778073;
          result[2] += 0;
          result[3] += 3549961;
          result[4] += 4084887;
          result[5] += 44836501;
        } else {
          result[0] += 109342;
          result[1] += 0;
          result[2] += 3608297;
          result[3] += 30178487;
          result[4] += 109342;
          result[5] += 19681622;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 852176;
          result[1] += 21730489;
          result[2] += 0;
          result[3] += 0;
          result[4] += 31104425;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53315982;
          result[2] += 0;
          result[3] += 0;
          result[4] += 371108;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
          result[0] += 50815456;
          result[1] += 249707;
          result[2] += 187280;
          result[3] += 561841;
          result[4] += 1560671;
          result[5] += 312134;
        } else {
          result[0] += 19552706;
          result[1] += 662803;
          result[2] += 14250277;
          result[3] += 6959437;
          result[4] += 7622241;
          result[5] += 4639625;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426c0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 4425400;
          result[1] += 349373;
          result[2] += 34587995;
          result[3] += 10830584;
          result[4] += 232915;
          result[5] += 3260821;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38774010;
          result[3] += 0;
          result[4] += 0;
          result[5] += 14913080;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52274272;
          result[3] += 1412818;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428b0000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          result[0] += 2319812;
          result[1] += 662803;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50041671;
          result[5] += 662803;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 26188824;
          result[5] += 27498266;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 598740;
          result[2] += 332633;
          result[3] += 1862749;
          result[4] += 2062329;
          result[5] += 48830638;
        } else {
          result[0] += 0;
          result[1] += 1981073;
          result[2] += 2773502;
          result[3] += 14858051;
          result[4] += 5745113;
          result[5] += 28329350;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0;
          result[1] += 17082256;
          result[2] += 0;
          result[3] += 8541128;
          result[4] += 28063706;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53062822;
          result[2] += 0;
          result[3] += 0;
          result[4] += 624268;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 6735649;
          result[1] += 8122401;
          result[2] += 0;
          result[3] += 0;
          result[4] += 36847966;
          result[5] += 1981073;
        } else {
          result[0] += 33004099;
          result[1] += 190042;
          result[2] += 3262401;
          result[3] += 7665059;
          result[4] += 2533904;
          result[5] += 7031583;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3834792;
          result[3] += 3834792;
          result[4] += 1278264;
          result[5] += 44739242;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7064090;
          result[3] += 42384545;
          result[4] += 0;
          result[5] += 4238454;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42940000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 1626881;
          result[1] += 3253763;
          result[2] += 37418275;
          result[3] += 1626881;
          result[4] += 0;
          result[5] += 9761289;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 1851279;
          result[1] += 3702558;
          result[2] += 0;
          result[3] += 33323022;
          result[4] += 0;
          result[5] += 14810232;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34513130;
          result[3] += 11504376;
          result[4] += 0;
          result[5] += 7669584;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 1594666;
          result[1] += 0;
          result[2] += 39866651;
          result[3] += 10099551;
          result[4] += 0;
          result[5] += 2126221;
        } else {
          result[0] += 66035;
          result[1] += 0;
          result[2] += 51045659;
          result[3] += 2509359;
          result[4] += 0;
          result[5] += 66035;
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 550636;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52861135;
          result[5] += 275318;
        } else {
          result[0] += 3702558;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 20364069;
          result[5] += 29620464;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 20648881;
          result[2] += 0;
          result[3] += 0;
          result[4] += 33038209;
          result[5] += 0;
        } else {
          result[0] += 48716064;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3976821;
          result[5] += 994205;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1813753;
          result[4] += 1305902;
          result[5] += 50567435;
        } else {
          result[0] += 1248537;
          result[1] += 0;
          result[2] += 11236833;
          result[3] += 0;
          result[4] += 19976592;
          result[5] += 21225129;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 268435;
          result[2] += 0;
          result[3] += 8589934;
          result[4] += 11542724;
          result[5] += 33285996;
        } else {
          result[0] += 994205;
          result[1] += 0;
          result[2] += 2584934;
          result[3] += 32609936;
          result[4] += 1193046;
          result[5] += 16304968;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42870000))) ) ) {
          result[0] += 3652183;
          result[1] += 15339168;
          result[2] += 0;
          result[3] += 0;
          result[4] += 32504429;
          result[5] += 2191309;
        } else {
          result[0] += 41077043;
          result[1] += 792847;
          result[2] += 1434676;
          result[3] += 3058125;
          result[4] += 3435671;
          result[5] += 3888727;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 2064888;
          result[2] += 5899680;
          result[3] += 28908433;
          result[4] += 1769904;
          result[5] += 15044184;
        } else {
          result[0] += 1626881;
          result[1] += 0;
          result[2] += 30910749;
          result[3] += 16268815;
          result[4] += 3253763;
          result[5] += 1626881;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 2147483;
          result[2] += 28776280;
          result[3] += 11166914;
          result[4] += 0;
          result[5] += 11596411;
        } else {
          result[0] += 876013;
          result[1] += 62572;
          result[2] += 49682459;
          result[3] += 2690611;
          result[4] += 125144;
          result[5] += 250289;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 378078;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49906310;
          result[5] += 3402702;
        } else {
          result[0] += 0;
          result[1] += 41756626;
          result[2] += 0;
          result[3] += 0;
          result[4] += 11930464;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 970248;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2263913;
          result[4] += 4473924;
          result[5] += 45979004;
        } else {
          result[0] += 4668442;
          result[1] += 359110;
          result[2] += 0;
          result[3] += 21546658;
          result[4] += 4129776;
          result[5] += 22983102;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 3067833;
          result[1] += 12271335;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38347922;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53077010;
          result[2] += 0;
          result[3] += 0;
          result[4] += 610080;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 45449642;
          result[1] += 1819901;
          result[2] += 239460;
          result[3] += 1388872;
          result[4] += 3352449;
          result[5] += 1436764;
        } else {
          result[0] += 8291442;
          result[1] += 829144;
          result[2] += 6840440;
          result[3] += 14095452;
          result[4] += 7047726;
          result[5] += 16582885;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428c0000))) ) ) {
          result[0] += 0;
          result[1] += 11744051;
          result[2] += 15099494;
          result[3] += 13421772;
          result[4] += 8388607;
          result[5] += 5033164;
        } else {
          result[0] += 3501332;
          result[1] += 583555;
          result[2] += 5251998;
          result[3] += 4668442;
          result[4] += 1750666;
          result[5] += 37931097;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10519767;
          result[3] += 40265318;
          result[4] += 0;
          result[5] += 2902004;
        } else {
          result[0] += 2640348;
          result[1] += 0;
          result[2] += 36964882;
          result[3] += 8801162;
          result[4] += 0;
          result[5] += 5280697;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 47244640;
          result[1] += 0;
          result[2] += 0;
          result[3] += 6442450;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 5856773;
          result[1] += 0;
          result[2] += 36604834;
          result[3] += 6832902;
          result[4] += 0;
          result[5] += 4392580;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 248551;
          result[1] += 1242756;
          result[2] += 42502280;
          result[3] += 7207989;
          result[4] += 0;
          result[5] += 2485513;
        } else {
          result[0] += 323416;
          result[1] += 80854;
          result[2] += 51423177;
          result[3] += 1697935;
          result[4] += 0;
          result[5] += 161708;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 403662;
          result[1] += 605493;
          result[2] += 0;
          result[3] += 0;
          result[4] += 43191870;
          result[5] += 9486064;
        } else {
          result[0] += 26127717;
          result[1] += 357913;
          result[2] += 0;
          result[3] += 1073741;
          result[4] += 26127717;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2042443;
          result[4] += 2115388;
          result[5] += 49529259;
        } else {
          result[0] += 1028488;
          result[1] += 1234186;
          result[2] += 0;
          result[3] += 10490581;
          result[4] += 10901976;
          result[5] += 30031859;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42560000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 43925801;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9761289;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 41882926;
          result[1] += 1442731;
          result[2] += 743225;
          result[3] += 2623147;
          result[4] += 4983980;
          result[5] += 2011079;
        } else {
          result[0] += 5340101;
          result[1] += 572153;
          result[2] += 10870920;
          result[3] += 21360405;
          result[4] += 3051486;
          result[5] += 12492022;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42480000))) ) ) {
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 16519104;
          result[5] += 37167986;
        } else {
          result[0] += 2334221;
          result[1] += 0;
          result[2] += 23342213;
          result[3] += 21007992;
          result[4] += 0;
          result[5] += 7002664;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 3303820;
          result[2] += 18171015;
          result[3] += 24778657;
          result[4] += 0;
          result[5] += 7433597;
        } else {
          result[0] += 778073;
          result[1] += 0;
          result[2] += 48240574;
          result[3] += 3890368;
          result[4] += 778073;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 1056832;
          result[1] += 0;
          result[2] += 46923363;
          result[3] += 5706895;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 86037;
          result[1] += 0;
          result[2] += 52310499;
          result[3] += 1290555;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42900000))) ) ) {
          result[0] += 402150;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52681714;
          result[5] += 603225;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3834792;
          result[3] += 3834792;
          result[4] += 26843545;
          result[5] += 19173961;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2733713;
          result[4] += 2202157;
          result[5] += 48751220;
        } else {
          result[0] += 5908148;
          result[1] += 513752;
          result[2] += 0;
          result[3] += 17638821;
          result[4] += 4538143;
          result[5] += 25088226;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42480000))) ) ) {
          result[0] += 0;
          result[1] += 52946579;
          result[2] += 0;
          result[3] += 123418;
          result[4] += 617093;
          result[5] += 0;
        } else {
          result[0] += 985084;
          result[1] += 18716600;
          result[2] += 985084;
          result[3] += 492542;
          result[4] += 32507779;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 26429409;
          result[1] += 1204759;
          result[2] += 5044930;
          result[3] += 9261587;
          result[4] += 3764873;
          result[5] += 7981531;
        } else {
          result[0] += 44905559;
          result[1] += 2860650;
          result[2] += 2661070;
          result[3] += 266107;
          result[4] += 2794123;
          result[5] += 199580;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 4569114;
          result[2] += 3426835;
          result[3] += 5711392;
          result[4] += 3426835;
          result[5] += 36552913;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7090747;
          result[3] += 40518559;
          result[4] += 0;
          result[5] += 6077783;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42960000))) ) ) {
          result[0] += 49213166;
          result[1] += 4473924;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 2206318;
          result[1] += 0;
          result[2] += 30888463;
          result[3] += 13973352;
          result[4] += 735439;
          result[5] += 5883516;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 432960;
          result[1] += 0;
          result[2] += 43079561;
          result[3] += 9092168;
          result[4] += 0;
          result[5] += 1082401;
        } else {
          result[0] += 48806446;
          result[1] += 0;
          result[2] += 4880644;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
          result[0] += 18948385;
          result[1] += 0;
          result[2] += 25264513;
          result[3] += 0;
          result[4] += 0;
          result[5] += 9474192;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 51887086;
          result[3] += 1486960;
          result[4] += 0;
          result[5] += 313044;
        }
      }
    }
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0;
          result[1] += 49392123;
          result[2] += 0;
          result[3] += 2147483;
          result[4] += 0;
          result[5] += 2147483;
        } else {
          result[0] += 997901;
          result[1] += 199580;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49495905;
          result[5] += 2993703;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 19641618;
          result[5] += 34045472;
        } else {
          result[0] += 47561718;
          result[1] += 720632;
          result[2] += 0;
          result[3] += 720632;
          result[4] += 2522212;
          result[5] += 2161896;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x424a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 59126;
          result[2] += 59126;
          result[3] += 1419042;
          result[4] += 3665858;
          result[5] += 48483936;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 3216277;
          result[1] += 494811;
          result[2] += 3216277;
          result[3] += 9154020;
          result[4] += 5937742;
          result[5] += 31667961;
        } else {
          result[0] += 0;
          result[1] += 1731841;
          result[2] += 577280;
          result[3] += 34636833;
          result[4] += 0;
          result[5] += 16741135;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42540000))) ) ) {
          result[0] += 0;
          result[1] += 53554530;
          result[2] += 0;
          result[3] += 0;
          result[4] += 132560;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 20485863;
          result[2] += 4944863;
          result[3] += 706409;
          result[4] += 27549954;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 44366745;
          result[1] += 1902111;
          result[2] += 0;
          result[3] += 1521689;
          result[4] += 3614011;
          result[5] += 2282533;
        } else {
          result[0] += 6672971;
          result[1] += 909950;
          result[2] += 10161116;
          result[3] += 20928866;
          result[4] += 2123218;
          result[5] += 12890968;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 756156;
          result[2] += 3024624;
          result[3] += 41588591;
          result[4] += 0;
          result[5] += 8317718;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20527417;
          result[3] += 11053224;
          result[4] += 0;
          result[5] += 22106449;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 6282531;
          result[1] += 1713417;
          result[2] += 22274431;
          result[3] += 16563038;
          result[4] += 2284557;
          result[5] += 4569114;
        } else {
          result[0] += 1833497;
          result[1] += 0;
          result[2] += 47957412;
          result[3] += 3495104;
          result[4] += 0;
          result[5] += 401077;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42240000))) ) ) {
          result[0] += 0;
          result[1] += 50861454;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 2825636;
        } else {
          result[0] += 0;
          result[1] += 891072;
          result[2] += 0;
          result[3] += 222768;
          result[4] += 49677266;
          result[5] += 2895984;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 2349116;
          result[1] += 97879;
          result[2] += 48939;
          result[3] += 3474734;
          result[4] += 4404592;
          result[5] += 43311828;
        } else {
          result[0] += 477218;
          result[1] += 0;
          result[2] += 1431655;
          result[3] += 39609142;
          result[4] += 238609;
          result[5] += 11930464;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 6442450;
          result[2] += 0;
          result[3] += 0;
          result[4] += 47244640;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 52392007;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1295083;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 44658894;
          result[1] += 1227133;
          result[2] += 788871;
          result[3] += 1358612;
          result[4] += 4207314;
          result[5] += 1446264;
        } else {
          result[0] += 7258394;
          result[1] += 1001157;
          result[2] += 13640776;
          result[3] += 16018526;
          result[4] += 3504052;
          result[5] += 12264184;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42810000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5195524;
          result[3] += 3463683;
          result[4] += 0;
          result[5] += 45027882;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 2982616;
          result[1] += 11930464;
          result[2] += 0;
          result[3] += 5965232;
          result[4] += 2982616;
          result[5] += 29826161;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28673787;
          result[3] += 20742739;
          result[4] += 0;
          result[5] += 4270564;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4129776;
          result[3] += 45427538;
          result[4] += 0;
          result[5] += 4129776;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 0;
          result[4] += 0;
          result[5] += 25053975;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 12389328;
          result[1] += 0;
          result[2] += 16519104;
          result[3] += 8259552;
          result[4] += 0;
          result[5] += 16519104;
        } else {
          result[0] += 119172;
          result[1] += 0;
          result[2] += 50350268;
          result[3] += 2800547;
          result[4] += 119172;
          result[5] += 297930;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 347489;
          result[1] += 1911190;
          result[2] += 0;
          result[3] += 1216212;
          result[4] += 47258539;
          result[5] += 2953658;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1927595;
          result[4] += 2284557;
          result[5] += 49474939;
        } else {
          result[0] += 7556611;
          result[1] += 527205;
          result[2] += 1230146;
          result[3] += 19330867;
          result[4] += 4569114;
          result[5] += 20473146;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 6710886;
          result[2] += 0;
          result[3] += 0;
          result[4] += 46976204;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 52620460;
          result[2] += 0;
          result[3] += 237029;
          result[4] += 711087;
          result[5] += 118514;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 43835054;
          result[1] += 1605838;
          result[2] += 347208;
          result[3] += 1345432;
          result[4] += 5772338;
          result[5] += 781218;
        } else {
          result[0] += 8878485;
          result[1] += 2219621;
          result[2] += 9849569;
          result[3] += 10543201;
          result[4] += 2497074;
          result[5] += 19699139;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5064819;
          result[3] += 37479667;
          result[4] += 0;
          result[5] += 11142603;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 27569046;
          result[3] += 14510024;
          result[4] += 0;
          result[5] += 11608019;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 44350205;
          result[3] += 7002664;
          result[4] += 0;
          result[5] += 2334221;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42df0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 2334221;
          result[1] += 0;
          result[2] += 35791394;
          result[3] += 9336885;
          result[4] += 0;
          result[5] += 6224590;
        } else {
          result[0] += 321865;
          result[1] += 0;
          result[2] += 50532813;
          result[3] += 2574920;
          result[4] += 0;
          result[5] += 257492;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 521233;
          result[1] += 260616;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52384006;
          result[5] += 521233;
        } else {
          result[0] += 15384020;
          result[1] += 0;
          result[2] += 0;
          result[3] += 5023353;
          result[4] += 20721333;
          result[5] += 12558383;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 782610;
          result[2] += 78261;
          result[3] += 2426093;
          result[4] += 1095654;
          result[5] += 49304471;
        } else {
          result[0] += 0;
          result[1] += 227970;
          result[2] += 0;
          result[3] += 17097799;
          result[4] += 6611149;
          result[5] += 29750171;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 20648881;
          result[2] += 0;
          result[3] += 0;
          result[4] += 33038209;
          result[5] += 0;
        } else {
          result[0] += 228455;
          result[1] += 52887496;
          result[2] += 0;
          result[3] += 228455;
          result[4] += 342683;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 42519514;
          result[1] += 2274876;
          result[2] += 620420;
          result[3] += 992673;
          result[4] += 6162847;
          result[5] += 1116757;
        } else {
          result[0] += 10819592;
          result[1] += 3150007;
          result[2] += 10545678;
          result[3] += 16023953;
          result[4] += 1506525;
          result[5] += 11641333;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8259552;
          result[3] += 39232874;
          result[4] += 0;
          result[5] += 6194664;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 45427538;
          result[3] += 4129776;
          result[4] += 0;
          result[5] += 4129776;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 44739242;
          result[3] += 8947848;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 559240;
          result[1] += 0;
          result[2] += 36350634;
          result[3] += 15658734;
          result[4] += 0;
          result[5] += 1118481;
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 6710886;
          result[1] += 0;
          result[2] += 26843545;
          result[3] += 13421772;
          result[4] += 0;
          result[5] += 6710886;
        } else {
          result[0] += 193350;
          result[1] += 0;
          result[2] += 51237980;
          result[3] += 1997958;
          result[4] += 0;
          result[5] += 257801;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52917383;
          result[5] += 769707;
        } else {
          result[0] += 5113056;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 33234865;
          result[5] += 15339168;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1762037;
          result[1] += 55063;
          result[2] += 0;
          result[3] += 2753184;
          result[4] += 2753184;
          result[5] += 46363621;
        } else {
          result[0] += 4224111;
          result[1] += 545046;
          result[2] += 681308;
          result[3] += 24663359;
          result[4] += 3134018;
          result[5] += 20439247;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 14495514;
          result[2] += 3221225;
          result[3] += 1073741;
          result[4] += 33822867;
          result[5] += 1073741;
        } else {
          result[0] += 0;
          result[1] += 52966459;
          result[2] += 0;
          result[3] += 0;
          result[4] += 720632;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 45597915;
          result[1] += 1685245;
          result[2] += 192599;
          result[3] += 625948;
          result[4] += 5152034;
          result[5] += 433348;
        } else {
          result[0] += 8202194;
          result[1] += 497102;
          result[2] += 17895697;
          result[3] += 16155837;
          result[4] += 1739859;
          result[5] += 9196399;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3355443;
          result[4] += 3355443;
          result[5] += 46976204;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2618882;
          result[3] += 34045472;
          result[4] += 0;
          result[5] += 17022736;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 11930464;
          result[5] += 41756626;
        } else {
          result[0] += 1491308;
          result[1] += 0;
          result[2] += 40265318;
          result[3] += 2982616;
          result[4] += 0;
          result[5] += 8947848;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b20000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
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
          result[5] += 53687091;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39268272;
          result[3] += 11964551;
          result[4] += 0;
          result[5] += 2454267;
        } else {
          result[0] += 835596;
          result[1] += 0;
          result[2] += 50692869;
          result[3] += 2158624;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          result[0] += 460833;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52995841;
          result[5] += 230416;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 35471828;
          result[5] += 18215263;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 3229298;
          result[1] += 1210987;
          result[2] += 0;
          result[3] += 3128383;
          result[4] += 3178840;
          result[5] += 42939581;
        } else {
          result[0] += 612400;
          result[1] += 0;
          result[2] += 1428933;
          result[3] += 32661348;
          result[4] += 204133;
          result[5] += 18780275;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 10226112;
          result[2] += 0;
          result[3] += 0;
          result[4] += 43460978;
          result[5] += 0;
        } else {
          result[0] += 116965;
          result[1] += 53102264;
          result[2] += 0;
          result[3] += 0;
          result[4] += 467861;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 42706663;
          result[1] += 1890073;
          result[2] += 135005;
          result[3] += 1395054;
          result[4] += 6750262;
          result[5] += 810031;
        } else {
          result[0] += 7819641;
          result[1] += 700266;
          result[2] += 9336885;
          result[3] += 12371373;
          result[4] += 5602131;
          result[5] += 17856793;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 16106127;
          result[3] += 10737418;
          result[4] += 2684354;
          result[5] += 24159191;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3426835;
          result[3] += 43406584;
          result[4] += 0;
          result[5] += 6853671;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 1376592;
          result[1] += 0;
          result[2] += 41297762;
          result[3] += 8259552;
          result[4] += 0;
          result[5] += 2753184;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 5113056;
          result[1] += 0;
          result[2] += 10226112;
          result[3] += 38347922;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 45427538;
          result[3] += 7227108;
          result[4] += 0;
          result[5] += 1032444;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 4129776;
          result[1] += 0;
          result[2] += 24778657;
          result[3] += 8259552;
          result[4] += 0;
          result[5] += 16519104;
        } else {
          result[0] += 304348;
          result[1] += 0;
          result[2] += 50947953;
          result[3] += 1826091;
          result[4] += 0;
          result[5] += 608697;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 384853;
          result[1] += 0;
          result[2] += 384853;
          result[3] += 0;
          result[4] += 48683993;
          result[5] += 4233390;
        } else {
          result[0] += 0;
          result[1] += 32212254;
          result[2] += 0;
          result[3] += 21474836;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42830000))) ) ) {
          result[0] += 77694;
          result[1] += 854642;
          result[2] += 0;
          result[3] += 1476200;
          result[4] += 1320811;
          result[5] += 49957741;
        } else {
          result[0] += 5829421;
          result[1] += 658160;
          result[2] += 188045;
          result[3] += 15607805;
          result[4] += 6957696;
          result[5] += 24445960;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42460000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 35232153;
          result[1] += 1677721;
          result[2] += 0;
          result[3] += 0;
          result[4] += 16777215;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 39995638;
          result[1] += 3941478;
          result[2] += 414892;
          result[3] += 1452123;
          result[4] += 6430833;
          result[5] += 1452123;
        } else {
          result[0] += 7304366;
          result[1] += 486957;
          result[2] += 14973950;
          result[3] += 11078288;
          result[4] += 4504359;
          result[5] += 15339168;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e80000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 7535030;
          result[2] += 8476909;
          result[3] += 9418787;
          result[4] += 7535030;
          result[5] += 20721333;
        } else {
          result[0] += 1309441;
          result[1] += 0;
          result[2] += 41902119;
          result[3] += 9166088;
          result[4] += 0;
          result[5] += 1309441;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42960000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38347922;
          result[3] += 0;
          result[4] += 0;
          result[5] += 15339168;
        } else {
          result[0] += 49660559;
          result[1] += 0;
          result[2] += 4026531;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 526344;
          result[1] += 526344;
          result[2] += 22632793;
          result[3] += 22106449;
          result[4] += 0;
          result[5] += 7895160;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 48042420;
          result[3] += 4766610;
          result[4] += 0;
          result[5] += 878059;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53050988;
          result[3] += 636102;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          result[0] += 464823;
          result[1] += 3021351;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49271269;
          result[5] += 929646;
        } else {
          result[0] += 32758225;
          result[1] += 2729852;
          result[2] += 909950;
          result[3] += 0;
          result[4] += 10009457;
          result[5] += 7279605;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1032444;
          result[4] += 2286126;
          result[5] += 50368520;
        } else {
          result[0] += 361123;
          result[1] += 481498;
          result[2] += 601873;
          result[3] += 19982190;
          result[4] += 8787349;
          result[5] += 23473055;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 3834792;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49852298;
          result[5] += 0;
        } else {
          result[0] += 235469;
          result[1] += 53451621;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 24550378;
          result[1] += 2913671;
          result[2] += 593525;
          result[3] += 5935256;
          result[4] += 10143892;
          result[5] += 9550366;
        } else {
          result[0] += 51291138;
          result[1] += 88738;
          result[2] += 1153606;
          result[3] += 266216;
          result[4] += 887389;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c20000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 852176;
          result[1] += 0;
          result[2] += 4260880;
          result[3] += 17043521;
          result[4] += 0;
          result[5] += 31530513;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6522730;
          result[3] += 42648623;
          result[4] += 0;
          result[5] += 4515736;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 26843545;
          result[4] += 0;
          result[5] += 26843545;
        } else {
          result[0] += 0;
          result[1] += 1278264;
          result[2] += 43460978;
          result[3] += 3834792;
          result[4] += 0;
          result[5] += 5113056;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ee0000))) ) ) {
          result[0] += 177185;
          result[1] += 0;
          result[2] += 38094800;
          result[3] += 10276736;
          result[4] += 708740;
          result[5] += 4429627;
        } else {
          result[0] += 40265318;
          result[1] += 0;
          result[2] += 13421772;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26843545;
          result[3] += 4473924;
          result[4] += 0;
          result[5] += 22369621;
        } else {
          result[0] += 432379;
          result[1] += 0;
          result[2] += 51885510;
          result[3] += 1297137;
          result[4] += 0;
          result[5] += 72063;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 509687;
          result[1] += 1698958;
          result[2] += 0;
          result[3] += 169895;
          result[4] += 50289174;
          result[5] += 1019375;
        } else {
          result[0] += 865920;
          result[1] += 1731841;
          result[2] += 0;
          result[3] += 0;
          result[4] += 27709466;
          result[5] += 23379862;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 53203423;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 483667;
        } else {
          result[0] += 833075;
          result[1] += 185127;
          result[2] += 0;
          result[3] += 5276145;
          result[4] += 5461273;
          result[5] += 41931469;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 40539232;
          result[1] += 4702185;
          result[2] += 684784;
          result[3] += 1734786;
          result[4] += 4382619;
          result[5] += 1643482;
        } else {
          result[0] += 5909586;
          result[1] += 801299;
          result[2] += 10817548;
          result[3] += 20633471;
          result[4] += 2203574;
          result[5] += 13321610;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 258732;
          result[1] += 53428358;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 21474836;
          result[1] += 0;
          result[2] += 32212254;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42800000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 1412818;
          result[2] += 0;
          result[3] += 4238454;
          result[4] += 0;
          result[5] += 48035818;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 24294158;
          result[3] += 22494591;
          result[4] += 0;
          result[5] += 6898341;
        } else {
          result[0] += 976128;
          result[1] += 0;
          result[2] += 48806446;
          result[3] += 3904515;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428d0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 45591418;
          result[3] += 6391320;
          result[4] += 0;
          result[5] += 1704352;
        } else {
          result[0] += 85082;
          result[1] += 0;
          result[2] += 51900357;
          result[3] += 1701651;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51314181;
          result[5] += 2372910;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1393517;
          result[4] += 2126947;
          result[5] += 50166626;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42850000))) ) ) {
          result[0] += 17369353;
          result[1] += 902304;
          result[2] += 0;
          result[3] += 2030184;
          result[4] += 30903913;
          result[5] += 2481336;
        } else {
          result[0] += 301612;
          result[1] += 1005376;
          result[2] += 2111290;
          result[3] += 24430642;
          result[4] += 2010752;
          result[5] += 23827416;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 41153298;
          result[1] += 3756055;
          result[2] += 612400;
          result[3] += 694053;
          result[4] += 7022189;
          result[5] += 449093;
        } else {
          result[0] += 9508612;
          result[1] += 292572;
          result[2] += 11849194;
          result[3] += 12434339;
          result[4] += 3364586;
          result[5] += 16237785;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 53558035;
          result[2] += 0;
          result[3] += 0;
          result[4] += 129055;
          result[5] += 0;
        } else {
          result[0] += 53687091;
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
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4129776;
          result[3] += 4129776;
          result[4] += 4129776;
          result[5] += 41297762;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 24813361;
          result[3] += 22106449;
          result[4] += 0;
          result[5] += 6767280;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39605231;
          result[3] += 11441511;
          result[4] += 0;
          result[5] += 2640348;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 51803333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1883757;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42800000))) ) ) {
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26843545;
          result[3] += 26843545;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 558513;
          result[1] += 0;
          result[2] += 51243595;
          result[3] += 1675539;
          result[4] += 0;
          result[5] += 209442;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 749122;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52188846;
          result[5] += 749122;
        } else {
          result[0] += 26635456;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 13733907;
          result[5] += 13317728;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 312497;
          result[2] += 0;
          result[3] += 2624980;
          result[4] += 2312482;
          result[5] += 48437131;
        } else {
          result[0] += 0;
          result[1] += 868254;
          result[2] += 289418;
          result[3] += 26337063;
          result[4] += 3183601;
          result[5] += 23008753;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 6369654;
          result[1] += 30028373;
          result[2] += 2729852;
          result[3] += 1819901;
          result[4] += 12739309;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
          result[0] += 42787243;
          result[1] += 2650158;
          result[2] += 0;
          result[3] += 1624290;
          result[4] += 5599529;
          result[5] += 1025867;
        } else {
          result[0] += 9451952;
          result[1] += 378078;
          result[2] += 13232733;
          result[3] += 12476577;
          result[4] += 5860210;
          result[5] += 12287538;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b00000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42910000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 32212254;
          result[5] += 21474836;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1412818;
          result[3] += 14128181;
          result[4] += 0;
          result[5] += 38146091;
        } else {
          result[0] += 0;
          result[1] += 1359166;
          result[2] += 11552918;
          result[3] += 29222087;
          result[4] += 0;
          result[5] += 11552918;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11388170;
          result[3] += 26030104;
          result[4] += 0;
          result[5] += 16268815;
        } else {
          result[0] += 511305;
          result[1] += 0;
          result[2] += 34257477;
          result[3] += 17895697;
          result[4] += 0;
          result[5] += 1022611;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 28010656;
          result[1] += 2334221;
          result[2] += 18673770;
          result[3] += 0;
          result[4] += 4668442;
          result[5] += 0;
        } else {
          result[0] += 875333;
          result[1] += 116711;
          result[2] += 49427137;
          result[3] += 2567643;
          result[4] += 58355;
          result[5] += 641910;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
          result[0] += 240749;
          result[1] += 240749;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52964843;
          result[5] += 240749;
        } else {
          result[0] += 0;
          result[1] += 2147483;
          result[2] += 0;
          result[3] += 1073741;
          result[4] += 37580963;
          result[5] += 12884901;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 2607820;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1984211;
          result[4] += 3004662;
          result[5] += 46090396;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 180764;
          result[3] += 27476221;
          result[4] += 542293;
          result[5] += 25487810;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x424a0000))) ) ) {
          result[0] += 123702;
          result[1] += 52573764;
          result[2] += 0;
          result[3] += 0;
          result[4] += 989623;
          result[5] += 0;
        } else {
          result[0] += 1799567;
          result[1] += 18895456;
          result[2] += 0;
          result[3] += 0;
          result[4] += 31192499;
          result[5] += 1799567;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 45762290;
          result[1] += 503889;
          result[2] += 45808;
          result[3] += 1053586;
          result[4] += 4993082;
          result[5] += 1328434;
        } else {
          result[0] += 8989466;
          result[1] += 499414;
          result[2] += 14732736;
          result[3] += 18353493;
          result[4] += 1123683;
          result[5] += 9988296;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1309441;
          result[3] += 5237764;
          result[4] += 3928323;
          result[5] += 43211561;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37167986;
          result[3] += 0;
          result[4] += 0;
          result[5] += 16519104;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 15586574;
          result[3] += 32904991;
          result[4] += 865920;
          result[5] += 4329604;
        } else {
          result[0] += 3355443;
          result[1] += 0;
          result[2] += 36909875;
          result[3] += 6710886;
          result[4] += 0;
          result[5] += 6710886;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 20648881;
          result[2] += 4129776;
          result[3] += 20648881;
          result[4] += 8259552;
          result[5] += 0;
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 391876;
          result[1] += 0;
          result[2] += 41538917;
          result[3] += 10972544;
          result[4] += 0;
          result[5] += 783753;
        } else {
          result[0] += 899397;
          result[1] += 0;
          result[2] += 50712162;
          result[3] += 1729609;
          result[4] += 0;
          result[5] += 345921;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 1438047;
          result[1] += 2876094;
          result[2] += 0;
          result[3] += 0;
          result[4] += 48174577;
          result[5] += 1198372;
        } else {
          result[0] += 26688380;
          result[1] += 4034290;
          result[2] += 0;
          result[3] += 0;
          result[4] += 14895840;
          result[5] += 8068580;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2791961;
          result[4] += 3257288;
          result[5] += 47637841;
        } else {
          result[0] += 861290;
          result[1] += 1148386;
          result[2] += 1148386;
          result[3] += 29140319;
          result[4] += 5024193;
          result[5] += 16364514;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42580000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 10066329;
          result[2] += 0;
          result[3] += 0;
          result[4] += 43620761;
          result[5] += 0;
        } else {
          result[0] += 229432;
          result[1] += 52195783;
          result[2] += 0;
          result[3] += 688296;
          result[4] += 344148;
          result[5] += 229432;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
          result[0] += 43570057;
          result[1] += 1908874;
          result[2] += 286331;
          result[3] += 858993;
          result[4] += 6203841;
          result[5] += 858993;
        } else {
          result[0] += 12639337;
          result[1] += 1203746;
          result[2] += 13843084;
          result[3] += 8787349;
          result[4] += 2648242;
          result[5] += 14565331;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42880000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 13421772;
          result[4] += 26843545;
          result[5] += 13421772;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 3441480;
          result[2] += 11012736;
          result[3] += 33726506;
          result[4] += 0;
          result[5] += 5506368;
        } else {
          result[0] += 0;
          result[1] += 4026531;
          result[2] += 30870077;
          result[3] += 8053063;
          result[4] += 0;
          result[5] += 10737418;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 1851279;
          result[2] += 12958953;
          result[3] += 20364069;
          result[4] += 3702558;
          result[5] += 14810232;
        } else {
          result[0] += 8388607;
          result[1] += 0;
          result[2] += 40265318;
          result[3] += 5033164;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1152083;
          result[1] += 0;
          result[2] += 43548756;
          result[3] += 7834167;
          result[4] += 0;
          result[5] += 1152083;
        } else {
          result[0] += 83106;
          result[1] += 0;
          result[2] += 51941845;
          result[3] += 1662139;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42900000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42380000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52530041;
          result[5] += 1157049;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 0;
          result[1] += 4129776;
          result[2] += 4129776;
          result[3] += 4129776;
          result[4] += 37167986;
          result[5] += 4129776;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
          result[0] += 30307228;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 22513941;
          result[5] += 865920;
        } else {
          result[0] += 0;
          result[1] += 170075;
          result[2] += 0;
          result[3] += 2721204;
          result[4] += 2607820;
          result[5] += 48187991;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 6328136;
          result[1] += 1633067;
          result[2] += 612400;
          result[3] += 11023205;
          result[4] += 3878535;
          result[5] += 30211747;
        } else {
          result[0] += 583555;
          result[1] += 0;
          result[2] += 291777;
          result[3] += 41432429;
          result[4] += 291777;
          result[5] += 11087551;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 887389;
          result[1] += 18635188;
          result[2] += 0;
          result[3] += 0;
          result[4] += 34164512;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53271984;
          result[2] += 0;
          result[3] += 0;
          result[4] += 415106;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42950000))) ) ) {
          result[0] += 17669169;
          result[1] += 2378542;
          result[2] += 7135626;
          result[3] += 7475417;
          result[4] += 3397917;
          result[5] += 15630418;
        } else {
          result[0] += 45061215;
          result[1] += 1931836;
          result[2] += 1617351;
          result[3] += 1527498;
          result[4] += 2875291;
          result[5] += 673896;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 1106950;
          result[1] += 553475;
          result[2] += 9409077;
          result[3] += 21585531;
          result[4] += 6364964;
          result[5] += 14667091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40103610;
          result[3] += 9702486;
          result[4] += 0;
          result[5] += 3880994;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 4515736;
          result[1] += 0;
          result[2] += 32111905;
          result[3] += 6522730;
          result[4] += 1505245;
          result[5] += 9031473;
        } else {
          result[0] += 61638;
          result[1] += 0;
          result[2] += 50235337;
          result[3] += 3081922;
          result[4] += 0;
          result[5] += 308192;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 479349;
          result[1] += 719023;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52488718;
          result[5] += 0;
        } else {
          result[0] += 2618882;
          result[1] += 1309441;
          result[2] += 0;
          result[3] += 3928323;
          result[4] += 28807707;
          result[5] += 17022736;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1477626;
          result[4] += 2110894;
          result[5] += 50098570;
        } else {
          result[0] += 4447451;
          result[1] += 105891;
          result[2] += 635350;
          result[3] += 20013531;
          result[4] += 3706209;
          result[5] += 24778657;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53435039;
          result[2] += 0;
          result[3] += 0;
          result[4] += 252052;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 40383745;
          result[1] += 2723830;
          result[2] += 78951;
          result[3] += 1065846;
          result[4] += 8289918;
          result[5] += 1144798;
        } else {
          result[0] += 12942423;
          result[1] += 798915;
          result[2] += 8308716;
          result[3] += 15498951;
          result[4] += 1438047;
          result[5] += 14700036;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10042189;
          result[3] += 33988949;
          result[4] += 0;
          result[5] += 9655951;
        } else {
          result[0] += 9761289;
          result[1] += 0;
          result[2] += 34164512;
          result[3] += 7320966;
          result[4] += 2440322;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 26843545;
          result[4] += 0;
          result[5] += 26843545;
        } else {
          result[0] += 3463683;
          result[1] += 0;
          result[2] += 45027882;
          result[3] += 1731841;
          result[4] += 0;
          result[5] += 3463683;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 15339168;
          result[3] += 28121809;
          result[4] += 0;
          result[5] += 10226112;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42344747;
          result[3] += 6805405;
          result[4] += 0;
          result[5] += 4536937;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 3143838;
          result[1] += 0;
          result[2] += 45948411;
          result[3] += 4594841;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 411080;
          result[1] += 0;
          result[2] += 52042769;
          result[3] += 1068808;
          result[4] += 0;
          result[5] += 164432;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 1073741;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51754355;
          result[5] += 858993;
        } else {
          result[0] += 3355443;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3355443;
          result[4] += 13421772;
          result[5] += 33554431;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 69542;
          result[1] += 69542;
          result[2] += 0;
          result[3] += 1529943;
          result[4] += 2642628;
          result[5] += 49375433;
        } else {
          result[0] += 5066853;
          result[1] += 323416;
          result[2] += 107805;
          result[3] += 19404972;
          result[4] += 4420021;
          result[5] += 24364021;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 16519104;
          result[2] += 0;
          result[3] += 1179936;
          result[4] += 35988050;
          result[5] += 0;
        } else {
          result[0] += 471974;
          result[1] += 52979129;
          result[2] += 0;
          result[3] += 0;
          result[4] += 235987;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 42965855;
          result[1] += 1375554;
          result[2] += 1618299;
          result[3] += 1901502;
          result[4] += 4369409;
          result[5] += 1456469;
        } else {
          result[0] += 7279605;
          result[1] += 303316;
          result[2] += 15924137;
          result[3] += 16075795;
          result[4] += 3033168;
          result[5] += 11071066;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d90000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0;
          result[1] += 735439;
          result[2] += 8825275;
          result[3] += 17650550;
          result[4] += 1470879;
          result[5] += 25004946;
        } else {
          result[0] += 6710886;
          result[1] += 46976204;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 23622320;
          result[1] += 6442450;
          result[2] += 8589934;
          result[3] += 0;
          result[4] += 2147483;
          result[5] += 12884901;
        } else {
          result[0] += 5368709;
          result[1] += 0;
          result[2] += 37580963;
          result[3] += 2147483;
          result[4] += 0;
          result[5] += 8589934;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 24696061;
          result[4] += 0;
          result[5] += 7516192;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 44739242;
          result[3] += 4473924;
          result[4] += 0;
          result[5] += 4473924;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 43677633;
          result[3] += 8917516;
          result[4] += 0;
          result[5] += 1091940;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52144358;
          result[3] += 1337034;
          result[4] += 0;
          result[5] += 205697;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42420000))) ) ) {
          result[0] += 7405116;
          result[1] += 46281975;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 5260406;
          result[1] += 1083024;
          result[2] += 0;
          result[3] += 1237742;
          result[4] += 41000228;
          result[5] += 5105688;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 59454;
          result[2] += 118908;
          result[3] += 2853798;
          result[4] += 4815785;
          result[5] += 45839144;
        } else {
          result[0] += 453055;
          result[1] += 0;
          result[2] += 1812222;
          result[3] += 31713893;
          result[4] += 1359166;
          result[5] += 18348752;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 17082256;
          result[2] += 0;
          result[3] += 0;
          result[4] += 36604834;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 39619350;
          result[1] += 2583870;
          result[2] += 328110;
          result[3] += 1927649;
          result[4] += 7095390;
          result[5] += 2132718;
        } else {
          result[0] += 9302773;
          result[1] += 1905387;
          result[2] += 13001466;
          result[3] += 13673956;
          result[4] += 3250366;
          result[5] += 12553140;
        }
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42930000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 5965232;
          result[5] += 47721858;
        } else {
          result[0] += 0;
          result[1] += 917728;
          result[2] += 16519104;
          result[3] += 29826161;
          result[4] += 0;
          result[5] += 6424096;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42e90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 45791930;
          result[3] += 7895160;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 1851279;
          result[1] += 0;
          result[2] += 1851279;
          result[3] += 0;
          result[4] += 11107674;
          result[5] += 38876859;
        } else {
          result[0] += 10737418;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 45122224;
          result[3] += 7938169;
          result[4] += 0;
          result[5] += 626697;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52587696;
          result[3] += 824545;
          result[4] += 0;
          result[5] += 274848;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b00000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 139085;
          result[1] += 695428;
          result[2] += 0;
          result[3] += 0;
          result[4] += 48401833;
          result[5] += 4450743;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 36317738;
          result[2] += 0;
          result[3] += 0;
          result[4] += 17369353;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53445800;
          result[2] += 0;
          result[3] += 0;
          result[4] += 241290;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1491308;
          result[1] += 51424;
          result[2] += 51424;
          result[3] += 4216802;
          result[4] += 2108401;
          result[5] += 45767730;
        } else {
          result[0] += 559240;
          result[1] += 0;
          result[2] += 0;
          result[3] += 34672913;
          result[4] += 0;
          result[5] += 18454937;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 45175723;
          result[1] += 1356207;
          result[2] += 93531;
          result[3] += 1262675;
          result[4] += 4910404;
          result[5] += 888549;
        } else {
          result[0] += 10002537;
          result[1] += 1326867;
          result[2] += 12350072;
          result[3] += 16841007;
          result[4] += 1531000;
          result[5] += 11635605;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6710886;
          result[3] += 0;
          result[4] += 46976204;
          result[5] += 0;
        } else {
          result[0] += 745654;
          result[1] += 0;
          result[2] += 2236962;
          result[3] += 11930464;
          result[4] += 1491308;
          result[5] += 37282702;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 3355443;
          result[2] += 23488102;
          result[3] += 23488102;
          result[4] += 0;
          result[5] += 3355443;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 2440322;
          result[1] += 0;
          result[2] += 12201611;
          result[3] += 24403223;
          result[4] += 1220161;
          result[5] += 13421772;
        } else {
          result[0] += 0;
          result[1] += 852176;
          result[2] += 40904450;
          result[3] += 9373936;
          result[4] += 0;
          result[5] += 2556528;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 1431655;
          result[1] += 0;
          result[2] += 40802189;
          result[3] += 10021590;
          result[4] += 0;
          result[5] += 1431655;
        } else {
          result[0] += 72063;
          result[1] += 0;
          result[2] += 51597258;
          result[3] += 1873643;
          result[4] += 0;
          result[5] += 144126;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42f60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 366464;
          result[4] += 51121837;
          result[5] += 2198788;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 64142;
          result[1] += 0;
          result[2] += 128284;
          result[3] += 1539414;
          result[4] += 1988410;
          result[5] += 49966838;
        } else {
          result[0] += 6224590;
          result[1] += 172905;
          result[2] += 345810;
          result[3] += 19019581;
          result[4] += 4754895;
          result[5] += 23169308;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
          result[0] += 0;
          result[1] += 53069998;
          result[2] += 0;
          result[3] += 0;
          result[4] += 617093;
          result[5] += 0;
        } else {
          result[0] += 1750666;
          result[1] += 19257326;
          result[2] += 0;
          result[3] += 0;
          result[4] += 30344877;
          result[5] += 2334221;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 45093294;
          result[1] += 1351833;
          result[2] += 531077;
          result[3] += 1303553;
          result[4] += 3958940;
          result[5] += 1448392;
        } else {
          result[0] += 15464216;
          result[1] += 3793109;
          result[2] += 10649884;
          result[3] += 14588883;
          result[4] += 3501332;
          result[5] += 5689664;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9663676;
          result[3] += 41875931;
          result[4] += 0;
          result[5] += 2147483;
        } else {
          result[0] += 2064888;
          result[1] += 0;
          result[2] += 27875989;
          result[3] += 12389328;
          result[4] += 1032444;
          result[5] += 10324440;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41875931;
          result[3] += 4294967;
          result[4] += 0;
          result[5] += 7516192;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 6710886;
          result[1] += 0;
          result[2] += 0;
          result[3] += 26843545;
          result[4] += 0;
          result[5] += 20132659;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 109120;
          result[1] += 0;
          result[2] += 47903725;
          result[3] += 4801284;
          result[4] += 0;
          result[5] += 872960;
        } else {
          result[0] += 1447446;
          result[1] += 0;
          result[2] += 51844887;
          result[3] += 263172;
          result[4] += 0;
          result[5] += 131586;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42860000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 53444163;
          result[2] += 0;
          result[3] += 0;
          result[4] += 242928;
          result[5] += 0;
        } else {
          result[0] += 8947848;
          result[1] += 44739242;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 780903;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51930059;
          result[5] += 976128;
        } else {
          result[0] += 2817282;
          result[1] += 119040;
          result[2] += 119040;
          result[3] += 8451848;
          result[4] += 3809283;
          result[5] += 38370596;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 42249777;
          result[1] += 3371446;
          result[2] += 597471;
          result[3] += 1152266;
          result[4] += 5804009;
          result[5] += 512118;
        } else {
          result[0] += 6761598;
          result[1] += 676159;
          result[2] += 13928892;
          result[3] += 14875516;
          result[4] += 5138814;
          result[5] += 12306109;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3834792;
          result[3] += 2556528;
          result[4] += 8947848;
          result[5] += 38347922;
        } else {
          result[0] += 662803;
          result[1] += 7290839;
          result[2] += 5302428;
          result[3] += 32477376;
          result[4] += 1325607;
          result[5] += 6628035;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 30678337;
          result[2] += 0;
          result[3] += 0;
          result[4] += 15339168;
          result[5] += 7669584;
        } else {
          result[0] += 5113056;
          result[1] += 0;
          result[2] += 35791394;
          result[3] += 7669584;
          result[4] += 1278264;
          result[5] += 3834792;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4880644;
          result[3] += 0;
          result[4] += 4880644;
          result[5] += 43925801;
        } else {
          result[0] += 1392460;
          result[1] += 0;
          result[2] += 44558738;
          result[3] += 7117020;
          result[4] += 0;
          result[5] += 618871;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42db0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52035180;
          result[3] += 1651910;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53403032;
          result[3] += 284058;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 211366;
          result[1] += 634099;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51362059;
          result[5] += 1479565;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 909950;
          result[4] += 1061609;
          result[5] += 51715531;
        } else {
          result[0] += 4137008;
          result[1] += 1786435;
          result[2] += 1222298;
          result[3] += 17300218;
          result[4] += 4419077;
          result[5] += 24822052;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53310779;
          result[2] += 0;
          result[3] += 0;
          result[4] += 376311;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 39362769;
          result[1] += 1552771;
          result[2] += 582289;
          result[3] += 2290338;
          result[4] += 7919137;
          result[5] += 1979784;
        } else {
          result[0] += 7780737;
          result[1] += 1556147;
          result[2] += 11541427;
          result[3] += 13875649;
          result[4] += 4409084;
          result[5] += 14524043;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11107674;
          result[3] += 35174301;
          result[4] += 0;
          result[5] += 7405116;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 31173149;
          result[3] += 19050258;
          result[4] += 0;
          result[5] += 3463683;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 51068208;
          result[3] += 2618882;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 6316128;
          result[1] += 12632256;
          result[2] += 6316128;
          result[3] += 12632256;
          result[4] += 6316128;
          result[5] += 9474192;
        } else {
          result[0] += 497102;
          result[1] += 0;
          result[2] += 45484896;
          result[3] += 6213783;
          result[4] += 0;
          result[5] += 1491308;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 48318382;
          result[3] += 5368709;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52814918;
          result[3] += 775264;
          result[4] += 0;
          result[5] += 96908;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 424403;
          result[2] += 0;
          result[3] += 212201;
          result[4] += 52413879;
          result[5] += 636605;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 24403223;
          result[4] += 24403223;
          result[5] += 4880644;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
          result[0] += 4971026;
          result[1] += 1988410;
          result[2] += 0;
          result[3] += 4971026;
          result[4] += 31814572;
          result[5] += 9942053;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 69363;
          result[3] += 832358;
          result[4] += 3398795;
          result[5] += 49386574;
        } else {
          result[0] += 541200;
          result[1] += 432960;
          result[2] += 324720;
          result[3] += 20673859;
          result[4] += 3355443;
          result[5] += 28358907;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 2788939;
          result[1] += 20568431;
          result[2] += 0;
          result[3] += 348617;
          result[4] += 29981102;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53308123;
          result[2] += 0;
          result[3] += 0;
          result[4] += 378967;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 47329409;
          result[1] += 1059613;
          result[2] += 252288;
          result[3] += 857782;
          result[4] += 2623805;
          result[5] += 1564191;
        } else {
          result[0] += 19188542;
          result[1] += 1428933;
          result[2] += 11839738;
          result[3] += 12043872;
          result[4] += 1837200;
          result[5] += 7348803;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1731841;
          result[4] += 12122891;
          result[5] += 39832357;
        } else {
          result[0] += 470939;
          result[1] += 235469;
          result[2] += 24253378;
          result[3] += 24724318;
          result[4] += 470939;
          result[5] += 3532045;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 8947848;
          result[1] += 2236962;
          result[2] += 0;
          result[3] += 4473924;
          result[4] += 13421772;
          result[5] += 24606583;
        } else {
          result[0] += 500190;
          result[1] += 0;
          result[2] += 48796341;
          result[3] += 3279025;
          result[4] += 0;
          result[5] += 1111533;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 553475;
          result[1] += 1291442;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51473190;
          result[5] += 368983;
        } else {
          result[0] += 34709328;
          result[1] += 499414;
          result[2] += 0;
          result[3] += 499414;
          result[4] += 7990636;
          result[5] += 9988296;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 155389;
          result[3] += 2020064;
          result[4] += 1243116;
          result[5] += 50268520;
        } else {
          result[0] += 204133;
          result[1] += 3062001;
          result[2] += 1224800;
          result[3] += 13881073;
          result[4] += 8165337;
          result[5] += 27149745;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 26843545;
          result[2] += 0;
          result[3] += 0;
          result[4] += 26843545;
          result[5] += 0;
        } else {
          result[0] += 267099;
          result[1] += 53019341;
          result[2] += 0;
          result[3] += 0;
          result[4] += 400649;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 45014561;
          result[1] += 1858399;
          result[2] += 516222;
          result[3] += 1910021;
          result[4] += 3923287;
          result[5] += 464599;
        } else {
          result[0] += 7789891;
          result[1] += 210537;
          result[2] += 10421611;
          result[3] += 17790428;
          result[4] += 4631827;
          result[5] += 12842794;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42bc0000))) ) ) {
          result[0] += 3355443;
          result[1] += 3355443;
          result[2] += 0;
          result[3] += 7549747;
          result[4] += 7549747;
          result[5] += 31876710;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 1988410;
          result[1] += 0;
          result[2] += 12593268;
          result[3] += 31814572;
          result[4] += 1988410;
          result[5] += 5302428;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38347922;
          result[3] += 6391320;
          result[4] += 0;
          result[5] += 8947848;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 43381829;
          result[3] += 9806620;
          result[4] += 0;
          result[5] += 498641;
        } else {
          result[0] += 29080507;
          result[1] += 0;
          result[2] += 24606583;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38654705;
          result[3] += 15032385;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52401764;
          result[3] += 1285326;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42850000))) ) ) {
          result[0] += 186413;
          result[1] += 3541856;
          result[2] += 0;
          result[3] += 0;
          result[4] += 46416964;
          result[5] += 3541856;
        } else {
          result[0] += 22605091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 22039963;
          result[5] += 9042036;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 289574;
          result[2] += 0;
          result[3] += 2953658;
          result[4] += 3706552;
          result[5] += 46737305;
        } else {
          result[0] += 846799;
          result[1] += 508079;
          result[2] += 3217838;
          result[3] += 27944385;
          result[4] += 1016159;
          result[5] += 20153829;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 41708751;
          result[1] += 2068202;
          result[2] += 0;
          result[3] += 1206451;
          result[4] += 6807833;
          result[5] += 1895852;
        } else {
          result[0] += 7895160;
          result[1] += 263172;
          result[2] += 15132390;
          result[3] += 16579836;
          result[4] += 2105376;
          result[5] += 11711154;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7090747;
          result[3] += 19246315;
          result[4] += 3038891;
          result[5] += 24311135;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 440058;
          result[1] += 0;
          result[2] += 44005812;
          result[3] += 8801162;
          result[4] += 0;
          result[5] += 440058;
        } else {
          result[0] += 41054834;
          result[1] += 0;
          result[2] += 12632256;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42de0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38177487;
          result[3] += 14316557;
          result[4] += 0;
          result[5] += 1193046;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 48806446;
          result[4] += 0;
          result[5] += 4880644;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 1442339;
          result[1] += 0;
          result[2] += 46635652;
          result[3] += 5288579;
          result[4] += 0;
          result[5] += 320519;
        } else {
          result[0] += 235469;
          result[1] += 0;
          result[2] += 52862947;
          result[3] += 588674;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42420000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 408266;
          result[1] += 204133;
          result[2] += 204133;
          result[3] += 0;
          result[4] += 50216822;
          result[5] += 2653734;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1313810;
          result[1] += 59718;
          result[2] += 0;
          result[3] += 1910997;
          result[4] += 3105371;
          result[5] += 47297192;
        } else {
          result[0] += 5607006;
          result[1] += 1121401;
          result[2] += 1121401;
          result[3] += 26352932;
          result[4] += 4065080;
          result[5] += 15419269;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42500000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 5368709;
          result[4] += 48318382;
          result[5] += 0;
        } else {
          result[0] += 1209168;
          result[1] += 50785086;
          result[2] += 0;
          result[3] += 483667;
          result[4] += 1209168;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 22605091;
          result[1] += 1412818;
          result[2] += 1749203;
          result[3] += 7265922;
          result[4] += 7938692;
          result[5] += 12715363;
        } else {
          result[0] += 44405594;
          result[1] += 2729852;
          result[2] += 2547861;
          result[3] += 909950;
          result[4] += 2851178;
          result[5] += 242653;
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8189556;
          result[3] += 34578126;
          result[4] += 0;
          result[5] += 10919408;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39558909;
          result[3] += 11302545;
          result[4] += 0;
          result[5] += 2825636;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 44837570;
          result[3] += 7079616;
          result[4] += 0;
          result[5] += 1769904;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 10737418;
          result[1] += 0;
          result[2] += 19327352;
          result[3] += 2147483;
          result[4] += 0;
          result[5] += 21474836;
        } else {
          result[0] += 2252605;
          result[1] += 0;
          result[2] += 43738084;
          result[3] += 7320966;
          result[4] += 0;
          result[5] += 375434;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40265318;
          result[3] += 0;
          result[4] += 0;
          result[5] += 13421772;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52482573;
          result[3] += 1204518;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 732096;
          result[1] += 732096;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51246768;
          result[5] += 976128;
        } else {
          result[0] += 26030104;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4067203;
          result[4] += 8947848;
          result[5] += 14641933;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 127070;
          result[1] += 635350;
          result[2] += 190605;
          result[3] += 2541400;
          result[4] += 4129776;
          result[5] += 46062888;
        } else {
          result[0] += 0;
          result[1] += 1091201;
          result[2] += 0;
          result[3] += 28589467;
          result[4] += 2400642;
          result[5] += 21605780;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53293298;
          result[2] += 0;
          result[3] += 131264;
          result[4] += 262528;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 41790737;
          result[1] += 1918766;
          result[2] += 422128;
          result[3] += 997758;
          result[4] += 7176187;
          result[5] += 1381511;
        } else {
          result[0] += 8634986;
          result[1] += 1314019;
          result[2] += 8634986;
          result[3] += 11638460;
          result[4] += 6194664;
          result[5] += 17269973;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
          result[0] += 0;
          result[1] += 565127;
          result[2] += 5086145;
          result[3] += 3390763;
          result[4] += 6781527;
          result[5] += 37863527;
        } else {
          result[0] += 6135667;
          result[1] += 21474836;
          result[2] += 4601750;
          result[3] += 10737418;
          result[4] += 4601750;
          result[5] += 6135667;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 325376;
          result[2] += 6832902;
          result[3] += 36767523;
          result[4] += 0;
          result[5] += 9761289;
        } else {
          result[0] += 6242685;
          result[1] += 624268;
          result[2] += 31837693;
          result[3] += 14358175;
          result[4] += 624268;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42de0000))) ) ) {
          result[0] += 5219578;
          result[1] += 0;
          result[2] += 32808777;
          result[3] += 7456540;
          result[4] += 0;
          result[5] += 8202194;
        } else {
          result[0] += 41607495;
          result[1] += 0;
          result[2] += 9395240;
          result[3] += 0;
          result[4] += 0;
          result[5] += 2684354;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 33554431;
          result[1] += 0;
          result[2] += 20132659;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 126620;
          result[1] += 0;
          result[2] += 50078406;
          result[3] += 3355443;
          result[4] += 0;
          result[5] += 126620;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 2236962;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50611268;
          result[5] += 838860;
        } else {
          result[0] += 8089835;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 22798627;
          result[5] += 22798627;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 77247;
          result[3] += 1931190;
          result[4] += 1853942;
          result[5] += 49824710;
        } else {
          result[0] += 0;
          result[1] += 2600229;
          result[2] += 1835456;
          result[3] += 19731153;
          result[4] += 2447274;
          result[5] += 27072977;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 8100157;
          result[1] += 13939806;
          result[2] += 0;
          result[3] += 3014012;
          result[4] += 25807478;
          result[5] += 2825636;
        } else {
          result[0] += 38741368;
          result[1] += 660990;
          result[2] += 1652475;
          result[3] += 4553487;
          result[4] += 3892497;
          result[5] += 4186271;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 53174565;
          result[2] += 0;
          result[3] += 128131;
          result[4] += 384394;
          result[5] += 0;
        } else {
          result[0] += 10737418;
          result[1] += 17895697;
          result[2] += 0;
          result[3] += 25053975;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 11930464;
          result[2] += 1988410;
          result[3] += 3976821;
          result[4] += 1988410;
          result[5] += 33802983;
        } else {
          result[0] += 0;
          result[1] += 350896;
          result[2] += 11228672;
          result[3] += 34738706;
          result[4] += 0;
          result[5] += 7368816;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 1032444;
          result[1] += 2064888;
          result[2] += 19616437;
          result[3] += 8775774;
          result[4] += 9291996;
          result[5] += 12905550;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 8947848;
          result[4] += 17895697;
          result[5] += 26843545;
        } else {
          result[0] += 13201743;
          result[1] += 1760232;
          result[2] += 34324533;
          result[3] += 4400581;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 838860;
          result[1] += 0;
          result[2] += 43480951;
          result[3] += 8108987;
          result[4] += 0;
          result[5] += 1258291;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52536653;
          result[3] += 1150437;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
          result[0] += 1337400;
          result[1] += 191057;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49674888;
          result[5] += 2483744;
        } else {
          result[0] += 30480413;
          result[1] += 692736;
          result[2] += 0;
          result[3] += 0;
          result[4] += 13508364;
          result[5] += 9005576;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 68917;
          result[3] += 2136456;
          result[4] += 1860784;
          result[5] += 49620931;
        } else {
          result[0] += 592137;
          result[1] += 789516;
          result[2] += 0;
          result[3] += 11447982;
          result[4] += 12632256;
          result[5] += 28225198;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425a0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 553475;
          result[1] += 20478581;
          result[2] += 0;
          result[3] += 0;
          result[4] += 32655034;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 8438289;
          result[1] += 366882;
          result[2] += 3057351;
          result[3] += 25192575;
          result[4] += 1712116;
          result[5] += 14919874;
        } else {
          result[0] += 40497091;
          result[1] += 927092;
          result[2] += 4298338;
          result[3] += 2402012;
          result[4] += 2612715;
          result[5] += 2949840;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1052688;
          result[3] += 2105376;
          result[4] += 7368816;
          result[5] += 43160210;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4601750;
          result[3] += 39881839;
          result[4] += 1533916;
          result[5] += 7669584;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 10737418;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 50785086;
          result[3] += 2902004;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 2236962;
          result[2] += 16404388;
          result[3] += 25352237;
          result[4] += 0;
          result[5] += 9693502;
        } else {
          result[0] += 2284557;
          result[1] += 571139;
          result[2] += 42264305;
          result[3] += 7995949;
          result[4] += 0;
          result[5] += 571139;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 4601750;
          result[1] += 0;
          result[2] += 36814005;
          result[3] += 9203501;
          result[4] += 0;
          result[5] += 3067833;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 51624846;
          result[3] += 1993502;
          result[4] += 0;
          result[5] += 68741;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
          result[0] += 1298881;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 47625645;
          result[5] += 4762564;
        } else {
          result[0] += 39320123;
          result[1] += 0;
          result[2] += 0;
          result[3] += 756156;
          result[4] += 12854655;
          result[5] += 756156;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 1383985;
          result[2] += 115332;
          result[3] += 3978957;
          result[4] += 3748293;
          result[5] += 44460523;
        } else {
          result[0] += 0;
          result[1] += 492542;
          result[2] += 0;
          result[3] += 34724219;
          result[4] += 1477626;
          result[5] += 16992703;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 22513941;
          result[2] += 0;
          result[3] += 1731841;
          result[4] += 29441308;
          result[5] += 0;
        } else {
          result[0] += 144709;
          result[1] += 53252963;
          result[2] += 0;
          result[3] += 0;
          result[4] += 289418;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 40529286;
          result[1] += 2233577;
          result[2] += 690378;
          result[3] += 1868083;
          result[4] += 7228670;
          result[5] += 1137094;
        } else {
          result[0] += 7521379;
          result[1] += 259357;
          result[2] += 10893032;
          result[3] += 12189822;
          result[4] += 5187158;
          result[5] += 17636339;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1626881;
          result[3] += 0;
          result[4] += 0;
          result[5] += 52060209;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1626881;
          result[3] += 19522578;
          result[4] += 0;
          result[5] += 32537631;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3355443;
          result[3] += 43620761;
          result[4] += 0;
          result[5] += 6710886;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 25623384;
          result[3] += 12201611;
          result[4] += 0;
          result[5] += 15862095;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 1883757;
          result[1] += 1412818;
          result[2] += 24017909;
          result[3] += 19308515;
          result[4] += 0;
          result[5] += 7064090;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 4880644;
          result[1] += 29283867;
          result[2] += 4880644;
          result[3] += 2440322;
          result[4] += 0;
          result[5] += 12201611;
        } else {
          result[0] += 1290837;
          result[1] += 0;
          result[2] += 49403858;
          result[3] += 2757697;
          result[4] += 0;
          result[5] += 234697;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c80000))) ) ) {
          result[0] += 0;
          result[1] += 994205;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49047466;
          result[5] += 3645419;
        } else {
          result[0] += 0;
          result[1] += 45210182;
          result[2] += 0;
          result[3] += 0;
          result[4] += 8476909;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42870000))) ) ) {
          result[0] += 387632;
          result[1] += 193816;
          result[2] += 516843;
          result[3] += 2390399;
          result[4] += 2325794;
          result[5] += 47872604;
        } else {
          result[0] += 9451266;
          result[1] += 389742;
          result[2] += 1461536;
          result[3] += 19389711;
          result[4] += 5261529;
          result[5] += 17733304;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42890000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425a0000))) ) ) {
          result[0] += 0;
          result[1] += 53294258;
          result[2] += 0;
          result[3] += 0;
          result[4] += 392832;
          result[5] += 0;
        } else {
          result[0] += 7255012;
          result[1] += 12575354;
          result[2] += 0;
          result[3] += 483667;
          result[4] += 29503716;
          result[5] += 3869339;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42970000))) ) ) {
          result[0] += 45080408;
          result[1] += 2093517;
          result[2] += 883929;
          result[3] += 1442200;
          result[4] += 2651788;
          result[5] += 1535246;
        } else {
          result[0] += 4793490;
          result[1] += 639132;
          result[2] += 16617432;
          result[3] += 16617432;
          result[4] += 1597830;
          result[5] += 13421772;
        }
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 2753184;
          result[2] += 0;
          result[3] += 15830808;
          result[4] += 1376592;
          result[5] += 33726506;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11092374;
          result[3] += 34164512;
          result[4] += 887389;
          result[5] += 7542814;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39114880;
          result[3] += 11120897;
          result[4] += 0;
          result[5] += 3451313;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 9761289;
          result[2] += 4880644;
          result[3] += 34164512;
          result[4] += 0;
          result[5] += 4880644;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39832357;
          result[3] += 9525129;
          result[4] += 0;
          result[5] += 4329604;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 15978300;
          result[1] += 639132;
          result[2] += 33234865;
          result[3] += 1278264;
          result[4] += 1278264;
          result[5] += 1278264;
        } else {
          result[0] += 283309;
          result[1] += 0;
          result[2] += 51633099;
          result[3] += 1770682;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42780000))) ) ) {
          result[0] += 0;
          result[1] += 703324;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51108235;
          result[5] += 1875531;
        } else {
          result[0] += 24275902;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 20074303;
          result[5] += 9336885;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 395727;
          result[2] += 131909;
          result[3] += 1978639;
          result[4] += 3165823;
          result[5] += 48014990;
        } else {
          result[0] += 539568;
          result[1] += 1079137;
          result[2] += 0;
          result[3] += 26978437;
          result[4] += 1618706;
          result[5] += 23471240;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
          result[0] += 40532520;
          result[1] += 2877562;
          result[2] += 0;
          result[3] += 1603213;
          result[4] += 7276121;
          result[5] += 1397673;
        } else {
          result[0] += 7148139;
          result[1] += 3345937;
          result[2] += 16273424;
          result[3] += 12014958;
          result[4] += 6083523;
          result[5] += 8821108;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42d00000))) ) ) {
          result[0] += 135573;
          result[1] += 53551517;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 53687091;
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
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3355443;
          result[4] += 0;
          result[5] += 50331647;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 4270564;
          result[2] += 3660483;
          result[3] += 37824996;
          result[4] += 0;
          result[5] += 7931047;
        } else {
          result[0] += 2213900;
          result[1] += 1106950;
          result[2] += 25459857;
          result[3] += 11622978;
          result[4] += 0;
          result[5] += 13283404;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 3253763;
          result[1] += 4067203;
          result[2] += 20336019;
          result[3] += 17082256;
          result[4] += 0;
          result[5] += 8947848;
        } else {
          result[0] += 6342778;
          result[1] += 0;
          result[2] += 41907645;
          result[3] += 4757084;
          result[4] += 453055;
          result[5] += 226527;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 44483589;
          result[3] += 7669584;
          result[4] += 0;
          result[5] += 1533916;
        } else {
          result[0] += 164180;
          result[1] += 0;
          result[2] += 52784097;
          result[3] += 656722;
          result[4] += 0;
          result[5] += 82090;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a50000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x423e0000))) ) ) {
          result[0] += 0;
          result[1] += 45791930;
          result[2] += 0;
          result[3] += 0;
          result[4] += 7895160;
          result[5] += 0;
        } else {
          result[0] += 465495;
          result[1] += 1241320;
          result[2] += 0;
          result[3] += 155165;
          result[4] += 48721811;
          result[5] += 3103300;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0;
          result[1] += 20132659;
          result[2] += 0;
          result[3] += 0;
          result[4] += 33554431;
          result[5] += 0;
        } else {
          result[0] += 122573;
          result[1] += 52951651;
          result[2] += 245146;
          result[3] += 0;
          result[4] += 122573;
          result[5] += 245146;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 2489522;
          result[1] += 108240;
          result[2] += 0;
          result[3] += 2435402;
          result[4] += 4221364;
          result[5] += 44432562;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 838860;
          result[3] += 32296140;
          result[4] += 2306867;
          result[5] += 18245222;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 44536868;
          result[1] += 1778005;
          result[2] += 433659;
          result[3] += 1647907;
          result[4] += 4553428;
          result[5] += 737221;
        } else {
          result[0] += 4781846;
          result[1] += 0;
          result[2] += 16845139;
          result[3] += 17823244;
          result[4] += 1956209;
          result[5] += 12280650;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1988410;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 15907286;
          result[5] += 35791394;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 1731841;
          result[2] += 5195524;
          result[3] += 38100516;
          result[4] += 0;
          result[5] += 8659208;
        } else {
          result[0] += 8388607;
          result[1] += 5033164;
          result[2] += 31876710;
          result[3] += 0;
          result[4] += 3355443;
          result[5] += 5033164;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6710886;
          result[3] += 23488102;
          result[4] += 0;
          result[5] += 23488102;
        } else {
          result[0] += 639132;
          result[1] += 0;
          result[2] += 42608802;
          result[3] += 9586980;
          result[4] += 0;
          result[5] += 852176;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 353204;
          result[1] += 0;
          result[2] += 48389022;
          result[3] += 4944863;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53242477;
          result[3] += 444613;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42850000))) ) ) {
          result[0] += 728784;
          result[1] += 971712;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50771955;
          result[5] += 1214640;
        } else {
          result[0] += 12052204;
          result[1] += 12052204;
          result[2] += 0;
          result[3] += 2739137;
          result[4] += 7669584;
          result[5] += 19173961;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1428648;
          result[4] += 2030184;
          result[5] += 50228258;
        } else {
          result[0] += 404676;
          result[1] += 134892;
          result[2] += 134892;
          result[3] += 20908289;
          result[4] += 4316550;
          result[5] += 27787790;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 33554431;
          result[2] += 0;
          result[3] += 4473924;
          result[4] += 15658734;
          result[5] += 0;
        } else {
          result[0] += 127220;
          result[1] += 53559870;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 40045632;
          result[1] += 2092248;
          result[2] += 251069;
          result[3] += 1422728;
          result[4] += 8578217;
          result[5] += 1297193;
        } else {
          result[0] += 6503942;
          result[1] += 1182535;
          result[2] += 13126139;
          result[3] += 13480899;
          result[4] += 5203154;
          result[5] += 14190420;
        }
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0;
          result[1] += 6710886;
          result[2] += 0;
          result[3] += 1342177;
          result[4] += 0;
          result[5] += 45634027;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 852176;
          result[3] += 31530513;
          result[4] += 0;
          result[5] += 21304401;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 3702558;
          result[1] += 5553837;
          result[2] += 13884592;
          result[3] += 5553837;
          result[4] += 1851279;
          result[5] += 23140987;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 48449326;
          result[3] += 5237764;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42910000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1209849;
          result[1] += 0;
          result[2] += 39622585;
          result[3] += 10888649;
          result[4] += 0;
          result[5] += 1966006;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26843545;
          result[3] += 6710886;
          result[4] += 0;
          result[5] += 20132659;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52160444;
          result[3] += 1526647;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 789516;
          result[1] += 197379;
          result[2] += 0;
          result[3] += 394758;
          result[4] += 50134268;
          result[5] += 2171169;
        } else {
          result[0] += 0;
          result[1] += 29669181;
          result[2] += 0;
          result[3] += 7064090;
          result[4] += 2825636;
          result[5] += 14128181;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 148923;
          result[1] += 0;
          result[2] += 74461;
          result[3] += 1340315;
          result[4] += 3052941;
          result[5] += 49070448;
        } else {
          result[0] += 5944591;
          result[1] += 371536;
          result[2] += 1207495;
          result[3] += 15511668;
          result[4] += 4644212;
          result[5] += 26007587;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 14540253;
          result[2] += 0;
          result[3] += 0;
          result[4] += 36909875;
          result[5] += 2236962;
        } else {
          result[0] += 246271;
          result[1] += 52209464;
          result[2] += 123135;
          result[3] += 123135;
          result[4] += 985084;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
          result[0] += 14972495;
          result[1] += 213892;
          result[2] += 4277855;
          result[3] += 15400281;
          result[4] += 7486247;
          result[5] += 11336318;
        } else {
          result[0] += 43772904;
          result[1] += 1726130;
          result[2] += 1947429;
          result[3] += 1681870;
          result[4] += 3053923;
          result[5] += 1504831;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42700000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 2825636;
          result[1] += 1883757;
          result[2] += 1883757;
          result[3] += 1883757;
          result[4] += 2825636;
          result[5] += 42384545;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3804597;
          result[3] += 38891436;
          result[4] += 0;
          result[5] += 10991058;
        } else {
          result[0] += 1193046;
          result[1] += 1193046;
          result[2] += 32808777;
          result[3] += 11930464;
          result[4] += 2386092;
          result[5] += 4175662;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3702558;
          result[3] += 20364069;
          result[4] += 0;
          result[5] += 29620464;
        } else {
          result[0] += 0;
          result[1] += 2176503;
          result[2] += 41353570;
          result[3] += 3627506;
          result[4] += 0;
          result[5] += 6529511;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 10737418;
          result[4] += 0;
          result[5] += 21474836;
        } else {
          result[0] += 462819;
          result[1] += 0;
          result[2] += 50579587;
          result[3] += 2247981;
          result[4] += 0;
          result[5] += 396702;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 891072;
          result[1] += 1336608;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49900034;
          result[5] += 1559376;
        } else {
          result[0] += 26388570;
          result[1] += 454975;
          result[2] += 0;
          result[3] += 0;
          result[4] += 15469161;
          result[5] += 11374383;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 55233;
          result[3] += 2982616;
          result[4] += 2264578;
          result[5] += 48384662;
        } else {
          result[0] += 150384;
          result[1] += 3007680;
          result[2] += 1654224;
          result[3] += 27369889;
          result[4] += 2255760;
          result[5] += 19249153;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42870000))) ) ) {
          result[0] += 4382619;
          result[1] += 21693967;
          result[2] += 219130;
          result[3] += 438261;
          result[4] += 25857456;
          result[5] += 1095654;
        } else {
          result[0] += 38310141;
          result[1] += 944530;
          result[2] += 3362527;
          result[3] += 4684869;
          result[4] += 2984715;
          result[5] += 3400308;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 53541990;
          result[2] += 0;
          result[3] += 0;
          result[4] += 145100;
          result[5] += 0;
        } else {
          result[0] += 9336885;
          result[1] += 28010656;
          result[2] += 9336885;
          result[3] += 0;
          result[4] += 7002664;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42bc0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 958698;
          result[1] += 0;
          result[2] += 3834792;
          result[3] += 14380470;
          result[4] += 2876094;
          result[5] += 31637035;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 45298483;
          result[3] += 3355443;
          result[4] += 0;
          result[5] += 5033164;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 391468;
          result[1] += 0;
          result[2] += 49660559;
          result[3] += 3411367;
          result[4] += 0;
          result[5] += 223696;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 641678;
          result[1] += 855571;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51975948;
          result[5] += 213892;
        } else {
          result[0] += 21474836;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 17179869;
          result[5] += 15032385;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 56691;
          result[1] += 226767;
          result[2] += 170075;
          result[3] += 2891279;
          result[4] += 2777895;
          result[5] += 47564381;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1012963;
          result[3] += 30996697;
          result[4] += 2025927;
          result[5] += 19651501;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 23488102;
          result[2] += 0;
          result[3] += 1677721;
          result[4] += 28521267;
          result[5] += 0;
        } else {
          result[0] += 574808;
          result[1] += 52652436;
          result[2] += 0;
          result[3] += 344884;
          result[4] += 114961;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 40957162;
          result[1] += 3448576;
          result[2] += 127725;
          result[3] += 1192100;
          result[4] += 6897152;
          result[5] += 1064375;
        } else {
          result[0] += 8462989;
          result[1] += 1190107;
          result[2] += 11768845;
          result[3] += 14810232;
          result[4] += 3438089;
          result[5] += 14016826;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12254662;
          result[3] += 36180431;
          result[4] += 0;
          result[5] += 5251998;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33965302;
          result[3] += 10956549;
          result[4] += 0;
          result[5] += 8765239;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42f40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 47721858;
          result[3] += 1988410;
          result[4] += 2982616;
          result[5] += 994205;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20648881;
          result[3] += 28908433;
          result[4] += 0;
          result[5] += 4129776;
        } else {
          result[0] += 483667;
          result[1] += 0;
          result[2] += 46432078;
          result[3] += 5320342;
          result[4] += 0;
          result[5] += 1451002;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42182714;
          result[3] += 7669584;
          result[4] += 0;
          result[5] += 3834792;
        } else {
          result[0] += 283309;
          result[1] += 0;
          result[2] += 51916408;
          result[3] += 1345718;
          result[4] += 0;
          result[5] += 141654;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42bc0000))) ) ) {
          result[0] += 652069;
          result[1] += 652069;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51513524;
          result[5] += 869426;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1479798;
          result[1] += 59191;
          result[2] += 0;
          result[3] += 2604445;
          result[4] += 1894142;
          result[5] += 47649513;
        } else {
          result[0] += 2070576;
          result[1] += 1774779;
          result[2] += 739491;
          result[3] += 24551121;
          result[4] += 2366373;
          result[5] += 22184748;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 40177210;
          result[1] += 1605522;
          result[2] += 234954;
          result[3] += 1057295;
          result[4] += 8301723;
          result[5] += 2310385;
        } else {
          result[0] += 9101742;
          result[1] += 1187183;
          result[2] += 12663294;
          result[3] += 16224845;
          result[4] += 2638186;
          result[5] += 11871838;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 4668442;
          result[1] += 3890368;
          result[2] += 778073;
          result[3] += 13227254;
          result[4] += 3112295;
          result[5] += 28010656;
        } else {
          result[0] += 2440322;
          result[1] += 17082256;
          result[2] += 31724190;
          result[3] += 0;
          result[4] += 0;
          result[5] += 2440322;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6573929;
          result[3] += 37252267;
          result[4] += 0;
          result[5] += 9860894;
        } else {
          result[0] += 894784;
          result[1] += 0;
          result[2] += 40265318;
          result[3] += 12526987;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 10737418;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 220934;
          result[1] += 0;
          result[2] += 44186906;
          result[3] += 8395512;
          result[4] += 0;
          result[5] += 883738;
        } else {
          result[0] += 89033;
          result[1] += 0;
          result[2] += 52084491;
          result[3] += 1335499;
          result[4] += 0;
          result[5] += 178066;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          result[0] += 1347793;
          result[1] += 449264;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50991505;
          result[5] += 898528;
        } else {
          result[0] += 44430696;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 8330755;
          result[5] += 925639;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3377279;
          result[4] += 3551965;
          result[5] += 46757846;
        } else {
          result[0] += 0;
          result[1] += 1216704;
          result[2] += 0;
          result[3] += 24334092;
          result[4] += 3650113;
          result[5] += 24486180;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 42217375;
          result[1] += 1896914;
          result[2] += 0;
          result[3] += 617600;
          result[4] += 8337600;
          result[5] += 617600;
        } else {
          result[0] += 10074955;
          result[1] += 690065;
          result[2] += 11455086;
          result[3] += 18217727;
          result[4] += 1656157;
          result[5] += 11593099;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 3834792;
          result[2] += 1533916;
          result[3] += 3834792;
          result[4] += 2300875;
          result[5] += 42182714;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11302545;
          result[3] += 31647127;
          result[4] += 0;
          result[5] += 10737418;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42d50000))) ) ) {
          result[0] += 2847042;
          result[1] += 406720;
          result[2] += 35791394;
          result[3] += 6914246;
          result[4] += 406720;
          result[5] += 7320966;
        } else {
          result[0] += 0;
          result[1] += 44739242;
          result[2] += 8947848;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42910000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42940000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 303316;
          result[1] += 0;
          result[2] += 49622644;
          result[3] += 3518476;
          result[4] += 0;
          result[5] += 242653;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42850000))) ) ) {
          result[0] += 735439;
          result[1] += 490293;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51971065;
          result[5] += 490293;
        } else {
          result[0] += 23280243;
          result[1] += 2375535;
          result[2] += 0;
          result[3] += 1425321;
          result[4] += 8076819;
          result[5] += 18529173;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0;
          result[1] += 328027;
          result[2] += 109342;
          result[3] += 3717639;
          result[4] += 4100337;
          result[5] += 45431744;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 31848274;
          result[4] += 227487;
          result[5] += 21611329;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 6710886;
          result[1] += 18119393;
          result[2] += 0;
          result[3] += 1789569;
          result[4] += 25277672;
          result[5] += 1789569;
        } else {
          result[0] += 36318749;
          result[1] += 791033;
          result[2] += 4161523;
          result[3] += 5606019;
          result[4] += 2682634;
          result[5] += 4127130;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 8947848;
          result[2] += 0;
          result[3] += 44739242;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 277452;
          result[1] += 53409638;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3253763;
          result[4] += 1626881;
          result[5] += 48806446;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42cf0000))) ) ) {
          result[0] += 0;
          result[1] += 3904515;
          result[2] += 12201611;
          result[3] += 26355481;
          result[4] += 0;
          result[5] += 11225482;
        } else {
          result[0] += 7669584;
          result[1] += 0;
          result[2] += 44483589;
          result[3] += 1533916;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 23860929;
          result[3] += 20281790;
          result[4] += 1193046;
          result[5] += 8351325;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 51622203;
          result[3] += 0;
          result[4] += 0;
          result[5] += 2064888;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 35791394;
          result[1] += 0;
          result[2] += 17895697;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 65552;
          result[1] += 0;
          result[2] += 51327219;
          result[3] += 1966560;
          result[4] += 0;
          result[5] += 327760;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 438261;
          result[2] += 438261;
          result[3] += 438261;
          result[4] += 49742733;
          result[5] += 2629571;
        } else {
          result[0] += 29745550;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1088251;
          result[4] += 11245269;
          result[5] += 11608019;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 672957;
          result[4] += 3065697;
          result[5] += 49948435;
        } else {
          result[0] += 254039;
          result[1] += 338719;
          result[2] += 254039;
          result[3] += 19137669;
          result[4] += 5842916;
          result[5] += 27859705;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 1084587;
          result[1] += 21691754;
          result[2] += 1626881;
          result[3] += 1084587;
          result[4] += 27656986;
          result[5] += 542293;
        } else {
          result[0] += 0;
          result[1] += 53431438;
          result[2] += 0;
          result[3] += 0;
          result[4] += 255652;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          result[0] += 44350205;
          result[1] += 2191309;
          result[2] += 142911;
          result[3] += 1714938;
          result[4] += 3525150;
          result[5] += 1762575;
        } else {
          result[0] += 10574730;
          result[1] += 2440322;
          result[2] += 13665805;
          result[3] += 10574730;
          result[4] += 4392580;
          result[5] += 12038923;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6316128;
          result[3] += 43160210;
          result[4] += 0;
          result[5] += 4210752;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 44255575;
          result[3] += 6529511;
          result[4] += 0;
          result[5] += 2902004;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32212254;
          result[3] += 13421772;
          result[4] += 0;
          result[5] += 8053063;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 6710886;
          result[4] += 0;
          result[5] += 46976204;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 400649;
          result[1] += 0;
          result[2] += 41667593;
          result[3] += 10416898;
          result[4] += 0;
          result[5] += 1201949;
        } else {
          result[0] += 663622;
          result[1] += 0;
          result[2] += 50899875;
          result[3] += 1990868;
          result[4] += 0;
          result[5] += 132724;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42850000))) ) ) {
          result[0] += 1934669;
          result[1] += 5199425;
          result[2] += 0;
          result[3] += 241833;
          result[4] += 43046406;
          result[5] += 3264755;
        } else {
          result[0] += 46038930;
          result[1] += 749819;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4198990;
          result[5] += 2699350;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 231909;
          result[1] += 115954;
          result[2] += 57977;
          result[3] += 3536622;
          result[4] += 4406283;
          result[5] += 45338342;
        } else {
          result[0] += 6087470;
          result[1] += 2273633;
          result[2] += 1026802;
          result[3] += 19655929;
          result[4] += 6454185;
          result[5] += 18189069;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 11930464;
          result[2] += 0;
          result[3] += 29826161;
          result[4] += 11930464;
          result[5] += 0;
        } else {
          result[0] += 125437;
          result[1] += 53561654;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 32212254;
          result[1] += 10737418;
          result[2] += 0;
          result[3] += 0;
          result[4] += 10737418;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428e0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42970000))) ) ) {
          result[0] += 12389328;
          result[1] += 0;
          result[2] += 16519104;
          result[3] += 24778657;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 52312572;
          result[1] += 0;
          result[2] += 565978;
          result[3] += 80854;
          result[4] += 485124;
          result[5] += 242562;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 589968;
          result[1] += 0;
          result[2] += 28318465;
          result[3] += 19468945;
          result[4] += 0;
          result[5] += 5309712;
        } else {
          result[0] += 39768215;
          result[1] += 0;
          result[2] += 10936259;
          result[3] += 0;
          result[4] += 2982616;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39791608;
          result[3] += 9895267;
          result[4] += 0;
          result[5] += 4000214;
        } else {
          result[0] += 434127;
          result[1] += 0;
          result[2] += 51009972;
          result[3] += 1953573;
          result[4] += 0;
          result[5] += 289418;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 2326994;
          result[1] += 3822919;
          result[2] += 0;
          result[3] += 0;
          result[4] += 45376395;
          result[5] += 2160780;
        } else {
          result[0] += 32808777;
          result[1] += 2982616;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9942053;
          result[5] += 7953643;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2950740;
          result[4] += 901615;
          result[5] += 49834735;
        } else {
          result[0] += 1734506;
          result[1] += 165191;
          result[2] += 1321528;
          result[3] += 19657734;
          result[4] += 6029473;
          result[5] += 24778657;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 26843545;
          result[2] += 0;
          result[3] += 0;
          result[4] += 26843545;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53288424;
          result[2] += 0;
          result[3] += 0;
          result[4] += 398666;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
          result[0] += 41552337;
          result[1] += 2696611;
          result[2] += 449435;
          result[3] += 1103159;
          result[4] += 5311508;
          result[5] += 2574038;
        } else {
          result[0] += 5449441;
          result[1] += 1614649;
          result[2] += 16953818;
          result[3] += 17761142;
          result[4] += 2220142;
          result[5] += 9687896;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ca0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0;
          result[1] += 11302545;
          result[2] += 0;
          result[3] += 4238454;
          result[4] += 2825636;
          result[5] += 35320454;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11632203;
          result[3] += 26843545;
          result[4] += 0;
          result[5] += 15211342;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 22369621;
          result[1] += 8947848;
          result[2] += 11184810;
          result[3] += 0;
          result[4] += 4473924;
          result[5] += 6710886;
        } else {
          result[0] += 2147483;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 8589934;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c20000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 35791394;
          result[1] += 0;
          result[2] += 17895697;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 238344;
          result[1] += 0;
          result[2] += 49813993;
          result[3] += 3277236;
          result[4] += 0;
          result[5] += 357516;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42850000))) ) ) {
          result[0] += 1983513;
          result[1] += 7140647;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42447182;
          result[5] += 2115747;
        } else {
          result[0] += 43809596;
          result[1] += 1626881;
          result[2] += 0;
          result[3] += 0;
          result[4] += 5229262;
          result[5] += 3021351;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 423209;
          result[1] += 181375;
          result[2] += 120916;
          result[3] += 3506589;
          result[4] += 3869339;
          result[5] += 45585660;
        } else {
          result[0] += 5404342;
          result[1] += 1662874;
          result[2] += 3503914;
          result[3] += 19598163;
          result[4] += 6235779;
          result[5] += 17282017;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42900000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42d60000))) ) ) {
          result[0] += 118253;
          result[1] += 53450584;
          result[2] += 0;
          result[3] += 0;
          result[4] += 118253;
          result[5] += 0;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 53687091;
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
          result[4] += 53687091;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b60000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42930000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33554431;
          result[3] += 16777215;
          result[4] += 0;
          result[5] += 3355443;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 52384458;
          result[1] += 0;
          result[2] += 651316;
          result[3] += 0;
          result[4] += 651316;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42e30000))) ) ) {
          result[0] += 4668442;
          result[1] += 0;
          result[2] += 38514652;
          result[3] += 5835553;
          result[4] += 0;
          result[5] += 4668442;
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37526181;
          result[3] += 13695686;
          result[4] += 0;
          result[5] += 2465223;
        } else {
          result[0] += 514984;
          result[1] += 0;
          result[2] += 50790305;
          result[3] += 2059936;
          result[4] += 0;
          result[5] += 321865;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 1184274;
          result[1] += 0;
          result[2] += 197379;
          result[3] += 789516;
          result[4] += 43620761;
          result[5] += 7895160;
        } else {
          result[0] += 25863854;
          result[1] += 391876;
          result[2] += 0;
          result[3] += 783753;
          result[4] += 26647607;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 214963;
          result[1] += 376185;
          result[2] += 0;
          result[3] += 3331931;
          result[4] += 3815599;
          result[5] += 45948411;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 621858;
          result[3] += 33580342;
          result[4] += 207286;
          result[5] += 19277604;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 11087551;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42599539;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53459603;
          result[2] += 0;
          result[3] += 0;
          result[4] += 227487;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 45473425;
          result[1] += 1193046;
          result[2] += 871841;
          result[3] += 1651910;
          result[4] += 3487366;
          result[5] += 1009500;
        } else {
          result[0] += 5696243;
          result[1] += 569624;
          result[2] += 17658353;
          result[3] += 14383013;
          result[4] += 5126618;
          result[5] += 10253237;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4994148;
          result[3] += 8739759;
          result[4] += 1872805;
          result[5] += 38080378;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21091357;
          result[3] += 30678337;
          result[4] += 0;
          result[5] += 1917396;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 45097156;
          result[3] += 0;
          result[4] += 0;
          result[5] += 8589934;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42810000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 26843545;
          result[2] += 26843545;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 2783775;
          result[1] += 0;
          result[2] += 39569374;
          result[3] += 9345530;
          result[4] += 0;
          result[5] += 1988410;
        } else {
          result[0] += 173184;
          result[1] += 0;
          result[2] += 52561394;
          result[3] += 952512;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x423c0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 43925801;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9761289;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42300000))) ) ) {
          result[0] += 0;
          result[1] += 49557314;
          result[2] += 0;
          result[3] += 1376592;
          result[4] += 2753184;
          result[5] += 0;
        } else {
          result[0] += 8947848;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 44739242;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 386238;
          result[1] += 2703666;
          result[2] += 0;
          result[3] += 386238;
          result[4] += 48665996;
          result[5] += 1544952;
        } else {
          result[0] += 2982616;
          result[1] += 863388;
          result[2] += 274714;
          result[3] += 8084459;
          result[4] += 4316944;
          result[5] += 37164967;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 42448247;
          result[1] += 2636805;
          result[2] += 216131;
          result[3] += 1210336;
          result[4] += 5489742;
          result[5] += 1685826;
        } else {
          result[0] += 9501127;
          result[1] += 686828;
          result[2] += 13049740;
          result[3] += 16369411;
          result[4] += 2747313;
          result[5] += 11332669;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4880644;
          result[3] += 19522578;
          result[4] += 0;
          result[5] += 29283867;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 526344;
          result[2] += 16843009;
          result[3] += 20527417;
          result[4] += 1052688;
          result[5] += 14737632;
        } else {
          result[0] += 0;
          result[1] += 11184810;
          result[2] += 42502280;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 21474836;
          result[4] += 0;
          result[5] += 21474836;
        } else {
          result[0] += 1331084;
          result[1] += 0;
          result[2] += 43703954;
          result[3] += 7542814;
          result[4] += 0;
          result[5] += 1109237;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26843545;
          result[3] += 0;
          result[4] += 0;
          result[5] += 26843545;
        } else {
          result[0] += 85082;
          result[1] += 0;
          result[2] += 52155605;
          result[3] += 1361320;
          result[4] += 0;
          result[5] += 85082;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
          result[0] += 1268199;
          result[1] += 211366;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50305227;
          result[5] += 1902298;
        } else {
          result[0] += 12884901;
          result[1] += 2147483;
          result[2] += 0;
          result[3] += 4831838;
          result[4] += 16642998;
          result[5] += 17179869;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42950000))) ) ) {
          result[0] += 390248;
          result[1] += 167249;
          result[2] += 111499;
          result[3] += 3344990;
          result[4] += 3289240;
          result[5] += 46383862;
        } else {
          result[0] += 0;
          result[1] += 291777;
          result[2] += 875333;
          result[3] += 28594211;
          result[4] += 0;
          result[5] += 23925768;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 41682767;
          result[1] += 3284570;
          result[2] += 391020;
          result[3] += 1329469;
          result[4] += 6373631;
          result[5] += 625632;
        } else {
          result[0] += 8277745;
          result[1] += 827774;
          result[2] += 12416618;
          result[3] += 14308674;
          result[4] += 2719830;
          result[5] += 15136448;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 10737418;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53546180;
          result[2] += 140911;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1731841;
          result[3] += 0;
          result[4] += 0;
          result[5] += 51955249;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 1704352;
          result[2] += 5113056;
          result[3] += 35791394;
          result[4] += 852176;
          result[5] += 10226112;
        } else {
          result[0] += 6710886;
          result[1] += 3355443;
          result[2] += 26364196;
          result[3] += 6710886;
          result[4] += 1438047;
          result[5] += 9107631;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8259552;
          result[3] += 41297762;
          result[4] += 0;
          result[5] += 4129776;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36207573;
          result[3] += 13733907;
          result[4] += 0;
          result[5] += 3745611;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 29283867;
          result[3] += 14641933;
          result[4] += 9761289;
          result[5] += 0;
        } else {
          result[0] += 129210;
          result[1] += 0;
          result[2] += 51748929;
          result[3] += 1744345;
          result[4] += 0;
          result[5] += 64605;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42870000))) ) ) {
          result[0] += 717422;
          result[1] += 2510977;
          result[2] += 0;
          result[3] += 0;
          result[4] += 48904276;
          result[5] += 1554414;
        } else {
          result[0] += 0;
          result[1] += 31814572;
          result[2] += 0;
          result[3] += 0;
          result[4] += 7953643;
          result[5] += 13918875;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42560000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 14316557;
          result[1] += 14316557;
          result[2] += 0;
          result[3] += 0;
          result[4] += 25053975;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1130881;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3630723;
          result[4] += 3035522;
          result[5] += 45889963;
        } else {
          result[0] += 5564208;
          result[1] += 0;
          result[2] += 1654224;
          result[3] += 23459905;
          result[4] += 3158064;
          result[5] += 19850689;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
          result[0] += 8064584;
          result[1] += 5530000;
          result[2] += 921666;
          result[3] += 17281252;
          result[4] += 2765000;
          result[5] += 19124586;
        } else {
          result[0] += 39360037;
          result[1] += 708480;
          result[2] += 4447684;
          result[3] += 3424323;
          result[4] += 3936003;
          result[5] += 1810561;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1342177;
          result[3] += 20132659;
          result[4] += 1342177;
          result[5] += 30870077;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 13421772;
          result[3] += 32370157;
          result[4] += 0;
          result[5] += 7895160;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d60000))) ) ) {
          result[0] += 0;
          result[1] += 941878;
          result[2] += 37675151;
          result[3] += 8476909;
          result[4] += 0;
          result[5] += 6593151;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42eb0000))) ) ) {
          result[0] += 2403899;
          result[1] += 2403899;
          result[2] += 32853294;
          result[3] += 4006499;
          result[4] += 1602599;
          result[5] += 10416898;
        } else {
          result[0] += 42015984;
          result[1] += 0;
          result[2] += 9336885;
          result[3] += 2334221;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 712660;
          result[1] += 0;
          result[2] += 45135165;
          result[3] += 6889051;
          result[4] += 0;
          result[5] += 950214;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52686145;
          result[3] += 1000945;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 3112295;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 43961168;
          result[5] += 6613627;
        } else {
          result[0] += 32494818;
          result[1] += 9889727;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9889727;
          result[5] += 1412818;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 61286;
          result[2] += 0;
          result[3] += 2267605;
          result[4] += 2390178;
          result[5] += 48968020;
        } else {
          result[0] += 184491;
          result[1] += 368983;
          result[2] += 553475;
          result[3] += 28227233;
          result[4] += 1106950;
          result[5] += 23245957;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0;
          result[1] += 20229918;
          result[2] += 0;
          result[3] += 1167110;
          result[4] += 30733914;
          result[5] += 1556147;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 44800009;
          result[1] += 1686266;
          result[2] += 136724;
          result[3] += 1549542;
          result[4] += 4375178;
          result[5] += 1139369;
        } else {
          result[0] += 10817548;
          result[1] += 2704387;
          result[2] += 13221447;
          result[3] += 13021122;
          result[4] += 3505686;
          result[5] += 10416898;
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 6710886;
          result[5] += 46976204;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12526987;
          result[3] += 28633115;
          result[4] += 0;
          result[5] += 12526987;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12389328;
          result[3] += 0;
          result[4] += 16519104;
          result[5] += 24778657;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42460000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 10737418;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28208471;
          result[3] += 15469161;
          result[4] += 0;
          result[5] += 10009457;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1402274;
          result[1] += 0;
          result[2] += 43670842;
          result[3] += 8012998;
          result[4] += 0;
          result[5] += 600974;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52702827;
          result[3] += 984263;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42810000))) ) ) {
          result[0] += 1073741;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51969104;
          result[5] += 644245;
        } else {
          result[0] += 26180741;
          result[1] += 331401;
          result[2] += 0;
          result[3] += 2319812;
          result[4] += 9610652;
          result[5] += 15244482;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2118266;
          result[4] += 2191309;
          result[5] += 49377515;
        } else {
          result[0] += 0;
          result[1] += 821741;
          result[2] += 91304;
          result[3] += 21913098;
          result[4] += 6300015;
          result[5] += 24560931;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 16617432;
          result[2] += 0;
          result[3] += 0;
          result[4] += 37069658;
          result[5] += 0;
        } else {
          result[0] += 130308;
          result[1] += 53426474;
          result[2] += 0;
          result[3] += 130308;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 43357642;
          result[1] += 2343656;
          result[2] += 390609;
          result[3] += 781218;
          result[4] += 5685536;
          result[5] += 1128427;
        } else {
          result[0] += 6841335;
          result[1] += 1739322;
          result[2] += 16465587;
          result[3] += 16813451;
          result[4] += 3942464;
          result[5] += 7884929;
        }
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 1789569;
          result[2] += 8947848;
          result[3] += 17895697;
          result[4] += 0;
          result[5] += 25053975;
        } else {
          result[0] += 0;
          result[1] += 1376592;
          result[2] += 25466953;
          result[3] += 24090361;
          result[4] += 0;
          result[5] += 2753184;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 53687091;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 15339168;
          result[3] += 0;
          result[4] += 2556528;
          result[5] += 35791394;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 46017506;
          result[3] += 3834792;
          result[4] += 0;
          result[5] += 3834792;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 40265318;
          result[1] += 0;
          result[2] += 13421772;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 146087;
          result[1] += 0;
          result[2] += 50911432;
          result[3] += 2264353;
          result[4] += 0;
          result[5] += 365218;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c60000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 400649;
          result[1] += 1068399;
          result[2] += 0;
          result[3] += 0;
          result[4] += 48077992;
          result[5] += 4140049;
        } else {
          result[0] += 0;
          result[1] += 48180722;
          result[2] += 0;
          result[3] += 0;
          result[4] += 5506368;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 53304522;
          result[2] += 0;
          result[3] += 0;
          result[4] += 382568;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 13421772;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40265318;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428d0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 222153;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1777227;
          result[4] += 1925330;
          result[5] += 49762379;
        } else {
          result[0] += 2040737;
          result[1] += 470939;
          result[2] += 4395434;
          result[3] += 20407373;
          result[4] += 3453555;
          result[5] += 22919050;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 43855856;
          result[1] += 1025867;
          result[2] += 384700;
          result[3] += 1966246;
          result[4] += 3077603;
          result[5] += 3376815;
        } else {
          result[0] += 5495529;
          result[1] += 317049;
          result[2] += 11202424;
          result[3] += 17437736;
          result[4] += 2853447;
          result[5] += 16380903;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1579032;
          result[3] += 1579032;
          result[4] += 9474192;
          result[5] += 41054834;
        } else {
          result[0] += 8388607;
          result[1] += 6710886;
          result[2] += 15099494;
          result[3] += 10066329;
          result[4] += 0;
          result[5] += 13421772;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 1594666;
          result[1] += 0;
          result[2] += 17541326;
          result[3] += 32956432;
          result[4] += 531555;
          result[5] += 1063110;
        } else {
          result[0] += 19451844;
          result[1] += 778073;
          result[2] += 31901025;
          result[3] += 778073;
          result[4] += 0;
          result[5] += 778073;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7669584;
          result[3] += 23008753;
          result[4] += 0;
          result[5] += 23008753;
        } else {
          result[0] += 0;
          result[1] += 1731841;
          result[2] += 39399397;
          result[3] += 9092168;
          result[4] += 0;
          result[5] += 3463683;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
          result[0] += 9474192;
          result[1] += 0;
          result[2] += 34738706;
          result[3] += 0;
          result[4] += 0;
          result[5] += 9474192;
        } else {
          result[0] += 149546;
          result[1] += 0;
          result[2] += 51294351;
          result[3] += 2168420;
          result[4] += 0;
          result[5] += 74773;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 759722;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50648199;
          result[5] += 2279168;
        } else {
          result[0] += 0;
          result[1] += 44291850;
          result[2] += 0;
          result[3] += 8053063;
          result[4] += 1342177;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 73043;
          result[3] += 1533916;
          result[4] += 2483484;
          result[5] += 49596646;
        } else {
          result[0] += 6005267;
          result[1] += 480421;
          result[2] += 0;
          result[3] += 20057593;
          result[4] += 3843371;
          result[5] += 23300437;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 789516;
          result[1] += 14606046;
          result[2] += 789516;
          result[3] += 789516;
          result[4] += 35528222;
          result[5] += 1184274;
        } else {
          result[0] += 0;
          result[1] += 53154216;
          result[2] += 133218;
          result[3] += 0;
          result[4] += 399655;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
          result[0] += 41291319;
          result[1] += 1256328;
          result[2] += 837552;
          result[3] += 1507593;
          result[4] += 5527844;
          result[5] += 3266453;
        } else {
          result[0] += 11245269;
          result[1] += 1813753;
          result[2] += 10882518;
          result[3] += 14691399;
          result[4] += 2357879;
          result[5] += 12696271;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 865920;
          result[3] += 1731841;
          result[4] += 6061445;
          result[5] += 45027882;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26843545;
          result[3] += 26843545;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7500402;
          result[3] += 35922980;
          result[4] += 0;
          result[5] += 10263708;
        } else {
          result[0] += 617093;
          result[1] += 0;
          result[2] += 30854650;
          result[3] += 13576046;
          result[4] += 2468372;
          result[5] += 6170930;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e50000))) ) ) {
          result[0] += 6194664;
          result[1] += 10324440;
          result[2] += 30973321;
          result[3] += 6194664;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 46684427;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2334221;
          result[4] += 4668442;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 3834792;
          result[1] += 15339168;
          result[2] += 7669584;
          result[3] += 15339168;
          result[4] += 0;
          result[5] += 11504376;
        } else {
          result[0] += 524629;
          result[1] += 116584;
          result[2] += 49431762;
          result[3] += 2972900;
          result[4] += 0;
          result[5] += 641213;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42300000))) ) ) {
          result[0] += 0;
          result[1] += 49213166;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4473924;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 325376;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52060209;
          result[5] += 1301505;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 53562815;
          result[2] += 0;
          result[3] += 0;
          result[4] += 124275;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 32212254;
          result[2] += 0;
          result[3] += 0;
          result[4] += 21474836;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1092469;
          result[4] += 858369;
          result[5] += 51736252;
        } else {
          result[0] += 3660483;
          result[1] += 1783312;
          result[2] += 2158746;
          result[3] += 17269973;
          result[4] += 4223634;
          result[5] += 24590940;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 41756626;
          result[1] += 1168017;
          result[2] += 83429;
          result[3] += 2377749;
          result[4] += 5548083;
          result[5] += 2753184;
        } else {
          result[0] += 9544371;
          result[1] += 1855850;
          result[2] += 12195586;
          result[3] += 15244482;
          result[4] += 2783775;
          result[5] += 12063025;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ac0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 53687091;
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 18191493;
          result[3] += 28396477;
          result[4] += 0;
          result[5] += 7099119;
        } else {
          result[0] += 4473924;
          result[1] += 0;
          result[2] += 47721858;
          result[3] += 1491308;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428d0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 14641933;
          result[2] += 0;
          result[3] += 0;
          result[4] += 29283867;
          result[5] += 9761289;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 906111;
          result[1] += 0;
          result[2] += 43946395;
          result[3] += 7248889;
          result[4] += 226527;
          result[5] += 1359166;
        } else {
          result[0] += 254843;
          result[1] += 0;
          result[2] += 51563392;
          result[3] += 1868854;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 403662;
          result[1] += 605493;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51870610;
          result[5] += 807324;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 994205;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2222341;
          result[4] += 3275029;
          result[5] += 47195514;
        } else {
          result[0] += 3549559;
          result[1] += 739491;
          result[2] += 887389;
          result[3] += 25882206;
          result[4] += 3253763;
          result[5] += 19374680;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 39717076;
          result[1] += 2355409;
          result[2] += 162442;
          result[3] += 934041;
          result[4] += 8446985;
          result[5] += 2071135;
        } else {
          result[0] += 8737085;
          result[1] += 3103964;
          result[2] += 12530819;
          result[3] += 14600129;
          result[4] += 1724424;
          result[5] += 12990666;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cf0000))) ) ) {
          result[0] += 4880644;
          result[1] += 0;
          result[2] += 1220161;
          result[3] += 0;
          result[4] += 6100805;
          result[5] += 41485479;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8541128;
          result[3] += 32944351;
          result[4] += 0;
          result[5] += 12201611;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34070654;
          result[3] += 15486660;
          result[4] += 0;
          result[5] += 4129776;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42db0000))) ) ) {
          result[0] += 1220161;
          result[1] += 0;
          result[2] += 43925801;
          result[3] += 3660483;
          result[4] += 0;
          result[5] += 4880644;
        } else {
          result[0] += 35791394;
          result[1] += 8947848;
          result[2] += 8947848;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32212254;
          result[3] += 18790481;
          result[4] += 0;
          result[5] += 2684354;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 51876631;
          result[3] += 1740826;
          result[4] += 0;
          result[5] += 69633;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 416179;
          result[1] += 1040447;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49317211;
          result[5] += 2913253;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 69095;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1727383;
          result[4] += 1520097;
          result[5] += 50370514;
        } else {
          result[0] += 5514371;
          result[1] += 104044;
          result[2] += 1872805;
          result[3] += 18311876;
          result[4] += 5722461;
          result[5] += 22161531;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42950000))) ) ) {
          result[0] += 39023828;
          result[1] += 3792897;
          result[2] += 351918;
          result[3] += 1759591;
          result[4] += 5943509;
          result[5] += 2815346;
        } else {
          result[0] += 6350086;
          result[1] += 2742082;
          result[2] += 15875215;
          result[3] += 18184337;
          result[4] += 2020481;
          result[5] += 8514888;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 3702558;
          result[1] += 35174301;
          result[2] += 0;
          result[3] += 3702558;
          result[4] += 7405116;
          result[5] += 3702558;
        } else {
          result[0] += 0;
          result[1] += 53387998;
          result[2] += 0;
          result[3] += 0;
          result[4] += 299092;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2025927;
          result[3] += 0;
          result[4] += 4051855;
          result[5] += 47609307;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32212254;
          result[3] += 17895697;
          result[4] += 0;
          result[5] += 3579139;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 3097332;
          result[2] += 17551549;
          result[3] += 22197547;
          result[4] += 2581110;
          result[5] += 8259552;
        } else {
          result[0] += 19707919;
          result[1] += 1359166;
          result[2] += 30581254;
          result[3] += 679583;
          result[4] += 0;
          result[5] += 1359166;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 24891287;
          result[3] += 23427094;
          result[4] += 0;
          result[5] += 5368709;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 50933907;
          result[3] += 2753184;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 47107790;
          result[3] += 6316128;
          result[4] += 0;
          result[5] += 263172;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52654647;
          result[3] += 1032444;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 208089;
          result[2] += 0;
          result[3] += 1040447;
          result[4] += 49733390;
          result[5] += 2705163;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 10737418;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1938550;
          result[1] += 107697;
          result[2] += 0;
          result[3] += 2153945;
          result[4] += 4361739;
          result[5] += 45125157;
        } else {
          result[0] += 4813325;
          result[1] += 1974697;
          result[2] += 1234186;
          result[3] += 26411580;
          result[4] += 3579139;
          result[5] += 15674162;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 7535030;
          result[2] += 0;
          result[3] += 0;
          result[4] += 43326424;
          result[5] += 2825636;
        } else {
          result[0] += 0;
          result[1] += 53321042;
          result[2] += 0;
          result[3] += 366048;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 43274782;
          result[1] += 2372424;
          result[2] += 615073;
          result[3] += 1142278;
          result[4] += 3954041;
          result[5] += 2328490;
        } else {
          result[0] += 7822976;
          result[1] += 460175;
          result[2] += 13498468;
          result[3] += 15799343;
          result[4] += 3221225;
          result[5] += 12884901;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5280697;
          result[3] += 42245579;
          result[4] += 0;
          result[5] += 6160813;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 3928323;
          result[2] += 17022736;
          result[3] += 22260501;
          result[4] += 2618882;
          result[5] += 7856647;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 43460978;
          result[3] += 5113056;
          result[4] += 0;
          result[5] += 5113056;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4294967;
          result[3] += 2147483;
          result[4] += 0;
          result[5] += 47244640;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33802983;
          result[3] += 1988410;
          result[4] += 1988410;
          result[5] += 15907286;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 229432;
          result[1] += 0;
          result[2] += 44509810;
          result[3] += 8718416;
          result[4] += 0;
          result[5] += 229432;
        } else {
          result[0] += 252843;
          result[1] += 0;
          result[2] += 52085749;
          result[3] += 1179936;
          result[4] += 0;
          result[5] += 168562;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49278006;
          result[5] += 4409084;
        } else {
          result[0] += 19362557;
          result[1] += 0;
          result[2] += 0;
          result[3] += 440058;
          result[4] += 22442964;
          result[5] += 11441511;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 1245488;
          result[2] += 131104;
          result[3] += 1901008;
          result[4] += 3080944;
          result[5] += 47328546;
        } else {
          result[0] += 205697;
          result[1] += 205697;
          result[2] += 205697;
          result[3] += 31266045;
          result[4] += 205697;
          result[5] += 21598255;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 0;
          result[1] += 52316887;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1370204;
          result[5] += 0;
        } else {
          result[0] += 492542;
          result[1] += 10343384;
          result[2] += 1477626;
          result[3] += 0;
          result[4] += 40388453;
          result[5] += 985084;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 43320763;
          result[1] += 1452092;
          result[2] += 484030;
          result[3] += 1452092;
          result[4] += 3952918;
          result[5] += 3025192;
        } else {
          result[0] += 9956515;
          result[1] += 780903;
          result[2] += 11908772;
          result[3] += 15813288;
          result[4] += 2733161;
          result[5] += 12494450;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3896643;
          result[3] += 15586574;
          result[4] += 432960;
          result[5] += 33770912;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26843545;
          result[3] += 0;
          result[4] += 0;
          result[5] += 26843545;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 28716351;
          result[1] += 4994148;
          result[2] += 3745611;
          result[3] += 7491222;
          result[4] += 2497074;
          result[5] += 6242685;
        } else {
          result[0] += 4753544;
          result[1] += 0;
          result[2] += 31597090;
          result[3] += 13421772;
          result[4] += 279620;
          result[5] += 3635063;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 394758;
          result[1] += 0;
          result[2] += 44805035;
          result[3] += 7697781;
          result[4] += 0;
          result[5] += 789516;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52641238;
          result[3] += 1045852;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 399160;
          result[1] += 5588247;
          result[2] += 0;
          result[3] += 0;
          result[4] += 47300522;
          result[5] += 399160;
        } else {
          result[0] += 26843545;
          result[1] += 1184274;
          result[2] += 0;
          result[3] += 4342338;
          result[4] += 9868950;
          result[5] += 11447982;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 310330;
          result[1] += 155165;
          result[2] += 155165;
          result[3] += 4034290;
          result[4] += 4292898;
          result[5] += 44739242;
        } else {
          result[0] += 222768;
          result[1] += 0;
          result[2] += 1113840;
          result[3] += 32969665;
          result[4] += 0;
          result[5] += 19380817;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 134217;
          result[1] += 52479131;
          result[2] += 0;
          result[3] += 134217;
          result[4] += 939524;
          result[5] += 0;
        } else {
          result[0] += 39045157;
          result[1] += 4880644;
          result[2] += 0;
          result[3] += 9761289;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
          result[0] += 42093991;
          result[1] += 2852270;
          result[2] += 414039;
          result[3] += 1150109;
          result[4] += 5796549;
          result[5] += 1380130;
        } else {
          result[0] += 11302545;
          result[1] += 982830;
          result[2] += 10074007;
          result[3] += 12899644;
          result[4] += 2702782;
          result[5] += 15725280;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ca0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1988410;
          result[3] += 42750831;
          result[4] += 0;
          result[5] += 8947848;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 24159191;
          result[3] += 10737418;
          result[4] += 2684354;
          result[5] += 16106127;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 1220161;
          result[1] += 0;
          result[2] += 35384673;
          result[3] += 12201611;
          result[4] += 0;
          result[5] += 4880644;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28208471;
          result[3] += 19108964;
          result[4] += 0;
          result[5] += 6369654;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42df0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 48304580;
          result[3] += 5244497;
          result[4] += 0;
          result[5] += 138013;
        } else {
          result[0] += 1344763;
          result[1] += 0;
          result[2] += 50894121;
          result[3] += 1137876;
          result[4] += 0;
          result[5] += 310330;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 206488;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52035180;
          result[5] += 1445421;
        } else {
          result[0] += 0;
          result[1] += 12632256;
          result[2] += 6316128;
          result[3] += 0;
          result[4] += 15790320;
          result[5] += 18948385;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 2083870;
          result[1] += 54838;
          result[2] += 54838;
          result[3] += 2138709;
          result[4] += 3345160;
          result[5] += 46009672;
        } else {
          result[0] += 3945821;
          result[1] += 717422;
          result[2] += 239140;
          result[3] += 24631493;
          result[4] += 2630547;
          result[5] += 21522664;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 10737418;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 52815143;
          result[2] += 0;
          result[3] += 0;
          result[4] += 871948;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42dd0000))) ) ) {
          result[0] += 28369767;
          result[1] += 2034962;
          result[2] += 5805627;
          result[3] += 6104886;
          result[4] += 5805627;
          result[5] += 5566220;
        } else {
          result[0] += 50101976;
          result[1] += 0;
          result[2] += 1792557;
          result[3] += 0;
          result[4] += 1613301;
          result[5] += 179255;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c40000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42890000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 10737418;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 852176;
          result[2] += 6817408;
          result[3] += 32382689;
          result[4] += 852176;
          result[5] += 12782640;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28733936;
          result[3] += 24196998;
          result[4] += 0;
          result[5] += 756156;
        } else {
          result[0] += 4210752;
          result[1] += 0;
          result[2] += 48423650;
          result[3] += 1052688;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ed0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42780000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 239942;
          result[1] += 0;
          result[2] += 49488100;
          result[3] += 3119249;
          result[4] += 0;
          result[5] += 839798;
        }
      } else {
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 662803;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52582418;
          result[5] += 441869;
        } else {
          result[0] += 33973862;
          result[1] += 838860;
          result[2] += 0;
          result[3] += 2936012;
          result[4] += 8388607;
          result[5] += 7549747;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 941878;
          result[1] += 1883757;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38617030;
          result[5] += 12244424;
        } else {
          result[0] += 213892;
          result[1] += 160419;
          result[2] += 0;
          result[3] += 3475757;
          result[4] += 2352820;
          result[5] += 47484200;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 8541128;
          result[2] += 0;
          result[3] += 0;
          result[4] += 45145963;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 52643497;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1043593;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 10535862;
          result[1] += 732929;
          result[2] += 3939496;
          result[3] += 20796876;
          result[4] += 3481415;
          result[5] += 14200510;
        } else {
          result[0] += 39409567;
          result[1] += 1891659;
          result[2] += 4458911;
          result[3] += 2387093;
          result[4] += 3197804;
          result[5] += 2342054;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 8947848;
          result[1] += 0;
          result[2] += 0;
          result[3] += 7158278;
          result[4] += 5368709;
          result[5] += 32212254;
        } else {
          result[0] += 403662;
          result[1] += 403662;
          result[2] += 17357480;
          result[3] += 30678337;
          result[4] += 0;
          result[5] += 4843948;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 16953818;
          result[1] += 5651272;
          result[2] += 18837575;
          result[3] += 2825636;
          result[4] += 0;
          result[5] += 9418787;
        } else {
          result[0] += 1325607;
          result[1] += 0;
          result[2] += 42419430;
          result[3] += 7732708;
          result[4] += 0;
          result[5] += 2209345;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 48858093;
          result[3] += 4828997;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53332330;
          result[3] += 354760;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52646643;
          result[5] += 1040447;
        } else {
          result[0] += 7669584;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 46017506;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 2211620;
          result[1] += 165871;
          result[2] += 0;
          result[3] += 1990458;
          result[4] += 3593883;
          result[5] += 45725256;
        } else {
          result[0] += 4199624;
          result[1] += 1021530;
          result[2] += 227006;
          result[3] += 23154686;
          result[4] += 2270067;
          result[5] += 22814176;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0;
          result[1] += 53433251;
          result[2] += 0;
          result[3] += 0;
          result[4] += 253839;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 42480132;
          result[1] += 2524887;
          result[2] += 354370;
          result[3] += 1107406;
          result[4] += 6334368;
          result[5] += 885925;
        } else {
          result[0] += 8947848;
          result[1] += 2516582;
          result[2] += 15379114;
          result[3] += 12582911;
          result[4] += 5312785;
          result[5] += 8947848;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bc0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 37580963;
          result[4] += 0;
          result[5] += 16106127;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12526987;
          result[3] += 14316557;
          result[4] += 0;
          result[5] += 26843545;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34824059;
          result[3] += 5804009;
          result[4] += 0;
          result[5] += 13059022;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 1451002;
          result[2] += 17412029;
          result[3] += 21765036;
          result[4] += 0;
          result[5] += 13059022;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 47975698;
          result[3] += 5711392;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 16106127;
          result[2] += 10737418;
          result[3] += 0;
          result[4] += 5368709;
          result[5] += 21474836;
        } else {
          result[0] += 423686;
          result[1] += 60526;
          result[2] += 50418654;
          result[3] += 2542117;
          result[4] += 0;
          result[5] += 242106;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428b0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 272523;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51779428;
          result[5] += 1635139;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 9166088;
          result[2] += 0;
          result[3] += 0;
          result[4] += 35354913;
          result[5] += 9166088;
        } else {
          result[0] += 652730;
          result[1] += 0;
          result[2] += 108788;
          result[3] += 3861989;
          result[4] += 1414249;
          result[5] += 47649333;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 15138354;
          result[1] += 2487015;
          result[2] += 810983;
          result[3] += 12489142;
          result[4] += 8812684;
          result[5] += 13948911;
        } else {
          result[0] += 41087059;
          result[1] += 3535977;
          result[2] += 2739137;
          result[3] += 1245062;
          result[4] += 4631632;
          result[5] += 448222;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42740000))) ) ) {
          result[0] += 388099;
          result[1] += 52652159;
          result[2] += 129366;
          result[3] += 129366;
          result[4] += 388099;
          result[5] += 0;
        } else {
          result[0] += 35791394;
          result[1] += 0;
          result[2] += 17895697;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11142603;
          result[3] += 33934293;
          result[4] += 0;
          result[5] += 8610193;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 40265318;
          result[4] += 0;
          result[5] += 13421772;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 43848022;
          result[3] += 7914033;
          result[4] += 0;
          result[5] += 1925035;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38347922;
          result[3] += 3834792;
          result[4] += 0;
          result[5] += 11504376;
        } else {
          result[0] += 38347922;
          result[1] += 0;
          result[2] += 11504376;
          result[3] += 0;
          result[4] += 3834792;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 23860929;
          result[3] += 0;
          result[4] += 0;
          result[5] += 29826161;
        } else {
          result[0] += 394758;
          result[1] += 0;
          result[2] += 52029107;
          result[3] += 1263225;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b00000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42420000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
          result[0] += 1079912;
          result[1] += 5245290;
          result[2] += 0;
          result[3] += 0;
          result[4] += 44430696;
          result[5] += 2931191;
        } else {
          result[0] += 41253067;
          result[1] += 929646;
          result[2] += 0;
          result[3] += 813440;
          result[4] += 5229262;
          result[5] += 5461673;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 225892;
          result[3] += 2560113;
          result[4] += 1957734;
          result[5] += 48943351;
        } else {
          result[0] += 5424056;
          result[1] += 2324595;
          result[2] += 996255;
          result[3] += 16327517;
          result[4] += 7361219;
          result[5] += 21253446;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3355443;
          result[3] += 36909875;
          result[4] += 0;
          result[5] += 13421772;
        } else {
          result[0] += 51689803;
          result[1] += 0;
          result[2] += 878806;
          result[3] += 399457;
          result[4] += 639132;
          result[5] += 79891;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42dd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39681763;
          result[3] += 7002664;
          result[4] += 0;
          result[5] += 7002664;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 18991351;
          result[3] += 24834844;
          result[4] += 0;
          result[5] += 9860894;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 50331647;
          result[3] += 3355443;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 5726623;
          result[1] += 0;
          result[2] += 39012619;
          result[3] += 5726623;
          result[4] += 715827;
          result[5] += 2505397;
        } else {
          result[0] += 390451;
          result[1] += 0;
          result[2] += 50693629;
          result[3] += 2147483;
          result[4] += 0;
          result[5] += 455526;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 205697;
          result[1] += 0;
          result[2] += 0;
          result[3] += 205697;
          result[4] += 51013021;
          result[5] += 2262674;
        } else {
          result[0] += 0;
          result[1] += 10737418;
          result[2] += 16106127;
          result[3] += 0;
          result[4] += 21474836;
          result[5] += 5368709;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 2056976;
          result[1] += 102848;
          result[2] += 0;
          result[3] += 1645581;
          result[4] += 3548284;
          result[5] += 46333399;
        } else {
          result[0] += 1771851;
          result[1] += 531555;
          result[2] += 354370;
          result[3] += 29589914;
          result[4] += 1594666;
          result[5] += 19844733;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 39356606;
          result[1] += 3927304;
          result[2] += 417798;
          result[3] += 1462294;
          result[4] += 7227911;
          result[5] += 1295174;
        } else {
          result[0] += 10037151;
          result[1] += 2217510;
          result[2] += 11787817;
          result[3] += 14588883;
          result[4] += 1750666;
          result[5] += 13305061;
        }
      } else {
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1988410;
          result[3] += 9942053;
          result[4] += 3976821;
          result[5] += 37779804;
        } else {
          result[0] += 0;
          result[1] += 4880644;
          result[2] += 14641933;
          result[3] += 25100458;
          result[4] += 0;
          result[5] += 9064054;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 2618882;
          result[1] += 0;
          result[2] += 27498266;
          result[3] += 23569942;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 2403899;
          result[1] += 0;
          result[2] += 39263693;
          result[3] += 9615598;
          result[4] += 0;
          result[5] += 2403899;
        } else {
          result[0] += 69996;
          result[1] += 0;
          result[2] += 51097231;
          result[3] += 2169882;
          result[4] += 0;
          result[5] += 349981;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 1394469;
          result[1] += 232411;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50433328;
          result[5] += 1626881;
        } else {
          result[0] += 25130127;
          result[1] += 0;
          result[2] += 380759;
          result[3] += 1523038;
          result[4] += 17134178;
          result[5] += 9518987;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 147898;
          result[3] += 1848729;
          result[4] += 1478983;
          result[5] += 50211480;
        } else {
          result[0] += 94187;
          result[1] += 565127;
          result[2] += 376751;
          result[3] += 19967830;
          result[4] += 5180333;
          result[5] += 27502860;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 10737418;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53230179;
          result[2] += 0;
          result[3] += 0;
          result[4] += 456911;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 44169637;
          result[1] += 1990013;
          result[2] += 735439;
          result[3] += 1168051;
          result[4] += 4801988;
          result[5] += 821961;
        } else {
          result[0] += 7758250;
          result[1] += 1551650;
          result[2] += 12413200;
          result[3] += 13964850;
          result[4] += 6051435;
          result[5] += 11947705;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9911462;
          result[3] += 37167986;
          result[4] += 825955;
          result[5] += 5781686;
        } else {
          result[0] += 2876094;
          result[1] += 0;
          result[2] += 24926149;
          result[3] += 15339168;
          result[4] += 0;
          result[5] += 10545678;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28422577;
          result[3] += 22106449;
          result[4] += 0;
          result[5] += 3158064;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 50785086;
          result[3] += 2902004;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37580963;
          result[3] += 16106127;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 44739242;
          result[3] += 7456540;
          result[4] += 0;
          result[5] += 1491308;
        } else {
          result[0] += 434713;
          result[1] += 0;
          result[2] += 51658429;
          result[3] += 1449044;
          result[4] += 0;
          result[5] += 144904;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
          result[0] += 870601;
          result[1] += 580400;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50494885;
          result[5] += 1741202;
        } else {
          result[0] += 16452495;
          result[1] += 1731841;
          result[2] += 0;
          result[3] += 3463683;
          result[4] += 16885456;
          result[5] += 15153614;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 56099;
          result[1] += 56099;
          result[2] += 0;
          result[3] += 2692769;
          result[4] += 3422061;
          result[5] += 47460061;
        } else {
          result[0] += 1073741;
          result[1] += 858993;
          result[2] += 0;
          result[3] += 30494267;
          result[4] += 214748;
          result[5] += 21045339;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 9256395;
          result[2] += 0;
          result[3] += 0;
          result[4] += 44430696;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53336957;
          result[2] += 0;
          result[3] += 0;
          result[4] += 350133;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 10952166;
          result[1] += 7086696;
          result[2] += 1288490;
          result[3] += 1932735;
          result[4] += 29205777;
          result[5] += 3221225;
        } else {
          result[0] += 40099617;
          result[1] += 787079;
          result[2] += 3106891;
          result[3] += 4183947;
          result[4] += 2444088;
          result[5] += 3065466;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 3539808;
          result[2] += 0;
          result[3] += 3539808;
          result[4] += 12979296;
          result[5] += 33628177;
        } else {
          result[0] += 265777;
          result[1] += 0;
          result[2] += 17541326;
          result[3] += 27640878;
          result[4] += 0;
          result[5] += 8239108;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e10000))) ) ) {
          result[0] += 10905190;
          result[1] += 4194303;
          result[2] += 37748735;
          result[3] += 838860;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 44521002;
          result[1] += 0;
          result[2] += 7856647;
          result[3] += 0;
          result[4] += 1309441;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 19522578;
          result[3] += 4880644;
          result[4] += 0;
          result[5] += 29283867;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39527858;
          result[3] += 13569264;
          result[4] += 0;
          result[5] += 589968;
        } else {
          result[0] += 71774;
          result[1] += 0;
          result[2] += 51246768;
          result[3] += 2081451;
          result[4] += 0;
          result[5] += 287096;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 187717;
          result[1] += 4505210;
          result[2] += 0;
          result[3] += 0;
          result[4] += 47680143;
          result[5] += 1314019;
        } else {
          result[0] += 20424436;
          result[1] += 2334221;
          result[2] += 0;
          result[3] += 4668442;
          result[4] += 9920440;
          result[5] += 16339549;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 450206;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3770477;
          result[4] += 4220683;
          result[5] += 45245724;
        } else {
          result[0] += 249707;
          result[1] += 0;
          result[2] += 1997659;
          result[3] += 31463132;
          result[4] += 249707;
          result[5] += 19726884;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 353204;
          result[1] += 51450129;
          result[2] += 0;
          result[3] += 117734;
          result[4] += 1766022;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 40583369;
          result[1] += 1865902;
          result[2] += 381661;
          result[3] += 1993122;
          result[4] += 5512892;
          result[5] += 3350142;
        } else {
          result[0] += 11706207;
          result[1] += 538216;
          result[2] += 11840761;
          result[3] += 13051748;
          result[4] += 3094744;
          result[5] += 13455411;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 14005328;
          result[4] += 2334221;
          result[5] += 37347541;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7953643;
          result[3] += 35791394;
          result[4] += 0;
          result[5] += 9942053;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6316128;
          result[3] += 22106449;
          result[4] += 0;
          result[5] += 25264513;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40265318;
          result[3] += 8202194;
          result[4] += 0;
          result[5] += 5219578;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35590318;
          result[3] += 13874192;
          result[4] += 0;
          result[5] += 4222580;
        } else {
          result[0] += 3097332;
          result[1] += 0;
          result[2] += 50589759;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42910000))) ) ) {
          result[0] += 20132659;
          result[1] += 0;
          result[2] += 33554431;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 50586031;
          result[3] += 2713426;
          result[4] += 0;
          result[5] += 387632;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
          result[0] += 0;
          result[1] += 175448;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49827234;
          result[5] += 3684408;
        } else {
          result[0] += 14849620;
          result[1] += 2284557;
          result[2] += 0;
          result[3] += 0;
          result[4] += 36552913;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1360072;
          result[4] += 1002159;
          result[5] += 51324859;
        } else {
          result[0] += 4298338;
          result[1] += 252843;
          result[2] += 421405;
          result[3] += 20817443;
          result[4] += 3876932;
          result[5] += 24020127;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 124564;
          result[1] += 53562527;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 41761375;
          result[1] += 2821136;
          result[2] += 641167;
          result[3] += 1496057;
          result[4] += 6112463;
          result[5] += 854889;
        } else {
          result[0] += 7787942;
          result[1] += 994205;
          result[2] += 10936259;
          result[3] += 15078781;
          result[4] += 4639625;
          result[5] += 14250277;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7354396;
          result[3] += 38242859;
          result[4] += 735439;
          result[5] += 7354396;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 29080507;
          result[3] += 11184810;
          result[4] += 0;
          result[5] += 13421772;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17895697;
          result[3] += 0;
          result[4] += 0;
          result[5] += 35791394;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ca0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33201227;
          result[3] += 17660227;
          result[4] += 0;
          result[5] += 2825636;
        } else {
          result[0] += 2191309;
          result[1] += 0;
          result[2] += 45652288;
          result[3] += 5478274;
          result[4] += 0;
          result[5] += 365218;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 3834792;
          result[1] += 0;
          result[2] += 45132554;
          result[3] += 4424760;
          result[4] += 0;
          result[5] += 294984;
        } else {
          result[0] += 199951;
          result[1] += 0;
          result[2] += 52587355;
          result[3] += 799807;
          result[4] += 0;
          result[5] += 99975;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          result[0] += 218240;
          result[1] += 1527681;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50631728;
          result[5] += 1309441;
        } else {
          result[0] += 20878313;
          result[1] += 994205;
          result[2] += 0;
          result[3] += 2485513;
          result[4] += 9942053;
          result[5] += 19387005;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42870000))) ) ) {
          result[0] += 142029;
          result[1] += 0;
          result[2] += 71014;
          result[3] += 1846381;
          result[4] += 3266674;
          result[5] += 48360990;
        } else {
          result[0] += 656321;
          result[1] += 525057;
          result[2] += 525057;
          result[3] += 25202742;
          result[4] += 2362757;
          result[5] += 24415156;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 3383640;
          result[1] += 18271657;
          result[2] += 451152;
          result[3] += 2706912;
          result[4] += 27971425;
          result[5] += 902304;
        } else {
          result[0] += 36251733;
          result[1] += 794085;
          result[2] += 4177580;
          result[3] += 4557360;
          result[4] += 3418020;
          result[5] += 4488309;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ca0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4294967;
          result[3] += 2147483;
          result[4] += 2147483;
          result[5] += 45097156;
        } else {
          result[0] += 0;
          result[1] += 536870;
          result[2] += 11274289;
          result[3] += 32212254;
          result[4] += 0;
          result[5] += 9663676;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1095654;
          result[1] += 0;
          result[2] += 43826196;
          result[3] += 8765239;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 1731841;
          result[2] += 12122891;
          result[3] += 12122891;
          result[4] += 8659208;
          result[5] += 19050258;
        } else {
          result[0] += 0;
          result[1] += 1579032;
          result[2] += 44212898;
          result[3] += 0;
          result[4] += 0;
          result[5] += 7895160;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
          result[0] += 30678337;
          result[1] += 15339168;
          result[2] += 7669584;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 126174;
          result[1] += 0;
          result[2] += 51037434;
          result[3] += 2460395;
          result[4] += 0;
          result[5] += 63087;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42810000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53458635;
          result[5] += 228455;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 25053975;
          result[5] += 28633115;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 76151;
          result[3] += 1370734;
          result[4] += 2208405;
          result[5] += 50031799;
        } else {
          result[0] += 6279191;
          result[1] += 2825636;
          result[2] += 1962247;
          result[3] += 13264792;
          result[4] += 4473924;
          result[5] += 24881298;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
          result[0] += 0;
          result[1] += 52664479;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1022611;
          result[5] += 0;
        } else {
          result[0] += 447392;
          result[1] += 18790481;
          result[2] += 894784;
          result[3] += 4473924;
          result[4] += 27290938;
          result[5] += 1789569;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 13854733;
          result[1] += 11083786;
          result[2] += 0;
          result[3] += 2424578;
          result[4] += 23899414;
          result[5] += 2424578;
        } else {
          result[0] += 43845922;
          result[1] += 43933;
          result[2] += 2328490;
          result[3] += 2767828;
          result[4] += 1537682;
          result[5] += 3163232;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1677721;
          result[5] += 52009369;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 5368709;
          result[4] += 21474836;
          result[5] += 26843545;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 1359166;
          result[2] += 3397917;
          result[3] += 42134172;
          result[4] += 0;
          result[5] += 6795834;
        } else {
          result[0] += 0;
          result[1] += 1651910;
          result[2] += 19822925;
          result[3] += 9911462;
          result[4] += 0;
          result[5] += 22300791;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 2236962;
          result[1] += 15658734;
          result[2] += 0;
          result[3] += 0;
          result[4] += 35791394;
          result[5] += 0;
        } else {
          result[0] += 14060904;
          result[1] += 0;
          result[2] += 17895697;
          result[3] += 2556528;
          result[4] += 0;
          result[5] += 19173961;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1425321;
          result[1] += 0;
          result[2] += 40542464;
          result[3] += 9185402;
          result[4] += 0;
          result[5] += 2533904;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52184801;
          result[3] += 1106950;
          result[4] += 0;
          result[5] += 395339;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428b0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 3673327;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50013763;
          result[5] += 0;
        } else {
          result[0] += 10157017;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 14510024;
          result[5] += 29020049;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 186846;
          result[2] += 249128;
          result[3] += 3051818;
          result[4] += 3238664;
          result[5] += 46960634;
        } else {
          result[0] += 0;
          result[1] += 4255684;
          result[2] += 982080;
          result[3] += 22260501;
          result[4] += 1636801;
          result[5] += 24552023;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 10737418;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 347114;
          result[1] += 52761451;
          result[2] += 0;
          result[3] += 0;
          result[4] += 578524;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 37345993;
          result[1] += 1281654;
          result[2] += 391616;
          result[3] += 2492106;
          result[4] += 8935981;
          result[5] += 3239738;
        } else {
          result[0] += 5503705;
          result[1] += 830748;
          result[2] += 10799724;
          result[3] += 18587987;
          result[4] += 3634522;
          result[5] += 14330403;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26843545;
          result[3] += 5368709;
          result[4] += 21474836;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3355443;
          result[5] += 50331647;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42960000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5113056;
          result[3] += 43460978;
          result[4] += 0;
          result[5] += 5113056;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 825955;
          result[2] += 25604612;
          result[3] += 12389328;
          result[4] += 0;
          result[5] += 14867194;
        } else {
          result[0] += 22106449;
          result[1] += 25264513;
          result[2] += 6316128;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 3554197;
          result[1] += 561189;
          result[2] += 39657363;
          result[3] += 8791962;
          result[4] += 187063;
          result[5] += 935315;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 51829712;
          result[3] += 1857378;
          result[4] += 0;
          result[5] += 0;
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
